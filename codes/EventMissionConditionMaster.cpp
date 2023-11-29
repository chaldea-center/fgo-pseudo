void __fastcall EventMissionConditionMaster___ctor(EventMissionConditionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F88C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v7);
    byte_40F88C3 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
  this->fields.missionIdToEventMissionConditionEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.missionIdToEventMissionConditionEntityListDictionary,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    133,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
}


void __fastcall EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *missionIdToEventMissionConditionEntityListDictionary; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *v15; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F88C5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      eventMissionConditionEntity);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v8);
    byte_40F88C5 = 1;
  }
  value = 0LL;
  if ( !eventMissionConditionEntity )
    goto LABEL_10;
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)missionIdToEventMissionConditionEntityListDictionary,
          eventMissionConditionEntity->fields.missionId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                                                                    v10,
                                                                                                    v11,
                                                                                                    v12,
                                                                                                    v13);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v14;
    v15 = this->fields.missionIdToEventMissionConditionEntityListDictionary;
    if ( !v15 )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v15,
      eventMissionConditionEntity->fields.missionId,
      (WarBoardAIRoute_RouteData_o *)v14,
      (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
  }
  if ( !value )
LABEL_10:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
    (EventMissionProgressRequest_Argument_ProgressData_o *)eventMissionConditionEntity,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
}


void __fastcall EventMissionConditionMaster__CreateMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *missionIdToEventMissionConditionEntityListDictionary; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  EventMissionConditionEntity_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x10
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0

  if ( (byte_40F88C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__, v3);
    sub_B16FFC(&EventMissionConditionEntity_TypeInfo, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_40F88C4 = 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)missionIdToEventMissionConditionEntityListDictionary,
          (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B170D4();
  }
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
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (EventMissionConditionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                             Enumerator,
                                             *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      v21 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (EventMissionConditionEntity_c *)v19->klass->_2.typeHierarchy[v21 - 1] == EventMissionConditionEntity_TypeInfo )
      {
        EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(this, v19, v20);
      }
    }
  }
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_27:
    v25 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntitiesFromTargetId(
        EventMissionConditionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x0
  __int64 v26; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0

  if ( (byte_40F88CE & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_B16FFC(&EventMissionConditionEntity_TypeInfo, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v13);
    byte_40F88CE = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&missionTargetId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( list )
  {
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
        v18 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v18;
          p_offset += 4;
          if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v21 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        v23 = &v21->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v24 = (__int64)&v21->vtable[*v23].method;
      }
      else
      {
LABEL_16:
        v24 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v24 + 8));
      if ( !v25 )
        goto LABEL_33;
      v26 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
        || (EventMissionConditionEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] != EventMissionConditionEntity_TypeInfo )
      {
        sub_B173C8(v25);
LABEL_33:
        sub_B170D4();
      }
      if ( v25->fields.addCount == missionTargetId )
      {
        if ( !v14 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v25,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
      }
    }
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_28:
      v30 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
      Enumerator,
      *(_QWORD *)(v30 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
EventMissionConditionEntity_o *__fastcall EventMissionConditionMaster__GetEntity(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F88C1 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_40F88C1 = 1;
  }
  PK = EventMissionConditionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionConditionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_40F88CF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&targetId);
    sub_B16FFC(&EventMissionConditionEntity_TypeInfo, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v14);
    byte_40F88CF = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&targetId,
                                                                                                  *(_QWORD *)&condType,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( list )
  {
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
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v22 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v23 = 0LL;
        v24 = &v22->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v23;
          v24 += 4;
          if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v25 = (__int64)&v22->vtable[*v24].method;
      }
      else
      {
LABEL_16:
        v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
              Enumerator,
              *(_QWORD *)(v25 + 8));
      if ( !v26 )
        goto LABEL_34;
      v27 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 300LL) < (unsigned int)v27
        || *(EventMissionConditionEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * v27 - 8) != EventMissionConditionEntity_TypeInfo )
      {
        sub_B173C8(v26);
LABEL_34:
        sub_B170D4();
      }
      if ( *(_DWORD *)(v26 + 32) == targetId && *(_DWORD *)(v26 + 40) == condType )
      {
        if ( !v15 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
      }
    }
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_29:
      v31 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
      Enumerator,
      *(_QWORD *)(v31 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        int32_t progressType,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *missionIdToEventMissionConditionEntityListDictionary; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_40F88D0 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      *(_QWORD *)&missionId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v15);
    byte_40F88D0 = 1;
  }
  value = 0LL;
  memset(&v19, 0, sizeof(v19));
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&missionId,
                                                                                                  *(_QWORD *)&progressType,
                                                                                                  *(_QWORD *)&condType,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v16;
  if ( !value )
