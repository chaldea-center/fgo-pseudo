void __fastcall QuestMaster___ctor(QuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186ECC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__, method);
    byte_4186ECC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    66,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
}


bool __fastcall QuestMaster__CheckBpEnabled(
        QuestMaster_o *this,
        System_Collections_Generic_List_int__o *questIds,
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
  int64_t list; // x0
  int32_t Count; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserQuestMaster_o *v16; // x22
  int32_t v17; // w23
  QuestEntity_o *v18; // x24
  __int64 v19; // x10
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4186ED3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questIds);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&QuestEntity_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v11);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v12);
    byte_4186ED3 = 1;
  }
  entity = 0LL;
  list = (int64_t)this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_32:
    sub_B2C434(list, questIds);
  }
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)list,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count < 1 )
    return 0;
  v16 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
  v17 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_32;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v17,
                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v18 = (QuestEntity_o *)list;
      v19 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v19
        && *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v19 - 8) == QuestEntity_TypeInfo )
      {
        if ( !questIds )
          goto LABEL_32;
        if ( System_Collections_Generic_List_int___Remove(
               questIds,
               *(_DWORD *)(list + 16),
               (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__) )
        {
          if ( v18->fields.mIsPhaseDetailed
            || (PhaseDetail = QuestEntity__GetPhaseDetail(v18, (const MethodInfo *)questIds)) == 0LL )
          {
            p_consumeType = &v18->fields.consumeType;
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
            if ( !v16 )
              goto LABEL_32;
            if ( UserQuestMaster__TryGetEntity(v16, &entity, list, v18->fields.id, 0LL) )
              return 1;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            list = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !list )
              goto LABEL_32;
            if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)list, v18->fields.id, 0LL) )
              return 1;
          }
        }
      }
    }
    if ( ++v17 >= Count )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestMaster__CheckQuestPhaseWithNoBattle(
        QuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  WarEntity_o *v10; // x20
  unsigned __int8 *p_fields; // x8
  _BOOL4 v12; // w0
  QuestPhaseDetailEntity_o *PhaseDetail_23875668; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4186ED8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, *(_QWORD *)&questId);
    byte_4186ED8 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         questId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v7 )
  {
    v10 = entity;
    if ( !entity )
      sub_B2C434(v7, v8);
    if ( BYTE4(entity[1].fields.longName)
      || (PhaseDetail_23875668 = QuestEntity__GetPhaseDetail_23875668((QuestEntity_o *)entity, questPhase, v9)) == 0LL )
    {
      p_fields = (unsigned __int8 *)&v10[1].fields;
    }
    else
    {
      p_fields = (unsigned __int8 *)&PhaseDetail_23875668->fields.flag;
    }
    return (*p_fields >> 1) & 1;
  }
  else
  {
    LOBYTE(v12) = 0;
  }
  return v12;
}


int32_t __fastcall QuestMaster__Count(QuestMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_4186ED2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_4186ED2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


QuestEntity_array *__fastcall QuestMaster__GetQuestEntityList(
        QuestMaster_o *this,
        System_Int32_array *questList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  signed __int64 v14; // x23
  __int64 v15; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4186ED4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, questList);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_QuestEntity__TypeInfo, v8);
    byte_4186ED4 = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( questList )
  {
    v12 = *(_QWORD *)&questList->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      v14 = (int)v12;
      while ( 1 )
      {
        v10 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                &entity,
                questList->m_Items[v13 + 1],
                (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( v10 )
        {
          if ( !v9 )
            goto LABEL_14;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
        }
        if ( (__int64)++v13 >= v14 )
          break;
        if ( v13 >= questList->max_length )
        {
          v15 = sub_B2C460(v10);
          sub_B2C400(v15, 0LL);
        }
      }
    }
  }
  if ( !v9 )
