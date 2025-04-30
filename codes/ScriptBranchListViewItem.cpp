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
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w0

  v20 = this;
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  v20->fields.title = title;
  sub_1B8635C((CGThumbnailListItem_o *)&v20->fields.title, (int32_t)title, v21, v22);
  v20->fields.tag = tag;
  sub_1B8635C((CGThumbnailListItem_o *)&v20->fields.tag, (int32_t)tag, v23, v24);
  v20->fields.questId = questId;
  v20->fields.questPhase = questFlag;
  v20->fields.svtId = svtId;
  v20->fields.routeIds = routeId;
  sub_1B8635C((CGThumbnailListItem_o *)&v20->fields.routeIds, (int32_t)routeId, v25, v26);
  v20->fields.debugComment = debugComment;
  v20 = (ScriptBranchListViewItem_o *)((char *)v20 + 144);
  v20->fields.sortIndex = count;
  v20->fields.loopIndex = checkType;
  sub_1B8635C((CGThumbnailListItem_o *)v20, (int32_t)debugComment, v27, v28);
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
  const MethodInfo *v7; // x3

  if ( (byte_4A4BAFD & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_152/*" - "*/, method);
    byte_4A4BAFD = 1;
  }
  ++this->fields.lineCount;
  tag = this->fields.tag;
  v4 = System_Int32__ToString((int)this + 136, 0LL);
  v5 = System_String__Concat_61683424(tag, (System_String_o *)StringLiteral_152/*" - "*/, v4, 0LL);
  this->fields.title = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Func_object__bool__o **v18; // x24
  System_Func_object__bool__o *v19; // x25
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UserQuestRouteEntity_o *v22; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Int32_array *routeIds; // x8
  __int64 v26; // x9
  struct UserQuestRouteEntity_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int32_t v31; // w8

  if ( (byte_4A4BAFA & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_UserQuestRouteEntity___, list);
    sub_1B863B8(&System_Func_UserQuestRouteEntity__bool__TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__, v10);
    sub_1B863B8(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo, v11);
    sub_1B863B8(&UserQuestRouteEntity_TypeInfo, v12);
    byte_4A4BAFA = 1;
  }
  v13 = sub_1B86604(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
LABEL_25:
    sub_1B86614(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_DWORD *)(v13 + 24) = 0;
  if ( cnt >= 1 )
  {
    v18 = (System_Func_object__bool__o **)(v13 + 32);
    do
    {
      v19 = *v18;
      if ( !*v18 )
      {
        v19 = (System_Func_object__bool__o *)sub_1B86604(System_Func_UserQuestRouteEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v19,
          (Il2CppObject *)v13,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          0LL);
        *(_QWORD *)(v13 + 32) = v19;
        sub_1B8635C((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v19, v20, v21);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v19,
              (const MethodInfo_2F57CB4 *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v22 = (UserQuestRouteEntity_o *)sub_1B86604(UserQuestRouteEntity_TypeInfo);
        UserQuestRouteEntity___ctor(v22, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, v15);
          byte_4A48C25 = 1;
        }
        v14 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v14 = NetworkManager_TypeInfo;
        }
        if ( !v22 )
          goto LABEL_25;
        v22->fields.userId = v14->static_fields->userIdNumber;
        v22->fields.questId = this->fields.questId;
        routeIds = this->fields.routeIds;
        if ( !routeIds )
          goto LABEL_25;
        v26 = *(int *)(v13 + 24);
        if ( (unsigned int)v26 >= routeIds->max_length )
          sub_1B8661C(v14, v15);
        v22->fields.routeId = routeIds->m_Items[v26 + 1];
        if ( !list )
          goto LABEL_25;
        items = list->fields._items;
        v28 = Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__;
        ++list->fields._version;
        if ( !items )
          goto LABEL_25;
        size = list->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            (Il2CppObject *)v22,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          list->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v22;
          sub_1B8635C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v22, v23, v24);
        }
      }
      v31 = *(_DWORD *)(v13 + 24) + 1;
      *(_DWORD *)(v13 + 24) = v31;
    }
    while ( v31 < cnt );
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
  __int64 v22; // x1
  int32_t branchType; // w8
  __int64 Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *v27; // x22
  __int64 v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_String_o *v31; // x0
  __int64 v32; // x1
  NetworkManager_c *v33; // x0
  int32_t questPhase; // w8
  char v35; // w19
  Il2CppObject *v36; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x22
  ScriptBranchListViewItem___c_c *v38; // x0
  System_Func_object__object__o *_9__18_0; // x23
  Il2CppObject *v40; // x24
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v45; // x0
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x3
  int32_t v48; // w8
  System_Collections_Generic_List_UserQuestRouteEntity__o *v49; // x22
  bool v50; // w20
  int32_t v51; // w19
  ScriptManager_c *v52; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  UserServantCollectionEntity_o *v56; // x20
  UserServantCollectionEntity_o *v57; // x20
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // kr00_16
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  UserServantCollectionEntity_o *v62; // x20
  System_Object_array *v63; // x19
  JsonManager_c *v64; // x0
  int32_t checkType; // w8
  int count; // w2
  System_String_o *v67; // x0
  __int64 v68; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4BAF8 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserQuestMaster___, flag);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_1B863B8(&Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__getEntityList__, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_UserQuestRouteEntity__UserQuestRouteEntity___, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___, v9);
    sub_1B863B8(&System_Func_UserQuestRouteEntity__UserQuestRouteEntity__TypeInfo, v10);
    sub_1B863B8(&JsonManager_TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__, v12);
    sub_1B863B8(&NetworkManager_TypeInfo, v13);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B863B8(&ScriptManager_TypeInfo, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B863B8(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__, v17);
    sub_1B863B8(&ScriptBranchListViewItem___c_TypeInfo, v18);
    sub_1B863B8(&UserQuestEntity___TypeInfo, v19);
    sub_1B863B8(&UserQuestEntity_TypeInfo, v20);
    sub_1B863B8(&UserServantCollectionEntity___TypeInfo, v21);
    sub_1B863B8(&UserServantCollectionEntity_TypeInfo, v22);
    byte_4A4BAF8 = 1;
  }
  entity = 0LL;
  branchType = this->fields.branchType;
  switch ( branchType )
  {
    case -1:
      if ( flag )
        v51 = 1;
      else
        v51 = 2;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4A4BADD )
      {
        sub_1B863B8(&ScriptManager_TypeInfo, flag);
        byte_4A4BADD = 1;
      }
      v52 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v52 = ScriptManager_TypeInfo;
      }
      scriptServerSettingAddress = v52->static_fields->scriptServerSettingAddress;
      if ( !byte_4A4BADE )
      {
        sub_1B863B8(&ScriptManager_TypeInfo, flag);
        v52 = ScriptManager_TypeInfo;
        byte_4A4BADE = 1;
      }
      if ( !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        v52 = ScriptManager_TypeInfo;
      }
      scriptObjectSettingAddress = v52->static_fields->scriptObjectSettingAddress;
      if ( !byte_4A4BADF )
      {
        sub_1B863B8(&ScriptManager_TypeInfo, flag);
        v52 = ScriptManager_TypeInfo;
        byte_4A4BADF = 1;
      }
      if ( !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        v52 = ScriptManager_TypeInfo;
      }
      scriptStartModeSettingName = v52->static_fields->scriptStartModeSettingName;
      if ( !byte_4A4BBD8 )
      {
        sub_1B863B8(&ScriptManager_TypeInfo, flag);
        v52 = ScriptManager_TypeInfo;
        byte_4A4BBD8 = 1;
      }
      if ( !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        v52 = ScriptManager_TypeInfo;
      }
      ScriptManager__SetScriptServerSetting(
        scriptServerSettingAddress,
        scriptObjectSettingAddress,
        v51,
        scriptStartModeSettingName,
        v52->static_fields->isHiddenTruthSetting,
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v25);
        byte_4A48C25 = 1;
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
      v27 = (UserQuestEntity_o *)sub_1B86604(UserQuestEntity_TypeInfo);
      UserQuestEntity___ctor(v27, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v25);
        byte_4A48C25 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v27 )
        goto LABEL_132;
      v27->fields.userId = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      v27->fields.questId = this->fields.questId;
      Instance = sub_1B86460(UserQuestEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_132;
      v28 = Instance;
      Instance = sub_1B864F4(v27, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_134;
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_133;
      *(_QWORD *)(v28 + 32) = v27;
      sub_1B8635C((CGThumbnailListItem_o *)(v28 + 32), (int32_t)v27, v29, v30);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v31 = JsonManager__toJson((Il2CppObject *)v28, 0, 0, 0LL);
      ((void (__fastcall *)(Il2CppObject *, System_String_o *, Il2CppMethodPointer))MasterData_object->klass->vtable[9].method)(
        MasterData_object,
        v31,
        MasterData_object->klass->vtable[10].methodPtr);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v32);
        byte_4A48C25 = 1;
      }
      v33 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v33 = NetworkManager_TypeInfo;
      }
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)MasterData_object,
                            v33->static_fields->userIdNumber,
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
        sub_1B86614(Instance, v25);
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      v36 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v25);
        byte_4A48C25 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v36 )
        goto LABEL_132;
      Instance = UserServantCollectionMaster__TryGetEntity(
                   (UserServantCollectionMaster_o *)v36,
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
      v56 = (UserServantCollectionEntity_o *)sub_1B86604(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor(v56, 0LL);
      entity = v56;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v25);
        byte_4A48C25 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v56 )
        goto LABEL_132;
      v56->fields.userId = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      v57 = entity;
      svtId = this->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      v25 = *(_QWORD *)&v59.fields.fakeValue;
      Instance = *(_QWORD *)&v59.fields.currentCryptoKey;
      if ( !v57 )
        goto LABEL_132;
      v57->fields.svtId = v59;
      if ( !entity )
        goto LABEL_132;
      entity->fields.status = 2;
      Instance = sub_1B86460(UserServantCollectionEntity___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_132;
      v62 = entity;
      v63 = (System_Object_array *)Instance;
      if ( entity )
      {
        Instance = sub_1B864F4(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
        if ( !Instance )
        {
LABEL_134:
          v68 = sub_1B86638();
          sub_1B864E0(v68, 0LL);
        }
      }
      if ( !v63->max_length )
LABEL_133:
        sub_1B8661C(Instance, v25);
      v63->m_Items[0] = (Il2CppObject *)v62;
      sub_1B8635C((CGThumbnailListItem_o *)v63->m_Items, (int32_t)v62, v60, v61);
      v64 = JsonManager_TypeInfo;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        goto LABEL_129;
      goto LABEL_130;
    case 7:
    case 8:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_132;
      v36 = (Il2CppObject *)Instance;
      v37 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 40);
      v38 = ScriptBranchListViewItem___c_TypeInfo;
      if ( !ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo);
        v38 = ScriptBranchListViewItem___c_TypeInfo;
      }
      _9__18_0 = (System_Func_object__object__o *)v38->static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v38 = ScriptBranchListViewItem___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v38->static_fields->__9;
        _9__18_0 = (System_Func_object__object__o *)sub_1B86604(System_Func_UserQuestRouteEntity__UserQuestRouteEntity__TypeInfo);
        System_Func_object__object____ctor(
          _9__18_0,
          v40,
          Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__,
          0LL);
        static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__18_0 = (struct System_Func_UserQuestRouteEntity__UserQuestRouteEntity__o *)_9__18_0;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v42, v43);
      }
      v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v37,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_UserQuestRouteEntity__UserQuestRouteEntity___);
      v45 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v44,
                                                                         (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v48 = this->fields.branchType;
      v49 = v45;
      v50 = (v48 != 7 || !flag) && (v48 != 8 || flag);
      checkType = this->fields.checkType;
      if ( !checkType )
      {
        if ( !this->fields.count )
        {
          if ( v50 )
          {
            count = 1;
            goto LABEL_121;
          }
          goto LABEL_125;
        }
        ScriptBranchListViewItem__RemoveUserQuestRoute(this, v45, v46);
        if ( v50 )
          goto LABEL_126;
LABEL_120:
        count = this->fields.count;
        goto LABEL_121;
      }
      if ( checkType == 1 )
      {
        if ( v50 )
          goto LABEL_125;
        goto LABEL_120;
      }
      if ( checkType != 2 )
        goto LABEL_126;
      if ( v50 )
      {
        count = this->fields.count + 1;
LABEL_121:
        ScriptBranchListViewItem__AddUserQuestRoute(this, v49, count, v47);
        goto LABEL_126;
      }
LABEL_125:
      ScriptBranchListViewItem__RemoveUserQuestRoute(this, v45, v46);
LABEL_126:
      Instance = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v36->klass->vtable[6].method)(
                   v36,
                   v36->klass->vtable[7].methodPtr);
      if ( !v49 )
        goto LABEL_132;
      v63 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)v49,
              (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
      {
        v64 = JsonManager_TypeInfo;
LABEL_129:
        j_il2cpp_runtime_class_init_0(v64);
      }
LABEL_130:
      v67 = JsonManager__toJson(&v63->obj, 0, 0, 0LL);
      ((void (__fastcall *)(Il2CppObject *, System_String_o *, Il2CppMethodPointer))v36->klass->vtable[9].method)(
        v36,
        v67,
        v36->klass->vtable[10].methodPtr);
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
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  System_Predicate_object__o *v16; // x22
  Il2CppObject *v17; // x0

  v4 = this;
  if ( (byte_4A4BAF9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__, list);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__, v5);
    sub_1B863B8(&System_Predicate_UserQuestRouteEntity__TypeInfo, v6);
    sub_1B863B8(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__, v7);
    this = (ScriptBranchListViewItem_o *)sub_1B863B8(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo, v8);
    byte_4A4BAF9 = 1;
  }
  routeIds = v4->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( (int)routeIds->max_length >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = sub_1B86604(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0LL);
      if ( !v11 )
        break;
      *(_QWORD *)(v11 + 24) = v4;
      sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)v4, v12, v13);
      if ( v10 >= routeIds->max_length )
        sub_1B8661C(v14, v15);
      *(_DWORD *)(v11 + 16) = routeIds->m_Items[v10 + 1];
      v16 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_UserQuestRouteEntity__TypeInfo);
      System_Predicate_object____ctor(
        v16,
        (Il2CppObject *)v11,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        0LL);
      if ( !list )
        break;
      v17 = System_Collections_Generic_List_object___Find(
              (System_Collections_Generic_List_object__o *)list,
              (System_Predicate_T__o *)v16,
              (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v17 )
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)list,
          v17,
          (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v10 >= (int)routeIds->max_length )
        return list;
    }
