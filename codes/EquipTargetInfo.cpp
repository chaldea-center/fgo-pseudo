void EquipTargetInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4CC6F1A & 1) == 0 )
  {
    sub_1C713B0(&EquipTargetInfo_TypeInfo);
    byte_4CC6F1A = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipTargetInfo___ctor_41988452(
        EquipTargetInfo_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int128 v11; // q1
  struct AddSkillInfoData_array *addSkills; // x1
  GrandQuestFolderBoardItem_o *p_addSkills; // x20

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( equipTargetInfo )
  {
    this->fields.userId = equipTargetInfo->fields.userId;
    v11 = *(_OWORD *)&equipTargetInfo->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&equipTargetInfo->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v11;
    this->fields.svtId = equipTargetInfo->fields.svtId;
    *(_OWORD *)&this->fields.limitCount = *(_OWORD *)&equipTargetInfo->fields.limitCount;
    *(_OWORD *)&this->fields.atk = *(_OWORD *)&equipTargetInfo->fields.atk;
    *(_QWORD *)&this->fields.skillLv1 = *(_QWORD *)&equipTargetInfo->fields.skillLv1;
    this->fields.skillLv3 = equipTargetInfo->fields.skillLv3;
    addSkills = equipTargetInfo->fields.addSkills;
    this->fields.addSkills = addSkills;
    p_addSkills = (GrandQuestFolderBoardItem_o *)&this->fields.addSkills;
    sub_1C71354(p_addSkills, (int32_t)addSkills, v5, v6, v7, v8, v9, v10);
    p_addSkills->monitor = (void *)equipTargetInfo->fields.updatedAt;
  }
}


void EquipTargetInfo___ctor_41988580(
        EquipTargetInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        bool isSetUserId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v12; // x1
  int64_t v13; // x8
  __int128 v14; // q1
  long double inited; // q0
  _DWORD *v16; // x22
  Il2CppObject *Entity; // x21
  int32_t v18; // w20
  int v19; // w21
  int v20; // w25
  int v21; // w22
  int v22; // w24
  EquipTargetInfo_c *v23; // x8
  int32_t LOT_RATE; // w8
  int32_t v25; // w8
  __int64 v26; // x0
  __int64 v27; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v29; // x21
  __int64 v30; // x22
  ServantSkillMaster_o *v31; // x20
  unsigned int v32; // w8
  _QWORD *v33; // x20
  __int64 v34; // x9
  __int64 v35; // x9
  __int64 v36; // x9
  System_Collections_Generic_List_object__o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 i; // x27
  unsigned __int64 v45; // x28
  AddSkillInfoData_o *v46; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  __int64 v53; // x8
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  System_Object_array *v58; // x0
  int32_t v59; // w1
  struct AddSkillInfoData_array **p_addSkills; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61[2]; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4CC6F10 & 1) == 0 )
  {
    sub_1C713B0(&AddSkillInfoData_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&EquipTargetInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC6F10 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( isSetUserId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
    }
    Instance = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager_TypeInfo;
    }
    v13 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
  }
  else
  {
    v13 = 1;
  }
  if ( !this )
    goto LABEL_71;
  this->fields.userId = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v61, 1, 0);
  v14 = *(_OWORD *)&v61[0].fields.currentCryptoKey;
  v61[1] = v61[0];
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v61[0].fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0 )
  {
LABEL_71:
    sub_1C71608(Instance, v12);
  }
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0);
  v16 = Instance;
  if ( level == 1 )
  {
    if ( !Instance )
      goto LABEL_71;
    this->fields.hp = *((_DWORD *)Instance + 9);
    goto LABEL_33;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity )
    goto LABEL_71;
  if ( !Instance )
    goto LABEL_71;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, HIDWORD(Entity[8].klass), level, 0);
  if ( !v16 )
    goto LABEL_71;
  v18 = v16[9];
  if ( !Instance )
  {
    this->fields.hp = v18;
LABEL_33:
    v25 = v16[11];
    goto LABEL_34;
  }
  v20 = v16[10];
  v19 = v16[11];
  v21 = v16[12];
  v22 = *((_DWORD *)Instance + 7);
  v23 = EquipTargetInfo_TypeInfo;
  if ( !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo);
    v23 = EquipTargetInfo_TypeInfo;
  }
  LOT_RATE = v23->static_fields->LOT_RATE;
  this->fields.hp = v22 * (v20 - v18) / LOT_RATE + v18;
  v25 = v22 * (v21 - v19) / LOT_RATE + v19;
