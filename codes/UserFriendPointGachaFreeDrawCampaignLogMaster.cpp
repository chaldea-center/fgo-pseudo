void __fastcall UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(
        UserFriendPointGachaFreeDrawCampaignLogMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186FB3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserFriendPointGachaFreeDrawCampaignLogMaster__UserFriendPointGachaFreeDrawCampaignLogEntity__string___ctor__,
      method);
    byte_4186FB3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    390,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserFriendPointGachaFreeDrawCampaignLogMaster__UserFriendPointGachaFreeDrawCampaignLogEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int32_t v15; // w19
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  _QWORD *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x9
  __int64 v23; // x11
  unsigned __int64 v24; // x8
  unsigned __int64 v25; // x9
  __int64 v26; // x11
  int64_t v27; // x12
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v38; // x0

  if ( (byte_4186FB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, startAt);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo, v10);
    byte_4186FB4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, startAt);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v12);
  v15 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        p_offset += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_10:
      v19 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v32);
    }
    v20 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      Enumerator,
                      *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_35;
    v22 = *(&UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v20 + 300LL) < (unsigned int)v22
      || *(UserFriendPointGachaFreeDrawCampaignLogEntity_c **)(*(_QWORD *)(*v20 + 200LL) + 8 * v22 - 8) != UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo )
    {
      v20 = (_QWORD *)sub_B2C728(v20);
LABEL_35:
      sub_B2C434(v20, v21);
    }
    v23 = v20[2];
    if ( !v23 )
      sub_B2C434(v20, UserFriendPointGachaFreeDrawCampaignLogEntity_TypeInfo);
    v24 = *(unsigned int *)(v23 + 24);
    if ( (__int64)(v24 << 32) >= 1 )
    {
      v25 = 0LL;
      v26 = v23 + 32;
      do
      {
        if ( v25 >= v24 )
        {
          v38 = sub_B2C460(v20);
          sub_B2C400(v38, 0LL);
        }
        v27 = *(_QWORD *)(v26 + 8 * v25++);
        v15 += v27 >= startAt && v27 < endAt;
      }
      while ( (__int64)v25 < (int)v24 );
    }
  }
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_31:
    v36 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return v15;
}