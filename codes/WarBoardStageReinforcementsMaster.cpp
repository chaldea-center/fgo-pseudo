void WarBoardStageReinforcementsMaster___ctor(WarBoardStageReinforcementsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C284EE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string___ctor__);
    byte_4C284EE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    346,
    (const MethodInfo_338A52C *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageReinforcementsEntity_o *WarBoardStageReinforcementsMaster__GetEntity(
        WarBoardStageReinforcementsMaster_o *this,
        int32_t warBoardStageId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C284EC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__GetEntity__);
    byte_4C284EC = 1;
  }
  PK = (Il2CppObject *)WarBoardStageReinforcementsEntity__CreatePK(warBoardStageId, id, *(const MethodInfo **)&id);
  return (WarBoardStageReinforcementsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_338C850 *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__GetEntity__);
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

  if ( (byte_4C284ED & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__TryGetEntity__);
    byte_4C284ED = 1;
  }
  PK = (Il2CppObject *)WarBoardStageReinforcementsEntity__CreatePK(
                         warBoardStageId,
                         id,
                         *(const MethodInfo **)&warBoardStageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__TryGetEntity__);
}


bool WarBoardStageReinforcementsMaster__TryGetReleaseEntities(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_array **reinforcementEntities,
        int32_t stageId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  System_Object_array *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4C284F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_WarBoardStageReinforcementsEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardStageReinforcementsEntity__TypeInfo);
    byte_4C284F0 = 1;
  }
  *reinforcementEntities = 0;
  sub_1C2D434((CGThumbnailListItem_o *)reinforcementEntities, 0, stageId, method);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardStageReinforcementsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageReinforcementsEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C7DCA8(
              Enumerator,
              System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__TypeInfo,
              0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      sub_1C2D6EC(0, v21);
    if ( *(_DWORD *)(v20 + 16) == stageId )
    {
      if ( !v7 )
        sub_1C2D6EC(v20, v21);
      items = v7->fields._items;
      v26 = Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C2D6EC(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), v24, v22, v23);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_29;
    }
    v32 = (__int64)&v29->vtable[*v31];
  }
  else
  {
LABEL_29:
    v32 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                             Enumerator,
                                                             *(_QWORD *)(v32 + 8));
  if ( !v7 )
LABEL_36:
    sub_1C2D6EC(list, v8);
  v33 = System_Collections_Generic_List_object___ToArray(
          v7,
          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__ToArray__);
  *reinforcementEntities = (WarBoardStageReinforcementsEntity_array *)v33;
  sub_1C2D434((CGThumbnailListItem_o *)reinforcementEntities, (int32_t)v33, v34, v35);
  return v7->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_o **reinforcementEntity,
        int32_t stageId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  WarBoardStageReinforcementsEntity_o *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4C284EF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_WarBoardStageReinforcementsEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C284EF = 1;
  }
  *reinforcementEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)reinforcementEntity, 0, stageId, *(const MethodInfo **)&id);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageReinforcementsEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v16 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_16:
      v20 = sub_1C7DCA8(
              Enumerator,
              System_Collections_Generic_IEnumerator_WarBoardStageReinforcementsEntity__TypeInfo,
              0);
    }
    v21 = (WarBoardStageReinforcementsEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                   Enumerator,
                                                   *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_1C2D6EC(0, v22);
    if ( v21->fields.warBoardStageId == stageId && v21->fields.id == id )
    {
      *reinforcementEntity = v21;
      sub_1C2D434((CGThumbnailListItem_o *)reinforcementEntity, (int32_t)v21, v23, v24);
      break;
    }
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_26;
    }
    v28 = (__int64)&v25->vtable[*v27];
  }
  else
  {
LABEL_26:
    v28 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return *reinforcementEntity != 0;
}