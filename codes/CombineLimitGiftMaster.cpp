void __fastcall CombineLimitGiftMaster___ctor(CombineLimitGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC785C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__, method);
    byte_4BC785C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    426,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  _DWORD *v23; // x0
  int32_t v24; // w20
  int v25; // w24
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  int v30; // w22
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *v32; // x21
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  _DWORD *v41; // x0
  char v42; // w22
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0

  if ( (byte_4BC785D & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantExceedMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v9);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo, v10);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v11);
    byte_4BC785D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v13);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( v23 && v23[4] == svtId && v23[6] == limitCount )
    {
      v24 = v23[7];
      v25 = 4;
      goto LABEL_23;
    }
  }
  v24 = 0;
  v25 = 5;
LABEL_23:
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
        goto LABEL_27;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_27:
    v29 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  if ( v25 == 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantExceedMaster__GetRarity(
                                                                 (ServantExceedMaster_o *)list,
                                                                 svtId,
                                                                 0LL);
      if ( this->fields.list )
      {
        v30 = (int)list;
        v32 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
        if ( !v32 )
          sub_1C1AE30(0LL, v31);
        while ( 1 )
        {
          v33 = v32->klass;
          v34 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
          {
            v35 = &v33->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v34;
              v35 += 4;
              if ( !v34 )
                goto LABEL_39;
            }
            v36 = (__int64)&v33->vtable[*v35].method;
          }
          else
          {
LABEL_39:
            v36 = sub_1C6CBB4(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                  v32,
                  *(_QWORD *)(v36 + 8)) & 1) == 0 )
            break;
          v37 = v32->klass;
          v38 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
          {
            v39 = &v37->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo )
            {
              --v38;
              v39 += 4;
              if ( !v38 )
                goto LABEL_46;
            }
            v40 = (__int64)&v37->vtable[*v39].method;
          }
          else
          {
LABEL_46:
            v40 = sub_1C6CBB4(v32, System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo, 0LL);
          }
          v41 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                            v32,
                            *(_QWORD *)(v40 + 8));
          if ( v41 && !v41[4] && v41[5] == v30 && v41[6] == limitCount )
          {
            v24 = v41[7];
            v42 = 1;
            goto LABEL_54;
          }
        }
        v42 = 0;
LABEL_54:
        v43 = v32->klass;
        v44 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
        {
          v45 = &v43->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
          {
            --v44;
            v45 += 4;
            if ( !v44 )
              goto LABEL_58;
          }
          v46 = (__int64)&v43->vtable[*v45].method;
        }
        else
        {
LABEL_58:
          v46 = sub_1C6CBB4(v32, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(v32, *(_QWORD *)(v46 + 8));
        if ( (v42 & 1) == 0 )
          return 0;
        return v24;
      }
    }
LABEL_63:
    sub_1C1AE30(list, *(_QWORD *)&svtId);
  }
  return v24;
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

  if ( (byte_4BC785A & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BC785A = 1;
  }
  PK = (Il2CppObject *)CombineLimitGiftEntity__CreatePK(svtId, rarity, limitCount, *(const MethodInfo **)&limitCount);
  return (CombineLimitGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_324D130 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
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

  if ( (byte_4BC785B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__, entity);
    byte_4BC785B = 1;
  }
  PK = (Il2CppObject *)CombineLimitGiftEntity__CreatePK(id, rarity, limitCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
}