void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B054C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
    byte_42B054C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    458,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
}


EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromEventId(
        EventMuralMaster_o *this,
        int32_t eventId,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 v20; // x1
  _DWORD *v21; // x24
  __int64 v22; // x9
  int32_t v23; // w25
  int32_t v24; // w26
  __int64 v25; // x1
  _DWORD *v26; // x24
  int v27; // t1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // [xsp+0h] [xbp-60h]

  if ( (byte_42B054A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&EventMuralEntity___TypeInfo);
    sub_B52984(&EventMuralEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMuralEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMuralEntity__TypeInfo);
    byte_42B054A = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_B5299C(EventMuralEntity___TypeInfo, 0LL);
  }
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMuralEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v11 )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v11,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        p_offset += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_30:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_12:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v32);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_43;
    v22 = *(&EventMuralEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) < (unsigned int)v22
      || *(EventMuralEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v22 - 8) != EventMuralEntity_TypeInfo )
    {
      v19 = (_DWORD *)sub_B52D50(v19);
LABEL_43:
      sub_B52A5C(v19, v20);
    }
    if ( v19[10] == eventId )
    {
      v23 = v19[12];
      v24 = v19[13];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestPhaseClear_26043860(v23, v24, -1, 0, 0LL) )
      {
        if ( !v38 )
          sub_B52A5C(0LL, v25);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v38,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMuralEntity__Add__);
        v27 = v21[11];
        v26 = v21 + 11;
        *dispNum += v27;
      }
      else
      {
        v26 = v21 + 11;
      }
      *total += *v26;
    }
  }
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_37:
    v36 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v38;
  if ( !v38 )
LABEL_45:
    sub_B52A5C(v11, v10);
  return (EventMuralEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                                     (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
}


EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromId(
        EventMuralMaster_o *this,
        int32_t id,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B054B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
    sub_B52984(&EventMuralEntity___TypeInfo);
    byte_42B054B = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_B5299C(EventMuralEntity___TypeInfo, 0LL);
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_B5299C(EventMuralEntity___TypeInfo, 0LL);
  v10 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          id,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v10 )
    return (EventMuralEntity_array *)sub_B5299C(EventMuralEntity___TypeInfo, 0LL);
  if ( !entity )
    sub_B52A5C(v10, v11);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity->fields.longName, dispNum, total, v12);
}