LABEL_13:
    sub_1B86614(this, list);
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
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_String_o *v36; // x20
  int32_t v37; // w1
  struct System_Int32_array *v38; // x8
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t questId; // [xsp+8h] [xbp-28h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4BAFB & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&string___TypeInfo, v6);
    sub_1B863B8(&string_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_20619/*"isNotMaterial"*/, v8);
    sub_1B863B8(&StringLiteral_8784/*"Master : Female"*/, v9);
    sub_1B863B8(&StringLiteral_819/*", "*/, v10);
    sub_1B863B8(&StringLiteral_6703/*"Flag   : back"*/, v11);
    sub_1B863B8(&StringLiteral_9446/*"Number : {0}, releaseId : {1}"*/, v12);
    sub_1B863B8(&StringLiteral_6702/*"Flag   : "*/, v13);
    sub_1B863B8(&StringLiteral_8785/*"Master : Male"*/, v14);
    sub_1B863B8(&StringLiteral_20634/*"isRevival"*/, v15);
    sub_1B863B8(&StringLiteral_851/*", questId:"*/, v16);
    sub_1B863B8(&StringLiteral_12511/*"ServantId : "*/, v17);
    sub_1B863B8(&StringLiteral_20616/*"isMaterial"*/, v18);
    byte_4A4BAFB = 1;
  }
  Empty = string_TypeInfo->static_fields->Empty;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
        v24 = &StringLiteral_8785/*"Master : Male"*/;
      else
        v24 = &StringLiteral_8784/*"Master : Female"*/;
      goto LABEL_28;
    case 0:
      v24 = &StringLiteral_20616/*"isMaterial"*/;
      goto LABEL_28;
    case 1:
      v24 = &StringLiteral_20619/*"isNotMaterial"*/;
      goto LABEL_28;
    case 2:
    case 3:
      v20 = System_Int32__ToString((int)this + 128, 0LL);
      v21 = (_DWORD)this + 132;
      goto LABEL_15;
    case 4:
      v24 = &StringLiteral_20634/*"isRevival"*/;
