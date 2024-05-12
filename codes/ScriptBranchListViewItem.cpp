void __fastcall ScriptBranchListViewItem___ctor(
        ScriptBranchListViewItem_o *this,
        int32_t index,
        System_String_o *title,
        System_String_o *tag,
        System_String_o *strLine,
        int32_t questId,
        int32_t questFlag,
        int32_t svtId,
        System_Int32_array *routeId,
        int32_t branchType,
        int32_t count,
        int32_t checkType,
        System_String_o *debugComment,
        const MethodInfo *method)
{
  ScriptBranchListViewItem_o *v19; // x27
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t v44; // w0

  v19 = this;
  ListViewItem___ctor_24167012((ListViewItem_o *)this, index, 0LL);
  v19->fields.title = title;
  sub_B77560(
    (BattleServantConfConponent_o *)&v19->fields.title,
    (System_Int32_array **)title,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v19->fields.tag = tag;
  sub_B77560((BattleServantConfConponent_o *)&v19->fields.tag, (System_Int32_array **)tag, v26, v27, v28, v29, v30, v31);
  v19->fields.questId = questId;
  v19->fields.questPhase = questFlag;
  v19->fields.svtId = svtId;
  v19->fields.routeIds = routeId;
  sub_B77560(
    (BattleServantConfConponent_o *)&v19->fields.routeIds,
    (System_Int32_array **)routeId,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v19->fields.debugComment = debugComment;
  v19 = (ScriptBranchListViewItem_o *)((char *)v19 + 144);
  v19->fields.sortIndex = count;
  v19->fields.loopIndex = checkType;
  sub_B77560((BattleServantConfConponent_o *)v19, (System_Int32_array **)debugComment, v38, v39, v40, v41, v42, v43);
  v44 = System_Int32__Parse(strLine, 0LL);
  v19[-1].fields.branchType = 1;
  LODWORD(v19->monitor) = v44;
  LODWORD(v19->fields.sortValue0) = branchType;
}


void __fastcall ScriptBranchListViewItem__AddLineStr(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  int32_t *p_lineCount; // x19
  int32_t lineCount; // t1
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Int32_array **v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438FB45 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_120/*" - "*/);
    byte_438FB45 = 1;
  }
  lineCount = this->fields.lineCount;
  p_lineCount = &this->fields.lineCount;
  v5 = (System_String_o *)*((_QWORD *)p_lineCount - 2);
  *p_lineCount = lineCount + 1;
  v6 = System_Int32__ToString((int32_t)p_lineCount, 0LL);
  v7 = (System_Int32_array **)System_String__Concat_44904220(v5, (System_String_o *)StringLiteral_120/*" - "*/, v6, 0LL);
  *((_QWORD *)p_lineCount - 3) = v7;
  sub_B77560((BattleServantConfConponent_o *)(p_lineCount - 6), v7, v8, v9, v10, v11, v12, v13);
}


System_Collections_Generic_List_UserQuestRouteEntity__o *__fastcall ScriptBranchListViewItem__AddUserQuestRoute(
        ScriptBranchListViewItem_o *this,
        System_Collections_Generic_List_UserQuestRouteEntity__o *list,
        int32_t cnt,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t UserId; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v16; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UserQuestRouteEntity_o *v24; // x24
  struct System_Int32_array *routeIds; // x8
  __int64 v26; // x9
  int32_t v27; // w8
  __int64 v29; // x0

  if ( (byte_438FB42 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_UserQuestRouteEntity___);
    sub_B775C4(&Method_System_Func_UserQuestRouteEntity__bool___ctor__);
    sub_B775C4(&System_Func_UserQuestRouteEntity__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__);
    sub_B775C4(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
    sub_B775C4(&UserQuestRouteEntity_TypeInfo);
    byte_438FB42 = 1;
  }
  v7 = sub_B77694(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
  ScriptBranchListViewItem___c__DisplayClass20_0___ctor((ScriptBranchListViewItem___c__DisplayClass20_0_o *)v7, 0LL);
  if ( !v7 )
LABEL_19:
    sub_B7769C(UserId, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = 0;
  if ( cnt >= 1 )
  {
    v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v7 + 32);
    do
    {
      v17 = *v16;
      if ( !*v16 )
      {
        v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserQuestRouteEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v17,
          (Il2CppObject *)v7,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          (const MethodInfo_29E92C4 *)Method_System_Func_UserQuestRouteEntity__bool___ctor__);
        *(_QWORD *)(v7 + 32) = v17;
        sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
      }
      if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v17,
              (const MethodInfo_1C66144 *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v24 = (UserQuestRouteEntity_o *)sub_B77694(UserQuestRouteEntity_TypeInfo);
        UserQuestRouteEntity___ctor(v24, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v24 )
          goto LABEL_19;
        v24->fields.userId = UserId;
        v24->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_19;
        v26 = *(int *)(v7 + 24);
        if ( (unsigned int)v26 >= routeIds->max_length )
        {
          v29 = sub_B776C8(UserId);
          sub_B77668(v29, 0LL);
        }
        v24->fields.routeId = routeIds->m_Items[v26 + 1];
        if ( !list )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__);
      }
      v27 = *(_DWORD *)(v7 + 24) + 1;
      *(_DWORD *)(v7 + 24) = v27;
    }
    while ( v27 < cnt );
  }
  return list;
}


