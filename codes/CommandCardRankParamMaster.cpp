void __fastcall CommandCardRankParamMaster___ctor(CommandCardRankParamMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15FDB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string___ctor__,
      method,
      v2);
    byte_4B15FDB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    280,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommandCardRankParamEntity_array *__fastcall CommandCardRankParamMaster__GetBeyondEntities(
        CommandCardRankParamMaster_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B15FDD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&rank, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&CommandCardRankParamEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCardRankParamEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCardRankParamEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCardRankParamEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_CommandCardRankParamEntity__TypeInfo, v16, v17);
    byte_4B15FDD = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CommandCardRankParamEntity__TypeInfo,
                                                       *(_QWORD *)&rank,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CommandCardRankParamEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v21,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v19 = list;
    methodPtr_low = LOBYTE(CommandCardRankParamEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(CommandCardRankParamEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != CommandCardRankParamEntity_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( *(_DWORD *)(list + 32) >= rank )
    {
      if ( !v18 )
        goto LABEL_20;
      items = v18->fields._items;
      v30 = Method_System_Collections_Generic_List_CommandCardRankParamEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_20;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v19;
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v19, v22, v23, v24, v25, v26, v27);
      }
    }
    list = (int64_t)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v18 )
LABEL_20:
    sub_1BCAA3C(list, v19);
  return (CommandCardRankParamEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v18,
                                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_CommandCardRankParamEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCardRankParamEntity_o *__fastcall CommandCardRankParamMaster__GetEntity(
        CommandCardRankParamMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15FD9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&rank);
    byte_4B15FD9 = 1;
  }
  PK = (Il2CppObject *)CommandCardRankParamEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (CommandCardRankParamEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31B3198 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__GetEntity__);
}


int32_t __fastcall CommandCardRankParamMaster__GetParamRank(
        CommandCardRankParamMaster_o *this,
        int32_t param,
        const MethodInfo *method)
{
  CommandCardRankParamEntity_o *RankParamEntity; // x0

  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(this, param, method);
  if ( RankParamEntity )
    LODWORD(RankParamEntity) = RankParamEntity->fields.rank;
  return (int)RankParamEntity;
}


// local variable allocation has failed, the output may be wrong!
CommandCardRankParamEntity_o *__fastcall CommandCardRankParamMaster__GetRankParamEntity(
        CommandCardRankParamMaster_o *this,
        int32_t param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CommandCardRankParamEntity_o *result; // x0
  int32_t v10; // w25
  int32_t v11; // w21
  __int64 methodPtr_low; // x10
  int32_t rankMaxParam; // w8
  int32_t v14; // w8

  if ( (byte_4B15FDC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&param,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&CommandCardRankParamEntity_TypeInfo, v7, v8);
    byte_4B15FDC = 1;
  }
  result = (CommandCardRankParamEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_1BCAA3C(result, *(_QWORD *)&param);
  v10 = 0;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (CommandCardRankParamEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (CommandCardRankParamEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                               (System_Collections_ObjectModel_Collection_T__o *)result,
                                               v11,
                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CommandCardRankParamEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (CommandCardRankParamEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandCardRankParamEntity_TypeInfo )
          result = 0LL;
      }
      else
      {
        result = 0LL;
      }
    }
    if ( v10 <= param )
    {
      if ( !result )
        goto LABEL_19;
      rankMaxParam = result->fields.rankMaxParam;
      if ( rankMaxParam >= param || rankMaxParam == -1 )
        return result;
    }
    else if ( !result )
    {
      goto LABEL_19;
    }
    v14 = result->fields.rankMaxParam;
    result = (CommandCardRankParamEntity_o *)this->fields.list;
    ++v11;
    v10 = v14 + 1;
    if ( !result )
      goto LABEL_19;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandCardRankParamMaster__TryGetEntity(
        CommandCardRankParamMaster_o *this,
        CommandCardRankParamEntity_o **entity,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15FDA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B15FDA = 1;
  }
  PK = (Il2CppObject *)CommandCardRankParamEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__TryGetEntity__);
}