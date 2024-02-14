void __fastcall BattleMessageGroupMaster___ctor(BattleMessageGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4211187 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__, method);
    byte_4211187 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    408,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
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
  __int64 v13; // x1
  __int64 v14; // x1
  BattleMessageGroupMaster___c__DisplayClass3_0_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  BattleMessageGroupMaster___c_c *v20; // x0
  struct BattleMessageGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v23; // x22
  struct BattleMessageGroupMaster___c_StaticFields *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_421118A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___, *(_QWORD *)&groupId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v6);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__BattleMessageGroupEntity___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_BattleMessageGroupEntity__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, v11);
    sub_B0D8A4(&Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__, v12);
    sub_B0D8A4(&BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo, v13);
    sub_B0D8A4(&BattleMessageGroupMaster___c_TypeInfo, v14);
    byte_421118A = 1;
  }
  v15 = (BattleMessageGroupMaster___c__DisplayClass3_0_o *)sub_B0D974(
                                                             BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo,
                                                             *(_QWORD *)&groupId,
                                                             method);
  BattleMessageGroupMaster___c__DisplayClass3_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  v15->fields.groupId = groupId;
  list = this->fields.list;
  v20 = BattleMessageGroupMaster___c_TypeInfo;
  if ( (BYTE3(BattleMessageGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageGroupMaster___c_TypeInfo);
    v20 = BattleMessageGroupMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo,
                                                                                                v17,
                                                                                                v18);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v23,
      Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_261A104 *)Method_System_Func_DataEntityBase__BattleMessageGroupEntity___ctor__);
    v24 = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    v24->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageGroupEntity__o *)_9__3_0;
    sub_B0D840(&v24->__9__3_0, _9__3_0);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___);
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleMessageGroupEntity__bool__TypeInfo,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v15,
    Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v25,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  return (BattleMessageGroupEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v29,
                                             (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_o *__fastcall BattleMessageGroupMaster__GetEntity(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4211188 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__,
      *(_QWORD *)&groupId);
    byte_4211188 = 1;
  }
  PK = BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&messageId);
  return (BattleMessageGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266A024 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
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

  if ( (byte_4211189 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__,
      entity);
    byte_4211189 = 1;
  }
  PK = BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213BE3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleMessageGroupMaster___c_TypeInfo, v1);
    byte_4213BE3 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleMessageGroupMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleMessageGroupMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4213BE4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleMessageGroupEntity_TypeInfo, ent);
    byte_4213BE4 = 1;
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