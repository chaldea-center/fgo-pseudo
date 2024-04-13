void __fastcall EventMissionConditionMaster___ctor(EventMissionConditionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E8FFC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v8, v9, v10);
    byte_42E8FFC = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
  this->fields.missionIdToEventMissionConditionEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.missionIdToEventMissionConditionEntityListDictionary,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    134,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
}


void __fastcall EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventMissionConditionMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42E8FFE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      (_DWORD)eventMissionConditionEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v12, v13, v14);
    this = (EventMissionConditionMaster_o *)sub_B5D5C4(
                                              &System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                              v15,
                                              v16,
                                              v17);
    byte_42E8FFE = 1;
  }
  value = 0LL;
  if ( !eventMissionConditionEntity )
    goto LABEL_10;
  this = (EventMissionConditionMaster_o *)v5->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
          eventMissionConditionEntity->fields.missionId,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v18;
    this = (EventMissionConditionMaster_o *)v5->fields.missionIdToEventMissionConditionEntityListDictionary;
    if ( !this )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
      eventMissionConditionEntity->fields.missionId,
      (WarBoardAIRoute_RouteData_o *)v18,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
  }
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
LABEL_10:
    sub_B5D69C(this, eventMissionConditionEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
    (EventMissionProgressRequest_Argument_ProgressData_o *)eventMissionConditionEntity,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
}


void __fastcall EventMissionConditionMaster__CreateMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  EventMissionConditionEntity_o *v33; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x10
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0

  if ( (byte_42E8FFD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&EventMissionConditionEntity_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    byte_42E8FFD = 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          missionIdToEventMissionConditionEntityListDictionary,
          (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__),
        (missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list) == 0LL) )
  {
    sub_B5D69C(missionIdToEventMissionConditionEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)missionIdToEventMissionConditionEntityListDictionary,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        p_offset += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_17:
      v32 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v28);
    }
    v33 = (EventMissionConditionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                             Enumerator,
                                             *(_QWORD *)(v32 + 8));
    if ( v33 )
    {
      v35 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v35
        && (EventMissionConditionEntity_c *)v33->klass->_2.typeHierarchy[v35 - 1] == EventMissionConditionEntity_TypeInfo )
      {
        EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(this, v33, v34);
      }
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_27:
    v39 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
}


System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntitiesFromTargetId(
        EventMissionConditionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v29; // x1
  __int64 v30; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x3
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x10
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0

  if ( (byte_42E9007 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      missionTargetId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&EventMissionConditionEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v24, v25, v26);
    byte_42E9007 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B5D69C(0LL, v29);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v33;
          p_offset += 4;
          if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v30);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v37 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v38 = 0LL;
        v39 = &v37->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v40 = (__int64)&v37->vtable[*v39].method;
      }
      else
      {
LABEL_16:
        v40 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v36);
      }
      v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v40 + 8));
      if ( !v41 )
        goto LABEL_33;
      v43 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41->klass->_2.bitflags2 + 1) < (unsigned int)v43
        || (EventMissionConditionEntity_c *)v41->klass->_2.typeHierarchy[v43 - 1] != EventMissionConditionEntity_TypeInfo )
      {
        v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v41);
