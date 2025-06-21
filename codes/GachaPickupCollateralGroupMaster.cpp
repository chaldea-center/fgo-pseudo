void __fastcall GachaPickupCollateralGroupMaster___ctor(
        GachaPickupCollateralGroupMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1C7E9 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string___ctor__,
      method);
    byte_4B1C7E9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    510,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaPickupCollateralGroupEntity_o *__fastcall GachaPickupCollateralGroupMaster__GetEntity(
        GachaPickupCollateralGroupMaster_o *this,
        int32_t id,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C7EA & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4B1C7EA = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralGroupEntity__CreatePK(id, gachaId, 0LL);
  return (GachaPickupCollateralGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_32CC8B8 *)Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__GetEntity__);
}


bool __fastcall GachaPickupCollateralGroupMaster__TryGetEntity(
        GachaPickupCollateralGroupMaster_o *this,
        GachaPickupCollateralGroupEntity_o **entity,
        int32_t id,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1C7EB & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__TryGetEntity__,
      entity);
    byte_4B1C7EB = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralGroupEntity__CreatePK(id, gachaId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__TryGetEntity__);
}


bool __fastcall GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
        GachaPickupCollateralGroupMaster_o *this,
        GachaPickupCollateralGroupEntity_o **gachaPickupCollateralGroupEntity,
        int32_t gachaId,
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
  GachaPickupCollateralGroupEntity_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool v25; // w21
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4B1C7E8 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_GachaPickupCollateralGroupEntity__GetEnumerator__,
      gachaPickupCollateralGroupEntity);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_GachaPickupCollateralGroupEntity__TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4B1C7E8 = 1;
  }
  *gachaPickupCollateralGroupEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)gachaPickupCollateralGroupEntity, 0, gachaId, method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_GachaPickupCollateralGroupEntity__GetEnumerator__);
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
      while ( *((System_Collections_Generic_IEnumerator_GachaPickupCollateralGroupEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_GachaPickupCollateralGroupEntity__TypeInfo )
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
      v21 = sub_1C1B560(
              Enumerator,
              System_Collections_Generic_IEnumerator_GachaPickupCollateralGroupEntity__TypeInfo,
              0LL);
    }
    v22 = (GachaPickupCollateralGroupEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                  Enumerator,
                                                  *(_QWORD *)(v21 + 8));
    if ( v22 && v22->fields.gachaId == gachaId )
    {
      *gachaPickupCollateralGroupEntity = v22;
      sub_1BCAF9C((CGThumbnailListItem_o *)gachaPickupCollateralGroupEntity, (int32_t)v22, v23, v24);
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