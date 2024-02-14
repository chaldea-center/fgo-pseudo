void __fastcall UserEventQuestCooltimeMaster___ctor(UserEventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421369E & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__,
      method);
    byte_421369E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    315,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
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

  if ( (byte_421369C & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__,
      userId);
    byte_421369C = 1;
  }
  PK = UserEventQuestCooltimeEntity__CreatePK(userId, eventId, questId, phase, *(const MethodInfo **)&phase);
  return (UserEventQuestCooltimeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_266A024 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__GetEntityFromSpotId(
        UserEventQuestCooltimeMaster_o *this,
        int32_t spotId,
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
  UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v19; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x21
  Il2CppObject *v22; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v33; // x21

  if ( (byte_42136A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___, *(_QWORD *)&spotId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v5);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v6);
    sub_B0D8A4(&Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v8);
    sub_B0D8A4(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__, v10);
    sub_B0D8A4(&Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__, v11);
    sub_B0D8A4(&UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo, v12);
    sub_B0D8A4(&UserEventQuestCooltimeMaster___c_TypeInfo, v13);
    byte_42136A1 = 1;
  }
  v14 = (UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *)sub_B0D974(
                                                                 UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo,
                                                                 *(_QWORD *)&spotId,
                                                                 method);
  UserEventQuestCooltimeMaster___c__DisplayClass5_0___ctor(v14, 0LL);
  if ( !v14 )
    sub_B0D97C(v15);
  v14->fields.spotId = spotId;
  list = this->fields.list;
  v19 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v19 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                                                                v16,
                                                                                                v17);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v22,
      Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__,
      (const MethodInfo_261A104 *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v23 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v23->__9__5_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__5_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v23->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo,
                                                                             v31,
                                                                             v32);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v33,
    (Il2CppObject *)v14,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             v30,
                                             (System_Func_TSource__bool__o *)v33,
                                             (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *__fastcall UserEventQuestCooltimeMaster__GetEntityList(
        UserEventQuestCooltimeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  UserEventQuestCooltimeMaster___c_c *v10; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x20
  Il2CppObject *v13; // x21
  struct UserEventQuestCooltimeMaster___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_42136A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___, v4);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v5);
    sub_B0D8A4(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v6);
    sub_B0D8A4(&Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__, v7);
    sub_B0D8A4(&UserEventQuestCooltimeMaster___c_TypeInfo, v8);
    byte_42136A0 = 1;
  }
  list = this->fields.list;
  v10 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v10 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                                                                method,
                                                                                                v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v13,
      Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_261A104 *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v14 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v14->__9__4_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  return (System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              v21,
                                                                              (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
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

  if ( (byte_421369D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__,
      entity);
    byte_421369D = 1;
  }
  PK = UserEventQuestCooltimeEntity__CreatePK(userId, eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
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
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v23; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v26; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x21

  if ( (byte_421369F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v9);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v10);
    sub_B0D8A4(&Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v12);
    sub_B0D8A4(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, v14);
    sub_B0D8A4(&Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__, v15);
    sub_B0D8A4(&UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo, v16);
    sub_B0D8A4(&UserEventQuestCooltimeMaster___c_TypeInfo, v17);
    byte_421369F = 1;
  }
  v18 = (UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *)sub_B0D974(
                                                                 UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo,
                                                                 *(_QWORD *)&eventId,
                                                                 *(_QWORD *)&questId);
  UserEventQuestCooltimeMaster___c__DisplayClass3_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B0D97C(v19);
  v18->fields.eventId = eventId;
  v18->fields.questId = questId;
  v18->fields.phase = phase;
  list = this->fields.list;
  v23 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v23 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                                                                v20,
                                                                                                v21);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v26,
      Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__,
      (const MethodInfo_261A104 *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v27 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v27->__9__3_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo,
                                                                             v35,
                                                                             v36);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v37,
    (Il2CppObject *)v18,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             v34,
                                             (System_Func_TSource__bool__o *)v37,
                                             (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


void __fastcall UserEventQuestCooltimeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212619 & 1) == 0 )
  {
    sub_B0D8A4(&UserEventQuestCooltimeMaster___c_TypeInfo, v1);
    byte_4212619 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(UserEventQuestCooltimeMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserEventQuestCooltimeMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_421261C & 1) == 0 )
  {
    sub_B0D8A4(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_421261C = 1;
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

  if ( (byte_421261B & 1) == 0 )
  {
    sub_B0D8A4(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_421261B = 1;
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

  if ( (byte_421261A & 1) == 0 )
  {
    sub_B0D8A4(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_421261A = 1;
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
    sub_B0D97C(this);
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
  UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *v3; // x19

  if ( !entity
    || (v3 = this,
        (this = (UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *)UserEventQuestCooltimeEntity__GetQuestEntity(
                                                                         entity,
                                                                         0LL)) == 0LL) )
  {
    sub_B0D97C(this);
  }
  return LODWORD(this[2].klass) == v3->fields.spotId;
}