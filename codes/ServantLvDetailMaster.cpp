void __fastcall ServantLvDetailMaster___ctor(ServantLvDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4F99 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string___ctor__, method);
    byte_4BB4F99 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    369,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLvDetailEntity_o *__fastcall ServantLvDetailMaster__GetEntity(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4F97 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__GetEntity__,
      *(_QWORD *)&rarity);
    byte_4BB4F97 = 1;
  }
  PK = (Il2CppObject *)ServantLvDetailEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (ServantLvDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_323D0DC *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__GetEntity__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  ServantLvDetailEntity_o *v13; // x8
  ServantLvDetailEntity_o *v14; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w9
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4BB4F9A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantLvDetailEntity__GetEnumerator__,
      *(_QWORD *)&rarity);
    sub_1C13D24(&System_IDisposable_TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantLvDetailEntity__TypeInfo, v8);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BB4F9A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, *(_QWORD *)&rarity);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantLvDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v11);
  v13 = 0LL;
LABEL_6:
  v14 = v13;
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
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantLvDetailEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantLvDetailEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantLvDetailEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v13 = (ServantLvDetailEntity_o *)v23;
    if ( !v23 )
      sub_1C13F80(0LL, v24);
    if ( *(_DWORD *)(v23 + 16) == rarity )
    {
      v25 = *(_DWORD *)(v23 + 20);
      if ( v25 <= lv && (!v14 || v25 > v14->fields.lv) )
        goto LABEL_6;
    }
  }
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
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_30:
    v29 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v14;
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
  Il2CppObject *PK; // x2

  if ( (byte_4BB4F98 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__TryGetEntity__, entity);
    byte_4BB4F98 = 1;
  }
  PK = (Il2CppObject *)ServantLvDetailEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__TryGetEntity__);
}