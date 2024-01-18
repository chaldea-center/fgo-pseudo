void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187863 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__, method);
    byte_4187863 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    457,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  _DWORD *v30; // x0
  __int64 v31; // x1
  _DWORD *v32; // x24
  __int64 v33; // x9
  int32_t v34; // w25
  int32_t v35; // w26
  __int64 v36; // x1
  _DWORD *v37; // x24
  int v38; // t1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v43; // x3
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // [xsp+0h] [xbp-60h]

  if ( (byte_4187861 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B2C35C(&CondType_TypeInfo, v10);
    sub_B2C35C(&EventMuralEntity___TypeInfo, v11);
    sub_B2C35C(&EventMuralEntity_TypeInfo, v12);
    sub_B2C35C(&System_IDisposable_TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMuralEntity__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_EventMuralEntity__TypeInfo, v19);
    byte_4187861 = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_B2C374(EventMuralEntity___TypeInfo, 0LL);
  }
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMuralEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v22 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v22 )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v22,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v40;
        p_offset += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_30:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
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
      v29 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v43);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      goto LABEL_43;
    v33 = *(&EventMuralEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) < (unsigned int)v33
      || *(EventMuralEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v33 - 8) != EventMuralEntity_TypeInfo )
    {
      v30 = (_DWORD *)sub_B2C728(v30);
LABEL_43:
      sub_B2C434(v30, v31);
    }
    if ( v30[10] == eventId )
    {
      v34 = v30[12];
      v35 = v30[13];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestPhaseClear_25802440(v34, v35, -1, 0, 0LL) )
      {
        if ( !v49 )
          sub_B2C434(0LL, v36);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v49,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMuralEntity__Add__);
        v38 = v32[11];
        v37 = v32 + 11;
        *dispNum += v38;
      }
      else
      {
        v37 = v32 + 11;
      }
      *total += *v37;
    }
  }
  v44 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      v46 += 4;
      if ( v45 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_37:
    v47 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v43);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  v22 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v49;
  if ( !v49 )
LABEL_45:
    sub_B2C434(v22, v21);
  return (EventMuralEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v49,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
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
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187862 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&EventMuralEntity___TypeInfo, v10);
    byte_4187862 = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_B2C374(EventMuralEntity___TypeInfo, 0LL);
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_B2C374(EventMuralEntity___TypeInfo, 0LL);
  v12 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          id,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v12 )
    return (EventMuralEntity_array *)sub_B2C374(EventMuralEntity___TypeInfo, 0LL);
  if ( !entity )
    sub_B2C434(v12, v13);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity->fields.longName, dispNum, total, v14);
}