LABEL_34:
  this->fields.atk = v25;
  *(_QWORD *)&inited = 0x100000001LL;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C47444(inited);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C47444(inited);
  Instance = **(void ***)(v27 + 184);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v31 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v62.fields.currentCryptoKey = v30;
  *(_QWORD *)&v62.fields.fakeValue = v29;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v62, 0);
  if ( !v31 )
    goto LABEL_71;
  Instance = ServantSkillMaster__getUseEntityList(
               v31,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               -1,
               -1,
               -1,
               0);
  if ( !Instance )
    goto LABEL_71;
  v32 = *((_DWORD *)Instance + 6);
  v33 = Instance;
  if ( !v32 )
    goto LABEL_72;
  v34 = *((_QWORD *)Instance + 4);
  if ( v34 )
    LODWORD(v34) = *(_DWORD *)(v34 + 28);
  this->fields.skillId1 = v34;
  if ( v32 <= 1 )
    goto LABEL_72;
  v35 = *((_QWORD *)Instance + 5);
  if ( v35 )
    LODWORD(v35) = *(_DWORD *)(v35 + 28);
  this->fields.skillId2 = v35;
  if ( v32 <= 2 )
LABEL_72:
    sub_1C71610(Instance);
  v36 = *((_QWORD *)Instance + 6);
  if ( v36 )
    LODWORD(v36) = *(_DWORD *)(v36 + 28);
  this->fields.skillId3 = v36;
  v37 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7; ; ++i )
  {
    Instance = BalanceConfig_TypeInfo;
    v45 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v45 >= *(int *)(*((_QWORD *)Instance + 23) + 56LL) )
      break;
    if ( v45 >= *((unsigned int *)v33 + 6) )
      goto LABEL_72;
    if ( v33[i] )
    {
      v46 = (AddSkillInfoData_o *)sub_1C715FC(AddSkillInfoData_TypeInfo);
      AddSkillInfoData___ctor(v46, 0);
      if ( v45 >= *((unsigned int *)v33 + 6) )
        goto LABEL_72;
      v53 = v33[i];
      if ( !v53 )
        goto LABEL_71;
      if ( !v46 )
        goto LABEL_71;
      v46->fields.num = *(_DWORD *)(v53 + 20);
      v46->fields.skillId = *(_DWORD *)(v53 + 28);
      if ( !v37 )
        goto LABEL_71;
      items = v37->fields._items;
      v55 = Method_System_Collections_Generic_List_AddSkillInfoData__Add__;
      ++v37->fields._version;
      if ( !items )
        goto LABEL_71;
      size = v37->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          (Il2CppObject *)v46,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v37->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v46;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v57 + 4), (int32_t)v46, v47, v48, v49, v50, v51, v52);
      }
    }
  }
  if ( v37 )
  {
    v58 = System_Collections_Generic_List_object___ToArray(
            v37,
            (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    v59 = (int)v58;
    this->fields.addSkills = (struct AddSkillInfoData_array *)v58;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0;
    p_addSkills = &this->fields.addSkills;
    v59 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_addSkills, v59, v38, v39, v40, v41, v42, v43);
  this->fields.updatedAt = 0;
}


System_Nullable_ValueTuple_FuncList_TYPE__int___o EquipTargetInfo__GetFriendPointUpTypeVal(
        EquipTargetInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  Il2CppObject *Master_object; // x19
  const MethodInfo *v6; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v8; // x1
  __int128 v9; // x0
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 v11; // x24
  __int64 v12; // x27
  __int64 v13; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4CC6F15 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC6F15 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v4;
  *(_QWORD *)&v15.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v15, 0) >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v6);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v8);
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      *(_QWORD *)&v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        *(_QWORD *)&v9 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v11 >= *(int *)(*(_QWORD *)(v9 + 184) + 56LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_26;
      if ( v11 >= LODWORD(SkillIdList->max_length) )
        goto LABEL_27;
      *((_QWORD *)&v9 + 1) = (unsigned int)SkillIdList->m_Items[v11];
      if ( SDWORD2(v9) >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_26;
        if ( v11 >= LODWORD(SkillLevelList->max_length) )
LABEL_27:
          sub_1C71610(v9);
        if ( !Master_object )
          goto LABEL_26;
        *(_QWORD *)&v9 = SkillLvMaster__GetEntity(
                           (SkillLvMaster_o *)Master_object,
                           SDWORD2(v9),
                           SkillLevelList->m_Items[v11],
                           0);
        v13 = v9;
        if ( !(_QWORD)v9 )
          *(_QWORD *)&v9 = v12;
        if ( v13 )
        {
          if ( !(_QWORD)v9 )
LABEL_26:
            sub_1C71608(v9, *((_QWORD *)&v9 + 1));
          *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v9 = SkillLvEntity__GetFriendPointUpTypeVal(
                                                                        (SkillLvEntity_o *)v9,
                                                                        0);
          v12 = v13;
          if ( (_BYTE)v9 )
            return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v9;
        }
      }
      ++v11;
    }
  }
  *(_QWORD *)&v9 = 0;
  DWORD2(v9) = 0;
  return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v9;
}


