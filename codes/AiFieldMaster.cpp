void __fastcall AiFieldMaster___ctor(AiFieldMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185A71 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__, method);
    byte_4185A71 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    179,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *__fastcall AiFieldMaster__GetEntity(
        AiFieldMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4185A6F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4185A6F = 1;
  }
  PK = AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiFieldEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                              PK,
                              (const MethodInfo_24E4520 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__);
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

  if ( (byte_4185A70 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__, entity);
    byte_4185A70 = 1;
  }
  PK = AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__);
}


AiFieldEntity_array *__fastcall AiFieldMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x10
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_4185A72 & 1) == 0 )
  {
    sub_B2C35C(&AiFieldEntity_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_AiFieldMaster___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiFieldEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiFieldEntity__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiFieldEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_AiFieldEntity__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4185A72 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AiFieldEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AiFieldEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AiFieldMaster___);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)Instance->fields.lookup;
  if ( !Instance )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_18:
      v27 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v27 + 8));
    if ( !v28 )
      goto LABEL_35;
    v30 = *(&AiFieldEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (AiFieldEntity_c *)v28->klass->_2.typeHierarchy[v30 - 1] != AiFieldEntity_TypeInfo )
    {
      v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v28);
LABEL_35:
      sub_B2C434(v28, v29);
    }
    if ( v28->fields.missionTargetId == id )
    {
      if ( !v13 )
        sub_B2C434(v28, AiFieldEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        v28,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AiFieldEntity__Add__);
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
    v34 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                Enumerator,
                                *(_QWORD *)(v34 + 8));
  if ( !v13 )
LABEL_37:
    sub_B2C434(Instance, v15);
  return (AiFieldEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_AiFieldEntity__ToArray__);
}