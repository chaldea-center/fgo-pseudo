void __fastcall UserEventQuestCooltimeMaster___ctor(UserEventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FABB8 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__,
      method);
    byte_40FABB8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    315,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__GetEntity(
        UserEventQuestCooltimeMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FABB6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__,
      userId);
    byte_40FABB6 = 1;
  }
  PK = UserEventQuestCooltimeEntity__CreatePK(userId, eventId, questId, phase, *(const MethodInfo **)&phase);
  return (UserEventQuestCooltimeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__GetEntityFromSpotId(
        UserEventQuestCooltimeMaster_o *this,
        int32_t spotId,
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
  UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v22; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x21
  Il2CppObject *v25; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x21

  if ( (byte_40FABBB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___, *(_QWORD *)&spotId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v7);
    sub_B16FFC(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v8);
    sub_B16FFC(&Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__, v9);
    sub_B16FFC(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v10);
    sub_B16FFC(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v11);
    sub_B16FFC(&Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__, v12);
    sub_B16FFC(&Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__, v13);
    sub_B16FFC(&UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo, v14);
    sub_B16FFC(&UserEventQuestCooltimeMaster___c_TypeInfo, v15);
    byte_40FABBB = 1;
  }
  v16 = (UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *)sub_B170CC(
                                                                 UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo,
                                                                 *(_QWORD *)&spotId,
                                                                 method,
                                                                 v3,
                                                                 v4);
  UserEventQuestCooltimeMaster___c__DisplayClass5_0___ctor(v16, 0LL);
  if ( !v16 )
    sub_B170D4();
  v16->fields.spotId = spotId;
  list = this->fields.list;
  v22 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v22 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                                                                v17,
                                                                                                v18,
                                                                                                v19,
                                                                                                v20);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v25,
      Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v26 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v26->__9__5_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo,
                                                                             v34,
                                                                             v35,
                                                                             v36,
                                                                             v37);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v38,
    (Il2CppObject *)v16,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             v33,
                                             (System_Func_TSource__bool__o *)v38,
                                             (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *__fastcall UserEventQuestCooltimeMaster__GetEntityList(
        UserEventQuestCooltimeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  UserEventQuestCooltimeMaster___c_c *v12; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x20
  Il2CppObject *v15; // x21
  struct UserEventQuestCooltimeMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40FABBA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___, v6);
    sub_B16FFC(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v7);
    sub_B16FFC(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v8);
    sub_B16FFC(&Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__, v9);
    sub_B16FFC(&UserEventQuestCooltimeMaster___c_TypeInfo, v10);
    byte_40FABBA = 1;
  }
  list = this->fields.list;
  v12 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v12 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                                                                method,
                                                                                                v2,
                                                                                                v3,
                                                                                                v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v15,
      Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v16 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v16->__9__4_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  return (System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              v23,
                                                                              (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventQuestCooltimeMaster__TryGetEntity(
        UserEventQuestCooltimeMaster_o *this,
        UserEventQuestCooltimeEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FABB7 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__,
      entity);
    byte_40FABB7 = 1;
  }
  PK = UserEventQuestCooltimeEntity__CreatePK(userId, eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__getEntity(
        UserEventQuestCooltimeMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v24; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v27; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v40; // x21

  if ( (byte_40FABB9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v9);
    sub_B16FFC(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v10);
    sub_B16FFC(&Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__, v11);
    sub_B16FFC(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v12);
    sub_B16FFC(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v13);
    sub_B16FFC(&Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, v14);
    sub_B16FFC(&Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__, v15);
    sub_B16FFC(&UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo, v16);
    sub_B16FFC(&UserEventQuestCooltimeMaster___c_TypeInfo, v17);
    byte_40FABB9 = 1;
  }
  v18 = (UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *)sub_B170CC(
                                                                 UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo,
                                                                 *(_QWORD *)&eventId,
                                                                 *(_QWORD *)&questId,
                                                                 *(_QWORD *)&phase,
                                                                 method);
  UserEventQuestCooltimeMaster___c__DisplayClass3_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B170D4();
  v18->fields.eventId = eventId;
  v18->fields.questId = questId;
  v18->fields.phase = phase;
  list = this->fields.list;
  v24 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v24 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                                                                v19,
                                                                                                v20,
                                                                                                v21,
                                                                                                v22);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v27,
      Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v28 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v28->__9__3_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v28->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo,
                                                                             v36,
                                                                             v37,
                                                                             v38,
                                                                             v39);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v40,
    (Il2CppObject *)v18,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             v35,
                                             (System_Func_TSource__bool__o *)v40,
                                             (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


void __fastcall UserEventQuestCooltimeMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F797A & 1) == 0 )
  {
    sub_B16FFC(&UserEventQuestCooltimeMaster___c_TypeInfo, v1);
    byte_40F797A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserEventQuestCooltimeMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall UserEventQuestCooltimeMaster___c___ctor(
        UserEventQuestCooltimeMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster___c___GetEntityFromSpotId_b__5_0(
        UserEventQuestCooltimeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40F797D & 1) == 0 )
  {
    sub_B16FFC(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_40F797D = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&UserEventQuestCooltimeEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == UserEventQuestCooltimeEntity_TypeInfo )
    return (UserEventQuestCooltimeEntity_o *)data;
  return 0LL;
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster___c___GetEntityList_b__4_0(
        UserEventQuestCooltimeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40F797C & 1) == 0 )
  {
    sub_B16FFC(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_40F797C = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&UserEventQuestCooltimeEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == UserEventQuestCooltimeEntity_TypeInfo )
    return (UserEventQuestCooltimeEntity_o *)data;
  return 0LL;
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster___c___getEntity_b__3_0(
        UserEventQuestCooltimeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40F797B & 1) == 0 )
  {
    sub_B16FFC(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_40F797B = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&UserEventQuestCooltimeEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == UserEventQuestCooltimeEntity_TypeInfo )
    return (UserEventQuestCooltimeEntity_o *)data;
  return 0LL;
}


void __fastcall UserEventQuestCooltimeMaster___c__DisplayClass3_0___ctor(
        UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventQuestCooltimeMaster___c__DisplayClass3_0___getEntity_b__1(
        UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *this,
        UserEventQuestCooltimeEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B170D4();
  return entity->fields.eventId == this->fields.eventId
      && entity->fields.questId == this->fields.questId
      && entity->fields.phase == this->fields.phase;
}


void __fastcall UserEventQuestCooltimeMaster___c__DisplayClass5_0___ctor(
        UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventQuestCooltimeMaster___c__DisplayClass5_0___GetEntityFromSpotId_b__1(
        UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *this,
        UserEventQuestCooltimeEntity_o *entity,
        const MethodInfo *method)
{
  QuestEntity_o *QuestEntity; // x0

  if ( !entity || (QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(entity, 0LL)) == 0LL )
    sub_B170D4();
  return QuestEntity->fields.spotId == this->fields.spotId;
}