void __fastcall EquipTargetInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BC7645 & 1) == 0 )
  {
    sub_1C1ABD4(&EquipTargetInfo_TypeInfo, v1);
    byte_4BC7645 = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipTargetInfo___ctor_40095316(
        EquipTargetInfo_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int128 v11; // q1
  struct AddSkillInfoData_array *addSkills; // x1
  PartyOrganizationUtility_o *p_addSkills; // x20

  System_Object___ctor((Il2CppObject *)this, 0LL);
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
    p_addSkills = (PartyOrganizationUtility_o *)&this->fields.addSkills;
    sub_1C1AB78(p_addSkills, (int64_t)addSkills, v5, v6, v7, v8, v9, v10);
    p_addSkills->monitor = (void *)equipTargetInfo->fields.updatedAt;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipTargetInfo___ctor_40095444(
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
  void *Instance; // x0
  __int64 v28; // x1
  int64_t v29; // x8
  __int128 v30; // q1
  long double inited; // q0
  _DWORD *v32; // x22
  Il2CppObject *Entity; // x21
  int32_t v34; // w20
  int v35; // w21
  int v36; // w25
  int v37; // w22
  int v38; // w24
  EquipTargetInfo_c *v39; // x8
  int32_t LOT_RATE; // w8
  int32_t v41; // w8
  __int64 v42; // x0
  __int64 v43; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v45; // x21
  __int64 v46; // x22
  ServantSkillMaster_o *v47; // x20
  unsigned int v48; // w8
  _QWORD *v49; // x20
  __int64 v50; // x9
  __int64 v51; // x9
  __int64 v52; // x9
  System_Collections_Generic_List_object__o *v53; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 i; // x27
  unsigned __int64 v61; // x28
  AddSkillInfoData_o *v62; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x8
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Object_array *v74; // x1
  struct AddSkillInfoData_array **p_addSkills; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76[2]; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4BC763A & 1) == 0 )
  {
    sub_1C1ABD4(&AddSkillInfoData_TypeInfo, *(_QWORD *)&svtId);
    sub_1C1ABD4(&BalanceConfig_TypeInfo, v11);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantExpMaster___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1C1ABD4(&EquipTargetInfo_TypeInfo, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__, v20);
    sub_1C1ABD4(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo, v21);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v22);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_4BC763A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( isSetUserId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, v28);
      byte_4BC2585 = 1;
    }
    Instance = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager_TypeInfo;
    }
    v29 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
  }
  else
  {
    v29 = 1LL;
  }
  if ( !this )
    goto LABEL_71;
  this->fields.userId = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v76, 1LL, 0LL);
  v30 = *(_OWORD *)&v76[0].fields.currentCryptoKey;
  v76[1] = v76[0];
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v76[0].fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL )
  {
LABEL_71:
    sub_1C1AE30(Instance, v28);
  }
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0LL);
  v32 = Instance;
  if ( level == 1 )
  {
    if ( !Instance )
      goto LABEL_71;
    this->fields.hp = *((_DWORD *)Instance + 9);
    goto LABEL_33;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity )
    goto LABEL_71;
  if ( !Instance )
    goto LABEL_71;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, HIDWORD(Entity[8].klass), level, 0LL);
  if ( !v32 )
    goto LABEL_71;
  v34 = v32[9];
  if ( !Instance )
  {
    this->fields.hp = v34;
LABEL_33:
    v41 = v32[11];
    goto LABEL_34;
  }
  v36 = v32[10];
  v35 = v32[11];
  v37 = v32[12];
  v38 = *((_DWORD *)Instance + 7);
  v39 = EquipTargetInfo_TypeInfo;
  if ( !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo);
    v39 = EquipTargetInfo_TypeInfo;
  }
  LOT_RATE = v39->static_fields->LOT_RATE;
  this->fields.hp = v38 * (v36 - v34) / LOT_RATE + v34;
  v41 = v38 * (v37 - v35) / LOT_RATE + v35;
LABEL_34:
  this->fields.atk = v41;
  *(_QWORD *)&inited = 0x100000001LL;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v42 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
    v42 = sub_1C6CAB0(inited);
  v43 = *(_QWORD *)(*(_QWORD *)(v42 + 192) + 16LL);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C6CAB0(inited);
  Instance = **(void ***)(v43 + 184);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v46 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v47 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v77.fields.currentCryptoKey = v46;
  *(_QWORD *)&v77.fields.fakeValue = v45;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v77, 0LL);
  if ( !v47 )
    goto LABEL_71;
  Instance = ServantSkillMaster__getUseEntityList(
               v47,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               -1,
               -1,
               -1LL,
               0LL);
  if ( !Instance )
    goto LABEL_71;
  v48 = *((_DWORD *)Instance + 6);
  v49 = Instance;
  if ( !v48 )
    goto LABEL_72;
  v50 = *((_QWORD *)Instance + 4);
  if ( v50 )
    LODWORD(v50) = *(_DWORD *)(v50 + 28);
  this->fields.skillId1 = v50;
  if ( v48 <= 1 )
    goto LABEL_72;
  v51 = *((_QWORD *)Instance + 5);
  if ( v51 )
    LODWORD(v51) = *(_DWORD *)(v51 + 28);
  this->fields.skillId2 = v51;
  if ( v48 <= 2 )
