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
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  v20->fields.title = title;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->fields.title, (int32_t)title, v21, v22);
  v20->fields.tag = tag;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->fields.tag, (int32_t)tag, v23, v24);
  v20->fields.questId = questId;
  v20->fields.questPhase = questFlag;
  v20->fields.svtId = svtId;
  v20->fields.routeIds = routeId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->fields.routeIds, (int32_t)routeId, v25, v26);
  v20->fields.debugComment = debugComment;
  v20 = (ScriptBranchListViewItem_o *)((char *)v20 + 144);
  v20->fields.sortIndex = count;
  v20->fields.loopIndex = checkType;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v20, (int32_t)debugComment, v27, v28);
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

  if ( (byte_49F9BFF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_161/*" - "*/, method);
    byte_49F9BFF = 1;
  }
  ++this->fields.lineCount;
  tag = this->fields.tag;
  v4 = System_Int32__ToString((int)this + 136, 0LL);
  v5 = System_String__Concat_61386656(tag, (System_String_o *)StringLiteral_161/*" - "*/, v4, 0LL);
  this->fields.title = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
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
  int64_t UserId; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_object__bool__o **v19; // x23
  System_Func_object__bool__o *v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  UserQuestRouteEntity_o *v23; // x24
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Int32_array *routeIds; // x8
  __int64 v28; // x9
  struct UserQuestRouteEntity_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w8

  if ( (byte_49F9BFC & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_UserQuestRouteEntity___, list);
    sub_1B640C8(&System_Func_UserQuestRouteEntity__bool__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__, v10);
    sub_1B640C8(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo, v11);
    sub_1B640C8(&UserQuestRouteEntity_TypeInfo, v12);
    byte_49F9BFC = 1;
  }
  v13 = sub_1B64314(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo, list, *(_QWORD *)&cnt);
  ScriptBranchListViewItem___c__DisplayClass20_0___ctor((ScriptBranchListViewItem___c__DisplayClass20_0_o *)v13, 0LL);
  if ( !v13 )
