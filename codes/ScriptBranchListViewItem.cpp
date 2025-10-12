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
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w0

  v20 = this;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  v20->fields.title = title;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->fields.title, (int32_t)title, v21, v22);
  v20->fields.tag = tag;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->fields.tag, (int32_t)tag, v23, v24);
  v20->fields.questId = questId;
  v20->fields.questPhase = questFlag;
  v20->fields.svtId = svtId;
  v20->fields.routeIds = routeId;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->fields.routeIds, (int32_t)routeId, v25, v26);
  v20->fields.debugComment = debugComment;
  v20 = (ScriptBranchListViewItem_o *)((char *)v20 + 152);
  v20->fields.sortIndex = count;
  v20->fields.loopIndex = checkType;
  sub_1C32BC4((CGThumbnailListItem_o *)v20, (int32_t)debugComment, v27, v28);
  v29 = System_Int32__Parse(strLine, 0);
  v20[-1].fields.branchType = 1;
  LODWORD(v20->monitor) = v29;
  LODWORD(v20->fields.sortValue0) = branchType;
}


void ScriptBranchListViewItem__AddLineStr(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *tag; // x20
  System_String_o *v4; // x0
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C34F68 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_150/*" - "*/);
    byte_4C34F68 = 1;
  }
  ++this->fields.lineCount;
  tag = this->fields.tag;
  v4 = System_Int32__ToString((int)this + 144, 0);
  v5 = System_String__Concat_63556792(tag, (System_String_o *)StringLiteral_150/*" - "*/, v4, 0);
  this->fields.title = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
}


System_Collections_Generic_List_UserQuestRouteEntity__o *ScriptBranchListViewItem__AddUserQuestRoute(
        ScriptBranchListViewItem_o *this,
        System_Collections_Generic_List_UserQuestRouteEntity__o *list,
        int32_t cnt,
        const MethodInfo *method)
{
  __int64 v7; // x22
  NetworkManager_c *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Func_object__bool__o **v11; // x24
  System_Func_object__bool__o *v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UserQuestRouteEntity_o *v15; // x25
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Int32_array *routeIds; // x8
  __int64 v19; // x9
  struct UserQuestRouteEntity_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w8

  if ( (byte_4C34F65 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_UserQuestRouteEntity___);
    sub_1C32C20(&System_Func_UserQuestRouteEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__);
    sub_1C32C20(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
    sub_1C32C20(&UserQuestRouteEntity_TypeInfo);
    byte_4C34F65 = 1;
  }
  v7 = sub_1C32E6C(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
LABEL_25:
    sub_1C32E7C(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_DWORD *)(v7 + 24) = 0;
  if ( cnt >= 1 )
  {
    v11 = (System_Func_object__bool__o **)(v7 + 32);
    do
    {
      v12 = *v11;
      if ( !*v11 )
      {
        v12 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserQuestRouteEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v12,
          (Il2CppObject *)v7,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          0);
        *(_QWORD *)(v7 + 32) = v12;
        sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v12, v13, v14);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v12,
              (const MethodInfo_30C6790 *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v15 = (UserQuestRouteEntity_o *)sub_1C32E6C(UserQuestRouteEntity_TypeInfo);
        UserQuestRouteEntity___ctor(v15, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
        }
        v8 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v8 = NetworkManager_TypeInfo;
        }
        if ( !v15 )
          goto LABEL_25;
        v15->fields.userId = v8->static_fields->userIdNumber;
        v15->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_25;
        v19 = *(int *)(v7 + 24);
        if ( (unsigned int)v19 >= LODWORD(routeIds->max_length) )
          sub_1C32E84(v8);
        v15->fields.routeId = routeIds->m_Items[v19];
        if ( !list )
          goto LABEL_25;
        items = list->fields._items;
        v21 = Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__;
        ++list->fields._version;
        if ( !items )
          goto LABEL_25;
        size = list->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            (Il2CppObject *)v15,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          list->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v15;
          sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v15, v16, v17);
        }
      }
      v24 = *(_DWORD *)(v7 + 24) + 1;
      *(_DWORD *)(v7 + 24) = v24;
    }
    while ( v24 < cnt );
  }
  return list;
}


