void __fastcall WarBoardStageReinforcementsMaster___ctor(
        WarBoardStageReinforcementsMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67C69 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string___ctor__,
      method);
    byte_4B67C69 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    344,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageReinforcementsEntity_o *__fastcall WarBoardStageReinforcementsMaster__GetEntity(
        WarBoardStageReinforcementsMaster_o *this,
        int32_t warBoardStageId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67C67 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__GetEntity__,
      *(_QWORD *)&warBoardStageId);
    byte_4B67C67 = 1;
  }
  PK = (Il2CppObject *)WarBoardStageReinforcementsEntity__CreatePK(warBoardStageId, id, *(const MethodInfo **)&id);
  return (WarBoardStageReinforcementsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_31FDB1C *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__GetEntity__);
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

  if ( (byte_4B67C68 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__TryGetEntity__,
      entity);
    byte_4B67C68 = 1;
  }
  PK = (Il2CppObject *)WarBoardStageReinforcementsEntity__CreatePK(
                         warBoardStageId,
                         id,
                         *(const MethodInfo **)&warBoardStageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_WarBoardStageReinforcementsMaster__WarBoardStageReinforcementsEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageReinforcementsMaster__TryGetReleaseEntities(
        WarBoardStageReinforcementsMaster_o *this,
        WarBoardStageReinforcementsEntity_array **reinforcementEntities,
        int32_t stageId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x21
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v44; // x10
  __int64 size; // x11
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  System_Object_array *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4B67C6B & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      reinforcementEntities);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v11);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__Add__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__ToArray__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity___ctor__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__get_Count__, v17);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardStageReinforcementsEntity__TypeInfo, v18);
    sub_1BE4ACC(&WarBoardStageReinforcementsEntity_TypeInfo, v19);
    byte_4B67C6B = 1;
  }
  *reinforcementEntities = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)reinforcementEntities,
    0LL,
    *(int64_t *)&stageId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardStageReinforcementsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v41 = v33;
    if ( !v33
      || (methodPtr_low = LOBYTE(WarBoardStageReinforcementsEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low)
      || *(WarBoardStageReinforcementsEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != WarBoardStageReinforcementsEntity_TypeInfo )
    {
      sub_1BE4D28(v33, v34);
    }
    if ( *(_DWORD *)(v33 + 16) == stageId )
    {
      if ( !v20 )
        sub_1BE4D28(v33, v34);
      items = v20->fields._items;
      v44 = Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1BE4D28(v33, v34);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v33,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v41;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v46 + 4), v41, v35, v36, v37, v38, v39, v40);
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_31;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_31:
    v50 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                                                             Enumerator,
                                                             *(_QWORD *)(v50 + 8));
  if ( !v20 )
LABEL_38:
    sub_1BE4D28(list, v21);
  v51 = System_Collections_Generic_List_object___ToArray(
          v20,
          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_WarBoardStageReinforcementsEntity__ToArray__);
  *reinforcementEntities = (WarBoardStageReinforcementsEntity_array *)v51;
  sub_1BE4A70((PartyOrganizationUtility_o *)reinforcementEntities, (int64_t)v51, v52, v53, v54, v55, v56, v57);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  WarBoardStageReinforcementsEntity_o *v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 methodPtr_low; // x11
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4B67C6A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, reinforcementEntity);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v12);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BE4ACC(&WarBoardStageReinforcementsEntity_TypeInfo, v15);
    byte_4B67C6A = 1;
  }
  *reinforcementEntity = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)reinforcementEntity,
    0LL,
    *(int64_t *)&stageId,
    id,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (WarBoardStageReinforcementsEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                   Enumerator,
                                                   *(_QWORD *)(v27 + 8));
    if ( !v28
      || (methodPtr_low = LOBYTE(WarBoardStageReinforcementsEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v28->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (WarBoardStageReinforcementsEntity_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardStageReinforcementsEntity_TypeInfo )
    {
      sub_1BE4D28(v28, v29);
    }
    if ( v28->fields.warBoardStageId == stageId && v28->fields.id == id )
    {
      *reinforcementEntity = v28;
      sub_1BE4A70((PartyOrganizationUtility_o *)reinforcementEntity, (int64_t)v28, v30, v31, v32, v33, v34, v35);
      break;
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_28;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_28:
    v40 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return *reinforcementEntity != 0LL;
}