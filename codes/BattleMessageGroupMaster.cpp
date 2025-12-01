void BattleMessageGroupMaster___ctor(BattleMessageGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7018 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
    byte_4CC7018 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    416,
    (const MethodInfo_340B614 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
}


BattleMessageGroupEntity_array *BattleMessageGroupMaster__GetEntities(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  BattleMessageGroupMaster___c_c *v9; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v11; // x22
  struct BattleMessageGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_object__bool__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4CC701B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__BattleMessageGroupEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
    sub_1C713B0(&System_Func_BattleMessageGroupEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__TypeInfo);
    sub_1C713B0(&Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__);
    sub_1C713B0(&Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_1C713B0(&BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C713B0(&BattleMessageGroupMaster___c_TypeInfo);
    byte_4CC701B = 1;
  }
  v5 = sub_1C715FC(BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = groupId;
  list = this->fields.list;
  v9 = BattleMessageGroupMaster___c_TypeInfo;
  if ( !BattleMessageGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageGroupMaster___c_TypeInfo);
    v9 = BattleMessageGroupMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v9->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleMessageGroupMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v11, Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, 0);
    static_fields = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__o *)_9__3_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__BattleMessageGroupEntity___);
  v20 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0);
  v21 = System_Linq_Enumerable__Where_object_(
          v19,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  return (BattleMessageGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v21,
                                             (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_o *BattleMessageGroupMaster__GetEntity(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7019 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
    byte_4CC7019 = 1;
  }
  PK = (Il2CppObject *)BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&messageId);
  return (BattleMessageGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_340D938 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool BattleMessageGroupMaster__TryGetEntity(
        BattleMessageGroupMaster_o *this,
        BattleMessageGroupEntity_o **entity,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC701A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
    byte_4CC701A = 1;
  }
  PK = (Il2CppObject *)BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
}


void BattleMessageGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC701C & 1) == 0 )
  {
    sub_1C713B0(&BattleMessageGroupMaster___c_TypeInfo);
    byte_4CC701C = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BattleMessageGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMessageGroupMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageGroupMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattleMessageGroupMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleMessageGroupMaster___c___ctor(BattleMessageGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleMessageGroupEntity_o *BattleMessageGroupMaster___c___GetEntities_b__3_0(
        BattleMessageGroupMaster___c_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  return ent;
}


void BattleMessageGroupMaster___c__DisplayClass3_0___ctor(
        BattleMessageGroupMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleMessageGroupMaster___c__DisplayClass3_0___GetEntities_b__1(
        BattleMessageGroupMaster___c__DisplayClass3_0_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.groupId == this->fields.groupId;
}