void UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(
        UserFriendPointGachaFreeDrawCampaignLogMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C28153 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserFriendPointGachaFreeDrawCampaignLogMaster__UserFriendPointGachaFreeDrawCampaignLogEntity__string___ctor__);
    byte_4C28153 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    398,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserFriendPointGachaFreeDrawCampaignLogMaster__UserFriendPointGachaFreeDrawCampaignLogEntity__string___ctor__);
}


int32_t UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
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
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x10
  __int64 v23; // x8
  __int64 v24; // x9
  int64_t *v25; // x10
  int64_t v26; // t1
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C28154 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserFriendPointGachaFreeDrawCampaignLogEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserFriendPointGachaFreeDrawCampaignLogEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C28154 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, startAt);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserFriendPointGachaFreeDrawCampaignLogEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  v10 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
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
      v14 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserFriendPointGachaFreeDrawCampaignLogEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_UserFriendPointGachaFreeDrawCampaignLogEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_17:
      v18 = sub_1C7DCA8(
              Enumerator,
              System_Collections_Generic_IEnumerator_UserFriendPointGachaFreeDrawCampaignLogEntity__TypeInfo,
              0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_1C2D6EC(0, v20);
    v22 = *(_QWORD *)(v19 + 16);
    if ( !v22 )
      sub_1C2D6EC(v19, v20);
    v23 = *(unsigned int *)(v22 + 24);
    if ( v23 << 32 >= 1 )
    {
      v24 = (int)v23;
      v25 = (int64_t *)(v22 + 32);
      do
      {
        if ( !v23 )
          sub_1C2D6F4(v19, v20, v21);
        v26 = *v25++;
        --v24;
        --v23;
        v10 += v26 >= startAt && v26 < endAt;
      }
      while ( v24 );
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_30;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_30:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v10;
}