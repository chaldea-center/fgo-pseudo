void __fastcall EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC4D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__, method);
    byte_49FC4D1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    212,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceResultEntity_o *__fastcall EventRaceResultMaster__GetEntity(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC4CF & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FC4CF = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_30D41FC *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceResultMaster__GetNowTerm(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
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
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  UserEventRaceMaster_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  EventRaceResultMaster___c_c *v21; // x8
  System_Collections_Generic_List_object__o *v22; // x21
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v24; // x23
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w22
  int32_t v29; // w23
  int64_t v30; // x24
  __int64 methodPtr_low; // x10
  bool v32; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FC4D2 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_DataEntityBase___, v6);
    sub_1B640C8(&EventRaceResultEntity_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, v13);
    sub_1B640C8(&EventRaceResultMaster___c_TypeInfo, v14);
    byte_49FC4D2 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v18 = (UserEventRaceMaster_o *)MasterData_object;
  Instance = (int64_t)System_Linq_Enumerable__ToList_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)list,
                        (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_DataEntityBase___);
  v21 = EventRaceResultMaster___c_TypeInfo;
  v22 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo);
    v21 = EventRaceResultMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v21->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = EventRaceResultMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_DataEntityBase__TypeInfo, v19, v20);
    System_Comparison_object____ctor(_9__3_0, v24, Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, 0LL);
    static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_DataEntityBase__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v26, v27);
  }
  if ( !v22 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_55243320(
    v22,
    _9__3_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
  if ( v22->fields._size >= 1 )
  {
    v28 = 0;
    v29 = 0;
    while ( 1 )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v22,
                            v29,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v30 = Instance;
      methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventRaceResultEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 16) == eventId && v28 != *(_DWORD *)(Instance + 20) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v18 )
          break;
        v32 = UserEventRaceMaster__TryGetEntity(v18, &entity, Instance, eventId, *(_DWORD *)(v30 + 20), 0LL);
        if ( !v28 || v32 )
          v28 = *(_DWORD *)(v30 + 20);
      }
      if ( ++v29 >= v22->fields._size )
        return v28;
    }