LABEL_21:
    sub_1B64324(UserId);
  *(_QWORD *)(v13 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_DWORD *)(v13 + 24) = 0;
  if ( cnt >= 1 )
  {
    v19 = (System_Func_object__bool__o **)(v13 + 32);
    do
    {
      v20 = *v19;
      if ( !*v19 )
      {
        v20 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserQuestRouteEntity__bool__TypeInfo, v17, v18);
        System_Func_object__bool____ctor(
          v20,
          (Il2CppObject *)v13,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          0LL);
        *(_QWORD *)(v13 + 32) = v20;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)v20, v21, v22);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v20,
              (const MethodInfo_2E24870 *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v23 = (UserQuestRouteEntity_o *)sub_1B64314(UserQuestRouteEntity_TypeInfo, v17, v18);
        UserQuestRouteEntity___ctor(v23, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v23 )
          goto LABEL_21;
        v23->fields.userId = UserId;
        v23->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_21;
        v28 = *(int *)(v13 + 24);
        if ( (unsigned int)v28 >= routeIds->max_length )
          sub_1B6432C(UserId, v24);
        v23->fields.routeId = routeIds->m_Items[v28 + 1];
        if ( !list )
          goto LABEL_21;
        items = list->fields._items;
        v30 = Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__;
        ++list->fields._version;
        if ( !items )
          goto LABEL_21;
        size = list->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            (Il2CppObject *)v23,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          list->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v23;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v23, v25, v26);
        }
      }
      v33 = *(_DWORD *)(v13 + 24) + 1;
      *(_DWORD *)(v13 + 24) = v33;
    }
    while ( v33 < cnt );
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
  Il2CppObject *MasterData_object; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  UserQuestEntity_o *v27; // x22
  __int64 v28; // x23
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x0
  int64_t UserId; // x0
  int32_t questPhase; // w8
  char v35; // w19
  Il2CppObject *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x22
  ScriptBranchListViewItem___c_c *v42; // x0
  System_Func_object__object__o *_9__18_0; // x23
  Il2CppObject *v44; // x24
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v49; // x0
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x3
  int32_t v52; // w8
  System_Collections_Generic_List_UserQuestRouteEntity__o *v53; // x22
  bool v54; // w20
  int32_t v55; // w19
  ScriptManager_c *v56; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  UserServantCollectionEntity_o *v60; // x20
  UserServantCollectionEntity_o *v61; // x20
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // kr00_16
  int32_t v64; // w2
  int32_t v65; // w3
  UserServantCollectionEntity_o *v66; // x20
  System_Object_array *v67; // x19
  JsonManager_c *v68; // x0
  int32_t checkType; // w8
  int count; // w2
  Il2CppObject *v71; // x0
  __int64 v72; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F9BFA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, flag);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___, v8);
    sub_1B640C8(&System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo, v9);
    sub_1B640C8(&JsonManager_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&ScriptManager_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__, v16);
    sub_1B640C8(&ScriptBranchListViewItem___c_TypeInfo, v17);
    sub_1B640C8(&UserQuestEntity___TypeInfo, v18);
    sub_1B640C8(&UserQuestEntity_TypeInfo, v19);
    sub_1B640C8(&UserServantCollectionEntity___TypeInfo, v20);
    sub_1B640C8(&UserServantCollectionEntity_TypeInfo, v21);
    byte_49F9BFA = 1;
  }
  entity = 0LL;
  branchType = this->fields.branchType;
  switch ( branchType )
  {
    case -1:
      if ( flag )
        v55 = 1;
      else
        v55 = 2;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_49F9C09 )
      {
        sub_1B640C8(&ScriptManager_TypeInfo, flag);
        byte_49F9C09 = 1;
      }
      v56 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v56 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v56->static_fields->scriptServerSettingAddress;
      if ( !byte_49F9C0A )
      {
        sub_1B640C8(&ScriptManager_TypeInfo, flag);
        v56 = ScriptManager_TypeInfo;
        byte_49F9C0A = 1;
      }
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v56->static_fields->scriptObjectSettingAddress;
      if ( !byte_49F9C0D )
      {
        sub_1B640C8(&ScriptManager_TypeInfo, flag);
        v56 = ScriptManager_TypeInfo;
        byte_49F9C0D = 1;
      }
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v56->static_fields->scriptStartModeSettingName;
      if ( !byte_49F9C11 )
      {
        sub_1B640C8(&ScriptManager_TypeInfo, flag);
        v56 = ScriptManager_TypeInfo;
        byte_49F9C11 = 1;
      }
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = ScriptManager_TypeInfo;
      }
      ScriptManager__SetScriptServerSetting(
        scriptServerSettingAddress,
        scriptObjectSettingAddress,
        v55,
        scriptStartModeSettingName,
        v56->static_fields->isHiddenTruthSetting,
        0LL);
      return;
    case 0:
    case 1:
      v35 = (branchType != 0) ^ flag;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__SetIsCollection(v35 & 1, 0LL);
      return;
    case 2:
    case 3:
    case 11:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_112;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
      v27 = (UserQuestEntity_o *)sub_1B64314(UserQuestEntity_TypeInfo, v25, v26);
      UserQuestEntity___ctor(v27, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v27 )
        goto LABEL_112;
      v27->fields.userId = Instance;
      v27->fields.questId = this->fields.questId;
      Instance = sub_1B64170(UserQuestEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_112;
      v28 = Instance;
      Instance = sub_1B64204(v27, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_114;
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_113;
      *(_QWORD *)(v28 + 32) = v27;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)v27, v30, v31);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v32 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v28, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)MasterData_object, v32, 0LL);
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
        sub_1B64324(Instance);
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_112;
      v36 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v36 )
        goto LABEL_112;
      Instance = UserServantCollectionMaster__TryGetEntity(
                   (UserServantCollectionMaster_o *)v36,
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
      v60 = (UserServantCollectionEntity_o *)sub_1B64314(UserServantCollectionEntity_TypeInfo, v37, v38);
      UserServantCollectionEntity___ctor(v60, 0LL);
      entity = v60;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v60 )
        goto LABEL_112;
      v60->fields.userId = Instance;
      v61 = entity;
      svtId = this->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      Instance = *(_QWORD *)&v63.fields.currentCryptoKey;
      if ( !v61 )
        goto LABEL_112;
      v61->fields.svtId = v63;
      if ( !entity )
        goto LABEL_112;
      entity->fields.status = 2;
      Instance = sub_1B64170(UserServantCollectionEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_112;
      v66 = entity;
      v67 = (System_Object_array *)Instance;
      if ( entity )
      {
        Instance = sub_1B64204(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_114:
          v72 = sub_1B64348();
          sub_1B641F0(v72, 0LL);
        }
      }
      if ( !v67->max_length )
LABEL_113:
        sub_1B6432C(Instance, v29);
      v67->m_Items[0] = (Il2CppObject *)v66;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v67->m_Items, (int32_t)v66, v64, v65);
      v68 = JsonManager_TypeInfo;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        goto LABEL_109;
      goto LABEL_110;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_112;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_112;
      v36 = (Il2CppObject *)Instance;
      v41 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 32);
      v42 = ScriptBranchListViewItem___c_TypeInfo;
      if ( !ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo);
        v42 = ScriptBranchListViewItem___c_TypeInfo;
      }
      _9__18_0 = (System_Func_object__object__o *)v42->static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = ScriptBranchListViewItem___c_TypeInfo;
        }
        v44 = (Il2CppObject *)v42->static_fields->__9;
        _9__18_0 = (System_Func_object__object__o *)sub_1B64314(
                                                      System_Func_DataEntityBase__UserQuestRouteEntity__TypeInfo,
                                                      v39,
                                                      v40);
        System_Func_object__object____ctor(
          _9__18_0,
          v44,
          Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__,
          0LL);
        static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__18_0 = (struct System_Func_DataEntityBase__UserQuestRouteEntity__o *)_9__18_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v46, v47);
      }
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v41,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserQuestRouteEntity___);
      v49 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v48,
                                                                         (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v52 = this->fields.branchType;
      v53 = v49;
      v54 = (v52 != 7 || !flag) && (v52 != 8 || flag);
      checkType = this->fields.checkType;
      if ( !checkType )
      {
        if ( !this->fields.count )
        {
          if ( v54 )
          {
            count = 1;
            goto LABEL_101;
          }
          goto LABEL_105;
        }
        ScriptBranchListViewItem__RemoveUserQuestRoute(this, v49, v50);
        if ( v54 )
          goto LABEL_106;
LABEL_100:
        count = this->fields.count;
        goto LABEL_101;
      }
      if ( checkType == 1 )
      {
        if ( v54 )
          goto LABEL_105;
        goto LABEL_100;
      }
      if ( checkType != 2 )
        goto LABEL_106;
      if ( v54 )
      {
        count = this->fields.count + 1;
LABEL_101:
        ScriptBranchListViewItem__AddUserQuestRoute(this, v53, count, v51);
        goto LABEL_106;
      }
LABEL_105:
      ScriptBranchListViewItem__RemoveUserQuestRoute(this, v49, v50);
LABEL_106:
      Instance = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v36->klass->vtable[7].method)(
                   v36,
                   v36->klass->vtable[8].methodPtr);
      if ( !v53 )
        goto LABEL_112;
      v67 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)v53,
              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v68 = JsonManager_TypeInfo;
