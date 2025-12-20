void ScriptBranchListViewItem___ctor(
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
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w0

  v20 = this;
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  v20->fields.title = title;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v20->fields.title, (int32_t)title, v21, v22, v23, v24, v25, v26);
  v20->fields.tag = tag;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v20->fields.tag, (int32_t)tag, v27, v28, v29, v30, v31, v32);
  v20->fields.questId = questId;
  v20->fields.questPhase = questFlag;
  v20->fields.svtId = svtId;
  v20->fields.routeIds = routeId;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v20->fields.routeIds, (int32_t)routeId, v33, v34, v35, v36, v37, v38);
  v20->fields.debugComment = debugComment;
  v20 = (ScriptBranchListViewItem_o *)((char *)v20 + 152);
  v20->fields.sortIndex = count;
  v20->fields.loopIndex = checkType;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v20, (int32_t)debugComment, v39, v40, v41, v42, v43, v44);
  v45 = System_Int32__Parse(strLine, 0);
  v20[-1].fields.branchType = 1;
  LODWORD(v20->monitor) = v45;
  LODWORD(v20->fields.sortValue0) = branchType;
}


void ScriptBranchListViewItem__AddLineStr(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *tag; // x20
  System_String_o *v4; // x0
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D29DAA & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_150/*" - "*/);
    byte_4D29DAA = 1;
  }
  ++this->fields.lineCount;
  tag = this->fields.tag;
  v4 = System_Int32__ToString((int)this + 144, 0);
  v5 = System_String__Concat_64456008(tag, (System_String_o *)StringLiteral_150/*" - "*/, v4, 0);
  this->fields.title = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


System_Collections_Generic_List_UserQuestRouteEntity__o *ScriptBranchListViewItem__AddUserQuestRoute(
        ScriptBranchListViewItem_o *this,
        System_Collections_Generic_List_UserQuestRouteEntity__o *list,
        int32_t cnt,
        const MethodInfo *method)
{
  __int64 v7; // x22
  NetworkManager_c *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Func_object__bool__o **v16; // x24
  System_Func_object__bool__o *v17; // x25
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UserQuestRouteEntity_o *v24; // x25
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Int32_array *routeIds; // x8
  __int64 v32; // x9
  struct UserQuestRouteEntity_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t v37; // w8

  if ( (byte_4D29DA7 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_UserQuestRouteEntity___);
    sub_1C94098(&System_Func_UserQuestRouteEntity__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__);
    sub_1C94098(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
    sub_1C94098(&UserQuestRouteEntity_TypeInfo);
    byte_4D29DA7 = 1;
  }
  v7 = sub_1C942E4(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
LABEL_25:
    sub_1C942F0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = 0;
  if ( cnt >= 1 )
  {
    v16 = (System_Func_object__bool__o **)(v7 + 32);
    do
    {
      v17 = *v16;
      if ( !*v16 )
      {
        v17 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_UserQuestRouteEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v17,
          (Il2CppObject *)v7,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          0);
        *(_QWORD *)(v7 + 32) = v17;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v17, v18, v19, v20, v21, v22, v23);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v17,
              (const MethodInfo_3185468 *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v24 = (UserQuestRouteEntity_o *)sub_1C942E4(UserQuestRouteEntity_TypeInfo);
        UserQuestRouteEntity___ctor(v24, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        v8 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v8 = NetworkManager_TypeInfo;
        }
        if ( !v24 )
          goto LABEL_25;
        v24->fields.userId = v8->static_fields->userIdNumber;
        v24->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_25;
        v32 = *(int *)(v7 + 24);
        if ( (unsigned int)v32 >= LODWORD(routeIds->max_length) )
          sub_1C942F8(v8);
        v24->fields.routeId = routeIds->m_Items[v32];
        if ( !list )
          goto LABEL_25;
        items = list->fields._items;
        v34 = Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__;
        ++list->fields._version;
        if ( !items )
          goto LABEL_25;
        size = list->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            (Il2CppObject *)v24,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          list->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v24;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v24, v25, v26, v27, v28, v29, v30);
        }
      }
      v37 = *(_DWORD *)(v7 + 24) + 1;
      *(_DWORD *)(v7 + 24) = v37;
    }
    while ( v37 < cnt );
  }
  return list;
}


