void __fastcall EquipTargetInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4A5AD0C & 1) == 0 )
  {
    sub_1B885B0(&EquipTargetInfo_TypeInfo);
    byte_4A5AD0C = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipTargetInfo___ctor_38882712(
        EquipTargetInfo_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  __int128 v7; // q1
  struct AddSkillInfoData_array *addSkills; // x1
  ServantStatusBattleListViewItem_o *p_addSkills; // x20

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( equipTargetInfo )
  {
    this->fields.userId = equipTargetInfo->fields.userId;
    v7 = *(_OWORD *)&equipTargetInfo->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&equipTargetInfo->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v7;
    this->fields.svtId = equipTargetInfo->fields.svtId;
    *(_OWORD *)&this->fields.limitCount = *(_OWORD *)&equipTargetInfo->fields.limitCount;
    *(_OWORD *)&this->fields.atk = *(_OWORD *)&equipTargetInfo->fields.atk;
    *(_QWORD *)&this->fields.skillLv1 = *(_QWORD *)&equipTargetInfo->fields.skillLv1;
    this->fields.skillLv3 = equipTargetInfo->fields.skillLv3;
    addSkills = equipTargetInfo->fields.addSkills;
    this->fields.addSkills = addSkills;
    p_addSkills = (ServantStatusBattleListViewItem_o *)&this->fields.addSkills;
    sub_1B88554(p_addSkills, (int32_t)addSkills, v5, v6);
    p_addSkills->monitor = (void *)equipTargetInfo->fields.updatedAt;
  }
}


void __fastcall EquipTargetInfo___ctor_38882840(
        EquipTargetInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        bool isSetUserId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  int64_t UserId; // x0
  __int128 v13; // q1
  _DWORD *v14; // x22
  Il2CppObject *Entity; // x21
  int32_t v16; // w20
  int v17; // w21
  int v18; // w25
  int v19; // w22
  int v20; // w24
  EquipTargetInfo_c *v21; // x8
  int32_t LOT_RATE; // w8
  int32_t v23; // w8
  __int64 v24; // x0
  __int64 v25; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v27; // x21
  __int64 v28; // x22
  ServantSkillMaster_o *v29; // x20
  unsigned int v30; // w8
  int64_t v31; // x20
  __int64 v32; // x9
  __int64 v33; // x9
  __int64 v34; // x9
  System_Collections_Generic_List_object__o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 i; // x27
  unsigned __int64 v39; // x28
  AddSkillInfoData_o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x8
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Object_array *v48; // x0
  int32_t v49; // w1
  struct AddSkillInfoData_array **p_addSkills; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51[2]; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4A5AD01 & 1) == 0 )
  {
    sub_1B885B0(&AddSkillInfoData_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&EquipTargetInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD01 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( isSetUserId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
  }
  else
  {
    UserId = 1LL;
  }
  if ( !this )
    goto LABEL_67;
  this->fields.userId = UserId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v51, 1LL, 0LL);
  v13 = *(_OWORD *)&v51[0].fields.currentCryptoKey;
  v51[1] = v51[0];
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v51[0].fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId
    || (UserId = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)UserId,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0 )
  {
LABEL_67:
    sub_1B8880C(UserId, v11);
  }
  UserId = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)UserId, svtId, this->fields.limitCount, 0LL);
  v14 = (_DWORD *)UserId;
  if ( level == 1 )
  {
    if ( !UserId )
      goto LABEL_67;
    this->fields.hp = *(_DWORD *)(UserId + 36);
    goto LABEL_29;
  }
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_67;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !UserId )
    goto LABEL_67;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
             svtId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_67;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity )
    goto LABEL_67;
  if ( !UserId )
    goto LABEL_67;
  UserId = (int64_t)ServantExpMaster__GetEntity((ServantExpMaster_o *)UserId, HIDWORD(Entity[8].klass), level, 0LL);
  if ( !v14 )
    goto LABEL_67;
  v16 = v14[9];
  if ( !UserId )
  {
    this->fields.hp = v16;
LABEL_29:
    v23 = v14[11];
    goto LABEL_30;
  }
  v18 = v14[10];
  v17 = v14[11];
  v19 = v14[12];
  v20 = *(_DWORD *)(UserId + 28);
  v21 = EquipTargetInfo_TypeInfo;
  if ( !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo);
    v21 = EquipTargetInfo_TypeInfo;
  }
  LOT_RATE = v21->static_fields->LOT_RATE;
  this->fields.hp = v20 * (v18 - v16) / LOT_RATE + v16;
  v23 = v20 * (v19 - v17) / LOT_RATE + v17;
