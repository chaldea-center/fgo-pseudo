void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E906E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E906E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    458,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
}


EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromEventId(
        EventMuralMaster_o *this,
        int32_t eventId,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v43; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  _DWORD *v52; // x0
  __int64 v53; // x1
  _DWORD *v54; // x24
  __int64 v55; // x9
  int32_t v56; // w25
  int32_t v57; // w26
  __int64 v58; // x1
  _DWORD *v59; // x24
  int v60; // t1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v62; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v65; // x3
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // [xsp+0h] [xbp-60h]

  if ( (byte_42E906C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      (_DWORD)dispNum,
      total);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9, v10, v11);
    sub_B5D5C4(&CondType_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventMuralEntity___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&EventMuralEntity_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMuralEntity__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_EventMuralEntity__TypeInfo, v39, v40, v41);
    byte_42E906C = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_B5D5DC(EventMuralEntity___TypeInfo, 0LL);
  }
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMuralEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v44 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v44 )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v44,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v45);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v62 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v62;
        p_offset += 4;
        if ( v62 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_30:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v46);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v48 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v50 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_12:
      v51 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v65);
    }
    v52 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                      Enumerator,
                      *(_QWORD *)(v51 + 8));
    v54 = v52;
    if ( !v52 )
      goto LABEL_43;
    v55 = *(&EventMuralEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v52 + 300LL) < (unsigned int)v55
      || *(EventMuralEntity_c **)(*(_QWORD *)(*(_QWORD *)v52 + 200LL) + 8 * v55 - 8) != EventMuralEntity_TypeInfo )
    {
      v52 = (_DWORD *)sub_B5D990(v52);
LABEL_43:
      sub_B5D69C(v52, v53);
    }
    if ( v52[10] == eventId )
    {
      v56 = v52[12];
      v57 = v52[13];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestPhaseClear_25933948(v56, v57, -1, 0, 0LL) )
      {
        if ( !v71 )
          sub_B5D69C(0LL, v58);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v71,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMuralEntity__Add__);
        v60 = v54[11];
        v59 = v54 + 11;
        *dispNum += v60;
      }
      else
      {
        v59 = v54 + 11;
      }
      *total += *v59;
    }
  }
  v66 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v69 = (__int64)&v66->vtable[*v68].method;
  }
  else
  {
LABEL_37:
    v69 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v65);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(Enumerator, *(_QWORD *)(v69 + 8));
  v44 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v71;
  if ( !v71 )
LABEL_45:
    sub_B5D69C(v44, v43);
  return (EventMuralEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v71,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
}


EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromId(
        EventMuralMaster_o *this,
        int32_t id,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E906D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      id,
      (_DWORD)dispNum,
      total);
    sub_B5D5C4(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&EventMuralEntity___TypeInfo, v12, v13, v14);
    byte_42E906D = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_B5D5DC(EventMuralEntity___TypeInfo, 0LL);
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_B5D5DC(EventMuralEntity___TypeInfo, 0LL);
  v16 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          id,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v16 )
    return (EventMuralEntity_array *)sub_B5D5DC(EventMuralEntity___TypeInfo, 0LL);
  if ( !entity )
    sub_B5D69C(v16, v17);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity->fields.longName, dispNum, total, v18);
}