void __fastcall EventMissionConditionMaster___ctor(EventMissionConditionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4188DD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v4);
    byte_4188DD1 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
  this->fields.missionIdToEventMissionConditionEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.missionIdToEventMissionConditionEntityListDictionary,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    133,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
}


void __fastcall EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4188DD3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      eventMissionConditionEntity);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v7);
    this = (EventMissionConditionMaster_o *)sub_B2C35C(
                                              &System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                              v8);
    byte_4188DD3 = 1;
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
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v9;
    this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
    if ( !this )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
      eventMissionConditionEntity->fields.missionId,
      (WarBoardAIRoute_RouteData_o *)v9,
      (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
  }
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
LABEL_10:
    sub_B2C434(this, eventMissionConditionEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
    (EventMissionProgressRequest_Argument_ProgressData_o *)eventMissionConditionEntity,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  EventMissionConditionEntity_o *v21; // x0
  const MethodInfo *v22; // x2
  __int64 v23; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_4188DD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__, v3);
    sub_B2C35C(&EventMissionConditionEntity_TypeInfo, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4188DD2 = 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          missionIdToEventMissionConditionEntityListDictionary,
          (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__),
        (missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list) == 0LL) )
  {
    sub_B2C434(missionIdToEventMissionConditionEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)missionIdToEventMissionConditionEntityListDictionary,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v9);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
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
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_17:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v16);
    }
    v21 = (EventMissionConditionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                             Enumerator,
                                             *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      v23 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (EventMissionConditionEntity_c *)v21->klass->_2.typeHierarchy[v23 - 1] == EventMissionConditionEntity_TypeInfo )
      {
        EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(this, v21, v22);
      }
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
        goto LABEL_27;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_27:
    v27 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v16);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntitiesFromTargetId(
        EventMissionConditionMaster_o *this,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x10
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_4188DDC & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_B2C35C(&EventMissionConditionEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v11);
    byte_4188DDC = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B2C434(0LL, v14);
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
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
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
        v25 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
      }
      v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v25 + 8));
      if ( !v26 )
        goto LABEL_33;
      v28 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EventMissionConditionEntity_c *)v26->klass->_2.typeHierarchy[v28 - 1] != EventMissionConditionEntity_TypeInfo )
      {
        v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v26);
LABEL_33:
        sub_B2C434(v26, v27);
      }
      if ( v26->fields.addCount == missionTargetId )
      {
        if ( !v12 )
          sub_B2C434(v26, EventMissionConditionEntity_TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v26,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
      }
    }
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_28:
      v32 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
      Enumerator,
      *(_QWORD *)(v32 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v12;
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

  if ( (byte_4188DCF & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4188DCF = 1;
  }
  PK = EventMissionConditionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionConditionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
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
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x10
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_4188DDD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&targetId);
    sub_B2C35C(&EventMissionConditionEntity_TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v13);
    byte_4188DDD = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
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
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
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
            goto LABEL_16;
        }
        v27 = (__int64)&v24->vtable[*v26].method;
      }
      else
      {
LABEL_16:
        v27 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
      }
      v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
              Enumerator,
              *(_QWORD *)(v27 + 8));
      if ( !v28 )
        goto LABEL_34;
      v30 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 300LL) < (unsigned int)v30
        || *(EventMissionConditionEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * v30 - 8) != EventMissionConditionEntity_TypeInfo )
      {
        v28 = sub_B2C728(v28);
LABEL_34:
        sub_B2C434(v28, v29);
      }
      if ( *(_DWORD *)(v28 + 32) == targetId && *(_DWORD *)(v28 + 40) == condType )
      {
        if ( !v14 )
          sub_B2C434(v28, EventMissionConditionEntity_TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
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
          goto LABEL_29;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_29:
      v34 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
      Enumerator,
      *(_QWORD *)(v34 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v14;
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
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-48h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4188DDE & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      *(_QWORD *)&missionId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v15);
    byte_4188DDE = 1;
  }
  value = 0LL;
  memset(&v22, 0, sizeof(v22));
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v16;
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)value;
  if ( !value )
