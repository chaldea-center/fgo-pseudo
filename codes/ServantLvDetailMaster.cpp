void ServantLvDetailMaster___ctor(ServantLvDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27C74 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string___ctor__);
    byte_4C27C74 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    371,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLvDetailEntity_o *ServantLvDetailMaster__GetEntity(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27C75 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__GetEntity__);
    byte_4C27C75 = 1;
  }
  PK = (Il2CppObject *)ServantLvDetailEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (ServantLvDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_338C850 *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLvDetailMaster__GetFrameType(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        int32_t defType,
        bool isGrandServant,
        const MethodInfo *method)
{
  int32_t v7; // w19
  ServantLvDetailEntity_o *HighestData; // x0
  __int64 v9; // x8

  v7 = defType;
  HighestData = ServantLvDetailMaster__GetHighestData(this, rarity, lv, *(const MethodInfo **)&defType);
  if ( HighestData )
  {
    v9 = 24;
    if ( isGrandServant )
      v9 = 32;
    return *(_DWORD *)((char *)&HighestData->klass + v9);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
ServantLvDetailEntity_o *ServantLvDetailMaster__GetHighestData(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  ServantLvDetailEntity_o *v10; // x8
  ServantLvDetailEntity_o *v11; // x20
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
  int32_t v22; // w9
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C27C73 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantLvDetailEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ServantLvDetailEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C27C73 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, *(_QWORD *)&rarity);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ServantLvDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  v10 = 0;
LABEL_6:
  v11 = v10;
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
          goto LABEL_11;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
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
      while ( *((System_Collections_Generic_IEnumerator_ServantLvDetailEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantLvDetailEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_18:
      v19 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ServantLvDetailEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v10 = (ServantLvDetailEntity_o *)v20;
    if ( !v20 )
      sub_1C2D6EC(0, v21);
    if ( *(_DWORD *)(v20 + 16) == rarity )
    {
      v22 = *(_DWORD *)(v20 + 20);
      if ( v22 <= lv && (!v11 || v22 > v11->fields.lv) )
        goto LABEL_6;
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_30;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_30:
    v26 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v11;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLvDetailMaster__GetRarityIcon(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        int32_t defRarityIcon,
        bool isGrandServant,
        const MethodInfo *method)
{
  int32_t v7; // w19
  ServantLvDetailEntity_o *HighestData; // x0
  __int64 v9; // x8

  v7 = defRarityIcon;
  HighestData = ServantLvDetailMaster__GetHighestData(this, rarity, lv, *(const MethodInfo **)&defRarityIcon);
  if ( HighestData )
  {
    v9 = 28;
    if ( isGrandServant )
      v9 = 36;
    return *(_DWORD *)((char *)&HighestData->klass + v9);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLvDetailMaster__TryGetEntity(
        ServantLvDetailMaster_o *this,
        ServantLvDetailEntity_o **entity,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27C76 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__TryGetEntity__);
    byte_4C27C76 = 1;
  }
  PK = (Il2CppObject *)ServantLvDetailEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__TryGetEntity__);
}