LABEL_30:
  this->fields.atk = v23;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1BDA48C(v24);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BDA48C(v25);
  UserId = **(_QWORD **)(v25 + 184);
  if ( !UserId )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v29 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v28;
  *(_QWORD *)&v52.fields.fakeValue = v27;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v52, 0LL);
  if ( !v29 )
    goto LABEL_67;
  UserId = (int64_t)ServantSkillMaster__getUseEntityList(
                      v29,
                      UserId,
                      this->fields.userId,
                      this->fields.lv,
                      this->fields.limitCount,
                      -1,
                      -1,
                      -1LL,
                      0LL);
  if ( !UserId )
    goto LABEL_67;
  v30 = *(_DWORD *)(UserId + 24);
  v31 = UserId;
  if ( !v30 )
    goto LABEL_68;
  v32 = *(_QWORD *)(UserId + 32);
  if ( v32 )
    LODWORD(v32) = *(_DWORD *)(v32 + 28);
  this->fields.skillId1 = v32;
  if ( v30 <= 1 )
    goto LABEL_68;
  v33 = *(_QWORD *)(UserId + 40);
  if ( v33 )
    LODWORD(v33) = *(_DWORD *)(v33 + 28);
  this->fields.skillId2 = v33;
  if ( v30 <= 2 )
LABEL_68:
    sub_1B88814(UserId, v11);
  v34 = *(_QWORD *)(UserId + 48);
  if ( v34 )
    LODWORD(v34) = *(_DWORD *)(v34 + 28);
  this->fields.skillId3 = v34;
  v35 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7LL; ; ++i )
  {
    UserId = (int64_t)BalanceConfig_TypeInfo;
    v39 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      UserId = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v39 >= *(int *)(*(_QWORD *)(UserId + 184) + 44LL) )
      break;
    if ( v39 >= *(unsigned int *)(v31 + 24) )
      goto LABEL_68;
    if ( *(_QWORD *)(v31 + 8 * i) )
    {
      v40 = (AddSkillInfoData_o *)sub_1B887FC(AddSkillInfoData_TypeInfo);
      AddSkillInfoData___ctor(v40, 0LL);
      if ( v39 >= *(unsigned int *)(v31 + 24) )
        goto LABEL_68;
      v43 = *(_QWORD *)(v31 + 8 * i);
      if ( !v43 )
        goto LABEL_67;
      if ( !v40 )
        goto LABEL_67;
      v40->fields.num = *(_DWORD *)(v43 + 20);
      v40->fields.skillId = *(_DWORD *)(v43 + 28);
      if ( !v35 )
        goto LABEL_67;
      items = v35->fields._items;
      v45 = Method_System_Collections_Generic_List_AddSkillInfoData__Add__;
      ++v35->fields._version;
      if ( !items )
        goto LABEL_67;
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          (Il2CppObject *)v40,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v40;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v40, v41, v42);
      }
    }
  }
  if ( v35 )
  {
    v48 = System_Collections_Generic_List_object___ToArray(
            v35,
            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    v49 = (int)v48;
    this->fields.addSkills = (struct AddSkillInfoData_array *)v48;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0LL;
    p_addSkills = &this->fields.addSkills;
    v49 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_addSkills, v49, v36, v37);
  this->fields.updatedAt = 0LL;
}


System_String_o *__fastcall EquipTargetInfo__GetSvtName(EquipTargetInfo_o *this, const MethodInfo *method)
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

  if ( (byte_4A5AD0B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AD0B = 1;
  }
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  if ( !v9 )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v9,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
LABEL_11:
    sub_1B8880C(Instance, v5);
  }
  return v3;
}


bool __fastcall EquipTargetInfo__getEventUpVal(
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

  if ( (byte_4A5AD08 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD08 = 1;
  }
  if ( !setupInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v10;
  *(_QWORD *)&v27.fields.fakeValue = v9;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1B8880C(Instance, v12);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v14);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v16);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v19 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL);
    v20 = (__int64)i < v19;
    if ( (__int64)i >= v19 )
      break;
    if ( !SkillIdList )
      goto LABEL_23;
    if ( i >= SkillIdList->max_length )
      goto LABEL_24;
    v12 = (const MethodInfo *)(unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v12 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_23;
      if ( i >= SkillLevelList->max_length )
LABEL_24:
        sub_1B88814(Instance, v12);
      if ( !MasterData_object )
        goto LABEL_23;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)MasterData_object,
                 (int32_t)v12,
                 SkillLevelList->m_Items[i + 1],
                 0LL);
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
               0LL) )
        {
          break;
        }
      }
    }
  }
  return v20;
}


