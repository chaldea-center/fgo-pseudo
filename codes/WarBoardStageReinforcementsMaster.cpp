void __fastcall WarBoardStageReinforcementsMaster___ctor(
        WarBoardStageReinforcementsMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF530 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string___ctor__,
      method);
    byte_49FF530 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    340,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageReinforcementsEntity_o *__fastcall WarBoardStageReinforcementsMaster__GetEntity(
        WarBoardStageReinforcementsMaster_o *this,
        int32_t warBoardStageId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF52E & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__GetEntity__,
      *(_QWORD *)&warBoardStageId);
    byte_49FF52E = 1;
  }
  PK = (Il2CppObject *)WarBoardStageReinforcementsEntity__CreatePK(warBoardStageId, id, *(const MethodInfo **)&id);
  return (WarBoardStageReinforcementsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_30D64D8 *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageReinforcementsMaster__TryGetEntity(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_o **entity,
        int32_t warBoardStageId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF52F & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__TryGetEntity__,
      entity);
    byte_49FF52F = 1;
  }
  PK = (Il2CppObject *)WarBoardStageReinforcementsEntity__CreatePK(
                         warBoardStageId,
                         id,
                         *(const MethodInfo **)&warBoardStageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__TryGetEntity__);
}


bool __fastcall WarBoardStageReinforcementsMaster__TryGetReleaseEntities(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_array **reinforcementEntities,
        int32_t stageId,
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
  System_Collections_Generic_List_object__o *v16; // x21
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v36; // x10
  __int64 size; // x11
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  System_Object_array *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3

  if ( (byte_49FF532 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      reinforcementEntities);
    sub_1B64870(&System_IDisposable_TypeInfo, v7);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__Add__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__ToArray__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity___ctor__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__get_Count__, v13);
    sub_1B64870(&System_Collections_Generic_List_WarBoardStageReinforcementsEntity__TypeInfo, v14);
    sub_1B64870(&WarBoardStageReinforcementsEntity_TypeInfo, v15);
    byte_49FF532 = 1;
  }
  *reinforcementEntities = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)reinforcementEntities, 0, stageId, (int32_t)method);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_WarBoardStageReinforcementsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    v33 = v29;
    if ( !v29
      || (methodPtr_low = LOBYTE(WarBoardStageReinforcementsEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v29 + 304LL) < (unsigned int)methodPtr_low)
      || *(WarBoardStageReinforcementsEntity_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * methodPtr_low - 8) != WarBoardStageReinforcementsEntity_TypeInfo )
    {
      sub_1B64ACC(v29, v30);
    }
    if ( *(_DWORD *)(v29 + 16) == stageId )
    {
      if ( !v16 )
        sub_1B64ACC(v29, v30);
      items = v16->fields._items;
      v36 = Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        sub_1B64ACC(v29, v30);
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)v29,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v33;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v38 + 4), v33, v31, v32);
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_31;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_31:
    v42 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                             Enumerator,
                                                             *(_QWORD *)(v42 + 8));
  if ( !v16 )
LABEL_38:
    sub_1B64ACC(list, v17);
  v43 = System_Collections_Generic_List_object___ToArray(
          v16,
          (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__ToArray__);
  *reinforcementEntities = (WarBoardStageReinforcementsEntity_array *)v43;
  sub_1B64814((ServantStatusBattleListViewItem_o *)reinforcementEntities, (int32_t)v43, v44, v45);
  return v16->fields._size > 0;
}


bool __fastcall WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_o **reinforcementEntity,
        int32_t stageId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  WarBoardStageReinforcementsEntity_o *v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 methodPtr_low; // x11
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_49FF531 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, reinforcementEntity);
    sub_1B64870(&System_IDisposable_TypeInfo, v9);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B64870(&WarBoardStageReinforcementsEntity_TypeInfo, v12);
    byte_49FF531 = 1;
  }
  *reinforcementEntity = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)reinforcementEntity, 0, stageId, id);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64ACC(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (WarBoardStageReinforcementsEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                   Enumerator,
                                                   *(_QWORD *)(v24 + 8));
    if ( !v25
      || (methodPtr_low = LOBYTE(WarBoardStageReinforcementsEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v25->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (WarBoardStageReinforcementsEntity_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardStageReinforcementsEntity_TypeInfo )
    {
      sub_1B64ACC(v25, v26);
    }
    if ( v25->fields.warBoardStageId == stageId && v25->fields.id == id )
    {
      *reinforcementEntity = v25;
      sub_1B64814((ServantStatusBattleListViewItem_o *)reinforcementEntity, (int32_t)v25, v27, v28);
      break;
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_28;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_28:
    v33 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return *reinforcementEntity != 0LL;
}