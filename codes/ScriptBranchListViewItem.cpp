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
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  v19->fields.title = title;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v19->fields.title,
    (System_Int32_array **)title,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v19->fields.tag = tag;
  sub_B2C2F8((BattleServantConfConponent_o *)&v19->fields.tag, (System_Int32_array **)tag, v26, v27, v28, v29, v30, v31);
  v19->fields.questId = questId;
  v19->fields.questPhase = questFlag;
  v19->fields.svtId = svtId;
  v19->fields.routeIds = routeId;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)v19, (System_Int32_array **)debugComment, v38, v39, v40, v41, v42, v43);
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

  if ( (byte_418BE40 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_119/*" - "*/, method);
    byte_418BE40 = 1;
  }
  lineCount = this->fields.lineCount;
  p_lineCount = &this->fields.lineCount;
  v5 = (System_String_o *)*((_QWORD *)p_lineCount - 2);
  *p_lineCount = lineCount + 1;
  v6 = System_Int32__ToString((int32_t)p_lineCount, 0LL);
  v7 = (System_Int32_array **)System_String__Concat_44307816(v5, (System_String_o *)StringLiteral_119/*" - "*/, v6, 0LL);
  *((_QWORD *)p_lineCount - 3) = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_lineCount - 6), v7, v8, v9, v10, v11, v12, v13);
}


