void __fastcall WarGroupMaster___ctor(WarGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1728C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__, method, v2);
    byte_4B1728C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    352,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v16; // w24
  int32_t Count; // w25
  __int64 methodPtr_low; // x10
  __int64 v19; // x8
  int32_t *v20; // x9

  if ( (byte_4B1728D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&warId,
      *(_QWORD *)&questAfterClear);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12);
    sub_1BCA7E0(&WarGroupEntity_TypeInfo, v13, v14);
    byte_4B1728D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1BCAA3C(list, *(_QWORD *)&warId);
  v16 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v16 >= Count )
      return v16 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v16,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v19 = (unsigned int)*(_QWORD *)&targetIds->max_length;
          v20 = &targetIds->m_Items[1];
          while ( LODWORD(list->fields.items) != *v20
               || HIDWORD(list->fields.items) != warId
               || LODWORD(list[1].klass) != questAfterClear
               || HIDWORD(list[1].klass) != questType )
          {
            --v19;
            ++v20;
            if ( !v19 )
              goto LABEL_18;
          }
          return v16 < Count;
        }
      }
    }
LABEL_18:
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v16;
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

  if ( (byte_4B1728A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&warId);
    byte_4B1728A = 1;
  }
  PK = (Il2CppObject *)WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questType);
  return (WarGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31B3198 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__);
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
    sub_1BCAA3C(this, *(_QWORD *)&warId);
  v6 = *(_QWORD *)&targetIds->max_length;
  v8 = (int)v6 > 0;
  if ( (int)v6 >= 1 )
  {
    v12 = (DataMasterBase_o *)this;
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v6 )
        sub_1BCAA44(this, *(_QWORD *)&warId);
      PK = WarGroupEntity__CreatePK(
             targetIds->m_Items[v13 + 1],
             warId,
             questAfterClear,
             questType,
             (const MethodInfo *)targetIds);
      this = (WarGroupMaster_o *)DataMasterBase__isEntityExistsFromId_39651284(v12, PK, 0LL);
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

  if ( (byte_4B1728B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    byte_4B1728B = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__);
}