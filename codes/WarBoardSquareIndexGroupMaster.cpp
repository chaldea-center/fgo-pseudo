void WarBoardSquareIndexGroupMaster___ctor(WarBoardSquareIndexGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59398F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string___ctor__);
    byte_59398F1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    477,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string___ctor__);
}


WarBoardSquareIndexGroupEntity_o *WarBoardSquareIndexGroupMaster__GetEntity(
        WarBoardSquareIndexGroupMaster_o *this,
        int32_t id,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59398F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__GetEntity__);
    byte_59398F2 = 1;
  }
  PK = (Il2CppObject *)WarBoardSquareIndexGroupEntity__CreatePK(id, stageId, squareIndex, 0);
  return (WarBoardSquareIndexGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_3EE2044 *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__GetEntity__);
}


System_Collections_Generic_List_int__o *WarBoardSquareIndexGroupMaster__GetStageList(
        WarBoardSquareIndexGroupMaster_o *this,
        int32_t id,
        int32_t stageId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  System_Collections_Generic_IEnumerator_T__o *v33; // [xsp+18h] [xbp-48h]

  if ( (byte_59398F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardSquareIndexGroupEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_WarBoardSquareIndexGroupEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_59398F0 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_WarBoardSquareIndexGroupEntity__GetEnumerator__);
  v33 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v11);
  for ( i = Enumerator; ; i = v33 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v33 )
      sub_21FFECC(v17, v18);
    v19 = v33->klass;
    v20 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardSquareIndexGroupEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_WarBoardSquareIndexGroupEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_2237E2C(v33, System_Collections_Generic_IEnumerator_WarBoardSquareIndexGroupEntity__TypeInfo, 0);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      v33,
                      *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_21FFECC(0, v24);
    if ( v23[4] == id && v23[5] == stageId )
    {
      if ( !v7
        || (items = v7->fields._items,
            v24 = (unsigned int)v23[6],
            v26 = Method_System_Collections_Generic_List_int__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_21FFECC(v23, v24);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          v24,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size] = v24;
      }
    }
  }
  if ( v33 )
  {
    v28 = v33->klass;
    v29 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_35;
      }
      v31 = (__int64)&v28->vtable[*v30];
    }
    else
    {
LABEL_35:
      v31 = sub_2237E2C(v33, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(v33, *(_QWORD *)(v31 + 8));
  }
  return v7;
}


bool WarBoardSquareIndexGroupMaster__TryGetEntity(
        WarBoardSquareIndexGroupMaster_o *this,
        WarBoardSquareIndexGroupEntity_o **entity,
        int32_t id,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59398F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__TryGetEntity__);
    byte_59398F3 = 1;
  }
  PK = (Il2CppObject *)WarBoardSquareIndexGroupEntity__CreatePK(id, stageId, squareIndex, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__TryGetEntity__);
}