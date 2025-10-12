void MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37EF1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
    byte_4C37EF1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *MyRoomAddMaster__DisplayBgGroupList(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_int__o *v4; // x19
  System_Collections_Generic_Dictionary_int__int__o *v5; // x20
  MyRoomAddMaster___c_c *v6; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *_9__13_0; // x23
  Il2CppObject *v9; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 Master_object; // x0
  __int64 v14; // x8
  __int64 v15; // x21
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x21
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x23
  int32_t v29; // w24
  int32_t v30; // w26
  int64_t v31; // x25
  _BOOL8 IsOpen; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Func_KeyValuePair_int__int___long__o *v40; // x22
  __int64 v41; // x8
  __int64 v42; // x20
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x20
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  struct System_Int32_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10

  if ( (byte_4C37EF9 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__int____);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_int__int___long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C32C20(&System_Func_KeyValuePair_int__int___long__TypeInfo);
    sub_1C32C20(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_0__);
    sub_1C32C20(&Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__1__);
    sub_1C32C20(&MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
    sub_1C32C20(&MyRoomAddMaster___c_TypeInfo);
    byte_4C37EF9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v6 = MyRoomAddMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v6 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v6->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = MyRoomAddMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_MyRoomAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_0, v9, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_MyRoomAddEntity__bool__o *)_9__13_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v11, v12);
  }
  Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)list,
                             (System_Func_TSource__bool__o *)_9__13_0,
                             (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  if ( !Master_object )
    goto LABEL_94;
  v14 = *(_QWORD *)Master_object;
  v15 = Master_object;
  v16 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
  {
    v17 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_MyRoomAddEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_16;
    }
    v18 = v14 + 16LL * *v17 + 312;
  }
  else
  {
LABEL_16:
    v18 = sub_1C83438(Master_object, System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo, 0);
  }
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v19 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_23;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_23:
      v23 = sub_1C83438(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_MyRoomAddEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_30;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_30:
      v27 = sub_1C83438(v19, System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_1C32E7C(0);
    v30 = *(_DWORD *)(v28 + 40);
    v29 = *(_DWORD *)(v28 + 44);
    v31 = *(int *)(v28 + 48);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v30, v29, v31, 0, 0, 0);
    if ( IsOpen && *(_QWORD *)(v28 + 56) <= Time && *(_QWORD *)(v28 + 64) >= Time )
    {
      if ( !v5 )
        sub_1C32E7C(IsOpen);
      if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
              v5,
              *(_DWORD *)(v28 + 28),
              (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        System_Collections_Generic_Dictionary_int__int___Add(
          v5,
          *(_DWORD *)(v28 + 28),
          *(_DWORD *)(v28 + 32),
          (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v33 = *(_QWORD *)v19;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_45;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_45:
    v36 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v19, *(_QWORD *)(v36 + 8));
  Master_object = System_Linq_Enumerable__Any_KeyValuePair_int__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                    (const MethodInfo_30E7FD8 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__int____);
  if ( (Master_object & 1) != 0 )
  {
    v37 = sub_1C32E6C(MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v37, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarMaster___);
    if ( v37 )
    {
      *(_QWORD *)(v37 + 16) = Master_object;
      sub_1C32BC4((CGThumbnailListItem_o *)(v37 + 16), Master_object, v38, v39);
      v40 = (System_Func_KeyValuePair_int__int___long__o *)sub_1C32E6C(System_Func_KeyValuePair_int__int___long__TypeInfo);
      System_Func_KeyValuePair_int__int___long____ctor(
        v40,
        (Il2CppObject *)v37,
        Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__1__,
        0);
      Master_object = (__int64)System_Linq_Enumerable__OrderByDescending_KeyValuePair_int__int___long_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                 (System_Func_TSource__TKey__o *)v40,
                                 (const MethodInfo_310CDD0 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_int__int___long___);
      if ( Master_object )
      {
        v41 = *(_QWORD *)Master_object;
        v42 = Master_object;
        v43 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v44 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__int___c **)v44 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo )
          {
            --v43;
            v44 += 4;
            if ( !v43 )
              goto LABEL_56;
          }
          v45 = v41 + 16LL * *v44 + 312;
        }
        else
        {
LABEL_56:
          v45 = sub_1C83438(Master_object, System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo, 0);
        }
        v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
        if ( !v46 )
          sub_1C32E7C(0);
        while ( 1 )
        {
          v47 = *(_QWORD *)v46;
          v48 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
          {
            v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v48;
              v49 += 4;
              if ( !v48 )
                goto LABEL_63;
            }
            v50 = v47 + 16LL * *v49 + 312;
          }
          else
          {
LABEL_63:
            v50 = sub_1C83438(v46, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
            break;
          v51 = *(_QWORD *)v46;
          v52 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
          {
            v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__int___c **)v53 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo )
            {
              --v52;
              v53 += 4;
              if ( !v52 )
                goto LABEL_70;
            }
            v54 = v51 + 16LL * *v53 + 312;
          }
          else
          {
LABEL_70:
            v54 = sub_1C83438(v46, System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo, 0);
          }
          v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
          if ( !v4 )
            sub_1C32E7C(v55);
          items = v4->fields._items;
          v57 = Method_System_Collections_Generic_List_int__Add__;
          ++v4->fields._version;
          if ( !items )
            sub_1C32E7C(v55);
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              v55,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v4->fields._size = size + 1;
            items->m_Items[size] = v55;
          }
        }
        v59 = *(_QWORD *)v46;
        v60 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
        {
          v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
          {
            --v60;
            v61 += 4;
            if ( !v60 )
              goto LABEL_81;
          }
          v62 = v59 + 16LL * *v61 + 312;
        }
        else
        {
LABEL_81:
          v62 = sub_1C83438(v46, System_IDisposable_TypeInfo, 0);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v46, *(_QWORD *)(v62 + 8));
        goto LABEL_84;
      }
    }
