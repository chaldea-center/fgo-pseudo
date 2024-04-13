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
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  v19->fields.title = title;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v19->fields.title,
    (System_Int32_array **)title,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v19->fields.tag = tag;
  sub_B5D560((BattleServantConfConponent_o *)&v19->fields.tag, (System_Int32_array **)tag, v26, v27, v28, v29, v30, v31);
  v19->fields.questId = questId;
  v19->fields.questPhase = questFlag;
  v19->fields.svtId = svtId;
  v19->fields.routeIds = routeId;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)v19, (System_Int32_array **)debugComment, v38, v39, v40, v41, v42, v43);
  v44 = System_Int32__Parse(strLine, 0LL);
  v19[-1].fields.branchType = 1;
  LODWORD(v19->monitor) = v44;
  LODWORD(v19->fields.sortValue0) = branchType;
}


void __fastcall ScriptBranchListViewItem__AddLineStr(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t *p_lineCount; // x19
  int32_t lineCount; // t1
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42ED153 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_119/*" - "*/, (_DWORD)method, v2, v3);
    byte_42ED153 = 1;
  }
  lineCount = this->fields.lineCount;
  p_lineCount = &this->fields.lineCount;
  v7 = (System_String_o *)*((_QWORD *)p_lineCount - 2);
  *p_lineCount = lineCount + 1;
  v8 = System_Int32__ToString((int32_t)p_lineCount, 0LL);
  v9 = (System_Int32_array **)System_String__Concat_44580072(v7, (System_String_o *)StringLiteral_119/*" - "*/, v8, 0LL);
  *((_QWORD *)p_lineCount - 3) = v9;
  sub_B5D560((BattleServantConfConponent_o *)(p_lineCount - 6), v9, v10, v11, v12, v13, v14, v15);
}


