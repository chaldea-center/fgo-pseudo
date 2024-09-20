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
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w0

  v20 = this;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  v20->fields.title = title;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.title, (int32_t)title, v21, v22);
  v20->fields.tag = tag;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.tag, (int32_t)tag, v23, v24);
  v20->fields.questId = questId;
  v20->fields.questPhase = questFlag;
  v20->fields.svtId = svtId;
  v20->fields.routeIds = routeId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.routeIds, (int32_t)routeId, v25, v26);
  v20->fields.debugComment = debugComment;
  v20 = (ScriptBranchListViewItem_o *)((char *)v20 + 144);
  v20->fields.sortIndex = count;
  v20->fields.loopIndex = checkType;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v20, (int32_t)debugComment, v27, v28);
  v29 = System_Int32__Parse(strLine, 0LL);
  v20[-1].fields.branchType = 1;
  LODWORD(v20->monitor) = v29;
  LODWORD(v20->fields.sortValue0) = branchType;
}


void __fastcall ScriptBranchListViewItem__AddLineStr(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *tag; // x20
  System_String_o *v4; // x0
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A589EE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_161/*" - "*/);
    byte_4A589EE = 1;
  }
  ++this->fields.lineCount;
  tag = this->fields.tag;
  v4 = System_Int32__ToString((int)this + 136, 0LL);
  v5 = System_String__Concat_61718292(tag, (System_String_o *)StringLiteral_161/*" - "*/, v4, 0LL);
  this->fields.title = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Func_object__bool__o **v12; // x23
  System_Func_object__bool__o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  UserQuestRouteEntity_o *v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Int32_array *routeIds; // x8
  __int64 v20; // x9
  struct UserQuestRouteEntity_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  int32_t v25; // w8

  if ( (byte_4A589EB & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_UserQuestRouteEntity___);
    sub_1B885B0(&System_Func_UserQuestRouteEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__);
    sub_1B885B0(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
    sub_1B885B0(&UserQuestRouteEntity_TypeInfo);
    byte_4A589EB = 1;
  }
  v7 = sub_1B887FC(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
LABEL_21:
    sub_1B8880C(UserId, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = 0;
  if ( cnt >= 1 )
  {
    v12 = (System_Func_object__bool__o **)(v7 + 32);
    do
    {
      v13 = *v12;
      if ( !*v12 )
      {
        v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserQuestRouteEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v13,
          (Il2CppObject *)v7,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          0LL);
        *(_QWORD *)(v7 + 32) = v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v13, v14, v15);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v13,
              (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v16 = (UserQuestRouteEntity_o *)sub_1B887FC(UserQuestRouteEntity_TypeInfo);
        UserQuestRouteEntity___ctor(v16, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v16 )
          goto LABEL_21;
        v16->fields.userId = UserId;
        v16->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_21;
        v20 = *(int *)(v7 + 24);
        if ( (unsigned int)v20 >= routeIds->max_length )
          sub_1B88814(UserId, v9);
        v16->fields.routeId = routeIds->m_Items[v20 + 1];
        if ( !list )
          goto LABEL_21;
        items = list->fields._items;
        v22 = Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__;
        ++list->fields._version;
        if ( !items )
          goto LABEL_21;
        size = list->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            (Il2CppObject *)v16,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          list->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v16, v17, v18);
        }
      }
      v25 = *(_DWORD *)(v7 + 24) + 1;
      *(_DWORD *)(v7 + 24) = v25;
    }
    while ( v25 < cnt );
  }
  return list;
}


