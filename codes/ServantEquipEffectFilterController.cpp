void __fastcall ServantEquipEffectFilterController___ctor(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_T__o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_T__o *v29; // x20
  struct System_Object_array *v30; // x9
  _QWORD *v31; // x8
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
  __int64 v38; // x10
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_T__o *v42; // x20
  struct System_Object_array *v43; // x9
  _QWORD *v44; // x8
  __int64 v45; // x10
  __int64 v46; // x10
  __int64 v47; // x10
  __int64 v48; // x10
  __int64 v49; // x10
  __int64 v50; // x10
  __int64 v51; // x10
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_List_object__o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_Dictionary_int__int__o *v59; // x20

  if ( (byte_4B11995 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v15, v16);
    byte_4B11995 = 1;
  }
  this->fields.WIDGET_HEIGHT_ADD_VALUE = 12;
  v17 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v17,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v17 )
    goto LABEL_64;
  items = v17->fields._items;
  v21 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v17->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v17->fields._version;
  }
  v23 = v17->fields._size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v17->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 2;
    ++v17->fields._version;
  }
  v24 = v17->fields._size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_64;
  }
  else
  {
    v17->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 3;
    ++v17->fields._version;
  }
  v25 = v17->fields._size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      4,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v17->fields._size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 4;
  }
  this->fields.SvtEqDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v17;
  sub_1BCA784(&this->fields.SvtEqDisplayGroups, v17);
  v29 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo,
                                                  v26,
                                                  v27,
                                                  v28);
  System_Collections_Generic_List_Int32Enum____ctor(
    v29,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v29 )
    goto LABEL_64;
  v30 = v29->fields._items;
  v31 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v29->fields._version;
  if ( !v30 )
    goto LABEL_64;
  v32 = v29->fields._size;
  if ( (unsigned int)v32 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_64;
  }
  else
  {
    v29->fields._size = v32 + 1;
    *((_DWORD *)v30->m_Items + v32) = 1;
    ++v29->fields._version;
  }
  v33 = v29->fields._size;
  if ( (unsigned int)v33 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_64;
  }
  else
  {
    v29->fields._size = v33 + 1;
    *((_DWORD *)v30->m_Items + v33) = 2;
    ++v29->fields._version;
  }
  v34 = v29->fields._size;
  if ( (unsigned int)v34 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_64;
  }
  else
  {
    v29->fields._size = v34 + 1;
    *((_DWORD *)v30->m_Items + v34) = 3;
    ++v29->fields._version;
  }
  v35 = v29->fields._size;
  if ( (unsigned int)v35 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      8,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_64;
  }
  else
  {
    v29->fields._size = v35 + 1;
    *((_DWORD *)v30->m_Items + v35) = 8;
    ++v29->fields._version;
  }
  v36 = v29->fields._size;
  if ( (unsigned int)v36 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      5,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_64;
  }
  else
  {
    v29->fields._size = v36 + 1;
    *((_DWORD *)v30->m_Items + v36) = 5;
    ++v29->fields._version;
  }
  v37 = v29->fields._size;
  if ( (unsigned int)v37 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      6,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_64;
  }
  else
  {
    v29->fields._size = v37 + 1;
    *((_DWORD *)v30->m_Items + v37) = 6;
    ++v29->fields._version;
  }
  v38 = v29->fields._size;
  if ( (unsigned int)v38 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      7,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v29->fields._size = v38 + 1;
    *((_DWORD *)v30->m_Items + v38) = 7;
  }
  this->fields.CommandCodeDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v29;
  sub_1BCA784(&this->fields.CommandCodeDisplayGroups, v29);
  v42 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo,
                                                  v39,
                                                  v40,
                                                  v41);
  System_Collections_Generic_List_Int32Enum____ctor(
    v42,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v42 )
    goto LABEL_64;
  v43 = v42->fields._items;
  v44 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v42->fields._version;
  if ( !v43 )
    goto LABEL_64;
  v45 = v42->fields._size;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v42,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v43 = v42->fields._items;
    v44 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v42->fields._version;
    if ( !v43 )
      goto LABEL_64;
  }
  else
  {
    v42->fields._size = v45 + 1;
    *((_DWORD *)v43->m_Items + v45) = 1;
    ++v42->fields._version;
  }
  v46 = v42->fields._size;
  if ( (unsigned int)v46 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v42,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v43 = v42->fields._items;
    v44 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v42->fields._version;
    if ( !v43 )
      goto LABEL_64;
  }
  else
  {
    v42->fields._size = v46 + 1;
    *((_DWORD *)v43->m_Items + v46) = 2;
    ++v42->fields._version;
  }
  v47 = v42->fields._size;
  if ( (unsigned int)v47 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v42,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v43 = v42->fields._items;
    v44 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v42->fields._version;
    if ( !v43 )
      goto LABEL_64;
  }
  else
  {
    v42->fields._size = v47 + 1;
    *((_DWORD *)v43->m_Items + v47) = 3;
    ++v42->fields._version;
  }
  v48 = v42->fields._size;
  if ( (unsigned int)v48 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v42,
      8,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v43 = v42->fields._items;
    v44 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v42->fields._version;
    if ( !v43 )
      goto LABEL_64;
  }
  else
  {
    v42->fields._size = v48 + 1;
    *((_DWORD *)v43->m_Items + v48) = 8;
    ++v42->fields._version;
  }
  v49 = v42->fields._size;
  if ( (unsigned int)v49 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v42,
      5,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v43 = v42->fields._items;
    v44 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
    ++v42->fields._version;
    if ( !v43 )
      goto LABEL_64;
  }
  else
  {
    v42->fields._size = v49 + 1;
    *((_DWORD *)v43->m_Items + v49) = 5;
    ++v42->fields._version;
  }
  v50 = v42->fields._size;
  if ( (unsigned int)v50 < v43->max_length )
  {
    v42->fields._size = v50 + 1;
    *((_DWORD *)v43->m_Items + v50) = 6;
    ++v42->fields._version;
    goto LABEL_60;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v42,
    6,
    *(const MethodInfo_3587464 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  v43 = v42->fields._items;
  v44 = Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__;
  ++v42->fields._version;
  if ( !v43 )
LABEL_64:
    sub_1BCAA3C(v18, v19);
LABEL_60:
  v51 = v42->fields._size;
  if ( (unsigned int)v51 >= v43->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v42,
      7,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v42->fields._size = v51 + 1;
    *((_DWORD *)v43->m_Items + v51) = 7;
  }
  this->fields.SvtDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v42;
  sub_1BCA784(&this->fields.SvtDisplayGroups, v42);
  v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo,
                                                       v52,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v55;
  sub_1BCA784(&this->fields.containerList, v55);
  v59 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v56,
                                                               v57,
                                                               v58);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v59,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v59;
  sub_1BCA784(&this->fields.defaultFilterData, v59);
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
  sub_1BCA784(&this->fields.sort, sort);
  this->fields.onClickEvent = onclickEvent;
  sub_1BCA784(&this->fields.onClickEvent, onclickEvent);
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
      sub_1BCA784(&this->fields.displayGroups, SvtDisplayGroups);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  __int64 v15; // x1
  bool v16; // w20
  ListViewSort_o *sort; // x0
  int key_high; // x21^4
  int v19; // w19
  __int128 v21[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1198F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v12, v13);
    byte_4B1198F = 1;
  }
  memset(&v22, 0, 32);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v21,
    defaultFilterData,
    (const MethodInfo_31FD64C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v22.fields._dictionary = v21[0];
  v22.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v21[1];
  while ( 1 )
  {
    v16 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v22,
            (const MethodInfo_3354DA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    if ( !v16 )
      break;
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(0LL, v15);
    key_high = HIDWORD(v22.fields._current.fields.key);
    if ( ListViewSort__GetSvtEquipEffectFilterInt(sort, (int32_t)v22.fields._current.fields.key, 0LL) != key_high )
    {
      v19 = 4;
      goto LABEL_10;
    }
  }
  v19 = 5;
LABEL_10:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v22,
    (const MethodInfo_3354EA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v16 && v19 == 4;
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
          sub_1BCAA44(cateforyIdList, sort);
        if ( !sort )
          sub_1BCAA3C(cateforyIdList, sort);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B11992 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantEquipEffectFilterController_OnClick_Category__, method, v2);
    byte_4B11992 = 1;
  }
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
  v4 = Method_ServantEquipEffectFilterController_OnClick_Category__;
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_Category__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ServantEquipEffectFilterController_OnClick_Category__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
}