void __fastcall ScriptBranchListViewItem__ChangeFlag(
        ScriptBranchListViewItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  _BOOL4 v3; // w20
  int32_t branchType; // w8
  __int64 Instance; // x0
  __int64 v7; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserQuestEntity_o *v9; // x22
  __int64 v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  Il2CppObject *v17; // x0
  int64_t UserId; // x0
  int32_t questPhase; // w8
  UserServantCollectionMaster_o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x22
  ScriptBranchListViewItem___c_c *v22; // x0
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__18_0; // x23
  Il2CppObject *v25; // x24
  struct ScriptBranchListViewItem___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v34; // x0
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  int32_t v37; // w8
  System_Collections_Generic_List_UserQuestRouteEntity__o *v38; // x22
  int v39; // w20
  char v40; // w19
  int32_t v41; // w19
  ScriptManager_c *v42; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  int32_t checkType; // w8
  int count; // w2
  UserServantCollectionEntity_o *v48; // x20
  UserServantCollectionEntity_o *v49; // x20
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // kr00_16
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x20
  WarBoardUiData_SaveData_array *v59; // x19
  JsonManager_c *v60; // x0
  const MethodInfo *v61; // x3
  System_Collections_Generic_List_UserQuestRouteEntity__o *v62; // x0
  Il2CppObject *v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = flag;
  if ( (byte_438FB40 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
    sub_B775C4(&Method_System_Func_DataEntityBase__UserQuestRouteEntity___ctor__);
    sub_B775C4(&System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ScriptManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__);
    sub_B775C4(&ScriptBranchListViewItem___c_TypeInfo);
    sub_B775C4(&UserQuestEntity___TypeInfo);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    sub_B775C4(&UserServantCollectionEntity___TypeInfo);
    sub_B775C4(&UserServantCollectionEntity_TypeInfo);
    byte_438FB40 = 1;
  }
  entity = 0LL;
  branchType = this->fields.branchType;
  switch ( branchType )
  {
    case -1:
      if ( v3 )
        v41 = 1;
      else
        v41 = 2;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      if ( !byte_4387290 )
      {
        sub_B775C4(&ScriptManager_TypeInfo);
        byte_4387290 = 1;
      }
      v42 = ScriptManager_TypeInfo;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v42 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v42->static_fields->scriptServerSettingAddress;
      if ( !byte_4387291 )
      {
        sub_B775C4(&ScriptManager_TypeInfo);
        v42 = ScriptManager_TypeInfo;
        byte_4387291 = 1;
      }
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v42->static_fields->scriptObjectSettingAddress;
      if ( !byte_4388698 )
      {
        sub_B775C4(&ScriptManager_TypeInfo);
        v42 = ScriptManager_TypeInfo;
        byte_4388698 = 1;
      }
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v42->static_fields->scriptStartModeSettingName;
      if ( !byte_438FBA9 )
      {
        sub_B775C4(&ScriptManager_TypeInfo);
        v42 = ScriptManager_TypeInfo;
        byte_438FBA9 = 1;
      }
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = ScriptManager_TypeInfo;
      }
      ScriptManager__SetScriptServerSetting(
        scriptServerSettingAddress,
        scriptObjectSettingAddress,
        v41,
        scriptStartModeSettingName,
        v42->static_fields->isHiddenTruthSetting,
        0LL);
      return;
    case 0:
    case 1:
      v40 = (branchType != 0) ^ v3;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptManager__SetIsCollection(v40 & 1, 0LL);
      return;
    case 2:
    case 3:
    case 11:
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_130;
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            MasterData_WarQuestSelectionMaster,
                            Instance,
                            this->fields.questId,
                            0LL);
      if ( Instance )
        goto LABEL_21;
      v9 = (UserQuestEntity_o *)sub_B77694(UserQuestEntity_TypeInfo);
      UserQuestEntity___ctor(v9, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v9 )
        goto LABEL_130;
      v9->fields.userId = Instance;
      v9->fields.questId = this->fields.questId;
      Instance = sub_B775DC(UserQuestEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_130;
      v10 = Instance;
      Instance = sub_B77684(v9, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_132;
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_131;
      *(_QWORD *)(v10 + 32) = v9;
      sub_B77560((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v17 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v10, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)MasterData_WarQuestSelectionMaster, v17, 0LL);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            MasterData_WarQuestSelectionMaster,
                            UserId,
                            this->fields.questId,
                            0LL);
LABEL_21:
      questPhase = this->fields.questPhase;
      if ( v3 )
      {
        if ( questPhase < 1 )
        {
          if ( Instance )
            goto LABEL_109;
        }
        else if ( Instance )
        {
          *(_DWORD *)(Instance + 36) = questPhase;
LABEL_109:
          *(_DWORD *)(Instance + 40) = this->fields.questPhase + 1;
          return;
        }
LABEL_130:
        sub_B7769C(Instance, v7);
      }
      if ( questPhase < 1 )
      {
        if ( !Instance )
          goto LABEL_130;
      }
      else
      {
        if ( !Instance )
          goto LABEL_130;
        *(_DWORD *)(Instance + 36) = 0;
      }
      *(_DWORD *)(Instance + 40) = 0;
      return;
    case 4:
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptManager__SetIsRevival(v3, 0LL);
      return;
    case 5:
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      v20 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v20 )
        goto LABEL_130;
      Instance = UserServantCollectionMaster__TryGetEntity(v20, &entity, Instance, this->fields.svtId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_130;
        if ( v3 )
          entity->fields.status = 2;
        else
          entity->fields.status = 0;
        return;
      }
      if ( !v3 )
        return;
      v48 = (UserServantCollectionEntity_o *)sub_B77694(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor(v48, 0LL);
      entity = v48;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v48 )
        goto LABEL_130;
      v48->fields.userId = Instance;
      v49 = entity;
      svtId = this->fields.svtId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      v7 = *(_QWORD *)&v51.fields.fakeValue;
      Instance = *(_QWORD *)&v51.fields.currentCryptoKey;
      if ( !v49 )
        goto LABEL_130;
      v49->fields.svtId = v51;
      if ( !entity )
        goto LABEL_130;
      entity->fields.status = 2;
      Instance = sub_B775DC(UserServantCollectionEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_130;
      v58 = (System_Int32_array **)entity;
      v59 = (WarBoardUiData_SaveData_array *)Instance;
      if ( entity )
      {
        Instance = sub_B77684(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_132:
          v65 = sub_B776BC(Instance);
          sub_B77668(v65, 0LL);
        }
      }
      if ( !v59->max_length )
      {
LABEL_131:
        v64 = sub_B776C8(Instance);
        sub_B77668(v64, 0LL);
      }
      v59->m_Items[0] = (WarBoardUiData_SaveData_o *)v58;
      sub_B77560((BattleServantConfConponent_o *)v59->m_Items, v58, v52, v53, v54, v55, v56, v57);
      v60 = JsonManager_TypeInfo;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_127;
      }
      goto LABEL_128;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_130;
      v20 = (UserServantCollectionMaster_o *)Instance;
      v21 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 32);
      v22 = ScriptBranchListViewItem___c_TypeInfo;
      if ( (BYTE3(ScriptBranchListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo);
        v22 = ScriptBranchListViewItem___c_TypeInfo;
      }
      static_fields = v22->static_fields;
      _9__18_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        }
        v25 = (Il2CppObject *)static_fields->__9;
        _9__18_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__18_0,
          v25,
          Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__,
          (const MethodInfo_29EAA10 *)Method_System_Func_DataEntityBase__UserQuestRouteEntity___ctor__);
        v26 = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        v26->__9__18_0 = (struct System_Func_DataEntityBase__UserQuestRouteEntity__o *)_9__18_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v26->__9__18_0,
          (System_Int32_array **)_9__18_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v21,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___);
      v34 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                         v33,
                                                                         (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v37 = this->fields.branchType;
      v38 = v34;
      v39 = v37 == 7 && v3 || v37 == 8 && !v3;
      checkType = this->fields.checkType;
      if ( checkType )
      {
        if ( checkType == 1 )
        {
          if ( (v39 & 1) != 0 )
          {
            count = this->fields.count;
            goto LABEL_121;
          }
        }
        else
        {
          if ( checkType != 2 )
            goto LABEL_123;
          if ( (v39 & 1) == 0 )
          {
            count = this->fields.count + 1;
LABEL_121:
            v62 = ScriptBranchListViewItem__AddUserQuestRoute(this, v34, count, v36);
            goto LABEL_122;
          }
        }
LABEL_119:
        v62 = ScriptBranchListViewItem__RemoveUserQuestRoute(this, v34, v35);
LABEL_122:
        v38 = v62;
        goto LABEL_123;
      }
      if ( !this->fields.count )
      {
        if ( (v39 & 1) == 0 )
        {
          count = 1;
          goto LABEL_121;
        }
        goto LABEL_119;
      }
      v38 = ScriptBranchListViewItem__RemoveUserQuestRoute(this, v34, v35);
      if ( v39 )
        ScriptBranchListViewItem__AddUserQuestRoute(this, v38, this->fields.count, v61);
LABEL_123:
      Instance = ((__int64 (__fastcall *)(UserServantCollectionMaster_o *, Il2CppMethodPointer))v20->klass->vtable._7_Clear.method)(
                   v20,
                   v20->klass->vtable._8_OnListChangedImplementation.methodPtr);
      if ( !v38 )
        goto LABEL_130;
      v59 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
              (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v60 = JsonManager_TypeInfo;
LABEL_127:
        j_il2cpp_runtime_class_init_0(v60);
      }
LABEL_128:
      v63 = (Il2CppObject *)JsonManager__toJson(&v59->obj, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)v20, v63, 0LL);
      return;
    default:
      return;
  }
}


