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
  ScriptBranchListViewItem_o *v20; // x27
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int32_t v45; // w0

  v20 = this;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  v20->fields.title = title;
  sub_1BCA784((PartyOrganizationUtility_o *)&v20->fields.title, (int64_t)title, v21, v22, v23, v24, v25, v26);
  v20->fields.tag = tag;
  sub_1BCA784((PartyOrganizationUtility_o *)&v20->fields.tag, (int64_t)tag, v27, v28, v29, v30, v31, v32);
  v20->fields.questId = questId;
  v20->fields.questPhase = questFlag;
  v20->fields.svtId = svtId;
  v20->fields.routeIds = routeId;
  sub_1BCA784((PartyOrganizationUtility_o *)&v20->fields.routeIds, (int64_t)routeId, v33, v34, v35, v36, v37, v38);
  v20->fields.debugComment = debugComment;
  v20 = (ScriptBranchListViewItem_o *)((char *)v20 + 144);
  v20->fields.sortIndex = count;
  v20->fields.loopIndex = checkType;
  sub_1BCA784((PartyOrganizationUtility_o *)v20, (int64_t)debugComment, v39, v40, v41, v42, v43, v44);
  v45 = System_Int32__Parse(strLine, 0LL);
  v20[-1].fields.branchType = 1;
  LODWORD(v20->monitor) = v45;
  LODWORD(v20->fields.sortValue0) = branchType;
}