System_Collections_Generic_List_UserQuestRouteEntity__o *__fastcall ScriptBranchListViewItem__AddUserQuestRoute(
        ScriptBranchListViewItem_o *this,
        System_Collections_Generic_List_UserQuestRouteEntity__o *list,
        int32_t cnt,
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
  __int64 v28; // x22
  int64_t UserId; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v37; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x24
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UserQuestRouteEntity_o *v45; // x24
  struct System_Int32_array *routeIds; // x8
  __int64 v47; // x9
  int32_t v48; // w8
  __int64 v50; // x0

  if ( (byte_42ED150 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_UserQuestRouteEntity___, (_DWORD)list, cnt, method);
    sub_B5D5C4(&Method_System_Func_UserQuestRouteEntity__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_UserQuestRouteEntity__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__, v13, v14, v15);
    sub_B5D5C4(&NetworkManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__, v19, v20, v21);
    sub_B5D5C4(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UserQuestRouteEntity_TypeInfo, v25, v26, v27);
    byte_42ED150 = 1;
  }
  v28 = sub_B5D694(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
  ScriptBranchListViewItem___c__DisplayClass20_0___ctor((ScriptBranchListViewItem___c__DisplayClass20_0_o *)v28, 0LL);
  if ( !v28 )
LABEL_19:
    sub_B5D69C(UserId, v30);
  *(_QWORD *)(v28 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  *(_DWORD *)(v28 + 24) = 0;
  if ( cnt >= 1 )
  {
    v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v28 + 32);
    do
    {
      v38 = *v37;
      if ( !*v37 )
      {
        v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserQuestRouteEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v38,
          (Il2CppObject *)v28,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_UserQuestRouteEntity__bool___ctor__);
        *(_QWORD *)(v28 + 32) = v38;
        sub_B5D560((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
      }
      if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v38,
              (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v45 = (UserQuestRouteEntity_o *)sub_B5D694(UserQuestRouteEntity_TypeInfo);
        UserQuestRouteEntity___ctor(v45, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v45 )
          goto LABEL_19;
        v45->fields.userId = UserId;
        v45->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_19;
        v47 = *(int *)(v28 + 24);
        if ( (unsigned int)v47 >= routeIds->max_length )
        {
          v50 = sub_B5D6C8(UserId);
          sub_B5D668(v50, 0LL);
        }
        v45->fields.routeId = routeIds->m_Items[v47 + 1];
        if ( !list )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__);
      }
      v48 = *(_DWORD *)(v28 + 24) + 1;
      *(_DWORD *)(v28 + 24) = v48;
    }
    while ( v48 < cnt );
  }
  return list;
}


void __fastcall ScriptBranchListViewItem__ChangeFlag(
        ScriptBranchListViewItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL4 v4; // w20
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int32_t branchType; // w8
  __int64 Instance; // x0
  __int64 v62; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserQuestEntity_o *v64; // x22
  __int64 v65; // x23
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  Il2CppObject *v72; // x0
  int64_t UserId; // x0
  int32_t questPhase; // w8
  UserServantCollectionMaster_o *v75; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x22
  ScriptBranchListViewItem___c_c *v77; // x0
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__18_0; // x23
  Il2CppObject *v80; // x24
  struct ScriptBranchListViewItem___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v89; // x0
  const MethodInfo *v90; // x2
  const MethodInfo *v91; // x3
  int32_t v92; // w8
  System_Collections_Generic_List_UserQuestRouteEntity__o *v93; // x22
  int v94; // w20
  char v95; // w19
  int32_t v96; // w19
  ScriptManager_c *v97; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  int32_t checkType; // w8
  int count; // w2
  UserServantCollectionEntity_o *v103; // x20
  UserServantCollectionEntity_o *v104; // x20
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // kr00_16
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x20
  WarBoardUiData_SaveData_array *v114; // x19
  JsonManager_c *v115; // x0
  const MethodInfo *v116; // x3
  System_Collections_Generic_List_UserQuestRouteEntity__o *v117; // x0
  Il2CppObject *v118; // x0
  __int64 v119; // x0
  __int64 v120; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = flag;
  if ( (byte_42ED14E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, flag, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__UserQuestRouteEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&JsonManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&ScriptManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__, v42, v43, v44);
    sub_B5D5C4(&ScriptBranchListViewItem___c_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&UserQuestEntity___TypeInfo, v48, v49, v50);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&UserServantCollectionEntity___TypeInfo, v54, v55, v56);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v57, v58, v59);
    byte_42ED14E = 1;
  }
  entity = 0LL;
  branchType = this->fields.branchType;
  switch ( branchType )
  {
    case -1:
      if ( v4 )
        v96 = 1;
      else
        v96 = 2;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      if ( !byte_42E8378 )
      {
        sub_B5D5C4(&ScriptManager_TypeInfo, flag, (_DWORD)method, v3);
        byte_42E8378 = 1;
      }
      v97 = ScriptManager_TypeInfo;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v97 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v97->static_fields->scriptServerSettingAddress;
      if ( !byte_42E8379 )
      {
        sub_B5D5C4(&ScriptManager_TypeInfo, flag, (_DWORD)method, v3);
        v97 = ScriptManager_TypeInfo;
        byte_42E8379 = 1;
      }
      if ( (BYTE3(v97->vtable._0_Equals.methodPtr) & 4) != 0 && !v97->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v97);
        v97 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v97->static_fields->scriptObjectSettingAddress;
      if ( !byte_42E6D92 )
      {
        sub_B5D5C4(&ScriptManager_TypeInfo, flag, (_DWORD)method, v3);
        v97 = ScriptManager_TypeInfo;
        byte_42E6D92 = 1;
      }
      if ( (BYTE3(v97->vtable._0_Equals.methodPtr) & 4) != 0 && !v97->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v97);
        v97 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v97->static_fields->scriptStartModeSettingName;
      if ( !byte_42ED1B7 )
      {
        sub_B5D5C4(&ScriptManager_TypeInfo, flag, (_DWORD)method, v3);
        v97 = ScriptManager_TypeInfo;
        byte_42ED1B7 = 1;
      }
      if ( (BYTE3(v97->vtable._0_Equals.methodPtr) & 4) != 0 && !v97->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v97);
        v97 = ScriptManager_TypeInfo;
      }
      ScriptManager__SetScriptServerSetting(
        scriptServerSettingAddress,
        scriptObjectSettingAddress,
        v96,
        scriptStartModeSettingName,
        v97->static_fields->isHiddenTruthSetting,
        0LL);
      return;
    case 0:
    case 1:
      v95 = (branchType != 0) ^ v4;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptManager__SetIsCollection(v95 & 1, 0LL);
      return;
    case 2:
    case 3:
    case 11:
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
      v64 = (UserQuestEntity_o *)sub_B5D694(UserQuestEntity_TypeInfo);
      UserQuestEntity___ctor(v64, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v64 )
        goto LABEL_130;
      v64->fields.userId = Instance;
      v64->fields.questId = this->fields.questId;
      Instance = sub_B5D5DC(UserQuestEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_130;
      v65 = Instance;
      Instance = sub_B5D684(v64, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_132;
      if ( !*(_DWORD *)(v65 + 24) )
        goto LABEL_131;
      *(_QWORD *)(v65 + 32) = v64;
      sub_B5D560((BattleServantConfConponent_o *)(v65 + 32), (System_Int32_array **)v64, v66, v67, v68, v69, v70, v71);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v72 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v65, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)MasterData_WarQuestSelectionMaster, v72, 0LL);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            MasterData_WarQuestSelectionMaster,
                            UserId,
                            this->fields.questId,
                            0LL);
