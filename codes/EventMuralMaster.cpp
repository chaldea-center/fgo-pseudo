void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FABD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__, method);
    byte_40FABD9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    457,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromEventId(
        EventMuralMaster_o *this,
        int32_t eventId,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v24; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  _DWORD *v30; // x0
  _DWORD *v31; // x24
  __int64 v32; // x9
  int32_t v33; // w25
  int32_t v34; // w26
  _DWORD *v35; // x24
  int v36; // t1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // [xsp+0h] [xbp-60h]

  if ( (byte_40FABD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B16FFC(&CondType_TypeInfo, v10);
    sub_B16FFC(&EventMuralEntity___TypeInfo, v11);
    sub_B16FFC(&EventMuralEntity_TypeInfo, v12);
    sub_B16FFC(&System_IDisposable_TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMuralEntity__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_EventMuralEntity__TypeInfo, v19);
    byte_40FABD7 = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_B17014(EventMuralEntity___TypeInfo, 0LL, dispNum);
  }
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMuralEntity__TypeInfo,
                                                                                                  v21,
                                                                                                  dispNum,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v24 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v24 )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v24,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_30:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_12:
      v29 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    v31 = v30;
    if ( !v30 )
      goto LABEL_43;
    v32 = *(&EventMuralEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) < (unsigned int)v32
      || *(EventMuralEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v32 - 8) != EventMuralEntity_TypeInfo )
    {
      sub_B173C8(v30);
LABEL_43:
      sub_B170D4();
    }
    if ( v30[10] == eventId )
    {
      v33 = v30[12];
      v34 = v30[13];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestPhaseClear_25491608(v33, v34, -1, 0, 0LL) )
      {
        if ( !v46 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v46,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMuralEntity__Add__);
        v36 = v31[11];
        v35 = v31 + 11;
        *dispNum += v36;
      }
      else
      {
        v35 = v31 + 11;
      }
      *total += *v35;
    }
  }
  v41 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_37:
    v44 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  if ( !v46 )
LABEL_45:
    sub_B170D4();
  return (EventMuralEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromId(
        EventMuralMaster_o *this,
        int32_t id,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v12; // x4
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FABD8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B16FFC(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&EventMuralEntity___TypeInfo, v10);
    byte_40FABD8 = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0
    || !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          id,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__) )
  {
    return (EventMuralEntity_array *)sub_B17014(EventMuralEntity___TypeInfo, 0LL, dispNum);
  }
  if ( !entity )
    sub_B170D4();
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity->fields.longName, dispNum, total, v12);
}