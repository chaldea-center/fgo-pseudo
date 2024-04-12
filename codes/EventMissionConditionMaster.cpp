void __fastcall EventMissionConditionMaster___ctor(EventMissionConditionMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B04DA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
    byte_42B04DA = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
  this->fields.missionIdToEventMissionConditionEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.missionIdToEventMissionConditionEntityListDictionary,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    134,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
}


void __fastcall EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_42B04DC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    this = (EventMissionConditionMaster_o *)sub_B52984(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_42B04DC = 1;
  }
  value = 0LL;
  if ( !eventMissionConditionEntity )
    goto LABEL_10;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
          eventMissionConditionEntity->fields.missionId,
          &value,
          (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v5;
    this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
    if ( !this )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
      eventMissionConditionEntity->fields.missionId,
      (WarBoardAIRoute_RouteData_o *)v5,
      (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
  }
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
LABEL_10:
    sub_B52A5C(this, eventMissionConditionEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
    (EventMissionProgressRequest_Argument_ProgressData_o *)eventMissionConditionEntity,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
}


void __fastcall EventMissionConditionMaster__CreateMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  EventMissionConditionEntity_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x10
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0

  if ( (byte_42B04DB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__);
    sub_B52984(&EventMissionConditionEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B04DB = 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          missionIdToEventMissionConditionEntityListDictionary,
          (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__),
        (missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list) == 0LL) )
  {
    sub_B52A5C(missionIdToEventMissionConditionEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)missionIdToEventMissionConditionEntityListDictionary,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_17:
      v15 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v16 = (EventMissionConditionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                             Enumerator,
                                             *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      v18 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (EventMissionConditionEntity_c *)v16->klass->_2.typeHierarchy[v18 - 1] == EventMissionConditionEntity_TypeInfo )
      {
        EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(this, v16, v17);
      }
    }
  }
  v19 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_27:
    v22 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
}


System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntitiesFromTargetId(
        EventMissionConditionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v7; // x1
  __int64 v8; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x10
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0

  if ( (byte_42B04E5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventMissionConditionEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_42B04E5 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B52A5C(0LL, v7);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v11 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v11;
          p_offset += 4;
          if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
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
            goto LABEL_16;
        }
        v18 = (__int64)&v15->vtable[*v17].method;
      }
      else
      {
LABEL_16:
        v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v14);
      }
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v18 + 8));
      if ( !v19 )
        goto LABEL_33;
      v21 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (EventMissionConditionEntity_c *)v19->klass->_2.typeHierarchy[v21 - 1] != EventMissionConditionEntity_TypeInfo )
      {
        v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v19);
LABEL_33:
        sub_B52A5C(v19, v20);
      }
      if ( v19->fields.addCount == missionTargetId )
      {
        if ( !v5 )
          sub_B52A5C(v19, EventMissionConditionEntity_TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v19,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
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
          goto LABEL_28;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_28:
      v25 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v14);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
      Enumerator,
      *(_QWORD *)(v25 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v5;
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

  if ( (byte_42B04D8 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
    byte_42B04D8 = 1;
  }
  PK = EventMissionConditionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionConditionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23E2728 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_42B04E6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventMissionConditionEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_42B04E6 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B52A5C(0LL, v9);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v13;
          p_offset += 4;
          if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v17 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v18 = 0LL;
        v19 = &v17->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v18;
          v19 += 4;
          if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v20 = (__int64)&v17->vtable[*v19].method;
      }
      else
      {
LABEL_16:
        v20 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v16);
      }
      v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
              Enumerator,
              *(_QWORD *)(v20 + 8));
      if ( !v21 )
        goto LABEL_34;
      v23 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v23
        || *(EventMissionConditionEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v23 - 8) != EventMissionConditionEntity_TypeInfo )
      {
        v21 = sub_B52D50(v21);
LABEL_34:
        sub_B52A5C(v21, v22);
      }
      if ( *(_DWORD *)(v21 + 32) == targetId && *(_DWORD *)(v21 + 40) == condType )
      {
        if ( !v7 )
          sub_B52A5C(v21, EventMissionConditionEntity_TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
      }
    }
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_29:
      v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v16);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
      Enumerator,
      *(_QWORD *)(v27 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v7;
}


