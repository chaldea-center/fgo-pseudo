void EquipTargetInfo___cctor(const MethodInfo *method)
{
  if ( (byte_59381B7 & 1) == 0 )
  {
    sub_21FFC50(&EquipTargetInfo_TypeInfo);
    byte_59381B7 = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipTargetInfo___ctor_48662376(
        EquipTargetInfo_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int128 v11; // q1
  struct AddSkillInfoData_array *addSkills; // x1
  __int128 v13; // q0
  MissionNaviTransitionBoardItem_o *p_addSkills; // x20

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( equipTargetInfo )
  {
    this->fields.userId = equipTargetInfo->fields.userId;
    v11 = *(_OWORD *)&equipTargetInfo->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&equipTargetInfo->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v11;
    this->fields.svtId = equipTargetInfo->fields.svtId;
    addSkills = equipTargetInfo->fields.addSkills;
    v13 = *(_OWORD *)&equipTargetInfo->fields.limitCount;
    this->fields.addSkills = addSkills;
    p_addSkills = (MissionNaviTransitionBoardItem_o *)&this->fields.addSkills;
    *(_OWORD *)&p_addSkills[-1].fields._IconName_k__BackingField = v13;
    *(_OWORD *)&p_addSkills[-1].fields._QuestId_k__BackingField = *(_OWORD *)&equipTargetInfo->fields.atk;
    p_addSkills[-1].fields._NaviAction_k__BackingField = *(struct System_Action_o **)&equipTargetInfo->fields.skillLv1;
    p_addSkills[-1].fields._BoardType_k__BackingField = equipTargetInfo->fields.skillLv3;
    sub_21FFBF4(p_addSkills, (int32_t)addSkills, v5, v6, v7, v8, v9, v10);
    p_addSkills->monitor = (void *)equipTargetInfo->fields.updatedAt;
  }
}


void EquipTargetInfo___ctor_48662504(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v14; // x0
  int v15; // w9
  __int64 v16; // x1
  __int128 v17; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v18; // x0
  const MethodInfo_476E8C0 *v19; // x0
  long double v20; // q0
  int32_t *v21; // x22
  Il2CppObject *Entity; // x21
  int v23; // w24
  int32_t v24; // w20
  int32_t v25; // w25
  EquipTargetInfo_c *v26; // x8
  int32_t v27; // w21
  int32_t v28; // w22
  int32_t LOT_RATE; // w8
  int32_t v30; // w8
  _QWORD *v31; // x9
  __int64 v32; // x0
  __int64 v33; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v35; // x1
  __int64 v36; // x21
  __int64 v37; // x22
  ServantSkillMaster_o *v38; // x20
  unsigned int v39; // w8
  _QWORD *v40; // x20
  __int64 v41; // x9
  __int64 v42; // x9
  __int64 v43; // x9
  System_Collections_Generic_List_AddSkillInfoData__c *v44; // x0
  System_Collections_Generic_List_object__o *v45; // x21
  __int64 v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 i; // x27
  unsigned __int64 v54; // x28
  AddSkillInfoData_o *v55; // x22
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x8
  int32_t v63; // w9
  int32_t v64; // w8
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  System_Object_array *v69; // x0
  int32_t v70; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_59381AD & 1) == 0 )
  {
    sub_21FFC50(&AddSkillInfoData_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&EquipTargetInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59381AD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( isSetUserId )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
      Instance = NetworkManager_TypeInfo;
    }
    v13 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
  }
  else
  {
    v13 = 1;
  }
  if ( !this )
    goto LABEL_69;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v15 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  this->fields.userId = v13;
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(v14, v12);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v71, 1, 0);
  v17 = *(_OWORD *)&v71.fields.currentCryptoKey;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v71.fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v17;
  if ( !*(&v18->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v18, v16);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  v19 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v19);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_69;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0);
  v21 = (int32_t *)Instance;
  if ( level == 1 )
    goto LABEL_30;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_69;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity || !Instance )
    goto LABEL_69;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, HIDWORD(Entity[8].klass), level, 0);
  if ( !Instance )
  {
LABEL_30:
    if ( !v21 )
      goto LABEL_69;
    v30 = v21[11];
    this->fields.hp = v21[9];
  }
  else
  {
    if ( !v21 )
      goto LABEL_69;
    v23 = *((_DWORD *)Instance + 7);
    v24 = v21[9];
    v25 = v21[10];
    v26 = EquipTargetInfo_TypeInfo;
    v27 = v21[11];
    v28 = v21[12];
    if ( !*(&EquipTargetInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      *(__n128 *)&v20 = j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo, v12);
      v26 = EquipTargetInfo_TypeInfo;
    }
    LOT_RATE = v26->static_fields->LOT_RATE;
    this->fields.hp = v23 * (v25 - v24) / LOT_RATE + v24;
    v30 = v23 * (v28 - v27) / LOT_RATE + v27;
  }
  *(_QWORD *)&v20 = 0x100000001LL;
  this->fields.atk = v30;
  this->fields.skillLv3 = 1;
  v31 = Method_SingletonMonoBehaviour_DataManager__getInstance__;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  v32 = v31[4];
  if ( (*(_WORD *)(v32 + 309) & 1) == 0 )
    v32 = sub_2237AF8(v20);
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
  if ( (*(_WORD *)(v33 + 309) & 1) == 0 )
    v33 = sub_2237AF8(v20);
  Instance = **(void ***)(v33 + 184);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v36 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v38 = (ServantSkillMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
  *(_QWORD *)&v72.fields.currentCryptoKey = v36;
  *(_QWORD *)&v72.fields.fakeValue = v37;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v72, 0);
  if ( !v38
    || (Instance = ServantSkillMaster__getUseEntityList(
                     v38,
                     (int32_t)Instance,
                     this->fields.userId,
                     this->fields.lv,
                     this->fields.limitCount,
                     -1,
                     -1,
                     -1,
                     0)) == 0 )
  {
LABEL_69:
    sub_21FFECC(Instance, v12);
  }
  v39 = *((_DWORD *)Instance + 6);
  v40 = Instance;
  if ( !v39 )
    goto LABEL_70;
  v41 = *((_QWORD *)Instance + 4);
  if ( v41 )
    LODWORD(v41) = *(_DWORD *)(v41 + 28);
  this->fields.skillId1 = v41;
  if ( v39 == 1 )
    goto LABEL_70;
  v42 = *((_QWORD *)Instance + 5);
  if ( v42 )
    LODWORD(v42) = *(_DWORD *)(v42 + 28);
  this->fields.skillId2 = v42;
  if ( v39 <= 2 )
