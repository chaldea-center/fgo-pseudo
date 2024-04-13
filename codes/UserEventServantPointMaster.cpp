void __fastcall UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70DC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E70DC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    400,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetBestServantPointEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  UserEventServantPointMaster___c__DisplayClass3_0_o *v73; // x21
  DataManager_o *Instance; // x0
  __int64 v75; // x1
  __int64 v76; // x19
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v84; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x22
  Il2CppObject *v87; // x23
  struct UserEventServantPointMaster___c_StaticFields *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v96; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x0
  UserEventServantPointMaster___c_c *v98; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x20
  struct UserEventServantPointMaster___c_StaticFields *v100; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_2; // x21
  Il2CppObject *v102; // x22
  struct UserEventServantPointMaster___c_StaticFields *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v110; // x20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v111; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x0

  if ( (byte_42E70DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, userId, eventId, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v22, v23, v24);
    sub_B5D5C4(&Method_System_Func_UserEventServantPointEntity__bool___ctor__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Func_UserEventServantPointEntity__int___ctor__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Func_UserEventServantPointEntity__long___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Func_UserEventServantPointEntity__long__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&System_Func_UserEventServantPointEntity__int__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__, v52, v53, v54);
    sub_B5D5C4(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__, v55, v56, v57);
    sub_B5D5C4(
      &Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
      v58,
      v59,
      v60);
    sub_B5D5C4(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo, v61, v62, v63);
    sub_B5D5C4(
      &Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
      v64,
      v65,
      v66);
    sub_B5D5C4(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&UserEventServantPointMaster___c_TypeInfo, v70, v71, v72);
    byte_42E70DD = 1;
  }
  v73 = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_B5D694(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
  UserEventServantPointMaster___c__DisplayClass3_0___ctor(v73, 0LL);
  if ( !v73 )
    goto LABEL_25;
  v73->fields.userId = userId;
  v73->fields.eventId = eventId;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0LL;
  v76 = sub_B5D694(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
  UserEventServantPointMaster___c__DisplayClass3_1___ctor(
    (UserEventServantPointMaster___c__DisplayClass3_1_o *)v76,
    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___),
        !v76) )
  {
LABEL_25:
    sub_B5D69C(Instance, v75);
  }
  *(_QWORD *)(v76 + 16) = Instance;
  sub_B5D560((BattleServantConfConponent_o *)(v76 + 16), (System_Int32_array **)Instance, v77, v78, v79, v80, v81, v82);
  list = this->fields.list;
  v84 = UserEventServantPointMaster___c_TypeInfo;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v84 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v84->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v87 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v87,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    v88 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v88->__9__3_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v88->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
  }
  v95 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v96 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v96,
    (Il2CppObject *)v73,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserEventServantPointEntity__bool___ctor__);
  v97 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v95,
          (System_Func_TSource__bool__o *)v96,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v98 = UserEventServantPointMaster___c_TypeInfo;
  v99 = v97;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v98 = UserEventServantPointMaster___c_TypeInfo;
  }
  v100 = v98->static_fields;
  _9__3_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v100->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( (BYTE3(v98->vtable._0_Equals.methodPtr) & 4) != 0 && !v98->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v98);
      v100 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v102 = (Il2CppObject *)v100->__9;
    _9__3_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B5D694(System_Func_UserEventServantPointEntity__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_2,
      v102,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      (const MethodInfo_2C3003C *)Method_System_Func_UserEventServantPointEntity__long___ctor__);
    v103 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v103->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v103->__9__3_2,
      (System_Int32_array **)_9__3_2,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
  }
  v110 = System_Linq_Enumerable__OrderByDescending_UserEventServantPointEntity__long_(
           v99,
           (System_Func_TSource__TKey__o *)_9__3_2,
           (const MethodInfo_1CAF628 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v111 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserEventServantPointEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v111,
    (Il2CppObject *)v76,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    (const MethodInfo_2C2F87C *)Method_System_Func_UserEventServantPointEntity__int___ctor__);
  v112 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v110,
                                                                (System_Func_TSource__TKey__o *)v111,
                                                                (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                            v112,
                                            (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x1

  if ( (byte_42E70DA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&svtId);
    sub_B5D5C4(&UserEventServantPointEntity_TypeInfo, v9, v10, v11);
    byte_42E70DA = 1;
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
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


bool __fastcall UserEventServantPointMaster__IsAnyExist(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  UserEventServantPointMaster___c__DisplayClass4_0_o *v40; // x19
  __int64 v41; // x0
  __int64 v42; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v44; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x21
  Il2CppObject *v47; // x22
  struct UserEventServantPointMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v56; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0

  if ( (byte_42E70DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_DataEntityBase___, userId, eventId, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_UserEventServantPointEntity__bool___ctor__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, v28, v29, v30);
    sub_B5D5C4(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__, v31, v32, v33);
    sub_B5D5C4(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&UserEventServantPointMaster___c_TypeInfo, v37, v38, v39);
    byte_42E70DE = 1;
  }
  v40 = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_B5D694(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
  UserEventServantPointMaster___c__DisplayClass4_0___ctor(v40, 0LL);
  if ( !v40 )
    sub_B5D69C(v41, v42);
  v40->fields.userId = userId;
  v40->fields.eventId = eventId;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0;
  list = this->fields.list;
  v44 = UserEventServantPointMaster___c_TypeInfo;
  if ( (BYTE3(UserEventServantPointMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v44 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v47,
      Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__UserEventServantPointEntity___ctor__);
    v48 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v48->__9__4_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v48->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v56 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v56,
    (Il2CppObject *)v40,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserEventServantPointEntity__bool___ctor__);
  v57 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v55,
          (System_Func_TSource__bool__o *)v56,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           v57,
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *PK; // x2

  if ( (byte_42E70DB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    sub_B5D5C4(&UserEventServantPointEntity_TypeInfo, v11, v12, v13);
    byte_42E70DB = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void __fastcall UserEventServantPointMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E6FF8 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventServantPointMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6FF8 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserEventServantPointMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserEventServantPointMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E6FF9 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventServantPointEntity_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E6FF9 = 1;
  }
  if ( !entity )
    return 0LL;
  v5 = *(&UserEventServantPointEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (UserEventServantPointEntity_c *)entity->klass->_2.typeHierarchy[v5 - 1] == UserEventServantPointEntity_TypeInfo )
    return (UserEventServantPointEntity_o *)entity;
  return 0LL;
}


int64_t __fastcall UserEventServantPointMaster___c___GetBestServantPointEntity_b__3_2(
        UserEventServantPointMaster___c_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  if ( !svtPointEnt )
    sub_B5D69C(this, 0LL);
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E6FFA & 1) == 0 )
  {
    sub_B5D5C4(&UserEventServantPointEntity_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E6FFA = 1;
  }
  if ( !entity )
    return 0LL;
  v5 = *(&UserEventServantPointEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (UserEventServantPointEntity_c *)entity->klass->_2.typeHierarchy[v5 - 1] == UserEventServantPointEntity_TypeInfo )
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
  __int64 v3; // x3
  UserEventServantPointMaster___c__DisplayClass3_0_o *v5; // x20
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42E6FFB & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_B5D5C4(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   (_DWORD)svtPointEnt,
                                                                   (_DWORD)method,
                                                                   v3);
    byte_42E6FFB = 1;
  }
  if ( !svtPointEnt )
    sub_B5D69C(this, svtPointEnt);
  v6 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL) == v5->fields.userId
      && svtPointEnt->fields.eventId == v5->fields.eventId;
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
  __int64 v3; // x3
  UserEventServantPointMaster___c__DisplayClass3_1_o *v5; // x20

  v5 = this;
  if ( (byte_42E6FFC & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_B5D5C4(
                                                                   &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__,
                                                                   (_DWORD)svtPointEnt,
                                                                   (_DWORD)method,
                                                                   v3);
    byte_42E6FFC = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v5->fields.svtMaster) == 0LL
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(this, svtPointEnt);
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
  __int64 v3; // x3
  UserEventServantPointMaster___c__DisplayClass4_0_o *v5; // x20
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42E6FFD & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_B5D5C4(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   (_DWORD)svtPointEnt,
                                                                   (_DWORD)method,
                                                                   v3);
    byte_42E6FFD = 1;
  }
  if ( !svtPointEnt )
    sub_B5D69C(this, svtPointEnt);
  v6 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL) == v5->fields.userId
      && svtPointEnt->fields.eventId == v5->fields.eventId;
}