LABEL_94:
    sub_1C32E7C(Master_object);
  }
LABEL_84:
  if ( !v4 )
    goto LABEL_94;
  v63 = v4->fields._items;
  v64 = Method_System_Collections_Generic_List_int__Add__;
  ++v4->fields._version;
  if ( !v63 )
    goto LABEL_94;
  v65 = v4->fields._size;
  if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v4,
      0,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v4->fields._size = v65 + 1;
    v63->m_Items[v65] = 0;
  }
  return v4;
}


int32_t MyRoomAddMaster__GetBackObjAnimationNum(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct MyRoomAddEntity_o **p_BackObjAnimationChangeEntity; // x19
  MyRoomAddEntity_o *EnableEntityList; // x0
  const MethodInfo *v8; // x1
  MyRoomAddEntity_o *BackObjAnimationChangeEntity; // x8
  System_Collections_Generic_List_object__o *v10; // x20
  MyRoomAddEntity_o *v11; // x21
  int32_t overwriteId; // w28
  int size; // w29
  int64_t Time; // x0
  int64_t v15; // x22
  MyRoomAddMaster___c_c *v16; // x0
  System_Comparison_T__o *_9__12_0; // x23
  Il2CppObject *v18; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w24
  int32_t v23; // w23
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  MyRoomAddEntity_o *v27; // x25
  int32_t condValue; // w26
  int32_t condType; // w27
  int64_t condValue2; // x25
  char v32; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C37EF8 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__);
    sub_1C32C20(&MyRoomAddMaster___c_TypeInfo);
    byte_4C37EF8 = 1;
  }
  p_BackObjAnimationChangeEntity = &this->fields.BackObjAnimationChangeEntity;
  if ( !this->fields.BackObjAnimationChangeEntity )
    return 0;
  EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddMaster__GetEnableEntityList(this, 8, groupId, 1, v3);
  BackObjAnimationChangeEntity = this->fields.BackObjAnimationChangeEntity;
  if ( !BackObjAnimationChangeEntity
    || (v10 = (System_Collections_Generic_List_object__o *)EnableEntityList,
        EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(BackObjAnimationChangeEntity, v8),
        !*p_BackObjAnimationChangeEntity)
    || !v10 )
  {
LABEL_32:
    sub_1C32E7C(EnableEntityList);
  }
  v11 = EnableEntityList;
  overwriteId = (*p_BackObjAnimationChangeEntity)->fields.overwriteId;
  size = v10->fields._size;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( size < 1 )
    return 1;
  v15 = Time;
  v16 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v16 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__12_0 = (System_Comparison_T__o *)v16->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__12_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__12_0, v18, Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__12_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_58303104(
    v10,
    _9__12_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v32 = 0;
  v22 = 0;
  v23 = 1;
  do
  {
    EnableEntityList = (MyRoomAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v10,
                                              v22,
                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_32;
    v27 = EnableEntityList;
    if ( overwriteId == EnableEntityList->fields.overwriteId )
    {
      if ( v11 == (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(EnableEntityList, v24) )
      {
        if ( v27->fields.endedAt > v15 )
          goto LABEL_26;
        v32 = 1;
      }
      if ( v27->fields.startedAt <= v15 )
      {
        condType = v27->fields.condType;
        condValue = v27->fields.condValue;
        condValue2 = v27->fields.condValue2;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 += CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
      }
    }
LABEL_26:
    ++v22;
  }
  while ( size != v22 );
  if ( (v32 & 1) != 0 )
  {
    *p_BackObjAnimationChangeEntity = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)p_BackObjAnimationChangeEntity, 0, v25, v26);
  }
  return v23;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v7; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  int size; // w26
  System_Collections_Generic_List_object__o *v10; // x20
  MyRoomAddMaster___c_c *v11; // x0
  System_Comparison_T__o *_9__10_0; // x21
  Il2CppObject *v13; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w21
  struct MyRoomAddEntity_o *v18; // x22
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C37EF7 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C32C20(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__);
    sub_1C32C20(&MyRoomAddMaster___c_TypeInfo);
    byte_4C37EF7 = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 8, groupId, v3);
  if ( result <= 0 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                      this,
                                                                      8,
                                                                      groupId,
                                                                      0,
                                                                      v7);
    if ( !EnableEntityList )
