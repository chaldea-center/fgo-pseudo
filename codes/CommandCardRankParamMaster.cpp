void CommandCardRankParamMaster___ctor(CommandCardRankParamMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE45E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string___ctor__);
    byte_4CEE45E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    286,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string___ctor__);
}


CommandCardRankParamEntity_array *CommandCardRankParamMaster__GetBeyondEntities(
        CommandCardRankParamMaster_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CEE460 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_CommandCardRankParamEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_CommandCardRankParamEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommandCardRankParamEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommandCardRankParamEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommandCardRankParamEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_CommandCardRankParamEntity__TypeInfo);
    byte_4CEE460 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_CommandCardRankParamEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_CommandCardRankParamEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_CommandCardRankParamEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_CommandCardRankParamEntity__get_Item__);
    if ( !list )
      goto LABEL_18;
    v6 = list;
    if ( SLODWORD(list[1].monitor) >= rank )
    {
      if ( !v5 )
        goto LABEL_18;
      items = v5->fields._items;
      v16 = Method_System_Collections_Generic_List_CommandCardRankParamEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v6;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C7BD40(list, v6);
  return (CommandCardRankParamEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v5,
                                               (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_CommandCardRankParamEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCardRankParamEntity_o *CommandCardRankParamMaster__GetEntity(
        CommandCardRankParamMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEE45C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__GetEntity__);
    byte_4CEE45C = 1;
  }
  PK = (Il2CppObject *)CommandCardRankParamEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (CommandCardRankParamEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_3432DB4 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__GetEntity__);
}


int32_t CommandCardRankParamMaster__GetParamRank(
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
CommandCardRankParamEntity_o *CommandCardRankParamMaster__GetRankParamEntity(
        CommandCardRankParamMaster_o *this,
        int32_t param,
        const MethodInfo *method)
{
  CommandCardRankParamEntity_o *result; // x0
  int32_t v6; // w24
  int32_t v7; // w21
  int32_t rankMaxParam; // w8
  int32_t v9; // w8

  if ( (byte_4CEE45F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_CommandCardRankParamEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_CommandCardRankParamEntity__get_Item__);
    byte_4CEE45F = 1;
  }
  result = (CommandCardRankParamEntity_o *)this->fields.list;
  if ( !result )
LABEL_14:
    sub_1C7BD40(result, *(_QWORD *)&param);
  v6 = 0;
  v7 = 0;
  while ( v7 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_CommandCardRankParamEntity__get_Count__) )
  {
    result = (CommandCardRankParamEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_14;
    result = (CommandCardRankParamEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                               (System_Collections_ObjectModel_Collection_T__o *)result,
                                               v7,
                                               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_CommandCardRankParamEntity__get_Item__);
    if ( v6 <= param )
    {
      if ( !result )
        goto LABEL_14;
      rankMaxParam = result->fields.rankMaxParam;
      if ( rankMaxParam >= param || rankMaxParam == -1 )
        return result;
    }
    else if ( !result )
    {
      goto LABEL_14;
    }
    v9 = result->fields.rankMaxParam;
    result = (CommandCardRankParamEntity_o *)this->fields.list;
    ++v7;
    v6 = v9 + 1;
    if ( !result )
      goto LABEL_14;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool CommandCardRankParamMaster__TryGetEntity(
        CommandCardRankParamMaster_o *this,
        CommandCardRankParamEntity_o **entity,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEE45D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__TryGetEntity__);
    byte_4CEE45D = 1;
  }
  PK = (Il2CppObject *)CommandCardRankParamEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__TryGetEntity__);
}