void EquipTargetInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4C42AF0 & 1) == 0 )
  {
    sub_1C37058(&EquipTargetInfo_TypeInfo);
    byte_4C42AF0 = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EquipTargetInfo___ctor_41710900(
        EquipTargetInfo_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int128 v7; // q1
  struct AddSkillInfoData_array *addSkills; // x1
  CGThumbnailListItem_o *p_addSkills; // x20

  System_Object___ctor((Il2CppObject *)this, 0);
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
    p_addSkills = (CGThumbnailListItem_o *)&this->fields.addSkills;
    sub_1C36FFC(p_addSkills, (int32_t)addSkills, v5, v6);
    p_addSkills->monitor = (void *)equipTargetInfo->fields.updatedAt;
  }
}


void EquipTargetInfo___ctor_41711028(
        EquipTargetInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        bool isSetUserId,
        const MethodInfo *method)
{
  void *Instance; // x0
  int64_t v12; // x8
  __int128 v13; // q1
  long double inited; // q0
  _DWORD *v15; // x22
  Il2CppObject *Entity; // x21
  int32_t v17; // w20
  int v18; // w21
  int v19; // w25
  int v20; // w22
  int v21; // w24
  EquipTargetInfo_c *v22; // x8
  int32_t LOT_RATE; // w8
  int32_t v24; // w8
  __int64 v25; // x0
  __int64 v26; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v28; // x21
  __int64 v29; // x22
  ServantSkillMaster_o *v30; // x20
  unsigned int v31; // w8
  _QWORD *v32; // x20
  __int64 v33; // x9
  __int64 v34; // x9
  __int64 v35; // x9
  System_Collections_Generic_List_object__o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 i; // x27
  unsigned __int64 v40; // x28
  AddSkillInfoData_o *v41; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x8
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Object_array *v49; // x0
  int32_t v50; // w1
  struct AddSkillInfoData_array **p_addSkills; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52[2]; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4C42AE6 & 1) == 0 )
  {
    sub_1C37058(&AddSkillInfoData_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&EquipTargetInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42AE6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( isSetUserId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    Instance = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager_TypeInfo;
    }
    v12 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
  }
  else
  {
    v12 = 1;
  }
  if ( !this )
    goto LABEL_71;
  this->fields.userId = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v52, 1, 0);
  v13 = *(_OWORD *)&v52[0].fields.currentCryptoKey;
  v52[1] = v52[0];
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v52[0].fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0 )
  {
LABEL_71:
    sub_1C372B4(Instance);
  }
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0);
  v15 = Instance;
  if ( level == 1 )
  {
    if ( !Instance )
      goto LABEL_71;
    this->fields.hp = *((_DWORD *)Instance + 9);
    goto LABEL_33;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity )
    goto LABEL_71;
  if ( !Instance )
    goto LABEL_71;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, HIDWORD(Entity[8].klass), level, 0);
  if ( !v15 )
    goto LABEL_71;
  v17 = v15[9];
  if ( !Instance )
  {
    this->fields.hp = v17;
LABEL_33:
    v24 = v15[11];
    goto LABEL_34;
  }
  v19 = v15[10];
  v18 = v15[11];
  v20 = v15[12];
  v21 = *((_DWORD *)Instance + 7);
  v22 = EquipTargetInfo_TypeInfo;
  if ( !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo);
    v22 = EquipTargetInfo_TypeInfo;
  }
  LOT_RATE = v22->static_fields->LOT_RATE;
  this->fields.hp = v21 * (v19 - v17) / LOT_RATE + v17;
  v24 = v21 * (v20 - v18) / LOT_RATE + v18;