void __fastcall ServantEquipEffectFilterController__OnClick_ForceDeselectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11994 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__, v10, v11);
    byte_4B11994 = 1;
  }
  v12 = Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__;
  memset(&v17, 0, sizeof(v17));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_ServantEquipEffectFilterController_OnClick_ForceDeselectAll__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1BCAA3C(0LL, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_1BCAA3C(0LL, v16);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v17.fields._current, v16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
}


void __fastcall ServantEquipEffectFilterController__OnClick_ForceSelectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11993 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__, v10, v11);
    byte_4B11993 = 1;
  }
  v12 = Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__;
  memset(&v17, 0, sizeof(v17));
  if ( (*((_BYTE *)Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_ServantEquipEffectFilterController_OnClick_ForceSelectAll__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1BCAA3C(0LL, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_1BCAA3C(0LL, v16);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v17.fields._current, v16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(this->fields.onClickEvent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x20
  __int64 v36; // x1
  long double v37; // q0
  __int64 v38; // x0
  __int64 v39; // x0
  DataManager_o *MasterData_object; // x0
  FunctionCategoryMaster_o *v41; // x28
  Il2CppObject *v42; // x24
  Il2CppObject *v43; // x20
  __int64 v44; // x1
  int32_t current; // w25
  Il2CppObject *containerPrefab; // x24
  _BOOL8 v47; // x0
  __int64 v48; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v50; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v52; // x1
  UnityEngine_Object_o *v53; // x26
  System_String_o *v54; // x1
  System_String_o *v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  FunctionCategoryEntity_array *EntitiesByGroupType; // x26
  _BOOL8 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  FunctionCategoryMaster_o *v64; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  Il2CppObject *v68; // x10
  float x; // s10
  float v70; // s8
  float v71; // s9
  ListViewSort_o *sort; // x27
  System_Action_o *v73; // x28
  const MethodInfo *v74; // x6
  __int64 v75; // x1
  System_Collections_Generic_List_object__o *v76; // x0
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x8
  UIWidget_o *v81; // x21
  float v82; // s1
  float v83; // s0
  int v84; // w8
  UnityEngine_GameObject_o *v85; // x0
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+20h] [xbp-A0h] BYREF
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o **p_containerList; // [xsp+48h] [xbp-78h]
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11990 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__,
      v13,
      v14);
    sub_1BCA7E0(&FunctionCategoryEntity_GroupType_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_ServantEquipEffectFilterController_OnClick_Category__, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v31, v32);
    sub_1BCA7E0(&StringLiteral_4780/*"Container_"*/, v33, v34);
    byte_4B11990 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)v35;
  p_containerList = &this->fields.containerList;
  sub_1BCA784(&this->fields.containerList, v35);
  v38 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
    v38 = sub_1C1C6BC(v37);
  v39 = *(_QWORD *)(*(_QWORD *)(v38 + 192) + 16LL);
  if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
    v39 = sub_1C1C6BC(v37);
  MasterData_object = **(DataManager_o ***)(v39 + 184);
  if ( !MasterData_object )
    goto LABEL_44;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !this->fields.displayGroups )
    goto LABEL_44;
  v41 = (FunctionCategoryMaster_o *)MasterData_object;
  System_Collections_Generic_List_Int32Enum___GetEnumerator(
    &v86,
    (System_Collections_Generic_List_T__o *)this->fields.displayGroups,
    (const MethodInfo_3587F38 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v42 = 0LL;
  v87 = v86;
LABEL_10:
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
            &v87,
            (const MethodInfo_331380C *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    current = (int32_t)v87.fields._current;
    containerPrefab = (Il2CppObject *)this->fields.containerPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
    v42 = UnityEngine_Object__Instantiate_object_(
            containerPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v47 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v42, 0LL, 0LL);
    if ( v47 )
    {
      if ( !v42 )
        sub_1BCAA3C(v47, v48);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0LL);
      if ( !gameObject )
        sub_1BCAA3C(0LL, v50);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v42, 0LL);
      if ( !transform )
        sub_1BCAA3C(0LL, v52);
      UnityEngine_Transform__SetParent_70175492(transform, this->fields.containerHolder, 0, 0LL);
      v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0LL);
      LODWORD(v86.fields._current) = current;
      v86.fields._list = (struct System_Collections_Generic_List_T__o *)FunctionCategoryEntity_GroupType_TypeInfo;
      *(_QWORD *)&v86.fields._index = -1LL;
      v54 = System_Enum__ToString((System_Enum_o *)&v86, 0LL);
      v55 = System_String__Concat_62401220((System_String_o *)StringLiteral_4780/*"Container_"*/, v54, 0LL);
      if ( !v53 )
        sub_1BCAA3C(v55, v55);
      UnityEngine_Object__set_name(v53, v55, 0LL);
      if ( !v41 )
        sub_1BCAA3C(v56, v57);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(v41, current, this->fields.categoryFlag, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58);
      v60 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v43, 0LL, 0LL);
      if ( v60 )
      {
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v61, v62);
          byte_4B109C1 = 1;
        }
        v64 = v41;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        p_y = &static_fields->zeroVector.fields.y;
        p_z = &static_fields->zeroVector.fields.z;
      }
      else
      {
        if ( !v43 )
          sub_1BCAA3C(v60, v61);
        v68 = v43;
        v64 = v41;
        static_fields = (struct UnityEngine_Vector3_StaticFields *)&v68[5].monitor;
        p_y = (float *)&v68[5].monitor + 1;
        p_z = (float *)&v68[6];
      }
      x = static_fields->zeroVector.fields.x;
      v70 = *p_z;
      v71 = *p_y;
      sort = this->fields.sort;
      v73 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v61, v62, v63);
      System_Action___ctor(
        v73,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantEquipEffectFilterController_OnClick_Category__,
        0LL);
      v89.fields.x = x;
      v89.fields.y = v71;
      v89.fields.z = v70;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v42,
        EntitiesByGroupType,
        current,
        sort,
        v89,
        v73,
        this->fields.categoryFlag,
        v74);
      v76 = (System_Collections_Generic_List_object__o *)*p_containerList;
      if ( !*p_containerList )
        sub_1BCAA3C(0LL, v75);
      items = v76->fields._items;
      v78 = Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__;
      ++v76->fields._version;
      if ( !items )
        sub_1BCAA3C(v76, v75);
      size = v76->fields._size;
      v41 = v64;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          v42,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &items->obj.klass + size;
        v76->fields._size = size + 1;
        v80[4] = (Il2CppClass *)v42;
        sub_1BCA784(v80 + 4, v42);
      }
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
    &v87,
    (const MethodInfo_3313808 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_object = (DataManager_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerHolder )
    goto LABEL_44;
  v81 = (UIWidget_o *)MasterData_object;
  MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)this->fields.containerHolder,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_44;
  *(UnityEngine_Vector3_o *)(&v82 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MasterData_object,
                                           0LL);
  if ( !v43 || !v81 )
    goto LABEL_44;
  v83 = fabsf(v82 + *((float *)&v43[5].monitor + 1));
  v84 = (int)v83;
  if ( v83 == INFINITY )
    v84 = 0x80000000;
  UIWidget__set_height(v81, v84 + this->fields.WIDGET_HEIGHT_ADD_VALUE, 0LL);
  MasterData_object = (DataManager_o *)this->fields.lineSprite;
  if ( !MasterData_object
    || (MasterData_object = (DataManager_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)MasterData_object,
                                               0LL)) == 0LL
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_object, 0LL),
        (MasterData_object = (DataManager_o *)this->fields.lineSprite) == 0LL)
    || (v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_object, 0LL),
        GameObjectExtensions__SetLocalPosition(v85, *(UnityEngine_Vector3_o *)&v43[5].monitor, 0LL),
        (MasterData_object = (DataManager_o *)this->fields.buttonContainer) == 0LL) )
  {
LABEL_44:
    sub_1BCAA3C(MasterData_object, v36);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
}


