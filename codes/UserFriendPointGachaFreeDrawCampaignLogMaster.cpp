void UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(
        UserFriendPointGachaFreeDrawCampaignLogMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_59395A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserFriendPointGachaFreeDrawCampaignLogMaster__UserFriendPointGachaFreeDrawCampaignLogEntity__string___ctor__);
    byte_59395A0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    400,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserFriendPointGachaFreeDrawCampaignLogMaster__UserFriendPointGachaFreeDrawCampaignLogEntity__string___ctor__);
}


int32_t UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
        UserFriendPointGachaFreeDrawCampaignLogMaster_o *this,
        int64_t startAt,
        int64_t endAt,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *v10; // x22
  int32_t v11; // w19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x10
  __int64 v25; // x9
  __int64 v26; // x8
  __int64 v27; // x9
  int64_t *v28; // x10
  int64_t v29; // x11
  int64_t v30; // t1
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  System_Collections_Generic_IEnumerator_T__o *v37; // [xsp+18h] [xbp-38h]

  if ( (byte_59395A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserFriendPointGachaFreeDrawCampaignLogEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserFriendPointGachaFreeDrawCampaignLogEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_59395A1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, startAt);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserFriendPointGachaFreeDrawCampaignLogEntity__GetEnumerator__);
  v37 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  v10 = Enumerator;
  v11 = 0;
  while ( 1 )
  {
    klass = v10->klass;
    v13 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v15 = sub_2237E2C(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v10,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    if ( !v37 )
      sub_21FFECC(v16, v17);
    v18 = v37->klass;
    v19 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserFriendPointGachaFreeDrawCampaignLogEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_UserFriendPointGachaFreeDrawCampaignLogEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_2237E2C(
              v37,
              System_Collections_Generic_IEnumerator_UserFriendPointGachaFreeDrawCampaignLogEntity__TypeInfo,
              0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            v37,
            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_21FFECC(0, v23);
    v24 = *(_QWORD *)(v22 + 16);
    if ( !v24 )
      sub_21FFECC(v22, v23);
    v25 = *(_QWORD *)(v24 + 24);
    if ( (int)v25 >= 1 )
    {
      v26 = (unsigned int)v25 & ~((int)v25 >> 31);
      v27 = (unsigned int)*(_QWORD *)(v24 + 24);
      v28 = (int64_t *)(v24 + 32);
      do
      {
        if ( !v27 )
          sub_21FFED4(v22);
        v30 = *v28++;
        v29 = v30;
        --v26;
        --v27;
        if ( v30 >= startAt && v29 < endAt )
          ++v11;
      }
      while ( v26 );
    }
    v10 = v37;
  }
  if ( v37 )
  {
    v32 = v37->klass;
    v33 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_37;
      }
      v35 = (__int64)&v32->vtable[*v34];
    }
    else
    {
LABEL_37:
      v35 = sub_2237E2C(v37, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(v37, *(_QWORD *)(v35 + 8));
  }
  return v11;
}