LABEL_109:
        j_il2cpp_runtime_class_init_0(v68);
      }
LABEL_110:
      v71 = (Il2CppObject *)JsonManager__toJson(&v67->obj, 0, 0, 0LL);
      DataMasterBase__Updated((DataMasterBase_o *)v36, v71, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Predicate_object__o *v17; // x22
  Il2CppObject *v18; // x0

  v4 = this;
  if ( (byte_49F9BFB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__, list);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__, v5);
    sub_1B640C8(&System_Predicate_UserQuestRouteEntity__TypeInfo, v6);
    sub_1B640C8(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__, v7);
    this = (ScriptBranchListViewItem_o *)sub_1B640C8(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo, v8);
    byte_49F9BFB = 1;
  }
  routeIds = v4->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( (int)routeIds->max_length >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = sub_1B64314(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo, list, method);
      ScriptBranchListViewItem___c__DisplayClass19_0___ctor(
        (ScriptBranchListViewItem___c__DisplayClass19_0_o *)v11,
        0LL);
      if ( !v11 )
        break;
      *(_QWORD *)(v11 + 24) = v4;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)v4, v12, v13);
      if ( v10 >= routeIds->max_length )
        sub_1B6432C(v14, v15);
      *(_DWORD *)(v11 + 16) = routeIds->m_Items[v10 + 1];
      v17 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_UserQuestRouteEntity__TypeInfo, v15, v16);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v11,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        0LL);
      if ( !list )
        break;
      v18 = System_Collections_Generic_List_object___Find(
              (System_Collections_Generic_List_object__o *)list,
              (System_Predicate_T__o *)v17,
              (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v18 )
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)list,
          v18,
          (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v10 >= (int)routeIds->max_length )
        return list;
    }