LABEL_28:
      Empty = (System_String_o *)*v24;
      goto LABEL_29;
    case 5:
    case 6:
      v22 = System_Int32__ToString((int)this + 156, 0LL);
      v23 = System_String__Concat_61645176((System_String_o *)StringLiteral_12511/*"ServantId : "*/, v22, 0LL);
      break;
    case 9:
      questPhase = this->fields.questPhase;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questPhase, v2, v3, v4);
      questId = this->fields.questId;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &questId, v26, v27, v28);
      v23 = System_String__Format_61686468((System_String_o *)StringLiteral_9446/*"Number : {0}, releaseId : {1}"*/, v25, v29, 0LL);
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
      v23 = System_String__Concat_61685428(
              (System_String_o *)StringLiteral_6702/*"Flag   : "*/,
              v20,
              (System_String_o *)StringLiteral_819/*", "*/,
              v33,
              0LL);
      break;
    case 0xB:
      v30 = (System_String_o *)sub_1B86460(string___TypeInfo, 6LL);
      if ( !v30 )
        goto LABEL_35;
      v36 = v30;
      if ( !LODWORD(v30[1].klass) )
        goto LABEL_34;
      v37 = StringLiteral_6703/*"Flag   : back"*/;
      v30[1].monitor = (void *)StringLiteral_6703/*"Flag   : back"*/;
      sub_1B8635C((CGThumbnailListItem_o *)&v30[1].monitor, v37, v34, v35);
      v38 = this->fields.routeIds;
      if ( !v38 )
