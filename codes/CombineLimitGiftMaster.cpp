void __fastcall CombineLimitGiftMaster___ctor(CombineLimitGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41861D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__, method);
    byte_41861D9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    420,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
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
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  _DWORD *v25; // x0
  __int64 v26; // x9
  int32_t v27; // w20
  int v28; // w8
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int v33; // w22
  __int64 v34; // x1
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__o *v36; // x21
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  _DWORD *v45; // x0
  __int64 v46; // x9
  int v47; // w9
  int v48; // w25
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0
  int v53; // w9
  int v55[4]; // [xsp+8h] [xbp-58h]
  int v56; // [xsp+18h] [xbp-48h]

  if ( (byte_41861DA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&CombineLimitGiftEntity_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_41861DA = 1;
  }
  v56 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_75;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                      Enumerator,
                      *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      v26 = *(&CombineLimitGiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v26
        || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v26 - 8) != CombineLimitGiftEntity_TypeInfo )
      {
        v45 = (_DWORD *)sub_B2C728(v25);
LABEL_74:
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B2C728(v45);
LABEL_75:
        sub_B2C434(list, *(_QWORD *)&svtId);
      }
      if ( v25[4] == svtId && v25[6] == limitCount )
      {
        v27 = v25[7];
        v28 = 180;
        goto LABEL_25;
      }
    }
  }
  v28 = 76;
  v27 = 0;
LABEL_25:
  v55[0] = v28;
  v56 = 1;
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_29:
    v32 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( v55[0] == 76 )
  {
    v56 = 0;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !list )
      goto LABEL_75;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantExceedMaster__GetRarity(
                                                                                         (ServantExceedMaster_o *)list,
                                                                                         svtId,
                                                                                         0LL);
    if ( !this->fields.list )
      goto LABEL_75;
    v33 = (int)list;
    v36 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v36 )
      sub_B2C434(0LL, v34);
    while ( 1 )
    {
      v37 = v36->klass;
      if ( *(_WORD *)&v36->klass->_2.bitflags1 )
      {
        v38 = 0LL;
        v39 = &v37->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
            goto LABEL_43;
        }
        v40 = (__int64)&v37->vtable[*v39].method;
      }
      else
      {
LABEL_43:
        v40 = sub_AC5258(v36, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
              v36,
              *(_QWORD *)(v40 + 8)) & 1) == 0 )
        break;
      v41 = v36->klass;
      if ( *(_WORD *)&v36->klass->_2.bitflags1 )
      {
        v42 = 0LL;
        v43 = &v41->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v42;
          v43 += 4;
          if ( v42 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
            goto LABEL_50;
        }
        v44 = (__int64)&v41->vtable[*v43].method;
      }
      else
      {
LABEL_50:
        v44 = sub_AC5258(v36, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v35);
      }
      v45 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                        v36,
                        *(_QWORD *)(v44 + 8));
      if ( v45 )
      {
        v46 = *(&CombineLimitGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v45 + 300LL) < (unsigned int)v46
          || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * v46 - 8) != CombineLimitGiftEntity_TypeInfo )
        {
          goto LABEL_74;
        }
        if ( !v45[4] && v45[5] == v33 && v45[6] == limitCount )
        {
          v27 = v45[7];
          v47 = 180;
          goto LABEL_60;
        }
      }
    }
    v47 = 178;
LABEL_60:
    v55[0] = v47;
    v48 = ++v56;
    v49 = v36->klass;
    if ( *(_WORD *)&v36->klass->_2.bitflags1 )
    {
      v50 = 0LL;
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
      {
        ++v50;
        v51 += 4;
        if ( v50 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
          goto LABEL_64;
      }
      v52 = (__int64)&v49->vtable[*v51].method;
    }
    else
    {
LABEL_64:
      v52 = sub_AC5258(v36, System_IDisposable_TypeInfo, 0LL, v35);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(v36, *(_QWORD *)(v52 + 8));
    if ( !v48 )
      return 0;
    v53 = v55[v48 - 1];
    if ( v53 == 178 )
    {
      v27 = 0;
    }
    else if ( v53 != 180 )
    {
      return 0;
    }
    v56 = v48 - 1;
    return v27;
  }
  v56 = 0;
  return v27;
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

  if ( (byte_41861D7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_41861D7 = 1;
  }
  PK = CombineLimitGiftEntity__CreatePK(svtId, rarity, limitCount, *(const MethodInfo **)&limitCount);
  return (CombineLimitGiftEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
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

  if ( (byte_41861D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__, entity);
    byte_41861D8 = 1;
  }
  PK = CombineLimitGiftEntity__CreatePK(id, rarity, limitCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
}