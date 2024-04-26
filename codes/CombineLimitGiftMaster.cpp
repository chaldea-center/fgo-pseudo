void __fastcall CombineLimitGiftMaster___ctor(CombineLimitGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4351A01 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
    byte_4351A01 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    421,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  _DWORD *v18; // x0
  __int64 v19; // x9
  int32_t v20; // w20
  int v21; // w8
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  int v26; // w22
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__o *v28; // x21
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  _DWORD *v37; // x0
  __int64 v38; // x9
  int v39; // w9
  int v40; // w25
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  int v45; // w9
  int v47[4]; // [xsp+8h] [xbp-58h]
  int v48; // [xsp+18h] [xbp-48h]

  if ( (byte_4351A02 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&CombineLimitGiftEntity_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4351A02 = 1;
  }
  v48 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_75;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      Enumerator,
                      *(_QWORD *)(v17 + 8));
    if ( v18 )
    {
      v19 = *(&CombineLimitGiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v19
        || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v19 - 8) != CombineLimitGiftEntity_TypeInfo )
      {
        v37 = (_DWORD *)sub_B70A60(v18);
LABEL_74:
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B70A60(v37);
LABEL_75:
        sub_B7076C(list, *(_QWORD *)&svtId);
      }
      if ( v18[4] == svtId && v18[6] == limitCount )
      {
        v20 = v18[7];
        v21 = 180;
        goto LABEL_25;
      }
    }
  }
  v21 = 76;
  v20 = 0;
LABEL_25:
  v47[0] = v21;
  v48 = 1;
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  if ( v47[0] == 76 )
  {
    v48 = 0;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !list )
      goto LABEL_75;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantExceedMaster__GetRarity(
                                                                                         (ServantExceedMaster_o *)list,
                                                                                         svtId,
                                                                                         0LL);
    if ( !this->fields.list )
      goto LABEL_75;
    v26 = (int)list;
    v28 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v28 )
      sub_B7076C(0LL, v27);
    while ( 1 )
    {
      v29 = v28->klass;
      if ( *(_WORD *)&v28->klass->_2.bitflags1 )
      {
        v30 = 0LL;
        v31 = &v29->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v30;
          v31 += 4;
          if ( v30 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
            goto LABEL_43;
        }
        v32 = (__int64)&v29->vtable[*v31].method;
      }
      else
      {
LABEL_43:
        v32 = sub_B08590(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
              v28,
              *(_QWORD *)(v32 + 8)) & 1) == 0 )
        break;
      v33 = v28->klass;
      if ( *(_WORD *)&v28->klass->_2.bitflags1 )
      {
        v34 = 0LL;
        v35 = &v33->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v34;
          v35 += 4;
          if ( v34 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
            goto LABEL_50;
        }
        v36 = (__int64)&v33->vtable[*v35].method;
      }
      else
      {
LABEL_50:
        v36 = sub_B08590(v28, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v37 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                        v28,
                        *(_QWORD *)(v36 + 8));
      if ( v37 )
      {
        v38 = *(&CombineLimitGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) < (unsigned int)v38
          || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v38 - 8) != CombineLimitGiftEntity_TypeInfo )
        {
          goto LABEL_74;
        }
        if ( !v37[4] && v37[5] == v26 && v37[6] == limitCount )
        {
          v20 = v37[7];
          v39 = 180;
          goto LABEL_60;
        }
      }
    }
    v39 = 178;
LABEL_60:
    v47[0] = v39;
    v40 = ++v48;
    v41 = v28->klass;
    if ( *(_WORD *)&v28->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
          goto LABEL_64;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_64:
      v44 = sub_B08590(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(v28, *(_QWORD *)(v44 + 8));
    if ( !v40 )
      return 0;
    v45 = v47[v40 - 1];
    if ( v45 == 178 )
    {
      v20 = 0;
    }
    else if ( v45 != 180 )
    {
      return 0;
    }
    v48 = v40 - 1;
    return v20;
  }
  v48 = 0;
  return v20;
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

  if ( (byte_43519FF & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
    byte_43519FF = 1;
  }
  PK = CombineLimitGiftEntity__CreatePK(svtId, rarity, limitCount, *(const MethodInfo **)&limitCount);
  return (CombineLimitGiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_21C0890 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
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

  if ( (byte_4351A00 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
    byte_4351A00 = 1;
  }
  PK = CombineLimitGiftEntity__CreatePK(id, rarity, limitCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
}