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
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  v20->fields.title = title;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->fields.title, (int32_t)title, v21, v22);
  v20->fields.tag = tag;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->fields.tag, (int32_t)tag, v23, v24);
  v20->fields.questId = questId;
  v20->fields.questPhase = questFlag;
  v20->fields.svtId = svtId;
  v20->fields.routeIds = routeId;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->fields.routeIds, (int32_t)routeId, v25, v26);
  v20->fields.debugComment = debugComment;
  v20 = (ScriptBranchListViewItem_o *)((char *)v20 + 152);
  v20->fields.sortIndex = count;
  v20->fields.loopIndex = checkType;
  sub_1C6B9AC((CGThumbnailListItem_o *)v20, (int32_t)debugComment, v27, v28);
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

  if ( (byte_4CB3842 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_150/*" - "*/);
    byte_4CB3842 = 1;
  }
  ++this->fields.lineCount;
  tag = this->fields.tag;
  v4 = System_Int32__ToString((int)this + 144, 0);
  v5 = System_String__Concat_64005056(tag, (System_String_o *)StringLiteral_150/*" - "*/, v4, 0);
  this->fields.title = v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
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
  const MethodInfo *v11; // x3
  System_Func_object__bool__o **v12; // x24
  System_Func_object__bool__o *v13; // x25
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UserQuestRouteEntity_o *v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Int32_array *routeIds; // x8
  __int64 v20; // x9
  struct UserQuestRouteEntity_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  int32_t v25; // w8

  if ( (byte_4CB383F & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_UserQuestRouteEntity___);
    sub_1C6BA08(&System_Func_UserQuestRouteEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__);
    sub_1C6BA08(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
    sub_1C6BA08(&UserQuestRouteEntity_TypeInfo);
    byte_4CB383F = 1;
  }
  v7 = sub_1C6BC54(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
LABEL_25:
    sub_1C6BC60(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = 0;
  if ( cnt >= 1 )
  {
    v12 = (System_Func_object__bool__o **)(v7 + 32);
    do
    {
      v13 = *v12;
      if ( !*v12 )
      {
        v13 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_UserQuestRouteEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v13,
          (Il2CppObject *)v7,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          0);
        *(_QWORD *)(v7 + 32) = v13;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v13, v14, v15);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v13,
              (const MethodInfo_3124430 *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v16 = (UserQuestRouteEntity_o *)sub_1C6BC54(UserQuestRouteEntity_TypeInfo);
        UserQuestRouteEntity___ctor(v16, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        v8 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v8 = NetworkManager_TypeInfo;
        }
        if ( !v16 )
          goto LABEL_25;
        v16->fields.userId = v8->static_fields->userIdNumber;
        v16->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_25;
        v20 = *(int *)(v7 + 24);
        if ( (unsigned int)v20 >= LODWORD(routeIds->max_length) )
          sub_1C6BC68(v8);
        v16->fields.routeId = routeIds->m_Items[v20];
        if ( !list )
          goto LABEL_25;
        items = list->fields._items;
        v22 = Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__;
        ++list->fields._version;
        if ( !items )
          goto LABEL_25;
        size = list->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            (Il2CppObject *)v16,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          list->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v16;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v16, v17, v18);
        }
      }
      v25 = *(_DWORD *)(v7 + 24) + 1;
      *(_DWORD *)(v7 + 24) = v25;
    }
    while ( v25 < cnt );
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
  const MethodInfo *v12; // x3
  System_String_o *v13; // x0
  NetworkManager_c *v14; // x0
  int32_t questPhase; // w8
  char v16; // w19
  Il2CppObject *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x22
  ScriptBranchListViewItem___c_c *v19; // x0
  System_Func_object__object__o *_9__18_0; // x23
  Il2CppObject *v21; // x24
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
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
  const MethodInfo *v42; // x3
  UserServantCollectionEntity_o *v43; // x20
  System_Object_array *v44; // x19
  JsonManager_c *v45; // x0
  int32_t checkType; // w8
  int count; // w2
  System_String_o *v48; // x0
  __int64 v49; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB383D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__getEntityList__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_UserQuestRouteEntity__UserQuestRouteEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
    sub_1C6BA08(&System_Func_UserQuestRouteEntity__UserQuestRouteEntity__TypeInfo);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&ScriptManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__);
    sub_1C6BA08(&ScriptBranchListViewItem___c_TypeInfo);
    sub_1C6BA08(&UserQuestEntity___TypeInfo);
    sub_1C6BA08(&UserQuestEntity_TypeInfo);
    sub_1C6BA08(&UserServantCollectionEntity___TypeInfo);
    sub_1C6BA08(&UserServantCollectionEntity_TypeInfo);
    byte_4CB383D = 1;
  }
  entity = 0;
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
      if ( !byte_4CB3823 )
      {
        sub_1C6BA08(&ScriptManager_TypeInfo);
        byte_4CB3823 = 1;
      }
      v33 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v33 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v33->static_fields->scriptServerSettingAddress;
      if ( !byte_4CB3824 )
      {
        sub_1C6BA08(&ScriptManager_TypeInfo);
        v33 = ScriptManager_TypeInfo;
        byte_4CB3824 = 1;
      }
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v33->static_fields->scriptObjectSettingAddress;
      if ( !byte_4CB3825 )
      {
        sub_1C6BA08(&ScriptManager_TypeInfo);
        v33 = ScriptManager_TypeInfo;
        byte_4CB3825 = 1;
      }
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v33->static_fields->scriptStartModeSettingName;
      if ( !byte_4CB391D )
      {
        sub_1C6BA08(&ScriptManager_TypeInfo);
        v33 = ScriptManager_TypeInfo;
        byte_4CB391D = 1;
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
        0);
      return;
    case 0:
    case 1:
      v16 = (branchType != 0) ^ flag;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__SetIsCollection(v16 & 1, 0);
      return;
    case 2:
    case 3:
    case 11:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
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
      v9 = (UserQuestEntity_o *)sub_1C6BC54(UserQuestEntity_TypeInfo);
      UserQuestEntity___ctor(v9, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
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
      Instance = sub_1C6BAB0(UserQuestEntity___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_132;
      v10 = Instance;
      Instance = sub_1C6BB44(v9, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_134;
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_133;
      *(_QWORD *)(v10 + 32) = v9;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v9, v11, v12);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v13 = JsonManager__toJson((Il2CppObject *)v10, 0, 0, 0);
      ((void (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))MasterData_object->klass->vtable[9].methodPtr)(
        MasterData_object,
        v13,
        MasterData_object->klass->vtable[9].method);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      v14 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v14 = NetworkManager_TypeInfo;
      }
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)MasterData_object,
                            v14->static_fields->userIdNumber,
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
        sub_1C6BC60(Instance, v7);
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      v17 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v17 )
        goto LABEL_132;
      Instance = UserServantCollectionMaster__TryGetEntity(
                   (UserServantCollectionMaster_o *)v17,
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
      v37 = (UserServantCollectionEntity_o *)sub_1C6BC54(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor(v37, 0);
      entity = v37;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v37 )
        goto LABEL_132;
      v37->fields.userId = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      v38 = entity;
      svtId = this->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
      v7 = *(_QWORD *)&v40.fields.fakeValue;
      Instance = *(_QWORD *)&v40.fields.currentCryptoKey;
      if ( !v38 )
        goto LABEL_132;
      v38->fields.svtId = v40;
      if ( !entity )
        goto LABEL_132;
      entity->fields.status = 2;
      Instance = sub_1C6BAB0(UserServantCollectionEntity___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_132;
      v43 = entity;
      v44 = (System_Object_array *)Instance;
      if ( entity )
      {
        Instance = sub_1C6BB44(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_134:
          v49 = sub_1C6BC84();
          sub_1C6BB30(v49, 0);
        }
      }
      if ( !LODWORD(v44->max_length) )
LABEL_133:
        sub_1C6BC68(Instance);
      v44->m_Items[0] = (Il2CppObject *)v43;
      sub_1C6B9AC((CGThumbnailListItem_o *)v44->m_Items, (int32_t)v43, v41, v42);
      v45 = JsonManager_TypeInfo;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        goto LABEL_129;
      goto LABEL_130;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_132;
      v17 = (Il2CppObject *)Instance;
      v18 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 40);
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
        _9__18_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_UserQuestRouteEntity__UserQuestRouteEntity__TypeInfo);
        System_Func_object__object____ctor(_9__18_0, v21, Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__, 0);
        static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__18_0 = (struct System_Func_UserQuestRouteEntity__UserQuestRouteEntity__o *)_9__18_0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v23, v24);
      }
      v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v18,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_UserQuestRouteEntity__UserQuestRouteEntity___);
      v26 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v25,
                                                                         (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
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
            goto LABEL_121;
          }
          goto LABEL_125;
        }
        ScriptBranchListViewItem__RemoveUserQuestRoute(this, v26, v27);
        if ( v31 )
          goto LABEL_126;