void ScriptBranchListViewItem__ChangeFlag(ScriptBranchListViewItem_o *this, bool flag, const MethodInfo *method)
{
  int32_t branchType; // w8
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *v8; // x22
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x0
  NetworkManager_c *v13; // x0
  int32_t questPhase; // w8
  char v15; // w19
  Il2CppObject *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x22
  ScriptBranchListViewItem___c_c *v18; // x0
  System_Func_object__object__o *_9__18_0; // x23
  Il2CppObject *v20; // x24
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  int32_t v28; // w8
  System_Collections_Generic_List_UserQuestRouteEntity__o *v29; // x22
  bool v30; // w20
  int32_t v31; // w19
  ScriptManager_c *v32; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  UserServantCollectionEntity_o *v36; // x20
  UserServantCollectionEntity_o *v37; // x20
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // kr00_16
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UserServantCollectionEntity_o *v42; // x20
  System_Object_array *v43; // x19
  JsonManager_c *v44; // x0
  int32_t checkType; // w8
  int count; // w2
  System_String_o *v47; // x0
  __int64 v48; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C34F63 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__getEntityList__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_UserQuestRouteEntity__UserQuestRouteEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
    sub_1C32C20(&System_Func_UserQuestRouteEntity__UserQuestRouteEntity__TypeInfo);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__);
    sub_1C32C20(&ScriptBranchListViewItem___c_TypeInfo);
    sub_1C32C20(&UserQuestEntity___TypeInfo);
    sub_1C32C20(&UserQuestEntity_TypeInfo);
    sub_1C32C20(&UserServantCollectionEntity___TypeInfo);
    sub_1C32C20(&UserServantCollectionEntity_TypeInfo);
    byte_4C34F63 = 1;
  }
  entity = 0;
  branchType = this->fields.branchType;
  switch ( branchType )
  {
    case -1:
      if ( flag )
        v31 = 1;
      else
        v31 = 2;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4C34F49 )
      {
        sub_1C32C20(&ScriptManager_TypeInfo);
        byte_4C34F49 = 1;
      }
      v32 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v32 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v32->static_fields->scriptServerSettingAddress;
      if ( !byte_4C34F4A )
      {
        sub_1C32C20(&ScriptManager_TypeInfo);
        v32 = ScriptManager_TypeInfo;
        byte_4C34F4A = 1;
      }
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v32->static_fields->scriptObjectSettingAddress;
      if ( !byte_4C34F4B )
      {
        sub_1C32C20(&ScriptManager_TypeInfo);
        v32 = ScriptManager_TypeInfo;
        byte_4C34F4B = 1;
      }
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v32->static_fields->scriptStartModeSettingName;
      if ( !byte_4C35043 )
      {
        sub_1C32C20(&ScriptManager_TypeInfo);
        v32 = ScriptManager_TypeInfo;
        byte_4C35043 = 1;
      }
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = ScriptManager_TypeInfo;
      }
      ScriptManager__SetScriptServerSetting(
        scriptServerSettingAddress,
        scriptObjectSettingAddress,
        v31,
        scriptStartModeSettingName,
        v32->static_fields->isHiddenTruthSetting,
        0);
      return;
    case 0:
    case 1:
      v15 = (branchType != 0) ^ flag;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__SetIsCollection(v15 & 1, 0);
      return;
    case 2:
    case 3:
    case 11:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
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
      v8 = (UserQuestEntity_o *)sub_1C32E6C(UserQuestEntity_TypeInfo);
      UserQuestEntity___ctor(v8, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v8 )
        goto LABEL_132;
      v8->fields.userId = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      v8->fields.questId = this->fields.questId;
      Instance = sub_1C32CC8(UserQuestEntity___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_132;
      v9 = Instance;
      Instance = sub_1C32D5C(v8, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_134;
      if ( !*(_DWORD *)(v9 + 24) )
        goto LABEL_133;
      *(_QWORD *)(v9 + 32) = v8;
      sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v8, v10, v11);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v12 = JsonManager__toJson((Il2CppObject *)v9, 0, 0, 0);
      ((void (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))MasterData_object->klass->vtable[9].methodPtr)(
        MasterData_object,
        v12,
        MasterData_object->klass->vtable[9].method);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      v13 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v13 = NetworkManager_TypeInfo;
      }
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)MasterData_object,
                            v13->static_fields->userIdNumber,
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
        sub_1C32E7C(Instance);
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v16 )
        goto LABEL_132;
      Instance = UserServantCollectionMaster__TryGetEntity(
                   (UserServantCollectionMaster_o *)v16,
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
      v36 = (UserServantCollectionEntity_o *)sub_1C32E6C(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor(v36, 0);
      entity = v36;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v36 )
        goto LABEL_132;
      v36->fields.userId = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      v37 = entity;
      svtId = this->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
      Instance = *(_QWORD *)&v39.fields.currentCryptoKey;
      if ( !v37 )
        goto LABEL_132;
      v37->fields.svtId = v39;
      if ( !entity )
        goto LABEL_132;
      entity->fields.status = 2;
      Instance = sub_1C32CC8(UserServantCollectionEntity___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_132;
      v42 = entity;
      v43 = (System_Object_array *)Instance;
      if ( entity )
      {
        Instance = sub_1C32D5C(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_134:
          v48 = sub_1C32EA0();
          sub_1C32D48(v48, 0);
        }
      }
      if ( !LODWORD(v43->max_length) )
LABEL_133:
        sub_1C32E84(Instance);
      v43->m_Items[0] = (Il2CppObject *)v42;
      sub_1C32BC4((CGThumbnailListItem_o *)v43->m_Items, (int32_t)v42, v40, v41);
      v44 = JsonManager_TypeInfo;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        goto LABEL_129;
      goto LABEL_130;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_132;
      v16 = (Il2CppObject *)Instance;
      v17 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 40);
      v18 = ScriptBranchListViewItem___c_TypeInfo;
      if ( !ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo);
        v18 = ScriptBranchListViewItem___c_TypeInfo;
      }
      _9__18_0 = (System_Func_object__object__o *)v18->static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = ScriptBranchListViewItem___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v18->static_fields->__9;
        _9__18_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_UserQuestRouteEntity__UserQuestRouteEntity__TypeInfo);
        System_Func_object__object____ctor(_9__18_0, v20, Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__, 0);
        static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__18_0 = (struct System_Func_UserQuestRouteEntity__UserQuestRouteEntity__o *)_9__18_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v22, v23);
      }
      v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v17,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_UserQuestRouteEntity__UserQuestRouteEntity___);
      v25 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v24,
                                                                         (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v28 = this->fields.branchType;
      v29 = v25;
      v30 = (v28 != 7 || !flag) && (v28 != 8 || flag);
      checkType = this->fields.checkType;
      if ( !checkType )
      {
        if ( !this->fields.count )
        {
          if ( v30 )
          {
            count = 1;
            goto LABEL_121;
          }
          goto LABEL_125;
        }
        ScriptBranchListViewItem__RemoveUserQuestRoute(this, v25, v26);
        if ( v30 )
          goto LABEL_126;
LABEL_120:
        count = this->fields.count;
        goto LABEL_121;
      }
      if ( checkType == 1 )
      {
        if ( v30 )
          goto LABEL_125;
        goto LABEL_120;
      }
      if ( checkType != 2 )
        goto LABEL_126;
      if ( v30 )
      {
        count = this->fields.count + 1;
LABEL_121:
        ScriptBranchListViewItem__AddUserQuestRoute(this, v29, count, v27);
        goto LABEL_126;
      }
LABEL_125:
      ScriptBranchListViewItem__RemoveUserQuestRoute(this, v25, v26);
LABEL_126:
      Instance = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v16->klass->vtable[6].methodPtr)(
                   v16,
                   v16->klass->vtable[6].method);
      if ( !v29 )
        goto LABEL_132;
      v43 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)v29,
              (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v44 = JsonManager_TypeInfo;
LABEL_129:
        j_il2cpp_runtime_class_init_0(v44);
      }