System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        int32_t progressType,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_42B04E7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_42B04E7 = 1;
  }
  value = 0LL;
  memset(&v15, 0, sizeof(v15));
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v9;
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)value;
  if ( !value )
LABEL_17:
    sub_B52A5C(missionIdToEventMissionConditionEntityListDictionary, v10);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v12 )
      break;
    if ( !v15.fields.current )
      sub_B52A5C(v12, v13);
    if ( HIDWORD(v15.fields.current[1].klass) == progressType && LODWORD(v15.fields.current[2].monitor) == condType )
    {
      if ( !v9 )
        sub_B52A5C(v12, v13);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15.fields.current,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionConditionMaster__IsMissionRunning(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  char v6; // w21
  char v7; // w20
  int klass_high; // w9
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  int v11; // w21
  char v12; // w8
  bool v13; // w19
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-40h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-18h] BYREF

  if ( (byte_42B04E4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    byte_42B04E4 = 1;
  }
  value = 0LL;
  memset(&v16, 0, sizeof(v16));
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_27;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v12 = 1;
    return v12 ^ 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)value;
  if ( !value )
LABEL_27:
    sub_B52A5C(missionIdToEventMissionConditionEntityListDictionary, *(_QWORD *)&missionId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v6 = 0;
  v16 = v15;
  v7 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v16,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v9 )
      {
        v13 = 0;
        v11 = 126;
        goto LABEL_22;
      }
      if ( !v16.fields.current )
        sub_B52A5C(v9, v10);
      klass_high = HIDWORD(v16.fields.current[1].klass);
      if ( (klass_high & 0xFFFFFFFE) == 2 )
        break;
      if ( klass_high == 4
        && !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v16.fields.current, v10) )
      {
        v7 = 0;
      }
      if ( (v6 & 1) != 0 )
        goto LABEL_11;
    }
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v16.fields.current, v10) )
      break;
    v6 = 1;
LABEL_11:
    if ( (v7 & 1) == 0 )
    {
      v13 = 1;
      goto LABEL_21;
    }
  }
  v13 = 0;
LABEL_21:
  v11 = 131;
LABEL_22:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  if ( v11 != 131 )
  {
    v12 = v7;
    return v12 ^ 1;
  }
  return v13;
}


