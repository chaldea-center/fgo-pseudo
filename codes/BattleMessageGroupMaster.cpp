void __fastcall BattleMessageGroupMaster___ctor(BattleMessageGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4357 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__, method);
    byte_4BB4357 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    414,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_array *__fastcall BattleMessageGroupMaster__GetEntities(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  BattleMessageGroupMaster___c_c *v17; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v19; // x22
  struct BattleMessageGroupMaster___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_object__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4BB435A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__BattleMessageGroupEntity___,
      *(_QWORD *)&groupId);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v6);
    sub_1C13D24(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v7);
    sub_1C13D24(&System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__TypeInfo, v8);
    sub_1C13D24(&Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, v9);
    sub_1C13D24(&Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__, v10);
    sub_1C13D24(&BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo, v11);
    sub_1C13D24(&BattleMessageGroupMaster___c_TypeInfo, v12);
    byte_4BB435A = 1;
  }
  v13 = sub_1C13F70(BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1C13F80(v14, v15);
  *(_DWORD *)(v13 + 16) = groupId;
  list = this->fields.list;
  v17 = BattleMessageGroupMaster___c_TypeInfo;
  if ( !BattleMessageGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageGroupMaster___c_TypeInfo);
    v17 = BattleMessageGroupMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v17->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BattleMessageGroupMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v19, Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, 0LL);
    static_fields = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattleMessageGroupEntity__BattleMessageGroupEntity__o *)_9__3_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__BattleMessageGroupEntity___);
  v28 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v13,
    Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          v27,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  return (BattleMessageGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v29,
                                             (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_o *__fastcall BattleMessageGroupMaster__GetEntity(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4358 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__,
      *(_QWORD *)&groupId);
    byte_4BB4358 = 1;
  }
  PK = (Il2CppObject *)BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&messageId);
  return (BattleMessageGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_323D0DC *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
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

  if ( (byte_4BB4359 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__,
      entity);
    byte_4BB4359 = 1;
  }
  PK = (Il2CppObject *)BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB435B & 1) == 0 )
  {
    sub_1C13D24(&BattleMessageGroupMaster___c_TypeInfo, v1);
    byte_4BB435B = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BattleMessageGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleMessageGroupMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageGroupMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattleMessageGroupMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleMessageGroupMaster___c___ctor(BattleMessageGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleMessageGroupEntity_o *__fastcall BattleMessageGroupMaster___c___GetEntities_b__3_0(
        BattleMessageGroupMaster___c_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  return ent;
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