void ScriptBranchListViewItem__ChangeFlag(ScriptBranchListViewItem_o *this, bool flag, const MethodInfo *method)
{
  int32_t branchType; // w8
  __int64 Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *v9; // x22
  __int64 v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_String_o *v17; // x0
  NetworkManager_c *v18; // x0
  int32_t questPhase; // w8
  char v20; // w19
  Il2CppObject *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x22
  ScriptBranchListViewItem___c_c *v23; // x0
  System_Func_object__object__o *_9__18_0; // x23
  Il2CppObject *v25; // x24
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v34; // x0
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  int32_t v37; // w8
  System_Collections_Generic_List_UserQuestRouteEntity__o *v38; // x22
  bool v39; // w20
  int32_t v40; // w19
  ScriptManager_c *v41; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  UserServantCollectionEntity_o *v45; // x20
  UserServantCollectionEntity_o *v46; // x20
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // kr00_16
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  UserServantCollectionEntity_o *v55; // x20
  System_Object_array *v56; // x19
  JsonManager_c *v57; // x0
  int32_t checkType; // w8
  int count; // w2
  System_String_o *v60; // x0
  __int64 v61; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D29DA5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__getEntityList__);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_UserQuestRouteEntity__UserQuestRouteEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
    sub_1C94098(&System_Func_UserQuestRouteEntity__UserQuestRouteEntity__TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&ScriptManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__);
    sub_1C94098(&ScriptBranchListViewItem___c_TypeInfo);
    sub_1C94098(&UserQuestEntity___TypeInfo);
    sub_1C94098(&UserQuestEntity_TypeInfo);
    sub_1C94098(&UserServantCollectionEntity___TypeInfo);
    sub_1C94098(&UserServantCollectionEntity_TypeInfo);
    byte_4D29DA5 = 1;
  }
  entity = 0;
  branchType = this->fields.branchType;
  switch ( branchType )
  {
    case -1:
      if ( flag )
        v40 = 1;
      else
        v40 = 2;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4D29D8B )
      {
        sub_1C94098(&ScriptManager_TypeInfo);
        byte_4D29D8B = 1;
      }
      v41 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v41 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v41->static_fields->scriptServerSettingAddress;
      if ( !byte_4D29D8C )
      {
        sub_1C94098(&ScriptManager_TypeInfo);
        v41 = ScriptManager_TypeInfo;
        byte_4D29D8C = 1;
      }
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v41->static_fields->scriptObjectSettingAddress;
      if ( !byte_4D29D8D )
      {
        sub_1C94098(&ScriptManager_TypeInfo);
        v41 = ScriptManager_TypeInfo;
        byte_4D29D8D = 1;
      }
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v41->static_fields->scriptStartModeSettingName;
      if ( !byte_4D29E85 )
      {
        sub_1C94098(&ScriptManager_TypeInfo);
        v41 = ScriptManager_TypeInfo;
        byte_4D29E85 = 1;
      }
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = ScriptManager_TypeInfo;
      }
      ScriptManager__SetScriptServerSetting(
        scriptServerSettingAddress,
        scriptObjectSettingAddress,
        v40,
        scriptStartModeSettingName,
        v41->static_fields->isHiddenTruthSetting,
        0);
      return;
    case 0:
    case 1:
      v20 = (branchType != 0) ^ flag;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__SetIsCollection(v20 & 1, 0);
      return;
    case 2:
    case 3:
    case 11:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
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
                            0);
      if ( Instance )
        goto LABEL_30;
      v9 = (UserQuestEntity_o *)sub_1C942E4(UserQuestEntity_TypeInfo);
      UserQuestEntity___ctor(v9, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v9 )
        goto LABEL_132;
      v9->fields.userId = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      v9->fields.questId = this->fields.questId;
      Instance = sub_1C94140(UserQuestEntity___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_132;
      v10 = Instance;
      Instance = sub_1C941D4(v9, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_134;
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_133;
      *(_QWORD *)(v10 + 32) = v9;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v10 + 32), (int32_t)v9, v11, v12, v13, v14, v15, v16);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v17 = JsonManager__toJson((Il2CppObject *)v10, 0, 0, 0);
      ((void (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))MasterData_object->klass->vtable[9].methodPtr)(
        MasterData_object,
        v17,
        MasterData_object->klass->vtable[9].method);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      v18 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v18 = NetworkManager_TypeInfo;
      }
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)MasterData_object,
                            v18->static_fields->userIdNumber,
                            this->fields.questId,
                            0);
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
        sub_1C942F0(Instance, v7);
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
      ScriptManager__SetIsRevival(flag, 0);
      return;
    case 5:
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      v21 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v21 )
        goto LABEL_132;
      Instance = UserServantCollectionMaster__TryGetEntity(
                   (UserServantCollectionMaster_o *)v21,
                   &entity,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   this->fields.svtId,
                   0);
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
      v45 = (UserServantCollectionEntity_o *)sub_1C942E4(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor(v45, 0);
      entity = v45;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v45 )
        goto LABEL_132;
      v45->fields.userId = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      v46 = entity;
      svtId = this->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
      v7 = *(_QWORD *)&v48.fields.fakeValue;
      Instance = *(_QWORD *)&v48.fields.currentCryptoKey;
      if ( !v46 )
        goto LABEL_132;
      v46->fields.svtId = v48;
      if ( !entity )
        goto LABEL_132;
      entity->fields.status = 2;
      Instance = sub_1C94140(UserServantCollectionEntity___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_132;
      v55 = entity;
      v56 = (System_Object_array *)Instance;
      if ( entity )
      {
        Instance = sub_1C941D4(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_134:
          v61 = sub_1C94314();
          sub_1C941C0(v61, 0);
        }
      }
      if ( !LODWORD(v56->max_length) )
LABEL_133:
        sub_1C942F8(Instance);
      v56->m_Items[0] = (Il2CppObject *)v55;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)v56->m_Items, (int32_t)v55, v49, v50, v51, v52, v53, v54);
      v57 = JsonManager_TypeInfo;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        goto LABEL_129;
      goto LABEL_130;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_132;
      v21 = (Il2CppObject *)Instance;
      v22 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 40);
      v23 = ScriptBranchListViewItem___c_TypeInfo;
      if ( !ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo);
        v23 = ScriptBranchListViewItem___c_TypeInfo;
      }
      _9__18_0 = (System_Func_object__object__o *)v23->static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = ScriptBranchListViewItem___c_TypeInfo;
        }
        v25 = (Il2CppObject *)v23->static_fields->__9;
        _9__18_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_UserQuestRouteEntity__UserQuestRouteEntity__TypeInfo);
        System_Func_object__object____ctor(_9__18_0, v25, Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__, 0);
        static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__18_0 = (struct System_Func_UserQuestRouteEntity__UserQuestRouteEntity__o *)_9__18_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__18_0,
          (int32_t)_9__18_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v22,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_UserQuestRouteEntity__UserQuestRouteEntity___);
      v34 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v33,
                                                                         (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v37 = this->fields.branchType;
      v38 = v34;
      v39 = (v37 != 7 || !flag) && (v37 != 8 || flag);
      checkType = this->fields.checkType;
      if ( !checkType )
      {
        if ( !this->fields.count )
        {
          if ( v39 )
          {
            count = 1;
            goto LABEL_121;
          }
          goto LABEL_125;
        }
        ScriptBranchListViewItem__RemoveUserQuestRoute(this, v34, v35);
        if ( v39 )
          goto LABEL_126;
LABEL_120:
        count = this->fields.count;
        goto LABEL_121;
      }
      if ( checkType == 1 )
      {
        if ( v39 )
          goto LABEL_125;
        goto LABEL_120;
      }
      if ( checkType != 2 )
        goto LABEL_126;
      if ( v39 )
      {
        count = this->fields.count + 1;
LABEL_121:
        ScriptBranchListViewItem__AddUserQuestRoute(this, v38, count, v36);
        goto LABEL_126;
      }
LABEL_125:
      ScriptBranchListViewItem__RemoveUserQuestRoute(this, v34, v35);
LABEL_126:
      Instance = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v21->klass->vtable[6].methodPtr)(
                   v21,
                   v21->klass->vtable[6].method);
      if ( !v38 )
        goto LABEL_132;
      v56 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)v38,
              (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v57 = JsonManager_TypeInfo;
LABEL_129:
        j_il2cpp_runtime_class_init_0(v57);
      }