LABEL_72:
    sub_1C1AE38(Instance, v28);
  v52 = *((_QWORD *)Instance + 6);
  if ( v52 )
    LODWORD(v52) = *(_DWORD *)(v52 + 28);
  this->fields.skillId3 = v52;
  v53 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7LL; ; ++i )
  {
    Instance = BalanceConfig_TypeInfo;
    v61 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v61 >= *(int *)(*((_QWORD *)Instance + 23) + 44LL) )
      break;
    if ( v61 >= *((unsigned int *)v49 + 6) )
      goto LABEL_72;
    if ( v49[i] )
    {
      v62 = (AddSkillInfoData_o *)sub_1C1AE20(AddSkillInfoData_TypeInfo);
      AddSkillInfoData___ctor(v62, 0LL);
      if ( v61 >= *((unsigned int *)v49 + 6) )
        goto LABEL_72;
      v69 = v49[i];
      if ( !v69 )
        goto LABEL_71;
      if ( !v62 )
        goto LABEL_71;
      v62->fields.num = *(_DWORD *)(v69 + 20);
      v62->fields.skillId = *(_DWORD *)(v69 + 28);
      if ( !v53 )
        goto LABEL_71;
      items = v53->fields._items;
      v71 = Method_System_Collections_Generic_List_AddSkillInfoData__Add__;
      ++v53->fields._version;
      if ( !items )
        goto LABEL_71;
      size = v53->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v53,
          (Il2CppObject *)v62,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = &items->obj.klass + size;
        v53->fields._size = size + 1;
        v73[4] = (Il2CppClass *)v62;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v73 + 4), (int64_t)v62, v63, v64, v65, v66, v67, v68);
      }
    }
  }
  if ( v53 )
  {
    v74 = System_Collections_Generic_List_object___ToArray(
            v53,
            (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    this->fields.addSkills = (struct AddSkillInfoData_array *)v74;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0LL;
    p_addSkills = &this->fields.addSkills;
    v74 = 0LL;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)p_addSkills, (int64_t)v74, v54, v55, v56, v57, v58, v59);
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

  if ( (byte_4BC7644 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v6);
    byte_4BC7644 = 1;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v16, 0LL);
  if ( !v13 )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v13,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0, 0LL);
LABEL_11:
    sub_1C1AE30(Instance, v9);
  }
  return v7;
}


void __fastcall EquipTargetInfo__SetImagePartsGroupIdxs(
        EquipTargetInfo_o *this,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ImagePartsGroupIdxs_k__BackingField = imagePartsGroupIdxs;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._ImagePartsGroupIdxs_k__BackingField,
    (int64_t)imagePartsGroupIdxs,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BC7641 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BC7641 = 1;
  }
  if ( !setupInfo )
    return 0;
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v13;
  *(_QWORD *)&v30.fields.fakeValue = v12;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v30, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1C1AE30(Instance, v15);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
        sub_1C1AE38(Instance, v15);
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