LABEL_23:
      sub_1C32E7C(EnableEntityList);
    size = EnableEntityList->fields._size;
    v10 = EnableEntityList;
    if ( size < 1 )
    {
      return -1;
    }
    else
    {
      v11 = MyRoomAddMaster___c_TypeInfo;
      if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
        v11 = MyRoomAddMaster___c_TypeInfo;
      }
      _9__10_0 = (System_Comparison_T__o *)v11->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = MyRoomAddMaster___c_TypeInfo;
        }
        v13 = (Il2CppObject *)v11->static_fields->__9;
        _9__10_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__10_0,
          v13,
          Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__,
          0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__10_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v15, v16);
      }
      System_Collections_Generic_List_object___Sort_58303104(
        v10,
        _9__10_0,
        (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v17 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v10,
                                                                          v17,
                                                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_23;
        v18 = (struct MyRoomAddEntity_o *)EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          break;
        if ( size == ++v17 )
          return -1;
      }
      if ( MyRoomAddEntity__GetScheduleUpdateAt(v18, v22) >= 1 )
      {
        this->fields.BackObjAnimationChangeEntity = v18;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.BackObjAnimationChangeEntity, (int32_t)v18, v23, v24);
      }
      return v18->fields.overwriteId;
    }
  }
  return result;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  int size; // w25
  System_Collections_Generic_List_object__o *v8; // x19
  MyRoomAddMaster___c_c *v9; // x0
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v11; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w20
  System_Collections_Generic_List_object__o *v16; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4C37EF3 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__);
    sub_1C32C20(&MyRoomAddMaster___c_TypeInfo);
    byte_4C37EF3 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    1,
                                                                    groupId,
                                                                    0,
                                                                    v3);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v8 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1C32E7C(EnableEntityList);
  }
  v9 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v9 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v9->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = MyRoomAddMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v11, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v13, v14);
  }
  System_Collections_Generic_List_object___Sort_58303104(
    v8,
    _9__6_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v15 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v8,
                                                                      v15,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v16 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v16->fields._syncRoot);
    if ( size == ++v15 )
      goto LABEL_17;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v7; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  int size; // w25
  System_Collections_Generic_List_object__o *v10; // x19
  MyRoomAddMaster___c_c *v11; // x0
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v13; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w20
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4C37EF4 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__);
    sub_1C32C20(&MyRoomAddMaster___c_TypeInfo);
    byte_4C37EF4 = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 2, groupId, v3);
  if ( result > 0 )
    return result;
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    2,
                                                                    groupId,
                                                                    0,
                                                                    v7);
  if ( !EnableEntityList )