void __fastcall ScriptBranchListViewItem__ChangeFlag(
        ScriptBranchListViewItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  int32_t branchType; // w8
  __int64 Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *v9; // x22
  __int64 v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x0
  int64_t UserId; // x0
  int32_t questPhase; // w8
  char v16; // w19
  Il2CppObject *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x22
  ScriptBranchListViewItem___c_c *v19; // x0
  System_Func_object__object__o *_9__18_0; // x23
  Il2CppObject *v21; // x24
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v26; // x0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  int32_t v29; // w8
  System_Collections_Generic_List_UserQuestRouteEntity__o *v30; // x22
  bool v31; // w20
  int32_t v32; // w19
  ScriptManager_c *v33; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  UserServantCollectionEntity_o *v37; // x20
  UserServantCollectionEntity_o *v38; // x20
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // kr00_16
  int32_t v41; // w2
  int32_t v42; // w3
  UserServantCollectionEntity_o *v43; // x20
  System_Object_array *v44; // x19
  JsonManager_c *v45; // x0
  int32_t checkType; // w8
  int count; // w2
  Il2CppObject *v48; // x0
  __int64 v49; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A589E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
    sub_1B885B0(&System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__);
    sub_1B885B0(&ScriptBranchListViewItem___c_TypeInfo);
    sub_1B885B0(&UserQuestEntity___TypeInfo);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    sub_1B885B0(&UserServantCollectionEntity___TypeInfo);
    sub_1B885B0(&UserServantCollectionEntity_TypeInfo);
    byte_4A589E9 = 1;
  }
  entity = 0LL;
  branchType = this->fields.branchType;
  switch ( branchType )
  {
    case -1:
      if ( flag )
        v32 = 1;
      else
        v32 = 2;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4A58A03 )
      {
        sub_1B885B0(&ScriptManager_TypeInfo);
        byte_4A58A03 = 1;
      }
      v33 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v33 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v33->static_fields->scriptServerSettingAddress;
      if ( !byte_4A58A04 )
      {
        sub_1B885B0(&ScriptManager_TypeInfo);
        v33 = ScriptManager_TypeInfo;
        byte_4A58A04 = 1;
      }
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v33->static_fields->scriptObjectSettingAddress;
      if ( !byte_4A58A07 )
      {
        sub_1B885B0(&ScriptManager_TypeInfo);
        v33 = ScriptManager_TypeInfo;
        byte_4A58A07 = 1;
      }
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v33->static_fields->scriptStartModeSettingName;
      if ( !byte_4A58A0B )
      {
        sub_1B885B0(&ScriptManager_TypeInfo);
        v33 = ScriptManager_TypeInfo;
        byte_4A58A0B = 1;
      }
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ScriptManager_TypeInfo;
      }
      ScriptManager__SetScriptServerSetting(
        scriptServerSettingAddress,
        scriptObjectSettingAddress,
        v32,
        scriptStartModeSettingName,
        v33->static_fields->isHiddenTruthSetting,
        0LL);
      return;
    case 0:
    case 1:
      v16 = (branchType != 0) ^ flag;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__SetIsCollection(v16 & 1, 0LL);
      return;
    case 2:
    case 3:
    case 11:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_112;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      v9 = (UserQuestEntity_o *)sub_1B887FC(UserQuestEntity_TypeInfo);
      UserQuestEntity___ctor(v9, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v9 )
        goto LABEL_112;
      v9->fields.userId = Instance;
      v9->fields.questId = this->fields.questId;
      Instance = sub_1B88658(UserQuestEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_112;
      v10 = Instance;
      Instance = sub_1B886EC(v9, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_114;
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_113;
      *(_QWORD *)(v10 + 32) = v9;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)v9, v11, v12);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v13 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v10, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)MasterData_object, v13, 0LL);
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
        sub_1B8880C(Instance, v7);
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
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__SetIsRevival(flag, 0LL);
      return;
    case 5:
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_112;
      v17 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v17 )
        goto LABEL_112;
      Instance = UserServantCollectionMaster__TryGetEntity(
                   (UserServantCollectionMaster_o *)v17,
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
      v37 = (UserServantCollectionEntity_o *)sub_1B887FC(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor(v37, 0LL);
      entity = v37;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v37 )
        goto LABEL_112;
      v37->fields.userId = Instance;
      v38 = entity;
      svtId = this->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      v7 = *(_QWORD *)&v40.fields.fakeValue;
      Instance = *(_QWORD *)&v40.fields.currentCryptoKey;
      if ( !v38 )
        goto LABEL_112;
      v38->fields.svtId = v40;
      if ( !entity )
        goto LABEL_112;
      entity->fields.status = 2;
      Instance = sub_1B88658(UserServantCollectionEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_112;
      v43 = entity;
      v44 = (System_Object_array *)Instance;
      if ( entity )
      {
        Instance = sub_1B886EC(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_114:
          v49 = sub_1B88830(Instance);
          sub_1B886D8(v49, 0LL);
        }
      }
      if ( !v44->max_length )
LABEL_113:
        sub_1B88814(Instance, v7);
      v44->m_Items[0] = (Il2CppObject *)v43;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v44->m_Items, (int32_t)v43, v41, v42);
      v45 = JsonManager_TypeInfo;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        goto LABEL_109;
      goto LABEL_110;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_112;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_112;
      v17 = (Il2CppObject *)Instance;
      v18 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 32);
      v19 = ScriptBranchListViewItem___c_TypeInfo;
      if ( !ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo);
        v19 = ScriptBranchListViewItem___c_TypeInfo;
      }
      _9__18_0 = (System_Func_object__object__o *)v19->static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = ScriptBranchListViewItem___c_TypeInfo;
        }
        v21 = (Il2CppObject *)v19->static_fields->__9;
        _9__18_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo);
        System_Func_object__object____ctor(
          _9__18_0,
          v21,
          Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__,
          0LL);
        static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__18_0 = (struct System_Func_DataEntityBase__UserQuestRouteEntity__o *)_9__18_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v23, v24);
      }
      v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v18,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___);
      v26 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v25,
                                                                         (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v29 = this->fields.branchType;
      v30 = v26;
      v31 = (v29 != 7 || !flag) && (v29 != 8 || flag);
      checkType = this->fields.checkType;
      if ( !checkType )
      {
        if ( !this->fields.count )
        {
          if ( v31 )
          {
            count = 1;
            goto LABEL_101;
          }
          goto LABEL_105;
        }
        ScriptBranchListViewItem__RemoveUserQuestRoute(this, v26, v27);
        if ( v31 )
          goto LABEL_106;
LABEL_100:
        count = this->fields.count;
        goto LABEL_101;
      }
      if ( checkType == 1 )
      {
        if ( v31 )
          goto LABEL_105;
        goto LABEL_100;
      }
      if ( checkType != 2 )
        goto LABEL_106;
      if ( v31 )
      {
        count = this->fields.count + 1;
LABEL_101:
        ScriptBranchListViewItem__AddUserQuestRoute(this, v30, count, v28);
        goto LABEL_106;
      }
LABEL_105:
      ScriptBranchListViewItem__RemoveUserQuestRoute(this, v26, v27);
LABEL_106:
      Instance = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v17->klass->vtable[7].method)(
                   v17,
                   v17->klass->vtable[8].methodPtr);
      if ( !v30 )
        goto LABEL_112;
      v44 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)v30,
              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v45 = JsonManager_TypeInfo;