bool __fastcall EquipTargetInfo__getEventUpVal_38887272(
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

  if ( (byte_4A5AD09 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD09 = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v8;
  *(_QWORD *)&v21.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_25;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_25:
    sub_1B8880C(Instance, v10);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v13);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v15);
  v17 = 0LL;
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
    if ( (__int64)v17 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
      return v18;
    if ( !SkillIdList )
      goto LABEL_25;
    if ( v17 >= SkillIdList->max_length )
      goto LABEL_26;
    v10 = (unsigned int)SkillIdList->m_Items[v17 + 1];
    if ( (int)v10 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_25;
      if ( v17 >= SkillLevelList->max_length )
LABEL_26:
        sub_1B88814(Instance, v10);
      if ( !MasterData_object )
        goto LABEL_25;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)MasterData_object,
                 v10,
                 SkillLevelList->m_Items[v17 + 1],
                 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_39954432(Entity, eventUpVallInfo, 1, 0, v19, 0, 0LL, 0LL) )
          v18 = 1;
      }
    }
    ++v17;
  }
}


bool __fastcall EquipTargetInfo__getExpInfo(
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

  if ( (byte_4A5AD0A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD0A = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v10;
  *(_QWORD *)&v25.fields.fakeValue = v9;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL) < 1 )
  {
    result = 0;
    v23 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = v15;
    *(_QWORD *)&v26.fields.fakeValue = v14;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26, 0LL);
    if ( !v16 )
      goto LABEL_25;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v16,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v18) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
                                      0LL);
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
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(v20, HIDWORD(Entity[8].klass), this->fields.lv, 0LL);
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
      sub_1B8880C(Instance, v12);
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


int32_t __fastcall EquipTargetInfo__getFriendPointUpType(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v8; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v10; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5AD07 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD07 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v4;
  *(_QWORD *)&v16.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1B8880C(Instance, v6);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v8);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v10);
    for ( i = 0LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_22;
      if ( i >= SkillIdList->max_length )
        goto LABEL_23;
      v6 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v6 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_22;
        if ( i >= SkillLevelList->max_length )
LABEL_23:
          sub_1B88814(Instance, v6);
        if ( !MasterData_object )
          goto LABEL_22;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v6, SkillLevelList->m_Items[i + 1], 0LL);
        if ( Entity )
        {
          v14 = Entity;
          if ( SkillLvEntity__getFriendPointUpVal(Entity, 0LL) >= 1 )
            return SkillLvEntity__getFriendPointUpType(v14, 0LL);
        }
      }
    }
  }
  return 0;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpVal(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v8; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v10; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5AD06 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD06 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v4;
  *(_QWORD *)&v15.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1B8880C(Instance, v6);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v8);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v10);
    for ( i = 0LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_22;
      if ( i >= SkillIdList->max_length )
        goto LABEL_23;
      v6 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v6 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_22;
        if ( i >= SkillLevelList->max_length )
LABEL_23:
          sub_1B88814(Instance, v6);
        if ( !MasterData_object )
          goto LABEL_22;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v6, SkillLevelList->m_Items[i + 1], 0LL);
        if ( Entity )
        {
          result = SkillLvEntity__getFriendPointUpVal(Entity, 0LL);
          if ( result > 0 )
            return result;
        }
      }
    }
  }
  return 0;
}