LABEL_70:
    sub_21FFED4(Instance);
  v43 = *((_QWORD *)Instance + 6);
  if ( v43 )
    LODWORD(v43) = *(_DWORD *)(v43 + 28);
  v44 = System_Collections_Generic_List_AddSkillInfoData__TypeInfo;
  this->fields.skillId3 = v43;
  v45 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7; ; ++i )
  {
    Instance = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v46);
      Instance = BalanceConfig_TypeInfo;
    }
    v54 = i - 4;
    if ( i - 4 >= *(int *)(*((_QWORD *)Instance + 23) + 56LL) )
      break;
    if ( v54 >= *((unsigned int *)v40 + 6) )
      goto LABEL_70;
    if ( v40[i] )
    {
      v55 = (AddSkillInfoData_o *)sub_21FFEBC(AddSkillInfoData_TypeInfo);
      AddSkillInfoData___ctor(v55, 0);
      if ( v54 >= *((unsigned int *)v40 + 6) )
        goto LABEL_70;
      v62 = v40[i];
      if ( !v62 )
        goto LABEL_69;
      if ( !v55 )
        goto LABEL_69;
      v63 = *(_DWORD *)(v62 + 20);
      v64 = *(_DWORD *)(v62 + 28);
      v55->fields.num = v63;
      v55->fields.skillId = v64;
      if ( !v45 )
        goto LABEL_69;
      items = v45->fields._items;
      v66 = Method_System_Collections_Generic_List_AddSkillInfoData__Add__;
      ++v45->fields._version;
      if ( !items )
        goto LABEL_69;
      size = v45->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          (Il2CppObject *)v55,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &items->obj.klass + size;
        v45->fields._size = size + 1;
        v68[4] = (Il2CppClass *)v55;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 4), (int32_t)v55, v56, v57, v58, v59, v60, v61);
      }
    }
  }
  if ( v45 )
  {
    v69 = System_Collections_Generic_List_object___ToArray(
            v45,
            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    v70 = (int)v69;
    this->fields.addSkills = (struct AddSkillInfoData_array *)v69;
  }
  else
  {
    v70 = 0;
    this->fields.addSkills = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.addSkills, v70, v47, v48, v49, v50, v51, v52);
  this->fields.updatedAt = 0;
}