LABEL_109:
        j_il2cpp_runtime_class_init_0(v45);
      }
LABEL_110:
      v48 = (Il2CppObject *)JsonManager__toJson(&v44->obj, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)v17, v48, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0
  __int64 v11; // x1
  System_Predicate_object__o *v12; // x22
  Il2CppObject *v13; // x0

  v4 = this;
  if ( (byte_4A589EA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
    sub_1B885B0(&System_Predicate_UserQuestRouteEntity__TypeInfo);
    sub_1B885B0(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__);
    this = (ScriptBranchListViewItem_o *)sub_1B885B0(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
    byte_4A589EA = 1;
  }
  routeIds = v4->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( (int)routeIds->max_length >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      v7 = sub_1B887FC(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0LL);
      if ( !v7 )
        break;
      *(_QWORD *)(v7 + 24) = v4;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)v4, v8, v9);
      if ( v6 >= routeIds->max_length )
        sub_1B88814(v10, v11);
      *(_DWORD *)(v7 + 16) = routeIds->m_Items[v6 + 1];
      v12 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_UserQuestRouteEntity__TypeInfo);
      System_Predicate_object____ctor(
        v12,
        (Il2CppObject *)v7,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        0LL);
      if ( !list )
        break;
      v13 = System_Collections_Generic_List_object___Find(
              (System_Collections_Generic_List_object__o *)list,
              (System_Predicate_T__o *)v12,
              (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v13 )
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)list,
          v13,
          (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v6 >= (int)routeIds->max_length )
        return list;
    }
