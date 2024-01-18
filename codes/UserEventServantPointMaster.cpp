void __fastcall UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186F87 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__, method);
    byte_4186F87 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    399,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


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
  __int64 v32; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v40; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x22
  Il2CppObject *v43; // x23
  struct UserEventServantPointMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  UserEventServantPointMaster___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x20
  struct UserEventServantPointMaster___c_StaticFields *v56; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_2; // x21
  Il2CppObject *v58; // x22
  struct UserEventServantPointMaster___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v66; // x20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v67; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0

  if ( (byte_4186F88 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, userId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v12);
    sub_B2C35C(&Method_System_Func_UserEventServantPointEntity__bool___ctor__, v13);
    sub_B2C35C(&Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Func_UserEventServantPointEntity__int___ctor__, v15);
    sub_B2C35C(&Method_System_Func_UserEventServantPointEntity__long___ctor__, v16);
    sub_B2C35C(&System_Func_UserEventServantPointEntity__long__TypeInfo, v17);
    sub_B2C35C(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v18);
    sub_B2C35C(&System_Func_UserEventServantPointEntity__int__TypeInfo, v19);
    sub_B2C35C(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__, v22);
    sub_B2C35C(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__, v23);
    sub_B2C35C(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__, v24);
    sub_B2C35C(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo, v25);
    sub_B2C35C(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__, v26);
    sub_B2C35C(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v27);
    sub_B2C35C(&UserEventServantPointMaster___c_TypeInfo, v28);
    byte_4186F88 = 1;
  }
  v29 = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_B2C42C(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
  UserEventServantPointMaster___c__DisplayClass3_0___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_25;
  v29->fields.userId = userId;
  v29->fields.eventId = eventId;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0LL;
  v32 = sub_B2C42C(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
  UserEventServantPointMaster___c__DisplayClass3_1___ctor(
    (UserEventServantPointMaster___c__DisplayClass3_1_o *)v32,
    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
        !v32) )
  {
LABEL_25:
    sub_B2C434(Instance, v31);
  }
  *(_QWORD *)(v32 + 16) = Instance;
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)Instance, v33, v34, v35, v36, v37, v38);
  list = this->fields.list;
  v40 = UserEventServantPointMaster___c_TypeInfo;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v40 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v43,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    v44 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v44->__9__3_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v44->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v52,
    (Il2CppObject *)v29,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_UserEventServantPointEntity__bool___ctor__);
  v53 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v51,
          (System_Func_TSource__bool__o *)v52,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v54 = UserEventServantPointMaster___c_TypeInfo;
  v55 = v53;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v54 = UserEventServantPointMaster___c_TypeInfo;
  }
  v56 = v54->static_fields;
  _9__3_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v56->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v56 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)v56->__9;
    _9__3_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B2C42C(System_Func_UserEventServantPointEntity__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_2,
      v58,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      (const MethodInfo_2712F70 *)Method_System_Func_UserEventServantPointEntity__long___ctor__);
    v59 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v59->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v59->__9__3_2,
      (System_Int32_array **)_9__3_2,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  v66 = System_Linq_Enumerable__OrderByDescending_UserEventServantPointEntity__long_(
          v55,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_1A93A78 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v67 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserEventServantPointEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v67,
    (Il2CppObject *)v32,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    (const MethodInfo_27127B0 *)Method_System_Func_UserEventServantPointEntity__int___ctor__);
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v66,
                                                               (System_Func_TSource__TKey__o *)v67,
                                                               (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                            v68,
                                            (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
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

  if ( (byte_4186F85 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__,
      userId);
    sub_B2C35C(&UserEventServantPointEntity_TypeInfo, v9);
    byte_4186F85 = 1;
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
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v22; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x21
  Il2CppObject *v25; // x22
  struct UserEventServantPointMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4186F89 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_DataEntityBase___, userId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v9);
    sub_B2C35C(&Method_System_Func_UserEventServantPointEntity__bool___ctor__, v10);
    sub_B2C35C(&Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__, v11);
    sub_B2C35C(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v12);
    sub_B2C35C(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v13);
    sub_B2C35C(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, v14);
    sub_B2C35C(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__, v15);
    sub_B2C35C(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo, v16);
    sub_B2C35C(&UserEventServantPointMaster___c_TypeInfo, v17);
    byte_4186F89 = 1;
  }
  v18 = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_B2C42C(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
  UserEventServantPointMaster___c__DisplayClass4_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B2C434(v19, v20);
  v18->fields.userId = userId;
  v18->fields.eventId = eventId;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0;
  list = this->fields.list;
  v22 = UserEventServantPointMaster___c_TypeInfo;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v22 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v25,
      Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    v26 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v26->__9__4_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v34,
    (Il2CppObject *)v18,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_UserEventServantPointEntity__bool___ctor__);
  v35 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v33,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           v35,
           (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
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

  if ( (byte_4186F86 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__,
      entity);
    sub_B2C35C(&UserEventServantPointEntity_TypeInfo, v11);
    byte_4186F86 = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void __fastcall UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41856A6 & 1) == 0 )
  {
    sub_B2C35C(&UserEventServantPointMaster___c_TypeInfo, v1);
    byte_41856A6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserEventServantPointMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41856A7 & 1) == 0 )
  {
    sub_B2C35C(&UserEventServantPointEntity_TypeInfo, entity);
    byte_41856A7 = 1;
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
    sub_B2C434(this, 0LL);
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_41856A8 & 1) == 0 )
  {
    sub_B2C35C(&UserEventServantPointEntity_TypeInfo, entity);
    byte_41856A8 = 1;
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
  if ( (byte_41856A9 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_B2C35C(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt);
    byte_41856A9 = 1;
  }
  if ( !svtPointEnt )
    sub_B2C434(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v7, 0LL) == v4->fields.userId
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
  if ( (byte_41856AA & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_B2C35C(
                                                                   &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__,
                                                                   svtPointEnt);
    byte_41856AA = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0LL
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(this, svtPointEnt);
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
  if ( (byte_41856AB & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_B2C35C(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt);
    byte_41856AB = 1;
  }
  if ( !svtPointEnt )
    sub_B2C434(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}