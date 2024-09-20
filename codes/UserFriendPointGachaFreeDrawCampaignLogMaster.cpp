void __fastcall UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(
        UserFriendPointGachaFreeDrawCampaignLogMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BE59 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserFriendPointGachaFreeDrawCampaignLogMaster__UserFriendPointGachaFreeDrawCampaignLogEntity__string___ctor__);
    byte_4A5BE59 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    392,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserFriendPointGachaFreeDrawCampaignLogMaster__UserFriendPointGachaFreeDrawCampaignLogEntity__string___ctor__);
}


int32_t __fastcall UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
        UserFriendPointGachaFreeDrawCampaignLogMaster_o *this,
        int64_t startAt,
        int64_t endAt,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v10; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  _QWORD *v19; // x0
  __int64 v20; // x1
  __int64 methodPtr_low; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  __int64 v24; // x9
  int64_t *v25; // x10
  int64_t v26; // t1
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4A5BE5A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo);
    byte_4A5BE5A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, startAt);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  v10 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v19 + 304LL) < (unsigned int)methodPtr_low
      || *(UserFriendPointGachaFreeDrawCampaignLogEntity_c **)(*(_QWORD *)(*v19 + 200LL) + 8 * methodPtr_low - 8) != UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo )
    {
      sub_1B88ACC(v19);
LABEL_36:
      sub_1B8880C(v19, v20);
    }
    v22 = v19[2];
    if ( !v22 )
      sub_1B8880C(v19, UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo);
    v23 = *(unsigned int *)(v22 + 24);
    if ( v23 << 32 >= 1 )
    {
      v24 = (int)v23;
      v25 = (int64_t *)(v22 + 32);
      do
      {
        if ( !v23 )
          sub_1B88814(v19, UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo);
        v26 = *v25++;
        --v24;
        --v23;
        v10 += v26 >= startAt && v26 < endAt;
      }
      while ( v24 );
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_32;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_32:
    v30 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v10;
}