LABEL_21:
      questPhase = this->fields.questPhase;
      if ( v4 )
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
        sub_B5D69C(Instance, v62);
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
      ScriptManager__SetIsRevival(v4, 0LL);
      return;
    case 5:
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      v75 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v75 )
        goto LABEL_130;
      Instance = UserServantCollectionMaster__TryGetEntity(v75, &entity, Instance, this->fields.svtId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_130;
        if ( v4 )
          entity->fields.status = 2;
        else
          entity->fields.status = 0;
        return;
      }
      if ( !v4 )
        return;
      v103 = (UserServantCollectionEntity_o *)sub_B5D694(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor(v103, 0LL);
      entity = v103;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v103 )
        goto LABEL_130;
      v103->fields.userId = Instance;
      v104 = entity;
      svtId = this->fields.svtId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      v62 = *(_QWORD *)&v106.fields.fakeValue;
      Instance = *(_QWORD *)&v106.fields.currentCryptoKey;
      if ( !v104 )
        goto LABEL_130;
      v104->fields.svtId = v106;
      if ( !entity )
        goto LABEL_130;
      entity->fields.status = 2;
      Instance = sub_B5D5DC(UserServantCollectionEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_130;
      v113 = (System_Int32_array **)entity;
      v114 = (WarBoardUiData_SaveData_array *)Instance;
      if ( entity )
      {
        Instance = sub_B5D684(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_132:
          v120 = sub_B5D6BC(Instance);
          sub_B5D668(v120, 0LL);
        }
      }
      if ( !v114->max_length )
      {
LABEL_131:
        v119 = sub_B5D6C8(Instance);
        sub_B5D668(v119, 0LL);
      }
      v114->m_Items[0] = (WarBoardUiData_SaveData_o *)v113;
      sub_B5D560((BattleServantConfConponent_o *)v114->m_Items, v113, v107, v108, v109, v110, v111, v112);
      v115 = JsonManager_TypeInfo;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_127;
      }
      goto LABEL_128;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_130;
      v75 = (UserServantCollectionMaster_o *)Instance;
      v76 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 32);
      v77 = ScriptBranchListViewItem___c_TypeInfo;
      if ( (BYTE3(ScriptBranchListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo);
        v77 = ScriptBranchListViewItem___c_TypeInfo;
      }
      static_fields = v77->static_fields;
      _9__18_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        }
        v80 = (Il2CppObject *)static_fields->__9;
        _9__18_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__18_0,
          v80,
          Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__,
          (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__UserQuestRouteEntity___ctor__);
        v81 = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        v81->__9__18_0 = (struct System_Func_DataEntityBase__UserQuestRouteEntity__o *)_9__18_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v81->__9__18_0,
          (System_Int32_array **)_9__18_0,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87);
      }
      v88 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v76,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___);
      v89 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                         v88,
                                                                         (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v92 = this->fields.branchType;
      v93 = v89;
      v94 = v92 == 7 && v4 || v92 == 8 && !v4;
      checkType = this->fields.checkType;
      if ( checkType )
      {
        if ( checkType == 1 )
        {
          if ( (v94 & 1) != 0 )
          {
            count = this->fields.count;
            goto LABEL_121;
          }
        }
        else
        {
          if ( checkType != 2 )
            goto LABEL_123;
          if ( (v94 & 1) == 0 )
          {
            count = this->fields.count + 1;
LABEL_121:
            v117 = ScriptBranchListViewItem__AddUserQuestRoute(this, v89, count, v91);
            goto LABEL_122;
          }
        }
LABEL_119:
        v117 = ScriptBranchListViewItem__RemoveUserQuestRoute(this, v89, v90);
LABEL_122:
        v93 = v117;
        goto LABEL_123;
      }
      if ( !this->fields.count )
      {
        if ( (v94 & 1) == 0 )
        {
          count = 1;
          goto LABEL_121;
        }
        goto LABEL_119;
      }
      v93 = ScriptBranchListViewItem__RemoveUserQuestRoute(this, v89, v90);
      if ( v94 )
        ScriptBranchListViewItem__AddUserQuestRoute(this, v93, this->fields.count, v116);
LABEL_123:
      Instance = ((__int64 (__fastcall *)(UserServantCollectionMaster_o *, Il2CppMethodPointer))v75->klass->vtable._7_Clear.method)(
                   v75,
                   v75->klass->vtable._8_OnListChangedImplementation.methodPtr);
      if ( !v93 )
        goto LABEL_130;
      v114 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v93,
               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v115 = JsonManager_TypeInfo;
LABEL_127:
        j_il2cpp_runtime_class_init_0(v115);
      }