LABEL_17:
    sub_B2C434(missionIdToEventMissionConditionEntityListDictionary, v17);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v19 )
      break;
    if ( !v22.fields.current )
      sub_B2C434(v19, v20);
    if ( HIDWORD(v22.fields.current[1].klass) == progressType && LODWORD(v22.fields.current[2].monitor) == condType )
    {
      if ( !v16 )
        sub_B2C434(v19, v20);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22.fields.current,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  char v10; // w21
  char v11; // w20
  int klass_high; // w9
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  int v15; // w21
  char v16; // w8
  bool v17; // w19
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-18h] BYREF

  if ( (byte_4188DDB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      *(_QWORD *)&missionId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v8);
    byte_4188DDB = 1;
  }
  value = 0LL;
  memset(&v20, 0, sizeof(v20));
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_27;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v16 = 1;
    return v16 ^ 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)value;
  if ( !value )
LABEL_27:
    sub_B2C434(missionIdToEventMissionConditionEntityListDictionary, *(_QWORD *)&missionId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v10 = 0;
  v20 = v19;
  v11 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v13 )
      {
        v17 = 0;
        v15 = 126;
        goto LABEL_22;
      }
      if ( !v20.fields.current )
        sub_B2C434(v13, v14);
      klass_high = HIDWORD(v20.fields.current[1].klass);
      if ( (klass_high & 0xFFFFFFFE) == 2 )
        break;
      if ( klass_high == 4
        && !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v20.fields.current, v14) )
      {
        v11 = 0;
      }
      if ( (v10 & 1) != 0 )
        goto LABEL_11;
    }
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v20.fields.current, v14) )
      break;
    v10 = 1;
LABEL_11:
    if ( (v11 & 1) == 0 )
    {
      v17 = 1;
      goto LABEL_21;
    }
  }
  v17 = 0;
LABEL_21:
  v15 = 131;
LABEL_22:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  if ( v15 != 131 )
  {
    v16 = v11;
    return v16 ^ 1;
  }
  return v17;
}