LABEL_130:
      v60 = JsonManager__toJson(&v56->obj, 0, 0, 0);
      ((void (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))v21->klass->vtable[9].methodPtr)(
        v21,
        v60,
        v21->klass->vtable[9].method);
      return;
    default:
      return;
  }
}


bool ScriptBranchListViewItem__CheckFlag(
        ScriptBranchListViewItem_o *this,
        System_String_o *tag,
        int32_t intQuestId,
        int32_t intQuestPhase,
        const MethodInfo *method)
{
  int32_t branchType; // w9

  branchType = this->fields.branchType;
  if ( (intQuestPhase | intQuestId) < 0 || branchType == -1 )
    return (intQuestPhase | intQuestId) < 0 && branchType == -1;
  if ( System_String__op_Equality(this->fields.tag, tag, 0) && this->fields.questId == intQuestId )
    return this->fields.questPhase == intQuestPhase;
  return 0;
}


System_Collections_Generic_List_UserQuestRouteEntity__o *ScriptBranchListViewItem__RemoveUserQuestRoute(
        ScriptBranchListViewItem_o *this,
        System_Collections_Generic_List_UserQuestRouteEntity__o *list,
        const MethodInfo *method)
{
  ScriptBranchListViewItem_o *v4; // x20
  struct System_Int32_array *routeIds; // x23
  unsigned __int64 v6; // x24
  __int64 v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x0
  System_Predicate_object__o *v15; // x22
  Il2CppObject *v16; // x0

  v4 = this;
  if ( (byte_4D29DA6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
    sub_1C94098(&System_Predicate_UserQuestRouteEntity__TypeInfo);
    sub_1C94098(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__);
    this = (ScriptBranchListViewItem_o *)sub_1C94098(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
    byte_4D29DA6 = 1;
  }
  routeIds = v4->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( SLODWORD(routeIds->max_length) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_1C942E4(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      if ( !v7 )
        break;
      *(_QWORD *)(v7 + 24) = v4;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v4, v8, v9, v10, v11, v12, v13);
      if ( v6 >= LODWORD(routeIds->max_length) )
        sub_1C942F8(v14);
      *(_DWORD *)(v7 + 16) = routeIds->m_Items[v6];
      v15 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_UserQuestRouteEntity__TypeInfo);
      System_Predicate_object____ctor(
        v15,
        (Il2CppObject *)v7,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        0);
      if ( !list )
        break;
      v16 = System_Collections_Generic_List_object___Find(
              (System_Collections_Generic_List_object__o *)list,
              (System_Predicate_T__o *)v15,
              (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v16 )
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)list,
          v16,
          (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v6 >= SLODWORD(routeIds->max_length) )
        return list;
    }
LABEL_13:
    sub_1C942F0(this, list);
  }
  return list;
}


