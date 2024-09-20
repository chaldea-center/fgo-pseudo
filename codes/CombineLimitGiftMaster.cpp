void __fastcall CombineLimitGiftMaster___ctor(CombineLimitGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF23 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
    byte_4A5AF23 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    422,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CombineLimitGiftMaster__GetCombineLimitGiftId(
        CombineLimitGiftMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  _DWORD *v18; // x0
  __int64 methodPtr_low; // x9
  int32_t v20; // w20
  int v21; // w24
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  int v26; // w22
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__o *v28; // x21
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  _DWORD *v37; // x0
  __int64 v38; // x9
  char v39; // w22
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4A5AF24 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&CombineLimitGiftEntity_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5AF24 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      Enumerator,
                      *(_QWORD *)(v17 + 8));
    if ( v18 )
    {
      methodPtr_low = LOBYTE(CombineLimitGiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
        || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != CombineLimitGiftEntity_TypeInfo )
      {
        sub_1B88ACC(v18);
LABEL_68:
        sub_1B88ACC(v37);
LABEL_69:
        sub_1B8880C(list, *(_QWORD *)&svtId);
      }
      if ( v18[4] == svtId && v18[6] == limitCount )
      {
        v20 = v18[7];
        v21 = 4;
        goto LABEL_25;
      }
    }
  }
  v20 = 0;
  v21 = 5;
LABEL_25:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  if ( v21 == 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !list )
      goto LABEL_69;
    list = (System_Collections_ObjectModel_Collection_T__o *)ServantExceedMaster__GetRarity(
                                                               (ServantExceedMaster_o *)list,
                                                               svtId,
                                                               0LL);
    if ( !this->fields.list )
      goto LABEL_69;
    v26 = (int)list;
    v28 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v28 )
      sub_1B8880C(0LL, v27);
    while ( 1 )
    {
      v29 = v28->klass;
      v30 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
      {
        v31 = &v29->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_41;
        }
        v32 = (__int64)&v29->vtable[*v31].method;
      }
      else
      {
LABEL_41:
        v32 = sub_1BDA590(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
              v28,
              *(_QWORD *)(v32 + 8)) & 1) == 0 )
        break;
      v33 = v28->klass;
      v34 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
      {
        v35 = &v33->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_48;
        }
        v36 = (__int64)&v33->vtable[*v35].method;
      }
      else
      {
LABEL_48:
        v36 = sub_1BDA590(v28, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v37 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                        v28,
                        *(_QWORD *)(v36 + 8));
      if ( v37 )
      {
        v38 = LOBYTE(CombineLimitGiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 304LL) < (unsigned int)v38
          || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v38 - 8) != CombineLimitGiftEntity_TypeInfo )
        {
          goto LABEL_68;
        }
        if ( !v37[4] && v37[5] == v26 && v37[6] == limitCount )
        {
          v20 = v37[7];
          v39 = 1;
          goto LABEL_58;
        }
      }
    }
    v39 = 0;
LABEL_58:
    v40 = v28->klass;
    v41 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_62;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_62:
      v43 = sub_1BDA590(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(v28, *(_QWORD *)(v43 + 8));
    if ( (v39 & 1) == 0 )
      return 0;
  }
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
  Il2CppObject *PK; // x1

  if ( (byte_4A5AF21 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
    byte_4A5AF21 = 1;
  }
  PK = (Il2CppObject *)CombineLimitGiftEntity__CreatePK(svtId, rarity, limitCount, *(const MethodInfo **)&limitCount);
  return (CombineLimitGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5AF22 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
    byte_4A5AF22 = 1;
  }
  PK = (Il2CppObject *)CombineLimitGiftEntity__CreatePK(id, rarity, limitCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
}