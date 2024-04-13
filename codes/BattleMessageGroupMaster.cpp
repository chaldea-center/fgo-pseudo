void __fastcall BattleMessageGroupMaster___ctor(BattleMessageGroupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5069 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E5069 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    409,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string___ctor__);
}


BattleMessageGroupEntity_array *__fastcall BattleMessageGroupMaster__GetEntities(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  BattleMessageGroupMaster___c__DisplayClass3_0_o *v36; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  BattleMessageGroupMaster___c_c *v40; // x0
  struct BattleMessageGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v43; // x22
  struct BattleMessageGroupMaster___c_StaticFields *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_42E506C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___,
      groupId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__BattleMessageGroupEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_BattleMessageGroupEntity__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__, v24, v25, v26);
    sub_B5D5C4(&Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__, v27, v28, v29);
    sub_B5D5C4(&BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&BattleMessageGroupMaster___c_TypeInfo, v33, v34, v35);
    byte_42E506C = 1;
  }
  v36 = (BattleMessageGroupMaster___c__DisplayClass3_0_o *)sub_B5D694(BattleMessageGroupMaster___c__DisplayClass3_0_TypeInfo);
  BattleMessageGroupMaster___c__DisplayClass3_0___ctor(v36, 0LL);
  if ( !v36 )
    sub_B5D69C(v37, v38);
  v36->fields.groupId = groupId;
  list = this->fields.list;
  v40 = BattleMessageGroupMaster___c_TypeInfo;
  if ( (BYTE3(BattleMessageGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageGroupMaster___c_TypeInfo);
    v40 = BattleMessageGroupMaster___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__BattleMessageGroupEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v43,
      Method_BattleMessageGroupMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__BattleMessageGroupEntity___ctor__);
    v44 = BattleMessageGroupMaster___c_TypeInfo->static_fields;
    v44->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageGroupEntity__o *)_9__3_0;
    sub_B5D560(&v44->__9__3_0);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageGroupEntity___);
  v46 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v46,
    (Il2CppObject *)v36,
    Method_BattleMessageGroupMaster___c__DisplayClass3_0__GetEntities_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
  v47 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v45,
          (System_Func_TSource__bool__o *)v46,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  return (BattleMessageGroupEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v47,
                                             (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageGroupEntity_o *__fastcall BattleMessageGroupMaster__GetEntity(
        BattleMessageGroupMaster_o *this,
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E506A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__,
      groupId,
      messageId,
      method);
    byte_42E506A = 1;
  }
  PK = BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&messageId);
  return (BattleMessageGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__GetEntity__);
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

  if ( (byte_42E506B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__,
      (_DWORD)entity,
      groupId,
      *(_QWORD *)&messageId);
    byte_42E506B = 1;
  }
  PK = BattleMessageGroupEntity__CreatePK(groupId, messageId, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_BattleMessageGroupMaster__BattleMessageGroupEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageGroupMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7CB8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleMessageGroupMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7CB8 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleMessageGroupMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleMessageGroupMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E7CB9 & 1) == 0 )
  {
    sub_B5D5C4(&BattleMessageGroupEntity_TypeInfo, (_DWORD)ent, (_DWORD)method, v3);
    byte_42E7CB9 = 1;
  }
  if ( !ent )
    return 0LL;
  v5 = *(&BattleMessageGroupEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (BattleMessageGroupEntity_c *)ent->klass->_2.typeHierarchy[v5 - 1] == BattleMessageGroupEntity_TypeInfo )
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