LABEL_128:
      v118 = (Il2CppObject *)JsonManager__toJson(&v114->obj, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)v75, v118, 0LL);
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
  __int64 v3; // x3
  ScriptBranchListViewItem_o *v5; // x20
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
  struct System_Int32_array *routeIds; // x23
  unsigned __int64 v22; // x24
  __int64 v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x22
  peRenderTexture_ChangeLayerObject_o *v32; // x0
  __int64 v34; // x0

  v5 = this;
  if ( (byte_42ED14F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__, (_DWORD)list, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_UserQuestRouteEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_UserQuestRouteEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__, v15, v16, v17);
    this = (ScriptBranchListViewItem_o *)sub_B5D5C4(
                                           &ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo,
                                           v18,
                                           v19,
                                           v20);
    byte_42ED14F = 1;
  }
  routeIds = v5->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( (int)routeIds->max_length >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      v23 = sub_B5D694(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
      ScriptBranchListViewItem___c__DisplayClass19_0___ctor(
        (ScriptBranchListViewItem___c__DisplayClass19_0_o *)v23,
        0LL);
      if ( !v23 )
        break;
      *(_QWORD *)(v23 + 24) = v5;
      sub_B5D560((BattleServantConfConponent_o *)(v23 + 24), (System_Int32_array **)v5, v24, v25, v26, v27, v28, v29);
      if ( v22 >= routeIds->max_length )
      {
        v34 = sub_B5D6C8(v30);
        sub_B5D668(v34, 0LL);
      }
      *(_DWORD *)(v23 + 16) = routeIds->m_Items[v22 + 1];
      v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_UserQuestRouteEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v31,
        (Il2CppObject *)v23,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_UserQuestRouteEntity___ctor__);
      if ( !list )
        break;
      v32 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)list,
              (System_Predicate_T__o *)v31,
              (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v32 )
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)list,
          (WarBoardManager_TaskList_o *)v32,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v22 >= (int)routeIds->max_length )
        return list;
    }
LABEL_13:
    sub_B5D69C(this, list);
  }
  return list;
}


