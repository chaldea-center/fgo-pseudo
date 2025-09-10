void MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C277F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
    byte_4C277F0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_338A52C *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
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
  __int64 v14; // x1
  __int64 v15; // x8
  __int64 v16; // x21
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x23
  int32_t v32; // w24
  int32_t v33; // w26
  int64_t v34; // x25
  _BOOL8 IsOpen; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Func_KeyValuePair_int__int___long__o *v44; // x22
  __int64 v45; // x8
  __int64 v46; // x20
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x20
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  struct System_Int32_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10

  if ( (byte_4C277F8 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__int____);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_int__int___long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C2D490(&System_Func_KeyValuePair_int__int___long__TypeInfo);
    sub_1C2D490(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_0__);
    sub_1C2D490(&Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__1__);
    sub_1C2D490(&MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
    sub_1C2D490(&MyRoomAddMaster___c_TypeInfo);
    byte_4C277F8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
    _9__13_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MyRoomAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_0, v9, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_MyRoomAddEntity__bool__o *)_9__13_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v11, v12);
  }
  Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)list,
                             (System_Func_TSource__bool__o *)_9__13_0,
                             (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  if ( !Master_object )
    goto LABEL_94;
  v15 = *(_QWORD *)Master_object;
  v16 = Master_object;
  v17 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
  {
    v18 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_MyRoomAddEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = v15 + 16LL * *v18 + 312;
  }
  else
  {
LABEL_16:
    v19 = sub_1C7DCA8(Master_object, System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo, 0);
  }
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1C2D6EC(0, v20);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_23;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_23:
      v25 = sub_1C7DCA8(v21, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_MyRoomAddEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_30;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_30:
      v29 = sub_1C7DCA8(v21, System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( !v31 )
      sub_1C2D6EC(0, v30);
    v33 = *(_DWORD *)(v31 + 40);
    v32 = *(_DWORD *)(v31 + 44);
    v34 = *(int *)(v31 + 48);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v33, v32, v34, 0, 0, 0);
    if ( IsOpen && *(_QWORD *)(v31 + 56) <= Time && *(_QWORD *)(v31 + 64) >= Time )
    {
      if ( !v5 )
        sub_1C2D6EC(IsOpen, v36);
      if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
              v5,
              *(_DWORD *)(v31 + 28),
              (const MethodInfo_33D89B0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        System_Collections_Generic_Dictionary_int__int___Add(
          v5,
          *(_DWORD *)(v31 + 28),
          *(_DWORD *)(v31 + 32),
          (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v37 = *(_QWORD *)v21;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_45;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_45:
    v40 = sub_1C7DCA8(v21, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v21, *(_QWORD *)(v40 + 8));
  Master_object = System_Linq_Enumerable__Any_KeyValuePair_int__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                    (const MethodInfo_30D9538 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__int____);
  if ( (Master_object & 1) != 0 )
  {
    v41 = sub_1C2D6DC(MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v41, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
    if ( v41 )
    {
      *(_QWORD *)(v41 + 16) = Master_object;
      sub_1C2D434((CGThumbnailListItem_o *)(v41 + 16), Master_object, v42, v43);
      v44 = (System_Func_KeyValuePair_int__int___long__o *)sub_1C2D6DC(System_Func_KeyValuePair_int__int___long__TypeInfo);
      System_Func_KeyValuePair_int__int___long____ctor(
        v44,
        (Il2CppObject *)v41,
        Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__1__,
        0);
      Master_object = (__int64)System_Linq_Enumerable__OrderByDescending_KeyValuePair_int__int___long_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                 (System_Func_TSource__TKey__o *)v44,
                                 (const MethodInfo_30FE330 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_int__int___long___);
      if ( Master_object )
      {
        v45 = *(_QWORD *)Master_object;
        v46 = Master_object;
        v47 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v48 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__int___c **)v48 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo )
          {
            --v47;
            v48 += 4;
            if ( !v47 )
              goto LABEL_56;
          }
          v49 = v45 + 16LL * *v48 + 312;
        }
        else
        {
LABEL_56:
          v49 = sub_1C7DCA8(Master_object, System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo, 0);
        }
        v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v46, *(_QWORD *)(v49 + 8));
        if ( !v51 )
          sub_1C2D6EC(0, v50);
        while ( 1 )
        {
          v52 = *(_QWORD *)v51;
          v53 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
          {
            v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v53;
              v54 += 4;
              if ( !v53 )
                goto LABEL_63;
            }
            v55 = v52 + 16LL * *v54 + 312;
          }
          else
          {
LABEL_63:
            v55 = sub_1C7DCA8(v51, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
            break;
          v56 = *(_QWORD *)v51;
          v57 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
          {
            v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__int___c **)v58 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo )
            {
              --v57;
              v58 += 4;
              if ( !v57 )
                goto LABEL_70;
            }
            v59 = v56 + 16LL * *v58 + 312;
          }
          else
          {
LABEL_70:
            v59 = sub_1C7DCA8(v51, System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo, 0);
          }
          v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
          if ( !v4 )
            sub_1C2D6EC(v60, v60);
          items = v4->fields._items;
          v62 = Method_System_Collections_Generic_List_int__Add__;
          ++v4->fields._version;
          if ( !items )
            sub_1C2D6EC(v60, v60);
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              v60,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v4->fields._size = size + 1;
            items->m_Items[size] = v60;
          }
        }
        v64 = *(_QWORD *)v51;
        v65 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
          {
            --v65;
            v66 += 4;
            if ( !v65 )
              goto LABEL_81;
          }
          v67 = v64 + 16LL * *v66 + 312;
        }
        else
        {
LABEL_81:
          v67 = sub_1C7DCA8(v51, System_IDisposable_TypeInfo, 0);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v51, *(_QWORD *)(v67 + 8));
        goto LABEL_84;
      }
    }
LABEL_94:
    sub_1C2D6EC(Master_object, v14);
  }
