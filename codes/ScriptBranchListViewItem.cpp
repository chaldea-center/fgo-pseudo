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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  v20 = this;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v20->fields.title = title;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields.title, (int32_t)title, v21, v22, v23, v24, v25, v26);
  v20->fields.tag = tag;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields.tag, (int32_t)tag, v27, v28, v29, v30, v31, v32);
  v20->fields.questId = questId;
  v20->fields.questPhase = questFlag;
  v20->fields.svtId = svtId;
  v20->fields.routeIds = routeId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields.routeIds, (int32_t)routeId, v33, v34, v35, v36, v37, v38);
  v20->fields.debugComment = debugComment;
  v20 = (ScriptBranchListViewItem_o *)((char *)v20 + 152);
  v20->fields.sortIndex = count;
  v20->fields.loopIndex = checkType;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v20, (int32_t)debugComment, v39, v40, v41, v42, v43, v44);
  LODWORD(v20->monitor) = System_Int32__Parse(strLine, 0);
  v20[-1].fields.branchType = 1;
  LODWORD(v20->fields.sortValue0) = branchType;
}


void ScriptBranchListViewItem__AddLineStr(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *tag; // x20
  System_String_o *v4; // x0
  struct System_String_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596DCCF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_151/*" - "*/);
    byte_596DCCF = 1;
  }
  tag = this->fields.tag;
  ++this->fields.lineCount;
  v4 = System_Int32__ToString((int)this + 144, 0);
  v5 = System_String__Concat_75694928(tag, (System_String_o *)StringLiteral_151/*" - "*/, v4, 0);
  this->fields.title = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Func_object__bool__o *v16; // x24
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UserQuestRouteEntity_o *v23; // x24
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int64_t userIdNumber; // x9
  struct System_Int32_array *routeIds; // x8
  __int64 v32; // x9
  struct UserQuestRouteEntity_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t v37; // w8

  if ( (byte_596DCCC & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_UserQuestRouteEntity___);
    sub_2213A60(&System_Func_UserQuestRouteEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__);
    sub_2213A60(&ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
    sub_2213A60(&UserQuestRouteEntity_TypeInfo);
    byte_596DCCC = 1;
  }
  v7 = sub_2213CCC(ScriptBranchListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
LABEL_24:
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = 0;
  if ( cnt >= 1 )
  {
    do
    {
      v16 = *(System_Func_object__bool__o **)(v7 + 32);
      if ( !v16 )
      {
        v16 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserQuestRouteEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v16,
          (Il2CppObject *)v7,
          Method_ScriptBranchListViewItem___c__DisplayClass20_0__AddUserQuestRoute_b__0__,
          0);
        *(_QWORD *)(v7 + 32) = v16;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v16, v17, v18, v19, v20, v21, v22);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)list,
              (System_Func_T__bool__o *)v16,
              (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_UserQuestRouteEntity___) )
      {
        v23 = (UserQuestRouteEntity_o *)sub_2213CCC(UserQuestRouteEntity_TypeInfo);
        UserQuestRouteEntity___ctor(v23, 0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v24);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        v8 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v24);
          v8 = NetworkManager_TypeInfo;
        }
        if ( !v23 )
          goto LABEL_24;
        userIdNumber = v8->static_fields->userIdNumber;
        routeIds = this->fields.routeIds;
        v23->fields.questId = this->fields.questId;
        v23->fields.userId = userIdNumber;
        if ( !routeIds )
          goto LABEL_24;
        v32 = *(int *)(v7 + 24);
        if ( (unsigned int)v32 >= LODWORD(routeIds->max_length) )
          sub_2213CE4(v8);
        v23->fields.routeId = routeIds->m_Items[v32];
        if ( !list )
          goto LABEL_24;
        items = list->fields._items;
        v34 = Method_System_Collections_Generic_List_UserQuestRouteEntity__Add__;
        ++list->fields._version;
        if ( !items )
          goto LABEL_24;
        size = list->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            (Il2CppObject *)v23,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          list->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
        }
      }
      v37 = *(_DWORD *)(v7 + 24) + 1;
      *(_DWORD *)(v7 + 24) = v37;
    }
    while ( v37 < cnt );
  }
  return list;
}


