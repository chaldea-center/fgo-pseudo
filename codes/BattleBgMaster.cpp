void __fastcall BattleBgMaster___ctor(BattleBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438EB3B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
    byte_438EB3B = 1;
  }
  *(&this->fields.revision + 1) = 1;
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    128,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
}


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

  if ( (byte_438EB3C & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    byte_438EB3C = 1;
  }
  entity = 0LL;
  v9 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B7769C(0LL, v8);
    result = entity->fields.individuality;
    if ( !result )
      return (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
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
      sub_B7769C(v6, v7);
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
      sub_B7769C(0LL, v6);
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

  if ( (byte_438EB39 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
    byte_438EB39 = 1;
  }
  PK = BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&type);
  return (BattleBgEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_21FBCE4 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
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
    sub_B7769C(0LL, v5);
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

  if ( (byte_438EB3A & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
    byte_438EB3A = 1;
  }
  PK = BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
}


bool __fastcall BattleBgMaster__preProcess(BattleBgMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  BattleBgEntity_o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x9
  __int64 SpecialShadowEffectId; // x0
  __int64 v21; // x1
  int32_t v22; // w22
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_438EB3D & 1) == 0 )
  {
    sub_B775C4(&BattleBgEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438EB3D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (BattleBgEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                Enumerator,
                                *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_34;
    v19 = *(&BattleBgEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (BattleBgEntity_c *)v16->klass->_2.typeHierarchy[v19 - 1] != BattleBgEntity_TypeInfo )
    {
      sub_B77990(v16);
LABEL_34:
      sub_B7769C(v16, v17);
    }
    SpecialShadowEffectId = BattleBgEntity__GetSpecialShadowEffectId(v16, 0, v18);
    v22 = SpecialShadowEffectId;
    if ( (int)SpecialShadowEffectId >= 1 )
    {
      if ( !v3 )
        sub_B7769C(SpecialShadowEffectId, v21);
      if ( !System_Collections_Generic_List_int___Contains(
              v3,
              SpecialShadowEffectId,
              (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v3,
          v22,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v26 + 8));
  if ( !v3 )
LABEL_36:
    sub_B7769C(list, v4);
  v27 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v3,
                                 (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)&this->fields.DefaultBgShadowImageId = v27;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.DefaultBgShadowImageId, v27, v28, v29, v30, v31, v32, v33);
  return 1;
}