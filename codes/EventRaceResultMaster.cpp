void __fastcall EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B3725B & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__, method);
    byte_4B3725B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    212,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
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

  if ( (byte_4B37259 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B37259 = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31D2248 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  UserEventRaceMaster_o *v19; // x20
  EventRaceResultMaster___c_c *v20; // x8
  System_Collections_Generic_List_object__o *v21; // x21
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v23; // x23
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t v31; // w22
  int32_t v32; // w23
  DataManager_o *v33; // x25
  __int64 methodPtr_low; // x10
  bool v35; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B3725C & 1) == 0 )
  {
    sub_1BD3458(&System_Comparison_DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v5);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToList_DataEntityBase___, v6);
    sub_1BD3458(&EventRaceResultEntity_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v10);
    sub_1BD3458(&NetworkManager_TypeInfo, v11);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BD3458(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, v13);
    sub_1BD3458(&EventRaceResultMaster___c_TypeInfo, v14);
    byte_4B3725C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v19 = (UserEventRaceMaster_o *)MasterData_object;
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                (const MethodInfo_2F6EB10 *)Method_System_Linq_Enumerable_ToList_DataEntityBase___);
  v20 = EventRaceResultMaster___c_TypeInfo;
  v21 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo);
    v20 = EventRaceResultMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v20->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = EventRaceResultMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_DataEntityBase__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v23, Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, 0LL);
    static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_DataEntityBase__o *)_9__3_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v21 )
    goto LABEL_32;
  System_Collections_Generic_List_object___Sort_56371284(
    v21,
    _9__3_0,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
  if ( v21->fields._size >= 1 )
  {
    v31 = 0;
    v32 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v21,
                                    v32,
                                    (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v33 = Instance;
      methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRaceResultEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaceResultEntity_TypeInfo )
      {
        break;
      }
      if ( Instance->fields.m_CachedPtr == eventId
        && v31 != *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B31D77 )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, v16);
          byte_4B31D77 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !v19 )
          break;
        v35 = UserEventRaceMaster__TryGetEntity(
                v19,
                &entity,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                eventId,
                *((_DWORD *)&v33->fields.UnityEngine_Behaviour_Fields + 1),
                0LL);
        if ( !v31 || v35 )
          v31 = *((_DWORD *)&v33->fields.UnityEngine_Behaviour_Fields + 1);
      }
      if ( ++v32 >= v21->fields._size )
        return v31;
    }
