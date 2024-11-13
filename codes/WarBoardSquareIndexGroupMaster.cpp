void __fastcall WarBoardSquareIndexGroupMaster___ctor(WarBoardSquareIndexGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17224 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string___ctor__,
      method,
      v2);
    byte_4B17224 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    469,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string___ctor__);
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

  if ( (byte_4B17225 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&stageId);
    byte_4B17225 = 1;
  }
  PK = (Il2CppObject *)WarBoardSquareIndexGroupEntity__CreatePK(
                         id,
                         stageId,
                         squareIndex,
                         *(const MethodInfo **)&squareIndex);
  return (WarBoardSquareIndexGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_31B3198 *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall WarBoardSquareIndexGroupMaster__GetStageList(
        WarBoardSquareIndexGroupMaster_o *this,
        int32_t id,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  _DWORD *v34; // x0
  __int64 v35; // x1
  __int64 methodPtr_low; // x9
  __int64 v37; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4B17223 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&id,
      *(_QWORD *)&stageId);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&WarBoardSquareIndexGroupEntity_TypeInfo, v19, v20);
    byte_4B17223 = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&id,
                                                    *(_QWORD *)&stageId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v22);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                      Enumerator,
                      *(_QWORD *)(v33 + 8));
    if ( !v34 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(WarBoardSquareIndexGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) < (unsigned int)methodPtr_low
      || *(WarBoardSquareIndexGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * methodPtr_low - 8) != WarBoardSquareIndexGroupEntity_TypeInfo )
    {
      sub_1BCACFC(v34);
LABEL_36:
      sub_1BCAA3C(v34, v35);
    }
    if ( v34[4] == id && v34[5] == stageId )
    {
      if ( !v21 )
        sub_1BCAA3C(v34, WarBoardSquareIndexGroupEntity_TypeInfo);
      v37 = (unsigned int)v34[6];
      items = v21->fields._items;
      v39 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(v34, v37);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          v37,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = size + 1;
        items->m_Items[size + 1] = v37;
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_32;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_32:
    v44 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  return v21;
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

  if ( (byte_4B17226 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B17226 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__TryGetEntity__);
}