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
  ListViewItem___ctor_41686696((ListViewItem_o *)this, index, 0LL);
  v20->fields.title = title;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v20->fields.title, (int64_t)title, v21, v22, v23, v24, v25, v26);
  v20->fields.tag = tag;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v20->fields.tag, (int64_t)tag, v27, v28, v29, v30, v31, v32);
  v20->fields.questId = questId;
  v20->fields.questPhase = questFlag;
  v20->fields.svtId = svtId;
  v20->fields.routeIds = routeId;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v20->fields.routeIds, (int64_t)routeId, v33, v34, v35, v36, v37, v38);
  v20->fields.debugComment = debugComment;
  v20 = (ScriptBranchListViewItem_o *)((char *)v20 + 144);
  v20->fields.sortIndex = count;
  v20->fields.loopIndex = checkType;
  sub_1BE4A70((PartyOrganizationUtility_o *)v20, (int64_t)debugComment, v39, v40, v41, v42, v43, v44);
  v45 = System_Int32__Parse(strLine, 0LL);
  v20[-1].fields.branchType = 1;
  LODWORD(v20->monitor) = v45;
  LODWORD(v20->fields.sortValue0) = branchType;
}


void __fastcall ScriptBranchListViewItem__AddLineStr(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *tag; // x20
  System_String_o *v4; // x0
  struct System_String_o *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B642EC & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_160/*" - "*/, method);
    byte_4B642EC = 1;
  }
  ++this->fields.lineCount;
  tag = this->fields.tag;
  v4 = System_Int32__ToString((int)this + 136, 0LL);
  v5 = System_String__Concat_62710068(tag, (System_String_o *)StringLiteral_160/*" - "*/, v4, 0LL);
  this->fields.title = v5;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.title, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
  __int64 v13; // x22
  NetworkManager_c *v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Func_object__bool__o **v22; // x24
  System_Func_object__bool__o *v23; // x25
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UserQuestRouteEntity_o *v30; // x25
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Int32_array *routeIds; // x8
  __int64 v38; // x9
  struct UserQuestRouteEntity_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  int32_t v43; // w8

  if ( (byte_4B642E9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_UserQuestRouteEntity___, list);
    sub_1BE4ACC(&System_Func_UserQuestRouteEntity__bool__TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__, v8);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__, v10);
    sub_1BE4ACC(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo, v11);
    sub_1BE4ACC(&UserQuestRouteEntity_TypeInfo, v12);
    byte_4B642E9 = 1;
  }
  v13 = sub_1BE4D18(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
LABEL_25:
    sub_1BE4D28(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 24) = 0;
  if ( cnt >= 1 )
  {
    v22 = (System_Func_object__bool__o **)(v13 + 32);
    do
    {
      v23 = *v22;
      if ( !*v22 )
      {
        v23 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_UserQuestRouteEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v23,
          (Il2CppObject *)v13,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          0LL);
        *(_QWORD *)(v13 + 32) = v23;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)v23, v24, v25, v26, v27, v28, v29);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v23,
              (const MethodInfo_2F4407C *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v30 = (UserQuestRouteEntity_o *)sub_1BE4D18(UserQuestRouteEntity_TypeInfo);
        UserQuestRouteEntity___ctor(v30, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B61717 )
        {
          sub_1BE4ACC(&NetworkManager_TypeInfo, v15);
          byte_4B61717 = 1;
        }
        v14 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v14 = NetworkManager_TypeInfo;
        }
        if ( !v30 )
          goto LABEL_25;
        v30->fields.userId = v14->static_fields->userIdNumber;
        v30->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_25;
        v38 = *(int *)(v13 + 24);
        if ( (unsigned int)v38 >= routeIds->max_length )
          sub_1BE4D30(v14, v15);
        v30->fields.routeId = routeIds->m_Items[v38 + 1];
        if ( !list )
          goto LABEL_25;
        items = list->fields._items;
        v40 = Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__;
        ++list->fields._version;
        if ( !items )
          goto LABEL_25;
        size = list->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            (Il2CppObject *)v30,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          list->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v30;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v30, v31, v32, v33, v34, v35, v36);
        }
      }
      v43 = *(_DWORD *)(v13 + 24) + 1;
      *(_DWORD *)(v13 + 24) = v43;
    }
    while ( v43 < cnt );
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
  int32_t branchType; // w8
  __int64 Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *v26; // x22
  __int64 v27; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  NetworkManager_c *v36; // x0
  int32_t questPhase; // w8
  char v38; // w19
  Il2CppObject *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x22
  ScriptBranchListViewItem___c_c *v41; // x0
  System_Func_object__object__o *_9__18_0; // x23
  Il2CppObject *v43; // x24
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v52; // x0
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  int32_t v55; // w8
  System_Collections_Generic_List_UserQuestRouteEntity__o *v56; // x22
  bool v57; // w20
  int32_t v58; // w19
  ScriptManager_c *v59; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  UserServantCollectionEntity_o *v63; // x20
  UserServantCollectionEntity_o *v64; // x20
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // kr00_16
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  UserServantCollectionEntity_o *v73; // x20
  System_Object_array *v74; // x19
  JsonManager_c *v75; // x0
  int32_t checkType; // w8
  int count; // w2
  Il2CppObject *v78; // x0
  __int64 v79; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B642E7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserQuestMaster___, flag);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___, v8);
    sub_1BE4ACC(&System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo, v9);
    sub_1BE4ACC(&JsonManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__, v11);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__, v16);
    sub_1BE4ACC(&ScriptBranchListViewItem___c_TypeInfo, v17);
    sub_1BE4ACC(&UserQuestEntity___TypeInfo, v18);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v19);
    sub_1BE4ACC(&UserServantCollectionEntity___TypeInfo, v20);
    sub_1BE4ACC(&UserServantCollectionEntity_TypeInfo, v21);
    byte_4B642E7 = 1;
  }
  entity = 0LL;
  branchType = this->fields.branchType;
  switch ( branchType )
  {
    case -1:
      if ( flag )
        v58 = 1;
      else
        v58 = 2;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4B642D3 )
      {
        sub_1BE4ACC(&ScriptManager_TypeInfo, flag);
        byte_4B642D3 = 1;
      }
      v59 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v59 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v59->static_fields->scriptServerSettingAddress;
      if ( !byte_4B642D4 )
      {
        sub_1BE4ACC(&ScriptManager_TypeInfo, flag);
        v59 = ScriptManager_TypeInfo;
        byte_4B642D4 = 1;
      }
      if ( !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        v59 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v59->static_fields->scriptObjectSettingAddress;
      if ( !byte_4B642D7 )
      {
        sub_1BE4ACC(&ScriptManager_TypeInfo, flag);
        v59 = ScriptManager_TypeInfo;
        byte_4B642D7 = 1;
      }
      if ( !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        v59 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v59->static_fields->scriptStartModeSettingName;
      if ( !byte_4B643C9 )
      {
        sub_1BE4ACC(&ScriptManager_TypeInfo, flag);
        v59 = ScriptManager_TypeInfo;
        byte_4B643C9 = 1;
      }
      if ( !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        v59 = ScriptManager_TypeInfo;
      }
      ScriptManager__SetScriptServerSetting(
        scriptServerSettingAddress,
        scriptObjectSettingAddress,
        v58,
        scriptStartModeSettingName,
        v59->static_fields->isHiddenTruthSetting,
        0LL);
      return;
    case 0:
    case 1:
      v38 = (branchType != 0) ^ flag;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__SetIsCollection(v38 & 1, 0LL);
      return;
    case 2:
    case 3:
    case 11:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, v24);
        byte_4B61717 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_132;
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)MasterData_object,
                            *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                            this->fields.questId,
                            0LL);
      if ( Instance )
        goto LABEL_30;
      v26 = (UserQuestEntity_o *)sub_1BE4D18(UserQuestEntity_TypeInfo);
      UserQuestEntity___ctor(v26, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, v24);
        byte_4B61717 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v26 )
        goto LABEL_132;
      v26->fields.userId = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      v26->fields.questId = this->fields.questId;
      Instance = sub_1BE4B74(UserQuestEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_132;
      v27 = Instance;
      Instance = sub_1BE4C08(v26, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_134;
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_133;
      *(_QWORD *)(v27 + 32) = v26;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v26, v28, v29, v30, v31, v32, v33);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v34 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v27, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)MasterData_object, v34, 0LL);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, v35);
        byte_4B61717 = 1;
      }
      v36 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v36 = NetworkManager_TypeInfo;
      }
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)MasterData_object,
                            v36->static_fields->userIdNumber,
                            this->fields.questId,
                            0LL);