LABEL_23:
    sub_1C32E7C(EnableEntityList);
  size = EnableEntityList->fields._size;
  v10 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_18:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
    goto LABEL_23;
  }
  v11 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v11 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v11->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = MyRoomAddMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v13, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v15, v16);
  }
  System_Collections_Generic_List_object___Sort_58303104(
    v10,
    _9__7_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v17 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v10,
                                                                      v17,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_23;
    v18 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v18->fields._syncRoot);
    if ( size == ++v17 )
      goto LABEL_18;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t result; // w0
  const MethodInfo *v8; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  int size; // w26
  System_Collections_Generic_List_object__o *v11; // x20
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v14; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w21
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24

  if ( (byte_4C37EF5 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C32C20(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__);
    sub_1C32C20(&MyRoomAddMaster___c_TypeInfo);
    byte_4C37EF5 = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 6, groupId, method);
  if ( result <= 0 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                      this,
                                                                      6,
                                                                      groupId,
                                                                      0,
                                                                      v8);
    if ( !EnableEntityList )
LABEL_21:
      sub_1C32E7C(EnableEntityList);
    size = EnableEntityList->fields._size;
    v11 = EnableEntityList;
    if ( size < 1 )
    {
      return defaultId;
    }
    else
    {
      v12 = MyRoomAddMaster___c_TypeInfo;
      if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
        v12 = MyRoomAddMaster___c_TypeInfo;
      }
      _9__8_0 = (System_Comparison_T__o *)v12->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = MyRoomAddMaster___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__8_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__8_0,
          v14,
          Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__,
          0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v16, v17);
      }
      System_Collections_Generic_List_object___Sort_58303104(
        v11,
        _9__8_0,
        (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v18 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v11,
                                                                          v18,
                                                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_21;
        v19 = EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          return HIDWORD(v19->fields._syncRoot);
        if ( size == ++v18 )
          return defaultId;
      }
    }
  }
  return result;
}


int64_t MyRoomAddMaster__GetChangeMyRoomGetScheduleUpdateAt(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.BackObjAnimationChangeEntity;
  if ( result )
    return MyRoomAddEntity__GetScheduleUpdateAt((MyRoomAddEntity_o *)result, method);
  return result;
}


int32_t MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        bool checkDiff,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  const MethodInfo *v8; // x2
  int size; // w28
  System_Collections_Generic_List_object__o *v10; // x22
  MyRoomAddMaster___c_c *v11; // x0
  System_Comparison_T__o *_9__9_0; // x23
  Il2CppObject *v13; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w23
  System_Collections_Generic_List_object__o *v18; // x24
  int32_t klass_high; // w25
  int32_t klass; // w27
  int64_t monitor_low; // x26
  int32_t syncRoot_high; // w22
  const MethodInfo *v23; // x3
  int32_t result; // w0

  if ( (byte_4C37EF6 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C32C20(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__);
    sub_1C32C20(&MyRoomAddMaster___c_TypeInfo);
    byte_4C37EF6 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    7,
                                                                    groupId,
                                                                    0,
                                                                    v4);
  if ( !EnableEntityList )
    goto LABEL_28;
  size = EnableEntityList->fields._size;
  v10 = EnableEntityList;
  if ( size < 1 )
    goto LABEL_19;
  v11 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v11 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__9_0 = (System_Comparison_T__o *)v11->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = MyRoomAddMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__9_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__9_0,
      v13,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__,
      0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__9_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v15, v16);
  }
  System_Collections_Generic_List_object___Sort_58303104(
    v10,
    _9__9_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v17 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v10,
                                                                      v17,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_28;
    v18 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      break;
    if ( size == ++v17 )
      goto LABEL_19;
  }
  syncRoot_high = HIDWORD(v18->fields._syncRoot);
  if ( !syncRoot_high )
LABEL_19:
    syncRoot_high = MyRoomAddMaster__GetChangeMyRoomBgId(this, groupId, v8);
  if ( !checkDiff )
    return syncRoot_high;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !EnableEntityList )
LABEL_28:
    sub_1C32E7C(EnableEntityList);
  result = MyroomAddBgDiffMaster__GetDisplayObjectId((MyroomAddBgDiffMaster_o *)EnableEntityList, 1, syncRoot_high, v23);
  if ( result <= 0 )
    return syncRoot_high;
  return result;
}


