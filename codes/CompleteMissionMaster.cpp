void __fastcall CompleteMissionMaster___ctor(CompleteMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187F73 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int___ctor__, method);
    byte_4187F73 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    139,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int___ctor__);
}


bool __fastcall CompleteMissionMaster__TryGetEntityFromObjectId(
        CompleteMissionMaster_o *this,
        CompleteMissionEntity_o **entity,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  System_String_array **v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  CompleteMissionEntity_o *v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x11
  System_Collections_Generic_IEnumerator_T__o *v32; // x23
  bool v33; // w22
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int v45; // [xsp+0h] [xbp-40h]

  if ( (byte_4187F74 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entity);
    sub_B2C35C(&CompleteMissionEntity_TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4187F74 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, entity);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v19);
    }
    v24 = (CompleteMissionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                       Enumerator,
                                       *(_QWORD *)(v23 + 8));
    if ( !v24
      || (v31 = *(&CompleteMissionEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v31)
      || (CompleteMissionEntity_c *)v24->klass->_2.typeHierarchy[v31 - 1] != CompleteMissionEntity_TypeInfo )
    {
      sub_B2C434(v24, v25);
    }
    if ( v24->fields.objectId == objectId )
    {
      *entity = v24;
      sub_B2C2F8((BattleServantConfConponent_o *)entity, (System_Int32_array **)v24, v26, v13, v27, v28, v29, v30);
      v32 = Enumerator;
      v45 = 67;
      v33 = 1;
      goto LABEL_24;
    }
  }
  v33 = 0;
  v45 = 62;
  v32 = Enumerator;
LABEL_24:
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_28:
    v37 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(v32, *(_QWORD *)(v37 + 8));
  if ( v45 == 62 )
  {
    *entity = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)entity, 0LL, v38, v39, v40, v41, v42, v43);
    return 0;
  }
  return v33;
}