LABEL_130:
      v47 = JsonManager__toJson(&v43->obj, 0, 0, 0);
      ((void (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))v16->klass->vtable[9].methodPtr)(
        v16,
        v47,
        v16->klass->vtable[9].method);
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
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  System_Predicate_object__o *v11; // x22
  Il2CppObject *v12; // x0

  v4 = this;
  if ( (byte_4C34F64 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
    sub_1C32C20(&System_Predicate_UserQuestRouteEntity__TypeInfo);
    sub_1C32C20(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__);
    this = (ScriptBranchListViewItem_o *)sub_1C32C20(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
    byte_4C34F64 = 1;
  }
  routeIds = v4->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( SLODWORD(routeIds->max_length) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_1C32E6C(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      if ( !v7 )
        break;
      *(_QWORD *)(v7 + 24) = v4;
      sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v4, v8, v9);
      if ( v6 >= LODWORD(routeIds->max_length) )
        sub_1C32E84(v10);
      *(_DWORD *)(v7 + 16) = routeIds->m_Items[v6];
      v11 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_UserQuestRouteEntity__TypeInfo);
      System_Predicate_object____ctor(
        v11,
        (Il2CppObject *)v7,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        0);
      if ( !list )
        break;
      v12 = System_Collections_Generic_List_object___Find(
              (System_Collections_Generic_List_object__o *)list,
              (System_Predicate_T__o *)v11,
              (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v12 )
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)list,
          v12,
          (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v6 >= SLODWORD(routeIds->max_length) )
        return list;
    }
LABEL_13:
    sub_1C32E7C(this);
  }
  return list;
}