System_Collections_Generic_List_UserQuestRouteEntity__o *__fastcall ScriptBranchListViewItem__AddUserQuestRoute(
        ScriptBranchListViewItem_o *this,
        System_Collections_Generic_List_UserQuestRouteEntity__o *list,
        int32_t cnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x22
  int64_t UserId; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v23; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x24
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UserQuestRouteEntity_o *v31; // x24
  struct System_Int32_array *routeIds; // x8
  __int64 v33; // x9
  int32_t v34; // w8
  __int64 v36; // x0

  if ( (byte_418BE3D & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_UserQuestRouteEntity___, list);
    sub_B2C35C(&Method_System_Func_UserQuestRouteEntity__bool___ctor__, v7);
    sub_B2C35C(&System_Func_UserQuestRouteEntity__bool__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__, v11);
    sub_B2C35C(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo, v12);
    sub_B2C35C(&UserQuestRouteEntity_TypeInfo, v13);
    byte_418BE3D = 1;
  }
  v14 = sub_B2C42C(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
  ScriptBranchListViewItem___c__DisplayClass20_0___ctor((ScriptBranchListViewItem___c__DisplayClass20_0_o *)v14, 0LL);
  if ( !v14 )
LABEL_19:
    sub_B2C434(UserId, v16);
  *(_QWORD *)(v14 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v14 + 24) = 0;
  if ( cnt >= 1 )
  {
    v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v14 + 32);
    do
    {
      v24 = *v23;
      if ( !*v23 )
      {
        v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserQuestRouteEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v24,
          (Il2CppObject *)v14,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_UserQuestRouteEntity__bool___ctor__);
        *(_QWORD *)(v14 + 32) = v24;
        sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
      }
      if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v24,
              (const MethodInfo_17266AC *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v31 = (UserQuestRouteEntity_o *)sub_B2C42C(UserQuestRouteEntity_TypeInfo);
        UserQuestRouteEntity___ctor(v31, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v31 )
          goto LABEL_19;
        v31->fields.userId = UserId;
        v31->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_19;
        v33 = *(int *)(v14 + 24);
        if ( (unsigned int)v33 >= routeIds->max_length )
        {
          v36 = sub_B2C460(UserId);
          sub_B2C400(v36, 0LL);
        }
        v31->fields.routeId = routeIds->m_Items[v33 + 1];
        if ( !list )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__);
      }
      v34 = *(_DWORD *)(v14 + 24) + 1;
      *(_DWORD *)(v14 + 24) = v34;
    }
    while ( v34 < cnt );
  }
  return list;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchListViewItem__ChangeFlag(
        ScriptBranchListViewItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  _BOOL4 v3; // w20
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  int32_t branchType; // w8
  __int64 Instance; // x0
  __int64 v25; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserQuestEntity_o *v27; // x22
  __int64 v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  Il2CppObject *v35; // x0
  int64_t UserId; // x0
  int32_t questPhase; // w8
  UserServantCollectionMaster_o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x22
  ScriptBranchListViewItem___c_c *v40; // x0
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__18_0; // x23
  Il2CppObject *v43; // x24
  struct ScriptBranchListViewItem___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v52; // x0
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  int32_t v55; // w8
  System_Collections_Generic_List_UserQuestRouteEntity__o *v56; // x22
  int v57; // w20
  char v58; // w19
  int32_t v59; // w19
  ScriptManager_c *v60; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  int32_t checkType; // w8
  int count; // w2
  UserServantCollectionEntity_o *v66; // x20
  UserServantCollectionEntity_o *v67; // x20
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // kr00_16
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x20
  WarBoardUiData_SaveData_array *v77; // x19
  JsonManager_c *v78; // x0
  const MethodInfo *v79; // x3
  System_Collections_Generic_List_UserQuestRouteEntity__o *v80; // x0
  Il2CppObject *v81; // x0
  __int64 v82; // x0
  __int64 v83; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = flag;
  if ( (byte_418BE3B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, flag);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___, v8);
    sub_B2C35C(&Method_System_Func_DataEntityBase__UserQuestRouteEntity___ctor__, v9);
    sub_B2C35C(&System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo, v10);
    sub_B2C35C(&JsonManager_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&ScriptManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__, v17);
    sub_B2C35C(&ScriptBranchListViewItem___c_TypeInfo, v18);
    sub_B2C35C(&UserQuestEntity___TypeInfo, v19);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v20);
    sub_B2C35C(&UserServantCollectionEntity___TypeInfo, v21);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v22);
    byte_418BE3B = 1;
  }
  entity = 0LL;
  branchType = this->fields.branchType;
  switch ( branchType )
  {
    case -1:
      if ( v3 )
        v59 = 1;
      else
        v59 = 2;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      if ( !byte_4188EE5 )
      {
        sub_B2C35C(&ScriptManager_TypeInfo, flag);
        byte_4188EE5 = 1;
      }
      v60 = ScriptManager_TypeInfo;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v60 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v60->static_fields->scriptServerSettingAddress;
      if ( !byte_4188EE6 )
      {
        sub_B2C35C(&ScriptManager_TypeInfo, flag);
        v60 = ScriptManager_TypeInfo;
        byte_4188EE6 = 1;
      }
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        v60 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v60->static_fields->scriptObjectSettingAddress;
      if ( !byte_418650B )
      {
        sub_B2C35C(&ScriptManager_TypeInfo, flag);
        v60 = ScriptManager_TypeInfo;
        byte_418650B = 1;
      }
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        v60 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v60->static_fields->scriptStartModeSettingName;
      if ( !byte_418BEA4 )
      {
        sub_B2C35C(&ScriptManager_TypeInfo, flag);
        v60 = ScriptManager_TypeInfo;
        byte_418BEA4 = 1;
      }
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        v60 = ScriptManager_TypeInfo;
      }
      ScriptManager__SetScriptServerSetting(
        scriptServerSettingAddress,
        scriptObjectSettingAddress,
        v59,
        scriptStartModeSettingName,
        v60->static_fields->isHiddenTruthSetting,
        0LL);
      return;
    case 0:
    case 1:
      v58 = (branchType != 0) ^ v3;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptManager__SetIsCollection(v58 & 1, 0LL);
      return;
    case 2:
    case 3:
    case 11:
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
      v27 = (UserQuestEntity_o *)sub_B2C42C(UserQuestEntity_TypeInfo);
      UserQuestEntity___ctor(v27, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v27 )
        goto LABEL_130;
      v27->fields.userId = Instance;
      v27->fields.questId = this->fields.questId;
      Instance = sub_B2C374(UserQuestEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_130;
      v28 = Instance;
      Instance = sub_B2C41C(v27, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_132;
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_131;
      *(_QWORD *)(v28 + 32) = v27;
      sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v35 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v28, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)MasterData_WarQuestSelectionMaster, v35, 0LL);
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
        sub_B2C434(Instance, v25);
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
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      v38 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v38 )
        goto LABEL_130;
      Instance = UserServantCollectionMaster__TryGetEntity(v38, &entity, Instance, this->fields.svtId, 0LL);
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
      v66 = (UserServantCollectionEntity_o *)sub_B2C42C(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor(v66, 0LL);
      entity = v66;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v66 )
        goto LABEL_130;
      v66->fields.userId = Instance;
      v67 = entity;
      svtId = this->fields.svtId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      v25 = *(_QWORD *)&v69.fields.fakeValue;
      Instance = *(_QWORD *)&v69.fields.currentCryptoKey;
      if ( !v67 )
        goto LABEL_130;
      v67->fields.svtId = v69;
      if ( !entity )
        goto LABEL_130;
      entity->fields.status = 2;
      Instance = sub_B2C374(UserServantCollectionEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_130;
      v76 = (System_Int32_array **)entity;
      v77 = (WarBoardUiData_SaveData_array *)Instance;
      if ( entity )
      {
        Instance = sub_B2C41C(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_132:
          v83 = sub_B2C454(Instance);
          sub_B2C400(v83, 0LL);
        }
      }
      if ( !v77->max_length )
      {
LABEL_131:
        v82 = sub_B2C460(Instance);
        sub_B2C400(v82, 0LL);
      }
      v77->m_Items[0] = (WarBoardUiData_SaveData_o *)v76;
      sub_B2C2F8((BattleServantConfConponent_o *)v77->m_Items, v76, v70, v71, v72, v73, v74, v75);
      v78 = JsonManager_TypeInfo;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_127;
      }
      goto LABEL_128;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_130;
      v38 = (UserServantCollectionMaster_o *)Instance;
      v39 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 32);
      v40 = ScriptBranchListViewItem___c_TypeInfo;
      if ( (BYTE3(ScriptBranchListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo);
        v40 = ScriptBranchListViewItem___c_TypeInfo;
      }
      static_fields = v40->static_fields;
      _9__18_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        }
        v43 = (Il2CppObject *)static_fields->__9;
        _9__18_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__18_0,
          v43,
          Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__,
          (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__UserQuestRouteEntity___ctor__);
        v44 = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        v44->__9__18_0 = (struct System_Func_DataEntityBase__UserQuestRouteEntity__o *)_9__18_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v44->__9__18_0,
          (System_Int32_array **)_9__18_0,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
      }
      v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v39,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___);
      v52 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                         v51,
                                                                         (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v55 = this->fields.branchType;
      v56 = v52;
      v57 = v55 == 7 && v3 || v55 == 8 && !v3;
      checkType = this->fields.checkType;
      if ( checkType )
      {
        if ( checkType == 1 )
        {
          if ( (v57 & 1) != 0 )
          {
            count = this->fields.count;
            goto LABEL_121;
          }
        }
        else
        {
          if ( checkType != 2 )
            goto LABEL_123;
          if ( (v57 & 1) == 0 )
          {
            count = this->fields.count + 1;
LABEL_121:
            v80 = ScriptBranchListViewItem__AddUserQuestRoute(this, v52, count, v54);
            goto LABEL_122;
          }
        }
LABEL_119:
        v80 = ScriptBranchListViewItem__RemoveUserQuestRoute(this, v52, v53);
LABEL_122:
        v56 = v80;
        goto LABEL_123;
      }
      if ( !this->fields.count )
      {
        if ( (v57 & 1) == 0 )
        {
          count = 1;
          goto LABEL_121;
        }
        goto LABEL_119;
      }
      v56 = ScriptBranchListViewItem__RemoveUserQuestRoute(this, v52, v53);
      if ( v57 )
        ScriptBranchListViewItem__AddUserQuestRoute(this, v56, this->fields.count, v79);
LABEL_123:
      Instance = ((__int64 (__fastcall *)(UserServantCollectionMaster_o *, Il2CppMethodPointer))v38->klass->vtable._7_Clear.method)(
                   v38,
                   v38->klass->vtable._8_OnListChangedImplementation.methodPtr);
      if ( !v56 )
        goto LABEL_130;
      v77 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v56,
              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v78 = JsonManager_TypeInfo;
LABEL_127:
        j_il2cpp_runtime_class_init_0(v78);
      }
