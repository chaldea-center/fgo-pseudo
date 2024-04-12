void __fastcall UserPresentBoxMaster___cctor(const MethodInfo *method)
{
  UserPresentBoxMaster_c *v1; // x8

  if ( (byte_42AEFF7 & 1) == 0 )
  {
    sub_B52984(&UserPresentBoxMaster_TypeInfo);
    byte_42AEFF7 = 1;
  }
  UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT = 1;
  UserPresentBoxMaster_TypeInfo->static_fields->INDEFINITE_PERIOD = 2;
  v1 = UserPresentBoxMaster_TypeInfo;
  UserPresentBoxMaster_TypeInfo->static_fields->PAY_TYPE_RARE_PRI = 3;
  v1->static_fields->IMPORTANT_FOR_LIMIT = 4;
}


void __fastcall UserPresentBoxMaster___ctor(UserPresentBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEFF1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
    byte_42AEFF1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    65,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserPresentBoxMaster__GetCount(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserPresentBoxEntity_c *v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IEnumerator_T__o *v11; // x20
  int32_t v12; // w19
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0

  if ( (byte_42AEFF5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UserPresentBoxEntity_TypeInfo);
    byte_42AEFF5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v11 = Enumerator;
  v12 = 0;
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_33;
    klass = v11->klass;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AEB880(v11, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v11,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = v11->klass;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_9:
      v16 = sub_AEB880(v11, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                                                  v11,
                                                                  *(_QWORD *)(v16 + 8));
    if ( !Enumerator )
      sub_B52A5C(0LL, v17);
    v9 = UserPresentBoxEntity_TypeInfo;
    v18 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UserPresentBoxEntity_c *)Enumerator->klass->_2.typeHierarchy[v18 - 1] != UserPresentBoxEntity_TypeInfo )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)sub_B52D50(Enumerator);
LABEL_33:
      sub_B52A5C(Enumerator, v9);
    }
    if ( LODWORD(Enumerator[4].monitor) == type && HIDWORD(Enumerator[4].monitor) == id )
      ++v12;
  }
  v24 = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_AEB880(v11, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(v11, *(_QWORD *)(v27 + 8));
  return v12;
}


UserPresentBoxEntity_o *__fastcall UserPresentBoxMaster__GetEntity(
        UserPresentBoxMaster_o *this,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AEFEF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
    byte_42AEFEF = 1;
  }
  PK = UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)presentId);
  return (UserPresentBoxEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
}


