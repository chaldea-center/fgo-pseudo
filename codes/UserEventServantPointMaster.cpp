void __fastcall UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42136C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__, method);
    byte_42136C8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    399,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetBestServantPointEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
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
  UserEventServantPointMaster___c__DisplayClass3_0_o *v29; // x21
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x19
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v43; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x22
  Il2CppObject *v46; // x23
  struct UserEventServantPointMaster___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v57; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  UserEventServantPointMaster___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x20
  struct UserEventServantPointMaster___c_StaticFields *v63; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_2; // x21
  Il2CppObject *v65; // x22
  struct UserEventServantPointMaster___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v73; // x20
  __int64 v74; // x1
  __int64 v75; // x2
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v76; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0

  if ( (byte_42136C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, userId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v12);
    sub_B0D8A4(&Method_System_Func_UserEventServantPointEntity__bool___ctor__, v13);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Func_UserEventServantPointEntity__int___ctor__, v15);
    sub_B0D8A4(&Method_System_Func_UserEventServantPointEntity__long___ctor__, v16);
    sub_B0D8A4(&System_Func_UserEventServantPointEntity__long__TypeInfo, v17);
    sub_B0D8A4(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v18);
    sub_B0D8A4(&System_Func_UserEventServantPointEntity__int__TypeInfo, v19);
    sub_B0D8A4(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__, v22);
    sub_B0D8A4(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__, v23);
    sub_B0D8A4(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__, v24);
    sub_B0D8A4(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo, v25);
    sub_B0D8A4(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__, v26);
    sub_B0D8A4(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v27);
    sub_B0D8A4(&UserEventServantPointMaster___c_TypeInfo, v28);
    byte_42136C9 = 1;
  }
  v29 = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_B0D974(
                                                                UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo,
                                                                userId,
                                                                *(_QWORD *)&eventId);
  UserEventServantPointMaster___c__DisplayClass3_0___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_25;
  v29->fields.userId = userId;
  v29->fields.eventId = eventId;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0LL;
  v33 = sub_B0D974(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v31, v32);
  UserEventServantPointMaster___c__DisplayClass3_1___ctor(
    (UserEventServantPointMaster___c__DisplayClass3_1_o *)v33,
    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___),
        !v33) )
  {
LABEL_25:
    sub_B0D97C(Instance);
  }
  *(_QWORD *)(v33 + 16) = Instance;
  sub_B0D840((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)Instance, v34, v35, v36, v37, v38, v39);
  list = this->fields.list;
  v43 = UserEventServantPointMaster___c_TypeInfo;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v43 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo,
                                                                                                v40,
                                                                                                v41);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v46,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      (const MethodInfo_261A104 *)Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    v47 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v47->__9__3_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v47->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v57 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_UserEventServantPointEntity__bool__TypeInfo,
                                                                             v55,
                                                                             v56);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v57,
    (Il2CppObject *)v29,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_UserEventServantPointEntity__bool___ctor__);
  v58 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v54,
          (System_Func_TSource__bool__o *)v57,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v61 = UserEventServantPointMaster___c_TypeInfo;
  v62 = v58;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v61 = UserEventServantPointMaster___c_TypeInfo;
  }
  v63 = v61->static_fields;
  _9__3_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v63->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v63 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__3_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B0D974(
                                                                              System_Func_UserEventServantPointEntity__long__TypeInfo,
                                                                              v59,
                                                                              v60);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_2,
      v65,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      (const MethodInfo_2619D24 *)Method_System_Func_UserEventServantPointEntity__long___ctor__);
    v66 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v66->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v66->__9__3_2,
      (System_Int32_array **)_9__3_2,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  v73 = System_Linq_Enumerable__OrderByDescending_UserEventServantPointEntity__long_(
          v62,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_1B4ED44 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v76 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                          System_Func_UserEventServantPointEntity__int__TypeInfo,
                                                                          v74,
                                                                          v75);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v76,
    (Il2CppObject *)v33,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    (const MethodInfo_2619564 *)Method_System_Func_UserEventServantPointEntity__int___ctor__);
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v73,
                                                               (System_Func_TSource__TKey__o *)v76,
                                                               (const MethodInfo_1B55AEC *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                            v77,
                                            (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
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

  if ( (byte_42136C6 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__,
      userId);
    sub_B0D8A4(&UserEventServantPointEntity_TypeInfo, v9);
    byte_42136C6 = 1;
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
                                            (const MethodInfo_266A024 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventServantPointMaster__IsAnyExist(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  UserEventServantPointMaster___c__DisplayClass4_0_o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v23; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x21
  Il2CppObject *v26; // x22
  struct UserEventServantPointMaster___c_StaticFields *v27; // x0
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
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0

  if ( (byte_42136CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_DataEntityBase___, userId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v9);
    sub_B0D8A4(&Method_System_Func_UserEventServantPointEntity__bool___ctor__, v10);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__, v11);
    sub_B0D8A4(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v12);
    sub_B0D8A4(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, v14);
    sub_B0D8A4(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__, v15);
    sub_B0D8A4(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo, v16);
    sub_B0D8A4(&UserEventServantPointMaster___c_TypeInfo, v17);
    byte_42136CA = 1;
  }
  v18 = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_B0D974(
                                                                UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo,
                                                                userId,
                                                                *(_QWORD *)&eventId);
  UserEventServantPointMaster___c__DisplayClass4_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B0D97C(v19);
  v18->fields.userId = userId;
  v18->fields.eventId = eventId;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0;
  list = this->fields.list;
  v23 = UserEventServantPointMaster___c_TypeInfo;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v23 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo,
                                                                                                v20,
                                                                                                v21);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v26,
      Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__,
      (const MethodInfo_261A104 *)Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    v27 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v27->__9__4_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_UserEventServantPointEntity__bool__TypeInfo,
                                                                             v35,
                                                                             v36);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v37,
    (Il2CppObject *)v18,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_UserEventServantPointEntity__bool___ctor__);
  v38 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v34,
          (System_Func_TSource__bool__o *)v37,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           v38,
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
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

  if ( (byte_42136C7 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__,
      entity);
    sub_B0D8A4(&UserEventServantPointEntity_TypeInfo, v11);
    byte_42136C7 = 1;
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
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void __fastcall UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0

  if ( (byte_421261D & 1) == 0 )
  {
    sub_B0D8A4(&UserEventServantPointMaster___c_TypeInfo, v1);
    byte_421261D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(UserEventServantPointMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_421261E & 1) == 0 )
  {
    sub_B0D8A4(&UserEventServantPointEntity_TypeInfo, entity);
    byte_421261E = 1;
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
    sub_B0D97C(this);
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_421261F & 1) == 0 )
  {
    sub_B0D8A4(&UserEventServantPointEntity_TypeInfo, entity);
    byte_421261F = 1;
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
  if ( (byte_4212620 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_B0D8A4(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt);
    byte_4212620 = 1;
  }
  if ( !svtPointEnt )
    sub_B0D97C(this);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v7, 0LL) == v4->fields.userId
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
  if ( (byte_4212621 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_B0D8A4(
                                                                   &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__,
                                                                   svtPointEnt);
    byte_4212621 = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0LL
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_B0D97C(this);
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
  if ( (byte_4212622 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_B0D8A4(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt);
    byte_4212622 = 1;
  }
  if ( !svtPointEnt )
    sub_B0D97C(this);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}