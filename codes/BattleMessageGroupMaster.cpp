void __fastcall BattleMessageGroupMaster___ctor(BattleMessageGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41843C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__, method);
    byte_41843C9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    408,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  BattleMessageGroupMaster___c_c *v19; // x0
  struct BattleMessageGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v22; // x22
  struct BattleMessageGroupMaster___c_StaticFields *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_41843CC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v6);
    sub_B2C35C(&Method_System_Func_DataEntityBase__BattleMessageGroupEntity___ctor__, v7);
    sub_B2C35C(&Method_System_Func_BattleMessageGroupEntity__bool___ctor__, v8);
    sub_B2C35C(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v9);
    sub_B2C35C(&System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo, v10);
    sub_B2C35C(&Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, v11);
    sub_B2C35C(&Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__, v12);
    sub_B2C35C(&BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo, v13);
    sub_B2C35C(&BattleMessageGroupMaster___c_TypeInfo, v14);
    byte_41843CC = 1;
  }
  v15 = (BattleMessageGroupMaster___c__DisplayClass3_0_o *)sub_B2C42C(BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
  BattleMessageGroupMaster___c__DisplayClass3_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B2C434(v16, v17);
  v15->fields.groupId = groupId;
  list = this->fields.list;
  v19 = BattleMessageGroupMaster___c_TypeInfo;
  if ( (BYTE3(BattleMessageGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageGroupMaster___c_TypeInfo);
    v19 = BattleMessageGroupMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v22,
      Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__BattleMessageGroupEntity___ctor__);
    v23 = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    v23->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageGroupEntity__o *)_9__3_0;
    sub_B2C2F8(&v23->__9__3_0, _9__3_0);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___);
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v15,
    Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v24,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  return (BattleMessageGroupEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v26,
                                             (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_o *__fastcall BattleMessageGroupMaster__GetEntity(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41843CA & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__,
      *(_QWORD *)&groupId);
    byte_41843CA = 1;
  }
  PK = BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&messageId);
  return (BattleMessageGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
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

  if ( (byte_41843CB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__,
      entity);
    byte_41843CB = 1;
  }
  PK = BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41871CC & 1) == 0 )
  {
    sub_B2C35C(&BattleMessageGroupMaster___c_TypeInfo, v1);
    byte_41871CC = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleMessageGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleMessageGroupMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_41871CD & 1) == 0 )
  {
    sub_B2C35C(&BattleMessageGroupEntity_TypeInfo, ent);
    byte_41871CD = 1;
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