LABEL_35:
        sub_1B86614(v30, v31);
      if ( !v38->max_length )
        goto LABEL_34;
      v30 = System_Int32__ToString((int)v38 + 32, 0LL);
      if ( LODWORD(v36[1].klass) <= 1 )
        goto LABEL_34;
      v36[1].fields = (System_String_Fields)v30;
      sub_1B8635C((CGThumbnailListItem_o *)&v36[1].fields, (int32_t)v30, v39, v40);
      if ( LODWORD(v36[1].klass) <= 2 )
        goto LABEL_34;
      v43 = StringLiteral_851/*", questId:"*/;
      v36[2].klass = (System_String_c *)StringLiteral_851/*", questId:"*/;
      sub_1B8635C((CGThumbnailListItem_o *)&v36[2], v43, v41, v42);
      v30 = System_Int32__ToString((int)this + 128, 0LL);
      if ( LODWORD(v36[1].klass) <= 3
        || (v36[2].monitor = v30,
            sub_1B8635C((CGThumbnailListItem_o *)&v36[2].monitor, (int32_t)v30, v44, v45),
            LODWORD(v36[1].klass) <= 4)
        || (v48 = StringLiteral_819/*", "*/,
            v36[2].fields = (System_String_Fields)StringLiteral_819/*", "*/,
            sub_1B8635C((CGThumbnailListItem_o *)&v36[2].fields, v48, v46, v47),
            v30 = System_Int32__ToString((int)this + 132, 0LL),
            LODWORD(v36[1].klass) <= 5) )
      {
LABEL_34:
        sub_1B8661C(v30, v31);
      }
      v36[3].klass = (System_String_c *)v30;
      sub_1B8635C((CGThumbnailListItem_o *)&v36[3], (int32_t)v30, v49, v50);
      v23 = System_String__Concat_61685692((System_String_array *)v36, 0LL);
      break;
    default:
      goto LABEL_29;
  }
  Empty = v23;