System_Nullable_ValueTuple_FuncList_TYPE__int___o EquipTargetInfo__GetFriendPointUpTypeVal(
        EquipTargetInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  __int64 v5; // x1
  Il2CppObject *Master_object; // x19
  const MethodInfo *v7; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v9; // x1
  __int128 v10; // x0
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_59381B2 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59381B2 = 1;
  }
  v3 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v14.fields.currentCryptoKey = v3;
  *(_QWORD *)&v14.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0) >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v7);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v9);
    for ( i = 0; ; ++i )
    {
      *(_QWORD *)&v10 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *((_QWORD *)&v10 + 1));
        *(_QWORD *)&v10 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)(v10 + 184) + 56LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_23;
      if ( i >= LODWORD(SkillIdList->max_length) )
        goto LABEL_24;
      *((_QWORD *)&v10 + 1) = (unsigned int)SkillIdList->m_Items[i];
      if ( SDWORD2(v10) >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_23;
        if ( i >= LODWORD(SkillLevelList->max_length) )
LABEL_24:
          sub_21FFED4(v10);
        if ( !Master_object )
LABEL_23:
          sub_21FFECC(v10, *((_QWORD *)&v10 + 1));
        *(_QWORD *)&v10 = SkillLvMaster__GetEntity(
                            (SkillLvMaster_o *)Master_object,
                            SDWORD2(v10),
                            SkillLevelList->m_Items[i],
                            0);
        if ( (_QWORD)v10 )
        {
          *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v10 = SkillLvEntity__GetFriendPointUpTypeVal(
                                                                         (SkillLvEntity_o *)v10,
                                                                         0);
          if ( (_BYTE)v10 )
            return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v10;
        }
      }
    }
  }
  *(_QWORD *)&v10 = 0;
  DWORD2(v10) = 0;
  return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v10;
}


System_String_o *EquipTargetInfo__GetSvtName(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59381B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59381B6 = 1;
  }
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v13, 0);
  if ( !v10 )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v10,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0, 0, 0);
LABEL_11:
    sub_21FFECC(Instance, v5);
  }
  return v3;
}


void EquipTargetInfo__SetImagePartsGroupIdxs(
        EquipTargetInfo_o *this,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ImagePartsGroupIdxs_k__BackingField = imagePartsGroupIdxs;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ImagePartsGroupIdxs_k__BackingField,
    (int32_t)imagePartsGroupIdxs,
    (System_String_o *)method,
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_59381B3 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59381B3 = 1;
  }
  if ( !setupInfo )
    return 0;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&wearersSvtId);
  *(_QWORD *)&v27.fields.currentCryptoKey = v9;
  *(_QWORD *)&v27.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v27, 0) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_21FFECC(Instance, v12);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v14);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v16);
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12);
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
        sub_21FFED4(Instance);
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


