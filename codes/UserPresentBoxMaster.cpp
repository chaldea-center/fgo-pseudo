void __fastcall UserPresentBoxMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  UserPresentBoxMaster_c *v2; // x8

  if ( (byte_4187095 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentBoxMaster_TypeInfo, v1);
    byte_4187095 = 1;
  }
  UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT = 1;
  UserPresentBoxMaster_TypeInfo->static_fields->INDEFINITE_PERIOD = 2;
  v2 = UserPresentBoxMaster_TypeInfo;
  UserPresentBoxMaster_TypeInfo->static_fields->PAY_TYPE_RARE_PRI = 3;
  v2->static_fields->IMPORTANT_FOR_LIMIT = 4;
}


void __fastcall UserPresentBoxMaster___ctor(UserPresentBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418708F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__, method);
    byte_418708F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    64,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserPresentBoxMaster__GetCount(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserPresentBoxEntity_c *v13; // x1
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *v15; // x20
  int32_t v16; // w19
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0

  if ( (byte_4187093 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&UserPresentBoxEntity_TypeInfo, v10);
    byte_4187093 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v15 = Enumerator;
  v16 = 0;
  while ( 1 )
  {
    if ( !v15 )
      goto LABEL_33;
    klass = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AC5258(v15, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v15,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_9:
      v20 = sub_AC5258(v15, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v15,
                                                                  *(_QWORD *)(v20 + 8));
    if ( !Enumerator )
      sub_B2C434(0LL, v21);
    v13 = UserPresentBoxEntity_TypeInfo;
    v22 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (UserPresentBoxEntity_c *)Enumerator->klass->_2.typeHierarchy[v22 - 1] != UserPresentBoxEntity_TypeInfo )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)sub_B2C728(Enumerator);
LABEL_33:
      sub_B2C434(Enumerator, v13);
    }
    if ( LODWORD(Enumerator[4].monitor) == type && HIDWORD(Enumerator[4].monitor) == id )
      ++v16;
  }
  v28 = v15->klass;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_AC5258(v15, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(v15, *(_QWORD *)(v31 + 8));
  return v16;
}


UserPresentBoxEntity_o *__fastcall UserPresentBoxMaster__GetEntity(
        UserPresentBoxMaster_o *this,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418708D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__, receiveUserId);
    byte_418708D = 1;
  }
  PK = UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)presentId);
  return (UserPresentBoxEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
}


bool __fastcall UserPresentBoxMaster__TryGetEntity(
        UserPresentBoxMaster_o *this,
        UserPresentBoxEntity_o **entity,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418708E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__, entity);
    byte_418708E = 1;
  }
  PK = UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)receiveUserId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  int32_t v14; // w23
  const MethodInfo *v15; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x24
  __int64 v17; // x10

  if ( (byte_4187090 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v9);
    sub_B2C35C(&UserPresentBoxEntity_TypeInfo, v10);
    byte_4187090 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v17 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (UserPresentBoxEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == UserPresentBoxEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserPresentBoxEntity__IsExpired(
                                                                                               (UserPresentBoxEntity_o *)list,
                                                                                               1,
                                                                                               v15);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v13 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v13,
              v16,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      if ( ++v14 >= Count )
        goto LABEL_15;
    }
LABEL_17:
    sub_B2C434(list, userId);
  }
