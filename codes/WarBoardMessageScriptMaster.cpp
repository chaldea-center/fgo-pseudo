void __fastcall WarBoardMessageScriptMaster___ctor(WarBoardMessageScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418652F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardMessageScriptMaster__WarBoardMessageScriptEntity__string___ctor__, method);
    byte_418652F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    413,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardMessageScriptMaster__WarBoardMessageScriptEntity__string___ctor__);
}


WarBoardMessageScriptEntity_o *__fastcall WarBoardMessageScriptMaster__GetMessageEntity(
        WarBoardMessageScriptMaster_o *this,
        System_String_o *imageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  System_String_o **v21; // x0
  __int64 v22; // x1
  WarBoardMessageScriptEntity_o *v23; // x21
  __int64 v24; // x9
  int v25; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int v31; // [xsp+0h] [xbp-40h]

  if ( (byte_4186530 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, imageId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&WarBoardMessageScriptEntity_TypeInfo, v8);
    byte_4186530 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, imageId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (System_String_o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                Enumerator,
                                *(_QWORD *)(v20 + 8));
    v23 = (WarBoardMessageScriptEntity_o *)v21;
    if ( !v21 )
      goto LABEL_35;
    v24 = *(&WarBoardMessageScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( BYTE4((*v21)[12].monitor) < (unsigned int)v24
      || *((WarBoardMessageScriptEntity_c **)(*v21)[8].monitor + v24 - 1) != WarBoardMessageScriptEntity_TypeInfo )
    {
      v21 = (System_String_o **)sub_B2C728(v21);
LABEL_35:
      sub_B2C434(v21, v22);
    }
    if ( !imageId )
      sub_B2C434(v21, WarBoardMessageScriptEntity_TypeInfo);
    if ( System_String__Equals_44292872(imageId, v21[2], 0LL) )
    {
      v25 = 66;
      goto LABEL_25;
    }
  }
  v23 = 0LL;
  v25 = 64;
LABEL_25:
  v31 = v25;
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_29:
    v29 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  if ( v31 == 64 )
    return 0LL;
  return v23;
}