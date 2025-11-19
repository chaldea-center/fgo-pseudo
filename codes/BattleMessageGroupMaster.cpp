void BattleMessageGroupMaster___ctor(BattleMessageGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5EF6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
    byte_4CB5EF6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    416,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
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
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4CB5EF9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__BattleMessageGroupEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
    sub_1C6BA08(&System_Func_BattleMessageGroupEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__TypeInfo);
    sub_1C6BA08(&Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__);
    sub_1C6BA08(&Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_1C6BA08(&BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C6BA08(&BattleMessageGroupMaster___c_TypeInfo);
    byte_4CB5EF9 = 1;
  }
  v5 = sub_1C6BC54(BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
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
    _9__3_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v11, Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, 0);
    static_fields = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__o *)_9__3_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__BattleMessageGroupEntity___);
  v16 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  return (BattleMessageGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v17,
                                             (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_o *BattleMessageGroupMaster__GetEntity(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB5EF7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
    byte_4CB5EF7 = 1;
  }
  PK = (Il2CppObject *)BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&messageId);
  return (BattleMessageGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33FDB94 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
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

  if ( (byte_4CB5EF8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
    byte_4CB5EF8 = 1;
  }
  PK = (Il2CppObject *)BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
}


void BattleMessageGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB5EFA & 1) == 0 )
  {
    sub_1C6BA08(&BattleMessageGroupMaster___c_TypeInfo);
    byte_4CB5EFA = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleMessageGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMessageGroupMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageGroupMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleMessageGroupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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