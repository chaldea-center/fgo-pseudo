void __fastcall GachaPickupCollateralGroupMaster___ctor(
        GachaPickupCollateralGroupMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16491 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string___ctor__,
      method,
      v2);
    byte_4B16491 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    503,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaPickupCollateralGroupEntity_o *__fastcall GachaPickupCollateralGroupMaster__GetEntity(
        GachaPickupCollateralGroupMaster_o *this,
        int32_t id,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16492 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&gachaId);
    byte_4B16492 = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralGroupEntity__CreatePK(id, gachaId, 0LL);
  return (GachaPickupCollateralGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaPickupCollateralGroupMaster__TryGetEntity(
        GachaPickupCollateralGroupMaster_o *this,
        GachaPickupCollateralGroupEntity_o **entity,
        int32_t id,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16493 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B16493 = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralGroupEntity__CreatePK(id, gachaId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_GachaPickupCollateralGroupMaster__GachaPickupCollateralGroupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
        GachaPickupCollateralGroupMaster_o *this,
        GachaPickupCollateralGroupEntity_o **gachaPickupCollateralGroupEntity,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  GachaPickupCollateralGroupEntity_o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 methodPtr_low; // x10
  bool v39; // w21
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B16490 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      gachaPickupCollateralGroupEntity,
      *(_QWORD *)&gachaId);
    sub_1BCA7E0(&GachaPickupCollateralGroupEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    byte_4B16490 = 1;
  }
  *gachaPickupCollateralGroupEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)gachaPickupCollateralGroupEntity,
    0LL,
    *(int64_t *)&gachaId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v19);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (GachaPickupCollateralGroupEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                  Enumerator,
                                                  *(_QWORD *)(v30 + 8));
    if ( v31 )
    {
      methodPtr_low = LOBYTE(GachaPickupCollateralGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v31->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (GachaPickupCollateralGroupEntity_c *)v31->klass->_2.typeHierarchy[methodPtr_low - 1] == GachaPickupCollateralGroupEntity_TypeInfo
        && v31->fields.gachaId == gachaId )
      {
        *gachaPickupCollateralGroupEntity = v31;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)gachaPickupCollateralGroupEntity,
          (int64_t)v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        v39 = 1;
        goto LABEL_24;
      }
    }
  }
  v39 = 0;
LABEL_24:
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_28;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_28:
    v43 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return v39;
}