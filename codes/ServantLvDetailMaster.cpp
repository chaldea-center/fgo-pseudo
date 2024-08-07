void __fastcall ServantLvDetailMaster___ctor(ServantLvDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF29C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string___ctor__, method);
    byte_49FF29C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    365,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLvDetailEntity_o *__fastcall ServantLvDetailMaster__GetEntity(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF29A & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__GetEntity__,
      *(_QWORD *)&rarity);
    byte_49FF29A = 1;
  }
  PK = (Il2CppObject *)ServantLvDetailEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (ServantLvDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_30D6AF0 *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLvDetailMaster__GetFrameType(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        int32_t defType,
        const MethodInfo *method)
{
  int32_t v5; // w19
  ServantLvDetailEntity_o *HighestData; // x0

  v5 = defType;
  HighestData = ServantLvDetailMaster__GetHighestData(this, rarity, lv, *(const MethodInfo **)&defType);
  if ( HighestData )
    return HighestData->fields.frameType;
  return v5;
}


// local variable allocation has failed, the output may be wrong!
ServantLvDetailEntity_o *__fastcall ServantLvDetailMaster__GetHighestData(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  ServantLvDetailEntity_o *v14; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  ServantLvDetailEntity_o *v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  int32_t v26; // w8
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_49FF29D & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&rarity);
    sub_1B64A00(&System_IDisposable_TypeInfo, v7);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B64A00(&ServantLvDetailEntity_TypeInfo, v10);
    byte_49FF29D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64C5C(0LL, *(_QWORD *)&rarity);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v12);
  v14 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_17:
      v22 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (ServantLvDetailEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                       Enumerator,
                                       *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(ServantLvDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantLvDetailEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantLvDetailEntity_TypeInfo )
    {
      sub_1B64F1C(v23);
LABEL_35:
      sub_1B64C5C(v23, v24);
    }
    if ( v23->fields.rarity == rarity )
    {
      v26 = v23->fields.lv;
      if ( v26 <= lv && (!v14 || v26 > v14->fields.lv) )
        v14 = v23;
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_31;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_31:
    v30 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v14;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLvDetailMaster__GetRarityIcon(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        int32_t defRarityIcon,
        const MethodInfo *method)
{
  int32_t v5; // w19
  ServantLvDetailEntity_o *HighestData; // x0

  v5 = defRarityIcon;
  HighestData = ServantLvDetailMaster__GetHighestData(this, rarity, lv, *(const MethodInfo **)&defRarityIcon);
  if ( HighestData )
    return HighestData->fields.rarityIcon;
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLvDetailMaster__TryGetEntity(
        ServantLvDetailMaster_o *this,
        ServantLvDetailEntity_o **entity,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF29B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__TryGetEntity__, entity);
    byte_49FF29B = 1;
  }
  PK = (Il2CppObject *)ServantLvDetailEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__TryGetEntity__);
}