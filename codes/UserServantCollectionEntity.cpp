void UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593966D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593966D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


void UserServantCollectionEntity___ctor_50083012(
        UserServantCollectionEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Int32_array *tdPlayed; // x1
  struct System_Int32_array *costumeIds; // x1
  MissionNaviTransitionBoardItem_o *p_costumeIds; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_593966E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593966E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_21FFECC(v5, v6);
  this->fields.userId = e->fields.userId;
  this->fields.svtId = e->fields.svtId;
  *(_OWORD *)&this->fields.status = *(_OWORD *)&e->fields.status;
  *(_OWORD *)&this->fields.maxAdjustHp = *(_OWORD *)&e->fields.maxAdjustHp;
  *(_OWORD *)&this->fields.skillLv2 = *(_OWORD *)&e->fields.skillLv2;
  this->fields.flag = e->fields.flag;
  this->fields.friendship = e->fields.friendship;
  this->fields.friendshipRank = e->fields.friendshipRank;
  tdPlayed = e->fields.tdPlayed;
  *(_OWORD *)&this->fields.voicePlayed = *(_OWORD *)&e->fields.voicePlayed;
  this->fields.tdPlayed = tdPlayed;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tdPlayed, (int32_t)tdPlayed, v7, v8, v9, v10, v11, v12);
  costumeIds = e->fields.costumeIds;
  this->fields.costumeIds = costumeIds;
  p_costumeIds = (MissionNaviTransitionBoardItem_o *)&this->fields.costumeIds;
  sub_21FFBF4(p_costumeIds, (int32_t)costumeIds, v16, v17, v18, v19, v20, v21);
  p_costumeIds->monitor = (void *)e->fields.createdAt;
}


void UserServantCollectionEntity___ctor_50083220(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v8; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // kr00_16
  __int128 v10; // q0

  if ( (byte_593966F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593966F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.userId = userId;
  if ( !*(&v8->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v8, v7);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  *(_QWORD *)&v10 = 0x100000001LL;
  *((_QWORD *)&v10 + 1) = 0x100000001LL;
  this->fields.svtId = v9;
  this->fields.status = 0;
  this->fields.svtCommonFlag = 0;
  *(_OWORD *)&this->fields.skillLv1 = v10;
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
}


bool UserServantCollectionEntity__CheckSvtCommonFlag(int32_t svtCommonFlag, int32_t flagKind, const MethodInfo *method)
{
  return (flagKind & svtCommonFlag) != 0;
}


System_String_o *UserServantCollectionEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_593966C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_593966C = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserServantCollectionEntity__CreatePrimaryKey(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int64_t userId; // x20
  __int64 v4; // x21
  __int64 v5; // x19
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_593966B & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593966B = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v9, 0);
  return UserServantCollectionEntity__CreatePK(userId, v6, v7);
}


void UserServantCollectionEntity__GetAppendPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x26
  __int64 v16; // x27
  ServantAppendPassiveSkillMaster_o *v17; // x25
  __int64 v18; // x0
  __int64 v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_593968A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593968A = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, idList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v20, 0);
  if ( !v17 )
    sub_21FFECC(v18, v19);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v17,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v18,
    this->fields.userId,
    0,
    0);
}


System_Int32_array *UserServantCollectionEntity__GetCommandCardParam(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)UserServantCollectionEntity__GetUserCommandCardEntity(this, method);
  if ( result )
    return *(System_Int32_array **)&result->m_Items[12];
  return result;
}


System_Int32_array *UserServantCollectionEntity__GetCostumeList(
        UserServantCollectionEntity_o *this,
        int32_t overrideSvtId,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  il2cpp_array_size_t max_length; // x24
  void *Instance; // x0
  Il2CppObject *v8; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x21
  __int64 v12; // x23
  unsigned __int64 v13; // x23
  struct System_Int32_array *v14; // x8
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__58_0; // x20
  Il2CppObject *v27; // x21
  struct UserServantCollectionEntity___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x21
  __int64 v36; // x20
  unsigned __int64 v37; // x22
  unsigned __int64 v38; // x9
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_5939682 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserServantCollectionEntity___c__GetCostumeList_b__58_0__);
    sub_21FFC50(&UserServantCollectionEntity___c_TypeInfo);
    byte_5939682 = 1;
  }
  costumeIds = this->fields.costumeIds;
  entity = 0;
  if ( !costumeIds )
    return 0;
  max_length = costumeIds->max_length;
  if ( !(_DWORD)max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( overrideSvtId <= 0 )
  {
    v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    *(_QWORD *)&v41.fields.currentCryptoKey = v11;
    *(_QWORD *)&v41.fields.fakeValue = v12;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v41, 0);
    overrideSvtId = (int)Instance;
  }
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = this->fields.costumeIds;
      if ( !v14 )
        break;
      if ( v13 >= LODWORD(v14->max_length) )
LABEL_40:
        sub_21FFED4(Instance);
      if ( !MasterData_object )
        break;
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           overrideSvtId,
                           v14->m_Items[v13],
                           0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v8 = (Il2CppObject *)entity;
        v22 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v8,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v8;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v8, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( (unsigned int)max_length == ++v13 )
        goto LABEL_23;
    }
LABEL_39:
    sub_21FFECC(Instance, v8);
  }
LABEL_23:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !*(&UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo, v8);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  static_fields = (struct UserServantCollectionEntity___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__58_0 = (System_Comparison_T__o *)static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v8);
      static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(_9__58_0, v27, Method_UserServantCollectionEntity___c__GetCostumeList_b__58_0__, 0);
    v28 = UserServantCollectionEntity___c_TypeInfo->static_fields;
    v28->__9__58_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__58_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__58_0, (int32_t)_9__58_0, v29, v30, v31, v32, v33, v34);
  }
  if ( !v10 )
    goto LABEL_39;
  System_Collections_Generic_List_object___Sort_71636404(
    v10,
    _9__58_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v35 = (unsigned int)v10->fields._size;
  v36 = sub_21FFD10(int___TypeInfo, (unsigned int)v35);
  if ( (int)v35 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v10,
                   v37,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v36 )
        goto LABEL_39;
      if ( v37 >= *(unsigned int *)(v36 + 24) )
        goto LABEL_40;
      v38 = v36 + 4 * v37++;
      *(_DWORD *)(v38 + 32) = *((_DWORD *)Instance + 5);
      if ( v35 == v37 )
        return (System_Int32_array *)v36;
    }
  }
  return (System_Int32_array *)v36;
}


