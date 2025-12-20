void CombineLimitGiftMaster___ctor(CombineLimitGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C600 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
    byte_4D2C600 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    428,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t CombineLimitGiftMaster__GetCombineLimitGiftId(
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
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  _DWORD *v18; // x0
  int32_t v19; // w20
  int v20; // w24
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  int v25; // w22
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *v27; // x21
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  _DWORD *v36; // x0
  char v37; // w22
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4D2C601 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
    sub_1C94098(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2C601 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo, 0);
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      Enumerator,
                      *(_QWORD *)(v17 + 8));
    if ( v18 && v18[4] == svtId && v18[6] == limitCount )
    {
      v19 = v18[7];
      v20 = 4;
      goto LABEL_23;
    }
  }
  v19 = 0;
  v20 = 5;
LABEL_23:
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_27;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_27:
    v24 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  if ( v20 == 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantExceedMaster__GetRarity(
                                                                 (ServantExceedMaster_o *)list,
                                                                 svtId,
                                                                 0);
      if ( this->fields.list )
      {
        v25 = (int)list;
        v27 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
        if ( !v27 )
          sub_1C942F0(0, v26);
        while ( 1 )
        {
          v28 = v27->klass;
          v29 = *(unsigned __int16 *)&v27->klass->_2.rank;
          if ( *(_WORD *)&v27->klass->_2.rank )
          {
            v30 = &v28->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v29;
              v30 += 4;
              if ( !v29 )
                goto LABEL_39;
            }
            v31 = (__int64)&v28->vtable[*v30];
          }
          else
          {
LABEL_39:
            v31 = sub_1C6A420(v27, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                  v27,
                  *(_QWORD *)(v31 + 8))
              & 1) == 0 )
            break;
          v32 = v27->klass;
          v33 = *(unsigned __int16 *)&v27->klass->_2.rank;
          if ( *(_WORD *)&v27->klass->_2.rank )
          {
            v34 = &v32->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo )
            {
              --v33;
              v34 += 4;
              if ( !v33 )
                goto LABEL_46;
            }
            v35 = (__int64)&v32->vtable[*v34];
          }
          else
          {
LABEL_46:
            v35 = sub_1C6A420(v27, System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo, 0);
          }
          v36 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                            v27,
                            *(_QWORD *)(v35 + 8));
          if ( v36 && !v36[4] && v36[5] == v25 && v36[6] == limitCount )
          {
            v19 = v36[7];
            v37 = 1;
            goto LABEL_54;
          }
        }
        v37 = 0;
LABEL_54:
        v38 = v27->klass;
        v39 = *(unsigned __int16 *)&v27->klass->_2.rank;
        if ( *(_WORD *)&v27->klass->_2.rank )
        {
          v40 = &v38->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
          {
            --v39;
            v40 += 4;
            if ( !v39 )
              goto LABEL_58;
          }
          v41 = (__int64)&v38->vtable[*v40];
        }
        else
        {
LABEL_58:
          v41 = sub_1C6A420(v27, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(v27, *(_QWORD *)(v41 + 8));
        if ( (v37 & 1) == 0 )
          return 0;
        return v19;
      }
    }
LABEL_63:
    sub_1C942F0(list, *(_QWORD *)&svtId);
  }
  return v19;
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

  if ( (byte_4D2C5FE & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
    byte_4D2C5FE = 1;
  }
  PK = (Il2CppObject *)CombineLimitGiftEntity__CreatePK(svtId, rarity, limitCount, *(const MethodInfo **)&limitCount);
  return (CombineLimitGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_345FF78 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
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

  if ( (byte_4D2C5FF & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
    byte_4D2C5FF = 1;
  }
  PK = (Il2CppObject *)CombineLimitGiftEntity__CreatePK(id, rarity, limitCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
}