void __fastcall EventMissionConditionMaster__OnListChangedImplementation(
        EventMissionConditionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventMissionConditionMaster_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x0
  System_NotImplementedException_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  __int64 v20; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  System_Collections_IEnumerator_c **v28; // x11
  __int64 v29; // x0
  __int64 v30; // x0
  EventMissionConditionEntity_o *v31; // x22
  __int64 v32; // x8
  __int64 v33; // x10
  const MethodInfo *v34; // x2
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x21
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x3
  __int64 v48; // x20
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x3
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  System_Collections_IEnumerator_c **v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  EventMissionConditionEntity_o *v59; // x21
  __int64 v60; // x8
  __int64 v61; // x10
  const MethodInfo *v62; // x2
  int v63; // w23
  __int64 v64; // x0
  __int64 v65; // x3
  __int64 v66; // x8
  __int64 v67; // x20
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  int v71[2]; // [xsp+0h] [xbp-40h]
  int v72; // [xsp+8h] [xbp-38h]

  v5 = this;
  if ( (byte_4188DD5 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionConditionEntity_TypeInfo, e);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerable_TypeInfo, v7);
    this = (EventMissionConditionMaster_o *)sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4188DD5 = 1;
  }
  v72 = 0;
  if ( !e )
    sub_B2C434(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v15 = sub_B2C360(&System_NotImplementedException_TypeInfo);
      v16 = (System_NotImplementedException_o *)sub_B2C42C(v15);
      System_NotImplementedException___ctor(v16, 0LL);
      v17 = sub_B2C360(&Method_EventMissionConditionMaster_OnListChangedImplementation__);
      sub_B2C400(v16, v17);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v20 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v20 )
      sub_B2C434(0LL, v18);
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
        v24 = sub_AC5258(v20, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v26 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v27 = 0LL;
        v28 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v27;
          v28 += 2;
          if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_28;
        }
        v29 = v26 + 16LL * (*(_DWORD *)v28 + 1) + 312;
      }
      else
      {
LABEL_28:
        v29 = sub_AC5258(v20, System_Collections_IEnumerator_TypeInfo, 1LL, v25);
      }
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
      v31 = (EventMissionConditionEntity_o *)v30;
      if ( v30 )
      {
        v32 = *(_QWORD *)v30;
        v33 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) >= (unsigned int)v33
          && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v32 + 200) + 8 * v33 - 8) == EventMissionConditionEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v32 + 376))(v30, *(_QWORD *)(v32 + 384)) )
            EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(v5, v31, v34);
        }
      }
    }
    v71[0] = 117;
    v72 = 1;
    v35 = sub_B2C41C(v20, System_IDisposable_TypeInfo);
    if ( v35 )
    {
      v36 = *(_QWORD *)v35;
      v37 = v35;
      if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
      {
        v38 = 0LL;
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
            goto LABEL_40;
        }
        v40 = v36 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_40:
        v40 = sub_AC5258(v35, System_IDisposable_TypeInfo, 0LL, v3);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
    }
    v72 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v42 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v44 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_49:
      v45 = sub_AC5258(newItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v48 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v45)(newItems, *(_QWORD *)(v45 + 8));
    if ( !v48 )
      sub_B2C434(0LL, v46);
    while ( 1 )
    {
      v49 = *(_QWORD *)v48;
      if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
      {
        v50 = 0LL;
        v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v50;
          v51 += 4;
          if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
            goto LABEL_56;
        }
        v52 = v49 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_56:
        v52 = sub_AC5258(v48, System_Collections_IEnumerator_TypeInfo, 0LL, v47);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
        break;
      v54 = *(_QWORD *)v48;
      if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
      {
        v55 = 0LL;
        v56 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *(v56 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v55;
          v56 += 2;
          if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
            goto LABEL_63;
        }
        v57 = v54 + 16LL * (*(_DWORD *)v56 + 1) + 312;
      }
      else
      {
LABEL_63:
        v57 = sub_AC5258(v48, System_Collections_IEnumerator_TypeInfo, 1LL, v53);
      }
      v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v48, *(_QWORD *)(v57 + 8));
      v59 = (EventMissionConditionEntity_o *)v58;
      if ( v58 )
      {
        v60 = *(_QWORD *)v58;
        v61 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v58 + 300LL) >= (unsigned int)v61
          && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v60 + 200) + 8 * v61 - 8) == EventMissionConditionEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v60 + 376))(v58, *(_QWORD *)(v60 + 384)) )
        {
          EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(v5, v59, v62);
        }
      }
    }
    v71[0] = 213;
    v63 = ++v72;
    v64 = sub_B2C41C(v48, System_IDisposable_TypeInfo);
    if ( v64 )
    {
      v66 = *(_QWORD *)v64;
      v67 = v64;
      if ( *(_WORD *)(*(_QWORD *)v64 + 298LL) )
      {
        v68 = 0LL;
        v69 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
        {
          ++v68;
          v69 += 4;
          if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v64 + 298LL) )
            goto LABEL_75;
        }
        v70 = v66 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_75:
        v70 = sub_AC5258(v64, System_IDisposable_TypeInfo, 0LL, v65);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v70)(v67, *(_QWORD *)(v70 + 8));
    }
    if ( v63 && v71[v63 - 1] == 213 )
    {
      v72 = v63 - 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4188DD4 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__,
      eventMissionConditionEntity);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__, v6);
    this = (EventMissionConditionMaster_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__,
                                              v7);
    byte_4188DD4 = 1;
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
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return;
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)value,
                                            (WarBoardManager_TaskList_o *)eventMissionConditionEntity,
                                            (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value->fields.eval) )
    return;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_B2C434(this, eventMissionConditionEntity);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
    eventMissionConditionEntity->fields.missionId,
    (const MethodInfo_2E66128 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
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

  if ( (byte_4188DD0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__,
      entity);
    byte_4188DD0 = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
}


bool __fastcall EventMissionConditionMaster__checkEventMissionCondition(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *entity,
        int32_t missionType,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( !entity )
    sub_B2C434(this, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x1
  void *missionIdToEventMissionConditionEntityListDictionary; // x0
  WarBoardEvalValueSquare_CalcEval_o *v21; // x24
  float eval; // w21
  unsigned int v23; // w22
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v26; // x21
  struct EventMissionConditionMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188DD6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMissionConditionEntity___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_EventMissionConditionEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v15);
    sub_B2C35C(&Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__, v16);
    sub_B2C35C(&EventMissionConditionMaster___c_TypeInfo, v17);
    byte_4188DD6 = 1;
  }
  value = 0LL;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_27;
  missionIdToEventMissionConditionEntityListDictionary = (void *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)missionIdToEventMissionConditionEntityListDictionary,
                                                                   missionId,
                                                                   &value,
                                                                   (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
  if ( ((unsigned __int8)missionIdToEventMissionConditionEntityListDictionary & 1) != 0 )
  {
    v21 = value;
    if ( !value )
      goto LABEL_27;
    eval = value->fields.eval;
    if ( SLODWORD(eval) >= 1 )
    {
      v23 = 0;
      do
      {
        if ( LODWORD(v21->fields.eval) <= v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v19 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&v21->fields.viewpoint
                                                                      + 8LL * (int)v23
                                                                      + 32);
        if ( !v19 )
          break;
        if ( v19->fields.addCount == eventId )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            v19,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
        }
        if ( (int)++v23 >= SLODWORD(eval) )
          goto LABEL_17;
        v21 = value;
      }
      while ( value );
LABEL_27:
      sub_B2C434(missionIdToEventMissionConditionEntityListDictionary, v19);
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v26,
      Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v27 = EventMissionConditionMaster___c_TypeInfo->static_fields;
    v27->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v27->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v18 )
    goto LABEL_27;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  __int64 v13; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x1
  __int64 v15; // x8
  __int64 v16; // x22
  __int64 v18; // x0

  if ( (byte_4188DD8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v10);
    byte_4188DD8 = 1;
  }
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      this,
                      eventId,
                      missionId,
                      *(const MethodInfo **)&type);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  if ( !MissionCondList )
    goto LABEL_14;
  v15 = *(_QWORD *)&MissionCondList->max_length;
  if ( v15 && (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= (unsigned int)v15 )
      {
        v18 = sub_B2C460(v13);
        sub_B2C400(v18, 0LL);
      }
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)MissionCondList->m_Items[v16];
      if ( !v14 )
        break;
      if ( v14->fields.missionConditionDetailId == type )
      {
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v14,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
        v15 = *(_QWORD *)&MissionCondList->max_length;
      }
      if ( (int)++v16 >= (int)v15 )
        return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v12;
    }