System_String_o *ScriptBranchListViewItem__get_CommentText(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *Empty; // x20
  System_String_o *v4; // x20
  int32_t v5; // w0
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  __int64 *v8; // x8
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  struct System_Int32_array *routeIds; // x8
  System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_String_o *v21; // x20
  int32_t v22; // w1
  struct System_Int32_array *v23; // x8
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t questId; // [xsp+8h] [xbp-28h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D29DA8 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_21118/*"isNotMaterial"*/);
    sub_1C94098(&StringLiteral_8957/*"Master : Female"*/);
    sub_1C94098(&StringLiteral_809/*", "*/);
    sub_1C94098(&StringLiteral_6781/*"Flag   : back"*/);
    sub_1C94098(&StringLiteral_9619/*"Number : {0}, releaseId : {1}"*/);
    sub_1C94098(&StringLiteral_6780/*"Flag   : "*/);
    sub_1C94098(&StringLiteral_8958/*"Master : Male"*/);
    sub_1C94098(&StringLiteral_21135/*"isRevival"*/);
    sub_1C94098(&StringLiteral_841/*", questId:"*/);
    sub_1C94098(&StringLiteral_12789/*"ServantId : "*/);
    sub_1C94098(&StringLiteral_21115/*"isMaterial"*/);
    byte_4D29DA8 = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v8 = &StringLiteral_8958/*"Master : Male"*/;
      else
        v8 = &StringLiteral_8957/*"Master : Female"*/;
      goto LABEL_28;
    case 0:
      v8 = &StringLiteral_21115/*"isMaterial"*/;
      goto LABEL_28;
    case 1:
      v8 = &StringLiteral_21118/*"isNotMaterial"*/;
      goto LABEL_28;
    case 2:
    case 3:
      v4 = System_Int32__ToString((int)this + 136, 0);
      v5 = (_DWORD)this + 140;
      goto LABEL_15;
    case 4:
      v8 = &StringLiteral_21135/*"isRevival"*/;
LABEL_28:
      Empty = (System_String_o *)*v8;
      goto LABEL_29;
    case 5:
    case 6:
      v6 = System_Int32__ToString((int)this + 164, 0);
      v7 = System_String__Concat_64417744((System_String_o *)StringLiteral_12789/*"ServantId : "*/, v6, 0);
      break;
    case 9:
      questPhase = this->fields.questPhase;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase);
      questId = this->fields.questId;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId);
      v7 = System_String__Format_64459052((System_String_o *)StringLiteral_9619/*"Number : {0}, releaseId : {1}"*/, v9, v10, 0);
      break;
    case 0xA:
      v11 = System_Int32__ToString((int)this + 136, 0);
      routeIds = this->fields.routeIds;
      if ( !routeIds )
        goto LABEL_35;
      if ( !LODWORD(routeIds->max_length) )
        goto LABEL_34;
      v4 = v11;
      v5 = (_DWORD)routeIds + 32;
