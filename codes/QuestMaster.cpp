void __fastcall QuestMaster___ctor(QuestMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8B18 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E8B18 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    67,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
}


bool __fastcall QuestMaster__CheckBpEnabled(
        QuestMaster_o *this,
        System_Collections_Generic_List_int__o *questIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int64_t list; // x0
  int32_t Count; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserQuestMaster_o *v33; // x22
  int32_t v34; // w23
  QuestEntity_o *v35; // x24
  __int64 v36; // x10
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8B1F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)questIds,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&QuestEntity_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v27, v28, v29);
    byte_42E8B1F = 1;
  }
  entity = 0LL;
  list = (int64_t)this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_32:
    sub_B5D69C(list, questIds);
  }
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)list,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count < 1 )
    return 0;
  v33 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
  v34 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_32;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v34,
                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v35 = (QuestEntity_o *)list;
      v36 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v36
        && *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v36 - 8) == QuestEntity_TypeInfo )
      {
        if ( !questIds )
          goto LABEL_32;
        if ( System_Collections_Generic_List_int___Remove(
               questIds,
               *(_DWORD *)(list + 16),
               (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__) )
        {
          if ( v35->fields.mIsPhaseDetailed
            || (PhaseDetail = QuestEntity__GetPhaseDetail(v35, (const MethodInfo *)questIds)) == 0LL )
          {
            p_consumeType = &v35->fields.consumeType;
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
            if ( !v33 )
              goto LABEL_32;
            if ( UserQuestMaster__TryGetEntity(v33, &entity, list, v35->fields.id, 0LL) )
              return 1;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            list = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !list )
              goto LABEL_32;
            if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)list, v35->fields.id, 0LL) )
              return 1;
          }
        }
      }
    }
    if ( ++v34 >= Count )
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

  if ( (byte_42E8B24 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, questId, questPhase, method);
    byte_42E8B24 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         questId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B5D69C(0LL, v7);
    return QuestEntity__HasFlag_25406292((QuestEntity_o *)entity, 2LL, questPhase, v8);
  }
  else
  {
    return 0;
  }
}


int32_t __fastcall QuestMaster__Count(QuestMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_42E8B1E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    byte_42E8B1E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


QuestEntity_array *__fastcall QuestMaster__GetQuestEntityList(
        QuestMaster_o *this,
        System_Int32_array *questList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x8
  unsigned __int64 v22; // x22
  signed __int64 v23; // x23
  __int64 v24; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8B20 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__,
      (_DWORD)questList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_QuestEntity__TypeInfo, v15, v16, v17);
    byte_42E8B20 = 1;
  }
  entity = 0LL;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( questList )
  {
    v21 = *(_QWORD *)&questList->max_length;
    if ( (int)v21 >= 1 )
    {
      v22 = 0LL;
      v23 = (int)v21;
      while ( 1 )
      {
        v19 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                &entity,
                questList->m_Items[v22 + 1],
                (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( v19 )
        {
          if ( !v18 )
            goto LABEL_14;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
        }
        if ( (__int64)++v22 >= v23 )
          break;
        if ( v22 >= questList->max_length )
        {
          v24 = sub_B5D6C8(v19);
          sub_B5D668(v24, 0LL);
        }
      }
    }
  }
  if ( !v18 )
LABEL_14:
    sub_B5D69C(v19, v20);
  return (QuestEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *__fastcall QuestMaster__GetQuestEntitybyIdx(QuestMaster_o *this, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  QuestEntity_o *result; // x0
  __int64 v11; // x9

  if ( (byte_42E8B1D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, idx, (_DWORD)method, v3);
    sub_B5D5C4(&QuestEntity_TypeInfo, v6, v7, v8);
    byte_42E8B1D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_9:
    sub_B5D69C(list, *(_QWORD *)&idx);
  result = (QuestEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                              list,
                              idx,
                              (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  if ( result )
  {
    v11 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (QuestEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] != QuestEntity_TypeInfo )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B5D990(result);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_int__o *v21; // x21
  __int64 v22; // x1
  void *list; // x0
  int32_t v24; // w22
  __int64 v25; // x10
  int v26; // w8

  if ( (byte_42E8B1A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      scriptId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&QuestEntity_TypeInfo, v18, v19, v20);
    byte_42E8B1A = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  v24 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v24 >= 0 )
  {
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v24,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = *(&QuestEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v25
          && *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v25 - 8) == QuestEntity_TypeInfo )
        {
          v26 = *((_DWORD *)list + 42);
          if ( v26 == scriptId || v26 <= 0 && *((_DWORD *)list + 4) == scriptId )
          {
            if ( !v21 )
              break;
            System_Collections_Generic_List_int___Add(
              v21,
              *((_DWORD *)list + 4),
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( --v24 < 0 )
        return v21;
    }
LABEL_16:
    sub_B5D69C(list, v22);
  }
  return v21;
}


int32_t __fastcall QuestMaster__GetQuestType(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_42E8B26 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8B26 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             questId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = 1 << LODWORD(Entity->fields.longName);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetSpotId(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  QuestEntity_o *Entity; // x0
  const MethodInfo *v14; // x1

  if ( (byte_42E8B25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8B25 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              questId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = QuestEntity__getSpotId(Entity, v14);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetWarIdByQuestId(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42E8B21 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8B21 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return QuestMaster__GetWarIdFromQuestId((QuestMaster_o *)Instance, questId, v10);
}


int32_t __fastcall QuestMaster__GetWarIdFromQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8B22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, questId, (_DWORD)method, v3);
    byte_42E8B22 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          questId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B5D69C(0LL, v6);
  return QuestEntity__GetWarId((QuestEntity_o *)entity, v6);
}


bool __fastcall QuestMaster__HasFlag(int32_t questId, int64_t flag, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  QuestEntity_o *Entity; // x0
  const MethodInfo *v15; // x2

  if ( (byte_42E8B27 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, flag, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8B27 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              questId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = QuestEntity__HasFlag(Entity, flag, v15);
  return (char)Entity;
}


bool __fastcall QuestMaster__IsQuestPhaseWithNoBattle(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_42E8B23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, questPhase, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E8B23 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  return QuestMaster__CheckQuestPhaseWithNoBattle((QuestMaster_o *)Instance, questId, questPhase, v11);
}


bool __fastcall QuestMaster__TryGetQuestEntity(
        QuestMaster_o *this,
        QuestEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_42E8B1C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, (_DWORD)entity, questId, method);
    byte_42E8B1C = 1;
  }
  return DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
           (WarEntity_o **)entity,
           questId,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


QuestEntity_o *__fastcall QuestMaster__getQuestEntity(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E8B1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, questId, (_DWORD)method, v3);
    byte_42E8B1B = 1;
  }
  return (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                            questId,
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}


int32_t __fastcall QuestMaster__getScriptQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = questId;
  if ( (byte_42E8B19 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, questId, (_DWORD)method, v3);
    byte_42E8B19 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         v4,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_B5D69C(v6, v7);
    if ( SLODWORD(entity[1].fields.longName) > 0 )
      return (int32_t)entity[1].fields.longName;
  }
  return v4;
}