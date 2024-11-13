void __fastcall EquipTargetInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B15D95 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, v1, v2);
    byte_4B15D95 = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipTargetInfo___ctor_39602212(
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
    sub_1BCA784(p_addSkills, (int64_t)addSkills, v5, v6, v7, v8, v9, v10);
    p_addSkills->monitor = (void *)equipTargetInfo->fields.updatedAt;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipTargetInfo___ctor_39602340(
        EquipTargetInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        bool isSetUserId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  int64_t UserId; // x0
  __int64 v45; // x1
  __int128 v46; // q1
  long double inited; // q0
  _DWORD *v48; // x22
  Il2CppObject *Entity; // x21
  int32_t v50; // w20
  int v51; // w21
  int v52; // w25
  int v53; // w22
  int v54; // w24
  EquipTargetInfo_c *v55; // x8
  int32_t LOT_RATE; // w8
  int32_t v57; // w8
  __int64 v58; // x0
  __int64 v59; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v61; // x1
  __int64 v62; // x21
  __int64 v63; // x22
  ServantSkillMaster_o *v64; // x20
  __int64 v65; // x2
  __int64 v66; // x3
  unsigned int v67; // w8
  int64_t v68; // x20
  __int64 v69; // x9
  __int64 v70; // x9
  __int64 v71; // x9
  System_Collections_Generic_List_object__o *v72; // x21
  int64_t v73; // x2
  __int64 v74; // x3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 i; // x27
  unsigned __int64 v80; // x28
  AddSkillInfoData_o *v81; // x22
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x8
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  Il2CppClass **v92; // x0
  System_Object_array *v93; // x1
  struct AddSkillInfoData_array **p_addSkills; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95[2]; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4B15D8A & 1) == 0 )
  {
    sub_1BCA7E0(&AddSkillInfoData_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo, v31, v32);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    byte_4B15D8A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( isSetUserId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v43);
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v43);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v95, 1LL, 0LL);
  v46 = *(_OWORD *)&v95[0].fields.currentCryptoKey;
  v95[1] = v95[0];
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v95[0].fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId
    || (UserId = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)UserId,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0 )
  {
LABEL_67:
    sub_1BCAA3C(UserId, v43);
  }
  UserId = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)UserId, svtId, this->fields.limitCount, 0LL);
  v48 = (_DWORD *)UserId;
  if ( level == 1 )
  {
    if ( !UserId )
      goto LABEL_67;
    this->fields.hp = *(_DWORD *)(UserId + 36);
    goto LABEL_29;
  }
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_67;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !UserId )
    goto LABEL_67;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
             svtId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_67;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity )
    goto LABEL_67;
  if ( !UserId )
    goto LABEL_67;
  UserId = (int64_t)ServantExpMaster__GetEntity((ServantExpMaster_o *)UserId, HIDWORD(Entity[8].klass), level, 0LL);
  if ( !v48 )
    goto LABEL_67;
  v50 = v48[9];
  if ( !UserId )
  {
    this->fields.hp = v50;
LABEL_29:
    v57 = v48[11];
    goto LABEL_30;
  }
  v52 = v48[10];
  v51 = v48[11];
  v53 = v48[12];
  v54 = *(_DWORD *)(UserId + 28);
  v55 = EquipTargetInfo_TypeInfo;
  if ( !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo, v43);
    v55 = EquipTargetInfo_TypeInfo;
  }
  LOT_RATE = v55->static_fields->LOT_RATE;
  this->fields.hp = v54 * (v52 - v50) / LOT_RATE + v50;
  v57 = v54 * (v53 - v51) / LOT_RATE + v51;