System_Int32_array *UserServantCollectionEntity__GetCostumeList_50091992(
        UserServantCollectionEntity_o *this,
        int32_t svtId,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  il2cpp_array_size_t max_length; // x26
  void *Instance; // x0
  Il2CppObject *v12; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v14; // x25
  System_Collections_Generic_List_object__o *v15; // x19
  unsigned __int64 v16; // x27
  __int64 v17; // x29
  struct System_Int32_array *v18; // x8
  int32_t v19; // w26
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__59_0; // x20
  Il2CppObject *v32; // x21
  struct UserServantCollectionEntity___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x21
  __int64 v41; // x20
  unsigned __int64 v42; // x22
  unsigned __int64 v43; // x9
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5939683 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserServantCollectionEntity___c__GetCostumeList_b__59_0__);
    sub_21FFC50(&UserServantCollectionEntity___c_TypeInfo);
    byte_5939683 = 1;
  }
  costumeIds = this->fields.costumeIds;
  entity = 0;
  if ( !costumeIds )
    return 0;
  max_length = costumeIds->max_length;
  if ( !(_DWORD)max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v14 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    v17 = (unsigned int)max_length;
    while ( 1 )
    {
      v18 = this->fields.costumeIds;
      if ( !v18 )
        break;
      if ( v16 >= LODWORD(v18->max_length) )
LABEL_38:
        sub_21FFED4(Instance);
      if ( !MasterData_object )
        break;
      v19 = v18->m_Items[v16];
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           svtId,
                           v19,
                           0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v14 )
          break;
        Instance = (void *)ServantCostumeReleaseMaster__isEnableMountCostume(
                             (ServantCostumeReleaseMaster_o *)v14,
                             svtId,
                             v19,
                             lv,
                             limitCount,
                             0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v12 = (Il2CppObject *)entity;
          v27 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              v12,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v12;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v12, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      if ( v17 == ++v16 )
        goto LABEL_21;
    }
LABEL_37:
    sub_21FFECC(Instance, v12);
  }
LABEL_21:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !*(&UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo, v12);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  static_fields = (struct UserServantCollectionEntity___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__59_0 = (System_Comparison_T__o *)static_fields->__9__59_0;
  if ( !_9__59_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v12);
      static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__59_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(_9__59_0, v32, Method_UserServantCollectionEntity___c__GetCostumeList_b__59_0__, 0);
    v33 = UserServantCollectionEntity___c_TypeInfo->static_fields;
    v33->__9__59_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__59_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->__9__59_0, (int32_t)_9__59_0, v34, v35, v36, v37, v38, v39);
  }
  if ( !v15 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_71636404(
    v15,
    _9__59_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v40 = (unsigned int)v15->fields._size;
  v41 = sub_21FFD10(int___TypeInfo, (unsigned int)v40);
  if ( (int)v40 >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v15,
                   v42,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v41 )
        goto LABEL_37;
      if ( v42 >= *(unsigned int *)(v41 + 24) )
        goto LABEL_38;
      v43 = v41 + 4 * v42++;
      *(_DWORD *)(v43 + 32) = *((_DWORD *)Instance + 5);
      if ( v40 == v42 )
        return (System_Int32_array *)v41;
    }
  }
  return (System_Int32_array *)v41;
}


int32_t UserServantCollectionEntity__GetLimitCountStage(
        UserServantCollectionEntity_o *this,
        bool hasRewardStage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w20
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  Il2CppObject *Entity; // x0
  __int64 v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_593968D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593968D = 1;
  }
  v6 = LimitCountUtility__ConvertLimitCountToStage(this->fields.maxLimitCount, hasRewardStage, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0);
  if ( !v11
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v11,
                   (int32_t)Entity,
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Entity, v13);
  }
  return ServantEntity__GetDispLimitCountFromUserServantCollection((ServantEntity_o *)Entity, v6, 0);
}


System_Int32_array *UserServantCollectionEntity__GetLimitCountStageList(
        UserServantCollectionEntity_o *this,
        int32_t svtId,
        bool hasRewardStage,
        const MethodInfo *method)
{
  int32_t v7; // w22
  const MethodInfo *v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *CostumeList; // x20
  System_Collections_Generic_IEnumerable_int__o *LimitCountStageList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_593968E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&int___TypeInfo);
    byte_593968E = 1;
  }
  v7 = LimitCountUtility__ConvertLimitCountToStage(this->fields.maxLimitCount, hasRewardStage, 0);
  CostumeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantCollectionEntity__GetCostumeList(
                                                                       this,
                                                                       svtId,
                                                                       v8);
  if ( !CostumeList )
    CostumeList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_21FFD10(int___TypeInfo, 0);
  LimitCountStageList = LimitCountUtility__GetLimitCountStageList(v7, hasRewardStage, 0);
  v11 = System_Linq_Enumerable__Concat_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)LimitCountStageList,
          CostumeList,
          (const MethodInfo_3842AD4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v11,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *UserServantCollectionEntity__GetLimitCountStageList_50097308(
        UserServantCollectionEntity_o *this,
        int32_t svtId,
        int32_t lv,
        int32_t limitCount,
        bool hasRewardStage,
        const MethodInfo *method)
{
  int32_t v11; // w24
  const MethodInfo *v12; // x4
  System_Collections_Generic_IEnumerable_TSource__o *CostumeList_50091992; // x20
  System_Collections_Generic_IEnumerable_int__o *LimitCountStageList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_593968F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&int___TypeInfo);
    byte_593968F = 1;
  }
  v11 = LimitCountUtility__ConvertLimitCountToStage(limitCount, hasRewardStage, 0);
  CostumeList_50091992 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantCollectionEntity__GetCostumeList_50091992(
                                                                                this,
                                                                                svtId,
                                                                                lv,
                                                                                limitCount,
                                                                                v12);
  if ( !CostumeList_50091992 )
    CostumeList_50091992 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_21FFD10(int___TypeInfo, 0);
  LimitCountStageList = LimitCountUtility__GetLimitCountStageList(v11, hasRewardStage, 0);
  v15 = System_Linq_Enumerable__Concat_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)LimitCountStageList,
          CostumeList_50091992,
          (const MethodInfo_3842AD4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v15,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


ServantOverwriteStatus_o *UserServantCollectionEntity__GetOverwriteStatus(
        UserServantCollectionEntity_o *this,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o *overwriteStatusMap; // x0
  struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o **p_overwriteStatusMap; // x21
  System_Collections_Generic_Dictionary_int__object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  ServantOverwriteStatus_o *v15; // x22

  if ( (byte_593968B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__TypeInfo);
    sub_21FFC50(&ServantOverwriteStatus_TypeInfo);
    byte_593968B = 1;
  }
  p_overwriteStatusMap = &this->fields.overwriteStatusMap;
  overwriteStatusMap = this->fields.overwriteStatusMap;
  if ( !overwriteStatusMap )
  {
    v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v7,
      (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus___ctor__);
    *p_overwriteStatusMap = (struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o *)v7;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteStatusMap,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    overwriteStatusMap = *p_overwriteStatusMap;
    if ( !*p_overwriteStatusMap )
      goto LABEL_10;
  }
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)overwriteStatusMap,
          selectedLimitCount,
          (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__ContainsKey__) )
  {
    v15 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_40387584(v15, this, selectedLimitCount, 0);
    overwriteStatusMap = this->fields.overwriteStatusMap;
    if ( !overwriteStatusMap )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)overwriteStatusMap,
      selectedLimitCount,
      (Il2CppObject *)v15,
      (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__set_Item__);
  }
  overwriteStatusMap = *p_overwriteStatusMap;
  if ( !*p_overwriteStatusMap )