LABEL_15:
      v14 = System_Int32__ToString(v5, 0);
      v7 = System_String__Concat_64458012(
             (System_String_o *)StringLiteral_6780/*"Flag   : "*/,
             v4,
             (System_String_o *)StringLiteral_809/*", "*/,
             v14,
             0);
      break;
    case 0xB:
      v11 = (System_String_o *)sub_1C94140(string___TypeInfo, 6);
      if ( !v11 )
        goto LABEL_35;
      v21 = v11;
      if ( !LODWORD(v11[1].klass) )
        goto LABEL_34;
      v22 = StringLiteral_6781/*"Flag   : back"*/;
      v11[1].monitor = (void *)StringLiteral_6781/*"Flag   : back"*/;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v11[1].monitor, v22, v15, v16, v17, v18, v19, v20);
      v23 = this->fields.routeIds;
      if ( !v23 )
LABEL_35:
        sub_1C942F0(v11, v12);
      if ( !LODWORD(v23->max_length) )
        goto LABEL_34;
      v11 = System_Int32__ToString((int)v23 + 32, 0);
      if ( LODWORD(v21[1].klass) <= 1 )
        goto LABEL_34;
      v21[1].fields = (System_String_Fields)v11;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v21[1].fields, (int32_t)v11, v24, v25, v26, v27, v28, v29);
      if ( LODWORD(v21[1].klass) <= 2 )
        goto LABEL_34;
      v36 = StringLiteral_841/*", questId:"*/;
      v21[2].klass = (System_String_c *)StringLiteral_841/*", questId:"*/;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v21[2], v36, v30, v31, v32, v33, v34, v35);
      v11 = System_Int32__ToString((int)this + 136, 0);
      if ( LODWORD(v21[1].klass) <= 3
        || (v21[2].monitor = v11,
            sub_1C9403C((GrandQuestFolderBoardItem_o *)&v21[2].monitor, (int32_t)v11, v37, v38, v39, v40, v41, v42),
            LODWORD(v21[1].klass) <= 4)
        || (v49 = StringLiteral_809/*", "*/,
            v21[2].fields = (System_String_Fields)StringLiteral_809/*", "*/,
            sub_1C9403C((GrandQuestFolderBoardItem_o *)&v21[2].fields, v49, v43, v44, v45, v46, v47, v48),
            v11 = System_Int32__ToString((int)this + 140, 0),
            LODWORD(v21[1].klass) <= 5) )
      {
LABEL_34:
        sub_1C942F8(v11);
      }
      v21[3].klass = (System_String_c *)v11;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v21[3], (int32_t)v11, v50, v51, v52, v53, v54, v55);
      v7 = System_String__Concat_64458276((System_String_array *)v21, 0);
      break;
    default:
      goto LABEL_29;
  }
  Empty = v7;
LABEL_29:
  if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0) )
  {
    if ( !System_String__IsNullOrEmpty(Empty, 0) )
      Empty = System_String__Concat_64417744(Empty, (System_String_o *)StringLiteral_809/*", "*/, 0);
    return System_String__Concat_64417744(Empty, this->fields.debugComment, 0);
  }
  return Empty;
}


int32_t ScriptBranchListViewItem__get_IfClearNumber(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.questPhase;
}


