void __fastcall FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66DFF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__, method);
    byte_4B66DFF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    454,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
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
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v28; // x0
  __int64 v29; // x1
  FuncDispEntity_o *v30; // x22
  __int64 methodPtr_low; // x9
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  bool v38; // w21
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4B66DFE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entity);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v11);
    sub_1BE4ACC(&FuncDispEntity_TypeInfo, v12);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v15);
    byte_4B66DFE = 1;
  }
  *entity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)entity, 0LL, (int64_t)funcIds, (int32_t)method, v4, v5, v6, v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v27 + 8));
    v30 = (FuncDispEntity_o *)v28;
    if ( !v28 )
      goto LABEL_32;
    methodPtr_low = LOBYTE(FuncDispEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE((*v28)[19].klass) < (unsigned int)methodPtr_low
      || *((FuncDispEntity_c **)(*v28)[12].monitor + methodPtr_low - 1) != FuncDispEntity_TypeInfo )
    {
      sub_1BE4FE8(v28);
LABEL_32:
      sub_1BE4D28(v28, v29);
    }
    if ( System_Linq_Enumerable__SequenceEqual_int_(
           v28[3],
           (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
           (const MethodInfo_2F8D4F8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
    {
      *entity = v30;
      sub_1BE4A70((PartyOrganizationUtility_o *)entity, (int64_t)v30, v32, v33, v34, v35, v36, v37);
      v38 = 1;
      goto LABEL_24;
    }
  }
  v38 = 0;
LABEL_24:
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_28;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_28:
    v42 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return v38;
}