void __fastcall ScriptBranchListViewItem__AddLineStr(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *tag; // x20
  System_String_o *v5; // x0
  struct System_String_o *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B13949 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_160/*" - "*/, method, v2);
    byte_4B13949 = 1;
  }
  ++this->fields.lineCount;
  tag = this->fields.tag;
  v5 = System_Int32__ToString((int)this + 136, 0LL);
  v6 = System_String__Concat_62412480(tag, (System_String_o *)StringLiteral_160/*" - "*/, v5, 0LL);
  this->fields.title = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.title, (int64_t)v6, v7, v8, v9, v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserQuestRouteEntity__o *__fastcall ScriptBranchListViewItem__AddUserQuestRoute(
        ScriptBranchListViewItem_o *this,
        System_Collections_Generic_List_UserQuestRouteEntity__o *list,
        int32_t cnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x22
  int64_t UserId; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Func_object__bool__o **v31; // x23
  System_Func_object__bool__o *v32; // x24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UserQuestRouteEntity_o *v39; // x24
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Int32_array *routeIds; // x8
  __int64 v48; // x9
  struct UserQuestRouteEntity_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  int32_t v53; // w8

  if ( (byte_4B13946 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_UserQuestRouteEntity___, list, *(_QWORD *)&cnt);
    sub_1BCA7E0(&System_Func_UserQuestRouteEntity__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__, v13, v14);
    sub_1BCA7E0(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserQuestRouteEntity_TypeInfo, v17, v18);
    byte_4B13946 = 1;
  }
  v19 = sub_1BCAA2C(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo, list, *(_QWORD *)&cnt, method);
  ScriptBranchListViewItem___c__DisplayClass20_0___ctor((ScriptBranchListViewItem___c__DisplayClass20_0_o *)v19, 0LL);
  if ( !v19 )
LABEL_21:
    sub_1BCAA3C(UserId, v21);
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v19 + 24) = 0;
  if ( cnt >= 1 )
  {
    v31 = (System_Func_object__bool__o **)(v19 + 32);
    do
    {
      v32 = *v31;
      if ( !*v31 )
      {
        v32 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_UserQuestRouteEntity__bool__TypeInfo,
                                               v28,
                                               v29,
                                               v30);
        System_Func_object__bool____ctor(
          v32,
          (Il2CppObject *)v19,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          0LL);
        *(_QWORD *)(v19 + 32) = v32;
        sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)v32, v33, v34, v35, v36, v37, v38);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v32,
              (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v39 = (UserQuestRouteEntity_o *)sub_1BCAA2C(UserQuestRouteEntity_TypeInfo, v28, v29, v30);
        UserQuestRouteEntity___ctor(v39, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v39 )
          goto LABEL_21;
        v39->fields.userId = UserId;
        v39->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_21;
        v48 = *(int *)(v19 + 24);
        if ( (unsigned int)v48 >= routeIds->max_length )
          sub_1BCAA44(UserId, v21);
        v39->fields.routeId = routeIds->m_Items[v48 + 1];
        if ( !list )
          goto LABEL_21;
        items = list->fields._items;
        v50 = Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__;
        ++list->fields._version;
        if ( !items )
          goto LABEL_21;
        size = list->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            (Il2CppObject *)v39,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &items->obj.klass + size;
          list->fields._size = size + 1;
          v52[4] = (Il2CppClass *)v39;
          sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v39, v41, v42, v43, v44, v45, v46);
        }
      }
      v53 = *(_DWORD *)(v19 + 24) + 1;
      *(_DWORD *)(v19 + 24) = v53;
    }
    while ( v53 < cnt );
  }
  return list;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchListViewItem__ChangeFlag(
        ScriptBranchListViewItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  int32_t branchType; // w8
  __int64 Instance; // x0
  __int64 v41; // x1
  __int64 v42; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  UserQuestEntity_o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x23
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  Il2CppObject *v56; // x0
  int64_t UserId; // x0
  int32_t questPhase; // w8
  char v59; // w19
  __int64 v60; // x1
  Il2CppObject *v61; // x21
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x2
  __int64 v65; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x22
  ScriptBranchListViewItem___c_c *v67; // x0
  System_Func_object__object__o *_9__18_0; // x23
  Il2CppObject *v69; // x24
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v78; // x0
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x3
  int32_t v81; // w8
  System_Collections_Generic_List_UserQuestRouteEntity__o *v82; // x22
  bool v83; // w20
  int32_t v84; // w19
  ScriptManager_c *v85; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  UserServantCollectionEntity_o *v89; // x20
  __int64 v90; // x1
  UserServantCollectionEntity_o *v91; // x20
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // kr00_16
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  UserServantCollectionEntity_o *v100; // x20
  System_Object_array *v101; // x19
  __int64 v102; // x1
  JsonManager_c *v103; // x0
  int32_t checkType; // w8
  int count; // w2
  Il2CppObject *v106; // x0
  __int64 v107; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B13944 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, flag, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___, v11, v12);
    sub_1BCA7E0(&System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&JsonManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__, v27, v28);
    sub_1BCA7E0(&ScriptBranchListViewItem___c_TypeInfo, v29, v30);
    sub_1BCA7E0(&UserQuestEntity___TypeInfo, v31, v32);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v33, v34);
    sub_1BCA7E0(&UserServantCollectionEntity___TypeInfo, v35, v36);
    sub_1BCA7E0(&UserServantCollectionEntity_TypeInfo, v37, v38);
    byte_4B13944 = 1;
  }
  entity = 0LL;
  branchType = this->fields.branchType;
  switch ( branchType )
  {
    case -1:
      if ( flag )
        v84 = 1;
      else
        v84 = 2;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, flag);
      if ( !byte_4B13951 )
      {
        sub_1BCA7E0(&ScriptManager_TypeInfo, flag, method);
        byte_4B13951 = 1;
      }
      v85 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, flag);
        v85 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v85->static_fields->scriptServerSettingAddress;
      if ( !byte_4B13952 )
      {
        sub_1BCA7E0(&ScriptManager_TypeInfo, flag, method);
        v85 = ScriptManager_TypeInfo;
        byte_4B13952 = 1;
      }
      if ( !v85->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v85, flag);
        v85 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v85->static_fields->scriptObjectSettingAddress;
      if ( !byte_4B13955 )
      {
        sub_1BCA7E0(&ScriptManager_TypeInfo, flag, method);
        v85 = ScriptManager_TypeInfo;
        byte_4B13955 = 1;
      }
      if ( !v85->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v85, flag);
        v85 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v85->static_fields->scriptStartModeSettingName;
      if ( !byte_4B13959 )
      {
        sub_1BCA7E0(&ScriptManager_TypeInfo, flag, method);
        v85 = ScriptManager_TypeInfo;
        byte_4B13959 = 1;
      }
      if ( !v85->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v85, flag);
        v85 = ScriptManager_TypeInfo;
      }
      ScriptManager__SetScriptServerSetting(
        scriptServerSettingAddress,
        scriptObjectSettingAddress,
        v84,
        scriptStartModeSettingName,
        v85->static_fields->isHiddenTruthSetting,
        0LL);
      return;
    case 0:
    case 1:
      v59 = (branchType != 0) ^ flag;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, flag);
      ScriptManager__SetIsCollection(v59 & 1, 0LL);
      return;
    case 2:
    case 3:
    case 11:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_112;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v42);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_112;
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)MasterData_object,
                            Instance,
                            this->fields.questId,
                            0LL);
      if ( Instance )
        goto LABEL_18;
      v46 = (UserQuestEntity_o *)sub_1BCAA2C(UserQuestEntity_TypeInfo, v41, v44, v45);
      UserQuestEntity___ctor(v46, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v47);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v46 )
        goto LABEL_112;
      v46->fields.userId = Instance;
      v46->fields.questId = this->fields.questId;
      Instance = sub_1BCA888(UserQuestEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_112;
      v48 = Instance;
      Instance = sub_1BCA91C(v46, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_114;
      if ( !*(_DWORD *)(v48 + 24) )
        goto LABEL_113;
      *(_QWORD *)(v48 + 32) = v46;
      sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 32), (int64_t)v46, v49, v50, v51, v52, v53, v54);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v55);
      v56 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v48, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)MasterData_object, v56, 0LL);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)MasterData_object,
                            UserId,
                            this->fields.questId,
                            0LL);