System_String_o *ScriptBranchListViewItem__get_CommentText(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  System_String_o *Empty; // x20
  System_String_o *v10; // x20
  int32_t v11; // w0
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  __int64 *v14; // x8
  Il2CppObject *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  struct System_Int32_array *routeIds; // x8
  System_String_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *v28; // x20
  int32_t v29; // w1
  struct System_Int32_array *v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t questId; // [xsp+8h] [xbp-28h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C34F66 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_20933/*"isNotMaterial"*/);
    sub_1C32C20(&StringLiteral_8936/*"Master : Female"*/);
    sub_1C32C20(&StringLiteral_812/*", "*/);
    sub_1C32C20(&StringLiteral_6772/*"Flag   : back"*/);
    sub_1C32C20(&StringLiteral_9597/*"Number : {0}, releaseId : {1}"*/);
    sub_1C32C20(&StringLiteral_6771/*"Flag   : "*/);
    sub_1C32C20(&StringLiteral_8937/*"Master : Male"*/);
    sub_1C32C20(&StringLiteral_20948/*"isRevival"*/);
    sub_1C32C20(&StringLiteral_844/*", questId:"*/);
    sub_1C32C20(&StringLiteral_12734/*"ServantId : "*/);
    sub_1C32C20(&StringLiteral_20930/*"isMaterial"*/);
    byte_4C34F66 = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v14 = &StringLiteral_8937/*"Master : Male"*/;
      else
        v14 = &StringLiteral_8936/*"Master : Female"*/;
      goto LABEL_28;
    case 0:
      v14 = &StringLiteral_20930/*"isMaterial"*/;
      goto LABEL_28;
    case 1:
      v14 = &StringLiteral_20933/*"isNotMaterial"*/;
      goto LABEL_28;
    case 2:
    case 3:
      v10 = System_Int32__ToString((int)this + 136, 0);
      v11 = (_DWORD)this + 140;
      goto LABEL_15;
    case 4:
      v14 = &StringLiteral_20948/*"isRevival"*/;
LABEL_28:
      Empty = (System_String_o *)*v14;
      goto LABEL_29;
    case 5:
    case 6:
      v12 = System_Int32__ToString((int)this + 164, 0);
      v13 = System_String__Concat_63518544((System_String_o *)StringLiteral_12734/*"ServantId : "*/, v12, 0);
      break;
    case 9:
      questPhase = this->fields.questPhase;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase, v2, v3, v4, v5, v6, v7);
      questId = this->fields.questId;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId, v16, v17, v18, v19, v20, v21);
      v13 = System_String__Format_63559836((System_String_o *)StringLiteral_9597/*"Number : {0}, releaseId : {1}"*/, v15, v22, 0);
      break;
    case 0xA:
      v23 = System_Int32__ToString((int)this + 136, 0);
      routeIds = this->fields.routeIds;
      if ( !routeIds )
        goto LABEL_35;
      if ( !LODWORD(routeIds->max_length) )
        goto LABEL_34;
      v10 = v23;
      v11 = (_DWORD)routeIds + 32;