LABEL_30:
  this->fields.atk = v57;
  *(_QWORD *)&inited = 0x100000001LL;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v58 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
    v58 = sub_1C1C6BC(inited);
  v59 = *(_QWORD *)(*(_QWORD *)(v58 + 192) + 16LL);
  if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
    v59 = sub_1C1C6BC(inited);
  UserId = **(_QWORD **)(v59 + 184);
  if ( !UserId )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v63 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v62 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v64 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61);
  *(_QWORD *)&v96.fields.currentCryptoKey = v63;
  *(_QWORD *)&v96.fields.fakeValue = v62;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v96, 0LL);
  if ( !v64 )
    goto LABEL_67;
  UserId = (int64_t)ServantSkillMaster__getUseEntityList(
                      v64,
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
  v67 = *(_DWORD *)(UserId + 24);
  v68 = UserId;
  if ( !v67 )
    goto LABEL_68;
  v69 = *(_QWORD *)(UserId + 32);
  if ( v69 )
    LODWORD(v69) = *(_DWORD *)(v69 + 28);
  this->fields.skillId1 = v69;
  if ( v67 <= 1 )
    goto LABEL_68;
  v70 = *(_QWORD *)(UserId + 40);
  if ( v70 )
    LODWORD(v70) = *(_DWORD *)(v70 + 28);
  this->fields.skillId2 = v70;
  if ( v67 <= 2 )
LABEL_68:
    sub_1BCAA44(UserId, v43);
  v71 = *(_QWORD *)(UserId + 48);
  if ( v71 )
    LODWORD(v71) = *(_DWORD *)(v71 + 28);
  this->fields.skillId3 = v71;
  v72 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AddSkillInfoData__TypeInfo,
                                                       v43,
                                                       v65,
                                                       v66);
  System_Collections_Generic_List_object____ctor(
    v72,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7LL; ; ++i )
  {
    UserId = (int64_t)BalanceConfig_TypeInfo;
    v80 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v43);
      UserId = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v80 >= *(int *)(*(_QWORD *)(UserId + 184) + 44LL) )
      break;
    if ( v80 >= *(unsigned int *)(v68 + 24) )
      goto LABEL_68;
    if ( *(_QWORD *)(v68 + 8 * i) )
    {
      v81 = (AddSkillInfoData_o *)sub_1BCAA2C(AddSkillInfoData_TypeInfo, v43, v73, v74);
      AddSkillInfoData___ctor(v81, 0LL);
      if ( v80 >= *(unsigned int *)(v68 + 24) )
        goto LABEL_68;
      v88 = *(_QWORD *)(v68 + 8 * i);
      if ( !v88 )
        goto LABEL_67;
      if ( !v81 )
        goto LABEL_67;
      v81->fields.num = *(_DWORD *)(v88 + 20);
      v81->fields.skillId = *(_DWORD *)(v88 + 28);
      if ( !v72 )
        goto LABEL_67;
      items = v72->fields._items;
      v90 = Method_System_Collections_Generic_List_AddSkillInfoData__Add__;
      ++v72->fields._version;
      if ( !items )
        goto LABEL_67;
      size = v72->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v72,
          (Il2CppObject *)v81,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
      }
      else
      {
        v92 = &items->obj.klass + size;
        v72->fields._size = size + 1;
        v92[4] = (Il2CppClass *)v81;
        sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 4), (int64_t)v81, v82, v83, v84, v85, v86, v87);
      }
    }
  }
  if ( v72 )
  {
    v93 = System_Collections_Generic_List_object___ToArray(
            v72,
            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    this->fields.addSkills = (struct AddSkillInfoData_array *)v93;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0LL;
    p_addSkills = &this->fields.addSkills;
    v93 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_addSkills, (int64_t)v93, v73, v74, v75, v76, v77, v78);
  this->fields.updatedAt = 0LL;
}


