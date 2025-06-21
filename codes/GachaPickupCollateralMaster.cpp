void __fastcall GachaPickupCollateralMaster___ctor(GachaPickupCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C7ED & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string___ctor__,
      method);
    byte_4B1C7ED = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    509,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaPickupCollateralEntity_o *__fastcall GachaPickupCollateralMaster__GetEntity(
        GachaPickupCollateralMaster_o *this,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C7EE & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__GetEntity__,
      *(_QWORD *)&gachaPickupCollateralGroupId);
    byte_4B1C7EE = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralEntity__CreatePK(gachaPickupCollateralGroupId, type, rarity, 0LL);
  return (GachaPickupCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_32CC8B8 *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__GetEntity__);
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

  if ( (byte_4B1C7EF & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__TryGetEntity__,
      entity);
    byte_4B1C7EF = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralEntity__CreatePK(gachaPickupCollateralGroupId, type, rarity, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__TryGetEntity__);
}


bool __fastcall GachaPickupCollateralMaster__TryGetEntityFromGroupId(
        GachaPickupCollateralMaster_o *this,
        GachaPickupCollateralEntity_o **gachaPickupCollateralEntity,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  GachaPickupCollateralEntity_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool v25; // w21
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4B1C7EC & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_GachaPickupCollateralEntity__GetEnumerator__,
      gachaPickupCollateralEntity);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4B1C7EC = 1;
  }
  *gachaPickupCollateralEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)gachaPickupCollateralEntity, 0, groupId, method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_GachaPickupCollateralEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__TypeInfo, 0LL);
    }
    v22 = (GachaPickupCollateralEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                             Enumerator,
                                             *(_QWORD *)(v21 + 8));
    if ( v22 && v22->fields.gachaPickupCollateralGroupId == groupId )
    {
      *gachaPickupCollateralEntity = v22;
      sub_1BCAF9C((CGThumbnailListItem_o *)gachaPickupCollateralEntity, (int32_t)v22, v23, v24);
      v25 = 1;
      goto LABEL_22;
    }
  }
  v25 = 0;
LABEL_22:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_26;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_26:
    v29 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v25;
}