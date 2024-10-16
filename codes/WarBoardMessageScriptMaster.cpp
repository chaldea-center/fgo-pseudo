void __fastcall WarBoardMessageScriptMaster___ctor(WarBoardMessageScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6D30 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_WarBoardMessageScriptMaster__WarBoardMessageScriptEntity__string___ctor__,
      method);
    byte_4AB6D30 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    415,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_WarBoardMessageScriptMaster__WarBoardMessageScriptEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  System_String_o **v20; // x0
  __int64 v21; // x1
  WarBoardMessageScriptEntity_o *v22; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4AB6D31 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, imageId);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v5);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BAB41C(&WarBoardMessageScriptEntity_TypeInfo, v8);
    byte_4AB6D31 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BAB678(0LL, imageId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (System_String_o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                Enumerator,
                                *(_QWORD *)(v19 + 8));
    v22 = (WarBoardMessageScriptEntity_o *)v20;
    if ( !v20 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(WarBoardMessageScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE((*v20)[12].fields._stringLength) < (unsigned int)methodPtr_low
      || *((WarBoardMessageScriptEntity_c **)(*v20)[8].monitor + methodPtr_low - 1) != WarBoardMessageScriptEntity_TypeInfo )
    {
      sub_1BAB938(v20);
LABEL_33:
      sub_1BAB678(v20, v21);
    }
    if ( !imageId )
      sub_1BAB678(v20, WarBoardMessageScriptEntity_TypeInfo);
    if ( System_String__Equals_62056444(imageId, v20[2], 0LL) )
      goto LABEL_25;
  }
  v22 = 0LL;
LABEL_25:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v22;
}