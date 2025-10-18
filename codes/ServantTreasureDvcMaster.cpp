void ServantTreasureDvcMaster___ctor(ServantTreasureDvcMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C43A55 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
    byte_4C43A55 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    8,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__GetEntity(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43A53 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
    byte_4C43A53 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDvcEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33A5B58 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantTreasureDvcMaster__TryGetEntity(
        ServantTreasureDvcMaster_o *this,
        ServantTreasureDvcEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C43A54 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
    byte_4C43A54 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
}


ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__getEntityFromIDID(
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  ServantTreasureDvcEntity_o *v15; // x0
  ServantTreasureDvcEntity_o *v16; // x22
  __int64 naturalAligment; // x9
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  if ( (byte_4C43A58 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&ServantTreasureDvcEntity_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43A58 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0
    || (Instance = (DataManager_o *)Instance->fields.datalist) == 0 )
  {
    sub_1C372B4(Instance);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_11;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v10 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_18;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_18:
      v14 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0);
    }
    v15 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                                          Enumerator,
                                          *(_QWORD *)(v14 + 8));
    v16 = v15;
    if ( !v15 )
      goto LABEL_35;
    naturalAligment = ServantTreasureDvcEntity_TypeInfo->_2.naturalAligment;
    if ( v15->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantTreasureDvcEntity_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1C37574(v15);
LABEL_35:
      sub_1C372B4(v15);
    }
    if ( v15->fields.svtId == svtId && v15->fields.treasureDeviceId == dvcId )
      goto LABEL_27;
  }
  v16 = 0;
LABEL_27:
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_31;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_31:
    v21 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  return v16;
}


ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__getEntityFromSvtIdCondQuestIdAndPhase(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t condQuestId,
        int32_t condQuestPhase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  ServantTreasureDvcEntity_o *v19; // x0
  ServantTreasureDvcEntity_o *v20; // x23
  __int64 naturalAligment; // x10
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C43A5B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&ServantTreasureDvcEntity_TypeInfo);
    byte_4C43A5B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v14 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_16:
      v18 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0);
    }
    v19 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                          Enumerator,
                                          *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( !v19
      || (naturalAligment = ServantTreasureDvcEntity_TypeInfo->_2.naturalAligment,
          v19->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (ServantTreasureDvcEntity_c *)v19->klass->_2.typeHierarchy[naturalAligment - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1C372B4(v19);
    }
    if ( v19->fields.svtId == svtId
      && v19->fields.condQuestId == condQuestId
      && v19->fields.condQuestPhase == condQuestPhase )
    {
      goto LABEL_26;
    }
  }
  v20 = 0;
LABEL_26:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_30;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_30:
    v25 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v20;
}


ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantTreasureDvcEntity_o *v17; // x0
  ServantTreasureDvcEntity_o *v18; // x22
  __int64 naturalAligment; // x10
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4C43A59 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&ServantTreasureDvcEntity_TypeInfo);
    byte_4C43A59 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v12 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_16:
      v16 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0);
    }
    v17 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                          Enumerator,
                                          *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( !v17
      || (naturalAligment = ServantTreasureDvcEntity_TypeInfo->_2.naturalAligment,
          v17->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (ServantTreasureDvcEntity_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1C372B4(v17);
    }
    if ( v17->fields.svtId == svtId && v17->fields.treasureDeviceId == dvcId )
      goto LABEL_25;
  }
  v18 = 0;
LABEL_25:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_29;
    }
    v23 = (__int64)&v20->vtable[*v22];
  }
  else
  {
LABEL_29:
    v23 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v18;
}


ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        bool isLowPriorityPick,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int *v9; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  int *v18; // x0
  ServantTreasureDvcEntity_o *v19; // x22
  __int64 naturalAligment; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4C43A5A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&ServantTreasureDvcEntity_TypeInfo);
    byte_4C43A5A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  v9 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v13 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_17:
      v17 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0);
    }
    v18 = (int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                   Enumerator,
                   *(_QWORD *)(v17 + 8));
    v19 = (ServantTreasureDvcEntity_o *)v18;
    if ( v18 )
    {
      naturalAligment = ServantTreasureDvcEntity_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) >= (unsigned int)naturalAligment
        && *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * naturalAligment - 8) == ServantTreasureDvcEntity_TypeInfo
        && v18[4] == svtId )
      {
        v9 = v18;
        if ( isLowPriorityPick )
        {
          v9 = v18;
          if ( v18[6] > 0 )
            goto LABEL_27;
        }
      }
    }
  }
  v19 = (ServantTreasureDvcEntity_o *)v9;
LABEL_27:
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_31;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_31:
    v24 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v19;
}


