void WarBoardMessageScriptMaster___ctor(WarBoardMessageScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59398B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardMessageScriptMaster__WarBoardMessageScriptEntity__string___ctor__);
    byte_59398B5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    423,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_WarBoardMessageScriptMaster__WarBoardMessageScriptEntity__string___ctor__);
}


WarBoardMessageScriptEntity_o *WarBoardMessageScriptMaster__GetMessageEntity(
        WarBoardMessageScriptMaster_o *this,
        System_String_o *imageId,
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
  __int64 v16; // x0
  __int64 v17; // x1
  WarBoardMessageScriptEntity_o *v18; // x20
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__o *v24; // [xsp+18h] [xbp-38h]

  if ( (byte_59398B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardMessageScriptEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_WarBoardMessageScriptEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_59398B6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, imageId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_WarBoardMessageScriptEntity__GetEnumerator__);
  v24 = Enumerator;
  while ( 1 )
  {
    if ( !v24 )
      sub_21FFECC(Enumerator, v7);
    klass = v24->klass;
    v9 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
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
      v11 = sub_2237E2C(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            v24,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = v24->klass;
    v13 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardMessageScriptEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_WarBoardMessageScriptEntity__TypeInfo )
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
      v15 = sub_2237E2C(v24, System_Collections_Generic_IEnumerator_WarBoardMessageScriptEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v24,
            *(_QWORD *)(v15 + 8));
    v18 = (WarBoardMessageScriptEntity_o *)v16;
    if ( !v16 )
      sub_21FFECC(0, v17);
    if ( !imageId )
      sub_21FFECC(v16, v17);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)System_String__Equals_75473208(
                                                                  imageId,
                                                                  *(System_String_o **)(v16 + 16),
                                                                  0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
      goto LABEL_24;
  }
  v18 = 0;
LABEL_24:
  v19 = v24->klass;
  v20 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_28;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_28:
    v22 = sub_2237E2C(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(v24, *(_QWORD *)(v22 + 8));
  return v18;
}