LABEL_17:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B170D4();
    if ( HIDWORD(v19.fields.current[1].klass) == progressType && LODWORD(v19.fields.current[2].monitor) == condType )
    {
      if ( !v16 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v19.fields.current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionConditionMaster__IsMissionRunning(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *missionIdToEventMissionConditionEntityListDictionary; // x0
  char v10; // w21
  char v11; // w20
  int klass_high; // w9
  const MethodInfo *v13; // x1
  int v14; // w21
  char v15; // w8
  bool v16; // w19
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-18h] BYREF

  if ( (byte_40F88CD & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      *(_QWORD *)&missionId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v8);
    byte_40F88CD = 1;
  }
  value = 0LL;
  memset(&v19, 0, sizeof(v19));
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_27;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v15 = 1;
    return v15 ^ 1;
  }
  if ( !value )
LABEL_27:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v10 = 0;
  v19 = v18;
  v11 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
      {
        v16 = 0;
        v14 = 126;
        goto LABEL_22;
      }
      if ( !v19.fields.current )
        sub_B170D4();
      klass_high = HIDWORD(v19.fields.current[1].klass);
      if ( (klass_high & 0xFFFFFFFE) == 2 )
        break;
      if ( klass_high == 4
        && !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v19.fields.current, v13) )
      {
        v11 = 0;
      }
      if ( (v10 & 1) != 0 )
        goto LABEL_11;
    }
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v19.fields.current, v13) )
      break;
    v10 = 1;
LABEL_11:
    if ( (v11 & 1) == 0 )
    {
      v16 = 1;
      goto LABEL_21;
    }
  }
  v16 = 0;
LABEL_21:
  v14 = 131;
LABEL_22:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  if ( v14 != 131 )
  {
    v15 = v11;
    return v15 ^ 1;
  }
  return v16;
}