System_String_o *__fastcall EquipTargetInfo__GetSvtName(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x19
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x1
  __int64 v17; // x21
  __int64 v18; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B15D94 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B15D94 = 1;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v22.fields.currentCryptoKey = v18;
  *(_QWORD *)&v22.fields.fakeValue = v17;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
  if ( !v19 )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v19,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
LABEL_11:
    sub_1BCAA3C(Instance, v14);
  }
  return v12;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x23
  __int64 v16; // x24
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v20; // x1
  System_Int32_array *SkillIdList; // x24
  const MethodInfo *v22; // x1
  System_Int32_array *SkillLevelList; // x25
  unsigned __int64 i; // x28
  __int64 v25; // x8
  bool v26; // w26
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v28; // x27
  int32_t EventId; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B15D91 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId, *(_QWORD *)&wearesLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B15D91 = 1;
  }
  if ( !setupInfo )
    return 0;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&wearersSvtId);
  *(_QWORD *)&v33.fields.currentCryptoKey = v16;
  *(_QWORD *)&v33.fields.fakeValue = v15;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1BCAA3C(Instance, v18);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v20);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v22);
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v25 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL);
    v26 = (__int64)i < v25;
    if ( (__int64)i >= v25 )
      break;
    if ( !SkillIdList )
      goto LABEL_23;
    if ( i >= SkillIdList->max_length )
      goto LABEL_24;
    v18 = (const MethodInfo *)(unsigned int)SkillIdList->m_Items[i + 1];
    if ( (int)v18 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_23;
      if ( i >= SkillLevelList->max_length )
LABEL_24:
        sub_1BCAA44(Instance, v18);
      if ( !MasterData_object )
        goto LABEL_23;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)MasterData_object,
                 (int32_t)v18,
                 SkillLevelList->m_Items[i + 1],
                 0LL);
      if ( Entity )
      {
        v28 = Entity;
        EventId = EventUpValSetupInfo__get_EventId(setupInfo, v18);
        if ( SkillLvEntity__getEventUpVal(
               v28,
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
  return v26;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EquipTargetInfo__getEventUpVal_39606772(
        EquipTargetInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isSupport,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x21
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v19; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v21; // x1
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v23; // x25
  bool v24; // w24
  bool v25; // w22
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B15D92 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, eventUpVallInfo, isSupport);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B15D92 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpVallInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v14;
  *(_QWORD *)&v27.fields.fakeValue = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_25;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_25:
    sub_1BCAA3C(Instance, v16);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v19);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v21);
  v23 = 0LL;
  v24 = 0;
  v25 = isSupport;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v23 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
      return v24;
    if ( !SkillIdList )
      goto LABEL_25;
    if ( v23 >= SkillIdList->max_length )
      goto LABEL_26;
    v16 = (unsigned int)SkillIdList->m_Items[v23 + 1];
    if ( (int)v16 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_25;
      if ( v23 >= SkillLevelList->max_length )
LABEL_26:
        sub_1BCAA44(Instance, v16);
      if ( !MasterData_object )
        goto LABEL_25;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)MasterData_object,
                 v16,
                 SkillLevelList->m_Items[v23 + 1],
                 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_40683416(Entity, eventUpVallInfo, 1, 0, v25, 0, 0LL, 0LL) )
          v24 = 1;
      }
    }
    ++v23;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x23
  __int64 v18; // x24
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x1
  __int64 v23; // x24
  __int64 v24; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v27; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v29; // x24
  int m_CancellationTokenSource; // w25
  bool result; // w0
  float v32; // s0
  int v33; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4B15D93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, exp, lateExp);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B15D93 = 1;
  }
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
  *(_QWORD *)&v34.fields.currentCryptoKey = v18;
  *(_QWORD *)&v34.fields.fakeValue = v17;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v34, 0LL) < 1 )
  {
    result = 0;
    v32 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    *(_QWORD *)&v35.fields.currentCryptoKey = v24;
    *(_QWORD *)&v35.fields.fakeValue = v23;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35, 0LL);
    if ( !v25 )
      goto LABEL_25;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v25,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v27) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      lv = this->fields.lv;
      v29 = (ServantExpMaster_o *)Instance;
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
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(v29, HIDWORD(Entity[8].klass), this->fields.lv, 0LL);
      *exp = this->fields.exp - m_CancellationTokenSource;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
        v33 = (int)Instance->fields.m_CancellationTokenSource;
        result = 1;
        v32 = (float)*exp / (float)(v33 - m_CancellationTokenSource);
        goto LABEL_24;
      }
LABEL_25:
      sub_1BCAA3C(Instance, v20);
    }
    *exp = 0;
    *lateExp = 0;
    result = 1;
    v32 = 1.0;
  }
