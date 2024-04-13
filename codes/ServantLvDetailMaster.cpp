void __fastcall ServantLvDetailMaster___ctor(ServantLvDetailMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC6E7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EC6E7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    364,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLvDetailEntity_o *__fastcall ServantLvDetailMaster__GetEntity(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EC6E5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__GetEntity__,
      rarity,
      lv,
      method);
    byte_42EC6E5 = 1;
  }
  PK = ServantLvDetailEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (ServantLvDetailEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__GetEntity__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  ServantLvDetailEntity_o *v23; // x20
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  ServantLvDetailEntity_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x9
  int32_t v31; // w8
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x3
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0

  if ( (byte_42EC6E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, rarity, lv, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantLvDetailEntity_TypeInfo, v16, v17, v18);
    byte_42EC6E8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&rarity);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v20);
  v23 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        p_offset += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_10:
      v27 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v36);
    }
    v28 = (ServantLvDetailEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                       Enumerator,
                                       *(_QWORD *)(v27 + 8));
    if ( !v28 )
      goto LABEL_35;
    v30 = *(&ServantLvDetailEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (ServantLvDetailEntity_c *)v28->klass->_2.typeHierarchy[v30 - 1] != ServantLvDetailEntity_TypeInfo )
    {
      sub_B5D990(v28);
LABEL_35:
      sub_B5D69C(v28, v29);
    }
    if ( v28->fields.rarity == rarity )
    {
      v31 = v28->fields.lv;
      if ( v31 <= lv && (!v23 || v31 > v23->fields.lv) )
        v23 = v28;
    }
  }
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_31:
    v40 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v36);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return v23;
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
  System_String_o *PK; // x2

  if ( (byte_42EC6E6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__TryGetEntity__,
      (_DWORD)entity,
      rarity,
      *(_QWORD *)&lv);
    byte_42EC6E6 = 1;
  }
  PK = ServantLvDetailEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__TryGetEntity__);
}