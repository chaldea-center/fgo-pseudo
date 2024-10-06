void __fastcall GachaPickupCollateralMaster___ctor(GachaPickupCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A7010C & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string___ctor__,
      method);
    byte_4A7010C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    502,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string___ctor__);
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

  if ( (byte_4A7010D & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__GetEntity__,
      *(_QWORD *)&gachaPickupCollateralGroupId);
    byte_4A7010D = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralEntity__CreatePK(gachaPickupCollateralGroupId, type, rarity, 0LL);
  return (GachaPickupCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_312C900 *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__GetEntity__);
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

  if ( (byte_4A7010E & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__TryGetEntity__,
      entity);
    byte_4A7010E = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralEntity__CreatePK(gachaPickupCollateralGroupId, type, rarity, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__TryGetEntity__);
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
  GachaPickupCollateralEntity_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 methodPtr_low; // x10
  bool v27; // w21
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A7010B & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      gachaPickupCollateralEntity);
    sub_1B90010(&GachaPickupCollateralEntity_TypeInfo, v7);
    sub_1B90010(&System_IDisposable_TypeInfo, v8);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4A7010B = 1;
  }
  *gachaPickupCollateralEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)gachaPickupCollateralEntity, 0, groupId, (int32_t)method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v13);
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
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v22 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (GachaPickupCollateralEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                             Enumerator,
                                             *(_QWORD *)(v22 + 8));
    if ( v23 )
    {
      methodPtr_low = LOBYTE(GachaPickupCollateralEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (GachaPickupCollateralEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] == GachaPickupCollateralEntity_TypeInfo
        && v23->fields.gachaPickupCollateralGroupId == groupId )
      {
        *gachaPickupCollateralEntity = v23;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)gachaPickupCollateralEntity, (int32_t)v23, v24, v25);
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
    v31 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v27;
}