LABEL_33:
        sub_B5D69C(v41, v42);
      }
      if ( v41->fields.addCount == missionTargetId )
      {
        if ( !v27 )
          sub_B5D69C(v41, EventMissionConditionEntity_TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          v41,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
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
          goto LABEL_28;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_28:
      v47 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v36);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
      Enumerator,
      *(_QWORD *)(v47 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v27;
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

  if ( (byte_42E8FFA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__,
      missionId,
      missionProgressType,
      *(_QWORD *)&id);
    byte_42E8FFA = 1;
  }
  PK = EventMissionConditionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionConditionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t targetId,
        int32_t condType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x10
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0

  if ( (byte_42E9008 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      targetId,
      condType,
      method);
    sub_B5D5C4(&EventMissionConditionEntity_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v25, v26, v27);
    byte_42E9008 = 1;
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B5D69C(0LL, v30);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v34 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v34;
          p_offset += 4;
          if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v38 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v39 = 0LL;
        v40 = &v38->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v39;
          v40 += 4;
          if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v41 = (__int64)&v38->vtable[*v40].method;
      }
      else
      {
LABEL_16:
        v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
      }
      v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
              Enumerator,
              *(_QWORD *)(v41 + 8));
      if ( !v42 )
        goto LABEL_34;
      v44 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 300LL) < (unsigned int)v44
        || *(EventMissionConditionEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * v44 - 8) != EventMissionConditionEntity_TypeInfo )
      {
        v42 = sub_B5D990(v42);
LABEL_34:
        sub_B5D69C(v42, v43);
      }
      if ( *(_DWORD *)(v42 + 32) == targetId && *(_DWORD *)(v42 + 40) == condType )
      {
        if ( !v28 )
          sub_B5D69C(v42, EventMissionConditionEntity_TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
      }
    }
    v45 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_29:
      v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
      Enumerator,
      *(_QWORD *)(v48 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v28;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        int32_t progressType,
        int32_t condType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  __int64 v31; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-48h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_42E9009 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      missionId,
      progressType,
      *(_QWORD *)&condType);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v27, v28, v29);
    byte_42E9009 = 1;
  }
  value = 0LL;
  memset(&v36, 0, sizeof(v36));
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v30;
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)value;
  if ( !value )
LABEL_17:
    sub_B5D69C(missionIdToEventMissionConditionEntityListDictionary, v31);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v33 )
      break;
    if ( !v36.fields.current )
      sub_B5D69C(v33, v34);
    if ( HIDWORD(v36.fields.current[1].klass) == progressType && LODWORD(v36.fields.current[2].monitor) == condType )
    {
      if ( !v30 )
        sub_B5D69C(v33, v34);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v30,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36.fields.current,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v30;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionConditionMaster__IsMissionRunning(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  char v19; // w21
  char v20; // w20
  int klass_high; // w9
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  int v24; // w21
  char v25; // w8
  bool v26; // w19
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-40h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-18h] BYREF

  if ( (byte_42E9006 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      missionId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v15, v16, v17);
    byte_42E9006 = 1;
  }
  value = 0LL;
  memset(&v29, 0, sizeof(v29));
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_27;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v25 = 1;
    return v25 ^ 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)value;
  if ( !value )
LABEL_27:
    sub_B5D69C(missionIdToEventMissionConditionEntityListDictionary, *(_QWORD *)&missionId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v19 = 0;
  v29 = v28;
  v20 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v29,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v22 )
      {
        v26 = 0;
        v24 = 126;
        goto LABEL_22;
      }
      if ( !v29.fields.current )
        sub_B5D69C(v22, v23);
      klass_high = HIDWORD(v29.fields.current[1].klass);
      if ( (klass_high & 0xFFFFFFFE) == 2 )
        break;
      if ( klass_high == 4
        && !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v29.fields.current, v23) )
      {
        v20 = 0;
      }
      if ( (v19 & 1) != 0 )
        goto LABEL_11;
    }
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v29.fields.current, v23) )
      break;
    v19 = 1;
LABEL_11:
    if ( (v20 & 1) == 0 )
    {
      v26 = 1;
      goto LABEL_21;
    }
  }
  v26 = 0;
LABEL_21:
  v24 = 131;
LABEL_22:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  if ( v24 != 131 )
  {
    v25 = v20;
    return v25 ^ 1;
  }
  return v26;
}