int32_t ScriptBranchListViewItem__get_IfClearReleaseId(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


bool ScriptBranchListViewItem__get_IsFlagOn(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  bool v3; // w8
  NetworkManager_c *v4; // x0
  int32_t questPhase; // w19
  int32_t questId; // w21
  int64_t userIdNumber; // x20
  int32_t svtId; // w19
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IList_int__o *v12; // x20
  System_Collections_Generic_IList_int__o *routeIds; // x22
  int32_t checkType; // w19
  int32_t count; // w21
  ScriptManager_c *v16; // x0
  bool IsCollection; // w0
  System_Collections_Generic_IList_int__o *v18; // x20
  System_Collections_Generic_IList_int__o *v19; // x22
  int32_t v20; // w19
  int32_t v21; // w21

  if ( (byte_4D29DA9 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&ScriptManager_TypeInfo);
    byte_4D29DA9 = 1;
  }
  v3 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4D29D90 )
      {
        sub_1C94098(&ScriptManager_TypeInfo);
        byte_4D29D90 = 1;
      }
      v16 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v16 = ScriptManager_TypeInfo;
      }
      return v16->static_fields->scriptGenderSettingIndex == 1;
    case 0:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      return ScriptManager__GetIsCollection(0);
    case 1:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      IsCollection = ScriptManager__GetIsCollection(0);
      return !IsCollection;
    case 2:
    case 3:
    case 0xB:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      v4 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v4 = NetworkManager_TypeInfo;
      }
      questId = this->fields.questId;
      questPhase = this->fields.questPhase;
      userIdNumber = v4->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear(userIdNumber, questId, questPhase, -1, 0, 0);
    case 4:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      return ScriptManager__GetIsRevival(0);
    case 5:
    case 6:
      svtId = this->fields.svtId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen(8, svtId, 0, 0, 0, 0);
    case 7:
      v10 = sub_1C94140(int___TypeInfo, 1);
      if ( !v10 )
        goto LABEL_44;
      v12 = (System_Collections_Generic_IList_int__o *)v10;
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_45;
      *(_DWORD *)(v10 + 32) = this->fields.questId;
      routeIds = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      count = this->fields.count;
      checkType = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsRouteSelect_41138944(v12, routeIds, count, checkType, 0, 0);
    case 8:
      v10 = sub_1C94140(int___TypeInfo, 1);
      if ( !v10 )
LABEL_44:
        sub_1C942F0(v10, v11);
      v18 = (System_Collections_Generic_IList_int__o *)v10;
      if ( !*(_DWORD *)(v10 + 24) )
LABEL_45:
        sub_1C942F8(v10);
      *(_DWORD *)(v10 + 32) = this->fields.questId;
      v19 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v21 = this->fields.count;
      v20 = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCollection = CondType__IsRouteSelect_41138944(v18, v19, v21, v20, 0, 0);
      return !IsCollection;
    default:
      return v3;
  }
}


bool ScriptBranchListViewItem__get_IsMasterFlag(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.branchType == -1;
}


int32_t ScriptBranchListViewItem__get_LineCount(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.lineCount;
}


System_String_o *ScriptBranchListViewItem__get_TitleText(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.title;
}


void ScriptBranchListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D29DAB & 1) == 0 )
  {
    sub_1C94098(&ScriptBranchListViewItem___c_TypeInfo);
    byte_4D29DAB = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ScriptBranchListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptBranchListViewItem___c_TypeInfo->static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ScriptBranchListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptBranchListViewItem___c___ctor(ScriptBranchListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserQuestRouteEntity_o *ScriptBranchListViewItem___c___ChangeFlag_b__18_0(
        ScriptBranchListViewItem___c_o *this,
        UserQuestRouteEntity_o *data,
        const MethodInfo *method)
{
  return data;
}


void ScriptBranchListViewItem___c__DisplayClass19_0___ctor(
        ScriptBranchListViewItem___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ScriptBranchListViewItem___c__DisplayClass19_0___RemoveUserQuestRoute_b__0(
        ScriptBranchListViewItem___c__DisplayClass19_0_o *this,
        UserQuestRouteEntity_o *c,
        const MethodInfo *method)
{
  ScriptBranchListViewItem___c__DisplayClass19_0_o *v4; // x20
  int64_t userId; // x21
  struct ScriptBranchListViewItem_o *_4__this; // x8

  v4 = this;
  if ( (byte_4D29DAC & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D29DAC = 1;
  }
  if ( !c )
    goto LABEL_15;
  userId = c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
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
    sub_1C942F0(this, c);
  if ( c->fields.questId == _4__this->fields.questId )
    return c->fields.routeId == v4->fields.routeId;
  return 0;
}


void ScriptBranchListViewItem___c__DisplayClass20_0___ctor(
        ScriptBranchListViewItem___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ScriptBranchListViewItem___c__DisplayClass20_0___AddUserQuestRoute_b__0(
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
  if ( (byte_4D29DAD & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D29DAD = 1;
  }
  if ( !c )
    goto LABEL_17;
  userId = c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
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
    sub_1C942F0(this, c);
  i = v4->fields.i;
  if ( (unsigned int)i >= LODWORD(routeIds->max_length) )
    sub_1C942F8(this);
  return c->fields.routeId == routeIds->m_Items[i];
}