LABEL_34:
  this->fields.atk = v24;
  *(_QWORD *)&inited = 0x100000001LL;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C8776C(inited);
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C8776C(inited);
  Instance = **(void ***)(v26 + 184);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v30 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v29;
  *(_QWORD *)&v53.fields.fakeValue = v28;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v53, 0);
  if ( !v30 )
    goto LABEL_71;
  Instance = ServantSkillMaster__getUseEntityList(
               v30,
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
  v31 = *((_DWORD *)Instance + 6);
  v32 = Instance;
  if ( !v31 )
    goto LABEL_72;
  v33 = *((_QWORD *)Instance + 4);
  if ( v33 )
    LODWORD(v33) = *(_DWORD *)(v33 + 28);
  this->fields.skillId1 = v33;
  if ( v31 <= 1 )
    goto LABEL_72;
  v34 = *((_QWORD *)Instance + 5);
  if ( v34 )
    LODWORD(v34) = *(_DWORD *)(v34 + 28);
  this->fields.skillId2 = v34;
  if ( v31 <= 2 )
LABEL_72:
    sub_1C372BC(Instance);
  v35 = *((_QWORD *)Instance + 6);
  if ( v35 )
    LODWORD(v35) = *(_DWORD *)(v35 + 28);
  this->fields.skillId3 = v35;
  v36 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7; ; ++i )
  {
    Instance = BalanceConfig_TypeInfo;
    v40 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v40 >= *(int *)(*((_QWORD *)Instance + 23) + 56LL) )
      break;
    if ( v40 >= *((unsigned int *)v32 + 6) )
      goto LABEL_72;
    if ( v32[i] )
    {
      v41 = (AddSkillInfoData_o *)sub_1C372A4(AddSkillInfoData_TypeInfo);
      AddSkillInfoData___ctor(v41, 0);
      if ( v40 >= *((unsigned int *)v32 + 6) )
        goto LABEL_72;
      v44 = v32[i];
      if ( !v44 )
        goto LABEL_71;
      if ( !v41 )
        goto LABEL_71;
      v41->fields.num = *(_DWORD *)(v44 + 20);
      v41->fields.skillId = *(_DWORD *)(v44 + 28);
      if ( !v36 )
        goto LABEL_71;
      items = v36->fields._items;
      v46 = Method_System_Collections_Generic_List_AddSkillInfoData__Add__;
      ++v36->fields._version;
      if ( !items )
        goto LABEL_71;
      size = v36->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v41,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v41;
        sub_1C36FFC((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v41, v42, v43);
      }
    }
  }
  if ( v36 )
  {
    v49 = System_Collections_Generic_List_object___ToArray(
            v36,
            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    v50 = (int)v49;
    this->fields.addSkills = (struct AddSkillInfoData_array *)v49;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0;
    p_addSkills = &this->fields.addSkills;
    v50 = 0;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)p_addSkills, v50, v37, v38);
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
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 v10; // x24
  SkillLvEntity_o *v11; // x27
  SkillLvEntity_o *Entity; // x0
  int32_t v13; // w1
  SkillLvEntity_o *v14; // x22
  System_Nullable_ValueTuple_FuncList_TYPE__int___o result; // 0:x0.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4C42AEB & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C42AEB = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v4;
  *(_QWORD *)&v16.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v16, 0) >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v6);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v8);
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      Entity = (SkillLvEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Entity = (SkillLvEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v10 >= SLODWORD(Entity[2].fields.script->fields._keys) )
        break;
      if ( !SkillIdList )
        goto LABEL_26;
      if ( v10 >= LODWORD(SkillIdList->max_length) )
        goto LABEL_27;
      v13 = SkillIdList->m_Items[v10];
      if ( v13 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_26;
        if ( v10 >= LODWORD(SkillLevelList->max_length) )
LABEL_27:
          sub_1C372BC(Entity);
        if ( !Master_object )
          goto LABEL_26;
        Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v13, SkillLevelList->m_Items[v10], 0);
        v14 = Entity;
        if ( !Entity )
          Entity = v11;
        if ( v14 )
        {
          if ( !Entity )
LABEL_26:
            sub_1C372B4(Entity);
          result = SkillLvEntity__GetFriendPointUpTypeVal(Entity, 0);
          v11 = v14;
          if ( result.fields.hasValue )
            return result;
        }
      }
      ++v10;
    }
  }
  *(_QWORD *)&result.fields.hasValue = 0;
  result.fields.value.fields.Item2 = 0;
  return result;
}


System_String_o *EquipTargetInfo__GetSvtName(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x19
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4C42AEF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42AEF = 1;
  }
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11, 0);
  if ( !v8 )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v8,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0, 0);
LABEL_11:
    sub_1C372B4(Instance);
  }
  return v3;
}