LABEL_30:
      questPhase = this->fields.questPhase;
      if ( flag )
      {
        if ( questPhase < 1 )
        {
          if ( Instance )
            goto LABEL_113;
        }
        else if ( Instance )
        {
          *(_DWORD *)(Instance + 36) = questPhase;
LABEL_113:
          *(_DWORD *)(Instance + 40) = questPhase + 1;
          return;
        }
LABEL_132:
        sub_1BE4D28(Instance, v24);
      }
      if ( questPhase < 1 )
      {
        if ( !Instance )
          goto LABEL_132;
      }
      else
      {
        if ( !Instance )
          goto LABEL_132;
        *(_DWORD *)(Instance + 36) = 0;
      }
      *(_DWORD *)(Instance + 40) = 0;
      return;
    case 4:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__SetIsRevival(flag, 0LL);
      return;
    case 5:
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      v39 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, v24);
        byte_4B61717 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v39 )
        goto LABEL_132;
      Instance = UserServantCollectionMaster__TryGetEntity(
                   (UserServantCollectionMaster_o *)v39,
                   &entity,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   this->fields.svtId,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_132;
        if ( flag )
          entity->fields.status = 2;
        else
          entity->fields.status = 0;
        return;
      }
      if ( !flag )
        return;
      v63 = (UserServantCollectionEntity_o *)sub_1BE4D18(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor(v63, 0LL);
      entity = v63;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, v24);
        byte_4B61717 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v63 )
        goto LABEL_132;
      v63->fields.userId = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      v64 = entity;
      svtId = this->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      v24 = *(_QWORD *)&v66.fields.fakeValue;
      Instance = *(_QWORD *)&v66.fields.currentCryptoKey;
      if ( !v64 )
        goto LABEL_132;
      v64->fields.svtId = v66;
      if ( !entity )
        goto LABEL_132;
      entity->fields.status = 2;
      Instance = sub_1BE4B74(UserServantCollectionEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_132;
      v73 = entity;
      v74 = (System_Object_array *)Instance;
      if ( entity )
      {
        Instance = sub_1BE4C08(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_134:
          v79 = sub_1BE4D4C();
          sub_1BE4BF4(v79, 0LL);
        }
      }
      if ( !v74->max_length )
LABEL_133:
        sub_1BE4D30(Instance, v24);
      v74->m_Items[0] = (Il2CppObject *)v73;
      sub_1BE4A70((PartyOrganizationUtility_o *)v74->m_Items, (int64_t)v73, v67, v68, v69, v70, v71, v72);
      v75 = JsonManager_TypeInfo;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        goto LABEL_129;
      goto LABEL_130;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_132;
      v39 = (Il2CppObject *)Instance;
      v40 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 32);
      v41 = ScriptBranchListViewItem___c_TypeInfo;
      if ( !ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo);
        v41 = ScriptBranchListViewItem___c_TypeInfo;
      }
      _9__18_0 = (System_Func_object__object__o *)v41->static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = ScriptBranchListViewItem___c_TypeInfo;
        }
        v43 = (Il2CppObject *)v41->static_fields->__9;
        _9__18_0 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo);
        System_Func_object__object____ctor(
          _9__18_0,
          v43,
          Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__,
          0LL);
        static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__18_0 = (struct System_Func_DataEntityBase__UserQuestRouteEntity__o *)_9__18_0;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
          (int64_t)_9__18_0,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
      }
      v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v40,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___);
      v52 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v51,
                                                                         (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v55 = this->fields.branchType;
      v56 = v52;
      v57 = (v55 != 7 || !flag) && (v55 != 8 || flag);
      checkType = this->fields.checkType;
      if ( !checkType )
      {
        if ( !this->fields.count )
        {
          if ( v57 )
          {
            count = 1;
            goto LABEL_121;
          }
          goto LABEL_125;
        }
        ScriptBranchListViewItem__RemoveUserQuestRoute(this, v52, v53);
        if ( v57 )
          goto LABEL_126;
LABEL_120:
        count = this->fields.count;
        goto LABEL_121;
      }
      if ( checkType == 1 )
      {
        if ( v57 )
          goto LABEL_125;
        goto LABEL_120;
      }
      if ( checkType != 2 )
        goto LABEL_126;
      if ( v57 )
      {
        count = this->fields.count + 1;
LABEL_121:
        ScriptBranchListViewItem__AddUserQuestRoute(this, v56, count, v54);
        goto LABEL_126;
      }
LABEL_125:
      ScriptBranchListViewItem__RemoveUserQuestRoute(this, v52, v53);
LABEL_126:
      Instance = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v39->klass->vtable[7].method)(
                   v39,
                   v39->klass->vtable[8].methodPtr);
      if ( !v56 )
        goto LABEL_132;
      v74 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)v56,
              (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v75 = JsonManager_TypeInfo;
LABEL_129:
        j_il2cpp_runtime_class_init_0(v75);
      }