LABEL_120:
        count = this->fields.count;
        goto LABEL_121;
      }
      if ( checkType == 1 )
      {
        if ( v31 )
          goto LABEL_125;
        goto LABEL_120;
      }
      if ( checkType != 2 )
        goto LABEL_126;
      if ( v31 )
      {
        count = this->fields.count + 1;
LABEL_121:
        ScriptBranchListViewItem__AddUserQuestRoute(this, v30, count, v28);
        goto LABEL_126;
      }
LABEL_125:
      ScriptBranchListViewItem__RemoveUserQuestRoute(this, v26, v27);
LABEL_126:
      Instance = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v17->klass->vtable[6].methodPtr)(
                   v17,
                   v17->klass->vtable[6].method);
      if ( !v30 )
        goto LABEL_132;
      v44 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)v30,
              (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v45 = JsonManager_TypeInfo;
LABEL_129:
        j_il2cpp_runtime_class_init_0(v45);
      }
LABEL_130:
      v48 = JsonManager__toJson(&v44->obj, 0, 0, 0);
      ((void (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))v17->klass->vtable[9].methodPtr)(
        v17,
        v48,
        v17->klass->vtable[9].method);
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
  if ( (byte_4CB383E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
    sub_1C6BA08(&System_Predicate_UserQuestRouteEntity__TypeInfo);
    sub_1C6BA08(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__);
    this = (ScriptBranchListViewItem_o *)sub_1C6BA08(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
    byte_4CB383E = 1;
  }
  routeIds = v4->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( SLODWORD(routeIds->max_length) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_1C6BC54(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      if ( !v7 )
        break;
      *(_QWORD *)(v7 + 24) = v4;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v4, v8, v9);
      if ( v6 >= LODWORD(routeIds->max_length) )
        sub_1C6BC68(v10);
      *(_DWORD *)(v7 + 16) = routeIds->m_Items[v6];
      v11 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_UserQuestRouteEntity__TypeInfo);
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
              (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v12 )
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)list,
          v12,
          (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v6 >= SLODWORD(routeIds->max_length) )
        return list;
    }