LABEL_128:
      v81 = (Il2CppObject *)JsonManager__toJson(&v77->obj, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)v38, v81, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Int32_array *routeIds; // x23
  unsigned __int64 v11; // x24
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x0
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x22
  peRenderTexture_ChangeLayerObject_o *v21; // x0
  __int64 v23; // x0

  v4 = this;
  if ( (byte_418BE3C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__, list);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__, v5);
    sub_B2C35C(&Method_System_Predicate_UserQuestRouteEntity___ctor__, v6);
    sub_B2C35C(&System_Predicate_UserQuestRouteEntity__TypeInfo, v7);
    sub_B2C35C(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__, v8);
    this = (ScriptBranchListViewItem_o *)sub_B2C35C(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo, v9);
    byte_418BE3C = 1;
  }
  routeIds = v4->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( (int)routeIds->max_length >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v12 = sub_B2C42C(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
      ScriptBranchListViewItem___c__DisplayClass19_0___ctor(
        (ScriptBranchListViewItem___c__DisplayClass19_0_o *)v12,
        0LL);
      if ( !v12 )
        break;
      *(_QWORD *)(v12 + 24) = v4;
      sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)v4, v13, v14, v15, v16, v17, v18);
      if ( v11 >= routeIds->max_length )
      {
        v23 = sub_B2C460(v19);
        sub_B2C400(v23, 0LL);
      }
      *(_DWORD *)(v12 + 16) = routeIds->m_Items[v11 + 1];
      v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_UserQuestRouteEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v20,
        (Il2CppObject *)v12,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_UserQuestRouteEntity___ctor__);
      if ( !list )
        break;
      v21 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)list,
              (System_Predicate_T__o *)v20,
              (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v21 )
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)list,
          (WarBoardManager_TaskList_o *)v21,
          (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v11 >= (int)routeIds->max_length )
        return list;
    }
