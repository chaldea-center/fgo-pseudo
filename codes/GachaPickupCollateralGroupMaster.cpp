void __fastcall GachaPickupCollateralGroupMaster___ctor(
        GachaPickupCollateralGroupMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A08F04 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string___ctor__,
      method);
    byte_4A08F04 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    503,
    (const MethodInfo_30E47D8 *)Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaPickupCollateralGroupEntity_o *__fastcall GachaPickupCollateralGroupMaster__GetEntity(
        GachaPickupCollateralGroupMaster_o *this,
        int32_t id,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A08F05 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4A08F05 = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralGroupEntity__CreatePK(id, gachaId, 0LL);
  return (GachaPickupCollateralGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_30E4818 *)Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__GetEntity__);
}


bool __fastcall GachaPickupCollateralGroupMaster__TryGetEntity(
        GachaPickupCollateralGroupMaster_o *this,
        GachaPickupCollateralGroupEntity_o **entity,
        int32_t id,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A08F06 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__TryGetEntity__,
      entity);
    byte_4A08F06 = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralGroupEntity__CreatePK(id, gachaId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30E4868 *)Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__TryGetEntity__);
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
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  GachaPickupCollateralGroupEntity_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 methodPtr_low; // x10
  bool v27; // w21
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A08F03 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      gachaPickupCollateralGroupEntity);
    sub_1B686D4(&GachaPickupCollateralGroupEntity_TypeInfo, v7);
    sub_1B686D4(&System_IDisposable_TypeInfo, v8);
    sub_1B686D4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B686D4(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4A08F03 = 1;
  }
  *gachaPickupCollateralGroupEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)gachaPickupCollateralGroupEntity, 0, gachaId, (int32_t)method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B68930(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30816FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B68930(0LL, v13);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BBA6B4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1BBA6B4(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (GachaPickupCollateralGroupEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                                  Enumerator,
                                                  *(_QWORD *)(v22 + 8));
    if ( v23 )
    {
      methodPtr_low = LOBYTE(GachaPickupCollateralGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (GachaPickupCollateralGroupEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] == GachaPickupCollateralGroupEntity_TypeInfo
        && v23->fields.gachaId == gachaId )
      {
        *gachaPickupCollateralGroupEntity = v23;
        sub_1B68678((ServantStatusBattleListViewItem_o *)gachaPickupCollateralGroupEntity, (int32_t)v23, v24, v25);
        v27 = 1;
        goto LABEL_24;
      }
    }
  }
  v27 = 0;
LABEL_24:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_28;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_28:
    v31 = sub_1BBA6B4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v27;
}