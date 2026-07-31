void CombineLimitGiftMaster___ctor(CombineLimitGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593841C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
    byte_593841C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    430,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t CombineLimitGiftMaster__GetCombineLimitGiftId(
        CombineLimitGiftMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  _DWORD *v21; // x0
  int32_t v22; // w20
  int v23; // w27
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_ObjectModel_Collection_T__o *v28; // x8
  int v29; // w21
  System_Collections_Generic_IEnumerator_T__o *v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *j; // x22
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  _DWORD *v43; // x0
  char v44; // w22
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  System_Collections_Generic_IEnumerator_T__o *v50; // [xsp+18h] [xbp-58h]
  System_Collections_Generic_IEnumerator_T__o *v51; // [xsp+18h] [xbp-58h]

  if ( (byte_593841D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593841D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_77;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
  v50 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v50 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
    {
      v22 = 0;
      v23 = 5;
      goto LABEL_27;
    }
    if ( !v50 )
      sub_21FFECC(v15, v16);
    v17 = v50->klass;
    v18 = *(unsigned __int16 *)&v50->klass->_2.rank;
    if ( *(_WORD *)&v50->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_2237E2C(v50, System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo, 0);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      v50,
                      *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      if ( v21[4] == svtId && v21[6] == limitCount )
        break;
    }
  }
  v22 = v21[7];
  v23 = 4;
LABEL_27:
  if ( v50 )
  {
    v24 = v50->klass;
    v25 = *(unsigned __int16 *)&v50->klass->_2.rank;
    if ( *(_WORD *)&v50->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_32;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_32:
      v27 = sub_2237E2C(v50, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(v50, *(_QWORD *)(v27 + 8));
  }
  if ( v23 == 5 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantExceedMaster__GetRarity(
                                                                 (ServantExceedMaster_o *)list,
                                                                 svtId,
                                                                 0);
      v28 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( v28 )
      {
        v29 = (int)list;
        v30 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                v28,
                (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_CombineLimitGiftEntity__GetEnumerator__);
        v51 = v30;
        if ( !v30 )
          sub_21FFECC(v30, v31);
        for ( j = v30; ; j = v51 )
        {
          v33 = j->klass;
          v34 = *(unsigned __int16 *)&j->klass->_2.rank;
          if ( *(_WORD *)&j->klass->_2.rank )
          {
            v35 = &v33->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v34;
              v35 += 4;
              if ( !v34 )
                goto LABEL_46;
            }
            v36 = (__int64)&v33->vtable[*v35];
          }
          else
          {
LABEL_46:
            v36 = sub_2237E2C(j, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                  j,
                  *(_QWORD *)(v36 + 8));
          if ( (v37 & 1) == 0 )
          {
            v44 = 0;
            goto LABEL_63;
          }
          if ( !v51 )
            sub_21FFECC(v37, v38);
          v39 = v51->klass;
          v40 = *(unsigned __int16 *)&v51->klass->_2.rank;
          if ( *(_WORD *)&v51->klass->_2.rank )
          {
            v41 = &v39->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__c **)v41 - 1) != System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo )
            {
              --v40;
              v41 += 4;
              if ( !v40 )
                goto LABEL_54;
            }
            v42 = (__int64)&v39->vtable[*v41];
          }
          else
          {
LABEL_54:
            v42 = sub_2237E2C(v51, System_Collections_Generic_IEnumerator_CombineLimitGiftEntity__TypeInfo, 0);
          }
          v43 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                            v51,
                            *(_QWORD *)(v42 + 8));
          if ( v43 )
          {
            if ( !v43[4] && v43[5] == v29 && v43[6] == limitCount )
              break;
          }
        }
        v22 = v43[7];
        v44 = 1;
LABEL_63:
        if ( v51 )
        {
          v45 = v51->klass;
          v46 = *(unsigned __int16 *)&v51->klass->_2.rank;
          if ( *(_WORD *)&v51->klass->_2.rank )
          {
            v47 = &v45->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
            {
              --v46;
              v47 += 4;
              if ( !v46 )
                goto LABEL_68;
            }
            v48 = (__int64)&v45->vtable[*v47];
          }
          else
          {
LABEL_68:
            v48 = sub_2237E2C(v51, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(v51, *(_QWORD *)(v48 + 8));
        }
        if ( (v44 & 1) == 0 )
          return 0;
        return v22;
      }
    }
LABEL_77:
    sub_21FFECC(list, *(_QWORD *)&svtId);
  }
  return v22;
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

  if ( (byte_593841A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
    byte_593841A = 1;
  }
  PK = (Il2CppObject *)CombineLimitGiftEntity__CreatePK(svtId, rarity, limitCount, *(const MethodInfo **)&limitCount);
  return (CombineLimitGiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
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

  if ( (byte_593841B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
    byte_593841B = 1;
  }
  PK = (Il2CppObject *)CombineLimitGiftEntity__CreatePK(id, rarity, limitCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
}