LABEL_130:
      v78 = (Il2CppObject *)JsonManager__toJson(&v74->obj, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)v39, v78, 0LL);
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
  struct System_Int32_array *routeIds; // x23
  unsigned __int64 v10; // x24
  __int64 v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  System_Predicate_object__o *v20; // x22
  Il2CppObject *v21; // x0

  v4 = this;
  if ( (byte_4B642E8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__, list);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__, v5);
    sub_1BE4ACC(&System_Predicate_UserQuestRouteEntity__TypeInfo, v6);
    sub_1BE4ACC(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__, v7);
    this = (ScriptBranchListViewItem_o *)sub_1BE4ACC(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo, v8);
    byte_4B642E8 = 1;
  }
  routeIds = v4->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( (int)routeIds->max_length >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = sub_1BE4D18(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0LL);
      if ( !v11 )
        break;
      *(_QWORD *)(v11 + 24) = v4;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)v4, v12, v13, v14, v15, v16, v17);
      if ( v10 >= routeIds->max_length )
        sub_1BE4D30(v18, v19);
      *(_DWORD *)(v11 + 16) = routeIds->m_Items[v10 + 1];
      v20 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_UserQuestRouteEntity__TypeInfo);
      System_Predicate_object____ctor(
        v20,
        (Il2CppObject *)v11,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        0LL);
      if ( !list )
        break;
      v21 = System_Collections_Generic_List_object___Find(
              (System_Collections_Generic_List_object__o *)list,
              (System_Predicate_T__o *)v20,
              (const MethodInfo_35EC88C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v21 )
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)list,
          v21,
          (const MethodInfo_35ED74C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v10 >= (int)routeIds->max_length )
        return list;
    }