LABEL_18:
      questPhase = this->fields.questPhase;
      if ( flag )
      {
        if ( questPhase < 1 )
        {
          if ( Instance )
            goto LABEL_93;
        }
        else if ( Instance )
        {
          *(_DWORD *)(Instance + 36) = questPhase;
LABEL_93:
          *(_DWORD *)(Instance + 40) = questPhase + 1;
          return;
        }
LABEL_112:
        sub_1BCAA3C(Instance, v41);
      }
      if ( questPhase < 1 )
      {
        if ( !Instance )
          goto LABEL_112;
      }
      else
      {
        if ( !Instance )
          goto LABEL_112;
        *(_DWORD *)(Instance + 36) = 0;
      }
      *(_DWORD *)(Instance + 40) = 0;
      return;
    case 4:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, flag);
      ScriptManager__SetIsRevival(flag, 0LL);
      return;
    case 5:
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_112;
      v61 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v60);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v61 )
        goto LABEL_112;
      Instance = UserServantCollectionMaster__TryGetEntity(
                   (UserServantCollectionMaster_o *)v61,
                   &entity,
                   Instance,
                   this->fields.svtId,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_112;
        if ( flag )
          entity->fields.status = 2;
        else
          entity->fields.status = 0;
        return;
      }
      if ( !flag )
        return;
      v89 = (UserServantCollectionEntity_o *)sub_1BCAA2C(UserServantCollectionEntity_TypeInfo, v41, v62, v63);
      UserServantCollectionEntity___ctor(v89, 0LL);
      entity = v89;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v90);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v89 )
        goto LABEL_112;
      v89->fields.userId = Instance;
      v91 = entity;
      svtId = this->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
      v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      v41 = *(_QWORD *)&v93.fields.fakeValue;
      Instance = *(_QWORD *)&v93.fields.currentCryptoKey;
      if ( !v91 )
        goto LABEL_112;
      v91->fields.svtId = v93;
      if ( !entity )
        goto LABEL_112;
      entity->fields.status = 2;
      Instance = sub_1BCA888(UserServantCollectionEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_112;
      v100 = entity;
      v101 = (System_Object_array *)Instance;
      if ( entity )
      {
        Instance = sub_1BCA91C(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_114:
          v107 = sub_1BCAA60();
          sub_1BCA908(v107, 0LL);
        }
      }
      if ( !v101->max_length )
LABEL_113:
        sub_1BCAA44(Instance, v41);
      v101->m_Items[0] = (Il2CppObject *)v100;
      sub_1BCA784((PartyOrganizationUtility_o *)v101->m_Items, (int64_t)v100, v94, v95, v96, v97, v98, v99);
      v103 = JsonManager_TypeInfo;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        goto LABEL_109;
      goto LABEL_110;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_112;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_112;
      v61 = (Il2CppObject *)Instance;
      v66 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 32);
      v67 = ScriptBranchListViewItem___c_TypeInfo;
      if ( !ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo, v41);
        v67 = ScriptBranchListViewItem___c_TypeInfo;
      }
      _9__18_0 = (System_Func_object__object__o *)v67->static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( !v67->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v67, v41);
          v67 = ScriptBranchListViewItem___c_TypeInfo;
        }
        v69 = (Il2CppObject *)v67->static_fields->__9;
        _9__18_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                      System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo,
                                                      v41,
                                                      v64,
                                                      v65);
        System_Func_object__object____ctor(
          _9__18_0,
          v69,
          Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__,
          0LL);
        static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__18_0 = (struct System_Func_DataEntityBase__UserQuestRouteEntity__o *)_9__18_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
          (int64_t)_9__18_0,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76);
      }
      v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v66,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___);
      v78 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v77,
                                                                         (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v81 = this->fields.branchType;
      v82 = v78;
      v83 = (v81 != 7 || !flag) && (v81 != 8 || flag);
      checkType = this->fields.checkType;
      if ( !checkType )
      {
        if ( !this->fields.count )
        {
          if ( v83 )
          {
            count = 1;
            goto LABEL_101;
          }
          goto LABEL_105;
        }
        ScriptBranchListViewItem__RemoveUserQuestRoute(this, v78, v79);
        if ( v83 )
          goto LABEL_106;
LABEL_100:
        count = this->fields.count;
        goto LABEL_101;
      }
      if ( checkType == 1 )
      {
        if ( v83 )
          goto LABEL_105;
        goto LABEL_100;
      }
      if ( checkType != 2 )
        goto LABEL_106;
      if ( v83 )
      {
        count = this->fields.count + 1;
LABEL_101:
        ScriptBranchListViewItem__AddUserQuestRoute(this, v82, count, v80);
        goto LABEL_106;
      }
LABEL_105:
      ScriptBranchListViewItem__RemoveUserQuestRoute(this, v78, v79);
LABEL_106:
      Instance = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v61->klass->vtable[7].method)(
                   v61,
                   v61->klass->vtable[8].methodPtr);
      if ( !v82 )
        goto LABEL_112;
      v101 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)v82,
               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v103 = JsonManager_TypeInfo;