LABEL_29:
  if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0LL) )
  {
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_61645176(Empty, (System_String_o *)StringLiteral_819/*", "*/, 0LL);
    return System_String__Concat_61645176(Empty, this->fields.debugComment, 0LL);
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

  if ( (byte_4A4BAFC & 1) == 0 )
  {
    sub_1B863B8(&CondType_TypeInfo, method);
    sub_1B863B8(&int___TypeInfo, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&ScriptManager_TypeInfo, v5);
    byte_4A4BAFC = 1;
  }
  v6 = 0;
  switch ( this->fields.branchType )
  {
    case 0xFFFFFFFF:
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4A4BAE2 )
      {
        sub_1B863B8(&ScriptManager_TypeInfo, method);
        byte_4A4BAE2 = 1;
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
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, method);
        byte_4A48C25 = 1;
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
      v13 = sub_1B86460(int___TypeInfo, 1LL);
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
      return CondType__IsRouteSelect_38606264(v15, routeIds, count, checkType, 0LL);
    case 8:
      v13 = sub_1B86460(int___TypeInfo, 1LL);
      if ( !v13 )
LABEL_44:
        sub_1B86614(v13, v14);
      v21 = (System_Collections_Generic_IList_int__o *)v13;
      if ( !*(_DWORD *)(v13 + 24) )
LABEL_45:
        sub_1B8661C(v13, v14);
      *(_DWORD *)(v13 + 32) = this->fields.questId;
      v22 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
      v24 = this->fields.count;
      v23 = this->fields.checkType;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsCollection = CondType__IsRouteSelect_38606264(v21, v22, v24, v23, 0LL);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4BAFE & 1) == 0 )
  {
    sub_1B863B8(&ScriptBranchListViewItem___c_TypeInfo, v1);
    byte_4A4BAFE = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(ScriptBranchListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ScriptBranchListViewItem___c_TypeInfo->static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)ScriptBranchListViewItem___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ScriptBranchListViewItem___c___ctor(ScriptBranchListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserQuestRouteEntity_o *__fastcall ScriptBranchListViewItem___c___ChangeFlag_b__18_0(
        ScriptBranchListViewItem___c_o *this,
        UserQuestRouteEntity_o *data,
        const MethodInfo *method)
{
  return data;
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
  if ( (byte_4A4BAFF & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_1B863B8(&NetworkManager_TypeInfo, c);
    byte_4A4BAFF = 1;
  }
  if ( !c )
    goto LABEL_15;
  userId = c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, c);
    byte_4A48C25 = 1;
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
    sub_1B86614(this, c);
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
  if ( (byte_4A4BB00 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_1B863B8(&NetworkManager_TypeInfo, c);
    byte_4A4BB00 = 1;
  }
  if ( !c )
    goto LABEL_17;
  userId = c->fields.userId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, c);
    byte_4A48C25 = 1;
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
    sub_1B86614(this, c);
  i = v4->fields.i;
  if ( (unsigned int)i >= routeIds->max_length )
    sub_1B8661C(this, c);
  return c->fields.routeId == routeIds->m_Items[i + 1];
}