LABEL_24:
  *barExp = v32;
  return result;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpType(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x19
  __int64 v11; // x20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v15; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v17; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x24
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v21; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B15D90 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B15D90 = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v23.fields.currentCryptoKey = v11;
  *(_QWORD *)&v23.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1BCAA3C(Instance, v13);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v15);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v17);
    for ( i = 0LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_22;
      if ( i >= SkillIdList->max_length )
        goto LABEL_23;
      v13 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v13 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_22;
        if ( i >= SkillLevelList->max_length )
LABEL_23:
          sub_1BCAA44(Instance, v13);
        if ( !MasterData_object )
          goto LABEL_22;
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   v13,
                   SkillLevelList->m_Items[i + 1],
                   0LL);
        if ( Entity )
        {
          v21 = Entity;
          if ( SkillLvEntity__getFriendPointUpVal(Entity, 0LL) >= 1 )
            return SkillLvEntity__getFriendPointUpType(v21, 0LL);
        }
      }
    }
  }
  return 0;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpVal(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x19
  __int64 v11; // x20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v15; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v17; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B15D8F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B15D8F = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v22.fields.currentCryptoKey = v11;
  *(_QWORD *)&v22.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_22:
      sub_1BCAA3C(Instance, v13);
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v15);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v17);
    for ( i = 0LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_22;
      if ( i >= SkillIdList->max_length )
        goto LABEL_23;
      v13 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v13 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_22;
        if ( i >= SkillLevelList->max_length )
LABEL_23:
          sub_1BCAA44(Instance, v13);
        if ( !MasterData_object )
          goto LABEL_22;
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   v13,
                   SkillLevelList->m_Items[i + 1],
                   0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x20
  __int64 v9; // x21
  void *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  ServantLimitMaster_o *v16; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B15D8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B15D8B = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v18.fields.currentCryptoKey = v9;
  *(_QWORD *)&v18.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  if ( !v16 || (Instance = ServantLimitMaster__GetEntity(v16, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_13:
    sub_1BCAA3C(Instance, v11);
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall EquipTargetInfo__getServantLevel(EquipTargetInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillIdList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v10; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v12; // x22
  __int64 v13; // x23
  AddSkillInfoData_o *v14; // x10

  if ( (byte_4B15D8C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B15D8C = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (BalanceConfig_c *)sub_1BCA888(int___TypeInfo, (unsigned int)v6->static_fields->SvtEquipSkillListMax);
  if ( !v7 )
LABEL_21:
    sub_1BCAA3C(v7, v8);
  namespaze = (unsigned int)v7->_1.namespaze;
  v10 = (System_Int32_array *)v7;
  if ( !namespaze
    || (LODWORD(v7->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v7->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_23:
    sub_1BCAA44(v7, v8);
  }
  v7->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v12 = 0LL;
    v13 = 0x300000000LL;
    while ( (__int64)v12 < (int)addSkills->max_length )
    {
      v7 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
        v7 = BalanceConfig_TypeInfo;
      }
      addSkills = this->fields.addSkills;
      if ( v7->static_fields->SvtEquipSkillListMax > (int)v12 + 3 )
      {
        if ( !addSkills )
          goto LABEL_21;
        if ( v12 >= addSkills->max_length )
          goto LABEL_23;
        v14 = addSkills->m_Items[v12];
        if ( !v14 )
          goto LABEL_21;
        if ( v12 + 3 >= v10->max_length )
          goto LABEL_23;
        *(int32_t *)((char *)&v10->m_Items[1] + (v13 >> 30)) = v14->fields.skillId;
      }
      ++v12;
      v13 += 0x100000000LL;
      if ( !addSkills )
        goto LABEL_21;
    }
  }
  return v10;
}


void __fastcall EquipTargetInfo__getSkillInfo(
        EquipTargetInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  BalanceConfig_c *v16; // x0
  SkillInfo_array *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x21
  __int64 v27; // x1
  long double v28; // q0
  __int64 v29; // x0
  __int64 v30; // x0
  BalanceConfig_c *v31; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v33; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v35; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v37; // x28
  il2cpp_array_size_t v38; // w19
  int32_t *v39; // x29
  Il2CppObject *Entity; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  SkillEntity_o *v43; // x24
  int64_t v44; // x23
  int32_t v45; // w1
  System_String_o *EffectTitle; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_String_o *EffectExplanation; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  SkillInfo_array *v60; // x24
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  Il2CppClass **v67; // x0
  __int64 v68; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4B15D8E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v12, v13);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v14, v15);
    byte_4B15D8E = 1;
  }
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v16->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v70.fields.currentCryptoKey = v26;
  *(_QWORD *)&v70.fields.fakeValue = v25;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v70, 0LL) >= 1 )
  {
    v29 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      v29 = sub_1C1C6BC(v28);
    v30 = *(_QWORD *)(*(_QWORD *)(v29 + 192) + 16LL);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1C1C6BC(v28);
    v31 = **(BalanceConfig_c ***)(v30 + 184);
    if ( !v31 )
LABEL_32:
      sub_1BCAA3C(v31, v27);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v31,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v33);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v35);
    v37 = 0LL;
    v38 = 0;
    v39 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      v31 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27);
        v31 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v37 >= v31->static_fields->SvtEquipSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_32;
      if ( v37 >= SkillIdList->max_length )
