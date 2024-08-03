void __fastcall ServantEquipEffectFilterController___ctor(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *v10; // x20
  __int64 v11; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_T__o *v20; // x20
  struct System_Object_array *v21; // x9
  _QWORD *v22; // x8
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  __int64 v29; // x10
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_T__o *v32; // x20
  struct System_Object_array *v33; // x9
  _QWORD *v34; // x8
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
  __int64 v38; // x10
  __int64 v39; // x10
  __int64 v40; // x10
  __int64 v41; // x10
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_Dictionary_int__int__o *v47; // x20

  if ( (byte_49F775B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v9);
    byte_49F775B = 1;
  }
  this->fields.WIDGET_HEIGHT_ADD_VALUE = 12;
  v10 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo,
                                                  method,
                                                  v2);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v10 )
    goto LABEL_64;
  items = v10->fields._items;
  v13 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      1,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v13 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v10->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v10->fields._version;
  }
  v15 = v10->fields._size;
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      2,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v13 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v10->fields._size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 2;
    ++v10->fields._version;
  }
  v16 = v10->fields._size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      3,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v13 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v10->fields._size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 3;
    ++v10->fields._version;
  }
  v17 = v10->fields._size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      4,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 4;
  }
  this->fields.SvtEqDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v10;
  sub_1B6406C(&this->fields.SvtEqDisplayGroups);
  v20 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo,
                                                  v18,
                                                  v19);
  System_Collections_Generic_List_Int32Enum____ctor(
    v20,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v20 )
    goto LABEL_64;
  v21 = v20->fields._items;
  v22 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v20->fields._version;
  if ( !v21 )
    goto LABEL_64;
  v23 = v20->fields._size;
  if ( (unsigned int)v23 >= v21->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      1,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    v21 = v20->fields._items;
    v22 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v21 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v23 + 1;
    *((_DWORD *)v21->m_Items + v23) = 1;
    ++v20->fields._version;
  }
  v24 = v20->fields._size;
  if ( (unsigned int)v24 >= v21->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      2,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    v21 = v20->fields._items;
    v22 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v21 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v24 + 1;
    *((_DWORD *)v21->m_Items + v24) = 2;
    ++v20->fields._version;
  }
  v25 = v20->fields._size;
  if ( (unsigned int)v25 >= v21->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      3,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    v21 = v20->fields._items;
    v22 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v21 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v25 + 1;
    *((_DWORD *)v21->m_Items + v25) = 3;
    ++v20->fields._version;
  }
  v26 = v20->fields._size;
  if ( (unsigned int)v26 >= v21->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      8,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    v21 = v20->fields._items;
    v22 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v21 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v26 + 1;
    *((_DWORD *)v21->m_Items + v26) = 8;
    ++v20->fields._version;
  }
  v27 = v20->fields._size;
  if ( (unsigned int)v27 >= v21->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      5,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    v21 = v20->fields._items;
    v22 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v21 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v27 + 1;
    *((_DWORD *)v21->m_Items + v27) = 5;
    ++v20->fields._version;
  }
  v28 = v20->fields._size;
  if ( (unsigned int)v28 >= v21->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      6,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    v21 = v20->fields._items;
    v22 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v20->fields._version;
    if ( !v21 )
      goto LABEL_64;
  }
  else
  {
    v20->fields._size = v28 + 1;
    *((_DWORD *)v21->m_Items + v28) = 6;
    ++v20->fields._version;
  }
  v29 = v20->fields._size;
  if ( (unsigned int)v29 >= v21->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      7,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v20->fields._size = v29 + 1;
    *((_DWORD *)v21->m_Items + v29) = 7;
  }
  this->fields.CommandCodeDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v20;
  sub_1B6406C(&this->fields.CommandCodeDisplayGroups);
  v32 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo,
                                                  v30,
                                                  v31);
  System_Collections_Generic_List_Int32Enum____ctor(
    v32,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v32 )
    goto LABEL_64;
  v33 = v32->fields._items;
  v34 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v32->fields._version;
  if ( !v33 )
    goto LABEL_64;
  v35 = v32->fields._size;
  if ( (unsigned int)v35 >= v33->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      1,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v33 = v32->fields._items;
    v34 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v32->fields._version;
    if ( !v33 )
      goto LABEL_64;
  }
  else
  {
    v32->fields._size = v35 + 1;
    *((_DWORD *)v33->m_Items + v35) = 1;
    ++v32->fields._version;
  }
  v36 = v32->fields._size;
  if ( (unsigned int)v36 >= v33->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      2,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v33 = v32->fields._items;
    v34 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v32->fields._version;
    if ( !v33 )
      goto LABEL_64;
  }
  else
  {
    v32->fields._size = v36 + 1;
    *((_DWORD *)v33->m_Items + v36) = 2;
    ++v32->fields._version;
  }
  v37 = v32->fields._size;
  if ( (unsigned int)v37 >= v33->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      3,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v33 = v32->fields._items;
    v34 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v32->fields._version;
    if ( !v33 )
      goto LABEL_64;
  }
  else
  {
    v32->fields._size = v37 + 1;
    *((_DWORD *)v33->m_Items + v37) = 3;
    ++v32->fields._version;
  }
  v38 = v32->fields._size;
  if ( (unsigned int)v38 >= v33->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      8,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v33 = v32->fields._items;
    v34 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v32->fields._version;
    if ( !v33 )
      goto LABEL_64;
  }
  else
  {
    v32->fields._size = v38 + 1;
    *((_DWORD *)v33->m_Items + v38) = 8;
    ++v32->fields._version;
  }
  v39 = v32->fields._size;
  if ( (unsigned int)v39 >= v33->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      5,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v33 = v32->fields._items;
    v34 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v32->fields._version;
    if ( !v33 )
      goto LABEL_64;
  }
  else
  {
    v32->fields._size = v39 + 1;
    *((_DWORD *)v33->m_Items + v39) = 5;
    ++v32->fields._version;
  }
  v40 = v32->fields._size;
  if ( (unsigned int)v40 < v33->max_length )
  {
    v32->fields._size = v40 + 1;
    *((_DWORD *)v33->m_Items + v40) = 6;
    ++v32->fields._version;
    goto LABEL_60;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v32,
    6,
    *(const MethodInfo_34927A8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  v33 = v32->fields._items;
  v34 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v32->fields._version;
  if ( !v33 )
LABEL_64:
    sub_1B64324(v11);
LABEL_60:
  v41 = v32->fields._size;
  if ( (unsigned int)v41 >= v33->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v32,
      7,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v32->fields._size = v41 + 1;
    *((_DWORD *)v33->m_Items + v41) = 7;
  }
  this->fields.SvtDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v32;
  sub_1B6406C(&this->fields.SvtDisplayGroups);
  v44 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v44;
  sub_1B6406C(&this->fields.containerList);
  v47 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v45,
                                                               v46);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v47,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v47;
  sub_1B6406C(&this->fields.defaultFilterData);
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
  sub_1B6406C(&this->fields.sort);
  this->fields.onClickEvent = onclickEvent;
  sub_1B6406C(&this->fields.onClickEvent);
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
      sub_1B6406C(&this->fields.displayGroups);
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
  bool v9; // w20
  ListViewSort_o *sort; // x0
  int key_high; // x21^4
  int v12; // w19
  __int128 v14[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F7755 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    byte_49F7755 = 1;
  }
  memset(&v15, 0, 32);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v14,
    defaultFilterData,
    (const MethodInfo_311B28C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v15.fields._dictionary = v14[0];
  v15.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v14[1];
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
           &v15,
           (const MethodInfo_32682F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    if ( !v9 )
      break;
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(0LL);
    key_high = HIDWORD(v15.fields._current.fields.key);
    if ( ListViewSort__GetSvtEquipEffectFilterInt(sort, (int32_t)v15.fields._current.fields.key, 0LL) != key_high )
    {
      v12 = 4;
      goto LABEL_10;
    }
  }
  v12 = 5;
LABEL_10:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v15,
    (const MethodInfo_32683F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v9 && v12 == 4;
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
          sub_1B6432C(cateforyIdList, sort, method, v3);
        if ( !sort )
          sub_1B64324(cateforyIdList);
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

  if ( (byte_49F7758 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantEquipEffectFilterController_OnClick_Category__, method);
    byte_49F7758 = 1;
  }
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
  v3 = Method_ServantEquipEffectFilterController_OnClick_Category__;
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_Category__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0();
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F775A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    sub_1B640C8(&Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__, v6);
    byte_49F775A = 1;
  }
  v7 = Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__;
  memset(&v11, 0, sizeof(v11));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0();
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1B64324(0LL);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v11.fields._current, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
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
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F7759 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    sub_1B640C8(&Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__, v6);
    byte_49F7759 = 1;
  }
  v7 = Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__;
  memset(&v11, 0, sizeof(v11));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0();
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1B64324(0LL);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v11.fields._current, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x0
  DataManager_o *MasterData_object; // x0
  FunctionCategoryMaster_o *v23; // x28
  Il2CppObject *v24; // x24
  Il2CppObject *v25; // x20
  int32_t current; // w25
  Il2CppObject *containerPrefab; // x24
  _BOOL8 v28; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v31; // x26
  System_String_o *v32; // x1
  System_String_o *v33; // x0
  __int64 v34; // x0
  FunctionCategoryEntity_array *EntitiesByGroupType; // x26
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  FunctionCategoryMaster_o *v39; // x20
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
  System_Collections_Generic_List_object__o *v50; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  UIWidget_o *v55; // x21
  float v56; // s1
  float v57; // s0
  int v58; // w8
  UnityEngine_GameObject_o *v59; // x0
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-A0h] BYREF
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o **p_containerList; // [xsp+48h] [xbp-78h]
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F7756 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__, v8);
    sub_1B640C8(&FunctionCategoryEntity_GroupType_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&Method_ServantEquipEffectFilterController_OnClick_Category__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17);
    sub_1B640C8(&StringLiteral_4689/*"Container_"*/, v18);
    byte_49F7756 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v19;
  p_containerList = &this->fields.containerList;
  sub_1B6406C(&this->fields.containerList);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BB5FA4();
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1BB5FA4();
  MasterData_object = **(DataManager_o ***)(v21 + 184);
  if ( !MasterData_object )
    goto LABEL_44;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !this->fields.displayGroups )
    goto LABEL_44;
  v23 = (FunctionCategoryMaster_o *)MasterData_object;
  System_Collections_Generic_List_Int32Enum___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_T__o *)this->fields.displayGroups,
    (const MethodInfo_349331C *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v24 = 0LL;
  v61 = v60;
LABEL_10:
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
            &v61,
            (const MethodInfo_3226BA0 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    current = (int32_t)v61.fields._current;
    containerPrefab = (Il2CppObject *)this->fields.containerPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v24 = UnityEngine_Object__Instantiate_object_(
            containerPrefab,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
    if ( v28 )
    {
      if ( !v24 )
        sub_1B64324(v28);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
      if ( !gameObject )
        sub_1B64324(0LL);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v24, 0LL);
      if ( !transform )
        sub_1B64324(0LL);
      UnityEngine_Transform__SetParent_69148984(transform, this->fields.containerHolder, 0, 0LL);
      v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
      LODWORD(v60.fields._current) = current;
      v60.fields._list = (struct System_Collections_Generic_List_T__o *)FunctionCategoryEntity_GroupType_TypeInfo;
      *(_QWORD *)&v60.fields._index = -1LL;
      v32 = System_Enum__ToString((System_Enum_o *)&v60, 0LL);
      v33 = System_String__Concat_61375396((System_String_o *)StringLiteral_4689/*"Container_"*/, v32, 0LL);
      if ( !v31 )
        sub_1B64324(v33);
      UnityEngine_Object__set_name(v31, v33, 0LL);
      if ( !v23 )
        sub_1B64324(v34);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(v23, current, this->fields.categoryFlag, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v36 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0LL, 0LL);
      if ( v36 )
      {
        if ( !byte_49F7111 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v37);
          byte_49F7111 = 1;
        }
        v39 = v23;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        p_y = &static_fields->zeroVector.fields.y;
        p_z = &static_fields->zeroVector.fields.z;
      }
      else
      {
        if ( !v25 )
          sub_1B64324(v36);
        v43 = v25;
        v39 = v23;
        static_fields = (struct UnityEngine_Vector3_StaticFields *)&v43[5].monitor;
        p_y = (float *)&v43[5].monitor + 1;
        p_z = (float *)&v43[6];
      }
      x = static_fields->zeroVector.fields.x;
      v45 = *p_z;
      v46 = *p_y;
      sort = this->fields.sort;
      v48 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
      System_Action___ctor(
        v48,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantEquipEffectFilterController_OnClick_Category__,
        0LL);
      v63.fields.x = x;
      v63.fields.y = v46;
      v63.fields.z = v45;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v24,
        EntitiesByGroupType,
        current,
        sort,
        v63,
        v48,
        this->fields.categoryFlag,
        v49);
      v50 = (System_Collections_Generic_List_object__o *)*p_containerList;
      if ( !*p_containerList )
        sub_1B64324(0LL);
      items = v50->fields._items;
      v52 = Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__;
      ++v50->fields._version;
      if ( !items )
        sub_1B64324(v50);
      size = v50->fields._size;
      v23 = v39;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          v24,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v50->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v24;
        sub_1B6406C(v54 + 4);
      }
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
    &v61,
    (const MethodInfo_3226B9C *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_object = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerHolder )
    goto LABEL_44;
  v55 = (UIWidget_o *)MasterData_object;
  MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)this->fields.containerHolder,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_44;
  *(UnityEngine_Vector3_o *)(&v56 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MasterData_object,
                                           0LL);
  if ( !v25 || !v55 )
    goto LABEL_44;
  v57 = fabsf(v56 + *((float *)&v25[5].monitor + 1));
  v58 = (int)v57;
  if ( v57 == INFINITY )
    v58 = 0x80000000;
  UIWidget__set_height(v55, v58 + this->fields.WIDGET_HEIGHT_ADD_VALUE, 0LL);
  MasterData_object = (DataManager_o *)this->fields.lineSprite;
  if ( !MasterData_object
    || (MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)MasterData_object,
                                               0LL)) == 0LL
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_object, 0LL),
        (MasterData_object = (DataManager_o *)this->fields.lineSprite) == 0LL)
    || (v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_object, 0LL),
        GameObjectExtensions__SetLocalPosition(v59, *(UnityEngine_Vector3_o *)&v25[5].monitor, 0LL),
        (MasterData_object = (DataManager_o *)this->fields.buttonContainer) == 0LL) )
  {
LABEL_44:
    sub_1B64324(MasterData_object);
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

  if ( (byte_49F7752 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    byte_49F7752 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void __fastcall ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__int__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x0
  void *MasterData_object; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  int v15; // w8
  void *v16; // x21
  unsigned int v17; // w24
  __int64 v18; // x8
  int32_t v19; // w22
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x23

  if ( (byte_49F7754 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_49F7754 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                              System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                              method,
                                                              v2);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v8,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v8;
  sub_1B6406C(&this->fields.defaultFilterData);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BB5FA4();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BB5FA4();
  MasterData_object = **(void ***)(v10 + 184);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
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
        sub_1B6432C(MasterData_object, v12, v13, v14);
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
        (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v15 = *((_DWORD *)v16 + 6);
      if ( (int)++v17 >= v15 )
        return;
    }
LABEL_18:
    sub_1B64324(MasterData_object);
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
  const MethodInfo *v9; // x2
  bool v10; // w20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F7757 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      isEnable);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v7);
    byte_49F7757 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  containerList = (System_Collections_Generic_List_object__o *)this->fields.containerList;
  if ( !containerList )
    goto LABEL_12;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    containerList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1B64324(0LL);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v11.fields._current,
      isEnable,
      v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  containerList = (System_Collections_Generic_List_object__o *)this->fields.forceSelectAllButton;
  if ( !containerList
    || (v10 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v10, 0LL),
        (containerList = (System_Collections_Generic_List_object__o *)this->fields.forceDeselectAllButton) == 0LL) )
  {
LABEL_12:
    sub_1B64324(containerList);
  }
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v10, 0LL);
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
  UILabel_o *forceSelectAllButtonLabel; // x20
  UILabel_o *forceDeselectAllButtonLabel; // x19

  if ( (byte_49F7753 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_11516/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, v3);
    sub_1B640C8(&StringLiteral_11519/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/, v4);
    sub_1B640C8(&StringLiteral_11517/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, v5);
    sub_1B640C8(&StringLiteral_11514/*"SERVANT_EFFECT_FILTER_TITLE"*/, v6);
    byte_49F7753 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( this->fields.categoryFlag == 4 )
    v8 = (System_String_o **)&StringLiteral_11514/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v8 = (System_String_o **)&StringLiteral_11519/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v9 = *v8;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(v9, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v10, 0LL),
        forceSelectAllButtonLabel = this->fields.forceSelectAllButtonLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11517/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0LL),
        !forceSelectAllButtonLabel)
    || (UILabel__set_text(forceSelectAllButtonLabel, v10, 0LL),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11516/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0LL),
        !forceDeselectAllButtonLabel) )
  {
    sub_1B64324(v10);
  }
  UILabel__set_text(forceDeselectAllButtonLabel, v10, 0LL);
}