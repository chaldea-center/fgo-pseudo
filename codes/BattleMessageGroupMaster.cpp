void __fastcall BattleMessageGroupMaster___ctor(BattleMessageGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__, method, v2);
    byte_4B15E7F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    410,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_array *__fastcall BattleMessageGroupMaster__GetEntities(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  BattleMessageGroupMaster___c_c *v28; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v30; // x22
  struct BattleMessageGroupMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_object__bool__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_4B15E82 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___,
      *(_QWORD *)&groupId,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, v14, v15);
    sub_1BCA7E0(&Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__, v16, v17);
    sub_1BCA7E0(&BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleMessageGroupMaster___c_TypeInfo, v20, v21);
    byte_4B15E82 = 1;
  }
  v22 = sub_1BCAA2C(BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&groupId, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    sub_1BCAA3C(v23, v24);
  *(_DWORD *)(v22 + 16) = groupId;
  list = this->fields.list;
  v28 = BattleMessageGroupMaster___c_TypeInfo;
  if ( !BattleMessageGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageGroupMaster___c_TypeInfo, v24);
    v28 = BattleMessageGroupMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v28->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v24);
      v28 = BattleMessageGroupMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo,
                                                 v24,
                                                 v25,
                                                 v26);
    System_Func_object__object____ctor(_9__3_0, v30, Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, 0LL);
    static_fields = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageGroupEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v32, v33, v34, v35, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___);
  v42 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleMessageGroupEntity__bool__TypeInfo, v39, v40, v41);
  System_Func_object__bool____ctor(
    v42,
    (Il2CppObject *)v22,
    Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0LL);
  v43 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  return (BattleMessageGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v43,
                                             (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_o *__fastcall BattleMessageGroupMaster__GetEntity(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15E80 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__,
      *(_QWORD *)&groupId,
      *(_QWORD *)&messageId);
    byte_4B15E80 = 1;
  }
  PK = (Il2CppObject *)BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&messageId);
  return (BattleMessageGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMessageGroupMaster__TryGetEntity(
        BattleMessageGroupMaster_o *this,
        BattleMessageGroupEntity_o **entity,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15E81 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&groupId);
    byte_4B15E81 = 1;
  }
  PK = (Il2CppObject *)BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15E83 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleMessageGroupMaster___c_TypeInfo, v1, v2);
    byte_4B15E83 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleMessageGroupMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleMessageGroupMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageGroupMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleMessageGroupMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleMessageGroupMaster___c___ctor(BattleMessageGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleMessageGroupEntity_o *__fastcall BattleMessageGroupMaster___c___GetEntities_b__3_0(
        BattleMessageGroupMaster___c_o *this,
        DataEntityBase_o *ent,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B15E84 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleMessageGroupEntity_TypeInfo, ent, method);
    byte_4B15E84 = 1;
  }
  if ( !ent )
    return 0LL;
  methodPtr_low = LOBYTE(BattleMessageGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ent->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (BattleMessageGroupEntity_c *)ent->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleMessageGroupEntity_TypeInfo )
    return (BattleMessageGroupEntity_o *)ent;
  return 0LL;
}


void __fastcall BattleMessageGroupMaster___c__DisplayClass3_0___ctor(
        BattleMessageGroupMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleMessageGroupMaster___c__DisplayClass3_0___GetEntities_b__1(
        BattleMessageGroupMaster___c__DisplayClass3_0_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.groupId == this->fields.groupId;
}