System_String_o *__fastcall ScriptBranchListViewItem__get_CommentText(
        ScriptBranchListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_String_o *Empty; // x20
  System_String_o *v45; // x20
  int32_t v46; // w0
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  __int64 v50; // x1
  struct System_Int32_array *routeIds; // x8
  System_String_o *v52; // x0
  __int64 *v53; // x8
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array *v60; // x20
  System_Int32_array **v61; // x1
  Il2CppObject *v62; // x20
  Il2CppObject *v63; // x0
  struct System_Int32_array *v64; // x8
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x21
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x21
  __int64 v101; // x0
  __int64 v102; // x0
  int32_t questId; // [xsp+8h] [xbp-18h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ED151 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&string_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_20195/*"isNotMaterial"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9054/*"Master : Female"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_709/*", "*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6798/*"Flag   : back"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9822/*"Number : {0}, releaseId : {1}"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_6797/*"Flag   : "*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_9055/*"Master : Male"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_20205/*"isRevival"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_741/*", questId:"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12870/*"ServantId : "*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_20193/*"isMaterial"*/, v41, v42, v43);
    byte_42ED151 = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v53 = &StringLiteral_9055/*"Master : Male"*/;
      else
        v53 = &StringLiteral_9054/*"Master : Female"*/;
      goto LABEL_21;
    case 0:
      v53 = &StringLiteral_20193/*"isMaterial"*/;
      goto LABEL_21;
    case 1:
      v53 = &StringLiteral_20195/*"isNotMaterial"*/;
      goto LABEL_21;
    case 2:
    case 3:
      v45 = System_Int32__ToString((int)this + 128, 0LL);
      v46 = (_DWORD)this + 132;
      goto LABEL_9;
    case 4:
      v53 = &StringLiteral_20205/*"isRevival"*/;
LABEL_21:
      Empty = (System_String_o *)*v53;
      goto LABEL_47;
    case 5:
    case 6:
      v47 = System_Int32__ToString((int)this + 156, 0LL);
      v48 = System_String__Concat_44577788((System_String_o *)StringLiteral_12870/*"ServantId : "*/, v47, 0LL);
      goto LABEL_46;
    case 9:
      questPhase = this->fields.questPhase;
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase);
      questId = this->fields.questId;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId);
      v48 = System_String__Format_44573324((System_String_o *)StringLiteral_9822/*"Number : {0}, releaseId : {1}"*/, v62, v63, 0LL);
      goto LABEL_46;
    case 0xA:
      v49 = System_Int32__ToString((int)this + 128, 0LL);
      routeIds = this->fields.routeIds;
      if ( !routeIds )
        goto LABEL_54;
      if ( !routeIds->max_length )
        goto LABEL_52;
      v45 = v49;
      v46 = (_DWORD)routeIds + 32;
LABEL_9:
      v52 = System_Int32__ToString(v46, 0LL);
      v48 = System_String__Concat_44581200(
              (System_String_o *)StringLiteral_6797/*"Flag   : "*/,
              v45,
              (System_String_o *)StringLiteral_709/*", "*/,
              v52,
              0LL);
      goto LABEL_46;
    case 0xB:
      v49 = (System_String_o *)sub_B5D5DC(string___TypeInfo, 6LL);
      if ( !v49 )
        goto LABEL_54;
      v60 = (System_String_array *)v49;
      v49 = (System_String_o *)StringLiteral_6798/*"Flag   : back"*/;
      if ( StringLiteral_6798/*"Flag   : back"*/ )
      {
        v49 = (System_String_o *)sub_B5D684(StringLiteral_6798/*"Flag   : back"*/, v60->obj.klass->_1.element_class);
        if ( !v49 )
          goto LABEL_53;
        v61 = (System_Int32_array **)StringLiteral_6798/*"Flag   : back"*/;
      }
      else
      {
        v61 = 0LL;
      }
      if ( !v60->max_length )
        goto LABEL_52;
      v60->m_Items[0] = (System_String_o *)v61;
      sub_B5D560((BattleServantConfConponent_o *)v60->m_Items, v61, v54, v55, v56, v57, v58, v59);
      v64 = this->fields.routeIds;
      if ( !v64 )