bool EquipTargetInfo__getEventUpVal_48666572(
        EquipTargetInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isSupport,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x22
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int v11; // w24
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v14; // x1
  System_Int32_array *SkillIdList; // x22
  const MethodInfo *v16; // x1
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v18; // x25
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_59381B4 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59381B4 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpVallInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v7;
  *(_QWORD *)&v20.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v20, 0);
  if ( (int)Instance < 1 )
    goto LABEL_8;
  if ( !*eventUpVallInfo )
    goto LABEL_24;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0) )
  {
LABEL_8:
    LOBYTE(v11) = 0;
    return v11 & 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_21FFECC(Instance, v10);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v14);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v16);
  v18 = 0;
  v11 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v18 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 56LL) )
      return v11 & 1;
    if ( !SkillIdList )
      goto LABEL_24;
    if ( v18 >= LODWORD(SkillIdList->max_length) )
      goto LABEL_25;
    v10 = (unsigned int)SkillIdList->m_Items[v18];
    if ( (int)v10 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_24;
      if ( v18 >= LODWORD(SkillLevelList->max_length) )
LABEL_25:
        sub_21FFED4(Instance);
      if ( !MasterData_object )
        goto LABEL_24;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v10, SkillLevelList->m_Items[v18], 0);
      if ( Entity )
        v11 |= SkillLvEntity__getEventUpVal_49857460(Entity, eventUpVallInfo, 1, 0, isSupport, 0, 0, -1, 0);
    }
    ++v18;
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
  int32_t v11; // w23
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x1
  __int64 v16; // x25
  __int64 v17; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x24
  Il2CppObject *Entity; // x24
  const MethodInfo *v20; // x1
  int lv; // w2
  ServantExpMaster_o *v22; // x25
  int m_CancellationTokenSource; // w26
  float v24; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_59381B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59381B5 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
  *(_QWORD *)&v26.fields.currentCryptoKey = v9;
  *(_QWORD *)&v26.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v26, 0);
  if ( v11 < 1 )
  {
    v24 = 0.0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    *(_QWORD *)&v27.fields.currentCryptoKey = v16;
    *(_QWORD *)&v27.fields.fakeValue = v17;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v27, 0);
    if ( !v18 )
      goto LABEL_26;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v18,
               (int32_t)Instance,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v20) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      lv = this->fields.lv;
      v22 = (ServantExpMaster_o *)Instance;
      if ( lv >= 2 )
      {
        if ( !Entity )
          goto LABEL_26;
        if ( !Instance )
          goto LABEL_26;
        Instance = (DataManager_o *)ServantExpMaster__GetEntity(
                                      (ServantExpMaster_o *)Instance,
                                      HIDWORD(Entity[8].klass),
                                      lv - 1,
                                      0);
        if ( !Instance )
          goto LABEL_26;
        m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
        lv = this->fields.lv;
      }
      else
      {
        if ( !Entity || !Instance )
          goto LABEL_26;
        m_CancellationTokenSource = 0;
      }
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(v22, HIDWORD(Entity[8].klass), lv, 0);
      *exp = this->fields.exp - m_CancellationTokenSource;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
        v24 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
        goto LABEL_25;
      }
LABEL_26:
      sub_21FFECC(Instance, v13);
    }
    v24 = 1.0;
  }
  *exp = 0;
  *lateExp = 0;
LABEL_25:
  *barExp = v24;
  return v11 > 0;
}


int32_t EquipTargetInfo__getLevelMax(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_59381AE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59381AE = 1;
  }
  v3 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v13.fields.currentCryptoKey = v3;
  *(_QWORD *)&v13.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v13, 0) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0);
  if ( !v11 || (Instance = ServantLimitMaster__GetEntity(v11, (int32_t)Instance, this->fields.limitCount, 0)) == 0 )