void __fastcall ServantEquipEffectFilterController__RefreshSelectState(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *containerList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1198C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v8, v9);
    byte_4B1198C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  containerList = this->fields.containerList;
  if ( !containerList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)containerList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    ServantEquipEffectFilterContainer__RefreshSelectState(
      (ServantEquipEffectFilterContainer_o *)v12.fields._current,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void __fastcall ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_int__int__o *v13; // x21
  __int64 v14; // x1
  long double v15; // q0
  __int64 v16; // x0
  __int64 v17; // x0
  void *MasterData_object; // x0
  int v19; // w8
  void *v20; // x21
  unsigned int v21; // w24
  __int64 v22; // x8
  int32_t v23; // w22
  System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x23

  if ( (byte_4B1198E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11, v12);
    byte_4B1198E = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               method,
                                                               v2,
                                                               v3);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v13,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.defaultFilterData = v13;
  sub_1BCA784(&this->fields.defaultFilterData, v13);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC(v15);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC(v15);
  MasterData_object = **(void ***)(v17 + 184);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_object )
    goto LABEL_18;
  MasterData_object = FunctionCategoryMaster__GetEntitiesByFlag(
                        (FunctionCategoryMaster_o *)MasterData_object,
                        this->fields.categoryFlag,
                        0LL);
  if ( !MasterData_object )
    goto LABEL_18;
  v19 = *((_DWORD *)MasterData_object + 6);
  v20 = MasterData_object;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= v19 )
        sub_1BCAA44(MasterData_object, v14);
      v22 = *((_QWORD *)v20 + (int)v21 + 4);
      if ( !v22 )
        break;
      MasterData_object = this->fields.sort;
      if ( !MasterData_object )
        break;
      v23 = *(_DWORD *)(v22 + 16);
      defaultFilterData = this->fields.defaultFilterData;
      MasterData_object = (void *)ListViewSort__GetSvtEquipEffectFilterInt(
                                    (ListViewSort_o *)MasterData_object,
                                    v23,
                                    0LL);
      if ( !defaultFilterData )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        defaultFilterData,
        v23,
        (int32_t)MasterData_object,
        (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
        return;
    }