LABEL_54:
        sub_B5D69C(v49, v50);
      if ( !v64->max_length )
      {
LABEL_52:
        v101 = sub_B5D6C8(v49);
        sub_B5D668(v101, 0LL);
      }
      v49 = System_Int32__ToString((int)v64 + 32, 0LL);
      v71 = (System_Int32_array **)v49;
      if ( v49 )
      {
        v49 = (System_String_o *)sub_B5D684(v49, v60->obj.klass->_1.element_class);
        if ( !v49 )
          goto LABEL_53;
      }
      if ( v60->max_length <= 1 )
        goto LABEL_52;
      v60->m_Items[1] = (System_String_o *)v71;
      sub_B5D560((BattleServantConfConponent_o *)&v60->m_Items[1], v71, v65, v66, v67, v68, v69, v70);
      v49 = (System_String_o *)StringLiteral_741/*", questId:"*/;
      if ( StringLiteral_741/*", questId:"*/ )
      {
        v49 = (System_String_o *)sub_B5D684(StringLiteral_741/*", questId:"*/, v60->obj.klass->_1.element_class);
        if ( !v49 )
          goto LABEL_53;
        v78 = (System_Int32_array **)StringLiteral_741/*", questId:"*/;
      }
      else
      {
        v78 = 0LL;
      }
      if ( v60->max_length <= 2 )
        goto LABEL_52;
      v60->m_Items[2] = (System_String_o *)v78;
      sub_B5D560((BattleServantConfConponent_o *)&v60->m_Items[2], v78, v72, v73, v74, v75, v76, v77);
      v49 = System_Int32__ToString((int)this + 128, 0LL);
      v85 = (System_Int32_array **)v49;
      if ( v49 )
      {
        v49 = (System_String_o *)sub_B5D684(v49, v60->obj.klass->_1.element_class);
        if ( !v49 )
          goto LABEL_53;
      }
      if ( v60->max_length <= 3 )
        goto LABEL_52;
      v60->m_Items[3] = (System_String_o *)v85;
      sub_B5D560((BattleServantConfConponent_o *)&v60->m_Items[3], v85, v79, v80, v81, v82, v83, v84);
      v49 = (System_String_o *)StringLiteral_709/*", "*/;
      if ( StringLiteral_709/*", "*/ )
      {
        v49 = (System_String_o *)sub_B5D684(StringLiteral_709/*", "*/, v60->obj.klass->_1.element_class);
        if ( !v49 )
          goto LABEL_53;
        v92 = (System_Int32_array **)StringLiteral_709/*", "*/;
      }
      else
      {
        v92 = 0LL;
      }
      if ( v60->max_length <= 4 )
        goto LABEL_52;
      v60->m_Items[4] = (System_String_o *)v92;
      sub_B5D560((BattleServantConfConponent_o *)&v60->m_Items[4], v92, v86, v87, v88, v89, v90, v91);
      v49 = System_Int32__ToString((int)this + 132, 0LL);
      v99 = (System_Int32_array **)v49;
      if ( v49 )
      {
        v49 = (System_String_o *)sub_B5D684(v49, v60->obj.klass->_1.element_class);
        if ( !v49 )
        {
LABEL_53:
          v102 = sub_B5D6BC(v49);
          sub_B5D668(v102, 0LL);
        }
      }
      if ( v60->max_length <= 5 )
        goto LABEL_52;
      v60->m_Items[5] = (System_String_o *)v99;
      sub_B5D560((BattleServantConfConponent_o *)&v60->m_Items[5], v99, v93, v94, v95, v96, v97, v98);
      v48 = System_String__Concat_44657912(v60, 0LL);
LABEL_46:
      Empty = v48;