LABEL_28:
    sub_1B64324(Instance);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventRaceResultMaster__GetRankDatas(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int64_array **goalTime,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_long__o *v30; // x25
  int32_t v31; // w26
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v34; // x20
  __int64 monitor; // x8
  int64_t v36; // x27
  int size; // w8
  int32_t v38; // w28
  int32_t v39; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v41; // x10
  struct System_Int64_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  System_Int64_array *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Int64_array **v49; // [xsp+0h] [xbp-70h]

  if ( (byte_49FC4D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B640C8(&EventRaceResultEntity_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Insert__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Insert__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v21);
    sub_1B640C8(&NetworkManager_TypeInfo, v22);
    byte_49FC4D5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v27 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v25, v26);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v28, v29);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v31 = 0;
    v49 = goalTime;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v31,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v34 = (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRaceResultEntity_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v34 = 0LL;
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
      if ( !v34 )
        break;
      if ( LODWORD(v34[1].klass) == eventId && HIDWORD(v34[1].klass) == termId )
      {
        monitor = (__int64)v34[2].monitor;
        if ( monitor < (__int64)list )
        {
          v36 = monitor - (unsigned __int64)v34[2].klass;
          if ( v36 >= 1 )
          {
            if ( !v27 )
              break;
            size = v27->fields._size;
            if ( size < 1 )
            {
LABEL_27:
              v39 = (int32_t)v34[1].monitor;
              items = v27->fields._items;
              v41 = Method_System_Collections_Generic_List_int__Add__;
              ++v27->fields._version;
              if ( !items )
                break;
              if ( size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v27,
                  v39,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
              }
              else
              {
                v27->fields._size = size + 1;
                items->m_Items[size + 1] = v39;
              }
              if ( !v30 )
                break;
              v42 = v30->fields._items;
              v43 = Method_System_Collections_Generic_List_long__Add__;
              ++v30->fields._version;
              if ( !v42 )
                break;
              v44 = v30->fields._size;
              if ( (unsigned int)v44 >= v42->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v30,
                  v36,
                  *(const MethodInfo_3495074 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
              }
              else
              {
                v30->fields._size = v44 + 1;
                v42->m_Items[v44] = v36;
              }
            }
            else
            {
              v38 = 0;
              while ( 1 )
              {
                if ( !v30 )
                  goto LABEL_41;
                list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_long___get_Item(
                                                                           v30,
                                                                           v38,
                                                                           (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__);
                if ( (__int64)list > v36 )
                  break;
                size = v27->fields._size;
                if ( size <= ++v38 )
                {
                  goalTime = v49;
                  goto LABEL_27;
                }
              }
              System_Collections_Generic_List_int___Insert(
                v27,
                v38,
                (int32_t)v34[1].monitor,
                (const MethodInfo_3490D00 *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v30,
                v38,
                v36,
                (const MethodInfo_3495E98 *)Method_System_Collections_Generic_List_long__Insert__);
              goalTime = v49;
            }
          }
        }
      }
      if ( ++v31 == Count )
        goto LABEL_38;
    }
LABEL_41:
    sub_1B64324(list);
  }
LABEL_38:
  if ( !v30 )
    goto LABEL_41;
  v45 = System_Collections_Generic_List_long___ToArray(
          v30,
          (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v45;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)goalTime, (int32_t)v45, v46, v47);
  if ( !v27 )
    goto LABEL_41;
  return System_Collections_Generic_List_int___ToArray(
           v27,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventRaceResultMaster__GetRankedGroupId(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        int64_t *goalTime,
        const MethodInfo *method)
{
  System_Int32_array *RankDatas; // x0
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // w9
  int64_t v11; // x8
  int32_t v12; // w8
  System_Int64_array *goalTimea; // [xsp+8h] [xbp-18h] BYREF

  goalTimea = 0LL;
  RankDatas = EventRaceResultMaster__GetRankDatas(this, eventId, termId, &goalTimea, (const MethodInfo *)goalTime);
  if ( !goalTimea )
    goto LABEL_11;
  max_length = goalTimea->max_length;
  if ( (int)max_length >= rank )
  {
    if ( rank - 1 >= max_length )
      goto LABEL_12;
    v11 = goalTimea->m_Items[rank - 1];
  }
  else
  {
    v11 = 0LL;
  }
  *goalTime = v11;
  if ( !RankDatas )
LABEL_11:
    sub_1B64324(RankDatas);
  v12 = RankDatas->max_length;
  if ( v12 < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)v12 )
LABEL_12:
    sub_1B6432C(RankDatas, v9);
  return RankDatas->m_Items[rank];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventRaceResultMaster__GetTargetGoalTime(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t term,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x0
  void *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 methodPtr_low; // x10

  if ( (byte_49FC4D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&EventRaceResultEntity_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo, v12);
    byte_49FC4D3 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventRaceResultEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&term);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v16 = Count;
  v17 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v17,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term && *((_DWORD *)list + 6) == groupId )
      return *((_QWORD *)list + 5);
    if ( v16 == ++v17 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaceResultMaster__TryGetEntity(
        EventRaceResultMaster_o *this,
        EventRaceResultEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FC4D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__, entity);
    byte_49FC4D0 = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventRaceResultMaster__getRaceStartedAt(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_49FC4D4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&EventRaceResultEntity_TypeInfo, v8);
    byte_49FC4D4 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v12,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == termId )
      return *((_QWORD *)list + 4);
    if ( v11 == ++v12 )
      return 0LL;
  }
}


void __fastcall EventRaceResultMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC4D6 & 1) == 0 )
  {
    sub_1B640C8(&EventRaceResultMaster___c_TypeInfo, v1);
    byte_49FC4D6 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventRaceResultMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventRaceResultMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceResultMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventRaceResultMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall EventRaceResultMaster___c___ctor(EventRaceResultMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRaceResultMaster___c___GetNowTerm_b__3_0(
        EventRaceResultMaster___c_o *this,
        DataEntityBase_o *a,
        DataEntityBase_o *b,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9

  if ( (byte_49FC4D7 & 1) == 0 )
  {
    this = (EventRaceResultMaster___c_o *)sub_1B640C8(&EventRaceResultEntity_TypeInfo, a);
    byte_49FC4D7 = 1;
  }
  if ( !a
    || (methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(a->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRaceResultEntity_c *)a->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaceResultEntity_TypeInfo
    || !b
    || LOBYTE(b->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRaceResultEntity_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaceResultEntity_TypeInfo )
  {
    sub_1B64324(this);
  }
  return HIDWORD(a[1].klass) - HIDWORD(b[1].klass);
}