LABEL_84:
  if ( !v4 )
    goto LABEL_94;
  v68 = v4->fields._items;
  v69 = Method_System_Collections_Generic_List_int__Add__;
  ++v4->fields._version;
  if ( !v68 )
    goto LABEL_94;
  v70 = v4->fields._size;
  if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v4,
      0,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v4->fields._size = v70 + 1;
    v68->m_Items[v70] = 0;
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  MyRoomAddEntity_o *v26; // x25
  int32_t condValue; // w26
  int32_t condType; // w27
  int64_t condValue2; // x25
  char v31; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C277F7 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__);
    sub_1C2D490(&MyRoomAddMaster___c_TypeInfo);
    byte_4C277F7 = 1;
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
    sub_1C2D6EC(EnableEntityList, v8);
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
    _9__12_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__12_0, v18, Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__12_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_58242632(
    v10,
    _9__12_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v31 = 0;
  v22 = 0;
  v23 = 1;
  do
  {
    EnableEntityList = (MyRoomAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v10,
                                              v22,
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_32;
    v26 = EnableEntityList;
    if ( overwriteId == EnableEntityList->fields.overwriteId )
    {
      if ( v11 == (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(EnableEntityList, v8) )
      {
        if ( v26->fields.endedAt > v15 )
          goto LABEL_26;
        v31 = 1;
      }
      if ( v26->fields.startedAt <= v15 )
      {
        condType = v26->fields.condType;
        condValue = v26->fields.condValue;
        condValue2 = v26->fields.condValue2;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 += CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
      }
    }
LABEL_26:
    ++v22;
  }
  while ( size != v22 );
  if ( (v31 & 1) != 0 )
  {
    *p_BackObjAnimationChangeEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_BackObjAnimationChangeEntity, 0, v24, v25);
  }
  return v23;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v7; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v9; // x20
  MyRoomAddMaster___c_c *v10; // x0
  System_Comparison_T__o *_9__10_0; // x21
  Il2CppObject *v12; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w22
  struct MyRoomAddEntity_o *v17; // x21
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  const MethodInfo *v21; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C277F6 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C2D490(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__);
    sub_1C2D490(&MyRoomAddMaster___c_TypeInfo);
    byte_4C277F6 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    8,
                                                                    groupId,
                                                                    0,
                                                                    v3);
  if ( !EnableEntityList )
LABEL_21:
    sub_1C2D6EC(EnableEntityList, v7);
  size = EnableEntityList->fields._size;
  v9 = EnableEntityList;
  if ( size < 1 )
    return -1;
  v10 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v10 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v10->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MyRoomAddMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__10_0, v12, Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__10_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v14, v15);
  }
  System_Collections_Generic_List_object___Sort_58242632(
    v9,
    _9__10_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v16 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v9,
                                                                      v16,
                                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v17 = (struct MyRoomAddEntity_o *)EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      break;
    if ( size == ++v16 )
      return -1;
  }
  if ( MyRoomAddEntity__GetScheduleUpdateAt(v17, v21) >= 1 )
  {
    this->fields.BackObjAnimationChangeEntity = v17;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.BackObjAnimationChangeEntity, (int32_t)v17, v23, v24);
  }
  return v17->fields.overwriteId;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v7; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v9; // x19
  MyRoomAddMaster___c_c *v10; // x0
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v12; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w20
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4C277F2 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__);
    sub_1C2D490(&MyRoomAddMaster___c_TypeInfo);
    byte_4C277F2 = 1;
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
  v9 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1C2D6EC(EnableEntityList, v7);
  }
  v10 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v10 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v10->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MyRoomAddMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v12, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v14, v15);
  }
  System_Collections_Generic_List_object___Sort_58242632(
    v9,
    _9__6_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v16 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v9,
                                                                      v16,
                                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v17 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v17->fields._syncRoot);
    if ( size == ++v16 )
      goto LABEL_17;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v7; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v9; // x19
  MyRoomAddMaster___c_c *v10; // x0
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v12; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w20
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4C277F3 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__);
    sub_1C2D490(&MyRoomAddMaster___c_TypeInfo);
    byte_4C277F3 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    2,
                                                                    groupId,
                                                                    0,
                                                                    v3);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v9 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_21:
    sub_1C2D6EC(EnableEntityList, v7);
  }
  v10 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v10 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v10->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MyRoomAddMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v12, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v14, v15);
  }
  System_Collections_Generic_List_object___Sort_58242632(
    v9,
    _9__7_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v16 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v9,
                                                                      v16,
                                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v17 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v17->fields._syncRoot);
    if ( size == ++v16 )
      goto LABEL_17;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v9; // x1
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

  if ( (byte_4C277F4 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C2D490(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__);
    sub_1C2D490(&MyRoomAddMaster___c_TypeInfo);
    byte_4C277F4 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    6,
                                                                    groupId,
                                                                    0,
                                                                    v4);
  if ( !EnableEntityList )
LABEL_20:
    sub_1C2D6EC(EnableEntityList, v9);
  size = EnableEntityList->fields._size;
  v11 = EnableEntityList;
  if ( size >= 1 )
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
      _9__8_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__8_0, v14, Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__, 0);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v16, v17);
    }
    System_Collections_Generic_List_object___Sort_58242632(
      v11,
      _9__8_0,
      (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v18 = 0;
    while ( 1 )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        v11,
                                                                        v18,
                                                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
      if ( !EnableEntityList )
        goto LABEL_20;
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
  return defaultId;
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
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int size; // w27
  System_Collections_Generic_List_object__o *v10; // x21
  MyRoomAddMaster___c_c *v11; // x0
  System_Comparison_T__o *_9__9_0; // x22
  Il2CppObject *v13; // x23
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w22
  System_Collections_Generic_List_object__o *v18; // x23
  int32_t klass_high; // w24
  int32_t klass; // w26
  int64_t monitor_low; // x25

  if ( (byte_4C277F5 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C2D490(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__);
    sub_1C2D490(&MyRoomAddMaster___c_TypeInfo);
    byte_4C277F5 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    7,
                                                                    groupId,
                                                                    0,
                                                                    v3);
  if ( !EnableEntityList )
LABEL_19:
    sub_1C2D6EC(EnableEntityList, v7);
  size = EnableEntityList->fields._size;
  v10 = EnableEntityList;
  if ( size < 1 )
    return MyRoomAddMaster__GetChangeMyRoomBgId(this, groupId, v8);
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
    _9__9_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__9_0,
      v13,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__,
      0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__9_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v15, v16);
  }
  System_Collections_Generic_List_object___Sort_58242632(
    v10,
    _9__9_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v17 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v10,
                                                                      v17,
                                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_19;
    v18 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v18->fields._syncRoot);
    if ( size == ++v17 )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, groupId, v8);
  }
}


