void __fastcall UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389CCB & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
    byte_4389CCB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    400,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetBestServantPointEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass3_0_o *v7; // x21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v18; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x22
  Il2CppObject *v21; // x23
  struct UserEventServantPointMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  UserEventServantPointMaster___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  struct UserEventServantPointMaster___c_StaticFields *v34; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_2; // x21
  Il2CppObject *v36; // x22
  struct UserEventServantPointMaster___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v45; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0

  if ( (byte_4389CCC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_DataEntityBase___);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
    sub_B775C4(&Method_System_Func_UserEventServantPointEntity__bool___ctor__);
    sub_B775C4(&Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    sub_B775C4(&Method_System_Func_UserEventServantPointEntity__int___ctor__);
    sub_B775C4(&Method_System_Func_UserEventServantPointEntity__long___ctor__);
    sub_B775C4(&System_Func_UserEventServantPointEntity__long__TypeInfo);
    sub_B775C4(&System_Func_UserEventServantPointEntity__bool__TypeInfo);
    sub_B775C4(&System_Func_UserEventServantPointEntity__int__TypeInfo);
    sub_B775C4(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__);
    sub_B775C4(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__);
    sub_B775C4(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__);
    sub_B775C4(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
    sub_B775C4(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__);
    sub_B775C4(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
    sub_B775C4(&UserEventServantPointMaster___c_TypeInfo);
    byte_4389CCC = 1;
  }
  v7 = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_B77694(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
  UserEventServantPointMaster___c__DisplayClass3_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_25;
  v7->fields.userId = userId;
  v7->fields.eventId = eventId;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0LL;
  v10 = sub_B77694(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
  UserEventServantPointMaster___c__DisplayClass3_1___ctor(
    (UserEventServantPointMaster___c__DisplayClass3_1_o *)v10,
    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___),
        !v10) )
  {
LABEL_25:
    sub_B7769C(Instance, v9);
  }
  *(_QWORD *)(v10 + 16) = Instance;
  sub_B77560((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)Instance, v11, v12, v13, v14, v15, v16);
  list = this->fields.list;
  v18 = UserEventServantPointMaster___c_TypeInfo;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v18 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v21,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      (const MethodInfo_29EAA10 *)Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    v22 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v22->__9__3_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__3_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v22->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v7,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    (const MethodInfo_29E92C4 *)Method_System_Func_UserEventServantPointEntity__bool___ctor__);
  v31 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v29,
          (System_Func_TSource__bool__o *)v30,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v32 = UserEventServantPointMaster___c_TypeInfo;
  v33 = v31;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v32 = UserEventServantPointMaster___c_TypeInfo;
  }
  v34 = v32->static_fields;
  _9__3_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v34->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v34 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__3_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B77694(System_Func_UserEventServantPointEntity__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_2,
      v36,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      (const MethodInfo_29EA630 *)Method_System_Func_UserEventServantPointEntity__long___ctor__);
    v37 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v37->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_B77560(
      (BattleServantConfConponent_o *)&v37->__9__3_2,
      (System_Int32_array **)_9__3_2,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = System_Linq_Enumerable__OrderByDescending_UserEventServantPointEntity__long_(
          v33,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_1D34E30 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v45 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_UserEventServantPointEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v45,
    (Il2CppObject *)v10,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    (const MethodInfo_29E9E70 *)Method_System_Func_UserEventServantPointEntity__int___ctor__);
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v44,
                                                               (System_Func_TSource__TKey__o *)v45,
                                                               (const MethodInfo_1D3CDB0 *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                            v46,
                                            (const MethodInfo_1D31514 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4389CC9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
    sub_B775C4(&UserEventServantPointEntity_TypeInfo);
    byte_4389CC9 = 1;
  }
  if ( (BYTE3(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  }
  PK = UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&svtId);
  return (UserEventServantPointEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


bool __fastcall UserEventServantPointMaster__IsAnyExist(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass4_0_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v11; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x21
  Il2CppObject *v14; // x22
  struct UserEventServantPointMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4389CCD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Any_DataEntityBase___);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
    sub_B775C4(&Method_System_Func_UserEventServantPointEntity__bool___ctor__);
    sub_B775C4(&Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    sub_B775C4(&System_Func_UserEventServantPointEntity__bool__TypeInfo);
    sub_B775C4(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    sub_B775C4(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__);
    sub_B775C4(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__);
    sub_B775C4(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
    sub_B775C4(&UserEventServantPointMaster___c_TypeInfo);
    byte_4389CCD = 1;
  }
  v7 = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_B77694(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
  UserEventServantPointMaster___c__DisplayClass4_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  v7->fields.userId = userId;
  v7->fields.eventId = eventId;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0;
  list = this->fields.list;
  v11 = UserEventServantPointMaster___c_TypeInfo;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v11 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v14,
      Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__,
      (const MethodInfo_29EAA10 *)Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    v15 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v15->__9__4_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__4_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v15->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v7,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    (const MethodInfo_29E92C4 *)Method_System_Func_UserEventServantPointEntity__bool___ctor__);
  v24 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v22,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           v24,
           (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventServantPointMaster__TryGetEntity(
        UserEventServantPointMaster_o *this,
        UserEventServantPointEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4389CCA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
    sub_B775C4(&UserEventServantPointEntity_TypeInfo);
    byte_4389CCA = 1;
  }
  if ( (BYTE3(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  }
  PK = UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void __fastcall UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0

  if ( (byte_43888E8 & 1) == 0 )
  {
    sub_B775C4(&UserEventServantPointMaster___c_TypeInfo);
    byte_43888E8 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(UserEventServantPointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall UserEventServantPointMaster___c___ctor(
        UserEventServantPointMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___GetBestServantPointEntity_b__3_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_43888E9 & 1) == 0 )
  {
    sub_B775C4(&UserEventServantPointEntity_TypeInfo);
    byte_43888E9 = 1;
  }
  if ( !entity )
    return 0LL;
  v4 = *(&UserEventServantPointEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserEventServantPointEntity_c *)entity->klass->_2.typeHierarchy[v4 - 1] == UserEventServantPointEntity_TypeInfo )
    return (UserEventServantPointEntity_o *)entity;
  return 0LL;
}


int64_t __fastcall UserEventServantPointMaster___c___GetBestServantPointEntity_b__3_2(
        UserEventServantPointMaster___c_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  if ( !svtPointEnt )
    sub_B7769C(this, 0LL);
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_43888EA & 1) == 0 )
  {
    sub_B775C4(&UserEventServantPointEntity_TypeInfo);
    byte_43888EA = 1;
  }
  if ( !entity )
    return 0LL;
  v4 = *(&UserEventServantPointEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserEventServantPointEntity_c *)entity->klass->_2.typeHierarchy[v4 - 1] == UserEventServantPointEntity_TypeInfo )
    return (UserEventServantPointEntity_o *)entity;
  return 0LL;
}


void __fastcall UserEventServantPointMaster___c__DisplayClass3_0___ctor(
        UserEventServantPointMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventServantPointMaster___c__DisplayClass3_0___GetBestServantPointEntity_b__1(
        UserEventServantPointMaster___c__DisplayClass3_0_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass3_0_o *v4; // x20
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_43888EB & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43888EB = 1;
  }
  if ( !svtPointEnt )
    sub_B7769C(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}


void __fastcall UserEventServantPointMaster___c__DisplayClass3_1___ctor(
        UserEventServantPointMaster___c__DisplayClass3_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserEventServantPointMaster___c__DisplayClass3_1___GetBestServantPointEntity_b__3(
        UserEventServantPointMaster___c__DisplayClass3_1_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass3_1_o *v4; // x20

  v4 = this;
  if ( (byte_43888EC & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_43888EC = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0LL
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7769C(this, svtPointEnt);
  }
  return (int32_t)this[8].fields.svtMaster;
}


void __fastcall UserEventServantPointMaster___c__DisplayClass4_0___ctor(
        UserEventServantPointMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventServantPointMaster___c__DisplayClass4_0___IsAnyExist_b__1(
        UserEventServantPointMaster___c__DisplayClass4_0_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass4_0_o *v4; // x20
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_43888ED & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43888ED = 1;
  }
  if ( !svtPointEnt )
    sub_B7769C(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}