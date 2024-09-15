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
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  System_Collections_Generic_List_T__o *v18; // x20
  struct System_Object_array *v19; // x9
  _QWORD *v20; // x8
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  System_Collections_Generic_List_T__o *v28; // x20
  struct System_Object_array *v29; // x9
  _QWORD *v30; // x8
  __int64 v31; // x10
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
  System_Collections_Generic_List_object__o *v38; // x20
  System_Collections_Generic_Dictionary_int__int__o *v39; // x20

  if ( (byte_4A291FB & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__, v6);
    sub_1B761C0(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo, v7);
    sub_1B761C0(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v8);
    byte_4A291FB = 1;
  }
  this->fields.WIDGET_HEIGHT_ADD_VALUE = 12;
  v9 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v9 )
    goto LABEL_64;
  items = v9->fields._items;
  v13 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      1,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v13 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
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
  v15 = v9->fields._size;
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      2,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v13 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v9->fields._size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 2;
    ++v9->fields._version;
  }
  v16 = v9->fields._size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      3,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v13 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v9->fields._size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 3;
    ++v9->fields._version;
  }
  v17 = v9->fields._size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      4,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 4;
  }
  this->fields.SvtEqDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v9;
  sub_1B76164(&this->fields.SvtEqDisplayGroups);
  v18 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v18,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v18 )
    goto LABEL_64;
  v19 = v18->fields._items;
  v20 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v18->fields._version;
  if ( !v19 )
    goto LABEL_64;
  v21 = v18->fields._size;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      1,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_64;
  }
  else
  {
    v18->fields._size = v21 + 1;
    *((_DWORD *)v19->m_Items + v21) = 1;
    ++v18->fields._version;
  }
  v22 = v18->fields._size;
  if ( (unsigned int)v22 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      2,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_64;
  }
  else
  {
    v18->fields._size = v22 + 1;
    *((_DWORD *)v19->m_Items + v22) = 2;
    ++v18->fields._version;
  }
  v23 = v18->fields._size;
  if ( (unsigned int)v23 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      3,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_64;
  }
  else
  {
    v18->fields._size = v23 + 1;
    *((_DWORD *)v19->m_Items + v23) = 3;
    ++v18->fields._version;
  }
  v24 = v18->fields._size;
  if ( (unsigned int)v24 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      8,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_64;
  }
  else
  {
    v18->fields._size = v24 + 1;
    *((_DWORD *)v19->m_Items + v24) = 8;
    ++v18->fields._version;
  }
  v25 = v18->fields._size;
  if ( (unsigned int)v25 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      5,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_64;
  }
  else
  {
    v18->fields._size = v25 + 1;
    *((_DWORD *)v19->m_Items + v25) = 5;
    ++v18->fields._version;
  }
  v26 = v18->fields._size;
  if ( (unsigned int)v26 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      6,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_64;
  }
  else
  {
    v18->fields._size = v26 + 1;
    *((_DWORD *)v19->m_Items + v26) = 6;
    ++v18->fields._version;
  }
  v27 = v18->fields._size;
  if ( (unsigned int)v27 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      7,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v18->fields._size = v27 + 1;
    *((_DWORD *)v19->m_Items + v27) = 7;
  }
  this->fields.CommandCodeDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v18;
  sub_1B76164(&this->fields.CommandCodeDisplayGroups);
  v28 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v28,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v28 )
    goto LABEL_64;
  v29 = v28->fields._items;
  v30 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v28->fields._version;
  if ( !v29 )
    goto LABEL_64;
  v31 = v28->fields._size;
  if ( (unsigned int)v31 >= v29->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      1,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v29 = v28->fields._items;
    v30 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v28->fields._version;
    if ( !v29 )
      goto LABEL_64;
  }
  else
  {
    v28->fields._size = v31 + 1;
    *((_DWORD *)v29->m_Items + v31) = 1;
    ++v28->fields._version;
  }
  v32 = v28->fields._size;
  if ( (unsigned int)v32 >= v29->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      2,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v29 = v28->fields._items;
    v30 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v28->fields._version;
    if ( !v29 )
      goto LABEL_64;
  }
  else
  {
    v28->fields._size = v32 + 1;
    *((_DWORD *)v29->m_Items + v32) = 2;
    ++v28->fields._version;
  }
  v33 = v28->fields._size;
  if ( (unsigned int)v33 >= v29->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      3,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v29 = v28->fields._items;
    v30 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v28->fields._version;
    if ( !v29 )
      goto LABEL_64;
  }
  else
  {
    v28->fields._size = v33 + 1;
    *((_DWORD *)v29->m_Items + v33) = 3;
    ++v28->fields._version;
  }
  v34 = v28->fields._size;
  if ( (unsigned int)v34 >= v29->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      8,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v29 = v28->fields._items;
    v30 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v28->fields._version;
    if ( !v29 )
      goto LABEL_64;
  }
  else
  {
    v28->fields._size = v34 + 1;
    *((_DWORD *)v29->m_Items + v34) = 8;
    ++v28->fields._version;
  }
  v35 = v28->fields._size;
  if ( (unsigned int)v35 >= v29->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      5,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    v29 = v28->fields._items;
    v30 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v28->fields._version;
    if ( !v29 )
      goto LABEL_64;
  }
  else
  {
    v28->fields._size = v35 + 1;
    *((_DWORD *)v29->m_Items + v35) = 5;
    ++v28->fields._version;
  }
  v36 = v28->fields._size;
  if ( (unsigned int)v36 < v29->max_length )
  {
    v28->fields._size = v36 + 1;
    *((_DWORD *)v29->m_Items + v36) = 6;
    ++v28->fields._version;
    goto LABEL_60;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v28,
    6,
    *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  v29 = v28->fields._items;
  v30 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v28->fields._version;
  if ( !v29 )
LABEL_64:
    sub_1B7641C(v10, v11);
LABEL_60:
  v37 = v28->fields._size;
  if ( (unsigned int)v37 >= v29->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v28,
      7,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v28->fields._size = v37 + 1;
    *((_DWORD *)v29->m_Items + v37) = 7;
  }
  this->fields.SvtDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v28;
  sub_1B76164(&this->fields.SvtDisplayGroups);
  v38 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v38;
  sub_1B76164(&this->fields.containerList);
  v39 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v39,
    (const MethodInfo_31463E0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v39;
  sub_1B76164(&this->fields.defaultFilterData);
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
  sub_1B76164(&this->fields.sort);
  this->fields.onClickEvent = onclickEvent;
  sub_1B76164(&this->fields.onClickEvent);
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
      sub_1B76164(&this->fields.displayGroups);
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

  if ( (byte_4A291F5 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, method);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    byte_4A291F5 = 1;
  }
  memset(&v16, 0, 32);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_1B7641C(0LL, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v15,
    defaultFilterData,
    (const MethodInfo_314717C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v16.fields._dictionary = v15[0];
  v16.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v15[1];
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v16,
            (const MethodInfo_3294070 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    if ( !v10 )
      break;
    sort = this->fields.sort;
    if ( !sort )
      sub_1B7641C(0LL, v9);
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
    (const MethodInfo_3294170 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v10 && v13 == 4;
}


bool __fastcall ServantEquipEffectFilterController__IsMatchEffectCategory(
        System_Int32_array *cateforyIdList,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  System_Int32_array *v5; // x20
  unsigned __int64 v7; // x21

  if ( cateforyIdList )
  {
    v4 = *(_QWORD *)&cateforyIdList->max_length;
    v5 = cateforyIdList;
    if ( (int)v4 < 1 )
    {
      LOBYTE(cateforyIdList) = 0;
    }
    else
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)v4 )
          sub_1B76424(cateforyIdList, sort, method, v3);
        if ( !sort )
          sub_1B7641C(cateforyIdList, sort);
        cateforyIdList = (System_Int32_array *)ListViewSort__GetSvtEquipEffectFilter(sort, v5->m_Items[v7 + 1], 0LL);
        if ( ((unsigned __int8)cateforyIdList & 1) != 0 )
          break;
        LODWORD(v4) = v5->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)v4 );
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

  if ( (byte_4A291F8 & 1) == 0 )
  {
    sub_1B761C0(&Method_ServantEquipEffectFilterController_OnClick_Category__, method);
    byte_4A291F8 = 1;
  }
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
  v3 = Method_ServantEquipEffectFilterController_OnClick_Category__;
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_Category__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B761D8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_4A291FA & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    sub_1B761C0(&Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__, v6);
    byte_4A291FA = 1;
  }
  v7 = Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__;
  memset(&v12, 0, sizeof(v12));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B761D8();
  v8 = (System_Reflection_MethodBase_o *)sub_1B761A4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1B7641C(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B7641C(0LL, v11);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v12.fields._current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
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

  if ( (byte_4A291F9 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    sub_1B761C0(&Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__, v6);
    byte_4A291F9 = 1;
  }
  v7 = Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__;
  memset(&v12, 0, sizeof(v12));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B761D8();
  v8 = (System_Reflection_MethodBase_o *)sub_1B761A4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1B7641C(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B7641C(0LL, v11);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v12.fields._current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
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
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x0
  DataManager_o *MasterData_object; // x0
  FunctionCategoryMaster_o *v23; // x28
  Il2CppObject *v24; // x24
  Il2CppObject *v25; // x20
  int32_t current; // w25
  Il2CppObject *containerPrefab; // x24
  _BOOL8 v28; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v33; // x1
  UnityEngine_Object_o *v34; // x26
  System_String_o *v35; // x1
  System_String_o *v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  FunctionCategoryEntity_array *EntitiesByGroupType; // x26
  _BOOL8 v40; // x0
  __int64 v41; // x1
  FunctionCategoryMaster_o *v42; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  Il2CppObject *v46; // x10
  float x; // s10
  float v48; // s8
  float v49; // s9
  ListViewSort_o *sort; // x27
  System_Action_o *v51; // x28
  const MethodInfo *v52; // x6
  __int64 v53; // x1
  System_Collections_Generic_List_object__o *v54; // x0
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x8
  UIWidget_o *v59; // x21
  float v60; // s1
  float v61; // s0
  int v62; // w8
  UnityEngine_GameObject_o *v63; // x0
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-A0h] BYREF
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o **p_containerList; // [xsp+48h] [xbp-78h]
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A291F6 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__, v7);
    sub_1B761C0(&FunctionCategoryEntity_GroupType_TypeInfo, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v11);
    sub_1B761C0(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v12);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___, v13);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v14);
    sub_1B761C0(&Method_ServantEquipEffectFilterController_OnClick_Category__, v15);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    sub_1B761C0(&StringLiteral_4711/*"Container_"*/, v17);
    byte_4A291F6 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  v18 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v18;
  p_containerList = &this->fields.containerList;
  sub_1B76164(&this->fields.containerList);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BC809C();
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1BC809C();
  MasterData_object = **(DataManager_o ***)(v21 + 184);
  if ( !MasterData_object )
    goto LABEL_44;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !this->fields.displayGroups )
    goto LABEL_44;
  v23 = (FunctionCategoryMaster_o *)MasterData_object;
  System_Collections_Generic_List_Int32Enum___GetEnumerator(
    &v64,
    (System_Collections_Generic_List_T__o *)this->fields.displayGroups,
    (const MethodInfo_34BD8B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v24 = 0LL;
  v65 = v64;
LABEL_10:
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
            &v65,
            (const MethodInfo_32533C8 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    current = (int32_t)v65.fields._current;
    containerPrefab = (Il2CppObject *)this->fields.containerPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v24 = UnityEngine_Object__Instantiate_object_(
            containerPrefab,
            (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
    if ( v28 )
    {
      if ( !v24 )
        sub_1B7641C(v28, v29);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
      if ( !gameObject )
        sub_1B7641C(0LL, v31);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v24, 0LL);
      if ( !transform )
        sub_1B7641C(0LL, v33);
      UnityEngine_Transform__SetParent_69308656(transform, this->fields.containerHolder, 0, 0LL);
      v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
      LODWORD(v64.fields._current) = current;
      v64.fields._list = (struct System_Collections_Generic_List_T__o *)FunctionCategoryEntity_GroupType_TypeInfo;
      *(_QWORD *)&v64.fields._index = -1LL;
      v35 = System_Enum__ToString((System_Enum_o *)&v64, 0LL);
      v36 = System_String__Concat_61535060((System_String_o *)StringLiteral_4711/*"Container_"*/, v35, 0LL);
      if ( !v34 )
        sub_1B7641C(v36, v36);
      UnityEngine_Object__set_name(v34, v36, 0LL);
      if ( !v23 )
        sub_1B7641C(v37, v38);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(v23, current, this->fields.categoryFlag, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v40 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0LL, 0LL);
      if ( v40 )
      {
        if ( !byte_4A28BB1 )
        {
          sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v41);
          byte_4A28BB1 = 1;
        }
        v42 = v23;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        p_y = &static_fields->zeroVector.fields.y;
        p_z = &static_fields->zeroVector.fields.z;
      }
      else
      {
        if ( !v25 )
          sub_1B7641C(v40, v41);
        v46 = v25;
        v42 = v23;
        static_fields = (struct UnityEngine_Vector3_StaticFields *)&v46[5].monitor;
        p_y = (float *)&v46[5].monitor + 1;
        p_z = (float *)&v46[6];
      }
      x = static_fields->zeroVector.fields.x;
      v48 = *p_z;
      v49 = *p_y;
      sort = this->fields.sort;
      v51 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(
        v51,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantEquipEffectFilterController_OnClick_Category__,
        0LL);
      v67.fields.x = x;
      v67.fields.y = v49;
      v67.fields.z = v48;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v24,
        EntitiesByGroupType,
        current,
        sort,
        v67,
        v51,
        this->fields.categoryFlag,
        v52);
      v54 = (System_Collections_Generic_List_object__o *)*p_containerList;
      if ( !*p_containerList )
        sub_1B7641C(0LL, v53);
      items = v54->fields._items;
      v56 = Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__;
      ++v54->fields._version;
      if ( !items )
        sub_1B7641C(v54, v53);
      size = v54->fields._size;
      v23 = v42;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v54,
          v24,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        v54->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v24;
        sub_1B76164(v58 + 4);
      }
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
    &v65,
    (const MethodInfo_32533C4 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_object = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerHolder )
    goto LABEL_44;
  v59 = (UIWidget_o *)MasterData_object;
  MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)this->fields.containerHolder,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_44;
  *(UnityEngine_Vector3_o *)(&v60 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MasterData_object,
                                           0LL);
  if ( !v25 || !v59 )
    goto LABEL_44;
  v61 = fabsf(v60 + *((float *)&v25[5].monitor + 1));
  v62 = (int)v61;
  if ( v61 == INFINITY )
    v62 = 0x80000000;
  UIWidget__set_height(v59, v62 + this->fields.WIDGET_HEIGHT_ADD_VALUE, 0LL);
  MasterData_object = (DataManager_o *)this->fields.lineSprite;
  if ( !MasterData_object
    || (MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)MasterData_object,
                                               0LL)) == 0LL
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_object, 0LL),
        (MasterData_object = (DataManager_o *)this->fields.lineSprite) == 0LL)
    || (v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_object, 0LL),
        GameObjectExtensions__SetLocalPosition(v63, *(UnityEngine_Vector3_o *)&v25[5].monitor, 0LL),
        (MasterData_object = (DataManager_o *)this->fields.buttonContainer) == 0LL) )
  {
LABEL_44:
    sub_1B7641C(MasterData_object, v19);
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

  if ( (byte_4A291F2 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    byte_4A291F2 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1B7641C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B7641C(0LL, v7);
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
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
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0
  void *MasterData_object; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  int v14; // w8
  void *v15; // x21
  unsigned int v16; // w24
  __int64 v17; // x8
  int32_t v18; // w22
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x23

  if ( (byte_4A291F4 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, method);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4A291F4 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_31463E0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v7;
  sub_1B76164(&this->fields.defaultFilterData);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BC809C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BC809C();
  MasterData_object = **(void ***)(v10 + 184);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = FunctionCategoryMaster__GetEntitiesByFlag(
                        (FunctionCategoryMaster_o *)MasterData_object,
                        this->fields.categoryFlag,
                        0LL);
  if ( !MasterData_object )
    goto LABEL_18;
  v14 = *((_DWORD *)MasterData_object + 6);
  v15 = MasterData_object;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v14 )
        sub_1B76424(MasterData_object, v8, v12, v13);
      v17 = *((_QWORD *)v15 + (int)v16 + 4);
      if ( !v17 )
        break;
      MasterData_object = this->fields.sort;
      if ( !MasterData_object )
        break;
      v18 = *(_DWORD *)(v17 + 16);
      defaultFilterData = this->fields.defaultFilterData;
      MasterData_object = (void *)ListViewSort__GetSvtEquipEffectFilterInt(
                                    (ListViewSort_o *)MasterData_object,
                                    v18,
                                    0LL);
      if ( !defaultFilterData )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        defaultFilterData,
        v18,
        (int32_t)MasterData_object,
        (const MethodInfo_3146DA4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
        return;
    }
LABEL_18:
    sub_1B7641C(MasterData_object, v8);
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

  if ( (byte_4A291F7 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      isEnable);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v7);
    byte_4A291F7 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  containerList = (System_Collections_Generic_List_object__o *)this->fields.containerList;
  if ( !containerList )
    goto LABEL_12;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    containerList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B7641C(0LL, v9);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v12.fields._current,
      isEnable,
      v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  containerList = (System_Collections_Generic_List_object__o *)this->fields.forceSelectAllButton;
  if ( !containerList
    || (v11 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v11, 0LL),
        (containerList = (System_Collections_Generic_List_object__o *)this->fields.forceDeselectAllButton) == 0LL) )
  {
LABEL_12:
    sub_1B7641C(containerList, isEnable);
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

  if ( (byte_4A291F3 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_11567/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, v3);
    sub_1B761C0(&StringLiteral_11570/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/, v4);
    sub_1B761C0(&StringLiteral_11568/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, v5);
    sub_1B761C0(&StringLiteral_11565/*"SERVANT_EFFECT_FILTER_TITLE"*/, v6);
    byte_4A291F3 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( this->fields.categoryFlag == 4 )
    v8 = (System_String_o **)&StringLiteral_11565/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v8 = (System_String_o **)&StringLiteral_11570/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v9 = *v8;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(v9, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v10, 0LL),
        forceSelectAllButtonLabel = this->fields.forceSelectAllButtonLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11568/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0LL),
        !forceSelectAllButtonLabel)
    || (UILabel__set_text(forceSelectAllButtonLabel, v10, 0LL),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11567/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0LL),
        !forceDeselectAllButtonLabel) )
  {
    sub_1B7641C(v10, v11);
  }
  UILabel__set_text(forceDeselectAllButtonLabel, v10, 0LL);
}