LABEL_10:
    sub_21FFECC(overwriteStatusMap, v14);
  return (ServantOverwriteStatus_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                       (System_Collections_Generic_Dictionary_int__object__o *)overwriteStatusMap,
                                       selectedLimitCount,
                                       (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__get_Item__);
}


void UserServantCollectionEntity__GetPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispSvtId,
        int32_t dispLimitCount,
        bool isOwner,
        bool useDatabaseGrandStatus,
        const MethodInfo *method)
{
  int32_t friendshipRank; // w27
  int32_t maxLimitCount; // w22
  const MethodInfo *v17; // x1
  bool IsGrandServant; // w28
  long double v19; // q0
  __int64 v20; // x8
  __int64 v21; // x0
  void *MasterData_object; // x0
  __int64 v23; // x1
  bool v24; // w24
  BalanceConfig_c *v25; // x0
  System_Int32_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_array *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  Il2CppObject *v47; // x19
  Il2CppObject *v48; // x26
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int v55; // w8
  int v56; // w25
  __int64 v57; // x8
  int32_t v58; // w27
  NetworkManager_c *v59; // x0
  int64_t userIdNumber; // x22
  __int64 v61; // x23
  __int64 v62; // x28
  int32_t v63; // w4
  const MethodInfo *v64; // x5
  int32_t v65; // w2
  __int64 v66; // x22
  __int64 v67; // x8
  unsigned __int64 v68; // x23
  System_Int32_array *v69; // x8
  int max_length; // w9
  unsigned int v71; // w28
  char *v72; // x11
  _DWORD *v73; // x11
  int v74; // t1
  System_String_array *v75; // x8
  System_String_array *v76; // x9
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  int *v89; // [xsp+40h] [xbp-90h]
  UserEventServantPointMaster_o *Master_object; // [xsp+50h] [xbp-80h]
  UserEventServantPointEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_593967A & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    byte_593967A = 1;
  }
  entity = 0;
  if ( isOwner )
    friendshipRank = BasicHelper__DecryptValue_51086944(this->fields.friendshipRank, 0);
  else
    friendshipRank = 0;
  if ( dispLimitCount < 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, idList);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0);
  }
  IsGrandServant = UserServantCollectionEntity__IsGrandServant(this, (const MethodInfo *)idList);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
    v20 = sub_2237AF8(v19);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_WORD *)(v21 + 309) & 1) == 0 )
    v21 = sub_2237AF8(v19);
  MasterData_object = **(void ***)(v21 + 184);
  if ( !MasterData_object )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_object )
    goto LABEL_72;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    (ServantPassiveSkillMaster_o *)MasterData_object,
    idList,
    titleList,
    explanationList,
    dispSvtId,
    this->fields.userId,
    this->fields.maxLv,
    this->fields.maxLimitCount,
    dispLimitCount,
    friendshipRank,
    -1,
    isOwner,
    0,
    useDatabaseGrandStatus && IsGrandServant,
    0);
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_object )
    goto LABEL_72;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        dispSvtId,
                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !MasterData_object )
    goto LABEL_72;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)MasterData_object, 0) )
    return;
  v24 = *idList == 0;
  if ( !*idList )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23);
      v25 = BalanceConfig_TypeInfo;
    }
    v26 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, (unsigned int)v25->static_fields->SvtPassiveSkillListMax);
    *idList = v26;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v26, v27, v28, v29, v30, v31, v32);
    v33 = (System_String_array *)sub_21FFD10(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v33;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = (System_String_array *)sub_21FFD10(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v40;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v40, v41, v42, v43, v44, v45, v46);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
  Master_object = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v47 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v48 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  MasterData_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !MasterData_object
    || (MasterData_object = EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 12, 0, 0, 0)) == 0 )
  {
LABEL_72:
    sub_21FFECC(MasterData_object, v17);
  }
  v55 = *((_DWORD *)MasterData_object + 6);
  if ( v55 >= 1 )
  {
    v56 = 0;
    v89 = (int *)MasterData_object;
    while ( 1 )
    {
      if ( v56 >= (unsigned int)v55 )
        goto LABEL_71;
      v57 = *((_QWORD *)MasterData_object + v56 + 4);
      if ( !v57 )
        goto LABEL_72;
      v58 = *(_DWORD *)(v57 + 16);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      v59 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
        v59 = NetworkManager_TypeInfo;
      }
      userIdNumber = v59->static_fields->userIdNumber;
      v62 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
      *(_QWORD *)&v94.fields.currentCryptoKey = v62;
      *(_QWORD *)&v94.fields.fakeValue = v61;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v94, 0);
      MasterData_object = Master_object;
      if ( !Master_object )
        goto LABEL_72;
      MasterData_object = (void *)UserEventServantPointMaster__TryGetEntity(
                                    Master_object,
                                    &entity,
                                    userIdNumber,
                                    v58,
                                    v63,
                                    v64);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        MasterData_object = entity;
        if ( !entity )
          goto LABEL_72;
        MasterData_object = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, v17);
        v65 = (int)MasterData_object;
      }
      else
      {
        v65 = 0;
      }
      if ( !v47 )
        goto LABEL_72;
      MasterData_object = EventServantPointRankMaster__GetEnableEntity(
                            (EventServantPointRankMaster_o *)v47,
                            v58,
                            v65,
                            dispSvtId,
                            0);
      if ( MasterData_object )
      {
        v66 = *((_QWORD *)MasterData_object + 4);
        if ( !v66 )
          goto LABEL_72;
        v67 = *(_QWORD *)(v66 + 24);
        if ( (int)v67 >= 1 )
          break;
      }