void __fastcall EventMissionConditionMaster__OnListChangedImplementation(
        EventMissionConditionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventMissionConditionMaster_o *v5; // x19
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x0
  System_NotImplementedException_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  __int64 v17; // x21
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x3
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  System_Collections_IEnumerator_c **v25; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  EventMissionConditionEntity_o *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x10
  const MethodInfo *v31; // x2
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x21
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x3
  __int64 v45; // x20
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x3
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  System_Collections_IEnumerator_c **v53; // x11
  __int64 v54; // x0
  __int64 v55; // x0
  EventMissionConditionEntity_o *v56; // x21
  __int64 v57; // x8
  __int64 v58; // x10
  const MethodInfo *v59; // x2
  int v60; // w23
  __int64 v61; // x0
  __int64 v62; // x3
  __int64 v63; // x8
  __int64 v64; // x20
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  int v68[2]; // [xsp+0h] [xbp-40h]
  int v69; // [xsp+8h] [xbp-38h]

  v5 = this;
  if ( (byte_42B04DE & 1) == 0 )
  {
    sub_B52984(&EventMissionConditionEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerable_TypeInfo);
    this = (EventMissionConditionMaster_o *)sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B04DE = 1;
  }
  v69 = 0;
  if ( !e )
    sub_B52A5C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v12 = sub_B52988(&System_NotImplementedException_TypeInfo);
      v13 = (System_NotImplementedException_o *)sub_B52A54(v12);
      System_NotImplementedException___ctor(v13, 0LL);
      v14 = sub_B52988(&Method_EventMissionConditionMaster_OnListChangedImplementation__);
      sub_B52A28(v13, v14);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v17 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v17 )
      sub_B52A5C(0LL, v15);
    while ( 1 )
    {
      v18 = *(_QWORD *)v17;
      if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
      {
        v19 = 0LL;
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
            goto LABEL_21;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_21:
        v21 = sub_AEB880(v17, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
        break;
      v23 = *(_QWORD *)v17;
      if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
      {
        v24 = 0LL;
        v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v24;
          v25 += 2;
          if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
            goto LABEL_28;
        }
        v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
      }
      else
      {
LABEL_28:
        v26 = sub_AEB880(v17, System_Collections_IEnumerator_TypeInfo, 1LL, v22);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v17, *(_QWORD *)(v26 + 8));
      v28 = (EventMissionConditionEntity_o *)v27;
      if ( v27 )
      {
        v29 = *(_QWORD *)v27;
        v30 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) >= (unsigned int)v30
          && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v29 + 200) + 8 * v30 - 8) == EventMissionConditionEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v29 + 376))(v27, *(_QWORD *)(v29 + 384)) )
            EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(v5, v28, v31);
        }
      }
    }
    v68[0] = 117;
    v69 = 1;
    v32 = sub_B52A44(v17, System_IDisposable_TypeInfo);
    if ( v32 )
    {
      v33 = *(_QWORD *)v32;
      v34 = v32;
      if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
      {
        v35 = 0LL;
        v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
        {
          ++v35;
          v36 += 4;
          if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
            goto LABEL_40;
        }
        v37 = v33 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_40:
        v37 = sub_AEB880(v32, System_IDisposable_TypeInfo, 0LL, v3);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
    }
    v69 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v39 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v41 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_49:
      v42 = sub_AEB880(newItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v45 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v42)(newItems, *(_QWORD *)(v42 + 8));
    if ( !v45 )
      sub_B52A5C(0LL, v43);
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
        v49 = sub_AEB880(v45, System_Collections_IEnumerator_TypeInfo, 0LL, v44);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
        break;
      v51 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v52 = 0LL;
        v53 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *(v53 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v52;
          v53 += 2;
          if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_63;
        }
        v54 = v51 + 16LL * (*(_DWORD *)v53 + 1) + 312;
      }
      else
      {
LABEL_63:
        v54 = sub_AEB880(v45, System_Collections_IEnumerator_TypeInfo, 1LL, v50);
      }
      v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v45, *(_QWORD *)(v54 + 8));
      v56 = (EventMissionConditionEntity_o *)v55;
      if ( v55 )
      {
        v57 = *(_QWORD *)v55;
        v58 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v55 + 300LL) >= (unsigned int)v58
          && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v57 + 200) + 8 * v58 - 8) == EventMissionConditionEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v57 + 376))(v55, *(_QWORD *)(v57 + 384)) )
        {
          EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(v5, v56, v59);
        }
      }
    }
    v68[0] = 213;
    v60 = ++v69;
    v61 = sub_B52A44(v45, System_IDisposable_TypeInfo);
    if ( v61 )
    {
      v63 = *(_QWORD *)v61;
      v64 = v61;
      if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
      {
        v65 = 0LL;
        v66 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
        {
          ++v65;
          v66 += 4;
          if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
            goto LABEL_75;
        }
        v67 = v63 + 16LL * *v66 + 312;
      }
      else
      {
LABEL_75:
        v67 = sub_AEB880(v61, System_IDisposable_TypeInfo, 0LL, v62);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v67)(v64, *(_QWORD *)(v67 + 8));
    }
    if ( v60 && v68[v60 - 1] == 213 )
    {
      v69 = v60 - 1;
      return;
    }
LABEL_81:
    EventMissionConditionMaster__CreateMissionIdToEventMissionConditionEntityListDictionary(v5, (const MethodInfo *)e);
  }
}