LABEL_13:
    sub_1C6BC60(this, list);
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
  const MethodInfo *v16; // x3
  System_String_o *v17; // x20
  int32_t v18; // w1
  struct System_Int32_array *v19; // x8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t questId; // [xsp+8h] [xbp-28h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB3840 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_21001/*"isNotMaterial"*/);
    sub_1C6BA08(&StringLiteral_8934/*"Master : Female"*/);
    sub_1C6BA08(&StringLiteral_809/*", "*/);
    sub_1C6BA08(&StringLiteral_6766/*"Flag   : back"*/);
    sub_1C6BA08(&StringLiteral_9594/*"Number : {0}, releaseId : {1}"*/);
    sub_1C6BA08(&StringLiteral_6765/*"Flag   : "*/);
    sub_1C6BA08(&StringLiteral_8935/*"Master : Male"*/);
    sub_1C6BA08(&StringLiteral_21016/*"isRevival"*/);
    sub_1C6BA08(&StringLiteral_841/*", questId:"*/);
    sub_1C6BA08(&StringLiteral_12739/*"ServantId : "*/);
    sub_1C6BA08(&StringLiteral_20998/*"isMaterial"*/);
    byte_4CB3840 = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v8 = &StringLiteral_8935/*"Master : Male"*/;
      else
        v8 = &StringLiteral_8934/*"Master : Female"*/;
      goto LABEL_28;
    case 0:
      v8 = &StringLiteral_20998/*"isMaterial"*/;
      goto LABEL_28;
    case 1:
      v8 = &StringLiteral_21001/*"isNotMaterial"*/;
      goto LABEL_28;
    case 2:
    case 3:
      v4 = System_Int32__ToString((int)this + 136, 0);
      v5 = (_DWORD)this + 140;
      goto LABEL_15;
    case 4:
      v8 = &StringLiteral_21016/*"isRevival"*/;