LABEL_67:
      MasterData_object = v89;
      ++v56;
      v55 = v89[6];
      if ( v56 >= v55 )
        goto LABEL_68;
    }
    v68 = 0;
    while ( v68 < (unsigned int)v67 )
    {
      v69 = *idList;
      if ( !*idList )
        goto LABEL_72;
      max_length = v69->max_length;
      if ( max_length >= 1 )
      {
        v71 = 0;
        v17 = (const MethodInfo *)*(unsigned int *)(v66 + 4 * v68 + 32);
        while ( 1 )
        {
          if ( max_length == v71 )
            goto LABEL_71;
          v72 = (char *)v69 + 4 * (int)v71;
          v74 = *((_DWORD *)v72 + 8);
          v73 = v72 + 32;
          if ( !v74 )
            break;
          if ( (max_length & ~(max_length >> 31)) == ++v71 )
            goto LABEL_66;
        }
        *v73 = (_DWORD)v17;
        if ( !v48 )
          goto LABEL_72;
        MasterData_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v48,
                              (int32_t)v17,
                              (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v75 = *titleList;
        if ( !*titleList )
          goto LABEL_72;
        v76 = *explanationList;
        if ( !*explanationList || !MasterData_object )
          goto LABEL_72;
        if ( v71 >= LODWORD(v75->max_length) || v71 >= LODWORD(v76->max_length) )
          break;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)MasterData_object,
          &v75->m_Items[v71],
          &v76->m_Items[v71],
          0,
          0);
        v24 = 0;
      }
LABEL_66:
      LODWORD(v67) = *(_DWORD *)(v66 + 24);
      if ( (__int64)++v68 >= (int)v67 )
        goto LABEL_67;
    }
LABEL_71:
    sub_21FFED4(MasterData_object);
  }
LABEL_68:
  if ( v24 )
  {
    *idList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)idList, 0, v49, v50, v51, v52, v53, v54);
    *titleList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)titleList, 0, v77, v78, v79, v80, v81, v82);
    *explanationList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)explanationList, 0, v83, v84, v85, v86, v87, v88);
  }
}


System_Collections_Generic_List_int__o *UserServantCollectionEntity__GetSkillChangeCostumeList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_T__o *EntryListFromCondType; // x20
  System_Collections_Generic_List_int__o *v6; // x21
  struct System_Int32_array *costumeIds; // x24
  unsigned __int64 v8; // x25
  __int64 v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  System_Func_ServantSkillReleaseEntity__bool__c *v17; // x0
  System_Func_object__bool__o *v18; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_5939689 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_ServantSkillReleaseEntity___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_21FFC50(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserServantCollectionEntity___c__DisplayClass75_0__GetSkillChangeCostumeList_b__0__);
    sub_21FFC50(&UserServantCollectionEntity___c__DisplayClass75_0_TypeInfo);
    byte_5939689 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_18;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    (ServantSkillReleaseMaster_o *)Instance,
                                                                    70,
                                                                    0);
  v6 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_18;
  if ( SLODWORD(costumeIds->max_length) >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_21FFEBC(UserServantCollectionEntity___c__DisplayClass75_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0);
      if ( !v9 )
        break;
      *(_QWORD *)(v9 + 24) = this;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
      if ( v8 >= LODWORD(costumeIds->max_length) )
        sub_21FFED4(v16);
      v17 = System_Func_ServantSkillReleaseEntity__bool__TypeInfo;
      *(_DWORD *)(v9 + 16) = costumeIds->m_Items[v8];
      v18 = (System_Func_object__bool__o *)sub_21FFEBC(v17);
      System_Func_object__bool____ctor(
        v18,
        (Il2CppObject *)v9,
        Method_UserServantCollectionEntity___c__DisplayClass75_0__GetSkillChangeCostumeList_b__0__,
        0);
      Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                   EntryListFromCondType,
                                   (System_Func_T__bool__o *)v18,
                                   (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ServantSkillReleaseEntity___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v4 = *(unsigned int *)(v9 + 16);
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v4,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = v4;
        }
      }
      if ( (__int64)++v8 >= SLODWORD(costumeIds->max_length) )
        return v6;
    }
LABEL_18:
    sub_21FFECC(Instance, v4);
  }
  return v6;
}


void UserServantCollectionEntity__GetSkillInfo(
        UserServantCollectionEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x1
  __int64 v13; // x25
  __int64 v14; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x24
  Il2CppObject *Entity; // x25
  long double v17; // q0
  __int64 v18; // x8
  __int64 v19; // x0
  ServantSkillMaster_o *v20; // x24
  bool IsServantEquip; // w25
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  System_Int32_array *SkillLevelList; // x26
  int32_t maxLimitCount; // w23
  BalanceConfig_c *v26; // x0
  BalanceConfig_c *v27; // x0
  SkillInfo_array *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  unsigned __int64 v35; // x28
  __int64 v36; // x21
  __int64 i; // x20
  SkillInfo_o *v38; // x27
  unsigned __int64 v39; // x23
  ServantSkillEntity_o *v40; // x29
  int32_t v41; // w4
  int32_t skillNum; // w8
  unsigned int *v43; // x29
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_5939678 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SkillInfo___TypeInfo);
    sub_21FFC50(&SkillInfo_TypeInfo);
    byte_5939678 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v56.fields.currentCryptoKey = v13;
  *(_QWORD *)&v56.fields.fakeValue = v14;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v56, 0);
  if ( !v15 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v15,
             Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
    v18 = sub_2237AF8(v17);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_2237AF8(v17);
  Instance = **(_QWORD **)(v19 + 184);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_42;
  v20 = (ServantSkillMaster_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v22);
  if ( dispLimitCount < 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v23);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0);
  }
  if ( skillListNum <= 0 )
  {
    v26 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23);
      v26 = BalanceConfig_TypeInfo;
    }
    skillListNum = v26->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v27 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23);
      v27 = BalanceConfig_TypeInfo;
    }
    skillListNum = v27->static_fields->SvtEquipSkillListMax;
  }
  v28 = (SkillInfo_array *)sub_21FFD10(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v28;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v28, v29, v30, v31, v32, v33, v34);
  if ( skillListNum >= 1 )
  {
    v35 = 0;
    v36 = (unsigned int)skillListNum;
    for ( i = 8; ; i += 2 )
    {
      v38 = (SkillInfo_o *)sub_21FFEBC(SkillInfo_TypeInfo);
      SkillInfo___ctor(v38, 0);
      if ( !v20 )
        break;
      v39 = v35 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v20,
                            dispSvtId,
                            (int)v35 + 1,
                            this->fields.userId,
                            this->fields.maxLv,
                            this->fields.maxLimitCount,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            -1,
                            0,
                            0);
      if ( Instance )
      {
        if ( !v38 )
          break;
        v40 = (ServantSkillEntity_o *)Instance;
        v38->fields.id = *(_DWORD *)(Instance + 28);
        if ( !SkillLevelList )
          break;
        if ( v35 >= LODWORD(SkillLevelList->max_length) )
          goto LABEL_43;
        v41 = SkillLevelList->m_Items[v35];
        v38->fields.lv = v41;
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v38->fields.charge,
          &v38->fields.title,
          &v38->fields.explanation,
          v41,
          IsServantEquip,
          0);
        Instance = ServantSkillEntity__GetStrengthStatus(v40, -1, 0);
        skillNum = v40->fields.skillNum;
        v38->fields.strengthStatus = Instance;
        v38->fields.skillRecord = skillNum;
        v38->fields.isUse = 1;
      }
      else
      {
        if ( !v38 )
          break;
        v38->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v20, dispSvtId, v39, 0);
          if ( Instance )
          {
            v38->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v38->fields.title,
              &v38->fields.explanation,
              0);
          }
        }
      }
      v43 = (unsigned int *)*skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_21FFDA4(v38, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
      if ( !Instance )
      {
        v51 = sub_21FFEF0(0, v44);
        sub_21FFD90(v51, 0);
      }
      if ( v35 >= v43[6] )
LABEL_43:
        sub_21FFED4(Instance);
      *(_QWORD *)&v43[i] = v38;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43[i], (int32_t)v38, v45, v46, v47, v48, v49, v50);
      ++v35;
      if ( v36 == v39 )
        return;
    }