System_Collections_Generic_List_int__o *MyRoomAddMaster__GetDisplayOverWriteIds(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  const MethodInfo *v13; // x3
  struct System_Int32_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  const MethodInfo *v17; // x2
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  MyRoomAddMaster___c_c *v24; // x0
  System_Predicate_int__o *_9__14_0; // x20
  Il2CppObject *v26; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4C277F9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Predicate_int__TypeInfo);
    sub_1C2D490(&Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__);
    sub_1C2D490(&MyRoomAddMaster___c_TypeInfo);
    byte_4C277F9 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(this, groupId, v6);
  if ( !v5 )
    goto LABEL_27;
  items = v5->fields._items;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    items->m_Items[size] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomBgm(this, groupId, v9);
  v14 = v5->fields._items;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v14 )
    goto LABEL_27;
  v16 = v5->fields._size;
  if ( (unsigned int)v16 >= LODWORD(v14->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v16 + 1;
    v14->m_Items[v16] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomFrontObjId(this, groupId, -1, v13);
  v18 = v5->fields._items;
  v19 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v18 )
    goto LABEL_27;
  v20 = v5->fields._size;
  if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v20 + 1;
    v18->m_Items[v20] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomBackObjId(this, groupId, v17);
  v21 = v5->fields._items;
  v22 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v21 )