bool __fastcall UserPresentBoxMaster__TryGetEntity(
        UserPresentBoxMaster_o *this,
        UserPresentBoxEntity_o **entity,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AEFF0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
    byte_42AEFF0 = 1;
  }
  PK = UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)receiveUserId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  const MethodInfo *v9; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x24
  __int64 v11; // x10

  if ( (byte_42AEFF2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_B52984(&UserPresentBoxEntity_TypeInfo);
    byte_42AEFF2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v11 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (UserPresentBoxEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] == UserPresentBoxEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserPresentBoxEntity__IsExpired(
                                                                                               (UserPresentBoxEntity_o *)list,
                                                                                               1,
                                                                                               v9);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v7 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v7,
              v10,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_15;
    }
LABEL_17:
    sub_B52A5C(list, userId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList_23264092(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        System_Int64_array *presentIdList,
        const MethodInfo *method)
{
  void *list; // x0
  signed int max_length; // w26
  int v8; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  int32_t v10; // w24
  UserPresentBoxEntity_o *Item; // x0
  const MethodInfo *v12; // x2
  UserPresentBoxEntity_o *v13; // x25
  __int64 v14; // x10
  __int64 v15; // x10
  struct UserPresentBoxMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v18; // x21
  struct UserPresentBoxMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v27; // x0

  if ( (byte_42AEFF3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_UserPresentBoxEntity___ctor__);
    sub_B52984(&System_Comparison_UserPresentBoxEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_B52984(&Method_UserPresentBoxMaster___c__getVaildList_b__8_0__);
    sub_B52984(&UserPresentBoxMaster___c_TypeInfo);
    sub_B52984(&UserPresentBoxEntity_TypeInfo);
    byte_42AEFF3 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !presentIdList )
    goto LABEL_32;
  max_length = presentIdList->max_length;
  v8 = (int)list;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (UserPresentBoxEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                         v10,
                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = Item;
        v14 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (UserPresentBoxEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == UserPresentBoxEntity_TypeInfo
          && Item->fields.receiveUserId == userId )
        {
          list = (void *)UserPresentBoxEntity__IsExpired(Item, 1, v12);
          if ( ((unsigned __int8)list & 1) == 0 && max_length >= 1 )
          {
            v15 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v15 >= presentIdList->max_length )
              {
                v27 = sub_B52A88(list);
                sub_B52A28(v27, 0LL);
              }
              if ( presentIdList->m_Items[v15] == v13->fields.presentId )
                break;
              if ( (int)++v15 >= max_length )
                goto LABEL_21;
            }
            if ( !v9 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
LABEL_21:
      if ( ++v10 >= v8 )
        goto LABEL_22;
    }
LABEL_32:
    sub_B52A5C(list, userId);
  }
LABEL_22:
  list = UserPresentBoxMaster___c_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster___c_TypeInfo);
    list = UserPresentBoxMaster___c_TypeInfo;
  }
  static_fields = (struct UserPresentBoxMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = UserPresentBoxMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_UserPresentBoxEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v18,
      Method_UserPresentBoxMaster___c__getVaildList_b__8_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_UserPresentBoxEntity___ctor__);
    v19 = UserPresentBoxMaster___c_TypeInfo->static_fields;
    v19->__9__8_0 = (struct System_Comparison_UserPresentBoxEntity__o *)_9__8_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v19->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v9 )
    goto LABEL_32;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


void __fastcall UserPresentBoxMaster__getValidItemInfo(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        int32_t *count,
        bool *hasLimited,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  int32_t v12; // w25
  const MethodInfo *v13; // x2
  UserPresentBoxEntity_o *v14; // x26
  __int64 v15; // x10
  int64_t v16; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // [xsp+0h] [xbp-60h]
  int64_t Time; // [xsp+8h] [xbp-58h]

  if ( (byte_42AEFF6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserPresentBoxEntity_TypeInfo);
    byte_42AEFF6 = 1;
  }
  *count = 0;
  *hasLimited = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        !list) )
  {
LABEL_24:
    sub_B52A5C(Instance, v10);
  }
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_24;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                          v12,
                          (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_24;
    v14 = (UserPresentBoxEntity_o *)Instance;
    v15 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v15
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v15 - 8) != UserPresentBoxEntity_TypeInfo )
    {
      goto LABEL_24;
    }
    if ( *(_QWORD *)(Instance + 16) == userId )
    {
      Instance = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)Instance, 1, v13);
      if ( (Instance & 1) == 0 )
      {
        ++*count;
        if ( !*hasLimited && v14->fields.giftType == 2 )
        {
          Instance = (int64_t)v17;
          if ( !v17 )
            goto LABEL_24;
          Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v17,
                                v14->fields.objectId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_24;
          v16 = *(_QWORD *)(Instance + 96);
          if ( v16 > Time )
          {
            Instance = UserPresentBoxEntity__expireAt(v14, v10);
            if ( v16 < Instance )
              *hasLimited = 1;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_24;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxMaster__isExist(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x9
  bool v22; // w20
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  int v28; // [xsp+0h] [xbp-40h]

  if ( (byte_42AEFF4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UserPresentBoxEntity_TypeInfo);
    byte_42AEFF4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_35;
    v21 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) < (unsigned int)v21
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v21 - 8) != UserPresentBoxEntity_TypeInfo )
    {
      v19 = (_DWORD *)sub_B52D50(v19);
LABEL_35:
      sub_B52A5C(v19, v20);
    }
    if ( v19[18] == type && v19[19] == id )
    {
      v28 = 70;
      v22 = 1;
      goto LABEL_25;
    }
  }
  v22 = 0;
  v28 = 68;
LABEL_25:
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  if ( v28 == 68 )
    return 0;
  return v22;
}


void __fastcall UserPresentBoxMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE594 & 1) == 0 )
  {
    sub_B52984(&UserPresentBoxMaster___c_TypeInfo);
    byte_42AE594 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(UserPresentBoxMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentBoxMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall UserPresentBoxMaster___c___ctor(UserPresentBoxMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserPresentBoxMaster___c___getVaildList_b__8_0(
        UserPresentBoxMaster___c_o *this,
        UserPresentBoxEntity_o *a,
        UserPresentBoxEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return LODWORD(b->fields.createdAt) - LODWORD(a->fields.createdAt);
}