System_String_o *EquipTargetInfo__GetSvtName(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4CC6F19 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC6F19 = 1;
  }
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v12, 0);
  if ( !v9 )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v9,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0, 0);
LABEL_11:
    sub_1C71608(Instance, v5);
  }
  return v3;
}


void EquipTargetInfo__SetImagePartsGroupIdxs(
        EquipTargetInfo_o *this,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ImagePartsGroupIdxs_k__BackingField = imagePartsGroupIdxs;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ImagePartsGroupIdxs_k__BackingField,
    (int32_t)imagePartsGroupIdxs,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EquipTargetInfo__SetSkillChangeFlag(EquipTargetInfo_o *this, bool isSkillChange, const MethodInfo *method)
{
  this->fields._EquipSkillChange_k__BackingField = isSkillChange;
}


bool EquipTargetInfo__getEventUpVal(
        EquipTargetInfo_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v14; // x1
  System_Int32_array *SkillIdList; // x24
  const MethodInfo *v16; // x1
  System_Int32_array *SkillLevelList; // x25
  unsigned __int64 i; // x28
  __int64 v19; // x8
  bool v20; // w26
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v22; // x27
  int32_t EventId; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CC6F16 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC6F16 = 1;
  }
  if ( !setupInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v10;
  *(_QWORD *)&v27.fields.fakeValue = v9;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v27, 0) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1C71608(Instance, v12);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v14);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v16);
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v19 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 56LL);
    v20 = (__int64)i < v19;
    if ( (__int64)i >= v19 )
      break;
    if ( !SkillIdList )
      goto LABEL_23;
    if ( i >= LODWORD(SkillIdList->max_length) )
      goto LABEL_24;
    v12 = (const MethodInfo *)(unsigned int)SkillIdList->m_Items[i];
    if ( (int)v12 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_23;
      if ( i >= LODWORD(SkillLevelList->max_length) )
LABEL_24:
        sub_1C71610(Instance);
      if ( !MasterData_object )
        goto LABEL_23;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)MasterData_object,
                 (int32_t)v12,
                 SkillLevelList->m_Items[i],
                 0);
      if ( Entity )
      {
        v22 = Entity;
        EventId = EventUpValSetupInfo__get_EventId(setupInfo, v12);
        if ( SkillLvEntity__getEventUpVal(
               v22,
               wearersSvtId,
               wearesLimitCount,
               wearesDispLimitCount,
               setupInfo,
               EventId,
               1,
               0,
               0) )
        {
          break;
        }
      }
    }
  }
  return v20;
}


bool EquipTargetInfo__getEventUpVal_41992696(
        EquipTargetInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isSupport,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x21
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v13; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v15; // x1
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v17; // x25
  bool v18; // w24
  bool v19; // w22
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4CC6F17 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC6F17 = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v8;
  *(_QWORD *)&v21.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v21, 0);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_25;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_25:
    sub_1C71608(Instance, v10);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v13);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v15);
  v17 = 0;
  v18 = 0;
  v19 = isSupport;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v17 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 56LL) )
      return v18;
    if ( !SkillIdList )
      goto LABEL_25;
    if ( v17 >= LODWORD(SkillIdList->max_length) )
      goto LABEL_26;
    v10 = (unsigned int)SkillIdList->m_Items[v17];
    if ( (int)v10 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_25;
      if ( v17 >= LODWORD(SkillLevelList->max_length) )
LABEL_26:
        sub_1C71610(Instance);
      if ( !MasterData_object )
        goto LABEL_25;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v10, SkillLevelList->m_Items[v17], 0);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_43186452(Entity, eventUpVallInfo, 1, 0, v19, 0, 0, -1, 0) )
          v18 = 1;
      }
    }
    ++v17;
  }
}


