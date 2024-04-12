void __fastcall AiMaster___ctor(AiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ADFD4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AiMaster__AiEntity__string___ctor__);
    byte_42ADFD4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    104,
    (const MethodInfo_23E268C *)Method_DataMasterBase_AiMaster__AiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiEntity_o *__fastcall AiMaster__GetEntity(AiMaster_o *this, int32_t id, int32_t idx, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42ADFD2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__);
    byte_42ADFD2 = 1;
  }
  PK = AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                         PK,
                         (const MethodInfo_23E2728 *)Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiMaster__TryGetEntity(
        AiMaster_o *this,
        AiEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42ADFD3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__);
    byte_42ADFD3 = 1;
  }
  PK = AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__);
}


AiEntity_array *__fastcall AiMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_42ADFD5 & 1) == 0 )
  {
    sub_B52984(&AiEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_AiMaster___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_AiEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_AiEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_AiEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_AiEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ADFD5 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_AiEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_AiEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_AiMaster___);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)Instance->fields.lookup;
  if ( !Instance )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_18:
      v17 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
    }
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_35;
    v20 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (AiEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] != AiEntity_TypeInfo )
    {
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v18);
LABEL_35:
      sub_B52A5C(v18, v19);
    }
    if ( v18->fields.missionTargetId == id )
    {
      if ( !v3 )
        sub_B52A5C(v18, AiEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        v18,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_AiEntity__Add__);
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_30:
    v24 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                Enumerator,
                                *(_QWORD *)(v24 + 8));
  if ( !v3 )
LABEL_37:
    sub_B52A5C(Instance, v5);
  return (AiEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_AiEntity__ToArray__);
}