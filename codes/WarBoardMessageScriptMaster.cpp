void __fastcall WarBoardMessageScriptMaster___ctor(WarBoardMessageScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEA5D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardMessageScriptMaster__WarBoardMessageScriptEntity__string___ctor__);
    byte_42AEA5D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    414,
    (const MethodInfo_23E268C *)Method_DataMasterBase_WarBoardMessageScriptMaster__WarBoardMessageScriptEntity__string___ctor__);
}


WarBoardMessageScriptEntity_o *__fastcall WarBoardMessageScriptMaster__GetMessageEntity(
        WarBoardMessageScriptMaster_o *this,
        System_String_o *imageId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  System_String_o **v17; // x0
  __int64 v18; // x1
  WarBoardMessageScriptEntity_o *v19; // x21
  __int64 v20; // x9
  int v21; // w8
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  int v27; // [xsp+0h] [xbp-40h]

  if ( (byte_42AEA5E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&WarBoardMessageScriptEntity_TypeInfo);
    byte_42AEA5E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, imageId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (System_String_o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                Enumerator,
                                *(_QWORD *)(v16 + 8));
    v19 = (WarBoardMessageScriptEntity_o *)v17;
    if ( !v17 )
      goto LABEL_35;
    v20 = *(&WarBoardMessageScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( BYTE4((*v17)[12].monitor) < (unsigned int)v20
      || *((WarBoardMessageScriptEntity_c **)(*v17)[8].monitor + v20 - 1) != WarBoardMessageScriptEntity_TypeInfo )
    {
      v17 = (System_String_o **)sub_B52D50(v17);
LABEL_35:
      sub_B52A5C(v17, v18);
    }
    if ( !imageId )
      sub_B52A5C(v17, WarBoardMessageScriptEntity_TypeInfo);
    if ( System_String__Equals_44555656(imageId, v17[2], 0LL) )
    {
      v21 = 66;
      goto LABEL_25;
    }
  }
  v19 = 0LL;
  v21 = 64;
LABEL_25:
  v27 = v21;
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  if ( v27 == 64 )
    return 0LL;
  return v19;
}