LABEL_13:
    sub_1B8880C(this, list);
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
  System_String_o *Empty; // x20
  System_String_o *v7; // x20
  int32_t v8; // w0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  __int64 *v11; // x8
  Il2CppObject *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  struct System_Int32_array *routeIds; // x8
  System_String_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x20
  int32_t v24; // w1
  struct System_Int32_array *v25; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t questId; // [xsp+8h] [xbp-28h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A589EC & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_20802/*"isNotMaterial"*/);
    sub_1B885B0(&StringLiteral_8894/*"Master : Female"*/);
    sub_1B885B0(&StringLiteral_870/*", "*/);
    sub_1B885B0(&StringLiteral_6737/*"Flag   : back"*/);
    sub_1B885B0(&StringLiteral_9594/*"Number : {0}, releaseId : {1}"*/);
    sub_1B885B0(&StringLiteral_6736/*"Flag   : "*/);
    sub_1B885B0(&StringLiteral_8895/*"Master : Male"*/);
    sub_1B885B0(&StringLiteral_20813/*"isRevival"*/);
    sub_1B885B0(&StringLiteral_902/*", questId:"*/);
    sub_1B885B0(&StringLiteral_12635/*"ServantId : "*/);
    sub_1B885B0(&StringLiteral_20800/*"isMaterial"*/);
    byte_4A589EC = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v11 = &StringLiteral_8895/*"Master : Male"*/;
      else
        v11 = &StringLiteral_8894/*"Master : Female"*/;
      goto LABEL_28;
    case 0:
      v11 = &StringLiteral_20800/*"isMaterial"*/;
      goto LABEL_28;
    case 1:
      v11 = &StringLiteral_20802/*"isNotMaterial"*/;
      goto LABEL_28;
    case 2:
    case 3:
      v7 = System_Int32__ToString((int)this + 128, 0LL);
      v8 = (_DWORD)this + 132;
      goto LABEL_15;
    case 4:
      v11 = &StringLiteral_20813/*"isRevival"*/;
LABEL_28:
      Empty = (System_String_o *)*v11;
      goto LABEL_29;
    case 5:
    case 6:
      v9 = System_Int32__ToString((int)this + 156, 0LL);
      v10 = System_String__Concat_61707032((System_String_o *)StringLiteral_12635/*"ServantId : "*/, v9, 0LL);
      break;
    case 9:
      questPhase = this->fields.questPhase;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase, v2, v3, v4);
      questId = this->fields.questId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId, v13, v14, v15);
      v10 = System_String__Format_61721404((System_String_o *)StringLiteral_9594/*"Number : {0}, releaseId : {1}"*/, v12, v16, 0LL);
      break;
    case 0xA:
      v17 = System_Int32__ToString((int)this + 128, 0LL);
      routeIds = this->fields.routeIds;
      if ( !routeIds )
        goto LABEL_35;
      if ( !routeIds->max_length )
        goto LABEL_34;
      v7 = v17;
      v8 = (_DWORD)routeIds + 32;
LABEL_15:
      v20 = System_Int32__ToString(v8, 0LL);
      v10 = System_String__Concat_61720296(
              (System_String_o *)StringLiteral_6736/*"Flag   : "*/,
              v7,
              (System_String_o *)StringLiteral_870/*", "*/,
              v20,
              0LL);
      break;
    case 0xB:
      v17 = (System_String_o *)sub_1B88658(string___TypeInfo, 6LL);
      if ( !v17 )
        goto LABEL_35;
      v23 = v17;
      if ( !LODWORD(v17[1].klass) )
        goto LABEL_34;
      v24 = StringLiteral_6737/*"Flag   : back"*/;
      v17[1].monitor = (void *)StringLiteral_6737/*"Flag   : back"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v17[1].monitor, v24, v21, v22);
      v25 = this->fields.routeIds;
      if ( !v25 )
LABEL_35:
        sub_1B8880C(v17, v18);
      if ( !v25->max_length )
        goto LABEL_34;
      v17 = System_Int32__ToString((int)v25 + 32, 0LL);
      if ( LODWORD(v23[1].klass) <= 1 )
        goto LABEL_34;
      v23[1].fields = (System_String_Fields)v17;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23[1].fields, (int32_t)v17, v26, v27);
      if ( LODWORD(v23[1].klass) <= 2 )
        goto LABEL_34;
      v30 = StringLiteral_902/*", questId:"*/;
      v23[2].klass = (System_String_c *)StringLiteral_902/*", questId:"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23[2], v30, v28, v29);
      v17 = System_Int32__ToString((int)this + 128, 0LL);
      if ( LODWORD(v23[1].klass) <= 3
        || (v23[2].monitor = v17,
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v23[2].monitor, (int32_t)v17, v31, v32),
            LODWORD(v23[1].klass) <= 4)
        || (v35 = StringLiteral_870/*", "*/,
            v23[2].fields = (System_String_Fields)StringLiteral_870/*", "*/,
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v23[2].fields, v35, v33, v34),
            v17 = System_Int32__ToString((int)this + 132, 0LL),
            LODWORD(v23[1].klass) <= 5) )
      {
LABEL_34:
        sub_1B88814(v17, v18);
      }
      v23[3].klass = (System_String_c *)v17;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23[3], (int32_t)v17, v36, v37);
      v10 = System_String__Concat_61720560((System_String_array *)v23, 0LL);
      break;
    default:
      goto LABEL_29;
  }
  Empty = v10;