LABEL_18:
    sub_1BCAA3C(MasterData_object, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__SetEnableFilterButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *containerList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  bool v14; // w20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B11991 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      isEnable,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v9, v10);
    byte_4B11991 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  containerList = (System_Collections_Generic_List_object__o *)this->fields.containerList;
  if ( !containerList )
    goto LABEL_12;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    containerList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v15.fields._current )
      sub_1BCAA3C(0LL, v12);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v15.fields._current,
      isEnable,
      v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  containerList = (System_Collections_Generic_List_object__o *)this->fields.forceSelectAllButton;
  if ( !containerList
    || (v14 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v14, 0LL),
        (containerList = (System_Collections_Generic_List_object__o *)this->fields.forceDeselectAllButton) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(containerList, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)containerList, v14, 0LL);
}


void __fastcall ServantEquipEffectFilterController__SetupLabelObject(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *titleLabel; // x20
  System_String_o **v13; // x8
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *forceSelectAllButtonLabel; // x20
  UILabel_o *forceDeselectAllButtonLabel; // x19

  if ( (byte_4B1198D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11709/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_11712/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11710/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11707/*"SERVANT_EFFECT_FILTER_TITLE"*/, v10, v11);
    byte_4B1198D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( this->fields.categoryFlag == 4 )
    v13 = (System_String_o **)&StringLiteral_11707/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v13 = (System_String_o **)&StringLiteral_11712/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v14 = *v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v15 = LocalizationManager__Get(v14, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v15, 0LL),
        forceSelectAllButtonLabel = this->fields.forceSelectAllButtonLabel,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11710/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0LL),
        !forceSelectAllButtonLabel)
    || (UILabel__set_text(forceSelectAllButtonLabel, v15, 0LL),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11709/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0LL),
        !forceDeselectAllButtonLabel) )
  {
    sub_1BCAA3C(v15, v16);
  }
  UILabel__set_text(forceDeselectAllButtonLabel, v15, 0LL);
}