int32_t MyRoomAddMaster__GetDiffObjectId(
        MyRoomAddMaster_o *this,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t v7; // w20
  Il2CppObject *Master_object; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4C37EFD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37EFD = 1;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(this, groupId, 0, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  return MyroomAddBgDiffMaster__GetDisplayObjectId((MyroomAddBgDiffMaster_o *)Master_object, type, v7, v9);
}


System_Collections_Generic_List_int__o *MyRoomAddMaster__GetDisplayOverWriteIds(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  const MethodInfo *v8; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  const MethodInfo *v12; // x3
  struct System_Int32_array *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  const MethodInfo *v16; // x2
  struct System_Int32_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  MyRoomAddMaster___c_c *v23; // x0
  System_Predicate_int__o *_9__14_0; // x20
  Il2CppObject *v25; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4C37EFA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Predicate_int__TypeInfo);
    sub_1C32C20(&Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__);
    sub_1C32C20(&MyRoomAddMaster___c_TypeInfo);
    byte_4C37EFA = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(this, groupId, 1, v6);
  if ( !v5 )
    goto LABEL_27;
  items = v5->fields._items;
  v10 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    items->m_Items[size] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomBgm(this, groupId, v8);
  v13 = v5->fields._items;
  v14 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v13 )
    goto LABEL_27;
  v15 = v5->fields._size;
  if ( (unsigned int)v15 >= LODWORD(v13->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v15 + 1;
    v13->m_Items[v15] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomFrontObjId(this, groupId, -1, v12);
  v17 = v5->fields._items;
  v18 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v17 )
    goto LABEL_27;
  v19 = v5->fields._size;
  if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v19 + 1;
    v17->m_Items[v19] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomBackObjId(this, groupId, v16);
  v20 = v5->fields._items;
  v21 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v20 )
LABEL_27:
    sub_1C32E7C(v7);
  v22 = v5->fields._size;
  if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v22 + 1;
    v20->m_Items[v22] = v7;
  }
  v23 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v23 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__14_0 = v23->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = MyRoomAddMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__14_0 = (System_Predicate_int__o *)sub_1C32E6C(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__14_0, v25, Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v27, v28);
  }
  System_Collections_Generic_List_int___RemoveAll(
    v5,
    (System_Predicate_T__o *)_9__14_0,
    (const MethodInfo_377CDC0 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return v5;
}


System_Collections_Generic_List_MyRoomAddEntity__o *MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        int32_t groupId,
        bool isIgnoreTimeLimit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  const MethodInfo *v12; // x1
  int64_t Time; // x25
  int32_t MainGroupWarId; // w26
  int32_t v15; // w27
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_ObjectModel_Collection_T__o *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4C37EF2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37EF2 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( groupId )
    MainGroupWarId = 0;
  else
    MainGroupWarId = MyRoomAddMaster__GetMainGroupWarId(this, v12);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
      if ( !list )
        break;
      v18 = list;
      if ( HIDWORD(list->fields.items) == type
        && (groupId < 0 || HIDWORD(list[1].klass) == groupId)
        && (groupId || LODWORD(list[1].monitor) == MainGroupWarId)
        && (isIgnoreTimeLimit || (__int64)list[2].monitor <= Time && (__int64)list[2].fields.items >= Time) )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v20 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v18;
          sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v18, v16, v17);
        }
      }
      if ( Count == ++v15 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v9;
    }
LABEL_29:
    sub_1C32E7C(list);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
MyRoomAddEntity_o *MyRoomAddMaster__GetEntity(
        MyRoomAddMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37EEF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
    byte_4C37EEF = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_339B2F0 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
}


int32_t MyRoomAddMaster__GetMainGroupWarId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t Time; // x0
  int32_t *v5; // x22
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Collections_Generic_List_T__o *v9; // x19
  System_Func_object__bool__o *v10; // x21
  MyRoomAddMaster___c_c *v11; // x0
  System_Comparison_T__o *_9__16_2; // x20
  Il2CppObject *v13; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C37EFC & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_MyRoomAddEntity___);
    sub_1C32C20(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C32C20(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__);
    sub_1C32C20(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__);
    sub_1C32C20(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__);
    sub_1C32C20(&MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
    sub_1C32C20(&MyRoomAddMaster___c_TypeInfo);
    sub_1C32C20(&StringLiteral_5297/*"DisplayMyRoomBgWar"*/);
    byte_4C37EFC = 1;
  }
  v3 = sub_1C32E6C(MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    goto LABEL_19;
  *(_QWORD *)(v3 + 16) = Time;
  *(_DWORD *)(v3 + 24) = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5297/*"DisplayMyRoomBgWar"*/, -1, 0);
  v5 = (int32_t *)(v3 + 24);
  list = this->fields.list;
  v7 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__,
    0);
  v8 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v9 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_object_(
                                                 v8,
                                                 (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__,
    0);
  Time = BasicHelper__Any_object_(
           v9,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_30C6790 *)Method_BasicHelper_Any_MyRoomAddEntity___);
  if ( (Time & 1) != 0 )
    return *v5;
  if ( !v9 )
