void ServantLvDetailMaster___ctor(ServantLvDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971268 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string___ctor__);
    byte_5971268 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    373,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLvDetailEntity_o *ServantLvDetailMaster__GetEntity(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971269 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__GetEntity__);
    byte_5971269 = 1;
  }
  PK = (Il2CppObject *)ServantLvDetailEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (ServantLvDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLvDetailMaster__GetFrameType(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        int32_t defType,
        bool isGrandServant,
        const MethodInfo *method)
{
  int32_t v7; // w19
  ServantLvDetailEntity_o *HighestData; // x0
  __int64 v9; // x8

  v7 = defType;
  HighestData = ServantLvDetailMaster__GetHighestData(this, rarity, lv, *(const MethodInfo **)&defType);
  if ( HighestData )
  {
    v9 = 24;
    if ( isGrandServant )
      v9 = 32;
    return *(_DWORD *)((char *)&HighestData->klass + v9);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
ServantLvDetailEntity_o *ServantLvDetailMaster__GetHighestData(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *v10; // x22
  ServantLvDetailEntity_o *v11; // x23
  ServantLvDetailEntity_o *v12; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  System_Collections_Generic_IEnumerator_T__o *v31; // [xsp+18h] [xbp-48h]

  if ( (byte_5971267 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantLvDetailEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantLvDetailEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5971267 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&rarity);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantLvDetailEntity__GetEnumerator__);
  v31 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  v10 = Enumerator;
  v11 = 0;
LABEL_6:
  v12 = v11;
  while ( 1 )
  {
    klass = v10->klass;
    v14 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v16 = sub_224BC3C(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v10,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v31 )
      sub_2213CDC(v17, v18);
    v19 = v31->klass;
    v20 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLvDetailEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantLvDetailEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_19;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_19:
      v22 = sub_224BC3C(v31, System_Collections_Generic_IEnumerator_ServantLvDetailEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v31,
            *(_QWORD *)(v22 + 8));
    v11 = (ServantLvDetailEntity_o *)v23;
    if ( !v23 )
      sub_2213CDC(0, v24);
    if ( *(_DWORD *)(v23 + 16) == rarity )
    {
      v25 = *(_DWORD *)(v23 + 20);
      if ( v25 <= lv && (!v12 || v25 > v12->fields.lv) )
      {
        v10 = v31;
        goto LABEL_6;
      }
    }
    v10 = v31;
  }
  if ( v31 )
  {
    v26 = v31->klass;
    v27 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_37;
      }
      v29 = (__int64)&v26->vtable[*v28];
    }
    else
    {
LABEL_37:
      v29 = sub_224BC3C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v31, *(_QWORD *)(v29 + 8));
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLvDetailMaster__GetRarityIcon(
        ServantLvDetailMaster_o *this,
        int32_t rarity,
        int32_t lv,
        int32_t defRarityIcon,
        bool isGrandServant,
        const MethodInfo *method)
{
  int32_t v7; // w19
  ServantLvDetailEntity_o *HighestData; // x0
  __int64 v9; // x8

  v7 = defRarityIcon;
  HighestData = ServantLvDetailMaster__GetHighestData(this, rarity, lv, *(const MethodInfo **)&defRarityIcon);
  if ( HighestData )
  {
    v9 = 28;
    if ( isGrandServant )
      v9 = 36;
    return *(_DWORD *)((char *)&HighestData->klass + v9);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLvDetailMaster__TryGetEntity(
        ServantLvDetailMaster_o *this,
        ServantLvDetailEntity_o **entity,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_597126A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__TryGetEntity__);
    byte_597126A = 1;
  }
  PK = (Il2CppObject *)ServantLvDetailEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantLvDetailMaster__ServantLvDetailEntity__string__TryGetEntity__);
}