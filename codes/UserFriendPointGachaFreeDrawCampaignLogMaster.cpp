void __fastcall UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(
        UserFriendPointGachaFreeDrawCampaignLogMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF7F9 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserFriendPointGachaFreeDrawCampaignLogMaster__UserFriendPointGachaFreeDrawCampaignLogEntity__string___ctor__,
      method);
    byte_49FF7F9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    392,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_UserFriendPointGachaFreeDrawCampaignLogMaster__UserFriendPointGachaFreeDrawCampaignLogEntity__string___ctor__);
}


int32_t __fastcall UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
        UserFriendPointGachaFreeDrawCampaignLogMaster_o *this,
        int64_t startAt,
        int64_t endAt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v14; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  _QWORD *v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  __int64 v28; // x9
  int64_t *v29; // x10
  int64_t v30; // t1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_49FF7FA & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, startAt);
    sub_1B64A00(&System_IDisposable_TypeInfo, v7);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B64A00(&UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo, v10);
    byte_49FF7FA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64C5C(0LL, startAt);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v12);
  v14 = 0;
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_17:
      v22 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v23 + 304LL) < (unsigned int)methodPtr_low
      || *(UserFriendPointGachaFreeDrawCampaignLogEntity_c **)(*(_QWORD *)(*v23 + 200LL) + 8 * methodPtr_low - 8) != UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo )
    {
      sub_1B64F1C(v23);
LABEL_36:
      sub_1B64C5C(v23, v24);
    }
    v26 = v23[2];
    if ( !v26 )
      sub_1B64C5C(v23, UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo);
    v27 = *(unsigned int *)(v26 + 24);
    if ( v27 << 32 >= 1 )
    {
      v28 = (int)v27;
      v29 = (int64_t *)(v26 + 32);
      do
      {
        if ( !v27 )
          sub_1B64C64(v23, UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo);
        v30 = *v29++;
        --v28;
        --v27;
        v14 += v30 >= startAt && v30 < endAt;
      }
      while ( v28 );
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return v14;
}