LABEL_15:
      v25 = System_Int32__ToString(v11, 0);
      v13 = System_String__Concat_63558796(
              (System_String_o *)StringLiteral_6771/*"Flag   : "*/,
              v10,
              (System_String_o *)StringLiteral_812/*", "*/,
              v25,
              0);
      break;
    case 0xB:
      v23 = (System_String_o *)sub_1C32CC8(string___TypeInfo, 6);
      if ( !v23 )
        goto LABEL_35;
      v28 = v23;
      if ( !LODWORD(v23[1].klass) )
        goto LABEL_34;
      v29 = StringLiteral_6772/*"Flag   : back"*/;
      v23[1].monitor = (void *)StringLiteral_6772/*"Flag   : back"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)&v23[1].monitor, v29, v26, v27);
      v30 = this->fields.routeIds;
      if ( !v30 )
LABEL_35:
        sub_1C32E7C(v23);
      if ( !LODWORD(v30->max_length) )
        goto LABEL_34;
      v23 = System_Int32__ToString((int)v30 + 32, 0);
      if ( LODWORD(v28[1].klass) <= 1 )
        goto LABEL_34;
      v28[1].fields = (System_String_Fields)v23;
      sub_1C32BC4((CGThumbnailListItem_o *)&v28[1].fields, (int32_t)v23, v31, v32);
      if ( LODWORD(v28[1].klass) <= 2 )
        goto LABEL_34;
      v35 = StringLiteral_844/*", questId:"*/;
      v28[2].klass = (System_String_c *)StringLiteral_844/*", questId:"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)&v28[2], v35, v33, v34);
      v23 = System_Int32__ToString((int)this + 136, 0);
      if ( LODWORD(v28[1].klass) <= 3
        || (v28[2].monitor = v23,
            sub_1C32BC4((CGThumbnailListItem_o *)&v28[2].monitor, (int32_t)v23, v36, v37),
            LODWORD(v28[1].klass) <= 4)
        || (v40 = StringLiteral_812/*", "*/,
            v28[2].fields = (System_String_Fields)StringLiteral_812/*", "*/,
            sub_1C32BC4((CGThumbnailListItem_o *)&v28[2].fields, v40, v38, v39),
            v23 = System_Int32__ToString((int)this + 140, 0),
            LODWORD(v28[1].klass) <= 5) )
      {
LABEL_34:
        sub_1C32E84(v23);
      }
      v28[3].klass = (System_String_c *)v23;
      sub_1C32BC4((CGThumbnailListItem_o *)&v28[3], (int32_t)v23, v41, v42);
      v13 = System_String__Concat_63559060((System_String_array *)v28, 0);
      break;
    default:
      goto LABEL_29;
  }
  Empty = v13;
LABEL_29:
  if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0) )
  {
    if ( !System_String__IsNullOrEmpty(Empty, 0) )
      Empty = System_String__Concat_63518544(Empty, (System_String_o *)StringLiteral_812/*", "*/, 0);
    return System_String__Concat_63518544(Empty, this->fields.debugComment, 0);
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
  System_Collections_Generic_IList_int__o *v11; // x20
  System_Collections_Generic_IList_int__o *routeIds; // x22
  int32_t checkType; // w19
  int32_t count; // w21
  ScriptManager_c *v15; // x0
  bool IsCollection; // w0
  System_Collections_Generic_IList_int__o *v17; // x20
  System_Collections_Generic_IList_int__o *v18; // x22
  int32_t v19; // w19
  int32_t v20; // w21

  if ( (byte_4C34F67 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    byte_4C34F67 = 1;
  }
  v3 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4C34F4E )
      {
        sub_1C32C20(&ScriptManager_TypeInfo);
        byte_4C34F4E = 1;
      }
      v15 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v15 = ScriptManager_TypeInfo;
      }
      return v15->static_fields->scriptGenderSettingIndex == 1;
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
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
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
      v10 = sub_1C32CC8(int___TypeInfo, 1);
      if ( !v10 )
        goto LABEL_44;
      v11 = (System_Collections_Generic_IList_int__o *)v10;
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_45;
      *(_DWORD *)(v10 + 32) = this->fields.questId;
      routeIds = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      count = this->fields.count;
      checkType = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsRouteSelect_40291224(v11, routeIds, count, checkType, 0, 0);
    case 8:
      v10 = sub_1C32CC8(int___TypeInfo, 1);
      if ( !v10 )
LABEL_44:
        sub_1C32E7C(v10);
      v17 = (System_Collections_Generic_IList_int__o *)v10;
      if ( !*(_DWORD *)(v10 + 24) )
LABEL_45:
        sub_1C32E84(v10);
      *(_DWORD *)(v10 + 32) = this->fields.questId;
      v18 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v20 = this->fields.count;
      v19 = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCollection = CondType__IsRouteSelect_40291224(v17, v18, v20, v19, 0, 0);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C34F69 & 1) == 0 )
  {
    sub_1C32C20(&ScriptBranchListViewItem___c_TypeInfo);
    byte_4C34F69 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ScriptBranchListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptBranchListViewItem___c_TypeInfo->static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ScriptBranchListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C34F6A & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C34F6A = 1;
  }
  if ( !c )
    goto LABEL_15;
  userId = c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(this);
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
  if ( (byte_4C34F6B & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C34F6B = 1;
  }
  if ( !c )
    goto LABEL_17;
  userId = c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(this);
  i = v4->fields.i;
  if ( (unsigned int)i >= LODWORD(routeIds->max_length) )
    sub_1C32E84(this);
  return c->fields.routeId == routeIds->m_Items[i];
}