void __fastcall EquipTargetInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB58F9 & 1) == 0 )
  {
    sub_1BAB41C(&EquipTargetInfo_TypeInfo, v1);
    byte_4AB58F9 = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipTargetInfo___ctor_39270360(
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
    sub_1BAB3C0(p_addSkills, (int32_t)addSkills, v5, v6);
    p_addSkills->monitor = (void *)equipTargetInfo->fields.updatedAt;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipTargetInfo___ctor_39270488(
        EquipTargetInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        bool isSetUserId,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  int64_t UserId; // x0
  __int128 v29; // q1
  long double v30; // q0
  _DWORD *v31; // x22
  Il2CppObject *Entity; // x21
  int32_t v33; // w20
  int v34; // w21
  int v35; // w25
  int v36; // w22
  int v37; // w24
  EquipTargetInfo_c *v38; // x8
  int32_t LOT_RATE; // w8
  int32_t v40; // w8
  __int64 v41; // x0
  __int64 v42; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v44; // x21
  __int64 v45; // x22
  ServantSkillMaster_o *v46; // x20
  unsigned int v47; // w8
  int64_t v48; // x20
  __int64 v49; // x9
  __int64 v50; // x9
  __int64 v51; // x9
  System_Collections_Generic_List_object__o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  __int64 i; // x27
  unsigned __int64 v56; // x28
  AddSkillInfoData_o *v57; // x22
  int32_t v58; // w2
  int32_t v59; // w3
  __int64 v60; // x8
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  System_Object_array *v65; // x0
  int32_t v66; // w1
  struct AddSkillInfoData_array **p_addSkills; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68[2]; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4AB58EE & 1) == 0 )
  {
    sub_1BAB41C(&AddSkillInfoData_TypeInfo, *(_QWORD *)&svtId);
    sub_1BAB41C(&BalanceConfig_TypeInfo, v11);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantExpMaster___, v12);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1BAB41C(&EquipTargetInfo_TypeInfo, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__, v18);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__, v19);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__, v20);
    sub_1BAB41C(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo, v21);
    sub_1BAB41C(&NetworkManager_TypeInfo, v22);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_4AB58EE = 1;
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v68, 1LL, 0LL);
  v29 = *(_OWORD *)&v68[0].fields.currentCryptoKey;
  v68[1] = v68[0];
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v68[0].fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId
    || (UserId = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)UserId,
                            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0 )
  {
LABEL_67:
    sub_1BAB678(UserId, v27);
  }
  UserId = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)UserId, svtId, this->fields.limitCount, 0LL);
  v31 = (_DWORD *)UserId;
  if ( level == 1 )
  {
    if ( !UserId )
      goto LABEL_67;
    this->fields.hp = *(_DWORD *)(UserId + 36);
    goto LABEL_29;
  }
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_67;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !UserId )
    goto LABEL_67;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
             svtId,
             (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_67;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity )
    goto LABEL_67;
  if ( !UserId )
    goto LABEL_67;
  UserId = (int64_t)ServantExpMaster__GetEntity((ServantExpMaster_o *)UserId, HIDWORD(Entity[8].klass), level, 0LL);
  if ( !v31 )
    goto LABEL_67;
  v33 = v31[9];
  if ( !UserId )
  {
    this->fields.hp = v33;
LABEL_29:
    v40 = v31[11];
    goto LABEL_30;
  }
  v35 = v31[10];
  v34 = v31[11];
  v36 = v31[12];
  v37 = *(_DWORD *)(UserId + 28);
  v38 = EquipTargetInfo_TypeInfo;
  if ( !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v30 = j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo);
    v38 = EquipTargetInfo_TypeInfo;
  }
  LOT_RATE = v38->static_fields->LOT_RATE;
  this->fields.hp = v37 * (v35 - v33) / LOT_RATE + v33;
  v40 = v37 * (v36 - v34) / LOT_RATE + v34;