LABEL_13:
    sub_21FFECC(Instance, v6);
  return *((_DWORD *)Instance + 7);
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

  if ( (byte_59381AF & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    byte_59381AF = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_21FFD10(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
LABEL_21:
    sub_21FFECC(v4, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_23:
    sub_21FFED4(v4);
  }
  addSkills = this->fields.addSkills;
  v4->_1.byval_arg.bits = this->fields.skillId3;
  if ( addSkills )
  {
    v9 = 0;
    v10 = 0x300000000LL;
    while ( (__int64)v9 < SLODWORD(addSkills->max_length) )
    {
      v4 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
        v4 = BalanceConfig_TypeInfo;
        addSkills = this->fields.addSkills;
      }
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x21
  __int64 v15; // x1
  long double v16; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  BalanceConfig_c *v19; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v21; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v23; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v25; // x28
  unsigned int v26; // w26
  int32_t *m_Items; // x29
  Il2CppObject *Entity; // x0
  SkillEntity_o *v29; // x24
  __int64 v30; // x23
  int32_t v31; // w1
  System_String_o *EffectTitle; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *EffectExplanation; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  SkillInfo_array *v46; // x19
  __int64 v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  Il2CppClass **v54; // x0
  __int64 v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_59381B1 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&SkillInfo___TypeInfo);
    sub_21FFC50(&SkillInfo_TypeInfo);
    byte_59381B1 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (SkillInfo_array *)sub_21FFD10(SkillInfo___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v57.fields.currentCryptoKey = v13;
  *(_QWORD *)&v57.fields.fakeValue = v14;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v57, 0) >= 1 )
  {
    v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
      v17 = sub_2237AF8(v16);
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
    if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
      v18 = sub_2237AF8(v16);
    v19 = **(BalanceConfig_c ***)(v18 + 184);
    if ( !v19 )
LABEL_32:
      sub_21FFECC(v19, v15);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v19,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v21);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v23);
    v25 = 0;
    v26 = 0;
    m_Items = SkillIdList->m_Items;
    while ( 1 )
    {
      v19 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
        v19 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v25 >= v19->static_fields->SvtEquipSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_32;
      if ( v25 >= LODWORD(SkillIdList->max_length) )
LABEL_33:
        sub_21FFED4(v19);
      v15 = (unsigned int)m_Items[v25];
      if ( (int)v15 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_32;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v15,
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v29 = (SkillEntity_o *)Entity;
          v30 = sub_21FFEBC(SkillInfo_TypeInfo);
          SkillInfo___ctor((SkillInfo_o *)v30, 0);
          if ( v25 >= LODWORD(SkillIdList->max_length) )
            goto LABEL_33;
          if ( !v30 )
            goto LABEL_32;
          *(_DWORD *)(v30 + 16) = m_Items[v25];
          if ( !SkillLevelList )
            goto LABEL_32;
          if ( v25 >= LODWORD(SkillLevelList->max_length) )
            goto LABEL_33;
          v31 = SkillLevelList->m_Items[v25];
          *(_DWORD *)(v30 + 20) = v31;
          *(_DWORD *)(v30 + 24) = SkillEntity__getEffectChargeTurn(v29, v31, 0);
          EffectTitle = SkillEntity__getEffectTitle(v29, 0, 0);
          *(_QWORD *)(v30 + 32) = EffectTitle;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v30 + 32),
            (int32_t)EffectTitle,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          EffectExplanation = SkillEntity__getEffectExplanation(v29, *(_DWORD *)(v30 + 20), 0);
          *(_QWORD *)(v30 + 40) = EffectExplanation;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v30 + 40),
            (int32_t)EffectExplanation,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          v46 = *skillInfoList;
          *(_BYTE *)(v30 + 56) = 1;
          if ( !v46 )
            goto LABEL_32;
          v19 = (BalanceConfig_c *)sub_21FFDA4(v30, v46->obj.klass->_1.element_class);
          if ( !v19 )
          {
            v55 = sub_21FFEF0(0, v47);
            sub_21FFD90(v55, 0);
          }
          if ( v26 >= LODWORD(v46->max_length) )
            goto LABEL_33;
          v54 = &v46->obj.klass + (int)v26++;
          v54[4] = (Il2CppClass *)v30;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v54 + 4), v30, v48, v49, v50, v51, v52, v53);
        }
      }
      ++v25;
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

  if ( (byte_59381B0 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    byte_59381B0 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_21FFD10(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
LABEL_18:
    sub_21FFECC(v4, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_20:
    sub_21FFED4(v4);
  }
  addSkills = this->fields.addSkills;
  v4->_1.byval_arg.bits = this->fields.skillLv3;
  if ( addSkills )
  {
    v9 = 0;
    v10 = 0x300000000LL;
    while ( v9 < SLODWORD(addSkills->max_length) )
    {
      v4 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ImagePartsGroupIdxs_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ImagePartsGroupIdxs_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}