void __fastcall EventMissionConditionMaster__OnListChangedImplementation(
        EventMissionConditionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_NotImplementedException_o *v19; // x0
  __int64 v20; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  System_Collections_IEnumerator_c **v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  EventMissionConditionEntity_o *v30; // x22
  __int64 v31; // x8
  __int64 v32; // x10
  const MethodInfo *v33; // x2
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x21
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x20
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  System_Collections_IEnumerator_c **v52; // x11
  __int64 v53; // x0
  __int64 v54; // x0
  EventMissionConditionEntity_o *v55; // x21
  __int64 v56; // x8
  __int64 v57; // x10
  const MethodInfo *v58; // x2
  int v59; // w23
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x20
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  int v66[2]; // [xsp+0h] [xbp-40h]
  int v67; // [xsp+8h] [xbp-38h]

  if ( (byte_40F88C7 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionConditionEntity_TypeInfo, e);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_IEnumerable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_40F88C7 = 1;
  }
  v67 = 0;
  if ( !e )
    sub_B170D4();
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v14 = sub_B17000(&System_NotImplementedException_TypeInfo);
      v19 = (System_NotImplementedException_o *)sub_B170CC(v14, v15, v16, v17, v18);
      System_NotImplementedException___ctor(v19, 0LL);
      sub_B17000(&Method_EventMissionConditionMaster_OnListChangedImplementation__);
      sub_B170A0();
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v20 )
      sub_B170D4();
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v22 = 0LL;
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_21;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_21:
        v24 = sub_AAFEF8(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v25 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v26 = 0LL;
        v27 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *(v27 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v26;
          v27 += 2;
          if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_28;
        }
        v28 = v25 + 16LL * (*(_DWORD *)v27 + 1) + 312;
      }
      else
      {
LABEL_28:
        v28 = sub_AAFEF8(v20, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
      v30 = (EventMissionConditionEntity_o *)v29;
      if ( v29 )
      {
        v31 = *(_QWORD *)v29;
        v32 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 300LL) >= (unsigned int)v32
          && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v31 + 200) + 8 * v32 - 8) == EventMissionConditionEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v31 + 376))(v29, *(_QWORD *)(v31 + 384)) )
            EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(this, v30, v33);
        }
      }
    }
    v66[0] = 117;
    v67 = 1;
    v34 = sub_B170BC(v20, System_IDisposable_TypeInfo);
    if ( v34 )
    {
      v35 = *(_QWORD *)v34;
      v36 = v34;
      if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
      {
        v37 = 0LL;
        v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
        {
          ++v37;
          v38 += 4;
          if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
            goto LABEL_40;
        }
        v39 = v35 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_40:
        v39 = sub_AAFEF8(v34, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
    }
    v67 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v41 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v43 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_49:
      v44 = sub_AAFEF8(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v44)(newItems, *(_QWORD *)(v44 + 8));
    if ( !v45 )
      sub_B170D4();
    while ( 1 )
    {
      v46 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v47 = 0LL;
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v47;
          v48 += 4;
          if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_56;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_56:
        v49 = sub_AAFEF8(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
        break;
      v50 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v51 = 0LL;
        v52 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *(v52 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v51;
          v52 += 2;
          if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_63;
        }
        v53 = v50 + 16LL * (*(_DWORD *)v52 + 1) + 312;
      }
      else
      {
LABEL_63:
        v53 = sub_AAFEF8(v45, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v45, *(_QWORD *)(v53 + 8));
      v55 = (EventMissionConditionEntity_o *)v54;
      if ( v54 )
      {
        v56 = *(_QWORD *)v54;
        v57 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v54 + 300LL) >= (unsigned int)v57
          && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v56 + 200) + 8 * v57 - 8) == EventMissionConditionEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v56 + 376))(v54, *(_QWORD *)(v56 + 384)) )
        {
          EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(this, v55, v58);
        }
      }
    }
    v66[0] = 213;
    v59 = ++v67;
    v60 = sub_B170BC(v45, System_IDisposable_TypeInfo);
    if ( v60 )
    {
      v61 = *(_QWORD *)v60;
      v62 = v60;
      if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
      {
        v63 = 0LL;
        v64 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
        {
          ++v63;
          v64 += 4;
          if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
            goto LABEL_75;
        }
        v65 = v61 + 16LL * *v64 + 312;
      }
      else
      {
LABEL_75:
        v65 = sub_AAFEF8(v60, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
    }
    if ( v59 && v66[v59 - 1] == 213 )
    {
      v67 = v59 - 1;
      return;
    }
LABEL_81:
    EventMissionConditionMaster__CreateMissionIdToEventMissionConditionEntityListDictionary(this, (const MethodInfo *)e);
  }
}


void __fastcall EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *missionIdToEventMissionConditionEntityListDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *v9; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F88C6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__,
      eventMissionConditionEntity);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v7);
    byte_40F88C6 = 1;
  }
  value = 0LL;
  if ( !eventMissionConditionEntity )
    goto LABEL_12;
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)missionIdToEventMissionConditionEntityListDictionary,
          eventMissionConditionEntity->fields.missionId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return;
  if ( !value )
    goto LABEL_12;
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)value,
    (WarBoardManager_TaskList_o *)eventMissionConditionEntity,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value->fields.eval) )
    return;
  v9 = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !v9 )
LABEL_12:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v9,
    eventMissionConditionEntity->fields.missionId,
    (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionConditionMaster__TryGetEntity(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F88C2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__,
      entity);
    byte_40F88C2 = 1;
  }
  PK = EventMissionConditionEntity__CreatePK(
         missionId,
         missionProgressType,
         id,
         *(const MethodInfo **)&missionProgressType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
}


