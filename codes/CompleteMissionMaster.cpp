void CompleteMissionMaster___ctor(CompleteMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593849A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int___ctor__);
    byte_593849A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    147,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int___ctor__);
}


bool CompleteMissionMaster__TryGetEntityFromObjectId(
        CompleteMissionMaster_o *this,
        CompleteMissionEntity_o **entity,
        int32_t objectId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  CompleteMissionEntity_o *Enumerator; // x0
  CompleteMissionEntity_o *v9; // x1
  CompleteMissionEntity_c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  CompleteMissionEntity_c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  bool v24; // w21
  int v25; // w24
  CompleteMissionEntity_c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  CompleteMissionEntity_o *v37; // [xsp+18h] [xbp-38h]

  if ( (byte_593849B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_CompleteMissionEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_CompleteMissionEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593849B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, entity);
  Enumerator = (CompleteMissionEntity_o *)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                                            list,
                                            (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_CompleteMissionEntity__GetEnumerator__);
  v37 = Enumerator;
  while ( 1 )
  {
    if ( !v37 )
      sub_21FFECC(Enumerator, v9);
    klass = v37->klass;
    v11 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_10:
      v13 = sub_2237E2C(v37, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(CompleteMissionEntity_o *, _QWORD))v13)(v37, *(_QWORD *)(v13 + 8)) & 1) == 0 )
      break;
    v14 = v37->klass;
    v15 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CompleteMissionEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_CompleteMissionEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable + 16 * *v16;
    }
    else
    {
LABEL_17:
      v17 = sub_2237E2C(v37, System_Collections_Generic_IEnumerator_CompleteMissionEntity__TypeInfo, 0);
    }
    Enumerator = (CompleteMissionEntity_o *)(*(__int64 (__fastcall **)(CompleteMissionEntity_o *, _QWORD))v17)(
                                              v37,
                                              *(_QWORD *)(v17 + 8));
    v9 = Enumerator;
    if ( !Enumerator )
      sub_21FFECC(0, 0);
    if ( Enumerator->fields.objectId == objectId )
    {
      *entity = Enumerator;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entity, (int32_t)Enumerator, v18, v19, v20, v21, v22, v23);
      v24 = 1;
      v25 = 4;
      goto LABEL_23;
    }
  }
  v24 = 0;
  v25 = 5;
LABEL_23:
  v26 = v37->klass;
  v27 = *(unsigned __int16 *)&v37->klass->_2.rank;
  if ( *(_WORD *)&v37->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_27;
    }
    v29 = (__int64)&v26->vtable + 16 * *v28;
  }
  else
  {
LABEL_27:
    v29 = sub_2237E2C(v37, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(CompleteMissionEntity_o *, _QWORD))v29)(v37, *(_QWORD *)(v29 + 8));
  if ( v25 == 5 )
  {
    *entity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entity, 0, v30, v31, v32, v33, v34, v35);
    return 0;
  }
  return v24;
}