// local variable allocation has failed, the output may be wrong!
void ScriptBranchListViewItem__ChangeFlag(ScriptBranchListViewItem_o *this, bool flag, const MethodInfo *method)
{
  int32_t branchType; // w8
  __int64 Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x21
  int32_t v10; // w19
  ScriptManager_c *v11; // x0
  System_String_o *scriptServerSettingAddress; // x20
  System_String_o *scriptObjectSettingAddress; // x22
  System_String_o *scriptStartModeSettingName; // x23
  __int64 v15; // x2
  __int64 v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x22
  ScriptBranchListViewItem___c_c *v18; // x0
  struct ScriptBranchListViewItem___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__18_0; // x23
  Il2CppObject *v21; // x24
  struct ScriptBranchListViewItem___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v30; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x3
  int32_t v33; // w8
  System_Collections_Generic_List_object__o *v34; // x22
  bool v35; // w20
  char v36; // w19
  __int64 v37; // x2
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *v39; // x22
  __int64 v40; // x2
  int64_t v41; // x8
  Il2CppClass *v42; // x0
  __int64 v43; // x23
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x1
  __int64 v52; // x2
  System_String_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  NetworkManager_c *v56; // x0
  int32_t questPhase; // w8
  int32_t checkType; // w8
  int count; // w2
  UserServantCollectionEntity_o *v60; // x20
  __int64 v61; // x2
  __int64 v62; // x9
  UserServantCollectionEntity_o *v63; // x22
  int32_t svtId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v65; // x0
  int64_t v66; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // kr00_16
  UserServantCollectionEntity_o *v68; // x8
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  UserServantCollectionEntity_o *v75; // x20
  __int64 v76; // x19
  __int64 v77; // x1
  __int64 v78; // x2
  System_String_o *v79; // x0
  ScriptBranchListViewItem_o *v80; // x0
  System_Collections_Generic_List_UserQuestRouteEntity__o *v81; // x1
  __int64 v82; // x1
  __int64 v83; // x2
  System_Object_array *v84; // x19
  System_String_o *v85; // x0
  __int64 v86; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596DCCA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_UserQuestRouteEntity__UserQuestRouteEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
    sub_2213A60(&System_Func_UserQuestRouteEntity__UserQuestRouteEntity__TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__);
    sub_2213A60(&ScriptBranchListViewItem___c_TypeInfo);
    sub_2213A60(&UserQuestEntity___TypeInfo);
    sub_2213A60(&UserQuestEntity_TypeInfo);
    sub_2213A60(&UserServantCollectionEntity___TypeInfo);
    sub_2213A60(&UserServantCollectionEntity_TypeInfo);
    byte_596DCCA = 1;
  }
  branchType = this->fields.branchType;
  entity = 0;
  if ( branchType <= 3 )
  {
    if ( (unsigned int)branchType < 2 )
    {
      v36 = (branchType != 0) ^ flag;
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, flag, method);
      ScriptManager__SetIsCollection(v36 & 1, 0);
      return;
    }
    if ( (unsigned int)(branchType - 2) >= 2 )
    {
      if ( branchType == -1 )
      {
        if ( flag )
          v10 = 1;
        else
          v10 = 2;
        if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, flag, method);
        if ( !byte_596DC89 )
        {
          sub_2213A60(&ScriptManager_TypeInfo);
          byte_596DC89 = 1;
        }
        v11 = ScriptManager_TypeInfo;
        if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, flag, method);
          v11 = ScriptManager_TypeInfo;
        }
        scriptServerSettingAddress = v11->static_fields->scriptServerSettingAddress;
        if ( !byte_596DC8A )
        {
          sub_2213A60(&ScriptManager_TypeInfo);
          v11 = ScriptManager_TypeInfo;
          byte_596DC8A = 1;
        }
        if ( !*(&v11->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v11, flag, method);
          v11 = ScriptManager_TypeInfo;
        }
        scriptObjectSettingAddress = v11->static_fields->scriptObjectSettingAddress;
        if ( !byte_596DC8B )
        {
          sub_2213A60(&ScriptManager_TypeInfo);
          v11 = ScriptManager_TypeInfo;
          byte_596DC8B = 1;
        }
        if ( !*(&v11->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v11, flag, method);
          v11 = ScriptManager_TypeInfo;
        }
        scriptStartModeSettingName = v11->static_fields->scriptStartModeSettingName;
        if ( !byte_596DD83 )
        {
          sub_2213A60(&ScriptManager_TypeInfo);
          v11 = ScriptManager_TypeInfo;
          byte_596DD83 = 1;
        }
        if ( !*(&v11->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v11, flag, method);
          v11 = ScriptManager_TypeInfo;
        }
        ScriptManager__SetScriptServerSetting(
          scriptServerSettingAddress,
          scriptObjectSettingAddress,
          v10,
          scriptStartModeSettingName,
          v11->static_fields->isHiddenTruthSetting,
          0);
      }
      return;
    }
    goto LABEL_63;
  }
  if ( branchType > 6 )
  {
    if ( (unsigned int)(branchType - 7) < 2 )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_142;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
      if ( !Instance )
        goto LABEL_142;
      v16 = Instance;
      v17 = *(System_Collections_Generic_IEnumerable_TSource__o **)(Instance + 40);
      v18 = ScriptBranchListViewItem___c_TypeInfo;
      if ( !*(&ScriptBranchListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScriptBranchListViewItem___c_TypeInfo, v7, v15);
        v18 = ScriptBranchListViewItem___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__18_0 = (System_Func_object__object__o *)static_fields->__9__18_0;
      if ( !_9__18_0 )
      {
        if ( !*(&v18->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v18, v7, v15);
          static_fields = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)static_fields->__9;
        _9__18_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_UserQuestRouteEntity__UserQuestRouteEntity__TypeInfo);
        System_Func_object__object____ctor(_9__18_0, v21, Method_ScriptBranchListViewItem___c__ChangeFlag_b__18_0__, 0);
        v22 = ScriptBranchListViewItem___c_TypeInfo->static_fields;
        v22->__9__18_0 = (struct System_Func_UserQuestRouteEntity__UserQuestRouteEntity__o *)_9__18_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v22->__9__18_0,
          (int32_t)_9__18_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v17,
                                                                   (System_Func_TSource__TResult__o *)_9__18_0,
                                                                   (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_UserQuestRouteEntity__UserQuestRouteEntity___);
      v30 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v29,
                                                                         (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_UserQuestRouteEntity___);
      v33 = this->fields.branchType;
      v34 = (System_Collections_Generic_List_object__o *)v30;
      v35 = (v33 != 7 || !flag) && (v33 != 8 || flag);
      checkType = this->fields.checkType;
      if ( checkType )
      {
        if ( checkType != 1 )
        {
          if ( checkType == 2 )
          {
            if ( v35 )
            {
              count = this->fields.count + 1;
LABEL_133:
              v80 = this;
              v81 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)v34;
LABEL_134:
              ScriptBranchListViewItem__AddUserQuestRoute(v80, v81, count, v32);
              goto LABEL_138;
            }
LABEL_137:
            ScriptBranchListViewItem__RemoveUserQuestRoute(this, v30, v31);
            goto LABEL_138;
          }
          goto LABEL_138;
        }
        if ( v35 )
          goto LABEL_137;
      }
      else
      {
        if ( !this->fields.count )
        {
          if ( v35 )
          {
            v80 = this;
            v81 = (System_Collections_Generic_List_UserQuestRouteEntity__o *)v34;
            count = 1;
            goto LABEL_134;
          }
          goto LABEL_137;
        }
        ScriptBranchListViewItem__RemoveUserQuestRoute(this, v30, v31);
        if ( v35 )
        {
LABEL_138:
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 408LL))(
                       v16,
                       *(_QWORD *)(*(_QWORD *)v16 + 416LL));
          if ( !v34 )
            goto LABEL_142;
          v84 = System_Collections_Generic_List_object___ToArray(
                  v34,
                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__ToArray__);
          if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v82, v83);
          v85 = JsonManager__toJson(&v84->obj, 0, 0, 0);
          (*(void (__fastcall **)(__int64, System_String_o *, _QWORD))(*(_QWORD *)v16 + 456LL))(
            v16,
            v85,
            *(_QWORD *)(*(_QWORD *)v16 + 464LL));
          return;
        }
      }
      count = this->fields.count;
      goto LABEL_133;
    }
    if ( branchType != 11 )
      return;