LABEL_14:
    sub_B2C434(v13, v14);
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v12;
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
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x1
  __int64 v16; // x9
  __int64 v17; // x8
  EventMissionConditionEntity_o **m_Items; // x10
  EventMissionConditionEntity_o *v19; // x11

  if ( (byte_4188DD7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v11);
    byte_4188DD7 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  MissionCondList = EventMissionConditionMaster__getMissionCondList(this, eventId, missionId, v13);
  if ( !MissionCondList )
    goto LABEL_21;
  v16 = *(_QWORD *)&MissionCondList->max_length;
  if ( (int)v16 < 1 )
    goto LABEL_19;
  v17 = 0LL;
  v15 = 0LL;
  do
  {
    m_Items = MissionCondList->m_Items;
    v19 = MissionCondList->m_Items[v17];
    if ( (progressType & 0x80000000) != 0 )
      goto LABEL_9;
    if ( !v19 )
      goto LABEL_21;
    if ( v19->fields.missionProgressType == progressType )
    {
LABEL_9:
      if ( v15 )
      {
        if ( !v19 )
          goto LABEL_21;
        if ( v19->fields.priority > v15->fields.targetId )
          v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v17];
      }
      else
      {
        v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v17];
      }
    }
    ++v17;
  }
  while ( v17 < (int)v16 );
  if ( !v15 )
  {
LABEL_19:
    if ( v12 )
      return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
LABEL_21:
    sub_B2C434(MissionCondList, v15);
  }
  if ( !v12 )
    goto LABEL_21;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    v15,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventMissionConditionMaster__getMissionIdListClearWithDailyOpen(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x22
  const MethodInfo *v14; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  int missionId; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v21; // x3
  EventMissionConditionEntity_o *v22; // x25
  __int64 v23; // x10

  if ( (byte_4188DD9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventMissionConditionEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    byte_4188DD9 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    missionId = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v18,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = (EventMissionConditionEntity_o *)Item;
        v23 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] == EventMissionConditionEntity_TypeInfo
          && LODWORD(Item[2].klass) == eventId )
        {
          if ( HIDWORD(Item[1].klass) == 3
            && EventMissionConditionMaster__checkEventMissionCondition(
                 (EventMissionConditionMaster_o *)Item,
                 (EventMissionConditionEntity_o *)Item,
                 missionType,
                 v21) )
          {
            missionId = v22->fields.missionId;
          }
          else if ( missionId == v22->fields.missionId && v22->fields.missionProgressType == 4 )
          {
            list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)EventMissionConditionEntity__getMissionProgress(
                                                                                                     v22,
                                                                                                     v14);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v13 )
                break;
              System_Collections_Generic_List_int___Add(
                v13,
                v22->fields.missionId,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
      }
      if ( ++v18 >= v17 )
        return v13;
    }
