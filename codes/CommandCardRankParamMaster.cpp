void __fastcall CommandCardRankParamMaster___ctor(CommandCardRankParamMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF4B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string___ctor__);
    byte_4A5AF4B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    280,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string___ctor__);
}


CommandCardRankParamEntity_array *__fastcall CommandCardRankParamMaster__GetBeyondEntities(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5AF4D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CommandCardRankParamEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommandCardRankParamEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommandCardRankParamEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommandCardRankParamEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CommandCardRankParamEntity__TypeInfo);
    byte_4A5AF4D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CommandCardRankParamEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CommandCardRankParamEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v6 = list;
    methodPtr_low = LOBYTE(CommandCardRankParamEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CommandCardRankParamEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandCardRankParamEntity_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( SLODWORD(list[1].monitor) >= rank )
    {
      if ( !v5 )
        goto LABEL_20;
      items = v5->fields._items;
      v13 = Method_System_Collections_Generic_List_CommandCardRankParamEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_20;
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v15[4] = (Il2CppClass *)v6;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1B8880C(list, v6);
  return (CommandCardRankParamEntity_array *)System_Collections_Generic_List_object___ToArray(
                                               v5,
                                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_CommandCardRankParamEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCardRankParamEntity_o *__fastcall CommandCardRankParamMaster__GetEntity(
        CommandCardRankParamMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AF49 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__GetEntity__);
    byte_4A5AF49 = 1;
  }
  PK = (Il2CppObject *)CommandCardRankParamEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (CommandCardRankParamEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_311DC8C *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__GetEntity__);
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
  CommandCardRankParamEntity_o *result; // x0
  int32_t v6; // w25
  int32_t v7; // w21
  __int64 methodPtr_low; // x10
  int32_t rankMaxParam; // w8
  int32_t v10; // w8

  if ( (byte_4A5AF4C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CommandCardRankParamEntity_TypeInfo);
    byte_4A5AF4C = 1;
  }
  result = (CommandCardRankParamEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_1B8880C(result, *(_QWORD *)&param);
  v6 = 0;
  v7 = 0;
  while ( v7 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (CommandCardRankParamEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (CommandCardRankParamEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                               (System_Collections_ObjectModel_Collection_T__o *)result,
                                               v7,
                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( v6 <= param )
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
    v10 = result->fields.rankMaxParam;
    result = (CommandCardRankParamEntity_o *)this->fields.list;
    ++v7;
    v6 = v10 + 1;
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

  if ( (byte_4A5AF4A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__TryGetEntity__);
    byte_4A5AF4A = 1;
  }
  PK = (Il2CppObject *)CommandCardRankParamEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__TryGetEntity__);
}