void __fastcall EventMissionConditionMaster__OnListChangedImplementation(
        EventMissionConditionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventMissionConditionMaster_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x0
  System_NotImplementedException_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  __int64 v26; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  System_Collections_IEnumerator_c **v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  EventMissionConditionEntity_o *v37; // x22
  __int64 v38; // x8
  __int64 v39; // x10
  const MethodInfo *v40; // x2
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x21
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  __int64 v54; // x20
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  System_Collections_IEnumerator_c **v62; // x11
  __int64 v63; // x0
  __int64 v64; // x0
  EventMissionConditionEntity_o *v65; // x21
  __int64 v66; // x8
  __int64 v67; // x10
  const MethodInfo *v68; // x2
  int v69; // w23
  __int64 v70; // x0
  __int64 v71; // x3
  __int64 v72; // x8
  __int64 v73; // x20
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  int v77[2]; // [xsp+0h] [xbp-40h]
  int v78; // [xsp+8h] [xbp-38h]

  v5 = this;
  if ( (byte_42E9000 & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionConditionEntity_TypeInfo, (_DWORD)e, (_DWORD)method, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_IEnumerable_TypeInfo, v9, v10, v11);
    this = (EventMissionConditionMaster_o *)sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    byte_42E9000 = 1;
  }
  v78 = 0;
  if ( !e )
    sub_B5D69C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v21 = sub_B5D5C8(&System_NotImplementedException_TypeInfo);
      v22 = (System_NotImplementedException_o *)sub_B5D694(v21);
      System_NotImplementedException___ctor(v22, 0LL);
      v23 = sub_B5D5C8(&Method_EventMissionConditionMaster_OnListChangedImplementation__);
      sub_B5D668(v22, v23);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v26 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v26 )
      sub_B5D69C(0LL, v24);
    while ( 1 )
    {
      v27 = *(_QWORD *)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
      {
        v28 = 0LL;
        v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
            goto LABEL_21;
        }
        v30 = v27 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_21:
        v30 = sub_AF54C0(v26, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
        break;
      v32 = *(_QWORD *)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
      {
        v33 = 0LL;
        v34 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *(v34 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v33;
          v34 += 2;
          if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
            goto LABEL_28;
        }
        v35 = v32 + 16LL * (*(_DWORD *)v34 + 1) + 312;
      }
      else
      {
LABEL_28:
        v35 = sub_AF54C0(v26, System_Collections_IEnumerator_TypeInfo, 1LL, v31);
      }
      v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v26, *(_QWORD *)(v35 + 8));
      v37 = (EventMissionConditionEntity_o *)v36;
      if ( v36 )
      {
        v38 = *(_QWORD *)v36;
        v39 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 300LL) >= (unsigned int)v39
          && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v38 + 200) + 8 * v39 - 8) == EventMissionConditionEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v38 + 376))(v36, *(_QWORD *)(v38 + 384)) )
            EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(v5, v37, v40);
        }
      }
    }
    v77[0] = 117;
    v78 = 1;
    v41 = sub_B5D684(v26, System_IDisposable_TypeInfo);
    if ( v41 )
    {
      v42 = *(_QWORD *)v41;
      v43 = v41;
      if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
      {
        v44 = 0LL;
        v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          ++v44;
          v45 += 4;
          if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
            goto LABEL_40;
        }
        v46 = v42 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_40:
        v46 = sub_AF54C0(v41, System_IDisposable_TypeInfo, 0LL, v3);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
    }
    v78 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v48 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v50 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_49:
      v51 = sub_AF54C0(newItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v54 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v51)(newItems, *(_QWORD *)(v51 + 8));
    if ( !v54 )
      sub_B5D69C(0LL, v52);
    while ( 1 )
    {
      v55 = *(_QWORD *)v54;
      if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
      {
        v56 = 0LL;
        v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v56;
          v57 += 4;
          if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
            goto LABEL_56;
        }
        v58 = v55 + 16LL * *v57 + 312;
      }
      else
      {
LABEL_56:
        v58 = sub_AF54C0(v54, System_Collections_IEnumerator_TypeInfo, 0LL, v53);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8)) & 1) == 0 )
        break;
      v60 = *(_QWORD *)v54;
      if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
      {
        v61 = 0LL;
        v62 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *(v62 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v61;
          v62 += 2;
          if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
            goto LABEL_63;
        }
        v63 = v60 + 16LL * (*(_DWORD *)v62 + 1) + 312;
      }
      else
      {
LABEL_63:
        v63 = sub_AF54C0(v54, System_Collections_IEnumerator_TypeInfo, 1LL, v59);
      }
      v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v54, *(_QWORD *)(v63 + 8));
      v65 = (EventMissionConditionEntity_o *)v64;
      if ( v64 )
      {
        v66 = *(_QWORD *)v64;
        v67 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v64 + 300LL) >= (unsigned int)v67
          && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v66 + 200) + 8 * v67 - 8) == EventMissionConditionEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v66 + 376))(v64, *(_QWORD *)(v66 + 384)) )
        {
          EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(v5, v65, v68);
        }
      }
    }
    v77[0] = 213;
    v69 = ++v78;
    v70 = sub_B5D684(v54, System_IDisposable_TypeInfo);
    if ( v70 )
    {
      v72 = *(_QWORD *)v70;
      v73 = v70;
      if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
      {
        v74 = 0LL;
        v75 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
        {
          ++v74;
          v75 += 4;
          if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
            goto LABEL_75;
        }
        v76 = v72 + 16LL * *v75 + 312;
      }
      else
      {
LABEL_75:
        v76 = sub_AF54C0(v70, System_IDisposable_TypeInfo, 0LL, v71);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v76)(v73, *(_QWORD *)(v76 + 8));
    }
    if ( v69 && v77[v69 - 1] == 213 )
    {
      v78 = v69 - 1;
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
  __int64 v3; // x3
  EventMissionConditionMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42E8FFF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__,
      (_DWORD)eventMissionConditionEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__, v9, v10, v11);
    this = (EventMissionConditionMaster_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__,
                                              v12,
                                              v13,
                                              v14);
    byte_42E8FFF = 1;
  }
  value = 0LL;
  if ( !eventMissionConditionEntity )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)v5->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
          eventMissionConditionEntity->fields.missionId,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return;
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)value,
                                            (WarBoardManager_TaskList_o *)eventMissionConditionEntity,
                                            (const MethodInfo_305896C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value->fields.eval) )
    return;
  this = (EventMissionConditionMaster_o *)v5->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_B5D69C(this, eventMissionConditionEntity);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
    eventMissionConditionEntity->fields.missionId,
    (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
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

  if ( (byte_42E8FFB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      missionId,
      *(_QWORD *)&missionProgressType);
    byte_42E8FFB = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
}


bool __fastcall EventMissionConditionMaster__checkEventMissionCondition(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *entity,
        int32_t missionType,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( !entity )
    sub_B5D69C(this, 0LL);
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
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x1
  void *missionIdToEventMissionConditionEntityListDictionary; // x0
  WarBoardEvalValueSquare_CalcEval_o *v43; // x24
  float eval; // w21
  unsigned int v45; // w22
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v48; // x21
  struct EventMissionConditionMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9001 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventMissionConditionEntity___ctor__, eventId, missionId, method);
    sub_B5D5C4(&System_Comparison_EventMissionConditionEntity__TypeInfo, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__, v34, v35, v36);
    sub_B5D5C4(&EventMissionConditionMaster___c_TypeInfo, v37, v38, v39);
    byte_42E9001 = 1;
  }
  value = 0LL;
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_27;
  missionIdToEventMissionConditionEntityListDictionary = (void *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)missionIdToEventMissionConditionEntityListDictionary,
                                                                   missionId,
                                                                   &value,
                                                                   (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
  if ( ((unsigned __int8)missionIdToEventMissionConditionEntityListDictionary & 1) != 0 )
  {
    v43 = value;
    if ( !value )
      goto LABEL_27;
    eval = value->fields.eval;
    if ( SLODWORD(eval) >= 1 )
    {
      v45 = 0;
      do
      {
        if ( LODWORD(v43->fields.eval) <= v45 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v41 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&v43->fields.viewpoint
                                                                      + 8LL * (int)v45
                                                                      + 32);
        if ( !v41 )
          break;
        if ( v41->fields.addCount == eventId )
        {
          if ( !v40 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v40,
            v41,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
        }
        if ( (int)++v45 >= SLODWORD(eval) )
          goto LABEL_17;
        v43 = value;
      }
      while ( value );
LABEL_27:
      sub_B5D69C(missionIdToEventMissionConditionEntityListDictionary, v41);
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
    v48 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v48,
      Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v49 = EventMissionConditionMaster___c_TypeInfo->static_fields;
    v49->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v40 )
    goto LABEL_27;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v40,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__getMissionCondListByType(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        int32_t type,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  EventMissionConditionEntity_array *MissionCondList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x1
  __int64 v19; // x8
  __int64 v20; // x22
  __int64 v22; // x0

  if ( (byte_42E9003 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
      eventId,
      missionId,
      *(_QWORD *)&type);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v12, v13, v14);
    byte_42E9003 = 1;
  }
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      this,
                      eventId,
                      missionId,
                      *(const MethodInfo **)&type);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  if ( !MissionCondList )
    goto LABEL_14;
  v19 = *(_QWORD *)&MissionCondList->max_length;
  if ( v19 && (int)v19 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v20 >= (unsigned int)v19 )
      {
        v22 = sub_B5D6C8(v17);
        sub_B5D668(v22, 0LL);
      }
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)MissionCondList->m_Items[v20];
      if ( !v18 )
        break;
      if ( v18->fields.missionConditionDetailId == type )
      {
        if ( !v16 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          v18,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
        v19 = *(_QWORD *)&MissionCondList->max_length;
      }
      if ( (int)++v20 >= (int)v19 )
        return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v16;
    }
LABEL_14:
    sub_B5D69C(v17, v18);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  const MethodInfo *v19; // x3
  EventMissionConditionEntity_array *MissionCondList; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  __int64 v22; // x9
  __int64 v23; // x8
  EventMissionConditionEntity_o **m_Items; // x10
  EventMissionConditionEntity_o *v25; // x11

  if ( (byte_42E9002 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
      eventId,
      missionId,
      *(_QWORD *)&progressType);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v15, v16, v17);
    byte_42E9002 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  MissionCondList = EventMissionConditionMaster__getMissionCondList(this, eventId, missionId, v19);
  if ( !MissionCondList )
    goto LABEL_21;
  v22 = *(_QWORD *)&MissionCondList->max_length;
  if ( (int)v22 < 1 )
    goto LABEL_19;
  v23 = 0LL;
  v21 = 0LL;
  do
  {
    m_Items = MissionCondList->m_Items;
    v25 = MissionCondList->m_Items[v23];
    if ( (progressType & 0x80000000) != 0 )
      goto LABEL_9;
    if ( !v25 )
      goto LABEL_21;
    if ( v25->fields.missionProgressType == progressType )
    {
LABEL_9:
      if ( v21 )
      {
        if ( !v25 )
          goto LABEL_21;
        if ( v25->fields.priority > v21->fields.targetId )
          v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v23];
      }
      else
      {
        v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v23];
      }
    }
    ++v23;
  }
  while ( v23 < (int)v22 );
  if ( !v21 )
  {
LABEL_19:
    if ( v18 )
      return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
LABEL_21:
    sub_B5D69C(MissionCondList, v21);
  }
  if ( !v18 )
    goto LABEL_21;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v18,
    v21,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall EventMissionConditionMaster__getMissionIdListClearWithDailyOpen(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
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
  System_Collections_Generic_List_int__o *v25; // x22
  const MethodInfo *v26; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w0
  int32_t v29; // w23
  int32_t v30; // w24
  int missionId; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v33; // x3
  EventMissionConditionEntity_o *v34; // x25
  __int64 v35; // x10

  if ( (byte_42E9004 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      missionType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventMissionConditionEntity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&NetworkManager_TypeInfo, v22, v23, v24);
    byte_42E9004 = 1;
  }
  v25 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
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
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    missionId = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v30,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = (EventMissionConditionEntity_o *)Item;
        v35 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] == EventMissionConditionEntity_TypeInfo
          && LODWORD(Item[2].klass) == eventId )
        {
          if ( HIDWORD(Item[1].klass) == 3
            && EventMissionConditionMaster__checkEventMissionCondition(
                 (EventMissionConditionMaster_o *)Item,
                 (EventMissionConditionEntity_o *)Item,
                 missionType,
                 v33) )
          {
            missionId = v34->fields.missionId;
          }
          else if ( missionId == v34->fields.missionId && v34->fields.missionProgressType == 4 )
          {
            list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)EventMissionConditionEntity__getMissionProgress(
                                                                                                     v34,
                                                                                                     v26);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v25 )
                break;
              System_Collections_Generic_List_int___Add(
                v25,
                v34->fields.missionId,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
      }
      if ( ++v30 >= v29 )
        return v25;
    }