void __fastcall EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x20
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_42B04DD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
    this = (EventMissionConditionMaster_o *)sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    byte_42B04DD = 1;
  }
  value = 0LL;
  if ( !eventMissionConditionEntity )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
          eventMissionConditionEntity->fields.missionId,
          &value,
          (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return;
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)value,
                                            (WarBoardManager_TaskList_o *)eventMissionConditionEntity,
                                            (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value->fields.eval) )
    return;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_B52A5C(this, eventMissionConditionEntity);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
    eventMissionConditionEntity->fields.missionId,
    (const MethodInfo_2F296E4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
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

  if ( (byte_42B04D9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
    byte_42B04D9 = 1;
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
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
}


bool __fastcall EventMissionConditionMaster__checkEventMissionCondition(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *entity,
        int32_t missionType,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( !entity )
    sub_B52A5C(this, 0LL);
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


EventMissionConditionEntity_array *__fastcall EventMissionConditionMaster__getMissionCondList(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v8; // x1
  void *missionIdToEventMissionConditionEntityListDictionary; // x0
  WarBoardEvalValueSquare_CalcEval_o *v10; // x24
  float eval; // w21
  unsigned int v12; // w22
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v15; // x21
  struct EventMissionConditionMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B04DF & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_EventMissionConditionEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_B52984(&Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__);
    sub_B52984(&EventMissionConditionMaster___c_TypeInfo);
    byte_42B04DF = 1;
  }
  value = 0LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_27;
  missionIdToEventMissionConditionEntityListDictionary = (void *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)missionIdToEventMissionConditionEntityListDictionary,
                                                                   missionId,
                                                                   &value,
                                                                   (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
  if ( ((unsigned __int8)missionIdToEventMissionConditionEntityListDictionary & 1) != 0 )
  {
    v10 = value;
    if ( !value )
      goto LABEL_27;
    eval = value->fields.eval;
    if ( SLODWORD(eval) >= 1 )
    {
      v12 = 0;
      do
      {
        if ( LODWORD(v10->fields.eval) <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v8 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&v10->fields.viewpoint
                                                                     + 8LL * (int)v12
                                                                     + 32);
        if ( !v8 )
          break;
        if ( v8->fields.addCount == eventId )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            v8,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
        }
        if ( (int)++v12 >= SLODWORD(eval) )
          goto LABEL_17;
        v10 = value;
      }
      while ( value );
LABEL_27:
      sub_B52A5C(missionIdToEventMissionConditionEntityListDictionary, v8);
    }
  }
LABEL_17:
  missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionConditionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo);
    missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionConditionMaster___c_StaticFields *)*((_QWORD *)missionIdToEventMissionConditionEntityListDictionary
                                                                         + 23);
  _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (*((_BYTE *)missionIdToEventMissionConditionEntityListDictionary + 307) & 4) != 0
      && !*((_DWORD *)missionIdToEventMissionConditionEntityListDictionary + 56) )
    {
      j_il2cpp_runtime_class_init_0(missionIdToEventMissionConditionEntityListDictionary);
      static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v15,
      Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v16 = EventMissionConditionMaster___c_TypeInfo->static_fields;
    v16->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v7 )
    goto LABEL_27;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__getMissionCondListByType(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        int32_t type,
        const MethodInfo *method)
{
  EventMissionConditionEntity_array *MissionCondList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  __int64 v11; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x1
  __int64 v13; // x8
  __int64 v14; // x22
  __int64 v16; // x0

  if ( (byte_42B04E1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_42B04E1 = 1;
  }
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      this,
                      eventId,
                      missionId,
                      *(const MethodInfo **)&type);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  if ( !MissionCondList )
    goto LABEL_14;
  v13 = *(_QWORD *)&MissionCondList->max_length;
  if ( v13 && (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= (unsigned int)v13 )
      {
        v16 = sub_B52A88(v11);
        sub_B52A28(v16, 0LL);
      }
      v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)MissionCondList->m_Items[v14];
      if ( !v12 )
        break;
      if ( v12->fields.missionConditionDetailId == type )
      {
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          v12,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
        v13 = *(_QWORD *)&MissionCondList->max_length;
      }
      if ( (int)++v14 >= (int)v13 )
        return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v10;
    }
LABEL_14:
    sub_B52A5C(v11, v12);
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v10;
}