LABEL_29:
  if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0LL) )
  {
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_61707032(Empty, (System_String_o *)StringLiteral_870/*", "*/, 0LL);
    return System_String__Concat_61707032(Empty, this->fields.debugComment, 0LL);
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
  ScriptManager_c *v16; // x0
  bool IsCollection; // w0
  System_Collections_Generic_IList_int__o *v18; // x20
  System_Collections_Generic_IList_int__o *v19; // x22
  int32_t v20; // w19
  int32_t v21; // w21

  if ( (byte_4A589ED & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    byte_4A589ED = 1;
  }
  v3 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4A58A08 )
      {
        sub_1B885B0(&ScriptManager_TypeInfo);
        byte_4A58A08 = 1;
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
      UserId = NetworkManager__get_UserId(0LL);
      questId = this->fields.questId;
      questPhase = this->fields.questPhase;
      v7 = UserId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear(v7, questId, questPhase, -1, 0, 0LL);
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
      v10 = sub_1B88658(int___TypeInfo, 1LL);
      if ( !v10 )
        goto LABEL_40;
      v12 = (System_Collections_Generic_IList_int__o *)v10;
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_41;
      *(_DWORD *)(v10 + 32) = this->fields.questId;
      routeIds = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      count = this->fields.count;
      checkType = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsRouteSelect_37655600(v12, routeIds, count, checkType, 0LL);
    case 8:
      v10 = sub_1B88658(int___TypeInfo, 1LL);
      if ( !v10 )
LABEL_40:
        sub_1B8880C(v10, v11);
      v18 = (System_Collections_Generic_IList_int__o *)v10;
      if ( !*(_DWORD *)(v10 + 24) )
LABEL_41:
        sub_1B88814(v10, v11);
      *(_DWORD *)(v10 + 32) = this->fields.questId;
      v19 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v21 = this->fields.count;
      v20 = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCollection = CondType__IsRouteSelect_37655600(v18, v19, v21, v20, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A589EF & 1) == 0 )
  {
    sub_1B885B0(&ScriptBranchListViewItem___c_TypeInfo);
    byte_4A589EF = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ScriptBranchListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ScriptBranchListViewItem___c_TypeInfo->static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ScriptBranchListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4A589F0 & 1) == 0 )
  {
    sub_1B885B0(&UserQuestRouteEntity_TypeInfo);
    byte_4A589F0 = 1;
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
  if ( (byte_4A589F1 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A589F1 = 1;
  }
  if ( !c )
    goto LABEL_11;
  userId = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)NetworkManager__get_UserId(0LL);
  if ( userId != this )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
LABEL_11:
    sub_1B8880C(this, c);
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
  if ( (byte_4A589F2 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A589F2 = 1;
  }
  if ( !c )
    goto LABEL_13;
  userId = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B8880C(this, c);
  i = v4->fields.i;
  if ( (unsigned int)i >= routeIds->max_length )
    sub_1B88814(this, c);
  return c->fields.routeId == routeIds->m_Items[i + 1];
}