bool __fastcall ScriptBranchListViewItem__CheckFlag(
        ScriptBranchListViewItem_o *this,
        System_String_o *tag,
        int32_t intQuestId,
        int32_t intQuestPhase,
        const MethodInfo *method)
{
  int32_t branchType; // w9

  branchType = this->fields.branchType;
  if ( ((intQuestPhase | intQuestId) & 0x80000000) != 0 || branchType == -1 )
    return (intQuestPhase | intQuestId) < 0 && branchType == -1;
  if ( System_String__op_Equality(this->fields.tag, tag, 0LL) && this->fields.questId == intQuestId )
    return this->fields.questPhase == intQuestPhase;
  return 0;
}


System_Collections_Generic_List_UserQuestRouteEntity__o *__fastcall ScriptBranchListViewItem__RemoveUserQuestRoute(
        ScriptBranchListViewItem_o *this,
        System_Collections_Generic_List_UserQuestRouteEntity__o *list,
        const MethodInfo *method)
{
  ScriptBranchListViewItem_o *v4; // x20
  struct System_Int32_array *routeIds; // x23
  unsigned __int64 v6; // x24
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x22
  peRenderTexture_ChangeLayerObject_o *v16; // x0
  __int64 v18; // x0

  v4 = this;
  if ( (byte_438FB41 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
    sub_B775C4(&Method_System_Predicate_UserQuestRouteEntity___ctor__);
    sub_B775C4(&System_Predicate_UserQuestRouteEntity__TypeInfo);
    sub_B775C4(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__);
    this = (ScriptBranchListViewItem_o *)sub_B775C4(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
    byte_438FB41 = 1;
  }
  routeIds = v4->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( (int)routeIds->max_length >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      v7 = sub_B77694(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
      ScriptBranchListViewItem___c__DisplayClass19_0___ctor((ScriptBranchListViewItem___c__DisplayClass19_0_o *)v7, 0LL);
      if ( !v7 )
        break;
      *(_QWORD *)(v7 + 24) = v4;
      sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)v4, v8, v9, v10, v11, v12, v13);
      if ( v6 >= routeIds->max_length )
      {
        v18 = sub_B776C8(v14);
        sub_B77668(v18, 0LL);
      }
      *(_DWORD *)(v7 + 16) = routeIds->m_Items[v6 + 1];
      v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_UserQuestRouteEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v15,
        (Il2CppObject *)v7,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        (const MethodInfo_2C3248C *)Method_System_Predicate_UserQuestRouteEntity___ctor__);
      if ( !list )
        break;
      v16 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)list,
              (System_Predicate_T__o *)v15,
              (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v16 )
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)list,
          (WarBoardManager_TaskList_o *)v16,
          (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v6 >= (int)routeIds->max_length )
        return list;
    }
