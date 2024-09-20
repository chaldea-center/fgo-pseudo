void __fastcall WarBoardSquareIndexGroupMaster___ctor(WarBoardSquareIndexGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C16B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string___ctor__);
    byte_4A5C16B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    469,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareIndexGroupEntity_o *__fastcall WarBoardSquareIndexGroupMaster__GetEntity(
        WarBoardSquareIndexGroupMaster_o *this,
        int32_t id,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C16C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__GetEntity__);
    byte_4A5C16C = 1;
  }
  PK = (Il2CppObject *)WarBoardSquareIndexGroupEntity__CreatePK(
                         id,
                         stageId,
                         squareIndex,
                         *(const MethodInfo **)&squareIndex);
  return (WarBoardSquareIndexGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_311DC8C *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__GetEntity__);
}


System_Collections_Generic_List_int__o *__fastcall WarBoardSquareIndexGroupMaster__GetStageList(
        WarBoardSquareIndexGroupMaster_o *this,
        int32_t id,
        int32_t stageId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x20
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
  _DWORD *v20; // x0
  __int64 v21; // x1
  __int64 methodPtr_low; // x9
  __int64 v23; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4A5C16A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&WarBoardSquareIndexGroupEntity_TypeInfo);
    byte_4A5C16A = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      Enumerator,
                      *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(WarBoardSquareIndexGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low
      || *(WarBoardSquareIndexGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != WarBoardSquareIndexGroupEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_36:
      sub_1B8880C(v20, v21);
    }
    if ( v20[4] == id && v20[5] == stageId )
    {
      if ( !v7 )
        sub_1B8880C(v20, WarBoardSquareIndexGroupEntity_TypeInfo);
      v23 = (unsigned int)v20[6];
      items = v7->fields._items;
      v25 = Method_System_Collections_Generic_List_int__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v23);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          v23,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size + 1] = v23;
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_32;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_32:
    v30 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardSquareIndexGroupMaster__TryGetEntity(
        WarBoardSquareIndexGroupMaster_o *this,
        WarBoardSquareIndexGroupEntity_o **entity,
        int32_t id,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5C16D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__TryGetEntity__);
    byte_4A5C16D = 1;
  }
  PK = (Il2CppObject *)WarBoardSquareIndexGroupEntity__CreatePK(
                         id,
                         stageId,
                         squareIndex,
                         *(const MethodInfo **)&stageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__TryGetEntity__);
}