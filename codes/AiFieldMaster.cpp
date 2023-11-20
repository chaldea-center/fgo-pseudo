void __fastcall AiFieldMaster___ctor(AiFieldMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F7ED3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__, method);
    byte_40F7ED3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    179,
    (const MethodInfo_266F73C *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *__fastcall AiFieldMaster__GetEntity(
        AiFieldMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F7ED1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40F7ED1 = 1;
  }
  PK = AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiFieldEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                              PK,
                              (const MethodInfo_266F7D8 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiFieldMaster__TryGetEntity(
        AiFieldMaster_o *this,
        AiFieldEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F7ED2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__, entity);
    byte_40F7ED2 = 1;
  }
  PK = AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__);
}


AiFieldEntity_array *__fastcall AiFieldMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x0
  __int64 v30; // x10
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_40F7ED4 & 1) == 0 )
  {
    sub_B16FFC(&AiFieldEntity_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_AiFieldMaster___, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiFieldEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiFieldEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiFieldEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_AiFieldEntity__TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40F7ED4 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AiFieldEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AiFieldEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AiFieldMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !list )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_18:
      v28 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v28 + 8));
    if ( !v29 )
      goto LABEL_35;
    v30 = *(&AiFieldEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (AiFieldEntity_c *)v29->klass->_2.typeHierarchy[v30 - 1] != AiFieldEntity_TypeInfo )
    {
      sub_B173C8(v29);
LABEL_35:
      sub_B170D4();
    }
    if ( v29->fields.missionTargetId == id )
    {
      if ( !v16 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        v29,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AiFieldEntity__Add__);
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_30:
    v34 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  if ( !v16 )
LABEL_37:
    sub_B170D4();
  return (AiFieldEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_AiFieldEntity__ToArray__);
}