LABEL_42:
    sub_21FFECC(Instance, v10);
  }
}


void UserServantCollectionEntity__GetTransformedPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t svtId,
        int32_t dispLimitCount,
        bool isOwner,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+0h] [xbp-20h]

  UserServantCollectionEntity__GetPassiveSkillInfo(
    this,
    idList,
    titleList,
    explanationList,
    svtId,
    dispLimitCount,
    isOwner,
    1,
    v8);
}


bool UserServantCollectionEntity__GetTreasureDeviceInfo(
        UserServantCollectionEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x24
  __int64 v20; // x25
  __int64 v21; // x1
  int32_t v22; // w24
  int32_t v23; // w0
  ServantTreasureDvcMaster_o *Master_object; // x0
  __int64 v25; // x1
  TreasureDvcInfo_o *v26; // x21
  int32_t treasureDeviceLv1; // w9
  TreasureDvcInfo_o *v28; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_593967C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&TreasureDvcInfo_TypeInfo);
    byte_593967C = 1;
  }
  v11 = (TreasureDvcInfo_o *)sub_21FFEBC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v11, 0);
  *tdInfo = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)tdInfo, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v19 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v30.fields.currentCryptoKey = v19;
  *(_QWORD *)&v30.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v30, 0);
  if ( dispLimitCount < 0 )
  {
    v23 = LimitCountUtility__ConvertLimitCountToStage(this->fields.maxLimitCount, 0, 0);
    dispLimitCount = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(v23, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Master_object = (ServantTreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (ServantTreasureDvcMaster_o *)ServantTreasureDvcMaster__getUseEntity(
                                                  Master_object,
                                                  dispSvtId,
                                                  this->fields.userId,
                                                  this->fields.maxLv,
                                                  this->fields.maxLimitCount,
                                                  dispLimitCount,
                                                  v22,
                                                  beforeClearQuestId,
                                                  0);
  if ( Master_object )
  {
    v26 = *tdInfo;
    if ( *tdInfo )
    {
      treasureDeviceLv1 = this->fields.treasureDeviceLv1;
      v26->fields.id = Master_object->fields.revision;
      v26->fields.lv = treasureDeviceLv1;
      Master_object = (ServantTreasureDvcMaster_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                                      (ServantTreasureDvcEntity_o *)Master_object,
                                                      &v26->fields.name,
                                                      &v26->fields.explanation,
                                                      &v26->fields.maxLv,
                                                      &v26->fields.guageCount,
                                                      &v26->fields.cardId,
                                                      &v26->fields.strengthStatus,
                                                      &v26->fields.treasureDeviceNum,
                                                      treasureDeviceLv1,
                                                      0);
      v28 = *tdInfo;
      v26->fields.isUse = (unsigned __int8)Master_object & 1;
      if ( v28 )
      {
        LOBYTE(Master_object) = v28->fields.isUse;
        return (char)Master_object;
      }
    }
LABEL_15:
    sub_21FFECC(Master_object, v25);
  }
  return (char)Master_object;
}


UserServantCommandCardEntity_o *UserServantCollectionEntity__GetUserCommandCardEntity(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  DataManager_o *v6; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x1
  int64_t userId; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  UserServantCommandCardMaster_o *v12; // x19
  const MethodInfo *v13; // x4
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_5939686 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5939686 = 1;
  }
  entity = 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_2237AF8(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_2237AF8(v2);
  v6 = **(DataManager_o ***)(v5 + 184);
  if ( !v6 )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        v6,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserServantCommandCardMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v6 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0);
  if ( !v12 )
LABEL_12:
    sub_21FFECC(v6, method);
  UserServantCommandCardMaster__TryGetEntity(v12, &entity, userId, (int)v6, v13);
  return entity;
}


bool UserServantCollectionEntity__HasFlag(UserServantCollectionEntity_o *this, int32_t type, const MethodInfo *method)
{
  return (this->fields.flag & type) != 0;
}


bool UserServantCollectionEntity__IsCollectionState6Servant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantCollectionEntity__IsMaterialLostCollectionType(this, 6, v2);
}


bool UserServantCollectionEntity__IsCostumeGet(
        UserServantCollectionEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  int max_length; // w9
  bool v5; // vf
  int v6; // w9
  int32_t *m_Items; // x8
  int v8; // t1
  bool result; // w0

  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  max_length = costumeIds->max_length;
  v5 = __OFSUB__(max_length, 1);
  v6 = max_length - 1;
  if ( v6 < 0 != v5 )
    return 0;
  m_Items = costumeIds->m_Items;
  do
  {
    v8 = *m_Items++;
    result = v8 == costumeId;
    if ( v8 == costumeId )
      break;
  }
  while ( v6-- );
  return result;
}


bool UserServantCollectionEntity__IsDataLostStateServant(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantCollectionEntity__IsMaterialLostCollectionType(this, 1, v2);
}


bool UserServantCollectionEntity__IsFinded(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.status != 0;
}


bool UserServantCollectionEntity__IsGet(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.status == 2;
}