LABEL_15:
  if ( !v13 )
    goto LABEL_17;
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList_24030664(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        System_Int64_array *presentIdList,
        const MethodInfo *method)
{
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
  void *list; // x0
  signed int max_length; // w26
  int v19; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  int32_t v21; // w24
  UserPresentBoxEntity_o *Item; // x0
  const MethodInfo *v23; // x2
  UserPresentBoxEntity_o *v24; // x25
  __int64 v25; // x10
  __int64 v26; // x10
  struct UserPresentBoxMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v29; // x21
  struct UserPresentBoxMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v38; // x0

  if ( (byte_4187091 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_System_Comparison_UserPresentBoxEntity___ctor__, v7);
    sub_B2C35C(&System_Comparison_UserPresentBoxEntity__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v13);
    sub_B2C35C(&Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, v14);
    sub_B2C35C(&UserPresentBoxMaster___c_TypeInfo, v15);
    sub_B2C35C(&UserPresentBoxEntity_TypeInfo, v16);
    byte_4187091 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !presentIdList )
    goto LABEL_32;
  max_length = presentIdList->max_length;
  v19 = (int)list;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (UserPresentBoxEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                         v21,
                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = Item;
        v25 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (UserPresentBoxEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] == UserPresentBoxEntity_TypeInfo
          && Item->fields.receiveUserId == userId )
        {
          list = (void *)UserPresentBoxEntity__IsExpired(Item, 1, v23);
          if ( ((unsigned __int8)list & 1) == 0 && max_length >= 1 )
          {
            v26 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v26 >= presentIdList->max_length )
              {
                v38 = sub_B2C460(list);
                sub_B2C400(v38, 0LL);
              }
              if ( presentIdList->m_Items[v26] == v24->fields.presentId )
                break;
              if ( (int)++v26 >= max_length )
                goto LABEL_21;
            }
            if ( !v20 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
LABEL_21:
      if ( ++v21 >= v19 )
        goto LABEL_22;
    }
LABEL_32:
    sub_B2C434(list, userId);
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
    v29 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserPresentBoxEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v29,
      Method_UserPresentBoxMaster___c__getVaildList_b__8_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserPresentBoxEntity___ctor__);
    v30 = UserPresentBoxMaster___c_TypeInfo->static_fields;
    v30->__9__8_0 = (struct System_Comparison_UserPresentBoxEntity__o *)_9__8_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v30->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v20 )
    goto LABEL_32;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


void __fastcall UserPresentBoxMaster__getValidItemInfo(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        int32_t *count,
        bool *hasLimited,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Instance; // x0
  const MethodInfo *v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  int32_t v18; // w25
  const MethodInfo *v19; // x2
  UserPresentBoxEntity_o *v20; // x26
  __int64 v21; // x10
  int64_t v22; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // [xsp+0h] [xbp-60h]
  int64_t Time; // [xsp+8h] [xbp-58h]

  if ( (byte_4187094 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserPresentBoxEntity_TypeInfo, v14);
    byte_4187094 = 1;
  }
  *count = 0;
  *hasLimited = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        !list) )
  {
LABEL_24:
    sub_B2C434(Instance, v16);
  }
  v18 = 0;
  while ( v18 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_24;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                          v18,
                          (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_24;
    v20 = (UserPresentBoxEntity_o *)Instance;
    v21 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v21
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v21 - 8) != UserPresentBoxEntity_TypeInfo )
    {
      goto LABEL_24;
    }
    if ( *(_QWORD *)(Instance + 16) == userId )
    {
      Instance = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)Instance, 1, v19);
      if ( (Instance & 1) == 0 )
      {
        ++*count;
        if ( !*hasLimited && v20->fields.giftType == 2 )
        {
          Instance = (int64_t)v23;
          if ( !v23 )
            goto LABEL_24;
          Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v23,
                                v20->fields.objectId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_24;
          v22 = *(_QWORD *)(Instance + 96);
          if ( v22 > Time )
          {
            Instance = UserPresentBoxEntity__expireAt(v20, v16);
            if ( v22 < Instance )
              *hasLimited = 1;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v18;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x9
  bool v26; // w20
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int v32; // [xsp+0h] [xbp-40h]

  if ( (byte_4187092 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&UserPresentBoxEntity_TypeInfo, v10);
    byte_4187092 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_35;
    v25 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) < (unsigned int)v25
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v25 - 8) != UserPresentBoxEntity_TypeInfo )
    {
      v23 = (_DWORD *)sub_B2C728(v23);
LABEL_35:
      sub_B2C434(v23, v24);
    }
    if ( v23[18] == type && v23[19] == id )
    {
      v32 = 70;
      v26 = 1;
      goto LABEL_25;
    }
  }
  v26 = 0;
  v32 = 68;
LABEL_25:
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_29:
    v30 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( v32 == 68 )
    return 0;
  return v26;
}


void __fastcall UserPresentBoxMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserPresentBoxMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41856B5 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentBoxMaster___c_TypeInfo, v1);
    byte_41856B5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserPresentBoxMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserPresentBoxMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserPresentBoxMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return LODWORD(b->fields.createdAt) - LODWORD(a->fields.createdAt);
}