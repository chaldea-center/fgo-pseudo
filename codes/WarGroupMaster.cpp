void WarGroupMaster___ctor(WarGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF8A1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__);
    byte_4CEF8A1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    358,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool WarGroupMaster__CanUseContinueItem(
        WarGroupMaster_o *this,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w24
  int32_t Count; // w25
  __int64 max_length; // x8
  int32_t *m_Items; // x9

  if ( (byte_4CEF8A2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarGroupEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarGroupEntity__get_Item__);
    byte_4CEF8A2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1C7BD40(list, *(_QWORD *)&warId);
  v12 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_WarGroupEntity__get_Count__);
    if ( v12 >= Count )
      return v12 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_WarGroupEntity__get_Item__);
    if ( list )
    {
      if ( !targetIds )
        goto LABEL_17;
      if ( (int)targetIds->max_length >= 1 )
      {
        max_length = (unsigned int)targetIds->max_length;
        m_Items = targetIds->m_Items;
        while ( LODWORD(list->fields.items) != *m_Items
             || HIDWORD(list->fields.items) != warId
             || LODWORD(list[1].klass) != questAfterClear
             || HIDWORD(list[1].klass) != questType )
        {
          --max_length;
          ++m_Items;
          if ( !max_length )
            goto LABEL_16;
        }
        return v12 < Count;
      }
    }
LABEL_16:
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
WarGroupEntity_o *WarGroupMaster__GetEntity(
        WarGroupMaster_o *this,
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF89F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__);
    byte_4CEF89F = 1;
  }
  PK = (Il2CppObject *)WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questType);
  return (WarGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_3432DB4 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__);
}


bool WarGroupMaster__HasEntity(
        WarGroupMaster_o *this,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        System_Int32_array *targetIds,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  il2cpp_array_size_t max_length; // x8
  bool v17; // w28
  WarGroupIgnoreMaster_o *v18; // x26
  unsigned __int64 v19; // x29
  int32_t v20; // w27
  System_String_o *PK; // x0

  if ( (byte_4CEF8A3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__isEntityExistsFromId__);
    byte_4CEF8A3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
  if ( !targetIds )
LABEL_15:
    sub_1C7BD40(Master_object, v14);
  max_length = targetIds->max_length;
  v17 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v18 = (WarGroupIgnoreMaster_o *)Master_object;
    v19 = 0;
    do
    {
      if ( v19 >= (unsigned int)max_length )
        sub_1C7BD48(Master_object);
      v20 = targetIds->m_Items[v19];
      PK = WarGroupEntity__CreatePK(v20, warId, questAfterClear, questType, v15);
      Master_object = (Il2CppObject *)DataMasterBase_object__object__object___isEntityExistsFromId_54732092(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_343253C *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__isEntityExistsFromId__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_15;
        Master_object = (Il2CppObject *)WarGroupIgnoreMaster__IsIgnoreQuest(v18, v20, questId, phase, v15);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
      }
      LODWORD(max_length) = targetIds->max_length;
      v17 = (__int64)++v19 < (int)max_length;
    }
    while ( (__int64)v19 < (int)max_length );
  }
  return v17;
}


// local variable allocation has failed, the output may be wrong!
bool WarGroupMaster__TryGetEntity(
        WarGroupMaster_o *this,
        WarGroupEntity_o **entity,
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF8A0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__);
    byte_4CEF8A0 = 1;
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
           (const MethodInfo_3432E00 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__);
}


bool WarGroupMaster__TryGetWarList(
        WarGroupMaster_o *this,
        WarGroupEntity_array **entities,
        int32_t warGroupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  System_Func_object__bool__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Object_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CEF8A4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OfType_WarGroupEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_WarGroupEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_WarGroupEntity___);
    sub_1C7BAE8(&System_Func_WarGroupEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_WarGroupMaster___c__DisplayClass5_0__TryGetWarList_b__0__);
    sub_1C7BAE8(&WarGroupMaster___c__DisplayClass5_0_TypeInfo);
    byte_4CEF8A4 = 1;
  }
  v7 = sub_1C7BD34(WarGroupMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  *(_DWORD *)(v7 + 16) = warGroupId;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_319E9E0 *)Method_System_Linq_Enumerable_OfType_WarGroupEntity___);
  v11 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_WarGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarGroupMaster___c__DisplayClass5_0__TryGetWarList_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_WarGroupEntity___);
  v13 = System_Linq_Enumerable__ToArray_object_(
          v12,
          (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_WarGroupEntity___);
  *entities = (WarGroupEntity_array *)v13;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)entities, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0);
}


void WarGroupMaster___c__DisplayClass5_0___ctor(WarGroupMaster___c__DisplayClass5_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarGroupMaster___c__DisplayClass5_0___TryGetWarList_b__0(
        WarGroupMaster___c__DisplayClass5_0_o *this,
        WarGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return entity->fields.id == this->fields.warGroupId;
}