int32_t __fastcall EquipTargetInfo__getLevelMax(EquipTargetInfo_o *this, const MethodInfo *method)
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

  if ( (byte_4A5AD02 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD02 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v4;
  *(_QWORD *)&v12.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !v10 || (Instance = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_13:
    sub_1B8880C(Instance, v6);
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall EquipTargetInfo__getServantLevel(EquipTargetInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillIdList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v7; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v9; // x22
  __int64 v10; // x23
  AddSkillInfoData_o *v11; // x10

  if ( (byte_4A5AD03 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5AD03 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1B88658(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
LABEL_21:
    sub_1B8880C(v4, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = (System_Int32_array *)v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_23:
    sub_1B88814(v4, v5);
  }
  v4->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v9 = 0LL;
    v10 = 0x300000000LL;
    while ( (__int64)v9 < (int)addSkills->max_length )
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
        if ( v9 >= addSkills->max_length )
          goto LABEL_23;
        v11 = addSkills->m_Items[v9];
        if ( !v11 )
          goto LABEL_21;
        if ( v9 + 3 >= v7->max_length )
          goto LABEL_23;
        *(int32_t *)((char *)&v7->m_Items[1] + (v10 >> 30)) = v11->fields.skillId;
      }
      ++v9;
      v10 += 0x100000000LL;
      if ( !addSkills )
        goto LABEL_21;
    }
  }
  return v7;
}


void __fastcall EquipTargetInfo__getSkillInfo(
        EquipTargetInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  SkillInfo_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x0
  BalanceConfig_c *v13; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v15; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v17; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v19; // x28
  il2cpp_array_size_t v20; // w19
  int32_t *v21; // x29
  Il2CppObject *Entity; // x0
  SkillEntity_o *v23; // x24
  __int64 v24; // x23
  int32_t v25; // w1
  System_String_o *EffectTitle; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *EffectExplanation; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  SkillInfo_array *v32; // x24
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppClass **v35; // x0
  __int64 v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A5AD05 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&SkillInfo___TypeInfo);
    sub_1B885B0(&SkillInfo_TypeInfo);
    byte_4A5AD05 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (SkillInfo_array *)sub_1B88658(SkillInfo___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v5, v6, v7);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v9;
  *(_QWORD *)&v38.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL) >= 1 )
  {
    v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BDA48C(v11);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BDA48C(v12);
    v13 = **(BalanceConfig_c ***)(v12 + 184);
    if ( !v13 )
LABEL_32:
      sub_1B8880C(v13, v10);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v13,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v15);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v17);
    v19 = 0LL;
    v20 = 0;
    v21 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v19 >= v13->static_fields->SvtEquipSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_32;
      if ( v19 >= SkillIdList->max_length )
LABEL_33:
        sub_1B88814(v13, v10);
      v10 = (unsigned int)v21[v19];
      if ( (int)v10 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_32;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v10,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v23 = (SkillEntity_o *)Entity;
          v24 = sub_1B887FC(SkillInfo_TypeInfo);
          SkillInfo___ctor((SkillInfo_o *)v24, 0LL);
          if ( v19 >= SkillIdList->max_length )
            goto LABEL_33;
          if ( !v24 )
            goto LABEL_32;
          *(_DWORD *)(v24 + 16) = v21[v19];
          if ( !SkillLevelList )
            goto LABEL_32;
          if ( v19 >= SkillLevelList->max_length )
            goto LABEL_33;
          v25 = SkillLevelList->m_Items[v19 + 1];
          *(_DWORD *)(v24 + 20) = v25;
          *(_DWORD *)(v24 + 24) = SkillEntity__getEffectChargeTurn(v23, v25, 0LL);
          EffectTitle = SkillEntity__getEffectTitle(v23, 0, 0LL);
          *(_QWORD *)(v24 + 32) = EffectTitle;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)EffectTitle, v27, v28);
          EffectExplanation = SkillEntity__getEffectExplanation(v23, *(_DWORD *)(v24 + 20), 0LL);
          *(_QWORD *)(v24 + 40) = EffectExplanation;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 40), (int32_t)EffectExplanation, v30, v31);
          *(_BYTE *)(v24 + 56) = 1;
          v32 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_32;
          v13 = (BalanceConfig_c *)sub_1B886EC(v24, v32->obj.klass->_1.element_class);
          if ( !v13 )
          {
            v36 = sub_1B88830(0LL);
            sub_1B886D8(v36, 0LL);
          }
          if ( v20 >= v32->max_length )
            goto LABEL_33;
          v35 = &v32->obj.klass + (int)v20;
          v35[4] = (Il2CppClass *)v24;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), v24, v33, v34);
          ++v20;
        }
      }
      ++v19;
    }
  }
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v7; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v9; // x25
  __int64 v10; // x22

  if ( (byte_4A5AD04 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5AD04 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1B88658(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
LABEL_18:
    sub_1B8880C(v4, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = (System_Int32_array *)v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_20:
    sub_1B88814(v4, v5);
  }
  v4->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v9 = 0LL;
    v10 = 0x300000000LL;
    while ( v9 < (int)addSkills->max_length )
    {
      v4 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      if ( v4->static_fields->SvtEquipSkillListMax > (int)v9 + 3 )
      {
        if ( v9 + 3 >= (unsigned __int64)v7->max_length )
          goto LABEL_20;
        *(int32_t *)((char *)&v7->m_Items[1] + (v10 >> 30)) = 1;
      }
      addSkills = this->fields.addSkills;
      v10 += 0x100000000LL;
      ++v9;
      if ( !addSkills )
        goto LABEL_18;
    }
  }
  return v7;
}