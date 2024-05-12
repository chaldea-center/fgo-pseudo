void __fastcall QuestMaster___ctor(QuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438BCA9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
    byte_438BCA9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    67,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
}


bool __fastcall QuestMaster__CheckBpEnabled(
        QuestMaster_o *this,
        System_Collections_Generic_List_int__o *questIds,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserQuestMaster_o *v8; // x22
  int32_t v9; // w23
  QuestEntity_o *v10; // x24
  __int64 v11; // x10
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438BCB0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&QuestEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_438BCB0 = 1;
  }
  entity = 0LL;
  list = (int64_t)this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_32:
    sub_B7769C(list, questIds);
  }
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)list,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count < 1 )
    return 0;
  v8 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
  v9 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_32;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v9,
                      (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v10 = (QuestEntity_o *)list;
      v11 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
        && *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == QuestEntity_TypeInfo )
      {
        if ( !questIds )
          goto LABEL_32;
        if ( System_Collections_Generic_List_int___Remove(
               questIds,
               *(_DWORD *)(list + 16),
               (const MethodInfo_30E7764 *)Method_System_Collections_Generic_List_int__Remove__) )
        {
          if ( v10->fields.mIsPhaseDetailed
            || (PhaseDetail = QuestEntity__GetPhaseDetail(v10, (const MethodInfo *)questIds)) == 0LL )
          {
            p_consumeType = &v10->fields.consumeType;
          }
          else
          {
            p_consumeType = &PhaseDetail->fields.consumeType;
          }
          if ( *p_consumeType == 2 )
          {
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            list = NetworkManager__get_UserId(0LL);
            if ( !v8 )
              goto LABEL_32;
            if ( UserQuestMaster__TryGetEntity(v8, &entity, list, v10->fields.id, 0LL) )
              return 1;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            list = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !list )
              goto LABEL_32;
            if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)list, v10->fields.id, 0LL) )
              return 1;
          }
        }
      }
    }
    if ( ++v9 >= Count )
      return 0;
  }
}


bool __fastcall QuestMaster__CheckQuestPhaseWithNoBattle(
        QuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438BCB5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_438BCB5 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         questId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B7769C(0LL, v7);
    return QuestEntity__HasFlag_26430760((QuestEntity_o *)entity, 2LL, questPhase, v8);
  }
  else
  {
    return 0;
  }
}


int32_t __fastcall QuestMaster__Count(QuestMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_438BCAF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    byte_438BCAF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


QuestEntity_array *__fastcall QuestMaster__GetQuestEntityList(
        QuestMaster_o *this,
        System_Int32_array *questList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  signed __int64 v10; // x23
  __int64 v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438BCB1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    byte_438BCB1 = 1;
  }
  entity = 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( questList )
  {
    v8 = *(_QWORD *)&questList->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      v10 = (int)v8;
      while ( 1 )
      {
        v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               &entity,
               questList->m_Items[v9 + 1],
               (const MethodInfo_21FB8F0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( v6 )
        {
          if ( !v5 )
            goto LABEL_14;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
        }
        if ( (__int64)++v9 >= v10 )
          break;
        if ( v9 >= questList->max_length )
        {
          v11 = sub_B776C8(v6);
          sub_B77668(v11, 0LL);
        }
      }
    }
  }
  if ( !v5 )
LABEL_14:
    sub_B7769C(v6, v7);
  return (QuestEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_QuestEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *__fastcall QuestMaster__GetQuestEntitybyIdx(QuestMaster_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  QuestEntity_o *result; // x0
  __int64 v7; // x9

  if ( (byte_438BCAE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&QuestEntity_TypeInfo);
    byte_438BCAE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_9:
    sub_B7769C(list, *(_QWORD *)&idx);
  result = (QuestEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                              list,
                              idx,
                              (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  if ( result )
  {
    v7 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (QuestEntity_c *)result->klass->_2.typeHierarchy[v7 - 1] != QuestEntity_TypeInfo )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B77990(result);
      goto LABEL_9;
    }
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall QuestMaster__GetQuestIdListWithScriptId(
        QuestMaster_o *this,
        int32_t scriptId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10
  int v10; // w8

  if ( (byte_438BCAB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&QuestEntity_TypeInfo);
    byte_438BCAB = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  v8 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
     - 1;
  if ( v8 >= 0 )
  {
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v8,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v9
          && *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v9 - 8) == QuestEntity_TypeInfo )
        {
          v10 = *((_DWORD *)list + 42);
          if ( v10 == scriptId || v10 <= 0 && *((_DWORD *)list + 4) == scriptId )
          {
            if ( !v5 )
              break;
            System_Collections_Generic_List_int___Add(
              v5,
              *((_DWORD *)list + 4),
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( --v8 < 0 )
        return v5;
    }
LABEL_16:
    sub_B7769C(list, v6);
  }
  return v5;
}


int32_t __fastcall QuestMaster__GetQuestType(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_438BCB7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BCB7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             questId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = 1 << LODWORD(Entity->fields.longName);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetSpotId(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  QuestEntity_o *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_438BCB6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BCB6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              questId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = QuestEntity__getSpotId(Entity, v6);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetWarIdByQuestId(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_438BCB2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BCB2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  return QuestMaster__GetWarIdFromQuestId((QuestMaster_o *)Instance, questId, v5);
}


int32_t __fastcall QuestMaster__GetWarIdFromQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438BCB3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_438BCB3 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          questId,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B7769C(0LL, v5);
  return QuestEntity__GetWarId((QuestEntity_o *)entity, v5);
}


bool __fastcall QuestMaster__HasFlag(int32_t questId, int64_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestEntity_o *Entity; // x0
  const MethodInfo *v8; // x2

  if ( (byte_438BCB8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BCB8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              questId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = QuestEntity__HasFlag(Entity, flag, v8);
  return (char)Entity;
}


bool __fastcall QuestMaster__IsQuestPhaseWithNoBattle(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_438BCB4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BCB4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  return QuestMaster__CheckQuestPhaseWithNoBattle((QuestMaster_o *)Instance, questId, questPhase, v7);
}


bool __fastcall QuestMaster__TryGetQuestEntity(
        QuestMaster_o *this,
        QuestEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_438BCAD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_438BCAD = 1;
  }
  return DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
           (WarEntity_o **)entity,
           questId,
           (const MethodInfo_21FB8F0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


QuestEntity_o *__fastcall QuestMaster__getQuestEntity(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  if ( (byte_438BCAC & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    byte_438BCAC = 1;
  }
  return (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                            questId,
                            (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}


int32_t __fastcall QuestMaster__getScriptQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438BCAA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_438BCAA = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         questId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_B7769C(v5, v6);
    if ( SLODWORD(entity[1].fields.longName) > 0 )
      return (int32_t)entity[1].fields.longName;
  }
  return questId;
}