LABEL_13:
    sub_B2C434(this, list);
  }
  return list;
}


System_String_o *__fastcall ScriptBranchListViewItem__get_CommentText(
        ScriptBranchListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v15; // x1
  System_String_o *Empty; // x20
  System_String_o *v17; // x20
  int32_t v18; // w0
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  struct System_Int32_array *routeIds; // x8
  System_String_o *v24; // x0
  __int64 *v25; // x8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array *v32; // x20
  System_Int32_array **v33; // x1
  Il2CppObject *v34; // x20
  Il2CppObject *v35; // x0
  struct System_Int32_array *v36; // x8
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x21
  __int64 v73; // x0
  __int64 v74; // x0
  int32_t questId; // [xsp+8h] [xbp-18h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418BE3E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&string___TypeInfo, v3);
    sub_B2C35C(&string_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_19942/*"isNotMaterial"*/, v5);
    sub_B2C35C(&StringLiteral_8961/*"Master : Female"*/, v6);
    sub_B2C35C(&StringLiteral_701/*", "*/, v7);
    sub_B2C35C(&StringLiteral_6718/*"Flag   : back"*/, v8);
    sub_B2C35C(&StringLiteral_9724/*"Number : {0}, releaseId : {1}"*/, v9);
    sub_B2C35C(&StringLiteral_6717/*"Flag   : "*/, v10);
    sub_B2C35C(&StringLiteral_8962/*"Master : Male"*/, v11);
    sub_B2C35C(&StringLiteral_19951/*"isRevival"*/, v12);
    sub_B2C35C(&StringLiteral_733/*", questId:"*/, v13);
    sub_B2C35C(&StringLiteral_12718/*"ServantId : "*/, v14);
    sub_B2C35C(&StringLiteral_19940/*"isMaterial"*/, v15);
    byte_418BE3E = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v25 = &StringLiteral_8962/*"Master : Male"*/;
      else
        v25 = &StringLiteral_8961/*"Master : Female"*/;
      goto LABEL_21;
    case 0:
      v25 = &StringLiteral_19940/*"isMaterial"*/;
      goto LABEL_21;
    case 1:
      v25 = &StringLiteral_19942/*"isNotMaterial"*/;
      goto LABEL_21;
    case 2:
    case 3:
      v17 = System_Int32__ToString((int)this + 128, 0LL);
      v18 = (_DWORD)this + 132;
      goto LABEL_9;
    case 4:
      v25 = &StringLiteral_19951/*"isRevival"*/;
LABEL_21:
      Empty = (System_String_o *)*v25;
      goto LABEL_47;
    case 5:
    case 6:
      v19 = System_Int32__ToString((int)this + 156, 0LL);
      v20 = System_String__Concat_44305532((System_String_o *)StringLiteral_12718/*"ServantId : "*/, v19, 0LL);
      goto LABEL_46;
    case 9:
      questPhase = this->fields.questPhase;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase);
      questId = this->fields.questId;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId);
      v20 = System_String__Format_44301068((System_String_o *)StringLiteral_9724/*"Number : {0}, releaseId : {1}"*/, v34, v35, 0LL);
      goto LABEL_46;
    case 0xA:
      v21 = System_Int32__ToString((int)this + 128, 0LL);
      routeIds = this->fields.routeIds;
      if ( !routeIds )
        goto LABEL_54;
      if ( !routeIds->max_length )
        goto LABEL_52;
      v17 = v21;
      v18 = (_DWORD)routeIds + 32;
