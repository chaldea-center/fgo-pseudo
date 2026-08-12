void TotalBoxGachaMaster___ctor(TotalBoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971586 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__);
    byte_5971586 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    303,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalBoxGachaEntity_o *TotalBoxGachaMaster__GetEntity(
        TotalBoxGachaMaster_o *this,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  TotalBoxGachaEntity_o *v16; // x20
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__o *v22; // [xsp+18h] [xbp-38h]

  if ( (byte_5971587 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__);
    sub_2213A60(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5971587 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&boxGachaId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__);
  v22 = Enumerator;
  while ( 1 )
  {
    if ( !v22 )
      sub_2213CDC(Enumerator, v7);
    klass = v22->klass;
    v9 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_224BC3C(v22, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            v22,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = v22->klass;
    v13 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_17:
      v15 = sub_224BC3C(v22, System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                                                  v22,
                                                                  *(_QWORD *)(v15 + 8));
    v16 = (TotalBoxGachaEntity_o *)Enumerator;
    if ( !Enumerator )
      sub_2213CDC(0, v7);
    if ( HIDWORD(Enumerator[1].klass) == boxGachaId )
      goto LABEL_23;
  }
  v16 = 0;
LABEL_23:
  v17 = v22->klass;
  v18 = *(unsigned __int16 *)&v22->klass->_2.rank;
  if ( *(_WORD *)&v22->klass->_2.rank )
  {
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_27;
    }
    v20 = (__int64)&v17->vtable[*v19];
  }
  else
  {
LABEL_27:
    v20 = sub_224BC3C(v22, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(v22, *(_QWORD *)(v20 + 8));
  return v16;
}


// local variable allocation has failed, the output may be wrong!
int64_t TotalBoxGachaMaster__GetEventTotalCount(TotalBoxGachaMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  int64_t v8; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__o *v22; // [xsp+18h] [xbp-38h]

  if ( (byte_5971588 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__);
    sub_2213A60(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5971588 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__);
  v8 = 0;
  v22 = Enumerator;
  while ( 1 )
  {
    if ( !v22 )
      sub_2213CDC(Enumerator, v7);
    klass = v22->klass;
    v10 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(v22, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            v22,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = v22->klass;
    v14 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_17:
      v16 = sub_224BC3C(v22, System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                                                  v22,
                                                                  *(_QWORD *)(v16 + 8));
    if ( !Enumerator )
      sub_2213CDC(0, v7);
    if ( LODWORD(Enumerator[1].klass) == eventId )
      v8 += (int64_t)Enumerator[1].monitor;
  }
  v17 = v22->klass;
  v18 = *(unsigned __int16 *)&v22->klass->_2.rank;
  if ( *(_WORD *)&v22->klass->_2.rank )
  {
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_26;
    }
    v20 = (__int64)&v17->vtable[*v19];
  }
  else
  {
LABEL_26:
    v20 = sub_224BC3C(v22, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(v22, *(_QWORD *)(v20 + 8));
  return v8;
}


int64_t TotalBoxGachaMaster__GetTotalCount(TotalBoxGachaMaster_o *this, int32_t boxGachaId, const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)TotalBoxGachaMaster__GetEntity(this, boxGachaId, method);
  if ( result )
    return *(_QWORD *)(result + 24);
  return result;
}