LABEL_13:
    sub_1B64324(this);
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
  __int64 *v21; // x8
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  struct System_Int32_array *routeIds; // x8
  System_String_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x20
  int32_t v31; // w1
  struct System_Int32_array *v32; // x8
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t questId; // [xsp+8h] [xbp-28h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F9BFD & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&string___TypeInfo, v3);
    sub_1B640C8(&string_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_20720/*"isNotMaterial"*/, v5);
    sub_1B640C8(&StringLiteral_8852/*"Master : Female"*/, v6);
    sub_1B640C8(&StringLiteral_871/*", "*/, v7);
    sub_1B640C8(&StringLiteral_6709/*"Flag   : back"*/, v8);
    sub_1B640C8(&StringLiteral_9551/*"Number : {0}, releaseId : {1}"*/, v9);
    sub_1B640C8(&StringLiteral_6708/*"Flag   : "*/, v10);
    sub_1B640C8(&StringLiteral_8853/*"Master : Male"*/, v11);
    sub_1B640C8(&StringLiteral_20731/*"isRevival"*/, v12);
    sub_1B640C8(&StringLiteral_903/*", questId:"*/, v13);
    sub_1B640C8(&StringLiteral_12574/*"ServantId : "*/, v14);
    sub_1B640C8(&StringLiteral_20718/*"isMaterial"*/, v15);
    byte_49F9BFD = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v21 = &StringLiteral_8853/*"Master : Male"*/;
      else
        v21 = &StringLiteral_8852/*"Master : Female"*/;
      goto LABEL_28;
    case 0:
      v21 = &StringLiteral_20718/*"isMaterial"*/;
      goto LABEL_28;
    case 1:
      v21 = &StringLiteral_20720/*"isNotMaterial"*/;
      goto LABEL_28;
    case 2:
    case 3:
      v17 = System_Int32__ToString((int)this + 128, 0LL);
      v18 = (_DWORD)this + 132;
      goto LABEL_15;
    case 4:
      v21 = &StringLiteral_20731/*"isRevival"*/;
LABEL_28:
      Empty = (System_String_o *)*v21;
      goto LABEL_29;
    case 5:
    case 6:
      v19 = System_Int32__ToString((int)this + 156, 0LL);
      v20 = System_String__Concat_61375396((System_String_o *)StringLiteral_12574/*"ServantId : "*/, v19, 0LL);
      break;
    case 9:
      questPhase = this->fields.questPhase;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase);
      questId = this->fields.questId;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId);
      v20 = System_String__Format_61389768((System_String_o *)StringLiteral_9551/*"Number : {0}, releaseId : {1}"*/, v22, v23, 0LL);
      break;
    case 0xA:
      v24 = System_Int32__ToString((int)this + 128, 0LL);
      routeIds = this->fields.routeIds;
      if ( !routeIds )
        goto LABEL_35;
      if ( !routeIds->max_length )
        goto LABEL_34;
      v17 = v24;
      v18 = (_DWORD)routeIds + 32;
LABEL_15:
      v27 = System_Int32__ToString(v18, 0LL);
      v20 = System_String__Concat_61388660(
              (System_String_o *)StringLiteral_6708/*"Flag   : "*/,
              v17,
              (System_String_o *)StringLiteral_871/*", "*/,
              v27,
              0LL);
      break;
    case 0xB:
      v24 = (System_String_o *)sub_1B64170(string___TypeInfo, 6LL);
      if ( !v24 )
        goto LABEL_35;
      v30 = v24;
      if ( !LODWORD(v24[1].klass) )
        goto LABEL_34;
      v31 = StringLiteral_6709/*"Flag   : back"*/;
      v24[1].monitor = (void *)StringLiteral_6709/*"Flag   : back"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24[1].monitor, v31, v28, v29);
      v32 = this->fields.routeIds;
      if ( !v32 )
LABEL_35:
        sub_1B64324(v24);
      if ( !v32->max_length )
        goto LABEL_34;
      v24 = System_Int32__ToString((int)v32 + 32, 0LL);
      if ( LODWORD(v30[1].klass) <= 1 )
        goto LABEL_34;
      v30[1].fields = (System_String_Fields)v24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30[1].fields, (int32_t)v24, v33, v34);
      if ( LODWORD(v30[1].klass) <= 2 )
        goto LABEL_34;
      v37 = StringLiteral_903/*", questId:"*/;
      v30[2].klass = (System_String_c *)StringLiteral_903/*", questId:"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30[2], v37, v35, v36);
      v24 = System_Int32__ToString((int)this + 128, 0LL);
      if ( LODWORD(v30[1].klass) <= 3
        || (v30[2].monitor = v24,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30[2].monitor, (int32_t)v24, v38, v39),
            LODWORD(v30[1].klass) <= 4)
        || (v42 = StringLiteral_871/*", "*/,
            v30[2].fields = (System_String_Fields)StringLiteral_871/*", "*/,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30[2].fields, v42, v40, v41),
            v24 = System_Int32__ToString((int)this + 132, 0LL),
            LODWORD(v30[1].klass) <= 5) )
      {
LABEL_34:
        sub_1B6432C(v24, v25);
      }
      v30[3].klass = (System_String_c *)v24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30[3], (int32_t)v24, v43, v44);
      v20 = System_String__Concat_61388924((System_String_array *)v30, 0LL);
      break;
    default:
      goto LABEL_29;
  }
  Empty = v20;
