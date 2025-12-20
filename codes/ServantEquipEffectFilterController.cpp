void ServantEquipEffectFilterController___ctor(ServantEquipEffectFilterController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  _QWORD *v12; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
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
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_Dictionary_int__int__o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7

  if ( (byte_4D27704 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
    sub_1C94098(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    byte_4D27704 = 1;
  }
  this->fields.WIDGET_HEIGHT_ADD_VALUE = 12;
  v3 = (System_Collections_Generic_List_T__o *)sub_1C942E4(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_384FDE8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v3 )
    goto LABEL_39;
  v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
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
      *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
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
  v17 = *p_size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 2;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      9,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 9;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 3;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      8,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 8;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 5;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 6;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      10,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 10;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      7,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_39;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 7;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 < LODWORD(items->max_length) )
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 11;
    ++*p_version;
    goto LABEL_35;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v3,
    11,
    *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  items = v3->fields._items;
  v12 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v3->fields._version;
  if ( !items )
LABEL_39:
    sub_1C942F0(v4, v5);
LABEL_35:
  v26 = *p_size;
  if ( (unsigned int)v26 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 4;
  }
  this->fields.DisplayGroupOrder = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.DisplayGroupOrder, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v27;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.containerList, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v34,
    (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v34;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.defaultFilterData,
    (int32_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *DisplayGroupOrder; // x20
  System_Func_T__TResult__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1

  if ( (byte_4D276F9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_FunctionCategoryEntity_GroupType___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_FunctionCategoryEntity_GroupType___);
    sub_1C94098(&System_Func_FunctionCategoryEntity_GroupType__bool__TypeInfo);
    sub_1C94098(&Method_ServantEquipEffectFilterController___c__DisplayClass17_0__Init_b__0__);
    sub_1C94098(&ServantEquipEffectFilterController___c__DisplayClass17_0_TypeInfo);
    byte_4D276F9 = 1;
  }
  v9 = sub_1C942E4(ServantEquipEffectFilterController___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C942F0(v10, v11);
  *(_DWORD *)(v9 + 16) = categoryFlag;
  this->fields.sort = sort;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)sort, v12, v13, v14, v15, v16, v17);
  this->fields.onClickEvent = onclickEvent;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClickEvent,
    (int32_t)onclickEvent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  DisplayGroupOrder = this->fields.DisplayGroupOrder;
  this->fields.categoryFlag = *(_DWORD *)(v9 + 16);
  v25 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_FunctionCategoryEntity_GroupType__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v25,
    (Il2CppObject *)v9,
    Method_ServantEquipEffectFilterController___c__DisplayClass17_0__Init_b__0__,
    0);
  v26 = System_Linq_Enumerable__Where_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)DisplayGroupOrder,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_31E36F4 *)Method_System_Linq_Enumerable_Where_FunctionCategoryEntity_GroupType___);
  v27 = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                                        v26,
                                                                                        (const MethodInfo_31E1358 *)Method_System_Linq_Enumerable_ToList_FunctionCategoryEntity_GroupType___);
  this->fields.displayGroups = v27;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.displayGroups, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  ServantEquipEffectFilterController__SetupLabelObject(this, v34);
  ServantEquipEffectFilterController__SetDefaultFilterData(this, v35);
  ServantEquipEffectFilterController__RefreshContainers(this, v36);
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

  if ( (byte_4D276FD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4D276FD = 1;
  }
  memset(&v11, 0, 32);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_1C942F0(0, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v10,
    defaultFilterData,
    (const MethodInfo_34AC1F4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v11.fields._dictionary = v10[0];
  v11.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v10[1];
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
           &v11,
           (const MethodInfo_360E630 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    if ( !v5 )
      break;
    sort = this->fields.sort;
    if ( !sort )
      sub_1C942F0(0, v4);
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
    (const MethodInfo_360E730 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
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
          sub_1C942F8(cateforyIdList);
        if ( !sort )
          sub_1C942F0(cateforyIdList, sort);
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

  if ( (byte_4D27701 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    byte_4D27701 = 1;
  }
  ActionExtensions__Call(this->fields.onClickEvent, 0);
  v3 = Method_ServantEquipEffectFilterController_OnClick_Category__;
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_Category__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_ServantEquipEffectFilterController_OnClick_Category__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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

  if ( (byte_4D27703 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_1C94098(&Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
    byte_4D27703 = 1;
  }
  v3 = Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__;
  memset(&v8, 0, sizeof(v8));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C942F0(0, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C942F0(0, v7);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
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

  if ( (byte_4D27702 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_1C94098(&Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
    byte_4D27702 = 1;
  }
  v3 = Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__;
  memset(&v8, 0, sizeof(v8));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C942F0(0, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C942F0(0, v7);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0);
}


void ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x1
  long double v11; // q0
  __int64 v12; // x0
  __int64 v13; // x0
  DataManager_o *MasterData_object; // x0
  FunctionCategoryMaster_o *v15; // x28
  Il2CppObject *v16; // x24
  Il2CppObject *v17; // x20
  int32_t current; // w25
  Il2CppObject *containerPrefab; // x24
  _BOOL8 v20; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x26
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  FunctionCategoryEntity_array *EntitiesByGroupType; // x26
  _BOOL8 v32; // x0
  __int64 v33; // x1
  FunctionCategoryMaster_o *v34; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  Il2CppObject *v38; // x10
  float x; // s10
  float v40; // s8
  float v41; // s9
  ListViewSort_o *sort; // x27
  System_Action_o *v43; // x28
  const MethodInfo *v44; // x6
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_List_object__o *v52; // x0
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x8
  UIWidget_o *v57; // x21
  float v58; // s0
  int v59; // w8
  UnityEngine_GameObject_o *v60; // x0
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-A0h] BYREF
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o **p_containerList; // [xsp+48h] [xbp-78h]
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D276FE & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C94098(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__);
    sub_1C94098(&FunctionCategoryEntity_GroupType_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&StringLiteral_4684/*"Container_"*/);
    byte_4D276FE = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v3;
  p_containerList = &this->fields.containerList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.containerList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C6A12C(v11);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C6A12C(v11);
  MasterData_object = **(DataManager_o ***)(v13 + 184);
  if ( !MasterData_object )
    goto LABEL_44;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !this->fields.displayGroups )
    goto LABEL_44;
  v15 = (FunctionCategoryMaster_o *)MasterData_object;
  System_Collections_Generic_List_Int32Enum___GetEnumerator(
    &v61,
    (System_Collections_Generic_List_T__o *)this->fields.displayGroups,
    (const MethodInfo_3851110 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v16 = 0;
  v62 = v61;
LABEL_10:
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
            &v62,
            (const MethodInfo_35E8F64 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    current = (int32_t)v62.fields._current;
    containerPrefab = (Il2CppObject *)this->fields.containerPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__Instantiate_object_(
            containerPrefab,
            (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
    if ( v20 )
    {
      if ( !v16 )
        sub_1C942F0(v20, v21);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
      if ( !gameObject )
        sub_1C942F0(0, v23);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
      if ( !transform )
        sub_1C942F0(0, v25);
      UnityEngine_Transform__SetParent_72134412(transform, this->fields.containerHolder, 0, 0);
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
      LODWORD(v61.fields._current) = current;
      v61.fields._list = (struct System_Collections_Generic_List_T__o *)FunctionCategoryEntity_GroupType_TypeInfo;
      *(_QWORD *)&v61.fields._index = -1;
      v27 = System_Enum__ToString((System_Enum_o *)&v61, 0);
      v28 = System_String__Concat_64417744((System_String_o *)StringLiteral_4684/*"Container_"*/, v27, 0);
      if ( !v26 )
        sub_1C942F0(v28, v28);
      UnityEngine_Object__set_name(v26, v28, 0);
      if ( !v15 )
        sub_1C942F0(v29, v30);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(v15, current, this->fields.categoryFlag, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v32 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0, 0);
      if ( v32 )
      {
        if ( !byte_4D25F19 )
        {
          sub_1C94098(&UnityEngine_Vector3_TypeInfo);
          byte_4D25F19 = 1;
        }
        v34 = v15;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        p_y = &static_fields->zeroVector.fields.y;
        p_z = &static_fields->zeroVector.fields.z;
      }
      else
      {
        if ( !v17 )
          sub_1C942F0(v32, v33);
        v38 = v17;
        v34 = v15;
        static_fields = (struct UnityEngine_Vector3_StaticFields *)&v38[5].monitor;
        p_y = (float *)&v38[5].monitor + 1;
        p_z = (float *)&v38[6];
      }
      x = static_fields->zeroVector.fields.x;
      v40 = *p_z;
      v41 = *p_y;
      sort = this->fields.sort;
      v43 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        v43,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantEquipEffectFilterController_OnClick_Category__,
        0);
      v64.fields.x = x;
      v64.fields.y = v41;
      v64.fields.z = v40;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v16,
        EntitiesByGroupType,
        current,
        sort,
        v64,
        v43,
        this->fields.categoryFlag,
        v44);
      v52 = (System_Collections_Generic_List_object__o *)*p_containerList;
      if ( !*p_containerList )
        sub_1C942F0(0, v45);
      items = v52->fields._items;
      v54 = Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__;
      ++v52->fields._version;
      if ( !items )
        sub_1C942F0(v52, v45);
      size = v52->fields._size;
      v15 = v34;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          v16,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v52->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v56 + 4), (int32_t)v16, v46, v47, v48, v49, v50, v51);
      }
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
    &v62,
    (const MethodInfo_35E8F60 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_object = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerHolder )
    goto LABEL_44;
  v57 = (UIWidget_o *)MasterData_object;
  MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)this->fields.containerHolder,
                                         0);
  if ( !MasterData_object )
    goto LABEL_44;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)MasterData_object, 0);
  if ( !v17 || !v57 )
    goto LABEL_44;
  v58 = fabsf(localPosition.fields.y + *((float *)&v17[5].monitor + 1));
  v59 = (int)v58;
  if ( v58 == INFINITY )
    v59 = 0x80000000;
  UIWidget__set_height(v57, v59 + this->fields.WIDGET_HEIGHT_ADD_VALUE, 0);
  MasterData_object = (DataManager_o *)this->fields.lineSprite;
  if ( !MasterData_object
    || (MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)MasterData_object,
                                               0)) == 0
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_object, 0),
        (MasterData_object = (DataManager_o *)this->fields.lineSprite) == 0)
    || (v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_object, 0),
        GameObjectExtensions__SetLocalPosition(v60, *(UnityEngine_Vector3_o *)&v17[5].monitor, 0),
        (MasterData_object = (DataManager_o *)this->fields.buttonContainer) == 0) )
  {
LABEL_44:
    sub_1C942F0(MasterData_object, v10);
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

  if ( (byte_4D276FA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4D276FA = 1;
  }
  memset(&v5, 0, sizeof(v5));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C942F0(0, v4);
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
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

  if ( (byte_4D276FC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D276FC = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.defaultFilterData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C6A12C(v11);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C6A12C(v11);
  MasterData_object = **(void ***)(v13 + 184);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
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
      if ( v17 >= v15 )
        sub_1C942F8(MasterData_object);
      v18 = *((_QWORD *)v16 + (int)v17 + 4);
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
        (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v15 = *((_DWORD *)v16 + 6);
      if ( (int)++v17 >= v15 )
        return;
    }
LABEL_18:
    sub_1C942F0(MasterData_object, v10);
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

  if ( (byte_4D276FF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4D276FF = 1;
  }
  memset(&v9, 0, sizeof(v9));
  containerList = (System_Collections_Generic_List_object__o *)this->fields.containerList;
  if ( !containerList )
    goto LABEL_12;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    containerList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C942F0(0, v6);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v9.fields._current,
      isEnable,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  containerList = (System_Collections_Generic_List_object__o *)this->fields.forceSelectAllButton;
  if ( !containerList
    || (v8 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v8, 0),
        (containerList = (System_Collections_Generic_List_object__o *)this->fields.forceDeselectAllButton) == 0) )
  {
LABEL_12:
    sub_1C942F0(containerList, isEnable);
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

  if ( (byte_4D27700 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_4D27700 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1C942F0(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C942F0(0, v7);
    ServantEquipEffectFilterContainer__SetEnableFilterRewardUpEquipButton(
      (ServantEquipEffectFilterContainer_o *)v9.fields._current,
      v6,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
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

  if ( (byte_4D276FB & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11651/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/);
    sub_1C94098(&StringLiteral_11654/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/);
    sub_1C94098(&StringLiteral_11652/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/);
    sub_1C94098(&StringLiteral_11649/*"SERVANT_EFFECT_FILTER_TITLE"*/);
    byte_4D276FB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( this->fields.categoryFlag == 4 )
    v4 = (System_String_o **)&StringLiteral_11649/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11654/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v5 = *v4;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0),
        forceSelectAllButtonLabel = this->fields.forceSelectAllButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11652/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0),
        !forceSelectAllButtonLabel)
    || (UILabel__set_text(forceSelectAllButtonLabel, v6, 0),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11651/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0),
        !forceDeselectAllButtonLabel) )
  {
    sub_1C942F0(v6, v7);
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

  if ( (byte_4D27705 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_FunctionCategoryMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_FunctionCategoryEntity___);
    byte_4D27705 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_FunctionCategoryMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v6);
  EntitiesByGroupType = (System_Collections_Generic_IEnumerable_TSource__o *)FunctionCategoryMaster__GetEntitiesByGroupType(
                                                                               (FunctionCategoryMaster_o *)Master_object,
                                                                               v,
                                                                               this->fields.categoryFlag,
                                                                               0);
  return System_Linq_Enumerable__Any_object_(
           EntitiesByGroupType,
           (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_FunctionCategoryEntity___);
}