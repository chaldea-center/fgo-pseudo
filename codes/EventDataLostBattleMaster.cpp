void EventDataLostBattleMaster___ctor(EventDataLostBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970766 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventDataLostBattleMaster__EventDataLostBattleEntity__int___ctor__);
    byte_5970766 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    444,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_EventDataLostBattleMaster__EventDataLostBattleEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventDataLostBattleMaster__GetEventDataLostBattleId(
        EventDataLostBattleMaster_o *this,
        int32_t warId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  _DWORD *v21; // x0
  int32_t v22; // w20
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_Collections_Generic_IEnumerator_T__o *v28; // [xsp+18h] [xbp-38h]

  if ( (byte_5970765 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventDataLostBattleEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventDataLostBattleEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970765 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventDataLostBattleEntity__GetEnumerator__);
  v28 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v28 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
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
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
    {
      v22 = -1;
      goto LABEL_27;
    }
    if ( !v28 )
      sub_2213CDC(v15, v16);
    v17 = v28->klass;
    v18 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventDataLostBattleEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventDataLostBattleEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v28, System_Collections_Generic_IEnumerator_EventDataLostBattleEntity__TypeInfo, 0);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      v28,
                      *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      if ( v21[6] == warId && v21[5] == eventId )
        break;
    }
  }
  v22 = v21[4];
LABEL_27:
  if ( v28 )
  {
    v23 = v28->klass;
    v24 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_32;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_32:
      v26 = sub_224BC3C(v28, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(v28, *(_QWORD *)(v26 + 8));
  }
  return v22;
}