LABEL_30:
  this->fields.atk = v40;
  *(_QWORD *)&v30 = 0x100000001LL;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v41 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1BFD2F8(v30);
  v42 = *(_QWORD *)(*(_QWORD *)(v41 + 192) + 16LL);
  if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
    v42 = sub_1BFD2F8(v30);
  UserId = **(_QWORD **)(v42 + 184);
  if ( !UserId )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v45 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v46 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v69.fields.currentCryptoKey = v45;
  *(_QWORD *)&v69.fields.fakeValue = v44;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v69, 0LL);
  if ( !v46 )
    goto LABEL_67;
  UserId = (int64_t)ServantSkillMaster__getUseEntityList(
                      v46,
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
  v47 = *(_DWORD *)(UserId + 24);
  v48 = UserId;
  if ( !v47 )
    goto LABEL_68;
  v49 = *(_QWORD *)(UserId + 32);
  if ( v49 )
    LODWORD(v49) = *(_DWORD *)(v49 + 28);
  this->fields.skillId1 = v49;
  if ( v47 <= 1 )
    goto LABEL_68;
  v50 = *(_QWORD *)(UserId + 40);
  if ( v50 )
    LODWORD(v50) = *(_DWORD *)(v50 + 28);
  this->fields.skillId2 = v50;
  if ( v47 <= 2 )
LABEL_68:
    sub_1BAB680(UserId, v27);
  v51 = *(_QWORD *)(UserId + 48);
  if ( v51 )
    LODWORD(v51) = *(_DWORD *)(v51 + 28);
  this->fields.skillId3 = v51;
  v52 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7LL; ; ++i )
  {
    UserId = (int64_t)BalanceConfig_TypeInfo;
    v56 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      UserId = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v56 >= *(int *)(*(_QWORD *)(UserId + 184) + 44LL) )
      break;
    if ( v56 >= *(unsigned int *)(v48 + 24) )
      goto LABEL_68;
    if ( *(_QWORD *)(v48 + 8 * i) )
    {
      v57 = (AddSkillInfoData_o *)sub_1BAB668(AddSkillInfoData_TypeInfo);
      AddSkillInfoData___ctor(v57, 0LL);
      if ( v56 >= *(unsigned int *)(v48 + 24) )
        goto LABEL_68;
      v60 = *(_QWORD *)(v48 + 8 * i);
      if ( !v60 )
        goto LABEL_67;
      if ( !v57 )
        goto LABEL_67;
      v57->fields.num = *(_DWORD *)(v60 + 20);
      v57->fields.skillId = *(_DWORD *)(v60 + 28);
      if ( !v52 )
        goto LABEL_67;
      items = v52->fields._items;
      v62 = Method_System_Collections_Generic_List_AddSkillInfoData__Add__;
      ++v52->fields._version;
      if ( !items )
        goto LABEL_67;
      size = v52->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)v57,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        v52->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v57;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v57, v58, v59);
      }
    }
  }
  if ( v52 )
  {
    v65 = System_Collections_Generic_List_object___ToArray(
            v52,
            (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    v66 = (int)v65;
    this->fields.addSkills = (struct AddSkillInfoData_array *)v65;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0LL;
    p_addSkills = &this->fields.addSkills;
    v66 = 0;
  }
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_addSkills, v66, v53, v54);
  this->fields.updatedAt = 0LL;
}


System_String_o *__fastcall EquipTargetInfo__GetSvtName(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x19
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4AB58F8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BAB41C(&StringLiteral_1/*""*/, v6);
    byte_4AB58F8 = 1;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v16, 0LL);
  if ( !v13 )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v13,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3163DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
LABEL_11:
    sub_1BAB678(Instance, v9);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EquipTargetInfo__getEventUpVal(
        EquipTargetInfo_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  __int64 v13; // x24
  DataManager_o *Instance; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v17; // x1
  System_Int32_array *SkillIdList; // x24
  const MethodInfo *v19; // x1
  System_Int32_array *SkillLevelList; // x25
  unsigned __int64 i; // x28
  __int64 v22; // x8
  bool v23; // w26
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v25; // x27
  int32_t EventId; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4AB58F5 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4AB58F5 = 1;
  }
  if ( !setupInfo )
    return 0;
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v13;
  *(_QWORD *)&v30.fields.fakeValue = v12;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v30, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1BAB678(Instance, v15);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v17);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v19);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v22 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL);
    v23 = (__int64)i < v22;
    if ( (__int64)i >= v22 )
      break;
    if ( !SkillIdList )
      goto LABEL_23;
    if ( i >= SkillIdList->max_length )
      goto LABEL_24;
    v15 = (const MethodInfo *)(unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v15 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_23;
      if ( i >= SkillLevelList->max_length )
LABEL_24:
        sub_1BAB680(Instance, v15);
      if ( !MasterData_object )
        goto LABEL_23;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)MasterData_object,
                 (int32_t)v15,
                 SkillLevelList->m_Items[i + 1],
                 0LL);
      if ( Entity )
      {
        v25 = Entity;
        EventId = EventUpValSetupInfo__get_EventId(setupInfo, v15);
        if ( SkillLvEntity__getEventUpVal(
               v25,
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
  return v23;
}


bool __fastcall EquipTargetInfo__getEventUpVal_39274920(
        EquipTargetInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isSupport,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x21
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v16; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v18; // x1
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v20; // x25
  bool v21; // w24
  bool v22; // w22
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4AB58F6 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AB58F6 = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v24, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_25;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_25:
    sub_1BAB678(Instance, v13);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v16);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v18);
  v20 = 0LL;
  v21 = 0;
  v22 = isSupport;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v20 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
      return v21;
    if ( !SkillIdList )
      goto LABEL_25;
    if ( v20 >= SkillIdList->max_length )
      goto LABEL_26;
    v13 = (unsigned int)SkillIdList->m_Items[v20 + 1];
    if ( (int)v13 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_25;
      if ( v20 >= SkillLevelList->max_length )
LABEL_26:
        sub_1BAB680(Instance, v13);
      if ( !MasterData_object )
        goto LABEL_25;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)MasterData_object,
                 v13,
                 SkillLevelList->m_Items[v20 + 1],
                 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_40345772(Entity, eventUpVallInfo, 1, 0, v22, 0, 0LL, 0LL) )
          v21 = 1;
      }
    }
    ++v20;
  }
}