void EquipTargetInfo__SetImagePartsGroupIdxs(
        EquipTargetInfo_o *this,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ImagePartsGroupIdxs_k__BackingField = imagePartsGroupIdxs;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._ImagePartsGroupIdxs_k__BackingField,
    (int32_t)imagePartsGroupIdxs,
    (int32_t)method,
    v3);
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
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v13; // x1
  System_Int32_array *SkillIdList; // x24
  const MethodInfo *v15; // x1
  System_Int32_array *SkillLevelList; // x25
  unsigned __int64 i; // x28
  __int64 v18; // x8
  bool v19; // w26
  int32_t v20; // w1
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v22; // x1
  SkillLvEntity_o *v23; // x27
  int32_t EventId; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C42AEC & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42AEC = 1;
  }
  if ( !setupInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v10;
  *(_QWORD *)&v28.fields.fakeValue = v9;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v28, 0) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1C372B4(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v13);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v15);
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v18 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 56LL);
    v19 = (__int64)i < v18;
    if ( (__int64)i >= v18 )
      break;
    if ( !SkillIdList )
      goto LABEL_23;
    if ( i >= LODWORD(SkillIdList->max_length) )
      goto LABEL_24;
    v20 = SkillIdList->m_Items[i];
    if ( v20 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_23;
      if ( i >= LODWORD(SkillLevelList->max_length) )
LABEL_24:
        sub_1C372BC(Instance);
      if ( !MasterData_object )
        goto LABEL_23;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v20, SkillLevelList->m_Items[i], 0);
      if ( Entity )
      {
        v23 = Entity;
        EventId = EventUpValSetupInfo__get_EventId(setupInfo, v22);
        if ( SkillLvEntity__getEventUpVal(
               v23,
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
  return v19;
}


bool EquipTargetInfo__getEventUpVal_41715144(
        EquipTargetInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isSupport,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x21
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v12; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v14; // x1
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v16; // x25
  bool v17; // w24
  bool v18; // w22
  int32_t v19; // w1
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C42AED & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42AED = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v8;
  *(_QWORD *)&v21.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v21, 0);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_25;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_25:
    sub_1C372B4(Instance);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v12);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v14);
  v16 = 0;
  v17 = 0;
  v18 = isSupport;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v16 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 56LL) )
      return v17;
    if ( !SkillIdList )
      goto LABEL_25;
    if ( v16 >= LODWORD(SkillIdList->max_length) )
      goto LABEL_26;
    v19 = SkillIdList->m_Items[v16];
    if ( v19 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_25;
      if ( v16 >= LODWORD(SkillLevelList->max_length) )
LABEL_26:
        sub_1C372BC(Instance);
      if ( !MasterData_object )
        goto LABEL_25;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v19, SkillLevelList->m_Items[v16], 0);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_42900292(Entity, eventUpVallInfo, 1, 0, v18, 0, 0, 0) )
          v17 = 1;
      }
    }
    ++v16;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x24
  __int64 v14; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  Il2CppObject *Entity; // x23
  const MethodInfo *v17; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v19; // x24
  int m_CancellationTokenSource; // w25
  bool result; // w0
  float v22; // s0
  int v23; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4C42AEE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42AEE = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v10;
  *(_QWORD *)&v24.fields.fakeValue = v9;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v24, 0) < 1 )
  {
    result = 0;
    v22 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v14;
    *(_QWORD *)&v25.fields.fakeValue = v13;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v25, 0);
    if ( !v15 )
      goto LABEL_25;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v15,
               (int32_t)Instance,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v17) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      lv = this->fields.lv;
      v19 = (ServantExpMaster_o *)Instance;
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
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(v19, HIDWORD(Entity[8].klass), this->fields.lv, 0);
      *exp = this->fields.exp - m_CancellationTokenSource;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
        v23 = (int)Instance->fields.m_CancellationTokenSource;
        result = 1;
        v22 = (float)*exp / (float)(v23 - m_CancellationTokenSource);
        goto LABEL_24;
      }
LABEL_25:
      sub_1C372B4(Instance);
    }
    *exp = 0;
    *lateExp = 0;
    result = 1;
    v22 = 1.0;
  }
LABEL_24:
  *barExp = v22;
  return result;
}


int32_t EquipTargetInfo__getLevelMax(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4C42AE7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42AE7 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v4;
  *(_QWORD *)&v11.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11, 0) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v12, 0);
  if ( !v9 || (Instance = ServantLimitMaster__GetEntity(v9, (int32_t)Instance, this->fields.limitCount, 0)) == 0 )
LABEL_13:
    sub_1C372B4(Instance);
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
  unsigned int namespaze; // w8
  BalanceConfig_c *v6; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v8; // x22
  __int64 v9; // x23
  AddSkillInfoData_o *v10; // x10

  if ( (byte_4C42AE8 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    byte_4C42AE8 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1C37100(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
LABEL_21:
    sub_1C372B4(v4);
  namespaze = (unsigned int)v4->_1.namespaze;
  v6 = v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_23:
    sub_1C372BC(v4);
  }
  v4->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v8 = 0;
    v9 = 0x300000000LL;
    while ( (__int64)v8 < SLODWORD(addSkills->max_length) )
    {
      v4 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      addSkills = this->fields.addSkills;
      if ( v4->static_fields->SvtEquipSkillListMax > (int)v8 + 3 )
      {
        if ( !addSkills )
          goto LABEL_21;
        if ( v8 >= LODWORD(addSkills->max_length) )
          goto LABEL_23;
        v10 = addSkills->m_Items[v8];
        if ( !v10 )
          goto LABEL_21;
        if ( v8 + 3 >= LODWORD(v6->_1.namespaze) )
          goto LABEL_23;
        *(_DWORD *)((char *)&v6->_1.byval_arg.data + (v9 >> 30)) = v10->fields.skillId;
      }
      ++v8;
      v9 += 0x100000000LL;
      if ( !addSkills )
        goto LABEL_21;
    }
  }
  return (System_Int32_array *)v6;
}