LABEL_63:
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v37);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v37);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_142;
    Instance = (__int64)UserQuestMaster__getEntityFromId(
                          (UserQuestMaster_o *)MasterData_object,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          this->fields.questId,
                          0);
    if ( !Instance )
    {
      v39 = (UserQuestEntity_o *)sub_2213CCC(UserQuestEntity_TypeInfo);
      UserQuestEntity___ctor(v39, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v40);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v40);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !v39 )
        goto LABEL_142;
      v41 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      v42 = UserQuestEntity___TypeInfo;
      v39->fields.questId = this->fields.questId;
      v39->fields.userId = v41;
      Instance = sub_2213B20(v42, 1);
      if ( !Instance )
        goto LABEL_142;
      v43 = Instance;
      Instance = sub_2213BB4(v39, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( !Instance )
        goto LABEL_144;
      if ( !*(_DWORD *)(v43 + 24) )
        goto LABEL_143;
      *(_QWORD *)(v43 + 32) = v39;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 32), (int32_t)v39, v45, v46, v47, v48, v49, v50);
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v51, v52);
      v53 = JsonManager__toJson((Il2CppObject *)v43, 0, 0, 0);
      ((void (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))MasterData_object->klass->vtable[9].methodPtr)(
        MasterData_object,
        v53,
        MasterData_object->klass->vtable[9].method);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v56 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v54, v55);
        v56 = NetworkManager_TypeInfo;
      }
      Instance = (__int64)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)MasterData_object,
                            v56->static_fields->userIdNumber,
                            this->fields.questId,
                            0);
    }
    questPhase = this->fields.questPhase;
    if ( flag )
    {
      if ( questPhase < 1 )
      {
        if ( !Instance )
          goto LABEL_142;
      }
      else
      {
        if ( !Instance )
          goto LABEL_142;
        *(_DWORD *)(Instance + 36) = questPhase;
      }
      *(_DWORD *)(Instance + 40) = questPhase + 1;
    }
    else
    {
      if ( questPhase < 1 )
      {
        if ( !Instance )
          goto LABEL_142;
      }
      else
      {
        if ( !Instance )
          goto LABEL_142;
        *(_DWORD *)(Instance + 36) = 0;
      }
      *(_DWORD *)(Instance + 40) = 0;
    }
    return;
  }
  if ( (unsigned int)(branchType - 5) >= 2 )
  {
    if ( branchType == 4 )
    {
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, flag, method);
      ScriptManager__SetIsRevival(flag, 0);
    }
    return;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_142;
  Instance = UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)v9,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               this->fields.svtId,
               0);
  if ( (Instance & 1) == 0 )
  {
    if ( !flag )
      return;
    v60 = (UserServantCollectionEntity_o *)sub_2213CCC(UserServantCollectionEntity_TypeInfo);
    UserServantCollectionEntity___ctor(v60, 0);
    entity = v60;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v61);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v61);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v60 )
      goto LABEL_142;
    v62 = *(_QWORD *)(Instance + 184);
    v63 = entity;
    svtId = this->fields.svtId;
    v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v66 = *(_QWORD *)(v62 + 64);
    LODWORD(v62) = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1);
    v60->fields.userId = v66;
    if ( !(_DWORD)v62 )
      j_il2cpp_runtime_class_init_0(v65, v7, v61);
    v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
    v7 = *(_QWORD *)&v67.fields.fakeValue;
    Instance = *(_QWORD *)&v67.fields.currentCryptoKey;
    if ( !v63 )
      goto LABEL_142;
    v68 = entity;
    v63->fields.svtId = v67;
    if ( !v68 )
      goto LABEL_142;
    v68->fields.status = 2;
    Instance = sub_2213B20(UserServantCollectionEntity___TypeInfo, 1);
    if ( !Instance )
      goto LABEL_142;
    v75 = entity;
    v76 = Instance;
    if ( !entity || (Instance = sub_2213BB4(entity, *(_QWORD *)(*(_QWORD *)Instance + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v76 + 24) )
      {
        *(_QWORD *)(v76 + 32) = v75;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 32), (int32_t)v75, v69, v70, v71, v72, v73, v74);
        if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v77, v78);
        v79 = JsonManager__toJson((Il2CppObject *)v76, 0, 0, 0);
        ((void (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))v9->klass->vtable[9].methodPtr)(
          v9,
          v79,
          v9->klass->vtable[9].method);
        return;
      }