LABEL_13:
    sub_B7769C(this, list);
  }
  return list;
}


System_String_o *__fastcall ScriptBranchListViewItem__get_CommentText(
        ScriptBranchListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *Empty; // x20
  System_String_o *v5; // x20
  int32_t v6; // w0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  struct System_Int32_array *routeIds; // x8
  System_String_o *v12; // x0
  __int64 *v13; // x8
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array *v20; // x20
  System_Int32_array **v21; // x1
  Il2CppObject *v22; // x20
  __int64 v23; // x2
  Il2CppObject *v24; // x0
  struct System_Int32_array *v25; // x8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x21
  __int64 v62; // x0
  __int64 v63; // x0
  int32_t questId; // [xsp+8h] [xbp-18h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438FB43 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_20349/*"isNotMaterial"*/);
    sub_B775C4(&StringLiteral_9127/*"Master : Female"*/);
    sub_B775C4(&StringLiteral_716/*", "*/);
    sub_B775C4(&StringLiteral_6867/*"Flag   : back"*/);
    sub_B775C4(&StringLiteral_9897/*"Number : {0}, releaseId : {1}"*/);
    sub_B775C4(&StringLiteral_6866/*"Flag   : "*/);
    sub_B775C4(&StringLiteral_9128/*"Master : Male"*/);
    sub_B775C4(&StringLiteral_20359/*"isRevival"*/);
    sub_B775C4(&StringLiteral_748/*", questId:"*/);
    sub_B775C4(&StringLiteral_12955/*"ServantId : "*/);
    sub_B775C4(&StringLiteral_20347/*"isMaterial"*/);
    byte_438FB43 = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v13 = &StringLiteral_9128/*"Master : Male"*/;
      else
        v13 = &StringLiteral_9127/*"Master : Female"*/;
      goto LABEL_21;
    case 0:
      v13 = &StringLiteral_20347/*"isMaterial"*/;
      goto LABEL_21;
    case 1:
      v13 = &StringLiteral_20349/*"isNotMaterial"*/;
      goto LABEL_21;
    case 2:
    case 3:
      v5 = System_Int32__ToString((int)this + 128, 0LL);
      v6 = (_DWORD)this + 132;
      goto LABEL_9;
    case 4:
      v13 = &StringLiteral_20359/*"isRevival"*/;
LABEL_21:
      Empty = (System_String_o *)*v13;
      goto LABEL_47;
    case 5:
    case 6:
      v7 = System_Int32__ToString((int)this + 156, 0LL);
      v8 = System_String__Concat_44901936((System_String_o *)StringLiteral_12955/*"ServantId : "*/, v7, 0LL);
      goto LABEL_46;
    case 9:
      questPhase = this->fields.questPhase;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase, v2);
      questId = this->fields.questId;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId, v23);
      v8 = System_String__Format_44897472((System_String_o *)StringLiteral_9897/*"Number : {0}, releaseId : {1}"*/, v22, v24, 0LL);
      goto LABEL_46;
    case 0xA:
      v9 = System_Int32__ToString((int)this + 128, 0LL);
      routeIds = this->fields.routeIds;
      if ( !routeIds )
        goto LABEL_54;
      if ( !routeIds->max_length )
        goto LABEL_52;
      v5 = v9;
      v6 = (_DWORD)routeIds + 32;