bool EquipTargetInfo__getExpInfo(
        EquipTargetInfo_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x24
  __int64 v15; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v18; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v20; // x24
  int m_CancellationTokenSource; // w25
  bool result; // w0
  float v23; // s0
  int v24; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4CC6F18 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC6F18 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v10;
  *(_QWORD *)&v25.fields.fakeValue = v9;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v25, 0) < 1 )
  {
    result = 0;
    v23 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = v15;
    *(_QWORD *)&v26.fields.fakeValue = v14;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v26, 0);
    if ( !v16 )
      goto LABEL_25;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v16,
               (int32_t)Instance,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v18) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantExpMaster___);
      lv = this->fields.lv;
      v20 = (ServantExpMaster_o *)Instance;
      if ( lv >= 2 )
      {
        if ( !Entity )
          goto LABEL_25;
        if ( !Instance )
          goto LABEL_25;
        Instance = (DataManager_o *)ServantExpMaster__GetEntity(
                                      (ServantExpMaster_o *)Instance,
                                      HIDWORD(Entity[8].klass),
                                      lv - 1,
                                      0);
        if ( !Instance )
          goto LABEL_25;
        m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      }
      else
      {
        if ( !Entity || !Instance )
          goto LABEL_25;
        m_CancellationTokenSource = 0;
      }
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(v20, HIDWORD(Entity[8].klass), this->fields.lv, 0);
      *exp = this->fields.exp - m_CancellationTokenSource;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
        v24 = (int)Instance->fields.m_CancellationTokenSource;
        result = 1;
        v23 = (float)*exp / (float)(v24 - m_CancellationTokenSource);
        goto LABEL_24;
      }
LABEL_25:
      sub_1C71608(Instance, v12);
    }
    *exp = 0;
    *lateExp = 0;
    result = 1;
    v23 = 1.0;
  }
LABEL_24:
  *barExp = v23;
  return result;
}


int32_t EquipTargetInfo__getLevelMax(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4CC6F11 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC6F11 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v4;
  *(_QWORD *)&v12.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v12, 0) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v13, 0);
  if ( !v10 || (Instance = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, 0)) == 0 )
LABEL_13:
    sub_1C71608(Instance, v6);
  return *((_DWORD *)Instance + 7);
}