LABEL_143:
      sub_2213CE4(Instance);
    }
LABEL_144:
    v86 = sub_2213D00(Instance, v44);
    sub_2213BA0(v86, 0);
  }
  if ( flag )
  {
    if ( entity )
    {
      entity->fields.status = 2;
      return;
    }
LABEL_142:
    sub_2213CDC(Instance, v7);
  }
  if ( !entity )
    goto LABEL_142;
  entity->fields.status = 0;
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
  if ( ((intQuestPhase | intQuestId) & 0x80000000) == 0 && branchType != -1 )
    return System_String__op_Equality(this->fields.tag, tag, 0)
        && this->fields.questId == intQuestId
        && this->fields.questPhase == intQuestPhase;
  return (intQuestPhase | intQuestId) < 0 && branchType == -1;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x0
  System_Predicate_UserQuestRouteEntity__c *v15; // x0
  System_Predicate_object__o *v16; // x22
  Il2CppObject *v17; // x0

  v4 = this;
  if ( (byte_596DCCB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
    sub_2213A60(&System_Predicate_UserQuestRouteEntity__TypeInfo);
    sub_2213A60(&Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__);
    this = (ScriptBranchListViewItem_o *)sub_2213A60(&ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
    byte_596DCCB = 1;
  }
  routeIds = v4->fields.routeIds;
  if ( !routeIds )
    goto LABEL_13;
  if ( SLODWORD(routeIds->max_length) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_2213CCC(ScriptBranchListViewItem___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      if ( !v7 )
        break;
      *(_QWORD *)(v7 + 24) = v4;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v4, v8, v9, v10, v11, v12, v13);
      if ( v6 >= LODWORD(routeIds->max_length) )
        sub_2213CE4(v14);
      v15 = System_Predicate_UserQuestRouteEntity__TypeInfo;
      *(_DWORD *)(v7 + 16) = routeIds->m_Items[v6];
      v16 = (System_Predicate_object__o *)sub_2213CCC(v15);
      System_Predicate_object____ctor(
        v16,
        (Il2CppObject *)v7,
        Method_ScriptBranchListViewItem___c__DisplayClass19_0__RemoveUserQuestRoute_b__0__,
        0);
      if ( !list )
        break;
      v17 = System_Collections_Generic_List_object___Find(
              (System_Collections_Generic_List_object__o *)list,
              (System_Predicate_T__o *)v16,
              (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Find__);
      if ( v17 )
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)list,
          v17,
          (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_UserQuestRouteEntity__Remove__);
      if ( (__int64)++v6 >= SLODWORD(routeIds->max_length) )
        return list;
    }
LABEL_13:
    sub_2213CDC(this, list);
  }
  return list;
}