LABEL_9:
      v12 = System_Int32__ToString(v6, 0LL);
      v8 = System_String__Concat_44905348(
             (System_String_o *)StringLiteral_6866/*"Flag   : "*/,
             v5,
             (System_String_o *)StringLiteral_716/*", "*/,
             v12,
             0LL);
      goto LABEL_46;
    case 0xB:
      v9 = (System_String_o *)sub_B775DC(string___TypeInfo, 6LL);
      if ( !v9 )
        goto LABEL_54;
      v20 = (System_String_array *)v9;
      v9 = (System_String_o *)StringLiteral_6867/*"Flag   : back"*/;
      if ( StringLiteral_6867/*"Flag   : back"*/ )
      {
        v9 = (System_String_o *)sub_B77684(StringLiteral_6867/*"Flag   : back"*/, v20->obj.klass->_1.element_class);
        if ( !v9 )
          goto LABEL_53;
        v21 = (System_Int32_array **)StringLiteral_6867/*"Flag   : back"*/;
      }
      else
      {
        v21 = 0LL;
      }
      if ( !v20->max_length )
        goto LABEL_52;
      v20->m_Items[0] = (System_String_o *)v21;
      sub_B77560((BattleServantConfConponent_o *)v20->m_Items, v21, v14, v15, v16, v17, v18, v19);
      v25 = this->fields.routeIds;
      if ( !v25 )
