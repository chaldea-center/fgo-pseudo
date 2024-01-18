void __fastcall BattleBgMaster___ctor(BattleBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AC5E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__, method);
    byte_418AC5E = 1;
  }
  *(&this->fields.revision + 1) = 1;
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    127,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBgMaster__GetBgIndividuality(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  bool v9; // w8
  System_Int32_array *result; // x0
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AC5F & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&bgId);
    byte_418AC5F = 1;
  }
  entity = 0LL;
  v9 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B2C434(0LL, v8);
    result = entity->fields.individuality;
    if ( !result )
      return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
  return result;
}


int32_t __fastcall BattleBgMaster__GetBgShadowImageId(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t *p_imageId; // x8
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v6 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  if ( v6 )
  {
    if ( !entity )
      sub_B2C434(v6, v7);
    p_imageId = &entity->fields.imageId;
  }
  else
  {
    p_imageId = &this->fields.revision + 1;
  }
  return *p_imageId;
}


int32_t __fastcall BattleBgMaster__GetBgSpecialShadowEffectId(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, method) )
  {
    if ( !entity )
      sub_B2C434(0LL, v6);
    return BattleBgEntity__GetSpecialShadowEffectId(entity, defId, v7);
  }
  return defId;
}


System_Int32_array *__fastcall BattleBgMaster__GetBgSpecialShadowEffectIdArray(
        BattleBgMaster_o *this,
        const MethodInfo *method)
{
  return *(System_Int32_array **)&this->fields.DefaultBgShadowImageId;
}


// local variable allocation has failed, the output may be wrong!
BattleBgEntity_o *__fastcall BattleBgMaster__GetEntity(
        BattleBgMaster_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418AC5C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_418AC5C = 1;
  }
  PK = BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&type);
  return (BattleBgEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_24E4520 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
}


int32_t __fastcall BattleBgMaster__GetInvalidOverwrite(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x1
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( !BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4) )
    return 0;
  if ( !entity )
    sub_B2C434(0LL, v5);
  return BattleBgEntity__GetInvalidOverwrite(entity, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBgMaster__TryGetEntity(
        BattleBgMaster_o *this,
        BattleBgEntity_o **entity,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418AC5D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__, entity);
    byte_418AC5D = 1;
  }
  PK = BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
}


bool __fastcall BattleBgMaster__preProcess(BattleBgMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  BattleBgEntity_o *v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  __int64 v30; // x9
  __int64 SpecialShadowEffectId; // x0
  __int64 v32; // x1
  int32_t v33; // w22
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_418AC60 & 1) == 0 )
  {
    sub_B2C35C(&BattleBgEntity_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_418AC60 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (BattleBgEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                Enumerator,
                                *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_34;
    v30 = *(&BattleBgEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (BattleBgEntity_c *)v27->klass->_2.typeHierarchy[v30 - 1] != BattleBgEntity_TypeInfo )
    {
      sub_B2C728(v27);
LABEL_34:
      sub_B2C434(v27, v28);
    }
    SpecialShadowEffectId = BattleBgEntity__GetSpecialShadowEffectId(v27, 0, v29);
    v33 = SpecialShadowEffectId;
    if ( (int)SpecialShadowEffectId >= 1 )
    {
      if ( !v12 )
        sub_B2C434(SpecialShadowEffectId, v32);
      if ( !System_Collections_Generic_List_int___Contains(
              v12,
              SpecialShadowEffectId,
              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v12,
          v33,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_29:
    v37 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v37 + 8));
  if ( !v12 )
LABEL_36:
    sub_B2C434(list, v13);
  v38 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v12,
                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)&this->fields.DefaultBgShadowImageId = v38;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.DefaultBgShadowImageId, v38, v39, v40, v41, v42, v43, v44);
  return 1;
}