LABEL_19:
    sub_1C32E7C(Time);
  if ( v9->fields._size >= 1 )
  {
    v11 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v11 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__16_2 = (System_Comparison_T__o *)v11->static_fields->__9__16_2;
    if ( !_9__16_2 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = MyRoomAddMaster___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__16_2 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__16_2, v13, Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__, 0);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__16_2 = (struct System_Comparison_MyRoomAddEntity__o *)_9__16_2;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__16_2, (int32_t)_9__16_2, v15, v16);
    }
    System_Collections_Generic_List_object___Sort_58303104(
      (System_Collections_Generic_List_object__o *)v9,
      _9__16_2,
      (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    Time = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v9,
                      0,
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( Time )
    {
      v5 = (int32_t *)(Time + 32);
      return *v5;
    }
    goto LABEL_19;
  }
  return 0;
}


bool MyRoomAddMaster__IsExistOverWriteIdInGroup(
        MyRoomAddMaster_o *this,
        int32_t overWriteId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C37EFB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
    sub_1C32C20(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C32C20(&Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__);
    sub_1C32C20(&MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
    byte_4C37EFB = 1;
  }
  v7 = sub_1C32E6C(MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = groupId;
  *(_DWORD *)(v7 + 20) = overWriteId;
  list = this->fields.list;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51293756(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_30EAE3C *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool MyRoomAddMaster__TryGetEntity(
        MyRoomAddMaster_o *this,
        MyRoomAddEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37EF0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
    byte_4C37EF0 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37EFE & 1) == 0 )
  {
    sub_1C32C20(&MyRoomAddMaster___c_TypeInfo);
    byte_4C37EFE = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MyRoomAddMaster___c___ctor(MyRoomAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c___DisplayBgGroupList_b__13_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.groupId != 0;
}


int32_t MyRoomAddMaster___c___GetBackObjAnimationNum_b__12_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__10_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgm_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__9_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}


bool MyRoomAddMaster___c___GetDisplayOverWriteIds_b__14_0(
        MyRoomAddMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id < 1;
}


int32_t MyRoomAddMaster___c___GetMainGroupWarId_b__16_2(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}


void MyRoomAddMaster___c__DisplayClass13_0___ctor(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t MyRoomAddMaster___c__DisplayClass13_0___DisplayBgGroupList_b__1(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarMaster_o *warMst; // x0

  value = x.fields.value;
  if ( (byte_4C37EFF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4C37EFF = 1;
  }
  warMst = this->fields.warMst;
  if ( !warMst )
    sub_1C32E7C(0);
  return WarMaster__GetEventStartAt(warMst, value, 0);
}


void MyRoomAddMaster___c__DisplayClass15_0___ctor(
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass15_0___IsExistOverWriteIdInGroup_b__0(
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.groupId == this->fields.groupId && entity->fields.overwriteId == this->fields.overWriteId;
}


void MyRoomAddMaster___c__DisplayClass16_0___ctor(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass16_0___GetMainGroupWarId_b__0(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  MyRoomAddMaster___c__DisplayClass16_0_o *v4; // x20
  bool result; // w0
  int32_t condValue; // w21
  int32_t condType; // w23
  int64_t condValue2; // x22
  bool IsOpen; // w8
  int64_t nowTime; // x8

  v4 = this;
  if ( (byte_4C37F00 & 1) == 0 )
  {
    this = (MyRoomAddMaster___c__DisplayClass16_0_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C37F00 = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
  if ( entity->fields.groupId )
    return 0;
  condType = entity->fields.condType;
  condValue = entity->fields.condValue;
  condValue2 = entity->fields.condValue2;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
  result = 0;
  if ( IsOpen )
  {
    nowTime = v4->fields.nowTime;
    if ( entity->fields.startedAt > nowTime )
      return 0;
    return entity->fields.endedAt >= nowTime;
  }
  return result;
}


bool MyRoomAddMaster___c__DisplayClass16_0___GetMainGroupWarId_b__1(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.warId == this->fields.displayWarId;
}