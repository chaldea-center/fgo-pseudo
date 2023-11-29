void __fastcall CombineLimitGiftMaster___ctor(CombineLimitGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9918 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__, method);
    byte_40F9918 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    420,
    (const MethodInfo_266F73C *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CombineLimitGiftMaster__GetCombineLimitGiftId(
        CombineLimitGiftMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x9
  int32_t v25; // w20
  int v26; // w8
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t Rarity; // w0
  int32_t v33; // w22
  System_Collections_Generic_IEnumerator_T__o *v34; // x21
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  _DWORD *v43; // x0
  __int64 v44; // x9
  int v45; // w9
  int v46; // w25
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  int v51; // w9
  int v53[4]; // [xsp+8h] [xbp-58h]
  int v54; // [xsp+18h] [xbp-48h]

  if ( (byte_40F9919 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B16FFC(&CombineLimitGiftEntity_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_40F9919 = 1;
  }
  v54 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_75;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( v23 )
    {
      v24 = *(&CombineLimitGiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) < (unsigned int)v24
        || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v24 - 8) != CombineLimitGiftEntity_TypeInfo )
      {
        v43 = (_DWORD *)sub_B173C8(v23);
LABEL_74:
        sub_B173C8(v43);
LABEL_75:
        sub_B170D4();
      }
      if ( v23[4] == svtId && v23[6] == limitCount )
      {
        v25 = v23[7];
        v26 = 180;
        goto LABEL_25;
      }
    }
  }
  v26 = 76;
  v25 = 0;
LABEL_25:
  v53[0] = v26;
  v54 = 1;
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_29:
    v30 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( v53[0] == 76 )
  {
    v54 = 0;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_75;
    Rarity = ServantExceedMaster__GetRarity(Master_WarQuestSelectionMaster, svtId, 0LL);
    if ( !this->fields.list )
      goto LABEL_75;
    v33 = Rarity;
    v34 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v34 )
      sub_B170D4();
    while ( 1 )
    {
      v35 = v34->klass;
      if ( *(_WORD *)&v34->klass->_2.bitflags1 )
      {
        v36 = 0LL;
        v37 = &v35->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v36;
          v37 += 4;
          if ( v36 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
            goto LABEL_43;
        }
        v38 = (__int64)&v35->vtable[*v37].method;
      }
      else
      {
LABEL_43:
        v38 = sub_AAFEF8(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
              v34,
              *(_QWORD *)(v38 + 8)) & 1) == 0 )
        break;
      v39 = v34->klass;
      if ( *(_WORD *)&v34->klass->_2.bitflags1 )
      {
        v40 = 0LL;
        v41 = &v39->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v40;
          v41 += 4;
          if ( v40 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
            goto LABEL_50;
        }
        v42 = (__int64)&v39->vtable[*v41].method;
      }
      else
      {
LABEL_50:
        v42 = sub_AAFEF8(v34, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v43 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                        v34,
                        *(_QWORD *)(v42 + 8));
      if ( v43 )
      {
        v44 = *(&CombineLimitGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 300LL) < (unsigned int)v44
          || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * v44 - 8) != CombineLimitGiftEntity_TypeInfo )
        {
          goto LABEL_74;
        }
        if ( !v43[4] && v43[5] == v33 && v43[6] == limitCount )
        {
          v25 = v43[7];
          v45 = 180;
          goto LABEL_60;
        }
      }
    }
    v45 = 178;
LABEL_60:
    v53[0] = v45;
    v46 = ++v54;
    v47 = v34->klass;
    if ( *(_WORD *)&v34->klass->_2.bitflags1 )
    {
      v48 = 0LL;
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
          goto LABEL_64;
      }
      v50 = (__int64)&v47->vtable[*v49].method;
    }
    else
    {
LABEL_64:
      v50 = sub_AAFEF8(v34, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(v34, *(_QWORD *)(v50 + 8));
    if ( !v46 )
      return 0;
    v51 = v53[v46 - 1];
    if ( v51 == 178 )
    {
      v25 = 0;
    }
    else if ( v51 != 180 )
    {
      return 0;
    }
    v54 = v46 - 1;
    return v25;
  }
  v54 = 0;
  return v25;
}


// local variable allocation has failed, the output may be wrong!
CombineLimitGiftEntity_o *__fastcall CombineLimitGiftMaster__GetEntity(
        CombineLimitGiftMaster_o *this,
        int32_t svtId,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F9916 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40F9916 = 1;
  }
  PK = CombineLimitGiftEntity__CreatePK(svtId, rarity, limitCount, *(const MethodInfo **)&limitCount);
  return (CombineLimitGiftEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineLimitGiftMaster__TryGetEntity(
        CombineLimitGiftMaster_o *this,
        CombineLimitGiftEntity_o **entity,
        int32_t id,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F9917 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__, entity);
    byte_40F9917 = 1;
  }
  PK = CombineLimitGiftEntity__CreatePK(id, rarity, limitCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
}