LABEL_109:
        j_il2cpp_runtime_class_init_0(v103, v102);
      }
LABEL_110:
      v106 = (Il2CppObject *)JsonManager__toJson(&v101->obj, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)v61, v106, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Int32_array *routeIds; // x23
  unsigned __int64 v15; // x24
  __int64 v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Predicate_object__o *v27; // x22
  Il2CppObject *v28; // x0

  v5 = this;
  if ( (byte_4B13945 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__, list, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__, v6, v7);
    sub_1BCA7E0(&System_Predicate_UserQuestRouteEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__, v10, v11);
    this = (ScriptBranchListViewItem_o *)sub_1BCA7E0(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo, v12, v13);
    byte_4B13945 = 1;
  }
  routeIds = v5->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( (int)routeIds->max_length >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v16 = sub_1BCAA2C(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo, list, method, v3);
      ScriptBranchListViewItem___c__DisplayClass19_0___ctor(
        (ScriptBranchListViewItem___c__DisplayClass19_0_o *)v16,
        0LL);
      if ( !v16 )
        break;
      *(_QWORD *)(v16 + 24) = v5;
      sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)v5, v17, v18, v19, v20, v21, v22);
      if ( v15 >= routeIds->max_length )
        sub_1BCAA44(v23, v24);
      *(_DWORD *)(v16 + 16) = routeIds->m_Items[v15 + 1];
      v27 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_UserQuestRouteEntity__TypeInfo, v24, v25, v26);
      System_Predicate_object____ctor(
        v27,
        (Il2CppObject *)v16,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        0LL);
      if ( !list )
        break;
      v28 = System_Collections_Generic_List_object___Find(
              (System_Collections_Generic_List_object__o *)list,
              (System_Predicate_T__o *)v27,
              (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v28 )
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)list,
          v28,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v15 >= (int)routeIds->max_length )
        return list;
    }
LABEL_13:
    sub_1BCAA3C(this, list);
  }
  return list;
}


