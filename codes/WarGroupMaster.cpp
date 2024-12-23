void __fastcall WarGroupMaster___ctor(WarGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67C90 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__, method);
    byte_4B67C90 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    356,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__);
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

  if ( (byte_4B67C91 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1BE4ACC(&WarGroupEntity_TypeInfo, v12);
    byte_4B67C91 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1BE4D28(list, *(_QWORD *)&warId);
  v14 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= Count )
      return v14 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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

  if ( (byte_4B67C8E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B67C8E = 1;
  }
  PK = (Il2CppObject *)WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questType);
  return (WarGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31FDB1C *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__);
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
    sub_1BE4D28(this, warId);
  v6 = *(_QWORD *)&targetIds->max_length;
  v8 = (int)v6 > 0;
  if ( (int)v6 >= 1 )
  {
    v12 = (DataMasterBase_o *)this;
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v6 )
        sub_1BE4D30(this, *(_QWORD *)&warId);
      PK = WarGroupEntity__CreatePK(
             targetIds->m_Items[v13 + 1],
             warId,
             questAfterClear,
             questType,
             (const MethodInfo *)targetIds);
      this = (WarGroupMaster_o *)DataMasterBase__isEntityExistsFromId_39849132(v12, PK, 0LL);
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

  if ( (byte_4B67C8F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__, entity);
    byte_4B67C8F = 1;
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
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__);
}


bool __fastcall WarGroupMaster__TryGetWarList(
        WarGroupMaster_o *this,
        WarGroupEntity_array **entities,
        int32_t warGroupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B67C92 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_WarGroupEntity___, entities);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_WarGroupEntity___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_WarGroupEntity___, v8);
    sub_1BE4ACC(&System_Func_WarGroupEntity__bool__TypeInfo, v9);
    sub_1BE4ACC(&Method_WarGroupMaster___c__DisplayClass5_0__TryGetWarList_b__0__, v10);
    sub_1BE4ACC(&WarGroupMaster___c__DisplayClass5_0_TypeInfo, v11);
    byte_4B67C92 = 1;
  }
  v12 = sub_1BE4D18(WarGroupMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BE4D28(v13, v14);
  *(_DWORD *)(v12 + 16) = warGroupId;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_WarGroupEntity___);
  v16 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_WarGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_WarGroupMaster___c__DisplayClass5_0__TryGetWarList_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_WarGroupEntity___);
  v18 = System_Linq_Enumerable__ToArray_object_(
          v17,
          (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_WarGroupEntity___);
  *entities = (WarGroupEntity_array *)v18;
  sub_1BE4A70((PartyOrganizationUtility_o *)entities, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*entities, 0LL);
}


void __fastcall WarGroupMaster___c__DisplayClass5_0___ctor(
        WarGroupMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarGroupMaster___c__DisplayClass5_0___TryGetWarList_b__0(
        WarGroupMaster___c__DisplayClass5_0_o *this,
        WarGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BE4D28(this, 0LL);
  return entity->fields.id == this->fields.warGroupId;
}