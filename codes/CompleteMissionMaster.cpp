void __fastcall CompleteMissionMaster___ctor(CompleteMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB450C & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int___ctor__, method);
    byte_4BB450C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    145,
    (const MethodInfo_3236300 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int___ctor__);
}


bool __fastcall CompleteMissionMaster__TryGetEntityFromObjectId(
        CompleteMissionMaster_o *this,
        CompleteMissionEntity_o **entity,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  CompleteMissionEntity_o *v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  bool v29; // w22
  int v30; // w24
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4BB450D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_CompleteMissionEntity__GetEnumerator__, entity);
    sub_1C13D24(&System_IDisposable_TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_CompleteMissionEntity__TypeInfo, v8);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BB450D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, entity);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_CompleteMissionEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CompleteMissionEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_CompleteMissionEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_CompleteMissionEntity__TypeInfo, 0LL);
    }
    v21 = (CompleteMissionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_1C13F80(0LL, v22);
    if ( v21->fields.objectId == objectId )
    {
      *entity = v21;
      sub_1C13CC8((PartyOrganizationUtility_o *)entity, (int64_t)v21, v23, v24, v25, v26, v27, v28);
      v29 = 1;
      v30 = 4;
      goto LABEL_22;
    }
  }
  v29 = 0;
  v30 = 5;
LABEL_22:
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
        goto LABEL_26;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_26:
    v34 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  if ( v30 == 5 )
  {
    *entity = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)entity, 0LL, v35, v36, v37, v38, v39, v40);
    return 0;
  }
  return v29;
}