LABEL_27:
    sub_1C2D6EC(v7, v8);
  v23 = v5->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v23 + 1;
    v21->m_Items[v23] = v7;
  }
  v24 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v24 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__14_0 = v24->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = MyRoomAddMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__14_0 = (System_Predicate_int__o *)sub_1C2D6DC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__14_0, v26, Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v28, v29);
  }
  System_Collections_Generic_List_int___RemoveAll(
    v5,
    (System_Predicate_T__o *)_9__14_0,
    (const MethodInfo_376E188 *)Method_System_Collections_Generic_List_int__RemoveAll__);
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
  const MethodInfo *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t Time; // x25
  int32_t MainGroupWarId; // w26
  int32_t v15; // w27
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C277F1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C277F1 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( groupId )
    MainGroupWarId = 0;
  else
    MainGroupWarId = MyRoomAddMaster__GetMainGroupWarId(this, v10);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
      if ( !list )
        break;
      v10 = (const MethodInfo *)list;
      if ( HIDWORD(list->fields.items) == type
        && (groupId < 0 || HIDWORD(list[1].klass) == groupId)
        && (groupId || LODWORD(list[1].monitor) == MainGroupWarId)
        && (isIgnoreTimeLimit || (__int64)list[2].monitor <= Time && (__int64)list[2].fields.items >= Time) )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v19 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v10;
          sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v10, v16, v17);
        }
      }
      if ( Count == ++v15 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v9;
    }
LABEL_29:
    sub_1C2D6EC(list, v10);
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

  if ( (byte_4C277EE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
    byte_4C277EE = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_338C850 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
}


int32_t MyRoomAddMaster__GetMainGroupWarId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t Time; // x0
  __int64 v5; // x1
  int32_t *v6; // x22
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Collections_Generic_List_T__o *v10; // x19
  System_Func_object__bool__o *v11; // x21
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__16_2; // x20
  Il2CppObject *v14; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C277FB & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_MyRoomAddEntity___);
    sub_1C2D490(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C2D490(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__);
    sub_1C2D490(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__);
    sub_1C2D490(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__);
    sub_1C2D490(&MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
    sub_1C2D490(&MyRoomAddMaster___c_TypeInfo);
    sub_1C2D490(&StringLiteral_5289/*"DisplayMyRoomBgWar"*/);
    byte_4C277FB = 1;
  }
  v3 = sub_1C2D6DC(MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    goto LABEL_19;
  *(_QWORD *)(v3 + 16) = Time;
  *(_DWORD *)(v3 + 24) = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5289/*"DisplayMyRoomBgWar"*/, -1, 0);
  v6 = (int32_t *)(v3 + 24);
  list = this->fields.list;
  v8 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v10 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_object_(
                                                  v9,
                                                  (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__,
    0);
  Time = BasicHelper__Any_object_(
           v10,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_MyRoomAddEntity___);
  if ( (Time & 1) != 0 )
    return *v6;
  if ( !v10 )
LABEL_19:
    sub_1C2D6EC(Time, v5);
  if ( v10->fields._size >= 1 )
  {
    v12 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v12 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__16_2 = (System_Comparison_T__o *)v12->static_fields->__9__16_2;
    if ( !_9__16_2 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = MyRoomAddMaster___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__16_2 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__16_2, v14, Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__, 0);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__16_2 = (struct System_Comparison_MyRoomAddEntity__o *)_9__16_2;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__16_2, (int32_t)_9__16_2, v16, v17);
    }
    System_Collections_Generic_List_object___Sort_58242632(
      (System_Collections_Generic_List_object__o *)v10,
      _9__16_2,
      (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    Time = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v10,
                      0,
                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( Time )
    {
      v6 = (int32_t *)(Time + 32);
      return *v6;
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
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4C277FA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
    sub_1C2D490(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C2D490(&Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__);
    sub_1C2D490(&MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
    byte_4C277FA = 1;
  }
  v7 = sub_1C2D6DC(MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_DWORD *)(v7 + 16) = groupId;
  *(_DWORD *)(v7 + 20) = overWriteId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51233692(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_30DC39C *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
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

  if ( (byte_4C277EF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
    byte_4C277EF = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C277FC & 1) == 0 )
  {
    sub_1C2D490(&MyRoomAddMaster___c_TypeInfo);
    byte_4C277FC = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return entity->fields.groupId != 0;
}


int32_t MyRoomAddMaster___c___GetBackObjAnimationNum_b__12_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__10_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgm_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__9_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
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
    sub_1C2D6EC(this, a);
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
  if ( (byte_4C277FD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4C277FD = 1;
  }
  warMst = this->fields.warMst;
  if ( !warMst )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C2D6EC)(0, x);
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
    sub_1C2D6EC(this, 0);
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
  if ( (byte_4C277FE & 1) == 0 )
  {
    this = (MyRoomAddMaster___c__DisplayClass16_0_o *)sub_1C2D490(&CondType_TypeInfo);
    byte_4C277FE = 1;
  }
  if ( !entity )
    sub_1C2D6EC(this, entity);
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
    sub_1C2D6EC(this, 0);
  return entity->fields.warId == this->fields.displayWarId;
}