void EquipTargetInfo__getSkillInfo(EquipTargetInfo_o *this, SkillInfo_array **skillInfoList, const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  SkillInfo_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  long double v10; // q0
  __int64 v11; // x0
  __int64 v12; // x0
  BalanceConfig_c *v13; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v15; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v17; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v19; // x28
  unsigned int v20; // w19
  int32_t *m_Items; // x29
  int32_t v22; // w1
  Il2CppObject *Entity; // x0
  SkillEntity_o *v24; // x24
  __int64 v25; // x23
  int32_t v26; // w1
  System_String_o *EffectTitle; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *EffectExplanation; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  SkillInfo_array *v33; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppClass **v36; // x0
  __int64 v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4C42AEA & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&SkillInfo___TypeInfo);
    sub_1C37058(&SkillInfo_TypeInfo);
    byte_4C42AEA = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (SkillInfo_array *)sub_1C37100(SkillInfo___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)skillInfoList, (int32_t)v5, v6, v7);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v9;
  *(_QWORD *)&v39.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v39, 0) >= 1 )
  {
    v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C8776C(v10);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C8776C(v10);
    v13 = **(BalanceConfig_c ***)(v12 + 184);
    if ( !v13 )
LABEL_32:
      sub_1C372B4(v13);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v13,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v15);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v17);
    v19 = 0;
    v20 = 0;
    m_Items = SkillIdList->m_Items;
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
      if ( v19 >= LODWORD(SkillIdList->max_length) )
LABEL_33:
        sub_1C372BC(v13);
      v22 = m_Items[v19];
      if ( v22 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_32;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v22,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v24 = (SkillEntity_o *)Entity;
          v25 = sub_1C372A4(SkillInfo_TypeInfo);
          SkillInfo___ctor((SkillInfo_o *)v25, 0);
          if ( v19 >= LODWORD(SkillIdList->max_length) )
            goto LABEL_33;
          if ( !v25 )
            goto LABEL_32;
          *(_DWORD *)(v25 + 16) = m_Items[v19];
          if ( !SkillLevelList )
            goto LABEL_32;
          if ( v19 >= LODWORD(SkillLevelList->max_length) )
            goto LABEL_33;
          v26 = SkillLevelList->m_Items[v19];
          *(_DWORD *)(v25 + 20) = v26;
          *(_DWORD *)(v25 + 24) = SkillEntity__getEffectChargeTurn(v24, v26, 0);
          EffectTitle = SkillEntity__getEffectTitle(v24, 0, 0);
          *(_QWORD *)(v25 + 32) = EffectTitle;
          sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 32), (int32_t)EffectTitle, v28, v29);
          EffectExplanation = SkillEntity__getEffectExplanation(v24, *(_DWORD *)(v25 + 20), 0);
          *(_QWORD *)(v25 + 40) = EffectExplanation;
          sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 40), (int32_t)EffectExplanation, v31, v32);
          *(_BYTE *)(v25 + 56) = 1;
          v33 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_32;
          v13 = (BalanceConfig_c *)sub_1C37194(v25, v33->obj.klass->_1.element_class);
          if ( !v13 )
          {
            v37 = sub_1C372D8(0);
            sub_1C37180(v37, 0);
          }
          if ( v20 >= LODWORD(v33->max_length) )
            goto LABEL_33;
          v36 = &v33->obj.klass + (int)v20;
          v36[4] = (Il2CppClass *)v25;
          sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 4), v25, v34, v35);
          ++v20;
        }
      }
      ++v19;
    }
  }
}


System_Int32_array *EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  unsigned int namespaze; // w8
  BalanceConfig_c *v6; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v8; // x25
  __int64 v9; // x22

  if ( (byte_4C42AE9 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    byte_4C42AE9 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1C37100(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
LABEL_18:
    sub_1C372B4(v4);
  namespaze = (unsigned int)v4->_1.namespaze;
  v6 = v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_20:
    sub_1C372BC(v4);
  }
  v4->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v8 = 0;
    v9 = 0x300000000LL;
    while ( v8 < SLODWORD(addSkills->max_length) )
    {
      v4 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      if ( v4->static_fields->SvtEquipSkillListMax > (int)v8 + 3 )
      {
        if ( v8 + 3 >= (unsigned __int64)LODWORD(v6->_1.namespaze) )
          goto LABEL_20;
        *(_DWORD *)((char *)&v6->_1.byval_arg.data + (v9 >> 30)) = 1;
      }
      addSkills = this->fields.addSkills;
      v9 += 0x100000000LL;
      ++v8;
      if ( !addSkills )
        goto LABEL_18;
    }
  }
  return (System_Int32_array *)v6;
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
  const MethodInfo *v3; // x3

  this->fields._ImagePartsGroupIdxs_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._ImagePartsGroupIdxs_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}