void LoginQuestMaster___ctor(LoginQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970D28 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_LoginQuestMaster__LoginQuestEntity__int___ctor__);
    byte_5970D28 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    368,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_LoginQuestMaster__LoginQuestEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
LoginQuestEntity_o *LoginQuestMaster__GetEntityByQuestId(
        LoginQuestMaster_o *this,
        int32_t questId,
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
  LoginQuestEntity_o *v16; // x20
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__o *v22; // [xsp+18h] [xbp-38h]

  if ( (byte_5970D29 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_LoginQuestEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_LoginQuestEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970D29 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_LoginQuestEntity__GetEnumerator__);
  v22 = Enumerator;
  while ( 1 )
  {
    if ( !v22 )
      sub_2213CDC(Enumerator, v7);
    klass = v22->klass;
    v9 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
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
      v11 = sub_224BC3C(v22, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            v22,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = v22->klass;
    v13 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_LoginQuestEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_LoginQuestEntity__TypeInfo )
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
      v15 = sub_224BC3C(v22, System_Collections_Generic_IEnumerator_LoginQuestEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                                                  v22,
                                                                  *(_QWORD *)(v15 + 8));
    v16 = (LoginQuestEntity_o *)Enumerator;
    if ( !Enumerator )
      sub_2213CDC(0, v7);
    if ( LODWORD(Enumerator[1].monitor) == questId )
      goto LABEL_23;
  }
  v16 = 0;
LABEL_23:
  v17 = v22->klass;
  v18 = *(unsigned __int16 *)&v22->klass->_2.rank;
  if ( *(_WORD *)&v22->klass->_2.rank )
  {
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_27;
    }
    v20 = (__int64)&v17->vtable[*v19];
  }
  else
  {
LABEL_27:
    v20 = sub_224BC3C(v22, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(v22, *(_QWORD *)(v20 + 8));
  return v16;
}