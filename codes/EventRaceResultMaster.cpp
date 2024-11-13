void __fastcall EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B162AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__, method, v2);
    byte_4B162AF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    212,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
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

  if ( (byte_4B162AD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&termId);
    byte_4B162AD = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31B3198 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceResultMaster__GetNowTerm(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
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
  int64_t Instance; // x0
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  UserEventRaceMaster_o *v29; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  EventRaceResultMaster___c_c *v32; // x8
  System_Collections_Generic_List_object__o *v33; // x21
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v35; // x23
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int32_t v43; // w22
  int32_t v44; // w23
  int64_t v45; // x24
  __int64 methodPtr_low; // x10
  bool v47; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B162B0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_DataEntityBase__TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_DataEntityBase___, v7, v8);
    sub_1BCA7E0(&EventRaceResultEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, v21, v22);
    sub_1BCA7E0(&EventRaceResultMaster___c_TypeInfo, v23, v24);
    byte_4B162B0 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v29 = (UserEventRaceMaster_o *)MasterData_object;
  Instance = (int64_t)System_Linq_Enumerable__ToList_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)list,
                        (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_DataEntityBase___);
  v32 = EventRaceResultMaster___c_TypeInfo;
  v33 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo, v26);
    v32 = EventRaceResultMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v32->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v26);
      v32 = EventRaceResultMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_DataEntityBase__TypeInfo, v26, v30, v31);
    System_Comparison_object____ctor(_9__3_0, v35, Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, 0LL);
    static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_DataEntityBase__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v37, v38, v39, v40, v41, v42);
  }
  if ( !v33 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56244000(
    v33,
    _9__3_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
  if ( v33->fields._size >= 1 )
  {
    v43 = 0;
    v44 = 0;
    while ( 1 )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v33,
                            v44,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v45 = Instance;
      methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventRaceResultEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 16) == eventId && v43 != *(_DWORD *)(Instance + 20) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v29 )
          break;
        v47 = UserEventRaceMaster__TryGetEntity(v29, &entity, Instance, eventId, *(_DWORD *)(v45 + 20), 0LL);
        if ( !v43 || v47 )
          v43 = *(_DWORD *)(v45 + 20);
      }
      if ( ++v44 >= v33->fields._size )
        return v43;
    }
LABEL_28:
    sub_1BCAA3C(Instance, v26);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_int__o *v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_List_long__o *v47; // x25
  int32_t v48; // w26
  Il2CppObject *Item; // x0
  __int64 v50; // x1
  __int64 methodPtr_low; // x10
  Il2CppObject *v52; // x20
  __int64 monitor; // x8
  int64_t v54; // x27
  int size; // w8
  int32_t v56; // w28
  struct System_Int32_array *items; // x9
  _QWORD *v58; // x10
  struct System_Int64_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  System_Int64_array *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Int64_array **v70; // [xsp+0h] [xbp-70h]

  v6 = eventId;
  if ( (byte_4B162B3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&EventRaceResultEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Insert__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Insert__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v34, v35);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v36, v37);
    byte_4B162B3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v43 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v40,
                                                    v41,
                                                    v42);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v47 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v44,
                                                     v45,
                                                     v46);
  System_Collections_Generic_List_long____ctor(
    v47,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v48 = 0;
    v70 = goalTime;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v48,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v52 = (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRaceResultEntity_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v52 = 0LL;
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v50);
      list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
      if ( !v52 )
        break;
      if ( LODWORD(v52[1].klass) == v6 && HIDWORD(v52[1].klass) == termId )
      {
        monitor = (__int64)v52[2].monitor;
        if ( monitor < (__int64)list )
        {
          v54 = monitor - (unsigned __int64)v52[2].klass;
          if ( v54 >= 1 )
          {
            if ( !v43 )
              break;
            size = v43->fields._size;
            if ( size < 1 )
            {
LABEL_27:
              *(_QWORD *)&eventId = LODWORD(v52[1].monitor);
              items = v43->fields._items;
              v58 = Method_System_Collections_Generic_List_int__Add__;
              ++v43->fields._version;
              if ( !items )
                break;
              if ( size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v43,
                  eventId,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
              }
              else
              {
                v43->fields._size = size + 1;
                items->m_Items[size + 1] = eventId;
              }
              if ( !v47 )
                break;
              v59 = v47->fields._items;
              v60 = Method_System_Collections_Generic_List_long__Add__;
              ++v47->fields._version;
              if ( !v59 )
                break;
              v61 = v47->fields._size;
              if ( (unsigned int)v61 >= v59->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v47,
                  v54,
                  *(const MethodInfo_3589C90 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
              }
              else
              {
                v47->fields._size = v61 + 1;
                v59->m_Items[v61] = v54;
              }
            }
            else
            {
              v56 = 0;
              while ( 1 )
              {
                if ( !v47 )
                  goto LABEL_41;
                list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_long___get_Item(
                                                                           v47,
                                                                           v56,
                                                                           (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
                if ( (__int64)list > v54 )
                  break;
                size = v43->fields._size;
                if ( size <= ++v56 )
                {
                  goalTime = v70;
                  goto LABEL_27;
                }
              }
              System_Collections_Generic_List_int___Insert(
                v43,
                v56,
                (int32_t)v52[1].monitor,
                (const MethodInfo_35859BC *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v47,
                v56,
                v54,
                (const MethodInfo_358AA14 *)Method_System_Collections_Generic_List_long__Insert__);
              goalTime = v70;
            }
          }
        }
      }
      if ( ++v48 == Count )
        goto LABEL_38;
    }
LABEL_41:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
LABEL_38:
  if ( !v47 )
    goto LABEL_41;
  v62 = System_Collections_Generic_List_long___ToArray(
          v47,
          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)goalTime, (int64_t)v62, v63, v64, v65, v66, v67, v68);
  if ( !v43 )
    goto LABEL_41;
  return System_Collections_Generic_List_int___ToArray(
           v43,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1BCAA3C(RankDatas, v9);
  v12 = RankDatas->max_length;
  if ( v12 < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)v12 )
LABEL_12:
    sub_1BCAA44(RankDatas, v9);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x0
  __int64 v18; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  __int64 methodPtr_low; // x10

  if ( (byte_4B162B1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&term);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&EventRaceResultEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo, v15, v16);
    byte_4B162B1 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRaceResultEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&term,
                                                       *(_QWORD *)&groupId);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_16:
    sub_1BCAA3C(list, v18);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v21 = Count;
  v22 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v22,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( v21 == ++v22 )
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

  if ( (byte_4B162AE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B162AE = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventRaceResultMaster__getRaceStartedAt(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4B162B2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventRaceResultEntity_TypeInfo, v9, v10);
    byte_4B162B2 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v14,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( v13 == ++v14 )
      return 0LL;
  }
}


void __fastcall EventRaceResultMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B162B4 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRaceResultMaster___c_TypeInfo, v1, v2);
    byte_4B162B4 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventRaceResultMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventRaceResultMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceResultMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventRaceResultMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B162B5 & 1) == 0 )
  {
    this = (EventRaceResultMaster___c_o *)sub_1BCA7E0(&EventRaceResultEntity_TypeInfo, a, b);
    byte_4B162B5 = 1;
  }
  if ( !a
    || (methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(a->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRaceResultEntity_c *)a->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaceResultEntity_TypeInfo
    || !b
    || LOBYTE(b->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRaceResultEntity_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaceResultEntity_TypeInfo )
  {
    sub_1BCAA3C(this, a);
  }
  return HIDWORD(a[1].klass) - HIDWORD(b[1].klass);
}