EventMissionConditionEntity_array *__fastcall EventMissionConditionMaster__getMissionCondListHighPriority(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  const MethodInfo *v10; // x3
  EventMissionConditionEntity_array *MissionCondList; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x1
  __int64 v13; // x9
  __int64 v14; // x8
  EventMissionConditionEntity_o **m_Items; // x10
  EventMissionConditionEntity_o *v16; // x11

  if ( (byte_42B04E0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_42B04E0 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  MissionCondList = EventMissionConditionMaster__getMissionCondList(this, eventId, missionId, v10);
  if ( !MissionCondList )
    goto LABEL_21;
  v13 = *(_QWORD *)&MissionCondList->max_length;
  if ( (int)v13 < 1 )
    goto LABEL_19;
  v14 = 0LL;
  v12 = 0LL;
  do
  {
    m_Items = MissionCondList->m_Items;
    v16 = MissionCondList->m_Items[v14];
    if ( (progressType & 0x80000000) != 0 )
      goto LABEL_9;
    if ( !v16 )
      goto LABEL_21;
    if ( v16->fields.missionProgressType == progressType )
    {
LABEL_9:
      if ( v12 )
      {
        if ( !v16 )
          goto LABEL_21;
        if ( v16->fields.priority > v12->fields.targetId )
          v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v14];
      }
      else
      {
        v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v14];
      }
    }
    ++v14;
  }
  while ( v14 < (int)v13 );
  if ( !v12 )
  {
LABEL_19:
    if ( v9 )
      return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
LABEL_21:
    sub_B52A5C(MissionCondList, v12);
  }
  if ( !v9 )
    goto LABEL_21;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    v12,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall EventMissionConditionMaster__getMissionIdListClearWithDailyOpen(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  const MethodInfo *v8; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int missionId; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v15; // x3
  EventMissionConditionEntity_o *v16; // x25
  __int64 v17; // x10

  if ( (byte_42B04E2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventMissionConditionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B04E2 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getServerDateTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    missionId = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v12,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = (EventMissionConditionEntity_o *)Item;
        v17 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == EventMissionConditionEntity_TypeInfo
          && LODWORD(Item[2].klass) == eventId )
        {
          if ( HIDWORD(Item[1].klass) == 3
            && EventMissionConditionMaster__checkEventMissionCondition(
                 (EventMissionConditionMaster_o *)Item,
                 (EventMissionConditionEntity_o *)Item,
                 missionType,
                 v15) )
          {
            missionId = v16->fields.missionId;
          }
          else if ( missionId == v16->fields.missionId && v16->fields.missionProgressType == 4 )
          {
            list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)EventMissionConditionEntity__getMissionProgress(
                                                                                                     v16,
                                                                                                     v8);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v7 )
                break;
              System_Collections_Generic_List_int___Add(
                v7,
                v16->fields.missionId,
                (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
      }
      if ( ++v12 >= v11 )
        return v7;
    }
LABEL_24:
    sub_B52A5C(list, v8);
  }
  return v7;
}


int32_t __fastcall EventMissionConditionMaster__getTodayFirstMissionId(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t Month; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  __int64 v7; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w24
  int32_t v11; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x26
  __int64 v14; // x10
  int64_t monitor; // x27
  int32_t v16; // w27
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x19
  Il2CppObject *v19; // x20
  struct EventMissionConditionMaster___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x8
  int32_t Day; // [xsp+Ch] [xbp-64h]
  uint64_t v30; // [xsp+10h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-58h] BYREF
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x0.8

  if ( (byte_42B04E3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventMissionConditionEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_B52984(&EventMissionConditionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__);
    sub_B52984(&EventMissionConditionMaster___c_TypeInfo);
    byte_42B04E3 = 1;
  }
  v30 = 0LL;
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v32.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v32, 0LL);
  v33.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v33, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v11,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v14 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == EventMissionConditionEntity_TypeInfo
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
          v30 = NetworkManager__getServerDateTime_25742200(monitor, 0LL).fields.dateData;
          v34.fields.dateData = (uint64_t)&v30;
          v16 = System_DateTime__get_Month(v34, 0LL);
          v35.fields.dateData = (uint64_t)&v30;
          list = (void *)System_DateTime__get_Day(v35, 0LL);
          if ( Month == v16 && Day == (_DWORD)list )
          {
            if ( !v6 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v6,
              v13,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
          }
        }
      }
      if ( ++v11 >= v10 )
        goto LABEL_24;
    }
LABEL_37:
    sub_B52A5C(list, v7);
  }
LABEL_24:
  list = EventMissionConditionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionConditionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo);
    list = EventMissionConditionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionConditionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v19,
      Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v20 = EventMissionConditionMaster___c_TypeInfo->static_fields;
    v20->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v20->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v6 )
    goto LABEL_37;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v6,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( v6->fields._size < 1 )
    return 0;
  v27 = v6->fields._items->m_Items[0];
  if ( !v27 )
    goto LABEL_37;
  return v27->fields.missionTargetId;
}


void __fastcall EventMissionConditionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD921 & 1) == 0 )
  {
    sub_B52984(&EventMissionConditionMaster___c_TypeInfo);
    byte_42AD921 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventMissionConditionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionConditionMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.missionProgressType - b->fields.missionProgressType;
}


int32_t __fastcall EventMissionConditionMaster___c___getTodayFirstMissionId_b__13_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.id - b->fields.id;
}