LABEL_29:
  if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0LL) )
  {
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_61375396(Empty, (System_String_o *)StringLiteral_871/*", "*/, 0LL);
    return System_String__Concat_61375396(Empty, this->fields.debugComment, 0LL);
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
  ScriptManager_c *v19; // x0
  bool IsCollection; // w0
  System_Collections_Generic_IList_int__o *v21; // x20
  System_Collections_Generic_IList_int__o *v22; // x22
  int32_t v23; // w19
  int32_t v24; // w21

  if ( (byte_49F9BFE & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    sub_1B640C8(&int___TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49F9BFE = 1;
  }
  v6 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_49F9C0E )
      {
        sub_1B640C8(&ScriptManager_TypeInfo, method);
        byte_49F9C0E = 1;
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
      UserId = NetworkManager__get_UserId(0LL);
      questId = this->fields.questId;
      questPhase = this->fields.questPhase;
      v10 = UserId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear(v10, questId, questPhase, -1, 0, 0LL);
    case 4:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      return ScriptManager__GetIsRevival(0LL);
    case 5:
    case 6:
      svtId = this->fields.svtId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen(8, svtId, 0LL, 0, 0LL);
    case 7:
      v13 = sub_1B64170(int___TypeInfo, 1LL);
      if ( !v13 )
        goto LABEL_40;
      v15 = (System_Collections_Generic_IList_int__o *)v13;
      if ( !*(_DWORD *)(v13 + 24) )
        goto LABEL_41;
      *(_DWORD *)(v13 + 32) = this->fields.questId;
      routeIds = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      count = this->fields.count;
      checkType = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsRouteSelect_37344592(v15, routeIds, count, checkType, 0LL);
    case 8:
      v13 = sub_1B64170(int___TypeInfo, 1LL);
      if ( !v13 )
LABEL_40:
        sub_1B64324(v13);
      v21 = (System_Collections_Generic_IList_int__o *)v13;
      if ( !*(_DWORD *)(v13 + 24) )
LABEL_41:
        sub_1B6432C(v13, v14);
      *(_DWORD *)(v13 + 32) = this->fields.questId;
      v22 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v24 = this->fields.count;
      v23 = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCollection = CondType__IsRouteSelect_37344592(v21, v22, v24, v23, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9C00 & 1) == 0 )
  {
    sub_1B640C8(&ScriptBranchListViewItem___c_TypeInfo, v1);
    byte_49F9C00 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ScriptBranchListViewItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ScriptBranchListViewItem___c_TypeInfo->static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ScriptBranchListViewItem___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49F9C01 & 1) == 0 )
  {
    sub_1B640C8(&UserQuestRouteEntity_TypeInfo, data);
    byte_49F9C01 = 1;
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
  if ( (byte_49F9CE8 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_1B640C8(&NetworkManager_TypeInfo, c);
    byte_49F9CE8 = 1;
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
    sub_1B64324(this);
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
  __int64 v6; // x1
  struct ScriptBranchListViewItem_o *_4__this; // x8
  struct System_Int32_array *routeIds; // x8
  __int64 i; // x9

  v4 = this;
  if ( (byte_49F9CE9 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_1B640C8(&NetworkManager_TypeInfo, c);
    byte_49F9CE9 = 1;
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
    sub_1B64324(this);
  i = v4->fields.i;
  if ( (unsigned int)i >= routeIds->max_length )
    sub_1B6432C(this, v6);
  return c->fields.routeId == routeIds->m_Items[i + 1];
}