LABEL_47:
      if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0LL) )
      {
        if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
          Empty = System_String__Concat_44577788(Empty, (System_String_o *)StringLiteral_709/*", "*/, 0LL);
        return System_String__Concat_44577788(Empty, this->fields.debugComment, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  bool v14; // w8
  int64_t UserId; // x0
  int32_t questPhase; // w19
  int32_t questId; // w20
  int64_t v18; // x21
  int32_t svtId; // w19
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IList_int__o *v23; // x20
  System_Collections_Generic_IList_int__o *routeIds; // x22
  int32_t checkType; // w19
  int32_t count; // w21
  System_Collections_Generic_IList_int__o *v27; // x20
  System_Collections_Generic_IList_int__o *v28; // x22
  int32_t v29; // w19
  int32_t v30; // w21
  bool IsCollection; // w0
  ScriptManager_c *v32; // x0
  __int64 v33; // x0

  if ( (byte_42ED152 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ScriptManager_TypeInfo, v11, v12, v13);
    byte_42ED152 = 1;
  }
  v14 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      if ( !byte_42E6D93 )
      {
        sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)method, v2, v3);
        byte_42E6D93 = 1;
      }
      v32 = ScriptManager_TypeInfo;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v32 = ScriptManager_TypeInfo;
      }
      return v32->static_fields->scriptGenderSettingIndex == 1;
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
      v18 = UserId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear(v18, questId, questPhase, -1, 0, 0LL);
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
      v21 = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v21 )
        goto LABEL_50;
      v23 = (System_Collections_Generic_IList_int__o *)v21;
      if ( !*(_DWORD *)(v21 + 24) )
        goto LABEL_51;
      *(_DWORD *)(v21 + 32) = this->fields.questId;
      routeIds = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      count = this->fields.count;
      checkType = this->fields.checkType;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsRouteSelect_25939196(v23, routeIds, count, checkType, 0LL);
    case 8:
      v21 = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v21 )
LABEL_50:
        sub_B5D69C(v21, v22);
      v27 = (System_Collections_Generic_IList_int__o *)v21;
      if ( !*(_DWORD *)(v21 + 24) )
      {
LABEL_51:
        v33 = sub_B5D6C8(v21);
        sub_B5D668(v33, 0LL);
      }
      *(_DWORD *)(v21 + 32) = this->fields.questId;
      v28 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v30 = this->fields.count;
      v29 = this->fields.checkType;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCollection = CondType__IsRouteSelect_25939196(v27, v28, v30, v29, 0LL);
      return !IsCollection;
    default:
      return v14;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42E5CF1 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptBranchListViewItem___c_TypeInfo, v1, v2, v3);
    byte_42E5CF1 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ScriptBranchListViewItem___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E5CF2 & 1) == 0 )
  {
    sub_B5D5C4(&UserQuestRouteEntity_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E5CF2 = 1;
  }
  if ( !data )
    return 0LL;
  v5 = *(&UserQuestRouteEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (UserQuestRouteEntity_c *)data->klass->_2.typeHierarchy[v5 - 1] == UserQuestRouteEntity_TypeInfo )
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
  __int64 v3; // x3
  ScriptBranchListViewItem___c__DisplayClass19_0_o *v5; // x20
  ScriptBranchListViewItem___c__DisplayClass19_0_o *userId; // x21
  struct ScriptBranchListViewItem_o *_4__this; // x8

  v5 = this;
  if ( (byte_42E5CF3 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_B5D5C4(
                                                                 &NetworkManager_TypeInfo,
                                                                 (_DWORD)c,
                                                                 (_DWORD)method,
                                                                 v3);
    byte_42E5CF3 = 1;
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
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
LABEL_12:
    sub_B5D69C(this, c);
  if ( c->fields.questId == _4__this->fields.questId )
    return c->fields.routeId == v5->fields.routeId;
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
  __int64 v3; // x3
  ScriptBranchListViewItem___c__DisplayClass20_0_o *v5; // x20
  ScriptBranchListViewItem___c__DisplayClass20_0_o *userId; // x21
  struct ScriptBranchListViewItem_o *_4__this; // x8
  struct System_Int32_array *routeIds; // x8
  __int64 i; // x9
  __int64 v11; // x0

  v5 = this;
  if ( (byte_42E5CF4 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_B5D5C4(
                                                                 &NetworkManager_TypeInfo,
                                                                 (_DWORD)c,
                                                                 (_DWORD)method,
                                                                 v3);
    byte_42E5CF4 = 1;
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
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( c->fields.questId != _4__this->fields.questId )
    return 0;
  routeIds = _4__this->fields.routeIds;
  if ( !routeIds )
LABEL_14:
    sub_B5D69C(this, c);
  i = v5->fields.i;
  if ( (unsigned int)i >= routeIds->max_length )
  {
    v11 = sub_B5D6C8(this);
    sub_B5D668(v11, 0LL);
  }
  return c->fields.routeId == routeIds->m_Items[i + 1];
}