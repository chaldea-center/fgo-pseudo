void __fastcall WarGroupMaster___ctor(WarGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFB74 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__, method);
    byte_49FFB74 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    352,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarGroupMaster__CanUseContinueItem(
        WarGroupMaster_o *this,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w24
  int32_t Count; // w25
  __int64 methodPtr_low; // x10
  __int64 v17; // x8
  int32_t *v18; // x9

  if ( (byte_49FFB75 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1B64A00(&WarGroupEntity_TypeInfo, v12);
    byte_49FFB75 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1B64C5C(list, *(_QWORD *)&warId);
  v14 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= Count )
      return v14 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      methodPtr_low = LOBYTE(WarGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarGroupEntity_TypeInfo )
      {
        if ( !targetIds )
          goto LABEL_19;
        if ( (int)*(_QWORD *)&targetIds->max_length >= 1 )
        {
          v17 = (unsigned int)*(_QWORD *)&targetIds->max_length;
          v18 = &targetIds->m_Items[1];
          while ( LODWORD(list->fields.items) != *v18
               || HIDWORD(list->fields.items) != warId
               || LODWORD(list[1].klass) != questAfterClear
               || HIDWORD(list[1].klass) != questType )
          {
            --v17;
            ++v18;
            if ( !v17 )
              goto LABEL_18;
          }
          return v14 < Count;
        }
      }
    }
LABEL_18:
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
WarGroupEntity_o *__fastcall WarGroupMaster__GetEntity(
        WarGroupMaster_o *this,
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FFB72 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FFB72 = 1;
  }
  PK = (Il2CppObject *)WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questType);
  return (WarGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_30D6AF0 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarGroupMaster__HasEntity(
        WarGroupMaster_o *this,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v6; // x8
  bool v8; // w24
  DataMasterBase_o *v12; // x23
  unsigned __int64 v13; // x25
  System_String_o *PK; // x0

  if ( !targetIds )
    sub_1B64C5C(this, warId);
  v6 = *(_QWORD *)&targetIds->max_length;
  v8 = (int)v6 > 0;
  if ( (int)v6 >= 1 )
  {
    v12 = (DataMasterBase_o *)this;
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v6 )
        sub_1B64C64(this, *(_QWORD *)&warId);
      PK = WarGroupEntity__CreatePK(
             targetIds->m_Items[v13 + 1],
             warId,
             questAfterClear,
             questType,
             (const MethodInfo *)targetIds);
      this = (WarGroupMaster_o *)DataMasterBase__isEntityExistsFromId_38618764(v12, PK, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      LODWORD(v6) = targetIds->max_length;
      v8 = (__int64)++v13 < (int)v6;
    }
    while ( (__int64)v13 < (int)v6 );
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarGroupMaster__TryGetEntity(
        WarGroupMaster_o *this,
        WarGroupEntity_o **entity,
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FFB73 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__, entity);
    byte_49FFB73 = 1;
  }
  PK = (Il2CppObject *)WarGroupEntity__CreatePK(
                         id,
                         warId,
                         questAfterClear,
                         questType,
                         *(const MethodInfo **)&questAfterClear);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__);
}