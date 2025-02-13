void __fastcall WarGroupMaster___ctor(WarGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD63D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__);
    byte_4BDD63D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    356,
    (const MethodInfo_325E55C *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w24
  int32_t Count; // w25
  __int64 v14; // x8
  int32_t *v15; // x9

  if ( (byte_4BDD63E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_WarGroupEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_WarGroupEntity__get_Item__);
    byte_4BDD63E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1C22094(list, *(_QWORD *)&warId);
  v12 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_WarGroupEntity__get_Count__);
    if ( v12 >= Count )
      return v12 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_WarGroupEntity__get_Item__);
    if ( list )
    {
      if ( !targetIds )
        goto LABEL_17;
      if ( (int)*(_QWORD *)&targetIds->max_length >= 1 )
      {
        v14 = (unsigned int)*(_QWORD *)&targetIds->max_length;
        v15 = &targetIds->m_Items[1];
        while ( LODWORD(list->fields.items) != *v15
             || HIDWORD(list->fields.items) != warId
             || LODWORD(list[1].klass) != questAfterClear
             || HIDWORD(list[1].klass) != questType )
        {
          --v14;
          ++v15;
          if ( !v14 )
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
WarGroupEntity_o *__fastcall WarGroupMaster__GetEntity(
        WarGroupMaster_o *this,
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDD63B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__);
    byte_4BDD63B = 1;
  }
  PK = (Il2CppObject *)WarGroupEntity__CreatePK(id, warId, questAfterClear, questType, *(const MethodInfo **)&questType);
  return (WarGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_3260880 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__GetEntity__);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x23
  __int64 v11; // x8
  bool v12; // w24
  unsigned __int64 v13; // x25
  System_String_o *PK; // x0

  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_4BDD63F & 1) == 0 )
  {
    this = (WarGroupMaster_o *)sub_1C21E38(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__isEntityExistsFromId__);
    byte_4BDD63F = 1;
  }
  if ( !targetIds )
    sub_1C22094(this, *(_QWORD *)&warId);
  v11 = *(_QWORD *)&targetIds->max_length;
  v12 = (int)v11 > 0;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v11 )
        sub_1C2209C(this, *(_QWORD *)&warId);
      PK = WarGroupEntity__CreatePK(
             targetIds->m_Items[v13 + 1],
             warId,
             questAfterClear,
             questType,
             (const MethodInfo *)targetIds);
      this = (WarGroupMaster_o *)DataMasterBase_object__object__object___isEntityExistsFromId_52822024(
                                   v10,
                                   PK,
                                   (const MethodInfo_3260008 *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__isEntityExistsFromId__);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      LODWORD(v11) = targetIds->max_length;
      v12 = (__int64)++v13 < (int)v11;
    }
    while ( (__int64)v13 < (int)v11 );
  }
  return v12;
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

  if ( (byte_4BDD63C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__);
    byte_4BDD63C = 1;
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
           (const MethodInfo_32608CC *)Method_DataMasterBase_WarGroupMaster__WarGroupEntity__string__TryGetEntity__);
}


bool __fastcall WarGroupMaster__TryGetWarList(
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BDD640 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_WarGroupEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_WarGroupEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_WarGroupEntity___);
    sub_1C21E38(&System_Func_WarGroupEntity__bool__TypeInfo);
    sub_1C21E38(&Method_WarGroupMaster___c__DisplayClass5_0__TryGetWarList_b__0__);
    sub_1C21E38(&WarGroupMaster___c__DisplayClass5_0_TypeInfo);
    byte_4BDD640 = 1;
  }
  v7 = sub_1C22084(WarGroupMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = warGroupId;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_WarGroupEntity___);
  v11 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarGroupMaster___c__DisplayClass5_0__TryGetWarList_b__0__,
    0LL);
  v12 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_WarGroupEntity___);
  v13 = System_Linq_Enumerable__ToArray_object_(
          v12,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_WarGroupEntity___);
  *entities = (WarGroupEntity_array *)v13;
  sub_1C21DDC((PartyOrganizationUtility_o *)entities, (int64_t)v13, v14, v15, v16, v17, v18, v19);
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
    sub_1C22094(this, 0LL);
  return entity->fields.id == this->fields.warGroupId;
}