System_String_o *__fastcall ScriptBranchListViewItem__get_CommentText(
        ScriptBranchListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_String_o *Empty; // x20
  System_String_o *v31; // x20
  int32_t v32; // w0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  __int64 *v35; // x8
  Il2CppObject *v36; // x20
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  __int64 v39; // x1
  struct System_Int32_array *routeIds; // x8
  System_String_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_String_o *v48; // x20
  int64_t v49; // x1
  struct System_Int32_array *v50; // x8
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int32_t questId; // [xsp+8h] [xbp-28h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13947 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&string___TypeInfo, v4, v5);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_21029/*"isNotMaterial"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9023/*"Master : Female"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_865/*", "*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_6858/*"Flag   : back"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_9725/*"Number : {0}, releaseId : {1}"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_6857/*"Flag   : "*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_9024/*"Master : Male"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_21042/*"isRevival"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_898/*", questId:"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_12793/*"ServantId : "*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_21027/*"isMaterial"*/, v28, v29);
    byte_4B13947 = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v35 = &StringLiteral_9024/*"Master : Male"*/;
      else
        v35 = &StringLiteral_9023/*"Master : Female"*/;
      goto LABEL_28;
    case 0:
      v35 = &StringLiteral_21027/*"isMaterial"*/;
      goto LABEL_28;
    case 1:
      v35 = &StringLiteral_21029/*"isNotMaterial"*/;
      goto LABEL_28;
    case 2:
    case 3:
      v31 = System_Int32__ToString((int)this + 128, 0LL);
      v32 = (_DWORD)this + 132;
      goto LABEL_15;
    case 4:
      v35 = &StringLiteral_21042/*"isRevival"*/;
LABEL_28:
      Empty = (System_String_o *)*v35;
      goto LABEL_29;
    case 5:
    case 6:
      v33 = System_Int32__ToString((int)this + 156, 0LL);
      v34 = System_String__Concat_62401220((System_String_o *)StringLiteral_12793/*"ServantId : "*/, v33, 0LL);
      break;
    case 9:
      questPhase = this->fields.questPhase;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase);
      questId = this->fields.questId;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId);
      v34 = System_String__Format_62415592((System_String_o *)StringLiteral_9725/*"Number : {0}, releaseId : {1}"*/, v36, v37, 0LL);
      break;
    case 0xA:
      v38 = System_Int32__ToString((int)this + 128, 0LL);
      routeIds = this->fields.routeIds;
      if ( !routeIds )
        goto LABEL_35;
      if ( !routeIds->max_length )
        goto LABEL_34;
      v31 = v38;
      v32 = (_DWORD)routeIds + 32;
LABEL_15:
      v41 = System_Int32__ToString(v32, 0LL);
      v34 = System_String__Concat_62414484(
              (System_String_o *)StringLiteral_6857/*"Flag   : "*/,
              v31,
              (System_String_o *)StringLiteral_865/*", "*/,
              v41,
              0LL);
      break;
    case 0xB:
      v38 = (System_String_o *)sub_1BCA888(string___TypeInfo, 6LL);
      if ( !v38 )
        goto LABEL_35;
      v48 = v38;
      if ( !LODWORD(v38[1].klass) )
        goto LABEL_34;
      v49 = StringLiteral_6858/*"Flag   : back"*/;
      v38[1].monitor = (void *)StringLiteral_6858/*"Flag   : back"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v38[1].monitor, v49, v42, v43, v44, v45, v46, v47);
      v50 = this->fields.routeIds;
      if ( !v50 )
LABEL_35:
        sub_1BCAA3C(v38, v39);
      if ( !v50->max_length )
        goto LABEL_34;
      v38 = System_Int32__ToString((int)v50 + 32, 0LL);
      if ( LODWORD(v48[1].klass) <= 1 )
        goto LABEL_34;
      v48[1].fields = (System_String_Fields)v38;
      sub_1BCA784((PartyOrganizationUtility_o *)&v48[1].fields, (int64_t)v38, v51, v52, v53, v54, v55, v56);
      if ( LODWORD(v48[1].klass) <= 2 )
        goto LABEL_34;
      v63 = StringLiteral_898/*", questId:"*/;
      v48[2].klass = (System_String_c *)StringLiteral_898/*", questId:"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v48[2], v63, v57, v58, v59, v60, v61, v62);
      v38 = System_Int32__ToString((int)this + 128, 0LL);
      if ( LODWORD(v48[1].klass) <= 3
        || (v48[2].monitor = v38,
            sub_1BCA784((PartyOrganizationUtility_o *)&v48[2].monitor, (int64_t)v38, v64, v65, v66, v67, v68, v69),
            LODWORD(v48[1].klass) <= 4)
        || (v76 = StringLiteral_865/*", "*/,
            v48[2].fields = (System_String_Fields)StringLiteral_865/*", "*/,
            sub_1BCA784((PartyOrganizationUtility_o *)&v48[2].fields, v76, v70, v71, v72, v73, v74, v75),
            v38 = System_Int32__ToString((int)this + 132, 0LL),
            LODWORD(v48[1].klass) <= 5) )
      {
LABEL_34:
        sub_1BCAA44(v38, v39);
      }
      v48[3].klass = (System_String_c *)v38;
      sub_1BCA784((PartyOrganizationUtility_o *)&v48[3], (int64_t)v38, v77, v78, v79, v80, v81, v82);
      v34 = System_String__Concat_62414748((System_String_array *)v48, 0LL);
      break;
    default:
      goto LABEL_29;
  }
  Empty = v34;