LABEL_13:
    sub_1BE4D28(this, list);
  }
  return list;
}


System_String_o *__fastcall ScriptBranchListViewItem__get_CommentText(
        ScriptBranchListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_String_o *Empty; // x20
  System_String_o *v20; // x20
  int32_t v21; // w0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 *v24; // x8
  Il2CppObject *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1
  struct System_Int32_array *routeIds; // x8
  System_String_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_String_o *v40; // x20
  int64_t v41; // x1
  struct System_Int32_array *v42; // x8
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int32_t questId; // [xsp+8h] [xbp-28h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B642EA & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, method);
    sub_1BE4ACC(&string___TypeInfo, v6);
    sub_1BE4ACC(&string_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_21100/*"isNotMaterial"*/, v8);
    sub_1BE4ACC(&StringLiteral_9044/*"Master : Female"*/, v9);
    sub_1BE4ACC(&StringLiteral_865/*", "*/, v10);
    sub_1BE4ACC(&StringLiteral_6876/*"Flag   : back"*/, v11);
    sub_1BE4ACC(&StringLiteral_9748/*"Number : {0}, releaseId : {1}"*/, v12);
    sub_1BE4ACC(&StringLiteral_6875/*"Flag   : "*/, v13);
    sub_1BE4ACC(&StringLiteral_9045/*"Master : Male"*/, v14);
    sub_1BE4ACC(&StringLiteral_21113/*"isRevival"*/, v15);
    sub_1BE4ACC(&StringLiteral_898/*", questId:"*/, v16);
    sub_1BE4ACC(&StringLiteral_12830/*"ServantId : "*/, v17);
    sub_1BE4ACC(&StringLiteral_21098/*"isMaterial"*/, v18);
    byte_4B642EA = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v24 = &StringLiteral_9045/*"Master : Male"*/;
      else
        v24 = &StringLiteral_9044/*"Master : Female"*/;
      goto LABEL_28;
    case 0:
      v24 = &StringLiteral_21098/*"isMaterial"*/;
      goto LABEL_28;
    case 1:
      v24 = &StringLiteral_21100/*"isNotMaterial"*/;
      goto LABEL_28;
    case 2:
    case 3:
      v20 = System_Int32__ToString((int)this + 128, 0LL);
      v21 = (_DWORD)this + 132;
      goto LABEL_15;
    case 4:
      v24 = &StringLiteral_21113/*"isRevival"*/;
LABEL_28:
      Empty = (System_String_o *)*v24;
      goto LABEL_29;
    case 5:
    case 6:
      v22 = System_Int32__ToString((int)this + 156, 0LL);
      v23 = System_String__Concat_62698808((System_String_o *)StringLiteral_12830/*"ServantId : "*/, v22, 0LL);
      break;
    case 9:
      questPhase = this->fields.questPhase;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase, v2, v3, v4);
      questId = this->fields.questId;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId, v26, v27, v28);
      v23 = System_String__Format_62713180((System_String_o *)StringLiteral_9748/*"Number : {0}, releaseId : {1}"*/, v25, v29, 0LL);
      break;
    case 0xA:
      v30 = System_Int32__ToString((int)this + 128, 0LL);
      routeIds = this->fields.routeIds;
      if ( !routeIds )
        goto LABEL_35;
      if ( !routeIds->max_length )
        goto LABEL_34;
      v20 = v30;
      v21 = (_DWORD)routeIds + 32;
