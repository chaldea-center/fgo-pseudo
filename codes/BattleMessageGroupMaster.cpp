void BattleMessageGroupMaster___ctor(BattleMessageGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597045D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
    byte_597045D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    418,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
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
  struct BattleMessageGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v12; // x22
  struct BattleMessageGroupMaster___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_object__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_5970460 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__BattleMessageGroupEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
    sub_2213A60(&System_Func_BattleMessageGroupEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__TypeInfo);
    sub_2213A60(&Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__);
    sub_2213A60(&Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_2213A60(&BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
    sub_2213A60(&BattleMessageGroupMaster___c_TypeInfo);
    byte_5970460 = 1;
  }
  v5 = sub_2213CCC(BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = this->fields.list;
  *(_DWORD *)(v5 + 16) = groupId;
  v9 = BattleMessageGroupMaster___c_TypeInfo;
  if ( !*(&BattleMessageGroupMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageGroupMaster___c_TypeInfo, v7);
    v9 = BattleMessageGroupMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__3_0 = (System_Func_object__object__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      static_fields = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v12, Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, 0);
    v13 = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    v13->__9__3_0 = (struct System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__3_0, (int32_t)_9__3_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__BattleMessageGroupEntity___);
  v21 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0);
  v22 = System_Linq_Enumerable__Where_object_(
          v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  return (BattleMessageGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v22,
                                             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_o *BattleMessageGroupMaster__GetEntity(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_597045E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
    byte_597045E = 1;
  }
  PK = (Il2CppObject *)BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&messageId);
  return (BattleMessageGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3F157EC *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
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

  if ( (byte_597045F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
    byte_597045F = 1;
  }
  PK = (Il2CppObject *)BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
}


void BattleMessageGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970461 & 1) == 0 )
  {
    sub_2213A60(&BattleMessageGroupMaster___c_TypeInfo);
    byte_5970461 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleMessageGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMessageGroupMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageGroupMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleMessageGroupMaster___c_TypeInfo->static_fields,
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