LABEL_24:
    sub_B5D69C(list, v26);
  }
  return v25;
}


int32_t __fastcall EventMissionConditionMaster__getTodayFirstMissionId(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int32_t Month; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x21
  __int64 v47; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v50; // w24
  int32_t v51; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v53; // x26
  __int64 v54; // x10
  int64_t monitor; // x27
  int32_t v56; // w27
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x19
  Il2CppObject *v59; // x20
  struct EventMissionConditionMaster___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v67; // x8
  int32_t Day; // [xsp+Ch] [xbp-64h]
  uint64_t v70; // [xsp+10h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-58h] BYREF
  System_DateTime_o v72; // 0:x0.8
  System_DateTime_o v73; // 0:x0.8
  System_DateTime_o v74; // 0:x0.8
  System_DateTime_o v75; // 0:x0.8

  if ( (byte_42E9005 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventMissionConditionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventMissionConditionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventMissionConditionEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NetworkManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__, v39, v40, v41);
    sub_B5D5C4(&EventMissionConditionMaster___c_TypeInfo, v42, v43, v44);
    byte_42E9005 = 1;
  }
  v70 = 0LL;
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v72.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v72, 0LL);
  v73.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v73, 0LL);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v50 = Count;
    v51 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v51,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v53 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v54 = *(&EventMissionConditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v54
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[v54 - 1] == EventMissionConditionEntity_TypeInfo
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
          v70 = NetworkManager__getServerDateTime_26077756(monitor, 0LL).fields.dateData;
          v74.fields.dateData = (uint64_t)&v70;
          v56 = System_DateTime__get_Month(v74, 0LL);
          v75.fields.dateData = (uint64_t)&v70;
          list = (void *)System_DateTime__get_Day(v75, 0LL);
          if ( Month == v56 && Day == (_DWORD)list )
          {
            if ( !v46 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v46,
              v53,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
          }
        }
      }
      if ( ++v51 >= v50 )
        goto LABEL_24;
    }
LABEL_37:
    sub_B5D69C(list, v47);
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
    v59 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v59,
      Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionConditionEntity___ctor__);
    v60 = EventMissionConditionMaster___c_TypeInfo->static_fields;
    v60->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v60->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  if ( !v46 )
    goto LABEL_37;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v46,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( v46->fields._size < 1 )
    return 0;
  v67 = v46->fields._items->m_Items[0];
  if ( !v67 )
    goto LABEL_37;
  return v67->fields.missionTargetId;
}


void __fastcall EventMissionConditionMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E655F & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionConditionMaster___c_TypeInfo, v1, v2, v3);
    byte_42E655F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventMissionConditionMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionConditionMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.missionProgressType - b->fields.missionProgressType;
}


int32_t __fastcall EventMissionConditionMaster___c___getTodayFirstMissionId_b__13_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.id - b->fields.id;
}