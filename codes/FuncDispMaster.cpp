void __fastcall FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7CE6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__, method);
    byte_4BC7CE6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    454,
    (const MethodInfo_3246354 *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
}


bool __fastcall FuncDispMaster__IsContainFuncIds(
        FuncDispMaster_o *this,
        FuncDispEntity_o **entity,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  FuncDispEntity_o *v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  bool v36; // w21
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4BC7CE5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__, entity);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v11);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v12);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo, v13);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v14);
    byte_4BC7CE5 = 1;
  }
  *entity = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)entity, 0LL, (int64_t)funcIds, (int32_t)method, v4, v5, v6, v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_FuncDispEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v29 = (FuncDispEntity_o *)v27;
    if ( !v27 )
      sub_1C1AE30(0LL, v28);
    if ( System_Linq_Enumerable__SequenceEqual_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v27 + 24),
           (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
           (const MethodInfo_2FD3894 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
    {
      *entity = v29;
      sub_1C1AB78((PartyOrganizationUtility_o *)entity, (int64_t)v29, v30, v31, v32, v33, v34, v35);
      v36 = 1;
      goto LABEL_22;
    }
  }
  v36 = 0;
LABEL_22:
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_26;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_26:
    v40 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return v36;
}