bool UserServantCollectionEntity__IsGrandServant(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_ICollection_o *Entitys; // x20
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  System_Func_object__bool__o *v8; // x21

  if ( (byte_593968C & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_UserServantGrandEntity___);
    sub_21FFC50(&System_Func_UserServantGrandEntity__bool__TypeInfo);
    sub_21FFC50(&Method_UserServantCollectionEntity__IsGrandServant_b__78_0__);
    byte_593968C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  Entitys = (System_Collections_ICollection_o *)DataMasterBase_object__object__object___getEntitys(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  (const MethodInfo_3EE13C0 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  if ( BasicHelper__IsNullOrEmpty(Entitys, 0) )
    return 0;
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)Entitys,
         (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
  v8 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_UserServantCollectionEntity__IsGrandServant_b__78_0__,
    0);
  return System_Linq_Enumerable__Any_object__58935448(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_3834898 *)Method_System_Linq_Enumerable_Any_UserServantGrandEntity___);
}


bool UserServantCollectionEntity__IsHideStateServant(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  Il2CppObject *v10; // x19
  long double v11; // q0
  __int64 v13; // x0
  __int64 v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5939687 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939687 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0);
  if ( !v9 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v9,
               (int32_t)Instance,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v10 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0) )
    return 0;
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_2237AF8(v11);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_2237AF8(v11);
  Instance = **(Il2CppObject ***)(v14 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0 )
  {
LABEL_17:
    sub_21FFECC(Instance, v4);
  }
  return ServantCollectionMaster__GetOverrideDisplayType(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v10[13].klass,
           0) == 2;
}


bool UserServantCollectionEntity__IsLimitCountMax(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return UserServantCollectionEntity__getLimitCountMax(this, method) == this->fields.maxLimitCount;
}


bool UserServantCollectionEntity__IsLinkBadStateServant(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantCollectionEntity__IsMaterialLostCollectionType(this, 4, v2);
}


bool UserServantCollectionEntity__IsLinkCloseStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantCollectionEntity__IsMaterialLostCollectionType(this, 5, v2);
}


bool UserServantCollectionEntity__IsLinkLostStateServant(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantCollectionEntity__IsMaterialLostCollectionType(this, 3, v2);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantCollectionEntity__IsMaterialLostCollectionType(
        UserServantCollectionEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  bool result; // w0
  int32_t OverrideDisplayType; // w8
  bool v16; // zf
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_5939688 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939688 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&type);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v18.fields.currentCryptoKey = v8;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
  if ( !v10 )
    goto LABEL_31;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v10,
          &entity,
          (int32_t)v11,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  v11 = entity;
  if ( !entity )
    goto LABEL_31;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantCollectionMaster___);
  if ( !entity || !v11 )
LABEL_31:
    sub_21FFECC(v11, v12);
  OverrideDisplayType = ServantCollectionMaster__GetOverrideDisplayType(
                          (ServantCollectionMaster_o *)v11,
                          (int32_t)entity[13].klass,
                          0);
  result = 0;
  if ( type <= 3 )
  {
    if ( type == 1 )
    {
      return OverrideDisplayType == 1;
    }
    else
    {
      if ( type != 3 )
        return result;
      return OverrideDisplayType == 3;
    }
  }
  else
  {
    switch ( type )
    {
      case 4:
        v16 = OverrideDisplayType == 4;
        break;
      case 5:
        v16 = OverrideDisplayType == 5;
        break;
      case 6:
        v16 = OverrideDisplayType == 6;
        break;
      default:
        return result;
    }
  }
  return v16;
}


bool UserServantCollectionEntity__IsModifySvtCommonFlag(
        UserServantCollectionEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  return this->fields.svtCommonFlag != value;
}


bool UserServantCollectionEntity__IsNew(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x1
  int32_t v14; // w20
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x21
  ServantCommentMaster_o *v21; // x19
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_5939672 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939672 = 1;
  }
  idList = 0;
  priorityList = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->userIdNumber != this->fields.userId )
    return 0;
  status = this->fields.status;
  if ( !status )
    return 0;
  if ( status != 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    *(_QWORD *)&v24.fields.currentCryptoKey = v9;
    *(_QWORD *)&v24.fields.fakeValue = v10;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v24, 0);
    if ( !MasterData_object )
      goto LABEL_31;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)Instance,
                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_31;
    if ( !SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0) )
      return 0;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v25.fields.currentCryptoKey = v11;
  *(_QWORD *)&v25.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v25, 0);
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v13);
  if ( !UserServantCollectionManager__IsNew(v14, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v17 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v21 = (ServantCommentMaster_o *)v17;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
      *(_QWORD *)&v26.fields.currentCryptoKey = v19;
      *(_QWORD *)&v26.fields.fakeValue = v20;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v26, 0);
      if ( v21 )
        return ServantCommentMaster__GetNewList(v21, &idList, &priorityList, (int32_t)Instance, 0);
    }
LABEL_31:
    sub_21FFECC(Instance, v6);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool UserServantCollectionEntity__IsPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  __int64 v7; // x1
  Il2CppObject *Master_object; // x22
  NetworkManager_c *v9; // x0
  __int64 v10; // x20
  __int64 v11; // x24
  int64_t userIdNumber; // x23
  __int64 v13; // x1
  _BOOL8 v14; // x0
  unsigned __int64 voicePlayed; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_5939680 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939680 = 1;
  }
  if ( flagNum <= 63 )
  {
    voicePlayed = this->fields.voicePlayed;
    return (voicePlayed >> flagNum) & 1;
  }
  if ( (unsigned int)flagNum <= 0x7F )
  {
    voicePlayed = this->fields.voicePlayed2;
    return (voicePlayed >> flagNum) & 1;
  }
  p_userServantVoicePlayedEntity = &this->fields.userServantVoicePlayedEntity;
  userServantVoicePlayedEntity = this->fields.userServantVoicePlayedEntity;
  if ( !userServantVoicePlayedEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&flagNum);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
      v9 = NetworkManager_TypeInfo;
    }
    v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    userIdNumber = v9->static_fields->userIdNumber;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    *(_QWORD *)&v17.fields.currentCryptoKey = v11;
    *(_QWORD *)&v17.fields.fakeValue = v10;
    userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                       v17,
                                                                       0);
    if ( !Master_object )
      goto LABEL_24;
    if ( !UserServantVoicePlayedMaster__TryGetEntity(
            (UserServantVoicePlayedMaster_o *)Master_object,
            p_userServantVoicePlayedEntity,
            userIdNumber,
            (int32_t)userServantVoicePlayedEntity,
            0) )
    {
      LOBYTE(v14) = 0;
      return v14;
    }
    userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
    if ( !*p_userServantVoicePlayedEntity )
LABEL_24:
      sub_21FFECC(userServantVoicePlayedEntity, v13);
  }
  LOBYTE(v14) = UserServantVoicePlayedEntity__IsPlayed(userServantVoicePlayedEntity, flagNum, 0);
  return v14;
}