LABEL_9:
      v24 = System_Int32__ToString(v18, 0LL);
      v20 = System_String__Concat_44308944(
              (System_String_o *)StringLiteral_6717/*"Flag   : "*/,
              v17,
              (System_String_o *)StringLiteral_701/*", "*/,
              v24,
              0LL);
      goto LABEL_46;
    case 0xB:
      v21 = (System_String_o *)sub_B2C374(string___TypeInfo, 6LL);
      if ( !v21 )
        goto LABEL_54;
      v32 = (System_String_array *)v21;
      v21 = (System_String_o *)StringLiteral_6718/*"Flag   : back"*/;
      if ( StringLiteral_6718/*"Flag   : back"*/ )
      {
        v21 = (System_String_o *)sub_B2C41C(StringLiteral_6718/*"Flag   : back"*/, v32->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_53;
        v33 = (System_Int32_array **)StringLiteral_6718/*"Flag   : back"*/;
      }
      else
      {
        v33 = 0LL;
      }
      if ( !v32->max_length )
        goto LABEL_52;
      v32->m_Items[0] = (System_String_o *)v33;
      sub_B2C2F8((BattleServantConfConponent_o *)v32->m_Items, v33, v26, v27, v28, v29, v30, v31);
      v36 = this->fields.routeIds;
      if ( !v36 )
LABEL_54:
        sub_B2C434(v21, v22);
      if ( !v36->max_length )
      {
LABEL_52:
        v73 = sub_B2C460(v21);
        sub_B2C400(v73, 0LL);
      }
      v21 = System_Int32__ToString((int)v36 + 32, 0LL);
      v43 = (System_Int32_array **)v21;
      if ( v21 )
      {
        v21 = (System_String_o *)sub_B2C41C(v21, v32->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_53;
      }
      if ( v32->max_length <= 1 )
        goto LABEL_52;
      v32->m_Items[1] = (System_String_o *)v43;
      sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[1], v43, v37, v38, v39, v40, v41, v42);
      v21 = (System_String_o *)StringLiteral_733/*", questId:"*/;
      if ( StringLiteral_733/*", questId:"*/ )
      {
        v21 = (System_String_o *)sub_B2C41C(StringLiteral_733/*", questId:"*/, v32->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_53;
        v50 = (System_Int32_array **)StringLiteral_733/*", questId:"*/;
      }
      else
      {
        v50 = 0LL;
      }
      if ( v32->max_length <= 2 )
        goto LABEL_52;
      v32->m_Items[2] = (System_String_o *)v50;
      sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[2], v50, v44, v45, v46, v47, v48, v49);
      v21 = System_Int32__ToString((int)this + 128, 0LL);
      v57 = (System_Int32_array **)v21;
      if ( v21 )
      {
        v21 = (System_String_o *)sub_B2C41C(v21, v32->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_53;
      }
      if ( v32->max_length <= 3 )
        goto LABEL_52;
      v32->m_Items[3] = (System_String_o *)v57;
      sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[3], v57, v51, v52, v53, v54, v55, v56);
      v21 = (System_String_o *)StringLiteral_701/*", "*/;
      if ( StringLiteral_701/*", "*/ )
      {
        v21 = (System_String_o *)sub_B2C41C(StringLiteral_701/*", "*/, v32->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_53;
        v64 = (System_Int32_array **)StringLiteral_701/*", "*/;
      }
      else
      {
        v64 = 0LL;
      }
      if ( v32->max_length <= 4 )
        goto LABEL_52;
      v32->m_Items[4] = (System_String_o *)v64;
      sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[4], v64, v58, v59, v60, v61, v62, v63);
      v21 = System_Int32__ToString((int)this + 132, 0LL);
      v71 = (System_Int32_array **)v21;
      if ( v21 )
      {
        v21 = (System_String_o *)sub_B2C41C(v21, v32->obj.klass->_1.element_class);
        if ( !v21 )
        {
LABEL_53:
          v74 = sub_B2C454(v21);
          sub_B2C400(v74, 0LL);
        }
      }
      if ( v32->max_length <= 5 )
        goto LABEL_52;
      v32->m_Items[5] = (System_String_o *)v71;
      sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[5], v71, v65, v66, v67, v68, v69, v70);
      v20 = System_String__Concat_44385656(v32, 0LL);
