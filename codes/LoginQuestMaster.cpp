void __fastcall LoginQuestMaster___ctor(LoginQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B489 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_LoginQuestMaster__LoginQuestEntity__int___ctor__);
    byte_4A5B489 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    360,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_LoginQuestMaster__LoginQuestEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
LoginQuestEntity_o *__fastcall LoginQuestMaster__GetEntityByQuestId(
        LoginQuestMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  LoginQuestEntity_o *v16; // x0
  __int64 v17; // x1
  LoginQuestEntity_o *v18; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4A5B48A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&LoginQuestEntity_TypeInfo);
    byte_4A5B48A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (LoginQuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                  Enumerator,
                                  *(_QWORD *)(v15 + 8));
    v18 = v16;
    if ( !v16 )
      goto LABEL_32;
    methodPtr_low = LOBYTE(LoginQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (LoginQuestEntity_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != LoginQuestEntity_TypeInfo )
    {
      sub_1B88ACC(v16);
LABEL_32:
      sub_1B8880C(v16, v17);
    }
    if ( v16->fields.questId == questId )
      goto LABEL_24;
  }
  v18 = 0LL;
LABEL_24:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_28;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_28:
    v23 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v18;
}