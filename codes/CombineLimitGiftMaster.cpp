void CombineLimitGiftMaster___ctor(CombineLimitGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37765 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
    byte_4C37765 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    428,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
}


int32_t CombineLimitGiftMaster__GetCombineLimitGiftId(
        CombineLimitGiftMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  _DWORD *v17; // x0
  int32_t v18; // w20
  int v19; // w24
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  int v24; // w22
  System_Collections_Generic_IEnumerator_T__o *v25; // x21
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  _DWORD *v34; // x0
  char v35; // w22
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4C37766 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C37766 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v12 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_16:
      v16 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo, 0);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    if ( v17 && v17[4] == svtId && v17[6] == limitCount )
    {
      v18 = v17[7];
      v19 = 4;
      goto LABEL_23;
    }
  }
  v18 = 0;
  v19 = 5;
LABEL_23:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_27;
    }
    v23 = (__int64)&v20->vtable[*v22];
  }
  else
  {
LABEL_27:
    v23 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  if ( v19 == 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantExceedMaster__GetRarity(
                                                                 (ServantExceedMaster_o *)list,
                                                                 svtId,
                                                                 0);
      if ( this->fields.list )
      {
        v24 = (int)list;
        v25 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
        if ( !v25 )
          sub_1C32E7C(0);
        while ( 1 )
        {
          v26 = v25->klass;
          v27 = *(unsigned __int16 *)&v25->klass->_2.rank;
          if ( *(_WORD *)&v25->klass->_2.rank )
          {
            v28 = &v26->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v27;
              v28 += 4;
              if ( !v27 )
                goto LABEL_39;
            }
            v29 = (__int64)&v26->vtable[*v28];
          }
          else
          {
LABEL_39:
            v29 = sub_1C83438(v25, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                  v25,
                  *(_QWORD *)(v29 + 8))
              & 1) == 0 )
            break;
          v30 = v25->klass;
          v31 = *(unsigned __int16 *)&v25->klass->_2.rank;
          if ( *(_WORD *)&v25->klass->_2.rank )
          {
            v32 = &v30->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo )
            {
              --v31;
              v32 += 4;
              if ( !v31 )
                goto LABEL_46;
            }
            v33 = (__int64)&v30->vtable[*v32];
          }
          else
          {
LABEL_46:
            v33 = sub_1C83438(v25, System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo, 0);
          }
          v34 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                            v25,
                            *(_QWORD *)(v33 + 8));
          if ( v34 && !v34[4] && v34[5] == v24 && v34[6] == limitCount )
          {
            v18 = v34[7];
            v35 = 1;
            goto LABEL_54;
          }
        }
        v35 = 0;
LABEL_54:
        v36 = v25->klass;
        v37 = *(unsigned __int16 *)&v25->klass->_2.rank;
        if ( *(_WORD *)&v25->klass->_2.rank )
        {
          v38 = &v36->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
          {
            --v37;
            v38 += 4;
            if ( !v37 )
              goto LABEL_58;
          }
          v39 = (__int64)&v36->vtable[*v38];
        }
        else
        {
LABEL_58:
          v39 = sub_1C83438(v25, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(v25, *(_QWORD *)(v39 + 8));
        if ( (v35 & 1) == 0 )
          return 0;
        return v18;
      }
    }
LABEL_63:
    sub_1C32E7C(list);
  }
  return v18;
}


// local variable allocation has failed, the output may be wrong!
CombineLimitGiftEntity_o *CombineLimitGiftMaster__GetEntity(
        CombineLimitGiftMaster_o *this,
        int32_t svtId,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37763 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
    byte_4C37763 = 1;
  }
  PK = (Il2CppObject *)CombineLimitGiftEntity__CreatePK(svtId, rarity, limitCount, *(const MethodInfo **)&limitCount);
  return (CombineLimitGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_339B2F0 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool CombineLimitGiftMaster__TryGetEntity(
        CombineLimitGiftMaster_o *this,
        CombineLimitGiftEntity_o **entity,
        int32_t id,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37764 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
    byte_4C37764 = 1;
  }
  PK = (Il2CppObject *)CombineLimitGiftEntity__CreatePK(id, rarity, limitCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
}