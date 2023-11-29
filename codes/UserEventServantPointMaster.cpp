void __fastcall UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9691 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__, method);
    byte_40F9691 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    399,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetBestServantPointEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  UserEventServantPointMaster___c__DisplayClass3_0_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x19
  WebViewManager_o *Instance; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v49; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x22
  Il2CppObject *v52; // x23
  struct UserEventServantPointMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v65; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  UserEventServantPointMaster___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x20
  struct UserEventServantPointMaster___c_StaticFields *v73; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_2; // x21
  Il2CppObject *v75; // x22
  struct UserEventServantPointMaster___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v83; // x20
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v88; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0

  if ( (byte_40F9692 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, userId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v13);
    sub_B16FFC(&Method_System_Func_UserEventServantPointEntity__bool___ctor__, v14);
    sub_B16FFC(&Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__, v15);
    sub_B16FFC(&Method_System_Func_UserEventServantPointEntity__int___ctor__, v16);
    sub_B16FFC(&Method_System_Func_UserEventServantPointEntity__long___ctor__, v17);
    sub_B16FFC(&System_Func_UserEventServantPointEntity__long__TypeInfo, v18);
    sub_B16FFC(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v19);
    sub_B16FFC(&System_Func_UserEventServantPointEntity__int__TypeInfo, v20);
    sub_B16FFC(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__, v23);
    sub_B16FFC(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__, v24);
    sub_B16FFC(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__, v25);
    sub_B16FFC(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo, v26);
    sub_B16FFC(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__, v27);
    sub_B16FFC(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v28);
    sub_B16FFC(&UserEventServantPointMaster___c_TypeInfo, v29);
    byte_40F9692 = 1;
  }
  v30 = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_B170CC(
                                                                UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo,
                                                                userId,
                                                                *(_QWORD *)&eventId,
                                                                method,
                                                                v4);
  UserEventServantPointMaster___c__DisplayClass3_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_25;
  v30->fields.userId = userId;
  v30->fields.eventId = eventId;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0LL;
  v35 = sub_B170CC(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v31, v32, v33, v34);
  UserEventServantPointMaster___c__DisplayClass3_1___ctor(
    (UserEventServantPointMaster___c__DisplayClass3_1_o *)v35,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___),
        !v35) )
  {
LABEL_25:
    sub_B170D4();
  }
  *(_QWORD *)(v35 + 16) = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v35 + 16),
    MasterData_WarQuestSelectionMaster,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  list = this->fields.list;
  v49 = UserEventServantPointMaster___c_TypeInfo;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v49 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v49->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo,
                                                                                                v44,
                                                                                                v45,
                                                                                                v46,
                                                                                                v47);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v52,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    v53 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v53->__9__3_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v53->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_UserEventServantPointEntity__bool__TypeInfo,
                                                                             v61,
                                                                             v62,
                                                                             v63,
                                                                             v64);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v65,
    (Il2CppObject *)v30,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_UserEventServantPointEntity__bool___ctor__);
  v66 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v60,
          (System_Func_TSource__bool__o *)v65,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v71 = UserEventServantPointMaster___c_TypeInfo;
  v72 = v66;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v71 = UserEventServantPointMaster___c_TypeInfo;
  }
  v73 = v71->static_fields;
  _9__3_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v73->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v73 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)v73->__9;
    _9__3_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B170CC(
                                                                              System_Func_UserEventServantPointEntity__long__TypeInfo,
                                                                              v67,
                                                                              v68,
                                                                              v69,
                                                                              v70);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_2,
      v75,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      (const MethodInfo_2B6BEAC *)Method_System_Func_UserEventServantPointEntity__long___ctor__);
    v76 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v76->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v76->__9__3_2,
      (System_Int32_array **)_9__3_2,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
  v83 = System_Linq_Enumerable__OrderByDescending_UserEventServantPointEntity__long_(
          v72,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_19BDB00 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v88 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                          System_Func_UserEventServantPointEntity__int__TypeInfo,
                                                                          v84,
                                                                          v85,
                                                                          v86,
                                                                          v87);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v88,
    (Il2CppObject *)v35,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_UserEventServantPointEntity__int___ctor__);
  v89 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v83,
                                                               (System_Func_TSource__TKey__o *)v88,
                                                               (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                            v89,
                                            (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x1

  if ( (byte_40F968F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__,
      userId);
    sub_B16FFC(&UserEventServantPointEntity_TypeInfo, v9);
    byte_40F968F = 1;
  }
  if ( (BYTE3(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  }
  PK = UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&svtId);
  return (UserEventServantPointEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventServantPointMaster__IsAnyExist(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UserEventServantPointMaster___c__DisplayClass4_0_o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v25; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x21
  Il2CppObject *v28; // x22
  struct UserEventServantPointMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0

  if ( (byte_40F9693 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_DataEntityBase___, userId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v10);
    sub_B16FFC(&Method_System_Func_UserEventServantPointEntity__bool___ctor__, v11);
    sub_B16FFC(&Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__, v12);
    sub_B16FFC(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v13);
    sub_B16FFC(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v14);
    sub_B16FFC(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, v15);
    sub_B16FFC(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__, v16);
    sub_B16FFC(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo, v17);
    sub_B16FFC(&UserEventServantPointMaster___c_TypeInfo, v18);
    byte_40F9693 = 1;
  }
  v19 = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_B170CC(
                                                                UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo,
                                                                userId,
                                                                *(_QWORD *)&eventId,
                                                                method,
                                                                v4);
  UserEventServantPointMaster___c__DisplayClass4_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B170D4();
  v19->fields.userId = userId;
  v19->fields.eventId = eventId;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0;
  list = this->fields.list;
  v25 = UserEventServantPointMaster___c_TypeInfo;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v25 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo,
                                                                                                v20,
                                                                                                v21,
                                                                                                v22,
                                                                                                v23);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v28,
      Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    v29 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v29->__9__4_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_UserEventServantPointEntity__bool__TypeInfo,
                                                                             v37,
                                                                             v38,
                                                                             v39,
                                                                             v40);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v41,
    (Il2CppObject *)v19,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_UserEventServantPointEntity__bool___ctor__);
  v42 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v36,
          (System_Func_TSource__bool__o *)v41,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           v42,
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
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
  __int64 v11; // x1
  System_String_o *PK; // x2

  if ( (byte_40F9690 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__,
      entity);
    sub_B16FFC(&UserEventServantPointEntity_TypeInfo, v11);
    byte_40F9690 = 1;
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
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void __fastcall UserEventServantPointMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F797E & 1) == 0 )
  {
    sub_B16FFC(&UserEventServantPointMaster___c_TypeInfo, v1);
    byte_40F797E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserEventServantPointMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserEventServantPointMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F797F & 1) == 0 )
  {
    sub_B16FFC(&UserEventServantPointEntity_TypeInfo, entity);
    byte_40F797F = 1;
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
    sub_B170D4();
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40F7980 & 1) == 0 )
  {
    sub_B16FFC(&UserEventServantPointEntity_TypeInfo, entity);
    byte_40F7980 = 1;
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
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_40F7981 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, svtPointEnt);
    byte_40F7981 = 1;
  }
  if ( !svtPointEnt )
    sub_B170D4();
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v7, 0LL) == this->fields.userId
      && svtPointEnt->fields.eventId == this->fields.eventId;
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
  struct ServantMaster_o *svtMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F7982 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, svtPointEnt);
    byte_40F7982 = 1;
  }
  if ( !svtPointEnt
    || (svtMaster = this->fields.svtMaster) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)svtMaster,
                   svtPointEnt->fields.svtId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return Entity[1].fields.startType;
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
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_40F7983 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, svtPointEnt);
    byte_40F7983 = 1;
  }
  if ( !svtPointEnt )
    sub_B170D4();
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v7, 0LL) == this->fields.userId
      && svtPointEnt->fields.eventId == this->fields.eventId;
}