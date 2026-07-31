void WarBoardStageReinforcementsMaster___ctor(WarBoardStageReinforcementsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939A12 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string___ctor__);
    byte_5939A12 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    348,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageReinforcementsEntity_o *WarBoardStageReinforcementsMaster__GetEntity(
        WarBoardStageReinforcementsMaster_o *this,
        int32_t warBoardStageId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939A10 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__GetEntity__);
    byte_5939A10 = 1;
  }
  PK = (Il2CppObject *)WarBoardStageReinforcementsEntity__CreatePK(warBoardStageId, id, *(const MethodInfo **)&id);
  return (WarBoardStageReinforcementsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_3EE2044 *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardStageReinforcementsMaster__TryGetEntity(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_o **entity,
        int32_t warBoardStageId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939A11 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__TryGetEntity__);
    byte_5939A11 = 1;
  }
  PK = (Il2CppObject *)WarBoardStageReinforcementsEntity__CreatePK(
                         warBoardStageId,
                         id,
                         *(const MethodInfo **)&warBoardStageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_o **reinforcementEntity,
        int32_t stageId,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  WarBoardStageReinforcementsEntity_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  System_Collections_Generic_IEnumerator_T__o *v39; // [xsp+18h] [xbp-38h]

  if ( (byte_5939A13 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardStageReinforcementsEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5939A13 = 1;
  }
  *reinforcementEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)reinforcementEntity,
    0,
    *(System_String_o **)&stageId,
    *(System_String_o **)&id,
    (int32_t)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageReinforcementsEntity__GetEnumerator__);
  v39 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v15);
  for ( i = Enumerator; ; i = v39 )
  {
    klass = i->klass;
    v18 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            i,
            *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
      break;
    if ( !v39 )
      sub_21FFECC(v21, v22);
    v23 = v39->klass;
    v24 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_18:
      v26 = sub_2237E2C(v39, System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__TypeInfo, 0);
    }
    v27 = (WarBoardStageReinforcementsEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                   v39,
                                                   *(_QWORD *)(v26 + 8));
    if ( !v27 )
      sub_21FFECC(0, 0);
    if ( v27->fields.warBoardStageId == stageId && v27->fields.id == id )
    {
      *reinforcementEntity = v27;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)reinforcementEntity, (int32_t)v27, v28, v29, v30, v31, v32, v33);
      break;
    }
  }
  if ( v39 )
  {
    v34 = v39->klass;
    v35 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_31;
      }
      v37 = (__int64)&v34->vtable[*v36];
    }
    else
    {
LABEL_31:
      v37 = sub_2237E2C(v39, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(v39, *(_QWORD *)(v37 + 8));
  }
  return *reinforcementEntity != 0;
}