void UserServantCollectionEntity__SetOld(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  __int64 v11; // x19
  __int64 v12; // x20
  __int64 v13; // x1
  int32_t v14; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_5939673 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    byte_5939673 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->userIdNumber == this->fields.userId )
  {
    status = this->fields.status;
    if ( status )
    {
      if ( status == 2 )
        goto LABEL_18;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
      *(_QWORD *)&v15.fields.currentCryptoKey = v9;
      *(_QWORD *)&v15.fields.fakeValue = v10;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0);
      if ( !MasterData_object
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         (int32_t)Instance,
                         (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
      {
LABEL_24:
        sub_21FFECC(Instance, v6);
      }
      if ( SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0) )
      {
LABEL_18:
        v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v16.fields.currentCryptoKey = v12;
        *(_QWORD *)&v16.fields.fakeValue = v11;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0);
        if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v13);
        UserServantCollectionManager__SetOld(v14, 0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool UserServantCollectionEntity__SetPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  __int64 v7; // x1
  Il2CppObject *Master_object; // x22
  NetworkManager_c *v9; // x0
  __int64 v10; // x20
  __int64 v11; // x24
  int64_t userIdNumber; // x23
  __int64 v13; // x1
  int64_t voicePlayed; // x9
  int64_t voicePlayed2; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_5939681 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939681 = 1;
  }
  if ( flagNum <= 63 )
  {
    voicePlayed = this->fields.voicePlayed;
    if ( (voicePlayed & (1LL << flagNum)) != 0 )
      return 0;
    this->fields.voicePlayed = voicePlayed | (1LL << flagNum);
  }
  else
  {
    if ( (unsigned int)flagNum > 0x7F )
    {
      p_userServantVoicePlayedEntity = &this->fields.userServantVoicePlayedEntity;
      userServantVoicePlayedEntity = this->fields.userServantVoicePlayedEntity;
      if ( userServantVoicePlayedEntity )
        return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&flagNum);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      v9 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
        v9 = NetworkManager_TypeInfo;
      }
      v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      userIdNumber = v9->static_fields->userIdNumber;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
      *(_QWORD *)&v17.fields.currentCryptoKey = v11;
      *(_QWORD *)&v17.fields.fakeValue = v10;
      userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                         v17,
                                                                         0);
      if ( !Master_object )
LABEL_26:
        sub_21FFECC(userServantVoicePlayedEntity, v13);
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             (UserServantVoicePlayedMaster_o *)Master_object,
             p_userServantVoicePlayedEntity,
             userIdNumber,
             (int32_t)userServantVoicePlayedEntity,
             0) )
      {
        userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
        if ( *p_userServantVoicePlayedEntity )
          return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, 0);
        goto LABEL_26;
      }
      return 1;
    }
    voicePlayed2 = this->fields.voicePlayed2;
    if ( (voicePlayed2 & (1LL << flagNum)) != 0 )
      return 0;
    this->fields.voicePlayed2 = voicePlayed2 | (1LL << flagNum);
  }
  return 1;
}


bool UserServantCollectionEntity___IsGrandServant_b__78_0(
        UserServantCollectionEntity_o *this,
        UserServantGrandEntity_o *userServantGrandEntity,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *v4; // x20
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_5939690 & 1) == 0 )
  {
    this = (UserServantCollectionEntity_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939690 = 1;
  }
  if ( !userServantGrandEntity )
    sub_21FFECC(this, userServantGrandEntity);
  if ( v4->fields.userId != userServantGrandEntity->fields.userId )
    return 0;
  v6 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantGrandEntity);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0) == userServantGrandEntity->fields.svtId;
}


bool UserServantCollectionEntity__getCollectionStatus(
        UserServantCollectionEntity_o *this,
        int32_t *lv,
        int32_t *hp,
        int32_t *atk,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w1
  const MethodInfo *v12; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_5939674 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939674 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0);
  return UserServantCollectionEntity__getCollectionStatus_50084788(this, v11, lv, hp, atk, v12);
}


bool UserServantCollectionEntity__getCollectionStatus_50084788(
        UserServantCollectionEntity_o *this,
        int32_t svtId,
        int32_t *lv,
        int32_t *hp,
        int32_t *atk,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v12; // x1
  ServantEntity_o *v13; // x23
  _DWORD *v14; // x22
  int32_t v15; // w1
  int32_t LvLimitUpCondMaterial; // w0
  const MethodInfo_476E8C0 *v17; // x8
  int v18; // w8
  __int64 v19; // x9
  int v20; // w11
  bool result; // w0
  __int64 v22; // x8
  int32_t v23; // w8
  int32_t status; // w24
  _DWORD *v25; // x22

  if ( (byte_5939675 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939675 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               svtId,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_27;
  v13 = (ServantEntity_o *)Instance;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0) )
  {
    status = this->fields.status;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( status == 2 )
    {
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( Instance )
        {
          Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, v13->fields.limitMax, 0);
          if ( Instance )
          {
            v25 = Instance;
            *lv = ServantEntity__GetLvLimitUpCondMaterial(v13, *((_DWORD *)Instance + 7), 0);
            result = 1;
            *atk = v25[12];
            v23 = v25[10];
            goto LABEL_26;
          }
        }
      }
    }
    else if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( Instance )
      {
        Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, 0, 0);
        *lv = 1;
        if ( Instance )
        {
          *atk = *((_DWORD *)Instance + 11);
          v23 = *((_DWORD *)Instance + 9);
          result = 0;
          goto LABEL_26;
        }
      }
    }
LABEL_27:
    sub_21FFECC(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.maxLimitCount, 0);
  if ( !Instance )
    goto LABEL_27;
  v14 = Instance;
  v15 = *((_DWORD *)Instance + 6) == 4 ? 80 : 70;
  LvLimitUpCondMaterial = ServantEntity__GetLvLimitUpCondMaterial(v13, v15, 0);
  v17 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  *lv = LvLimitUpCondMaterial;
  Instance = SingletonMonoBehaviour_object___get_Instance(v17);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, v13->fields.expType, *lv, 0);
  if ( !Instance )
    goto LABEL_27;
  v18 = v14[11];
  v19 = 274877907LL * *((_DWORD *)Instance + 7) * (v14[12] - v18);
  *atk = (v19 >> 38) + ((unsigned __int64)v19 >> 63) + v18;
  LODWORD(v19) = v14[9];
  v20 = *((_DWORD *)Instance + 7);
  result = 1;
  v22 = 274877907LL * v20 * (v14[10] - (int)v19);
  v23 = (v22 >> 38) + ((unsigned __int64)v22 >> 63) + v19;
LABEL_26:
  *hp = v23;
  return result;
}


System_Int32_array *UserServantCollectionEntity__getCommandCodeIdList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  int64_t userId; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  Il2CppObject *v10; // x19
  const MethodInfo *v11; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_5939684 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939684 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v13, 0);
  if ( !v10 )