bool __fastcall EventMissionConditionMaster__checkEventMissionCondition(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *entity,
        int32_t missionType,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( !entity )
    sub_B170D4();
  condType = entity->fields.condType;
  switch ( condType )
  {
    case 1:
      if ( missionType == 4 )
        return EventMissionConditionEntity__isQuestClear(entity, (const MethodInfo *)entity);
      break;
    case 23:
      if ( missionType == 4 )
        return EventMissionConditionEntity__isMissionClear(entity, (const MethodInfo *)entity);
      break;
    case 12:
      return EventMissionConditionEntity__getProgressNumByDateType(entity, (const MethodInfo *)entity) > 0;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
EventMissionConditionEntity_array *__fastcall EventMissionConditionMaster__getMissionCondList(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *missionIdToEventMissionConditionEntityListDictionary; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  WarBoardEvalValueSquare_CalcEval_o *v25; // x24
  float eval; // w21
  unsigned int v27; // w22
  EventMissionConditionMaster___c_c *v28; // x0
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v31; // x21
  struct EventMissionConditionMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F88C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMissionConditionEntity___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventMissionConditionEntity__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v16);
    sub_B16FFC(&Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__, v17);
    sub_B16FFC(&EventMissionConditionMaster___c_TypeInfo, v18);
    byte_40F88C8 = 1;
  }
  value = 0LL;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&missionId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_27;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)missionIdToEventMissionConditionEntityListDictionary,
         missionId,
         &value,
         (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v25 = value;
    if ( !value )
      goto LABEL_27;
    eval = value->fields.eval;
    if ( SLODWORD(eval) >= 1 )
    {
      v27 = 0;
      do
      {
        if ( LODWORD(v25->fields.eval) <= v27 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v21 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&v25->fields.viewpoint
                                                                      + 8LL * (int)v27
                                                                      + 32);
        if ( !v21 )
          break;
        if ( v21->fields.addCount == eventId )
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            v21,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
        }
        if ( (int)++v27 >= SLODWORD(eval) )
          goto LABEL_17;
        v25 = value;
      }
      while ( value );
LABEL_27:
      sub_B170D4();
    }
  }
LABEL_17:
  v28 = EventMissionConditionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionConditionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo);
    v28 = EventMissionConditionMaster___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMissionConditionEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v31,
      Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v32 = EventMissionConditionMaster___c_TypeInfo->static_fields;
    v32->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v19 )
    goto LABEL_27;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__getMissionCondListByType(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  EventMissionConditionEntity_array *MissionCondList; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x1
  __int64 v19; // x2
  __int64 v20; // x8
  __int64 v21; // x22

  if ( (byte_40F88CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v10);
    byte_40F88CA = 1;
  }
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      this,
                      eventId,
                      missionId,
                      *(const MethodInfo **)&type);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  if ( !MissionCondList )
    goto LABEL_14;
  v20 = *(_QWORD *)&MissionCondList->max_length;
  if ( v20 && (int)v20 >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v21 >= (unsigned int)v20 )
      {
        sub_B17100(v17, v18, v19);
        sub_B170A0();
      }
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)MissionCondList->m_Items[v21];
      if ( !v18 )
        break;
      if ( v18->fields.missionConditionDetailId == type )
      {
        if ( !v16 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
        v20 = *(_QWORD *)&MissionCondList->max_length;
      }
      if ( (int)++v21 >= (int)v20 )
        return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v16;
    }