bool __fastcall EquipTargetInfo__getExpInfo(
        EquipTargetInfo_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x24
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x24
  __int64 v19; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v22; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v24; // x24
  int m_CancellationTokenSource; // w25
  bool result; // w0
  float v27; // s0
  int v28; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4AB58F7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4AB58F7 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v14;
  *(_QWORD *)&v29.fields.fakeValue = v13;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v29, 0LL) < 1 )
  {
    result = 0;
    v27 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
    v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v19;
    *(_QWORD *)&v30.fields.fakeValue = v18;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v30, 0LL);
    if ( !v20 )
      goto LABEL_25;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v22) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      lv = this->fields.lv;
      v24 = (ServantExpMaster_o *)Instance;
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
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(v24, HIDWORD(Entity[8].klass), this->fields.lv, 0LL);
      *exp = this->fields.exp - m_CancellationTokenSource;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
        v28 = (int)Instance->fields.m_CancellationTokenSource;
        result = 1;
        v27 = (float)*exp / (float)(v28 - m_CancellationTokenSource);
        goto LABEL_24;
      }
LABEL_25:
      sub_1BAB678(Instance, v16);
    }
    *exp = 0;
    *lateExp = 0;
    result = 1;
    v27 = 1.0;
  }
LABEL_24:
  *barExp = v27;
  return result;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpType(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v11; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v13; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v17; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4AB58F4 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AB58F4 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v7;
  *(_QWORD *)&v19.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v19, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1BAB678(Instance, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v11);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v13);
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
      v9 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v9 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_22;
        if ( i >= SkillLevelList->max_length )
LABEL_23:
          sub_1BAB680(Instance, v9);
        if ( !MasterData_object )
          goto LABEL_22;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v9, SkillLevelList->m_Items[i + 1], 0LL);
        if ( Entity )
        {
          v17 = Entity;
          if ( SkillLvEntity__getFriendPointUpVal(Entity, 0LL) >= 1 )
            return SkillLvEntity__getFriendPointUpType(v17, 0LL);
        }
      }
    }
  }
  return 0;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpVal(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v11; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v13; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4AB58F3 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AB58F3 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v18, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1BAB678(Instance, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v11);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v13);
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
      v9 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v9 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_22;
        if ( i >= SkillLevelList->max_length )