LABEL_54:
        sub_B7769C(v9, v10);
      if ( !v25->max_length )
      {
LABEL_52:
        v62 = sub_B776C8(v9);
        sub_B77668(v62, 0LL);
      }
      v9 = System_Int32__ToString((int)v25 + 32, 0LL);
      v32 = (System_Int32_array **)v9;
      if ( v9 )
      {
        v9 = (System_String_o *)sub_B77684(v9, v20->obj.klass->_1.element_class);
        if ( !v9 )
          goto LABEL_53;
      }
      if ( v20->max_length <= 1 )
        goto LABEL_52;
      v20->m_Items[1] = (System_String_o *)v32;
      sub_B77560((BattleServantConfConponent_o *)&v20->m_Items[1], v32, v26, v27, v28, v29, v30, v31);
      v9 = (System_String_o *)StringLiteral_748/*", questId:"*/;
      if ( StringLiteral_748/*", questId:"*/ )
      {
        v9 = (System_String_o *)sub_B77684(StringLiteral_748/*", questId:"*/, v20->obj.klass->_1.element_class);
        if ( !v9 )
          goto LABEL_53;
        v39 = (System_Int32_array **)StringLiteral_748/*", questId:"*/;
      }
      else
      {
        v39 = 0LL;
      }
      if ( v20->max_length <= 2 )
        goto LABEL_52;
      v20->m_Items[2] = (System_String_o *)v39;
      sub_B77560((BattleServantConfConponent_o *)&v20->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
      v9 = System_Int32__ToString((int)this + 128, 0LL);
      v46 = (System_Int32_array **)v9;
      if ( v9 )
      {
        v9 = (System_String_o *)sub_B77684(v9, v20->obj.klass->_1.element_class);
        if ( !v9 )
          goto LABEL_53;
      }
      if ( v20->max_length <= 3 )
        goto LABEL_52;
      v20->m_Items[3] = (System_String_o *)v46;
      sub_B77560((BattleServantConfConponent_o *)&v20->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
      v9 = (System_String_o *)StringLiteral_716/*", "*/;
      if ( StringLiteral_716/*", "*/ )
      {
        v9 = (System_String_o *)sub_B77684(StringLiteral_716/*", "*/, v20->obj.klass->_1.element_class);
        if ( !v9 )
          goto LABEL_53;
        v53 = (System_Int32_array **)StringLiteral_716/*", "*/;
      }
      else
      {
        v53 = 0LL;
      }
      if ( v20->max_length <= 4 )
        goto LABEL_52;
      v20->m_Items[4] = (System_String_o *)v53;
      sub_B77560((BattleServantConfConponent_o *)&v20->m_Items[4], v53, v47, v48, v49, v50, v51, v52);
      v9 = System_Int32__ToString((int)this + 132, 0LL);
      v60 = (System_Int32_array **)v9;
      if ( v9 )
      {
        v9 = (System_String_o *)sub_B77684(v9, v20->obj.klass->_1.element_class);
        if ( !v9 )
        {
LABEL_53:
          v63 = sub_B776BC(v9);
          sub_B77668(v63, 0LL);
        }
      }
      if ( v20->max_length <= 5 )
        goto LABEL_52;
      v20->m_Items[5] = (System_String_o *)v60;
      sub_B77560((BattleServantConfConponent_o *)&v20->m_Items[5], v60, v54, v55, v56, v57, v58, v59);
      v8 = System_String__Concat_44982964(v20, 0LL);
LABEL_46:
      Empty = v8;
LABEL_47:
      if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0LL) )
      {
        if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
          Empty = System_String__Concat_44901936(Empty, (System_String_o *)StringLiteral_716/*", "*/, 0LL);
        return System_String__Concat_44901936(Empty, this->fields.debugComment, 0LL);
      }
      return Empty;
    default:
      goto LABEL_47;
  }
}


