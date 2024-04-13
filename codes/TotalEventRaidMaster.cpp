void __fastcall TotalEventRaidMaster___ctor(TotalEventRaidMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAC51 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAC51 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    148,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaidEntity_o *__fastcall TotalEventRaidMaster__GetEntity(
        TotalEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EAC4F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__,
      eventId,
      day,
      method);
    byte_42EAC4F = 1;
  }
  PK = TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalEventRaidEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TotalEventRaidMaster__TryGetEntity(
        TotalEventRaidMaster_o *this,
        TotalEventRaidEntity_o **entity,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EAC50 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&day);
    byte_42EAC50 = 1;
  }
  PK = TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_TotalEventRaidEntity__o *__fastcall TotalEventRaidMaster__TryGetEntityListFromDay(
        TotalEventRaidMaster_o *this,
        int32_t day,
        int64_t *maxHpSum,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x19
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int64_t v41; // x24
  __int64 v42; // x1
  __int64 v43; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  int32_t *v49; // x0
  __int64 v50; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x25
  __int64 v52; // x9
  __int64 v53; // x1
  _BOOL8 IsOpenTime; // x0
  __int64 v55; // x1
  __int64 v56; // x0
  __int64 v57; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v59; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v62; // x3
  System_Collections_Generic_IEnumerator_T__c *v63; // x8
  unsigned __int64 v64; // x10
  int32_t *v65; // x11
  __int64 v66; // x0
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EAC52 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      day,
      (_DWORD)maxHpSum,
      method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&NetworkManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&TotalEventRaidEntity_TypeInfo, v34, v35, v36);
    byte_42EAC52 = 1;
  }
  entity = 0LL;
  *maxHpSum = 0LL;
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
LABEL_47:
    sub_B5D69C(Instance, v39);
  v41 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v42);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v59 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v59;
        p_offset += 4;
        if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_31:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v43);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v45 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_14:
      v48 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v62);
    }
    v49 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                       Enumerator,
                       *(_QWORD *)(v48 + 8));
    v51 = (EventMissionProgressRequest_Argument_ProgressData_o *)v49;
    if ( !v49 )
      goto LABEL_42;
    v52 = *(&TotalEventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v49 + 300LL) < (unsigned int)v52
      || *(TotalEventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v49 + 200LL) + 8 * v52 - 8) != TotalEventRaidEntity_TypeInfo )
    {
      sub_B5D990(v49);
LABEL_42:
      sub_B5D69C(v49, v50);
    }
    if ( v49[5] == day )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(v49, TotalEventRaidEntity_TypeInfo);
      if ( EventRaidMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v49[4], day, 0LL) )
      {
        if ( !entity )
          sub_B5D69C(0LL, v53);
        IsOpenTime = EventRaidEntity__IsOpenTime(entity, v41, 0LL);
        if ( IsOpenTime )
        {
          if ( !v37 )
            sub_B5D69C(IsOpenTime, v55);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v37,
            v51,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__);
          if ( !entity )
            sub_B5D69C(v56, v57);
          *maxHpSum += entity->fields.maxHp;
        }
      }
    }
  }
  v63 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v64 = 0LL;
    v65 = &v63->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      ++v64;
      v65 += 4;
      if ( v64 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v66 = (__int64)&v63->vtable[*v65].method;
  }
  else
  {
LABEL_38:
    v66 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v62);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v66)(Enumerator, *(_QWORD *)(v66 + 8));
  return (System_Collections_Generic_List_TotalEventRaidEntity__o *)v37;
}