LABEL_23:
          sub_1BAB680(Instance, v9);
        if ( !MasterData_object )
          goto LABEL_22;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v9, SkillLevelList->m_Items[i + 1], 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  ServantLimitMaster_o *v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4AB58EF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4AB58EF = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v14, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v15, 0LL);
  if ( !v12 || (Instance = ServantLimitMaster__GetEntity(v12, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_13:
    sub_1BAB678(Instance, v8);
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall EquipTargetInfo__getServantLevel(EquipTargetInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillIdList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v8; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v10; // x22
  __int64 v11; // x23
  AddSkillInfoData_o *v12; // x10

  if ( (byte_4AB58F0 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&int___TypeInfo, v3);
    byte_4AB58F0 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1BAB4C4(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
LABEL_21:
    sub_1BAB678(v5, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_23:
    sub_1BAB680(v5, v6);
  }
  v5->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v10 = 0LL;
    v11 = 0x300000000LL;
    while ( (__int64)v10 < (int)addSkills->max_length )
    {
      v5 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v5 = BalanceConfig_TypeInfo;
      }
      addSkills = this->fields.addSkills;
      if ( v5->static_fields->SvtEquipSkillListMax > (int)v10 + 3 )
      {
        if ( !addSkills )
          goto LABEL_21;
        if ( v10 >= addSkills->max_length )
          goto LABEL_23;
        v12 = addSkills->m_Items[v10];
        if ( !v12 )
          goto LABEL_21;
        if ( v10 + 3 >= v8->max_length )
          goto LABEL_23;
        *(int32_t *)((char *)&v8->m_Items[1] + (v11 >> 30)) = v12->fields.skillId;
      }
      ++v10;
      v11 += 0x100000000LL;
      if ( !addSkills )
        goto LABEL_21;
    }
  }
  return v8;
}


void __fastcall EquipTargetInfo__getSkillInfo(
        EquipTargetInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0
  SkillInfo_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x20
  __int64 v15; // x21
  __int64 v16; // x1
  long double v17; // q0
  __int64 v18; // x0
  __int64 v19; // x0
  BalanceConfig_c *v20; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v22; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v24; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v26; // x28
  il2cpp_array_size_t v27; // w19
  int32_t *v28; // x29
  Il2CppObject *Entity; // x0
  SkillEntity_o *v30; // x24
  __int64 v31; // x23
  int32_t v32; // w1
  System_String_o *EffectTitle; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *EffectExplanation; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  SkillInfo_array *v39; // x24
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppClass **v42; // x0
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4AB58F2 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_1BAB41C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_1BAB41C(&SkillInfo___TypeInfo, v8);
    sub_1BAB41C(&SkillInfo_TypeInfo, v9);
    byte_4AB58F2 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (SkillInfo_array *)sub_1BAB4C4(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v11;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v11, v12, v13);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v15;
  *(_QWORD *)&v45.fields.fakeValue = v14;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v45, 0LL) >= 1 )
  {
    v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1BFD2F8(v17);
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1BFD2F8(v17);
    v20 = **(BalanceConfig_c ***)(v19 + 184);
    if ( !v20 )
LABEL_32:
      sub_1BAB678(v20, v16);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v20,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v22);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v24);
    v26 = 0LL;
    v27 = 0;
    v28 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      v20 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v20 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v26 >= v20->static_fields->SvtEquipSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_32;
      if ( v26 >= SkillIdList->max_length )
LABEL_33:
        sub_1BAB680(v20, v16);
      v16 = (unsigned int)v28[v26];
      if ( (int)v16 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_32;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v16,
                   (const MethodInfo_3163D90 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v30 = (SkillEntity_o *)Entity;
          v31 = sub_1BAB668(SkillInfo_TypeInfo);
          SkillInfo___ctor((SkillInfo_o *)v31, 0LL);
          if ( v26 >= SkillIdList->max_length )
            goto LABEL_33;
          if ( !v31 )
            goto LABEL_32;
          *(_DWORD *)(v31 + 16) = v28[v26];
          if ( !SkillLevelList )
            goto LABEL_32;
          if ( v26 >= SkillLevelList->max_length )
            goto LABEL_33;
          v32 = SkillLevelList->m_Items[v26 + 1];
          *(_DWORD *)(v31 + 20) = v32;
          *(_DWORD *)(v31 + 24) = SkillEntity__getEffectChargeTurn(v30, v32, 0LL);
          EffectTitle = SkillEntity__getEffectTitle(v30, 0, 0LL);
          *(_QWORD *)(v31 + 32) = EffectTitle;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)EffectTitle, v34, v35);
          EffectExplanation = SkillEntity__getEffectExplanation(v30, *(_DWORD *)(v31 + 20), 0LL);
          *(_QWORD *)(v31 + 40) = EffectExplanation;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v31 + 40), (int32_t)EffectExplanation, v37, v38);
          *(_BYTE *)(v31 + 56) = 1;
          v39 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_32;
          v20 = (BalanceConfig_c *)sub_1BAB558(v31, v39->obj.klass->_1.element_class);
          if ( !v20 )
          {
            v43 = sub_1BAB69C(0LL);
            sub_1BAB544(v43, 0LL);
          }
          if ( v27 >= v39->max_length )
            goto LABEL_33;
          v42 = &v39->obj.klass + (int)v27;
          v42[4] = (Il2CppClass *)v31;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v42 + 4), v31, v40, v41);
          ++v27;
        }
      }
      ++v26;
    }
  }
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v8; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v10; // x25
  __int64 v11; // x22

  if ( (byte_4AB58F1 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&int___TypeInfo, v3);
    byte_4AB58F1 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1BAB4C4(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
LABEL_18:
    sub_1BAB678(v5, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_20:
    sub_1BAB680(v5, v6);
  }
  v5->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v10 = 0LL;
    v11 = 0x300000000LL;
    while ( v10 < (int)addSkills->max_length )
    {
      v5 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v5 = BalanceConfig_TypeInfo;
      }
      if ( v5->static_fields->SvtEquipSkillListMax > (int)v10 + 3 )
      {
        if ( v10 + 3 >= (unsigned __int64)v8->max_length )
          goto LABEL_20;
        *(int32_t *)((char *)&v8->m_Items[1] + (v11 >> 30)) = 1;
      }
      addSkills = this->fields.addSkills;
      v11 += 0x100000000LL;
      ++v10;
      if ( !addSkills )
        goto LABEL_18;
    }
  }
  return v8;
}