int32_t __fastcall ScriptBranchListViewItem__get_IfClearNumber(
        ScriptBranchListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questPhase;
}


int32_t __fastcall ScriptBranchListViewItem__get_IfClearReleaseId(
        ScriptBranchListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questId;
}


bool __fastcall ScriptBranchListViewItem__get_IsFlagOn(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  bool v3; // w8
  int64_t UserId; // x0
  int32_t questPhase; // w19
  int32_t questId; // w20
  int64_t v7; // x21
  int32_t svtId; // w19
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IList_int__o *v12; // x20
  System_Collections_Generic_IList_int__o *routeIds; // x22
  int32_t checkType; // w19
  int32_t count; // w21
  System_Collections_Generic_IList_int__o *v16; // x20
  System_Collections_Generic_IList_int__o *v17; // x22
  int32_t v18; // w19
  int32_t v19; // w21
  bool IsCollection; // w0
  ScriptManager_c *v21; // x0
  __int64 v22; // x0

  if ( (byte_438FB44 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&ScriptManager_TypeInfo);
    byte_438FB44 = 1;
  }
  v3 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      if ( !byte_4388699 )
      {
        sub_B775C4(&ScriptManager_TypeInfo);
        byte_4388699 = 1;
      }
      v21 = ScriptManager_TypeInfo;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v21 = ScriptManager_TypeInfo;
      }
      return v21->static_fields->scriptGenderSettingIndex == 1;
    case 0:
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      return ScriptManager__GetIsCollection(0LL);
    case 1:
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      IsCollection = ScriptManager__GetIsCollection(0LL);
      return !IsCollection;
    case 2:
    case 3:
    case 0xB:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      questId = this->fields.questId;
      questPhase = this->fields.questPhase;
      v7 = UserId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear(v7, questId, questPhase, -1, 0, 0LL);
    case 4:
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      return ScriptManager__GetIsRevival(0LL);
    case 5:
    case 6:
      svtId = this->fields.svtId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen(8, svtId, 0LL, 0, 0LL);
    case 7:
      v10 = sub_B775DC(int___TypeInfo, 1LL);
      if ( !v10 )
        goto LABEL_50;
      v12 = (System_Collections_Generic_IList_int__o *)v10;
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_51;
      *(_DWORD *)(v10 + 32) = this->fields.questId;
      routeIds = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      count = this->fields.count;
      checkType = this->fields.checkType;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsRouteSelect_24762100(v12, routeIds, count, checkType, 0LL);
    case 8:
      v10 = sub_B775DC(int___TypeInfo, 1LL);
      if ( !v10 )