System_String_o *ScriptBranchListViewItem__get_CommentText(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  int32_t branchType; // w8
  System_String_o *v4; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  __int64 *v7; // x8
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x20
  int32_t v17; // w1
  struct System_Int32_array *routeIds; // x8
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x20
  int32_t v52; // w0
  struct System_Int32_array *v53; // x8
  System_String_o *v54; // x0
  Il2CppObject *v55; // x20
  Il2CppObject *v56; // x0
  int32_t questId; // [xsp+8h] [xbp-28h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596DCCD & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_21955/*"isNotMaterial"*/);
    sub_2213A60(&StringLiteral_9305/*"Master : Female"*/);
    sub_2213A60(&StringLiteral_870/*", "*/);
    sub_2213A60(&StringLiteral_7056/*"Flag   : back"*/);
    sub_2213A60(&StringLiteral_9992/*"Number : {0}, releaseId : {1}"*/);
    sub_2213A60(&StringLiteral_7055/*"Flag   : "*/);
    sub_2213A60(&StringLiteral_9306/*"Master : Male"*/);
    sub_2213A60(&StringLiteral_21980/*"isRevival"*/);
    sub_2213A60(&StringLiteral_904/*", questId:"*/);
    sub_2213A60(&StringLiteral_13275/*"ServantId : "*/);
    sub_2213A60(&StringLiteral_21949/*"isMaterial"*/);
    byte_596DCCD = 1;
  }
  branchType = this->fields.branchType;
  v4 = **(System_String_o ***)(qword_5984390 + 184);
  if ( branchType <= 3 )
  {
    if ( branchType <= 1 )
    {
      if ( branchType == -1 )
      {
        if ( ScriptBranchListViewItem__get_IsFlagOn(this, method) )
          v7 = &StringLiteral_9306/*"Master : Male"*/;
        else
          v7 = &StringLiteral_9305/*"Master : Female"*/;
      }
      else if ( branchType )
      {
        if ( branchType != 1 )
          goto LABEL_39;
        v7 = &StringLiteral_21955/*"isNotMaterial"*/;
      }
      else
      {
        v7 = &StringLiteral_21949/*"isMaterial"*/;
      }
      goto LABEL_38;
    }
    v51 = System_Int32__ToString((int)this + 136, 0);
    v52 = (_DWORD)this + 140;
    goto LABEL_32;
  }
  if ( branchType > 8 )
  {
    if ( branchType == 9 )
    {
      questPhase = this->fields.questPhase;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &questPhase);
      questId = this->fields.questId;
      v56 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &questId);
      v6 = System_String__Format_75697880((System_String_o *)StringLiteral_9992/*"Number : {0}, releaseId : {1}"*/, v55, v56, 0);
      goto LABEL_36;
    }
    if ( branchType != 10 )
    {
      if ( branchType != 11 )
        goto LABEL_39;
      v8 = (System_String_o *)sub_2213B20(string___TypeInfo, 6);
      if ( v8 )
      {
        v16 = v8;
        if ( !LODWORD(v8[1].klass) )
          goto LABEL_44;
        v17 = StringLiteral_7056/*"Flag   : back"*/;
        v8[1].monitor = (void *)StringLiteral_7056/*"Flag   : back"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8[1].monitor, v17, v10, v11, v12, v13, v14, v15);
        routeIds = this->fields.routeIds;
        if ( routeIds )
        {
          if ( LODWORD(routeIds->max_length) )
          {
            v8 = System_Int32__ToString((int)routeIds + 32, 0);
            if ( ((__int64)v16[1].klass & 0xFFFFFFFE) != 0 )
            {
              v16[1].fields = (System_String_Fields)v8;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16[1].fields, (int32_t)v8, v19, v20, v21, v22, v23, v24);
              if ( LODWORD(v16[1].klass) > 2 )
              {
                v31 = StringLiteral_904/*", questId:"*/;
                v16[2].klass = (System_String_c *)StringLiteral_904/*", questId:"*/;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16[2], v31, v25, v26, v27, v28, v29, v30);
                v8 = System_Int32__ToString((int)this + 136, 0);
                if ( ((__int64)v16[1].klass & 0xFFFFFFFC) != 0 )
                {
                  v16[2].monitor = v8;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v16[2].monitor,
                    (int32_t)v8,
                    v32,
                    v33,
                    v34,
                    v35,
                    v36,
                    v37);
                  if ( LODWORD(v16[1].klass) > 4 )
                  {
                    v44 = StringLiteral_870/*", "*/;
                    v16[2].fields = (System_String_Fields)StringLiteral_870/*", "*/;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16[2].fields, v44, v38, v39, v40, v41, v42, v43);
                    v8 = System_Int32__ToString((int)this + 140, 0);
                    if ( LODWORD(v16[1].klass) > 5 )
                    {
                      v16[3].klass = (System_String_c *)v8;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)&v16[3],
                        (int32_t)v8,
                        v45,
                        v46,
                        v47,
                        v48,
                        v49,
                        v50);
                      v6 = System_String__Concat_75697120((System_String_array *)v16, 0);
                      goto LABEL_36;
                    }
                  }
                }
              }
            }
          }