LABEL_32:
    sub_1BD36B4(Instance, v16);
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
  int32_t v6; // w21
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
  System_Collections_Generic_List_int__o *v25; // x23
  System_Collections_Generic_List_long__o *v26; // x25
  int32_t v27; // w26
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v30; // x20
  __int64 monitor; // x8
  int64_t v32; // x27
  int size; // w8
  int32_t v34; // w28
  struct System_Int32_array *items; // x9
  _QWORD *v36; // x10
  struct System_Int64_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  System_Int64_array *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Int64_array **v48; // [xsp+0h] [xbp-70h]

  v6 = eventId;
  if ( (byte_4B3725F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1BD3458(&EventRaceResultEntity_TypeInfo, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__Add__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__Insert__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Insert__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__ToArray__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__get_Item__, v19);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1BD3458(&System_Collections_Generic_List_long__TypeInfo, v21);
    sub_1BD3458(&NetworkManager_TypeInfo, v22);
    byte_4B3725F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  v26 = (System_Collections_Generic_List_long__o *)sub_1BD36A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v26,
    (const MethodInfo_35A8570 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    v48 = goalTime;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v27,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v30 = (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRaceResultEntity_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v30 = 0LL;
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
      if ( !v30 )
        break;
      if ( LODWORD(v30[1].klass) == v6 && HIDWORD(v30[1].klass) == termId )
      {
        monitor = (__int64)v30[2].monitor;
        if ( monitor < (__int64)list )
        {
          v32 = monitor - (unsigned __int64)v30[2].klass;
          if ( v32 >= 1 )
          {
            if ( !v25 )
              break;
            size = v25->fields._size;
            if ( size < 1 )
            {
LABEL_27:
              *(_QWORD *)&eventId = LODWORD(v30[1].monitor);
              items = v25->fields._items;
              v36 = Method_System_Collections_Generic_List_int__Add__;
              ++v25->fields._version;
              if ( !items )
                break;
              if ( size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v25,
                  eventId,
                  *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v25->fields._size = size + 1;
                items->m_Items[size + 1] = eventId;
              }
              if ( !v26 )
                break;
              v37 = v26->fields._items;
              v38 = Method_System_Collections_Generic_List_long__Add__;
              ++v26->fields._version;
              if ( !v37 )
                break;
              v39 = v26->fields._size;
              if ( (unsigned int)v39 >= v37->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v26,
                  v32,
                  *(const MethodInfo_35A8DC4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v26->fields._size = v39 + 1;
                v37->m_Items[v39] = v32;
              }
            }
            else
            {
              v34 = 0;
              while ( 1 )
              {
                if ( !v26 )
                  goto LABEL_41;
                list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_long___get_Item(
                                                                           v26,
                                                                           v34,
                                                                           (const MethodInfo_35A8AD4 *)Method_System_Collections_Generic_List_long__get_Item__);
                if ( (__int64)list > v32 )
                  break;
                size = v25->fields._size;
                if ( size <= ++v34 )
                {
                  goalTime = v48;
                  goto LABEL_27;
                }
              }
              System_Collections_Generic_List_int___Insert(
                v25,
                v34,
                (int32_t)v30[1].monitor,
                (const MethodInfo_35A4AF0 *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v26,
                v34,
                v32,
                (const MethodInfo_35A9B48 *)Method_System_Collections_Generic_List_long__Insert__);
              goalTime = v48;
            }
          }
        }
      }
      if ( ++v27 == Count )
        goto LABEL_38;
    }
LABEL_41:
    sub_1BD36B4(list, *(_QWORD *)&eventId);
  }
LABEL_38:
  if ( !v26 )
    goto LABEL_41;
  v40 = System_Collections_Generic_List_long___ToArray(
          v26,
          (const MethodInfo_35AA87C *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v40;
  sub_1BD33FC((PartyOrganizationUtility_o *)goalTime, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  if ( !v25 )
    goto LABEL_41;
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1BD36B4(RankDatas, v9);
  v12 = RankDatas->max_length;
  if ( v12 < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)v12 )
LABEL_12:
    sub_1BD36BC(RankDatas, v9);
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
  __int64 v14; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  __int64 methodPtr_low; // x10

  if ( (byte_4B3725D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BD3458(&EventRaceResultEntity_TypeInfo, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo, v12);
    byte_4B3725D = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_16:
    sub_1BD36B4(list, v14);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v17 = Count;
  v18 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v18,
             (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( v17 == ++v18 )
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

  if ( (byte_4B3725A & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__, entity);
    byte_4B3725A = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
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

  if ( (byte_4B3725E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&EventRaceResultEntity_TypeInfo, v8);
    byte_4B3725E = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BD36B4(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B37260 & 1) == 0 )
  {
    sub_1BD3458(&EventRaceResultMaster___c_TypeInfo, v1);
    byte_4B37260 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(EventRaceResultMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRaceResultMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceResultMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)EventRaceResultMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B37261 & 1) == 0 )
  {
    this = (EventRaceResultMaster___c_o *)sub_1BD3458(&EventRaceResultEntity_TypeInfo, a);
    byte_4B37261 = 1;
  }
  if ( !a
    || (methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(a->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRaceResultEntity_c *)a->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaceResultEntity_TypeInfo
    || !b
    || LOBYTE(b->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRaceResultEntity_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaceResultEntity_TypeInfo )
  {
    sub_1BD36B4(this, a);
  }
  return HIDWORD(a[1].klass) - HIDWORD(b[1].klass);
}