LABEL_50:
        sub_B7769C(v10, v11);
      v16 = (System_Collections_Generic_IList_int__o *)v10;
      if ( !*(_DWORD *)(v10 + 24) )
      {
LABEL_51:
        v22 = sub_B776C8(v10);
        sub_B77668(v22, 0LL);
      }
      *(_DWORD *)(v10 + 32) = this->fields.questId;
      v17 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v19 = this->fields.count;
      v18 = this->fields.checkType;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCollection = CondType__IsRouteSelect_24762100(v16, v17, v19, v18, 0LL);
      return !IsCollection;
    default:
      return v3;
  }
}


bool __fastcall ScriptBranchListViewItem__get_IsMasterFlag(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.branchType == -1;
}


int32_t __fastcall ScriptBranchListViewItem__get_LineCount(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.lineCount;
}


System_String_o *__fastcall ScriptBranchListViewItem__get_TitleText(
        ScriptBranchListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.title;
}


void __fastcall ScriptBranchListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_43887B1 & 1) == 0 )
  {
    sub_B775C4(&ScriptBranchListViewItem___c_TypeInfo);
    byte_43887B1 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ScriptBranchListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall ScriptBranchListViewItem___c___ctor(ScriptBranchListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserQuestRouteEntity_o *__fastcall ScriptBranchListViewItem___c___ChangeFlag_b__18_0(
        ScriptBranchListViewItem___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_43887B2 & 1) == 0 )
  {
    sub_B775C4(&UserQuestRouteEntity_TypeInfo);
    byte_43887B2 = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&UserQuestRouteEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserQuestRouteEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == UserQuestRouteEntity_TypeInfo )
    return (UserQuestRouteEntity_o *)data;
  return 0LL;
}


void __fastcall ScriptBranchListViewItem___c__DisplayClass19_0___ctor(
        ScriptBranchListViewItem___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ScriptBranchListViewItem___c__DisplayClass19_0___RemoveUserQuestRoute_b__0(
        ScriptBranchListViewItem___c__DisplayClass19_0_o *this,
        UserQuestRouteEntity_o *c,
        const MethodInfo *method)
{
  ScriptBranchListViewItem___c__DisplayClass19_0_o *v4; // x20
  ScriptBranchListViewItem___c__DisplayClass19_0_o *userId; // x21
  struct ScriptBranchListViewItem_o *_4__this; // x8

  v4 = this;
  if ( (byte_43887B3 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_B775C4(&NetworkManager_TypeInfo);
    byte_43887B3 = 1;
  }
  if ( !c )
    goto LABEL_12;
  userId = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)c->fields.userId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)NetworkManager__get_UserId(0LL);
  if ( userId != this )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
LABEL_12:
    sub_B7769C(this, c);
  if ( c->fields.questId == _4__this->fields.questId )
    return c->fields.routeId == v4->fields.routeId;
  return 0;
}


void __fastcall ScriptBranchListViewItem___c__DisplayClass20_0___ctor(
        ScriptBranchListViewItem___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ScriptBranchListViewItem___c__DisplayClass20_0___AddUserQuestRoute_b__0(
        ScriptBranchListViewItem___c__DisplayClass20_0_o *this,
        UserQuestRouteEntity_o *c,
        const MethodInfo *method)
{
  ScriptBranchListViewItem___c__DisplayClass20_0_o *v4; // x20
  ScriptBranchListViewItem___c__DisplayClass20_0_o *userId; // x21
  struct ScriptBranchListViewItem_o *_4__this; // x8
  struct System_Int32_array *routeIds; // x8
  __int64 i; // x9
  __int64 v10; // x0

  v4 = this;
  if ( (byte_43887B4 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_B775C4(&NetworkManager_TypeInfo);
    byte_43887B4 = 1;
  }
  if ( !c )
    goto LABEL_14;
  userId = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)c->fields.userId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)NetworkManager__get_UserId(0LL);
  if ( userId != this )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( c->fields.questId != _4__this->fields.questId )
    return 0;
  routeIds = _4__this->fields.routeIds;
  if ( !routeIds )
LABEL_14:
    sub_B7769C(this, c);
  i = v4->fields.i;
  if ( (unsigned int)i >= routeIds->max_length )
  {
    v10 = sub_B776C8(this);
    sub_B77668(v10, 0LL);
  }
  return c->fields.routeId == routeIds->m_Items[i + 1];
}