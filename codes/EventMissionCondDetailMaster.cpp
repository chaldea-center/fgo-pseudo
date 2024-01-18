void __fastcall EventMissionCondDetailMaster___ctor(EventMissionCondDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188DC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__, method);
    byte_4188DC0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    134,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionCondDetailEntity__o *__fastcall EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  EventMissionConditionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  Il2CppClass *klass; // x24
  const char *namespaze; // x8
  unsigned __int64 v20; // x25
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4188DC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMissionConditionMaster___, *(_QWORD *)&missionId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo, v13);
    byte_4188DC2 = 1;
  }
  entity = 0LL;
  memset(&v28, 0, sizeof(v28));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
                                                                            Master_WarQuestSelectionMaster,
                                                                            missionId,
                                                                            4,
                                                                            22,
                                                                            v17)) == 0LL )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v16);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v28 = v26;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v21 )
      break;
    if ( !v28.fields.current )
      sub_B2C434(v21, v23);
    klass = v28.fields.current[3].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( namespaze )
      {
        if ( (int)namespaze >= 1 )
        {
          v20 = 0LL;
          do
          {
            if ( v20 >= (unsigned int)namespaze )
            {
              v25 = sub_B2C460(v21);
              sub_B2C400(v25, 0LL);
            }
            v21 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                    &entity,
                    *((_DWORD *)&klass->_1.byval_arg.data + v20),
                    (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
            if ( v21 )
            {
              if ( !v14 )
                sub_B2C434(v21, v22);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v14,
                (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__);
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v20;
          }
          while ( (__int64)v20 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionCondDetailEntity__o *__fastcall EventMissionCondDetailMaster__getEntitiesFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  EventMissionCondDetailEntity_c *v28; // x1
  __int64 v29; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_4188DC1 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_B2C35C(&EventMissionCondDetailEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo, v11);
    byte_4188DC1 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( v27 )
    {
      v28 = EventMissionCondDetailEntity_TypeInfo;
      v29 = *(&EventMissionCondDetailEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (EventMissionCondDetailEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != EventMissionCondDetailEntity_TypeInfo )
      {
        v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v27);
LABEL_32:
        sub_B2C434(v27, v28);
      }
      if ( v27->fields.missionConditionDetailId == missionTargetId )
      {
        if ( !v12 )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v27,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__);
      }
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_28:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v12;
}