void __fastcall GachaPickupCollateralMaster___ctor(GachaPickupCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B401 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string___ctor__);
    byte_4A5B401 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    502,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string___ctor__);
}


GachaPickupCollateralEntity_o *__fastcall GachaPickupCollateralMaster__GetEntity(
        GachaPickupCollateralMaster_o *this,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B402 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__GetEntity__);
    byte_4A5B402 = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralEntity__CreatePK(gachaPickupCollateralGroupId, type, rarity, 0LL);
  return (GachaPickupCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__GetEntity__);
}


bool __fastcall GachaPickupCollateralMaster__TryGetEntity(
        GachaPickupCollateralMaster_o *this,
        GachaPickupCollateralEntity_o **entity,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B403 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__TryGetEntity__);
    byte_4A5B403 = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralEntity__CreatePK(gachaPickupCollateralGroupId, type, rarity, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__TryGetEntity__);
}


bool __fastcall GachaPickupCollateralMaster__TryGetEntityFromGroupId(
        GachaPickupCollateralMaster_o *this,
        GachaPickupCollateralEntity_o **gachaPickupCollateralEntity,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  GachaPickupCollateralEntity_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 methodPtr_low; // x10
  bool v23; // w21
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A5B400 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&GachaPickupCollateralEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B400 = 1;
  }
  *gachaPickupCollateralEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)gachaPickupCollateralEntity, 0, groupId, (int32_t)method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (GachaPickupCollateralEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                             Enumerator,
                                             *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      methodPtr_low = LOBYTE(GachaPickupCollateralEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (GachaPickupCollateralEntity_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] == GachaPickupCollateralEntity_TypeInfo
        && v19->fields.gachaPickupCollateralGroupId == groupId )
      {
        *gachaPickupCollateralEntity = v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)gachaPickupCollateralEntity, (int32_t)v19, v20, v21);
        v23 = 1;
        goto LABEL_24;
      }
    }
  }
  v23 = 0;
LABEL_24:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_28;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_28:
    v27 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v23;
}