LABEL_14:
    sub_B2C434(v10, v11);
  return (QuestEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_QuestEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *__fastcall QuestMaster__GetQuestEntitybyIdx(QuestMaster_o *this, int32_t idx, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  QuestEntity_o *result; // x0
  __int64 v8; // x9

  if ( (byte_4186ED1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, *(_QWORD *)&idx);
    sub_B2C35C(&QuestEntity_TypeInfo, v5);
    byte_4186ED1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_9:
    sub_B2C434(list, *(_QWORD *)&idx);
  result = (QuestEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                              list,
                              idx,
                              (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  if ( result )
  {
    v8 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v8
      || (QuestEntity_c *)result->klass->_2.typeHierarchy[v8 - 1] != QuestEntity_TypeInfo )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B2C728(result);
      goto LABEL_9;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestMaster__GetQuestIdListWithScriptId(
        QuestMaster_o *this,
        int32_t scriptId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x21
  __int64 v11; // x1
  void *list; // x0
  int32_t v13; // w22
  __int64 v14; // x10
  int v15; // w8

  if ( (byte_4186ECE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&scriptId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B2C35C(&QuestEntity_TypeInfo, v9);
    byte_4186ECE = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  v13 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v13 >= 0 )
  {
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v13,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v14
          && *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v14 - 8) == QuestEntity_TypeInfo )
        {
          v15 = *((_DWORD *)list + 42);
          if ( v15 == scriptId || v15 <= 0 && *((_DWORD *)list + 4) == scriptId )
          {
            if ( !v10 )
              break;
            System_Collections_Generic_List_int___Add(
              v10,
              *((_DWORD *)list + 4),
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( --v13 < 0 )
        return v10;
    }
LABEL_16:
    sub_B2C434(list, v11);
  }
  return v10;
}


int32_t __fastcall QuestMaster__GetQuestType(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_4186EDA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186EDA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             questId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = 1 << LODWORD(Entity->fields.longName);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetSpotId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestEntity_o *Entity; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4186ED9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186ED9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              questId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = QuestEntity__getSpotId(Entity, v8);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetWarIdByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4186ED5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4186ED5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return QuestMaster__GetWarIdFromQuestId((QuestMaster_o *)Instance, questId, v6);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestMaster__GetWarIdFromQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186ED6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, *(_QWORD *)&questId);
    byte_4186ED6 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          questId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B2C434(0LL, v5);
  return QuestEntity__GetWarId((QuestEntity_o *)entity, v5);
}


bool __fastcall QuestMaster__HasFlag(int32_t questId, int64_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  QuestEntity_o *Entity; // x0
  const MethodInfo *v10; // x1
  QuestEntity_o *v11; // x20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4186EDB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, flag);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4186EDB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              questId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
  {
    v11 = Entity;
    if ( Entity->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(Entity, v10)) == 0LL )
      p_flag = &v11->fields.flag;
    else
      p_flag = &PhaseDetail->fields.flag;
    LOBYTE(Entity) = (*p_flag & flag) != 0;
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestMaster__IsQuestPhaseWithNoBattle(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4186ED7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questPhase);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186ED7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return QuestMaster__CheckQuestPhaseWithNoBattle((QuestMaster_o *)Instance, questId, questPhase, v8);
}


bool __fastcall QuestMaster__TryGetQuestEntity(
        QuestMaster_o *this,
        QuestEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_4186ED0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, entity);
    byte_4186ED0 = 1;
  }
  return DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
           (WarEntity_o **)entity,
           questId,
           (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *__fastcall QuestMaster__getQuestEntity(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4186ECF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, *(_QWORD *)&questId);
    byte_4186ECF = 1;
  }
  return (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                            questId,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestMaster__getScriptQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  int32_t v3; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v3 = questId;
  if ( (byte_4186ECD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, *(_QWORD *)&questId);
    byte_4186ECD = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         v3,
         (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_B2C434(v5, v6);
    if ( SLODWORD(entity[1].fields.longName) > 0 )
      return (int32_t)entity[1].fields.longName;
  }
  return v3;
}