LABEL_29:
  if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0LL) )
  {
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_62401220(Empty, (System_String_o *)StringLiteral_865/*", "*/, 0LL);
    return System_String__Concat_62401220(Empty, this->fields.debugComment, 0LL);
  }
  return Empty;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  bool v10; // w8
  int64_t UserId; // x0
  __int64 v12; // x1
  int32_t questPhase; // w19
  int32_t questId; // w20
  int64_t v15; // x21
  int32_t svtId; // w19
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IList_int__o *v20; // x20
  System_Collections_Generic_IList_int__o *routeIds; // x22
  int32_t checkType; // w19
  int32_t count; // w21
  ScriptManager_c *v24; // x0
  bool IsCollection; // w0
  System_Collections_Generic_IList_int__o *v26; // x20
  System_Collections_Generic_IList_int__o *v27; // x22
  int32_t v28; // w19
  int32_t v29; // w21

  if ( (byte_4B13948 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    byte_4B13948 = 1;
  }
  v10 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
      if ( !byte_4B13956 )
      {
        sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
        byte_4B13956 = 1;
      }
      v24 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
        v24 = ScriptManager_TypeInfo;
      }
      return v24->static_fields->scriptGenderSettingIndex == 1;
    case 0:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
      return ScriptManager__GetIsCollection(0LL);
    case 1:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
      IsCollection = ScriptManager__GetIsCollection(0LL);
      return !IsCollection;
    case 2:
    case 3:
    case 0xB:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
      UserId = NetworkManager__get_UserId(0LL);
      questId = this->fields.questId;
      questPhase = this->fields.questPhase;
      v15 = UserId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
      return CondType__IsQuestPhaseClear(v15, questId, questPhase, -1, 0, 0LL);
    case 4:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
      return ScriptManager__GetIsRevival(0LL);
    case 5:
    case 6:
      svtId = this->fields.svtId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
      return CondType__IsOpen(8, svtId, 0LL, 0, 0LL, 0LL);
    case 7:
      v18 = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v18 )
        goto LABEL_40;
      v20 = (System_Collections_Generic_IList_int__o *)v18;
      if ( !*(_DWORD *)(v18 + 24) )
        goto LABEL_41;
      *(_DWORD *)(v18 + 32) = this->fields.questId;
      routeIds = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      count = this->fields.count;
      checkType = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19);
      return CondType__IsRouteSelect_38369088(v20, routeIds, count, checkType, 0LL);
    case 8:
      v18 = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v18 )
LABEL_40:
        sub_1BCAA3C(v18, v19);
      v26 = (System_Collections_Generic_IList_int__o *)v18;
      if ( !*(_DWORD *)(v18 + 24) )
LABEL_41:
        sub_1BCAA44(v18, v19);
      *(_DWORD *)(v18 + 32) = this->fields.questId;
      v27 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v29 = this->fields.count;
      v28 = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19);
      IsCollection = CondType__IsRouteSelect_38369088(v26, v27, v29, v28, 0LL);
      return !IsCollection;
    default:
      return v10;
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1395A & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptBranchListViewItem___c_TypeInfo, v1, v2);
    byte_4B1395A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ScriptBranchListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ScriptBranchListViewItem___c_TypeInfo->static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ScriptBranchListViewItem___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4B1395B & 1) == 0 )
  {
    sub_1BCA7E0(&UserQuestRouteEntity_TypeInfo, data, method);
    byte_4B1395B = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(UserQuestRouteEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserQuestRouteEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == UserQuestRouteEntity_TypeInfo )
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
  if ( (byte_4B1395C & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, c, method);
    byte_4B1395C = 1;
  }
  if ( !c )
    goto LABEL_11;
  userId = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, c);
  this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)NetworkManager__get_UserId(0LL);
  if ( userId != this )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
LABEL_11:
    sub_1BCAA3C(this, c);
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

  v4 = this;
  if ( (byte_4B1395D & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, c, method);
    byte_4B1395D = 1;
  }
  if ( !c )
    goto LABEL_13;
  userId = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, c);
  this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)NetworkManager__get_UserId(0LL);
  if ( userId != this )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  if ( c->fields.questId != _4__this->fields.questId )
    return 0;
  routeIds = _4__this->fields.routeIds;
  if ( !routeIds )
LABEL_13:
    sub_1BCAA3C(this, c);
  i = v4->fields.i;
  if ( (unsigned int)i >= routeIds->max_length )
    sub_1BCAA44(this, c);
  return c->fields.routeId == routeIds->m_Items[i + 1];
}