LABEL_44:
          sub_2213CE4(v8);
        }
      }
LABEL_45:
      sub_2213CDC(v8, v9);
    }
    v8 = System_Int32__ToString((int)this + 136, 0);
    v53 = this->fields.routeIds;
    if ( !v53 )
      goto LABEL_45;
    if ( !LODWORD(v53->max_length) )
      goto LABEL_44;
    v51 = v8;
    v52 = (_DWORD)v53 + 32;
LABEL_32:
    v54 = System_Int32__ToString(v52, 0);
    v6 = System_String__Concat_75696856(
           (System_String_o *)StringLiteral_7055/*"Flag   : "*/,
           v51,
           (System_String_o *)StringLiteral_870/*", "*/,
           v54,
           0);
    goto LABEL_36;
  }
  if ( (unsigned int)(branchType - 5) < 2 )
  {
    v5 = System_Int32__ToString((int)this + 164, 0);
    v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_13275/*"ServantId : "*/, v5, 0);
LABEL_36:
    v4 = v6;
    goto LABEL_39;
  }
  if ( branchType != 4 )
    goto LABEL_39;
  v7 = &StringLiteral_21980/*"isRevival"*/;
LABEL_38:
  v4 = (System_String_o *)*v7;
LABEL_39:
  if ( !System_String__IsNullOrEmpty(this->fields.debugComment, 0) )
  {
    if ( !System_String__IsNullOrEmpty(v4, 0) )
      v4 = System_String__Concat_75651716(v4, (System_String_o *)StringLiteral_870/*", "*/, 0);
    return System_String__Concat_75651716(v4, this->fields.debugComment, 0);
  }
  return v4;
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
  __int64 v2; // x2
  int32_t branchType; // w9
  bool v5; // w8
  int32_t svtId; // w19
  bool IsCollection; // w0
  NetworkManager_c *v9; // x0
  int32_t questPhase; // w19
  int32_t questId; // w21
  int64_t userIdNumber; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  System_Collections_Generic_IList_int__o *routeIds; // x21
  CondType_c *v18; // x0
  int32_t checkType; // w19
  int32_t count; // w22
  ScriptManager_c *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x20
  System_Collections_Generic_IList_int__o *v24; // x21
  CondType_c *v25; // x0
  int32_t v26; // w19
  int32_t v27; // w22

  if ( (byte_596DCCE & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DCCE = 1;
  }
  branchType = this->fields.branchType;
  v5 = 0;
  if ( branchType <= 3 )
  {
    if ( branchType > 1 )
    {
LABEL_19:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v9 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
        v9 = NetworkManager_TypeInfo;
      }
      questId = this->fields.questId;
      questPhase = this->fields.questPhase;
      userIdNumber = v9->static_fields->userIdNumber;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
      return CondType__IsQuestPhaseClear(userIdNumber, questId, questPhase, -1, 0, 0);
    }
    if ( branchType == -1 )
    {
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
      if ( !byte_596DC8E )
      {
        sub_2213A60(&ScriptManager_TypeInfo);
        byte_596DC8E = 1;
      }
      v21 = ScriptManager_TypeInfo;
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
        v21 = ScriptManager_TypeInfo;
      }
      return v21->static_fields->scriptGenderSettingIndex == 1;
    }
    if ( branchType )
    {
      if ( branchType != 1 )
        return v5;
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
      IsCollection = ScriptManager__GetIsCollection(0);
      return !IsCollection;
    }
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
    return ScriptManager__GetIsCollection(0);
  }
  else
  {
    if ( branchType <= 6 )
    {
      if ( (unsigned int)(branchType - 5) < 2 )
      {
        svtId = this->fields.svtId;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
        return CondType__IsOpen(8, svtId, 0, 0, 0, 0);
      }
      if ( branchType == 4 )
      {
        if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
        return ScriptManager__GetIsRevival(0);
      }
      return v5;
    }
    if ( branchType != 7 )
    {
      if ( branchType != 8 )
      {
        if ( branchType != 11 )
          return v5;
        goto LABEL_19;
      }
      v13 = sub_2213B20(int___TypeInfo, 1);
      if ( v13 )
      {
        v16 = v13;
        if ( *(_DWORD *)(v13 + 24) )
        {
          routeIds = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
          v18 = CondType_TypeInfo;
          *(_DWORD *)(v16 + 32) = this->fields.questId;
          count = this->fields.count;
          checkType = this->fields.checkType;
          if ( !*(&v18->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v18, v14, v15);
          IsCollection = CondType__IsRouteSelect_47351928(
                           (System_Collections_Generic_IList_int__o *)v16,
                           routeIds,
                           count,
                           checkType,
                           0,
                           0);
          return !IsCollection;
        }
LABEL_55:
        sub_2213CE4(v13);
      }
LABEL_54:
      sub_2213CDC(v13, v14);
    }
    v13 = sub_2213B20(int___TypeInfo, 1);
    if ( !v13 )
      goto LABEL_54;
    v23 = v13;
    if ( !*(_DWORD *)(v13 + 24) )
      goto LABEL_55;
    v24 = (System_Collections_Generic_IList_int__o *)this->fields.routeIds;
    v25 = CondType_TypeInfo;
    *(_DWORD *)(v23 + 32) = this->fields.questId;
    v27 = this->fields.count;
    v26 = this->fields.checkType;
    if ( !*(&v25->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v25, v14, v22);
    return CondType__IsRouteSelect_47351928((System_Collections_Generic_IList_int__o *)v23, v24, v27, v26, 0, 0);
  }
}


bool ScriptBranchListViewItem__get_IsMasterFlag(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.branchType == -1;
}


System_String_o *ScriptBranchListViewItem__get_TitleText(ScriptBranchListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.title;
}


void ScriptBranchListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596DCD0 & 1) == 0 )
  {
    sub_2213A60(&ScriptBranchListViewItem___c_TypeInfo);
    byte_596DCD0 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ScriptBranchListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptBranchListViewItem___c_TypeInfo->static_fields->__9 = (struct ScriptBranchListViewItem___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ScriptBranchListViewItem___c_TypeInfo->static_fields,
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
  if ( (byte_596DCD1 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596DCD1 = 1;
  }
  if ( !c )
    goto LABEL_15;
  userId = c->fields.userId;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, c, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, c, method);
    this = (ScriptBranchListViewItem___c__DisplayClass19_0_o *)NetworkManager_TypeInfo;
  }
  if ( userId != this[5].fields.__4__this->fields.sortValue1B )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
LABEL_15:
    sub_2213CDC(this, c);
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
  if ( (byte_596DCD2 & 1) == 0 )
  {
    this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596DCD2 = 1;
  }
  if ( !c )
    goto LABEL_17;
  userId = c->fields.userId;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, c, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  this = (ScriptBranchListViewItem___c__DisplayClass20_0_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, c, method);
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
    sub_2213CDC(this, c);
  i = v4->fields.i;
  if ( (unsigned int)i >= LODWORD(routeIds->max_length) )
    sub_2213CE4(this);
  return c->fields.routeId == routeIds->m_Items[i];
}