LABEL_28:
      Empty = (System_String_o *)*v8;
      goto LABEL_29;
    case 5:
    case 6:
      v6 = System_Int32__ToString((int)this + 164, 0);
      v7 = System_String__Concat_63966792((System_String_o *)StringLiteral_12739/*"ServantId : "*/, v6, 0);
      break;
    case 9:
      questPhase = this->fields.questPhase;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase);
      questId = this->fields.questId;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId);
      v7 = System_String__Format_64008100((System_String_o *)StringLiteral_9594/*"Number : {0}, releaseId : {1}"*/, v9, v10, 0);
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
      v7 = System_String__Concat_64007060(
             (System_String_o *)StringLiteral_6765/*"Flag   : "*/,
             v4,
             (System_String_o *)StringLiteral_809/*", "*/,
             v14,
             0);
      break;
    case 0xB:
      v11 = (System_String_o *)sub_1C6BAB0(string___TypeInfo, 6);
      if ( !v11 )
        goto LABEL_35;
      v17 = v11;
      if ( !LODWORD(v11[1].klass) )
        goto LABEL_34;
      v18 = StringLiteral_6766/*"Flag   : back"*/;
      v11[1].monitor = (void *)StringLiteral_6766/*"Flag   : back"*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v11[1].monitor, v18, v15, v16);
      v19 = this->fields.routeIds;
      if ( !v19 )
LABEL_35:
        sub_1C6BC60(v11, v12);
      if ( !LODWORD(v19->max_length) )
        goto LABEL_34;
      v11 = System_Int32__ToString((int)v19 + 32, 0);
      if ( LODWORD(v17[1].klass) <= 1 )
        goto LABEL_34;
      v17[1].fields = (System_String_Fields)v11;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v17[1].fields, (int32_t)v11, v20, v21);
      if ( LODWORD(v17[1].klass) <= 2 )
        goto LABEL_34;
      v24 = StringLiteral_841/*", questId:"*/;
      v17[2].klass = (System_String_c *)StringLiteral_841/*", questId:"*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v17[2], v24, v22, v23);
      v11 = System_Int32__ToString((int)this + 136, 0);
      if ( LODWORD(v17[1].klass) <= 3
        || (v17[2].monitor = v11,
            sub_1C6B9AC((CGThumbnailListItem_o *)&v17[2].monitor, (int32_t)v11, v25, v26),
            LODWORD(v17[1].klass) <= 4)
        || (v29 = StringLiteral_809/*", "*/,
            v17[2].fields = (System_String_Fields)StringLiteral_809/*", "*/,
            sub_1C6B9AC((CGThumbnailListItem_o *)&v17[2].fields, v29, v27, v28),
            v11 = System_Int32__ToString((int)this + 140, 0),
            LODWORD(v17[1].klass) <= 5) )
      {
LABEL_34:
        sub_1C6BC68(v11);
      }
      v17[3].klass = (System_String_c *)v11;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v17[3], (int32_t)v11, v30, v31);
      v7 = System_String__Concat_64007324((System_String_array *)v17, 0);
      break;
    default:
      goto LABEL_29;
  }
  Empty = v7;
LABEL_29:
  if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0) )
  {
    if ( !System_String__IsNullOrEmpty(Empty, 0) )
      Empty = System_String__Concat_63966792(Empty, (System_String_o *)StringLiteral_809/*", "*/, 0);
    return System_String__Concat_63966792(Empty, this->fields.debugComment, 0);
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

  if ( (byte_4CB3841 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&ScriptManager_TypeInfo);
    byte_4CB3841 = 1;
  }
  v3 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4CB3828 )
      {
        sub_1C6BA08(&ScriptManager_TypeInfo);
        byte_4CB3828 = 1;
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
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
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
      v10 = sub_1C6BAB0(int___TypeInfo, 1);
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
      return CondType__IsRouteSelect_40620272(v12, routeIds, count, checkType, 0, 0);
    case 8:
      v10 = sub_1C6BAB0(int___TypeInfo, 1);
      if ( !v10 )
LABEL_44:
        sub_1C6BC60(v10, v11);
      v18 = (System_Collections_Generic_IList_int__o *)v10;
      if ( !*(_DWORD *)(v10 + 24) )
LABEL_45:
        sub_1C6BC68(v10);
      *(_DWORD *)(v10 + 32) = this->fields.questId;
      v19 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v21 = this->fields.count;
      v20 = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCollection = CondType__IsRouteSelect_40620272(v18, v19, v21, v20, 0, 0);
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

  if ( (byte_4CB3843 & 1) == 0 )
  {
    sub_1C6BA08(&ScriptBranchListViewItem___c_TypeInfo);
    byte_4CB3843 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ScriptBranchListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptBranchListViewItem___c_TypeInfo->static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ScriptBranchListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4CB3844 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB3844 = 1;
  }
  if ( !c )
    goto LABEL_15;
  userId = c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
    sub_1C6BC60(this, c);
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
  if ( (byte_4CB3845 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB3845 = 1;
  }
  if ( !c )
    goto LABEL_17;
  userId = c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
    sub_1C6BC60(this, c);
  i = v4->fields.i;
  if ( (unsigned int)i >= LODWORD(routeIds->max_length) )
    sub_1C6BC68(this);
  return c->fields.routeId == routeIds->m_Items[i];
}