LABEL_33:
        sub_1BCAA44(v31, v27);
      v27 = (unsigned int)v39[v37];
      if ( (int)v27 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_32;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v27,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v43 = (SkillEntity_o *)Entity;
          v44 = sub_1BCAA2C(SkillInfo_TypeInfo, v27, v41, v42);
          SkillInfo___ctor((SkillInfo_o *)v44, 0LL);
          if ( v37 >= SkillIdList->max_length )
            goto LABEL_33;
          if ( !v44 )
            goto LABEL_32;
          *(_DWORD *)(v44 + 16) = v39[v37];
          if ( !SkillLevelList )
            goto LABEL_32;
          if ( v37 >= SkillLevelList->max_length )
            goto LABEL_33;
          v45 = SkillLevelList->m_Items[v37 + 1];
          *(_DWORD *)(v44 + 20) = v45;
          *(_DWORD *)(v44 + 24) = SkillEntity__getEffectChargeTurn(v43, v45, 0LL);
          EffectTitle = SkillEntity__getEffectTitle(v43, 0, 0LL);
          *(_QWORD *)(v44 + 32) = EffectTitle;
          sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 32), (int64_t)EffectTitle, v47, v48, v49, v50, v51, v52);
          EffectExplanation = SkillEntity__getEffectExplanation(v43, *(_DWORD *)(v44 + 20), 0LL);
          *(_QWORD *)(v44 + 40) = EffectExplanation;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)(v44 + 40),
            (int64_t)EffectExplanation,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
          *(_BYTE *)(v44 + 56) = 1;
          v60 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_32;
          v31 = (BalanceConfig_c *)sub_1BCA91C(v44, v60->obj.klass->_1.element_class);
          if ( !v31 )
          {
            v68 = sub_1BCAA60(0LL);
            sub_1BCA908(v68, 0LL);
          }
          if ( v38 >= v60->max_length )
            goto LABEL_33;
          v67 = &v60->obj.klass + (int)v38;
          v67[4] = (Il2CppClass *)v44;
          sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 4), v44, v61, v62, v63, v64, v65, v66);
          ++v38;
        }
      }
      ++v37;
    }
  }
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v10; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v12; // x25
  __int64 v13; // x22

  if ( (byte_4B15D8D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B15D8D = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (BalanceConfig_c *)sub_1BCA888(int___TypeInfo, (unsigned int)v6->static_fields->SvtEquipSkillListMax);
  if ( !v7 )
LABEL_18:
    sub_1BCAA3C(v7, v8);
  namespaze = (unsigned int)v7->_1.namespaze;
  v10 = (System_Int32_array *)v7;
  if ( !namespaze
    || (LODWORD(v7->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v7->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_20:
    sub_1BCAA44(v7, v8);
  }
  v7->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v12 = 0LL;
    v13 = 0x300000000LL;
    while ( v12 < (int)addSkills->max_length )
    {
      v7 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
        v7 = BalanceConfig_TypeInfo;
      }
      if ( v7->static_fields->SvtEquipSkillListMax > (int)v12 + 3 )
      {
        if ( v12 + 3 >= (unsigned __int64)v10->max_length )
          goto LABEL_20;
        *(int32_t *)((char *)&v10->m_Items[1] + (v13 >> 30)) = 1;
      }
      addSkills = this->fields.addSkills;
      v13 += 0x100000000LL;
      ++v12;
      if ( !addSkills )
        goto LABEL_18;
    }
  }
  return v10;
}