LABEL_8:
    sub_21FFECC(Instance, v4);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           (int32_t)Instance,
           v11);
}


int32_t UserServantCollectionEntity__getFriendShipRank(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_5939671 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939671 = 1;
  }
  v3 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v6.fields.currentCryptoKey = v3;
  *(_QWORD *)&v6.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v6, 0);
}


bool UserServantCollectionEntity__getFriendShipRankInfo(
        UserServantCollectionEntity_o *this,
        int32_t *friendshipRank,
        int32_t *maxFriendshipRank,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x24
  int32_t v19; // w8
  bool result; // w0
  int32_t v21; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_593967D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593967D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v22.fields.currentCryptoKey = v11;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v22, 0);
  if ( !v13 )
LABEL_14:
    sub_21FFECC(Instance, v8);
  Entity = DataMasterBase_object__object__int___GetEntity(
             v13,
             (int32_t)Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity && (v15 = Entity, ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0)) )
  {
    v17 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    *(_QWORD *)&v23.fields.currentCryptoKey = v17;
    *(_QWORD *)&v23.fields.fakeValue = v18;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v23, 0);
    result = 1;
    *friendshipRank = v19;
    v21 = this->fields.friendshipExceedCount + HIDWORD(v15[6].klass);
  }
  else
  {
    v21 = 0;
    result = 0;
    *friendshipRank = -1;
  }
  *maxFriendshipRank = v21;
  return result;
}


int32_t UserServantCollectionEntity__getFriendshipExceedCount(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.friendshipExceedCount;
}


int32_t UserServantCollectionEntity__getLevelMax(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  Il2CppObject *Entity; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x8
  ServantLimitMaster_o *v13; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_593967E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593967E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0);
  if ( !v9 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v9,
             (int32_t)Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v11 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v13 = (ServantLimitMaster_o *)v11,
        *(_QWORD *)&v16.fields.currentCryptoKey = v12,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0),
        !Entity)
    || !v13
    || (Instance = ServantLimitMaster__GetEntity(v13, (int32_t)Instance, (int32_t)Entity[5].monitor, 0)) == 0 )
  {
LABEL_12:
    sub_21FFECC(Instance, v4);
  }
  return *((_DWORD *)Instance + 7);
}


int32_t UserServantCollectionEntity__getLimitCountMax(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_593967F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593967F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_21FFECC(Instance, v4);
  }
  return (int32_t)Instance[5].monitor;
}


void UserServantCollectionEntity__getPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        bool isOwner,
        bool useDatabaseGrandStatus,
        const MethodInfo *method)
{
  __int64 v15; // x26
  __int64 v16; // x27
  int32_t v17; // w0
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5939679 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939679 = 1;
  }
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList);
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v19, 0);
  UserServantCollectionEntity__GetPassiveSkillInfo(
    this,
    idList,
    titleList,
    explanationList,
    v17,
    dispLimitCount,
    isOwner,
    useDatabaseGrandStatus,
    v18);
}


void UserServantCollectionEntity__getSkillInfo(
        UserServantCollectionEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5939677 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939677 = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0);
  UserServantCollectionEntity__GetSkillInfo(
    this,
    skillInfoList,
    v13,
    beforeClearQuestId,
    dispLimitCount,
    skillListNum,
    v14);
}


System_Int32_array *UserServantCollectionEntity__getSkillLevelList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  BalanceConfig_c *v7; // x19
  int32_t skillLv3; // w8
  __int64 v9; // x20

  if ( (byte_5939676 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    byte_5939676 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_21FFD10(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
    sub_21FFECC(0, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_21FFED4(v4);
  }
  skillLv3 = this->fields.skillLv3;
  v4 = BalanceConfig_TypeInfo;
  v9 = 11;
  v7->_1.byval_arg.bits = skillLv3;
  while ( 1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, v5);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( v9 - 8 >= v4->static_fields->SvtEquipSkillListMax )
      return (System_Int32_array *)v7;
    if ( v9 - 8 >= (unsigned __int64)LODWORD(v7->_1.namespaze) )
      goto LABEL_16;
    *((_DWORD *)&v7->_1.image + v9++) = 1;
  }
}


int32_t UserServantCollectionEntity__getSvtId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_5939670 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939670 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v6, 0);
}


bool UserServantCollectionEntity__getTreasureDeviceInfo(
        UserServantCollectionEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_593967B & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593967B = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0);
  return UserServantCollectionEntity__GetTreasureDeviceInfo(this, tdInfo, v11, beforeClearQuestId, dispLimitCount, v12);
}


UserCommandCodeEntity_o *UserServantCollectionEntity__getUserCommandCodeEntity(
        UserServantCollectionEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x1
  int64_t userId; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  UserServantCommandCodeMaster_o *v12; // x20
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x2
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_5939685 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939685 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserServantCommandCodeMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v17, 0);
  if ( !v12 )
    goto LABEL_12;
  if ( UserServantCommandCodeMaster__TryGetEntity(v12, &entity, userId, (int)Instance, v13) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v14);
LABEL_12:
    sub_21FFECC(Instance, v6);
  }
  return 0;
}


int64_t UserServantCollectionEntity__getUserId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


void UserServantCollectionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939691 & 1) == 0 )
  {
    sub_21FFC50(&UserServantCollectionEntity___c_TypeInfo);
    byte_5939691 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(UserServantCollectionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserServantCollectionEntity___c_TypeInfo->static_fields->__9 = (struct UserServantCollectionEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserServantCollectionEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserServantCollectionEntity___c___ctor(UserServantCollectionEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserServantCollectionEntity___c___GetCostumeList_b__58_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t UserServantCollectionEntity___c___GetCostumeList_b__59_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}


void UserServantCollectionEntity___c__DisplayClass75_0___ctor(
        UserServantCollectionEntity___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantCollectionEntity___c__DisplayClass75_0___GetSkillChangeCostumeList_b__0(
        UserServantCollectionEntity___c__DisplayClass75_0_o *this,
        ServantSkillReleaseEntity_o *d,
        const MethodInfo *method)
{
  UserServantCollectionEntity___c__DisplayClass75_0_o *v4; // x20
  struct UserServantCollectionEntity_o *_4__this; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t condTargetId; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_5939692 & 1) == 0 )
  {
    this = (UserServantCollectionEntity___c__DisplayClass75_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939692 = 1;
  }
  if ( !d || (_4__this = v4->fields.__4__this) == 0 )
    sub_21FFECC(this, d);
  v6 = *(_QWORD *)&_4__this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&_4__this->fields.svtId.fields.fakeValue;
  condTargetId = d->fields.condTargetId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, d);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10, 0)
      && d->fields.condNum == v4->fields.costumeId;
}