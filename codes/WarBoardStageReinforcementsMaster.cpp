void __fastcall WarBoardStageReinforcementsMaster___ctor(
        WarBoardStageReinforcementsMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189317 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string___ctor__,
      method);
    byte_4189317 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    338,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageReinforcementsEntity_o *__fastcall WarBoardStageReinforcementsMaster__GetEntity(
        WarBoardStageReinforcementsMaster_o *this,
        int32_t warBoardStageId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189315 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__GetEntity__,
      *(_QWORD *)&warBoardStageId);
    byte_4189315 = 1;
  }
  PK = WarBoardStageReinforcementsEntity__CreatePK(warBoardStageId, id, *(const MethodInfo **)&id);
  return (WarBoardStageReinforcementsEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                  PK,
                                                  (const MethodInfo_24E4520 *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageReinforcementsMaster__TryGetEntity(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_o **entity,
        int32_t warBoardStageId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4189316 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__TryGetEntity__,
      entity);
    byte_4189316 = 1;
  }
  PK = WarBoardStageReinforcementsEntity__CreatePK(warBoardStageId, id, *(const MethodInfo **)&warBoardStageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageReinforcementsMaster__TryGetReleaseEntities(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_array **reinforcementEntities,
        int32_t stageId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v30; // x3
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x11
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  WarBoardStageReinforcementsEntity_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_4189319 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, reinforcementEntities);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__ToArray__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity___ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__get_Count__, v17);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardStageReinforcementsEntity__TypeInfo, v18);
    sub_B2C35C(&WarBoardStageReinforcementsEntity_TypeInfo, v19);
    byte_4189319 = 1;
  }
  *reinforcementEntities = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)reinforcementEntities,
    0LL,
    *(System_String_array ***)&stageId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardStageReinforcementsEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v30);
    }
    v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v34 + 8));
    if ( !v35
      || (v37 = *(&WarBoardStageReinforcementsEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v37)
      || (WarBoardStageReinforcementsEntity_c *)v35->klass->_2.typeHierarchy[v37 - 1] != WarBoardStageReinforcementsEntity_TypeInfo )
    {
      sub_B2C434(v35, v36);
    }
    if ( v35->fields.missionTargetId == stageId )
    {
      if ( !v20 )
        sub_B2C434(v35, v36);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        v35,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__Add__);
    }
  }
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_28:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v30);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v41 + 8));
  if ( !v20 )
LABEL_34:
    sub_B2C434(list, v21);
  v42 = (WarBoardStageReinforcementsEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__ToArray__);
  *reinforcementEntities = v42;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)reinforcementEntities,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  return v20->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_o **reinforcementEntity,
        int32_t stageId,
        int32_t id,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v18; // x1
  System_String_array **v19; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  WarBoardStageReinforcementsEntity_o *v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x11
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0

  if ( (byte_4189318 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, reinforcementEntity);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&WarBoardStageReinforcementsEntity_TypeInfo, v15);
    byte_4189318 = 1;
  }
  *reinforcementEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)reinforcementEntity,
    0LL,
    *(System_String_array ***)&stageId,
    *(System_String_array ***)&id,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
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
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
    }
    v30 = (WarBoardStageReinforcementsEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                   Enumerator,
                                                   *(_QWORD *)(v29 + 8));
    if ( !v30
      || (v37 = *(&WarBoardStageReinforcementsEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v37)
      || (WarBoardStageReinforcementsEntity_c *)v30->klass->_2.typeHierarchy[v37 - 1] != WarBoardStageReinforcementsEntity_TypeInfo )
    {
      sub_B2C434(v30, v31);
    }
    if ( v30->fields.warBoardStageId == stageId && v30->fields.id == id )
    {
      *reinforcementEntity = v30;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)reinforcementEntity,
        (System_Int32_array **)v30,
        v32,
        v19,
        v33,
        v34,
        v35,
        v36);
      break;
    }
  }
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_28:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return *reinforcementEntity != 0LL;
}