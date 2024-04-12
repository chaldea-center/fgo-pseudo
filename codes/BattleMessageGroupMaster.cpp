void __fastcall BattleMessageGroupMaster___ctor(BattleMessageGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AC974 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
    byte_42AC974 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    409,
    (const MethodInfo_23E268C *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
}


BattleMessageGroupEntity_array *__fastcall BattleMessageGroupMaster__GetEntities(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  BattleMessageGroupMaster___c__DisplayClass3_0_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  BattleMessageGroupMaster___c_c *v9; // x0
  struct BattleMessageGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v12; // x22
  struct BattleMessageGroupMaster___c_StaticFields *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_42AC977 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
    sub_B52984(&Method_System_Func_DataEntityBase__BattleMessageGroupEntity___ctor__);
    sub_B52984(&Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
    sub_B52984(&System_Func_BattleMessageGroupEntity__bool__TypeInfo);
    sub_B52984(&System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo);
    sub_B52984(&Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__);
    sub_B52984(&Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_B52984(&BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
    sub_B52984(&BattleMessageGroupMaster___c_TypeInfo);
    byte_42AC977 = 1;
  }
  v5 = (BattleMessageGroupMaster___c__DisplayClass3_0_o *)sub_B52A54(BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
  BattleMessageGroupMaster___c__DisplayClass3_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.groupId = groupId;
  list = this->fields.list;
  v9 = BattleMessageGroupMaster___c_TypeInfo;
  if ( (BYTE3(BattleMessageGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageGroupMaster___c_TypeInfo);
    v9 = BattleMessageGroupMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v12,
      Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_DataEntityBase__BattleMessageGroupEntity___ctor__);
    v13 = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    v13->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageGroupEntity__o *)_9__3_0;
    sub_B52920(&v13->__9__3_0);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v14,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  return (BattleMessageGroupEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v16,
                                             (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_o *__fastcall BattleMessageGroupMaster__GetEntity(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AC975 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
    byte_42AC975 = 1;
  }
  PK = BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&messageId);
  return (BattleMessageGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23E2728 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMessageGroupMaster__TryGetEntity(
        BattleMessageGroupMaster_o *this,
        BattleMessageGroupEntity_o **entity,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AC976 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
    byte_42AC976 = 1;
  }
  PK = BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF51C & 1) == 0 )
  {
    sub_B52984(&BattleMessageGroupMaster___c_TypeInfo);
    byte_42AF51C = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleMessageGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleMessageGroupMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  __int64 v4; // x10

  if ( (byte_42AF51D & 1) == 0 )
  {
    sub_B52984(&BattleMessageGroupEntity_TypeInfo);
    byte_42AF51D = 1;
  }
  if ( !ent )
    return 0LL;
  v4 = *(&BattleMessageGroupEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (BattleMessageGroupEntity_c *)ent->klass->_2.typeHierarchy[v4 - 1] == BattleMessageGroupEntity_TypeInfo )
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