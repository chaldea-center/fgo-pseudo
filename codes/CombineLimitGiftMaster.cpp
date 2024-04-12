void __fastcall CombineLimitGiftMaster___ctor(CombineLimitGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2C0F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
    byte_42B2C0F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    421,
    (const MethodInfo_23E268C *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CombineLimitGiftMaster__GetCombineLimitGiftId(
        CombineLimitGiftMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 v20; // x9
  int32_t v21; // w20
  int v22; // w8
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  int v27; // w22
  __int64 v28; // x1
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__o *v30; // x21
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  _DWORD *v39; // x0
  __int64 v40; // x9
  int v41; // w9
  int v42; // w25
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  int v47; // w9
  int v49[4]; // [xsp+8h] [xbp-58h]
  int v50; // [xsp+18h] [xbp-48h]

  if ( (byte_42B2C10 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&CombineLimitGiftEntity_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B2C10 = 1;
  }
  v50 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_75;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      v20 = *(&CombineLimitGiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) < (unsigned int)v20
        || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v20 - 8) != CombineLimitGiftEntity_TypeInfo )
      {
        sub_B52D50(v19);
LABEL_74:
        sub_B52D50(v39);
LABEL_75:
        sub_B52A5C(list, *(_QWORD *)&svtId);
      }
      if ( v19[4] == svtId && v19[6] == limitCount )
      {
        v21 = v19[7];
        v22 = 180;
        goto LABEL_25;
      }
    }
  }
  v22 = 76;
  v21 = 0;
LABEL_25:
  v49[0] = v22;
  v50 = 1;
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
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  if ( v49[0] == 76 )
  {
    v50 = 0;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !list )
      goto LABEL_75;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantExceedMaster__GetRarity(
                                                                                         (ServantExceedMaster_o *)list,
                                                                                         svtId,
                                                                                         0LL);
    if ( !this->fields.list )
      goto LABEL_75;
    v27 = (int)list;
    v30 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v30 )
      sub_B52A5C(0LL, v28);
    while ( 1 )
    {
      v31 = v30->klass;
      if ( *(_WORD *)&v30->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        v33 = &v31->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
            goto LABEL_43;
        }
        v34 = (__int64)&v31->vtable[*v33].method;
      }
      else
      {
LABEL_43:
        v34 = sub_AEB880(v30, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
              v30,
              *(_QWORD *)(v34 + 8)) & 1) == 0 )
        break;
      v35 = v30->klass;
      if ( *(_WORD *)&v30->klass->_2.bitflags1 )
      {
        v36 = 0LL;
        v37 = &v35->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v36;
          v37 += 4;
          if ( v36 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
            goto LABEL_50;
        }
        v38 = (__int64)&v35->vtable[*v37].method;
      }
      else
      {
LABEL_50:
        v38 = sub_AEB880(v30, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v29);
      }
      v39 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                        v30,
                        *(_QWORD *)(v38 + 8));
      if ( v39 )
      {
        v40 = *(&CombineLimitGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v39 + 300LL) < (unsigned int)v40
          || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v39 + 200LL) + 8 * v40 - 8) != CombineLimitGiftEntity_TypeInfo )
        {
          goto LABEL_74;
        }
        if ( !v39[4] && v39[5] == v27 && v39[6] == limitCount )
        {
          v21 = v39[7];
          v41 = 180;
          goto LABEL_60;
        }
      }
    }
    v41 = 178;
LABEL_60:
    v49[0] = v41;
    v42 = ++v50;
    v43 = v30->klass;
    if ( *(_WORD *)&v30->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
          goto LABEL_64;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_64:
      v46 = sub_AEB880(v30, System_IDisposable_TypeInfo, 0LL, v29);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(v30, *(_QWORD *)(v46 + 8));
    if ( !v42 )
      return 0;
    v47 = v49[v42 - 1];
    if ( v47 == 178 )
    {
      v21 = 0;
    }
    else if ( v47 != 180 )
    {
      return 0;
    }
    v50 = v42 - 1;
    return v21;
  }
  v50 = 0;
  return v21;
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

  if ( (byte_42B2C0D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
    byte_42B2C0D = 1;
  }
  PK = CombineLimitGiftEntity__CreatePK(svtId, rarity, limitCount, *(const MethodInfo **)&limitCount);
  return (CombineLimitGiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23E2728 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
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

  if ( (byte_42B2C0E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
    byte_42B2C0E = 1;
  }
  PK = CombineLimitGiftEntity__CreatePK(id, rarity, limitCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
}