ServantTreasureDvcEntity_array *ServantTreasureDvcMaster__getEntityListFromIdNum(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C43A57 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__);
    byte_4C43A57 = 1;
  }
  value = 0;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C372B4(0);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)listCache,
         svtId,
         &value,
         (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__) )
  {
    return (ServantTreasureDvcEntity_array *)value;
  }
  else
  {
    return 0;
  }
}


ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__getUseEntity(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  ServantTreasureDvcEntity_array *EntityListFromIdNum; // x0
  int32_t v15; // w3
  const MethodInfo *v16; // x7
  ServantTreasureDvcEntity_array *v17; // x24
  unsigned int i; // w26
  Il2CppClass **v19; // x8
  ServantTreasureDvcEntity_o *v20; // x25

  EntityListFromIdNum = ServantTreasureDvcMaster__getEntityListFromIdNum(this, svtId, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v17 = EntityListFromIdNum;
    for ( i = LODWORD(EntityListFromIdNum->max_length) - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= LODWORD(v17->max_length) )
        sub_1C372BC(EntityListFromIdNum);
      v19 = &v17->obj.klass + i;
      v20 = (ServantTreasureDvcEntity_o *)v19[4];
      if ( !v20 )
        sub_1C372B4(EntityListFromIdNum);
      EntityListFromIdNum = (ServantTreasureDvcEntity_array *)ServantTreasureDvcEntity__isUse(
                                                                (ServantTreasureDvcEntity_o *)v19[4],
                                                                userId,
                                                                svtLv,
                                                                v15,
                                                                dispLimitCount,
                                                                friendshipRank,
                                                                beforeClearQuestId,
                                                                v16);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v20;
    }
  }
  return 0;
}


bool ServantTreasureDvcMaster__preProcess(ServantTreasureDvcMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  int32_t *v14; // x0
  int32_t *v15; // x22
  __int64 naturalAligment; // x9
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x23
  System_Collections_Generic_List_object__o *v20; // x0
  Il2CppClass *v21; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  void **v24; // x8
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  _BOOL8 v29; // x0
  ServantTreasureDvcMaster___c_c *v30; // x8
  int32_t key; // w22
  Il2CppObject *v32; // x21
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v34; // x24
  struct ServantTreasureDvcMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *v38; // x23
  System_Object_array *v39; // x0
  int32_t monitor; // w2
  int v41; // w8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C43A56 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
    sub_1C37058(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___get_Current__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_1C37058(&ServantTreasureDvcEntity_TypeInfo);
    sub_1C37058(&Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__);
    sub_1C37058(&ServantTreasureDvcMaster___c_TypeInfo);
    byte_4C43A56 = 1;
  }
  value = 0;
  memset(&v44, 0, sizeof(v44));
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_17:
      v13 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0);
    }
    v14 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                       Enumerator,
                       *(_QWORD *)(v13 + 8));
    v15 = v14;
    if ( !v14 )
      goto LABEL_52;
    naturalAligment = ServantTreasureDvcEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) < (unsigned int)naturalAligment
      || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * naturalAligment - 8) != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1C37574(v14);
LABEL_52:
      sub_1C372B4(v14);
    }
    if ( v14[5] == 1 )
    {
      if ( !v4 )
        sub_1C372B4(v14);
      if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
              v4,
              v14[4],
              &value,
              (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__) )
      {
        v19 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v19,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
        value = (Il2CppObject *)v19;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v4,
          v15[4],
          (Il2CppObject *)v19,
          (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
      }
      v20 = (System_Collections_Generic_List_object__o *)value;
      if ( !value )
        sub_1C372B4(0);
      v21 = value[1].klass;
      v22 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
      ++HIDWORD(value[1].monitor);
      if ( !v21 )
        sub_1C372B4(v20);
      size = v20->fields._size;
      if ( (unsigned int)size >= LODWORD(v21->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v15,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &v21->_1.image + size;
        v20->fields._size = size + 1;
        v24[4] = v15;
        sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v15, v17, v18);
      }
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
        goto LABEL_35;
    }
    v28 = (__int64)&v25->vtable[*v27];
  }
  else
  {
LABEL_35:
    v28 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v28 + 8));
  if ( !v4 )
LABEL_58:
    sub_1C372B4(listCache);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v43,
    v4,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v29 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v44,
            (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__);
    if ( !v29 )
      break;
    v30 = ServantTreasureDvcMaster___c_TypeInfo;
    key = (int32_t)v44.fields._current.fields.key;
    v32 = v44.fields._current.fields.value;
    if ( !ServantTreasureDvcMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDvcMaster___c_TypeInfo);
      v30 = ServantTreasureDvcMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v30->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = ServantTreasureDvcMaster___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v30->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v34, Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__, 0);
      static_fields = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__4_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v36, v37);
    }
    if ( !v32 )
      sub_1C372B4(v29);
    System_Collections_Generic_List_object___Sort_58346216(
      (System_Collections_Generic_List_object__o *)v32,
      _9__4_0,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    v38 = this->fields.listCache;
    v39 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v32,
            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    if ( !v38 )
      sub_1C372B4(v39);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v38,
      key,
      &v39->obj,
      (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    monitor = (int32_t)v32[1].monitor;
    v41 = HIDWORD(v32[1].monitor) + 1;
    LODWORD(v32[1].monitor) = 0;
    HIDWORD(v32[1].monitor) = v41;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v32[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v44,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
  return 1;
}


void ServantTreasureDvcMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43A5C & 1) == 0 )
  {
    sub_1C37058(&ServantTreasureDvcMaster___c_TypeInfo);
    byte_4C43A5C = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantTreasureDvcMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantTreasureDvcMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDvcMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantTreasureDvcMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantTreasureDvcMaster___c___ctor(ServantTreasureDvcMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantTreasureDvcMaster___c___preProcess_b__4_0(
        ServantTreasureDvcMaster___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.priority - b->fields.priority;
}