LABEL_14:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
EventMissionConditionEntity_array *__fastcall EventMissionConditionMaster__getMissionCondListHighPriority(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        int32_t progressType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  const MethodInfo *v13; // x3
  EventMissionConditionEntity_array *MissionCondList; // x0
  __int64 v15; // x9
  __int64 v16; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x1
  EventMissionConditionEntity_o **m_Items; // x10
  EventMissionConditionEntity_o *v19; // x11

  if ( (byte_40F88C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v11);
    byte_40F88C9 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&missionId,
                                                                                                  *(_QWORD *)&progressType,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  MissionCondList = EventMissionConditionMaster__getMissionCondList(this, eventId, missionId, v13);
  if ( !MissionCondList )
    goto LABEL_21;
  v15 = *(_QWORD *)&MissionCondList->max_length;
  if ( (int)v15 < 1 )
    goto LABEL_19;
  v16 = 0LL;
  v17 = 0LL;
  do
  {
    m_Items = MissionCondList->m_Items;
    v19 = MissionCondList->m_Items[v16];
    if ( (progressType & 0x80000000) != 0 )
      goto LABEL_9;
    if ( !v19 )
      goto LABEL_21;
    if ( v19->fields.missionProgressType == progressType )
    {
LABEL_9:
      if ( v17 )
      {
        if ( !v19 )
          goto LABEL_21;
        if ( v19->fields.priority > v17->fields.targetId )
          v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v16];
      }
      else
      {
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v16];
      }
    }
    ++v16;
  }
  while ( v16 < (int)v15 );
  if ( !v17 )
  {
LABEL_19:
    if ( v12 )
      return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
LABEL_21:
    sub_B170D4();
  }
  if ( !v12 )
    goto LABEL_21;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    v17,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventMissionConditionMaster__getMissionIdListClearWithDailyOpen(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  int missionId; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x3
  EventMissionConditionEntity_o *v24; // x25
  __int64 v25; // x10

  if ( (byte_40F88CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&EventMissionConditionEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    byte_40F88CB = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    *(_QWORD *)&missionType,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getServerDateTime(0LL);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    missionId = -1;
    while ( 1 )
    {
      v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v20 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v20,
               v18,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = (EventMissionConditionEntity_o *)Item;
        v25 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] == EventMissionConditionEntity_TypeInfo
          && LODWORD(Item[2].klass) == eventId )
        {
          if ( HIDWORD(Item[1].klass) == 3
            && EventMissionConditionMaster__checkEventMissionCondition(
                 (EventMissionConditionMaster_o *)Item,
                 (EventMissionConditionEntity_o *)Item,
                 missionType,
                 v23) )
          {
            missionId = v24->fields.missionId;
          }
          else if ( missionId == v24->fields.missionId
                 && v24->fields.missionProgressType == 4
                 && EventMissionConditionEntity__getMissionProgress(v24, v22) )
          {
            if ( !v14 )
              break;
            System_Collections_Generic_List_int___Add(
              v14,
              v24->fields.missionId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( ++v18 >= v17 )
        return v14;
    }
LABEL_24:
    sub_B170D4();
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionConditionMaster__getTodayFirstMissionId(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t Month; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w24
  int32_t v31; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v32; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x26
  __int64 v35; // x10
  int64_t monitor; // x27
  int32_t v37; // w27
  int32_t v38; // w0
  EventMissionConditionMaster___c_c *v39; // x0
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x19
  Il2CppObject *v42; // x20
  struct EventMissionConditionMaster___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x8
  int32_t Day; // [xsp+Ch] [xbp-64h]
  uint64_t v53; // [xsp+10h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-58h] BYREF
  System_DateTime_o v55; // 0:x0.8
  System_DateTime_o v56; // 0:x0.8
  System_DateTime_o v57; // 0:x0.8
  System_DateTime_o v58; // 0:x0.8

  if ( (byte_40F88CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_EventMissionConditionEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_EventMissionConditionEntity__TypeInfo, v7);
    sub_B16FFC(&EventMissionConditionEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__, v16);
    sub_B16FFC(&EventMissionConditionMaster___c_TypeInfo, v17);
    byte_40F88CC = 1;
  }
  v53 = 0LL;
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v55.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v55, 0LL);
  v56.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v56, 0LL);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v30 = Count;
    v31 = 0;
    while ( 1 )
    {
      v32 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v32 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v32,
               v31,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v35 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] == EventMissionConditionEntity_TypeInfo
          && LODWORD(Item[2].klass) == eventId
          && HIDWORD(Item[1].klass) == 3
          && LODWORD(Item[2].monitor) == 12 )
        {
          monitor = (int64_t)Item[3].monitor;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v53 = NetworkManager__getServerDateTime_23685560(monitor, 0LL).fields.dateData;
          v57.fields.dateData = (uint64_t)&v53;
          v37 = System_DateTime__get_Month(v57, 0LL);
          v58.fields.dateData = (uint64_t)&v53;
          v38 = System_DateTime__get_Day(v58, 0LL);
          if ( Month == v37 && Day == v38 )
          {
            if ( !v23 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              v34,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
          }
        }
      }
      if ( ++v31 >= v30 )
        goto LABEL_24;
    }
LABEL_37:
    sub_B170D4();
  }
LABEL_24:
  v39 = EventMissionConditionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionConditionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo);
    v39 = EventMissionConditionMaster___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMissionConditionEntity__TypeInfo,
                                                                           v26,
                                                                           v27,
                                                                           v28,
                                                                           v29);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v42,
      Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v43 = EventMissionConditionMaster___c_TypeInfo->static_fields;
    v43->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v43->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  if ( !v23 )
    goto LABEL_37;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( v23->fields._size < 1 )
    return 0;
  v50 = v23->fields._items->m_Items[0];
  if ( !v50 )
    goto LABEL_37;
  return v50->fields.missionTargetId;
}


void __fastcall EventMissionConditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FF1 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionConditionMaster___c_TypeInfo, v1);
    byte_40F6FF1 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventMissionConditionMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventMissionConditionMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventMissionConditionMaster___c___ctor(
        EventMissionConditionMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionConditionMaster___c___getMissionCondList_b__8_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.missionProgressType - b->fields.missionProgressType;
}


int32_t __fastcall EventMissionConditionMaster___c___getTodayFirstMissionId_b__13_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.id - b->fields.id;
}