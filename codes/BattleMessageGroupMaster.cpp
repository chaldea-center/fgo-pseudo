void __fastcall BattleMessageGroupMaster___ctor(BattleMessageGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F6AE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__, method);
    byte_40F6AE0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    408,
    (const MethodInfo_266F73C *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_array *__fastcall BattleMessageGroupMaster__GetEntities(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  BattleMessageGroupMaster___c__DisplayClass3_0_o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  BattleMessageGroupMaster___c_c *v23; // x0
  struct BattleMessageGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v26; // x22
  struct BattleMessageGroupMaster___c_StaticFields *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_40F6AE3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v8);
    sub_B16FFC(&Method_System_Func_DataEntityBase__BattleMessageGroupEntity___ctor__, v9);
    sub_B16FFC(&Method_System_Func_BattleMessageGroupEntity__bool___ctor__, v10);
    sub_B16FFC(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo, v12);
    sub_B16FFC(&Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, v13);
    sub_B16FFC(&Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__, v14);
    sub_B16FFC(&BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo, v15);
    sub_B16FFC(&BattleMessageGroupMaster___c_TypeInfo, v16);
    byte_40F6AE3 = 1;
  }
  v17 = (BattleMessageGroupMaster___c__DisplayClass3_0_o *)sub_B170CC(
                                                             BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo,
                                                             *(_QWORD *)&groupId,
                                                             method,
                                                             v3,
                                                             v4);
  BattleMessageGroupMaster___c__DisplayClass3_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_B170D4();
  v17->fields.groupId = groupId;
  list = this->fields.list;
  v23 = BattleMessageGroupMaster___c_TypeInfo;
  if ( (BYTE3(BattleMessageGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageGroupMaster___c_TypeInfo);
    v23 = BattleMessageGroupMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo,
                                                                                                v18,
                                                                                                v19,
                                                                                                v20,
                                                                                                v21);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v26,
      Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__BattleMessageGroupEntity___ctor__);
    v27 = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    v27->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageGroupEntity__o *)_9__3_0;
    sub_B16F98(&v27->__9__3_0, _9__3_0);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___);
  v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleMessageGroupEntity__bool__TypeInfo,
                                                                             v29,
                                                                             v30,
                                                                             v31,
                                                                             v32);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v33,
    (Il2CppObject *)v17,
    Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
  v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v28,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  return (BattleMessageGroupEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v34,
                                             (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_o *__fastcall BattleMessageGroupMaster__GetEntity(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F6AE1 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__,
      *(_QWORD *)&groupId);
    byte_40F6AE1 = 1;
  }
  PK = BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&messageId);
  return (BattleMessageGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266F7D8 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
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

  if ( (byte_40F6AE2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__,
      entity);
    byte_40F6AE2 = 1;
  }
  PK = BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9DDD & 1) == 0 )
  {
    sub_B16FFC(&BattleMessageGroupMaster___c_TypeInfo, v1);
    byte_40F9DDD = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleMessageGroupMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleMessageGroupMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F9DDE & 1) == 0 )
  {
    sub_B16FFC(&BattleMessageGroupEntity_TypeInfo, ent);
    byte_40F9DDE = 1;
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