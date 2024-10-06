void __fastcall CommandCardRankParamMaster___ctor(CommandCardRankParamMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FC56 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string___ctor__, method);
    byte_4A6FC56 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    280,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommandCardRankParamEntity_array *__fastcall CommandCardRankParamMaster__GetBeyondEntities(
        CommandCardRankParamMaster_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A6FC58 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&rank);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&CommandCardRankParamEntity_TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_CommandCardRankParamEntity__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_CommandCardRankParamEntity__ToArray__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_CommandCardRankParamEntity___ctor__, v9);
    sub_1B90010(&System_Collections_Generic_List_CommandCardRankParamEntity__TypeInfo, v10);
    byte_4A6FC58 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_CommandCardRankParamEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_CommandCardRankParamEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v12 = list;
    methodPtr_low = LOBYTE(CommandCardRankParamEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CommandCardRankParamEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandCardRankParamEntity_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( SLODWORD(list[1].monitor) >= rank )
    {
      if ( !v11 )
        goto LABEL_20;
      items = v11->fields._items;
      v19 = Method_System_Collections_Generic_List_CommandCardRankParamEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_20;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)list,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v12;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B9026C(list, v12);
  return (CommandCardRankParamEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v11,
                                               (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_CommandCardRankParamEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCardRankParamEntity_o *__fastcall CommandCardRankParamMaster__GetEntity(
        CommandCardRankParamMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A6FC54 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4A6FC54 = 1;
  }
  PK = (Il2CppObject *)CommandCardRankParamEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (CommandCardRankParamEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_312C900 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__GetEntity__);
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
  __int64 v6; // x1
  CommandCardRankParamEntity_o *result; // x0
  int32_t v8; // w25
  int32_t v9; // w21
  __int64 methodPtr_low; // x10
  int32_t rankMaxParam; // w8
  int32_t v12; // w8

  if ( (byte_4A6FC57 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&param);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&CommandCardRankParamEntity_TypeInfo, v6);
    byte_4A6FC57 = 1;
  }
  result = (CommandCardRankParamEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_1B9026C(result, *(_QWORD *)&param);
  v8 = 0;
  v9 = 0;
  while ( v9 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (CommandCardRankParamEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (CommandCardRankParamEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                               (System_Collections_ObjectModel_Collection_T__o *)result,
                                               v9,
                                               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( v8 <= param )
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
    v12 = result->fields.rankMaxParam;
    result = (CommandCardRankParamEntity_o *)this->fields.list;
    ++v9;
    v8 = v12 + 1;
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

  if ( (byte_4A6FC55 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__TryGetEntity__,
      entity);
    byte_4A6FC55 = 1;
  }
  PK = (Il2CppObject *)CommandCardRankParamEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__TryGetEntity__);
}