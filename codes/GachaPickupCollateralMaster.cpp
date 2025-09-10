void GachaPickupCollateralMaster___ctor(GachaPickupCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C275A5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string___ctor__);
    byte_4C275A5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    509,
    (const MethodInfo_338A52C *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string___ctor__);
}


GachaPickupCollateralEntity_o *GachaPickupCollateralMaster__GetEntity(
        GachaPickupCollateralMaster_o *this,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C275A6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__GetEntity__);
    byte_4C275A6 = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralEntity__CreatePK(gachaPickupCollateralGroupId, type, rarity, 0);
  return (GachaPickupCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_338C850 *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__GetEntity__);
}


bool GachaPickupCollateralMaster__TryGetEntity(
        GachaPickupCollateralMaster_o *this,
        GachaPickupCollateralEntity_o **entity,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C275A7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__TryGetEntity__);
    byte_4C275A7 = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralEntity__CreatePK(gachaPickupCollateralGroupId, type, rarity, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__TryGetEntity__);
}


bool GachaPickupCollateralMaster__TryGetEntityFromGroupId(
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
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  GachaPickupCollateralEntity_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool v22; // w21
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C275A4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_GachaPickupCollateralEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C275A4 = 1;
  }
  *gachaPickupCollateralEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)gachaPickupCollateralEntity, 0, groupId, method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_GachaPickupCollateralEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v9);
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
      v14 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__TypeInfo )
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
      v18 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__TypeInfo, 0);
    }
    v19 = (GachaPickupCollateralEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                             Enumerator,
                                             *(_QWORD *)(v18 + 8));
    if ( v19 && v19->fields.gachaPickupCollateralGroupId == groupId )
    {
      *gachaPickupCollateralEntity = v19;
      sub_1C2D434((CGThumbnailListItem_o *)gachaPickupCollateralEntity, (int32_t)v19, v20, v21);
      v22 = 1;
      goto LABEL_22;
    }
  }
  v22 = 0;
LABEL_22:
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
        goto LABEL_26;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_26:
    v26 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v22;
}