LABEL_15:
      v33 = System_Int32__ToString(v21, 0LL);
      v23 = System_String__Concat_62712072(
              (System_String_o *)StringLiteral_6875/*"Flag   : "*/,
              v20,
              (System_String_o *)StringLiteral_865/*", "*/,
              v33,
              0LL);
      break;
    case 0xB:
      v30 = (System_String_o *)sub_1BE4B74(string___TypeInfo, 6LL);
      if ( !v30 )
        goto LABEL_35;
      v40 = v30;
      if ( !LODWORD(v30[1].klass) )
        goto LABEL_34;
      v41 = StringLiteral_6876/*"Flag   : back"*/;
      v30[1].monitor = (void *)StringLiteral_6876/*"Flag   : back"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v30[1].monitor, v41, v34, v35, v36, v37, v38, v39);
      v42 = this->fields.routeIds;
      if ( !v42 )
LABEL_35:
        sub_1BE4D28(v30, v31);
      if ( !v42->max_length )
        goto LABEL_34;
      v30 = System_Int32__ToString((int)v42 + 32, 0LL);
      if ( LODWORD(v40[1].klass) <= 1 )
        goto LABEL_34;
      v40[1].fields = (System_String_Fields)v30;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v40[1].fields, (int64_t)v30, v43, v44, v45, v46, v47, v48);
      if ( LODWORD(v40[1].klass) <= 2 )
        goto LABEL_34;
      v55 = StringLiteral_898/*", questId:"*/;
      v40[2].klass = (System_String_c *)StringLiteral_898/*", questId:"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v40[2], v55, v49, v50, v51, v52, v53, v54);
      v30 = System_Int32__ToString((int)this + 128, 0LL);
      if ( LODWORD(v40[1].klass) <= 3
        || (v40[2].monitor = v30,
            sub_1BE4A70((PartyOrganizationUtility_o *)&v40[2].monitor, (int64_t)v30, v56, v57, v58, v59, v60, v61),
            LODWORD(v40[1].klass) <= 4)
        || (v68 = StringLiteral_865/*", "*/,
            v40[2].fields = (System_String_Fields)StringLiteral_865/*", "*/,
            sub_1BE4A70((PartyOrganizationUtility_o *)&v40[2].fields, v68, v62, v63, v64, v65, v66, v67),
            v30 = System_Int32__ToString((int)this + 132, 0LL),
            LODWORD(v40[1].klass) <= 5) )
      {
LABEL_34:
        sub_1BE4D30(v30, v31);
      }
      v40[3].klass = (System_String_c *)v30;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v40[3], (int64_t)v30, v69, v70, v71, v72, v73, v74);
      v23 = System_String__Concat_62712336((System_String_array *)v40, 0LL);
      break;
    default:
      goto LABEL_29;
  }
  Empty = v23;