int32_t EquipTargetInfo__getServantLevel(EquipTargetInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *EquipTargetInfo__getSkillIdList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  BalanceConfig_c *v7; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v9; // x22
  __int64 v10; // x23
  AddSkillInfoData_o *v11; // x10

  if ( (byte_4CC6F12 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    byte_4CC6F12 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1C71458(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
LABEL_21:
    sub_1C71608(v4, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_23:
    sub_1C71610(v4);
  }
  v4->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v9 = 0;
    v10 = 0x300000000LL;
    while ( (__int64)v9 < SLODWORD(addSkills->max_length) )
    {
      v4 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      addSkills = this->fields.addSkills;
      if ( v4->static_fields->SvtEquipSkillListMax > (int)v9 + 3 )
      {
        if ( !addSkills )
          goto LABEL_21;
        if ( v9 >= LODWORD(addSkills->max_length) )
          goto LABEL_23;
        v11 = addSkills->m_Items[v9];
        if ( !v11 )
          goto LABEL_21;
        if ( v9 + 3 >= LODWORD(v7->_1.namespaze) )
          goto LABEL_23;
        *(_DWORD *)((char *)&v7->_1.byval_arg.data + (v10 >> 30)) = v11->fields.skillId;
      }
      ++v9;
      v10 += 0x100000000LL;
      if ( !addSkills )
        goto LABEL_21;
    }
  }
  return (System_Int32_array *)v7;
}


void EquipTargetInfo__getSkillInfo(EquipTargetInfo_o *this, SkillInfo_array **skillInfoList, const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  SkillInfo_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x20
  __int64 v13; // x21
  __int64 v14; // x1
  long double v15; // q0
  __int64 v16; // x0
  __int64 v17; // x0
  BalanceConfig_c *v18; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v20; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v22; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v24; // x28
  unsigned int v25; // w19
  int32_t *m_Items; // x29
  Il2CppObject *Entity; // x0
  SkillEntity_o *v28; // x24
  __int64 v29; // x23
  int32_t v30; // w1
  System_String_o *EffectTitle; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_String_o *EffectExplanation; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  SkillInfo_array *v45; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  Il2CppClass **v52; // x0
  __int64 v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4CC6F14 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C713B0(&SkillInfo___TypeInfo);
    sub_1C713B0(&SkillInfo_TypeInfo);
    byte_4CC6F14 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (SkillInfo_array *)sub_1C71458(SkillInfo___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v13;
  *(_QWORD *)&v55.fields.fakeValue = v12;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v55, 0) >= 1 )
  {
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C47444(v15);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C47444(v15);
    v18 = **(BalanceConfig_c ***)(v17 + 184);
    if ( !v18 )
LABEL_32:
      sub_1C71608(v18, v14);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v18,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v20);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v22);
    v24 = 0;
    v25 = 0;
    m_Items = SkillIdList->m_Items;
    while ( 1 )
    {
      v18 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v24 >= v18->static_fields->SvtEquipSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_32;
      if ( v24 >= LODWORD(SkillIdList->max_length) )
LABEL_33:
        sub_1C71610(v18);
      v14 = (unsigned int)m_Items[v24];
      if ( (int)v14 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_32;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v14,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v28 = (SkillEntity_o *)Entity;
          v29 = sub_1C715FC(SkillInfo_TypeInfo);
          SkillInfo___ctor((SkillInfo_o *)v29, 0);
          if ( v24 >= LODWORD(SkillIdList->max_length) )
            goto LABEL_33;
          if ( !v29 )
            goto LABEL_32;
          *(_DWORD *)(v29 + 16) = m_Items[v24];
          if ( !SkillLevelList )
            goto LABEL_32;
          if ( v24 >= LODWORD(SkillLevelList->max_length) )
            goto LABEL_33;
          v30 = SkillLevelList->m_Items[v24];
          *(_DWORD *)(v29 + 20) = v30;
          *(_DWORD *)(v29 + 24) = SkillEntity__getEffectChargeTurn(v28, v30, 0);
          EffectTitle = SkillEntity__getEffectTitle(v28, 0, 0);
          *(_QWORD *)(v29 + 32) = EffectTitle;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v29 + 32), (int32_t)EffectTitle, v32, v33, v34, v35, v36, v37);
          EffectExplanation = SkillEntity__getEffectExplanation(v28, *(_DWORD *)(v29 + 20), 0);
          *(_QWORD *)(v29 + 40) = EffectExplanation;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)(v29 + 40),
            (int32_t)EffectExplanation,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
          *(_BYTE *)(v29 + 56) = 1;
          v45 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_32;
          v18 = (BalanceConfig_c *)sub_1C714EC(v29, v45->obj.klass->_1.element_class);
          if ( !v18 )
          {
            v53 = sub_1C7162C(0);
            sub_1C714D8(v53, 0);
          }
          if ( v25 >= LODWORD(v45->max_length) )
            goto LABEL_33;
          v52 = &v45->obj.klass + (int)v25;
          v52[4] = (Il2CppClass *)v29;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v52 + 4), v29, v46, v47, v48, v49, v50, v51);
          ++v25;
        }
      }
      ++v24;
    }
  }
}


System_Int32_array *EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  BalanceConfig_c *v7; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v9; // x25
  __int64 v10; // x22

  if ( (byte_4CC6F13 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    byte_4CC6F13 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1C71458(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
LABEL_18:
    sub_1C71608(v4, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_20:
    sub_1C71610(v4);
  }
  v4->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v9 = 0;
    v10 = 0x300000000LL;
    while ( v9 < SLODWORD(addSkills->max_length) )
    {
      v4 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      if ( v4->static_fields->SvtEquipSkillListMax > (int)v9 + 3 )
      {
        if ( v9 + 3 >= (unsigned __int64)LODWORD(v7->_1.namespaze) )
          goto LABEL_20;
        *(_DWORD *)((char *)&v7->_1.byval_arg.data + (v10 >> 30)) = 1;
      }
      addSkills = this->fields.addSkills;
      v10 += 0x100000000LL;
      ++v9;
      if ( !addSkills )
        goto LABEL_18;
    }
  }
  return (System_Int32_array *)v7;
}


bool EquipTargetInfo__get_EquipSkillChange(EquipTargetInfo_o *this, const MethodInfo *method)
{
  return this->fields._EquipSkillChange_k__BackingField;
}


System_Int32_array *EquipTargetInfo__get_ImagePartsGroupIdxs(EquipTargetInfo_o *this, const MethodInfo *method)
{
  return this->fields._ImagePartsGroupIdxs_k__BackingField;
}


void EquipTargetInfo__set_EquipSkillChange(EquipTargetInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._EquipSkillChange_k__BackingField = value;
}


void EquipTargetInfo__set_ImagePartsGroupIdxs(
        EquipTargetInfo_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ImagePartsGroupIdxs_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ImagePartsGroupIdxs_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}