LABEL_46:
      Empty = v20;
LABEL_47:
      if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0LL) )
      {
        if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
          Empty = System_String__Concat_44305532(Empty, (System_String_o *)StringLiteral_701/*", "*/, 0LL);
        return System_String__Concat_44305532(Empty, this->fields.debugComment, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  bool v6; // w8
  int64_t UserId; // x0
  int32_t questPhase; // w19
  int32_t questId; // w20
  int64_t v10; // x21
  int32_t svtId; // w19
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IList_int__o *v15; // x20
  System_Collections_Generic_IList_int__o *routeIds; // x22
  int32_t checkType; // w19
  int32_t count; // w21
  System_Collections_Generic_IList_int__o *v19; // x20
  System_Collections_Generic_IList_int__o *v20; // x22
  int32_t v21; // w19
  int32_t v22; // w21
  bool IsCollection; // w0
  ScriptManager_c *v24; // x0
  __int64 v25; // x0

  if ( (byte_418BE3F & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&ScriptManager_TypeInfo, v5);
    byte_418BE3F = 1;
  }
  v6 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      if ( !byte_418650C )
      {
        sub_B2C35C(&ScriptManager_TypeInfo, method);
        byte_418650C = 1;
      }
      v24 = ScriptManager_TypeInfo;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v24 = ScriptManager_TypeInfo;
      }
      return v24->static_fields->scriptGenderSettingIndex == 1;
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
      v10 = UserId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear(v10, questId, questPhase, -1, 0, 0LL);
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
      v13 = sub_B2C374(int___TypeInfo, 1LL);
      if ( !v13 )
        goto LABEL_50;
      v15 = (System_Collections_Generic_IList_int__o *)v13;
      if ( !*(_DWORD *)(v13 + 24) )
        goto LABEL_51;
      *(_DWORD *)(v13 + 32) = this->fields.questId;
      routeIds = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      count = this->fields.count;
      checkType = this->fields.checkType;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsRouteSelect_25807688(v15, routeIds, count, checkType, 0LL);
    case 8:
      v13 = sub_B2C374(int___TypeInfo, 1LL);
      if ( !v13 )
LABEL_50:
        sub_B2C434(v13, v14);
      v19 = (System_Collections_Generic_IList_int__o *)v13;
      if ( !*(_DWORD *)(v13 + 24) )
      {
LABEL_51:
        v25 = sub_B2C460(v13);
        sub_B2C400(v25, 0LL);
      }
      *(_DWORD *)(v13 + 32) = this->fields.questId;
      v20 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v22 = this->fields.count;
      v21 = this->fields.checkType;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCollection = CondType__IsRouteSelect_25807688(v19, v20, v22, v21, 0LL);
      return !IsCollection;
    default:
      return v6;
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_418551F & 1) == 0 )
  {
    sub_B2C35C(&ScriptBranchListViewItem___c_TypeInfo, v1);
    byte_418551F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ScriptBranchListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_4185520 & 1) == 0 )
  {
    sub_B2C35C(&UserQuestRouteEntity_TypeInfo, data);
    byte_4185520 = 1;
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
  if ( (byte_4185521 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_B2C35C(&NetworkManager_TypeInfo, c);
    byte_4185521 = 1;
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
    sub_B2C434(this, c);
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
  if ( (byte_4185522 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_B2C35C(&NetworkManager_TypeInfo, c);
    byte_4185522 = 1;
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
    sub_B2C434(this, c);
  i = v4->fields.i;
  if ( (unsigned int)i >= routeIds->max_length )
  {
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
  }
  return c->fields.routeId == routeIds->m_Items[i + 1];
}