bool __fastcall EquipTargetInfo__getEventUpVal_40099928(
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

  if ( (byte_4BC7642 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC7642 = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v24, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_25;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_25:
    sub_1C1AE30(Instance, v13);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
        sub_1C1AE38(Instance, v13);
      if ( !MasterData_object )
        goto LABEL_25;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)MasterData_object,
                 v13,
                 SkillLevelList->m_Items[v20 + 1],
                 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_41173348(Entity, eventUpVallInfo, 1, 0, v22, 0, 0LL, 0LL) )
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

  if ( (byte_4BC7643 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BC7643 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v14;
  *(_QWORD *)&v29.fields.fakeValue = v13;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v29, 0LL) < 1 )
  {
    result = 0;
    v27 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
    v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v19;
    *(_QWORD *)&v30.fields.fakeValue = v18;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v30, 0LL);
    if ( !v20 )
      goto LABEL_25;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v22) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
      sub_1C1AE30(Instance, v16);
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

  if ( (byte_4BC7640 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC7640 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v7;
  *(_QWORD *)&v19.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v19, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1C1AE30(Instance, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          sub_1C1AE38(Instance, v9);
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

  if ( (byte_4BC763F & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC763F = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v18, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1C1AE30(Instance, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          sub_1C1AE38(Instance, v9);
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

  if ( (byte_4BC763B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC763B = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v14, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v15, 0LL);
  if ( !v12 || (Instance = ServantLimitMaster__GetEntity(v12, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_13:
    sub_1C1AE30(Instance, v8);
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

  if ( (byte_4BC763C & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&int___TypeInfo, v3);
    byte_4BC763C = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1C1AC7C(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
LABEL_21:
    sub_1C1AE30(v5, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_23:
    sub_1C1AE38(v5, v6);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x20
  __int64 v19; // x21
  __int64 v20; // x1
  long double v21; // q0
  __int64 v22; // x0
  __int64 v23; // x0
  BalanceConfig_c *v24; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v26; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v28; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v30; // x28
  il2cpp_array_size_t v31; // w19
  int32_t *v32; // x29
  Il2CppObject *Entity; // x0
  SkillEntity_o *v34; // x24
  int64_t v35; // x23
  int32_t v36; // w1
  System_String_o *EffectTitle; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_String_o *EffectExplanation; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  SkillInfo_array *v51; // x24
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppClass **v58; // x0
  __int64 v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4BC763E & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_1C1ABD4(&SkillInfo___TypeInfo, v8);
    sub_1C1ABD4(&SkillInfo_TypeInfo, v9);
    byte_4BC763E = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (SkillInfo_array *)sub_1C1AC7C(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v11;
  sub_1C1AB78((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v19;
  *(_QWORD *)&v61.fields.fakeValue = v18;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v61, 0LL) >= 1 )
  {
    v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C6CAB0(v21);
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C6CAB0(v21);
    v24 = **(BalanceConfig_c ***)(v23 + 184);
    if ( !v24 )
LABEL_32:
      sub_1C1AE30(v24, v20);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v24,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v26);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v28);
    v30 = 0LL;
    v31 = 0;
    v32 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      v24 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v24 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v30 >= v24->static_fields->SvtEquipSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_32;
      if ( v30 >= SkillIdList->max_length )
LABEL_33:
        sub_1C1AE38(v24, v20);
      v20 = (unsigned int)v32[v30];
      if ( (int)v20 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_32;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v20,
                   (const MethodInfo_3248678 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v34 = (SkillEntity_o *)Entity;
          v35 = sub_1C1AE20(SkillInfo_TypeInfo);
          SkillInfo___ctor((SkillInfo_o *)v35, 0LL);
          if ( v30 >= SkillIdList->max_length )
            goto LABEL_33;
          if ( !v35 )
            goto LABEL_32;
          *(_DWORD *)(v35 + 16) = v32[v30];
          if ( !SkillLevelList )
            goto LABEL_32;
          if ( v30 >= SkillLevelList->max_length )
            goto LABEL_33;
          v36 = SkillLevelList->m_Items[v30 + 1];
          *(_DWORD *)(v35 + 20) = v36;
          *(_DWORD *)(v35 + 24) = SkillEntity__getEffectChargeTurn(v34, v36, 0LL);
          EffectTitle = SkillEntity__getEffectTitle(v34, 0, 0LL);
          *(_QWORD *)(v35 + 32) = EffectTitle;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)EffectTitle, v38, v39, v40, v41, v42, v43);
          EffectExplanation = SkillEntity__getEffectExplanation(v34, *(_DWORD *)(v35 + 20), 0LL);
          *(_QWORD *)(v35 + 40) = EffectExplanation;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)(v35 + 40),
            (int64_t)EffectExplanation,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50);
          *(_BYTE *)(v35 + 56) = 1;
          v51 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_32;
          v24 = (BalanceConfig_c *)sub_1C1AD10(v35, v51->obj.klass->_1.element_class);
          if ( !v24 )
          {
            v59 = sub_1C1AE54(0LL);
            sub_1C1ACFC(v59, 0LL);
          }
          if ( v31 >= v51->max_length )
            goto LABEL_33;
          v58 = &v51->obj.klass + (int)v31;
          v58[4] = (Il2CppClass *)v35;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v58 + 4), v35, v52, v53, v54, v55, v56, v57);
          ++v31;
        }
      }
      ++v30;
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

  if ( (byte_4BC763D & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&int___TypeInfo, v3);
    byte_4BC763D = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1C1AC7C(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
LABEL_18:
    sub_1C1AE30(v5, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_20:
    sub_1C1AE38(v5, v6);
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


System_Int32_array *__fastcall EquipTargetInfo__get_ImagePartsGroupIdxs(
        EquipTargetInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ImagePartsGroupIdxs_k__BackingField;
}


void __fastcall EquipTargetInfo__set_ImagePartsGroupIdxs(
        EquipTargetInfo_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ImagePartsGroupIdxs_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._ImagePartsGroupIdxs_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}