LABEL_24:
    sub_B2C434(list, v14);
  }
  return v13;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  __int64 v20; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v23; // w24
  int32_t v24; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x26
  __int64 v27; // x10
  int64_t monitor; // x27
  int32_t v29; // w27
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x19
  Il2CppObject *v32; // x20
  struct EventMissionConditionMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x8
  int32_t Day; // [xsp+Ch] [xbp-64h]
  uint64_t v43; // [xsp+10h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-58h] BYREF
  System_DateTime_o v45; // 0:x0.8
  System_DateTime_o v46; // 0:x0.8
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8

  if ( (byte_4188DDA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_EventMissionConditionEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_EventMissionConditionEntity__TypeInfo, v7);
    sub_B2C35C(&EventMissionConditionEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__, v16);
    sub_B2C35C(&EventMissionConditionMaster___c_TypeInfo, v17);
    byte_4188DDA = 1;
  }
  v43 = 0LL;
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v45.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v45, 0LL);
  v46.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v46, 0LL);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v24,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v27 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == EventMissionConditionEntity_TypeInfo
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
          v43 = NetworkManager__getServerDateTime_26271756(monitor, 0LL).fields.dateData;
          v47.fields.dateData = (uint64_t)&v43;
          v29 = System_DateTime__get_Month(v47, 0LL);
          v48.fields.dateData = (uint64_t)&v43;
          list = (void *)System_DateTime__get_Day(v48, 0LL);
          if ( Month == v29 && Day == (_DWORD)list )
          {
            if ( !v19 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v19,
              v26,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
          }
        }
      }
      if ( ++v24 >= v23 )
        goto LABEL_24;
    }
LABEL_37:
    sub_B2C434(list, v20);
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
    v32 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v32,
      Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v33 = EventMissionConditionMaster___c_TypeInfo->static_fields;
    v33->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v33->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v19 )
    goto LABEL_37;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( v19->fields._size < 1 )
    return 0;
  v40 = v19->fields._items->m_Items[0];
  if ( !v40 )
    goto LABEL_37;
  return v40->fields.missionTargetId;
}


void __fastcall EventMissionConditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B24 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionConditionMaster___c_TypeInfo, v1);
    byte_4184B24 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventMissionConditionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionConditionMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.missionProgressType - b->fields.missionProgressType;
}


int32_t __fastcall EventMissionConditionMaster___c___getTodayFirstMissionId_b__13_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.id - b->fields.id;
}