LABEL_29:
  if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0LL) )
  {
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_62698808(Empty, (System_String_o *)StringLiteral_865/*", "*/, 0LL);
    return System_String__Concat_62698808(Empty, this->fields.debugComment, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  bool v6; // w8
  NetworkManager_c *v7; // x0
  int32_t questPhase; // w19
  int32_t questId; // w21
  int64_t userIdNumber; // x20
  int32_t svtId; // w19
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IList_int__o *v15; // x20
  System_Collections_Generic_IList_int__o *routeIds; // x22
  int32_t checkType; // w19
  int32_t count; // w21
  ScriptManager_c *v19; // x0
  bool IsCollection; // w0
  System_Collections_Generic_IList_int__o *v21; // x20
  System_Collections_Generic_IList_int__o *v22; // x22
  int32_t v23; // w19
  int32_t v24; // w21

  if ( (byte_4B642EB & 1) == 0 )
  {
    sub_1BE4ACC(&CondType_TypeInfo, method);
    sub_1BE4ACC(&int___TypeInfo, v3);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v4);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v5);
    byte_4B642EB = 1;
  }
  v6 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4B642D8 )
      {
        sub_1BE4ACC(&ScriptManager_TypeInfo, method);
        byte_4B642D8 = 1;
      }
      v19 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v19 = ScriptManager_TypeInfo;
      }
      return v19->static_fields->scriptGenderSettingIndex == 1;
    case 0:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      return ScriptManager__GetIsCollection(0LL);
    case 1:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      IsCollection = ScriptManager__GetIsCollection(0LL);
      return !IsCollection;
    case 2:
    case 3:
    case 0xB:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, method);
        byte_4B61717 = 1;
      }
      v7 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v7 = NetworkManager_TypeInfo;
      }
      questId = this->fields.questId;
      questPhase = this->fields.questPhase;
      userIdNumber = v7->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear(userIdNumber, questId, questPhase, -1, 0, 0LL);
    case 4:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      return ScriptManager__GetIsRevival(0LL);
    case 5:
    case 6:
      svtId = this->fields.svtId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen(8, svtId, 0LL, 0, 0LL, 0LL);
    case 7:
      v13 = sub_1BE4B74(int___TypeInfo, 1LL);
      if ( !v13 )
        goto LABEL_44;
      v15 = (System_Collections_Generic_IList_int__o *)v13;
      if ( !*(_DWORD *)(v13 + 24) )
        goto LABEL_45;
      *(_DWORD *)(v13 + 32) = this->fields.questId;
      routeIds = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      count = this->fields.count;
      checkType = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsRouteSelect_38560376(v15, routeIds, count, checkType, 0LL);
    case 8:
      v13 = sub_1BE4B74(int___TypeInfo, 1LL);
      if ( !v13 )
LABEL_44:
        sub_1BE4D28(v13, v14);
      v21 = (System_Collections_Generic_IList_int__o *)v13;
      if ( !*(_DWORD *)(v13 + 24) )
LABEL_45:
        sub_1BE4D30(v13, v14);
      *(_DWORD *)(v13 + 32) = this->fields.questId;
      v22 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v24 = this->fields.count;
      v23 = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCollection = CondType__IsRouteSelect_38560376(v21, v22, v24, v23, 0LL);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B642ED & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptBranchListViewItem___c_TypeInfo, v1);
    byte_4B642ED = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ScriptBranchListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ScriptBranchListViewItem___c_TypeInfo->static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ScriptBranchListViewItem___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B642EE & 1) == 0 )
  {
    sub_1BE4ACC(&UserQuestRouteEntity_TypeInfo, data);
    byte_4B642EE = 1;
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
  int64_t userId; // x21
  struct ScriptBranchListViewItem_o *_4__this; // x8

  v4 = this;
  if ( (byte_4B642EF & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_1BE4ACC(&NetworkManager_TypeInfo, c);
    byte_4B642EF = 1;
  }
  if ( !c )
    goto LABEL_15;
  userId = c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, c);
    byte_4B61717 = 1;
  }
  this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)NetworkManager_TypeInfo;
  }
  if ( userId != this[5].fields.__4__this->fields.sortValue1B )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
LABEL_15:
    sub_1BE4D28(this, c);
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
  int64_t userId; // x21
  struct ScriptBranchListViewItem_o *_4__this; // x8
  struct System_Int32_array *routeIds; // x8
  __int64 i; // x9

  v4 = this;
  if ( (byte_4B642F0 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_1BE4ACC(&NetworkManager_TypeInfo, c);
    byte_4B642F0 = 1;
  }
  if ( !c )
    goto LABEL_17;
  userId = c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, c);
    byte_4B61717 = 1;
  }
  this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)NetworkManager_TypeInfo;
  }
  if ( userId != *(_QWORD *)(*(_QWORD *)&this[4].fields.i + 64LL) )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( c->fields.questId != _4__this->fields.questId )
    return 0;
  routeIds = _4__this->fields.routeIds;
  if ( !routeIds )
LABEL_17:
    sub_1BE4D28(this, c);
  i = v4->fields.i;
  if ( (unsigned int)i >= routeIds->max_length )
    sub_1BE4D30(this, c);
  return c->fields.routeId == routeIds->m_Items[i + 1];
}