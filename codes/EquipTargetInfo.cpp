void __fastcall EquipTargetInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B445F5 & 1) == 0 )
  {
    sub_1BDB878(&EquipTargetInfo_TypeInfo, v1);
    byte_4B445F5 = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipTargetInfo___ctor_40710280(
        EquipTargetInfo_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int128 v7; // q1
  struct AddSkillInfoData_array *addSkills; // x1
  CGThumbnailListItem_o *p_addSkills; // x20

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
    p_addSkills = (CGThumbnailListItem_o *)&this->fields.addSkills;
    sub_1BDB81C(p_addSkills, (int32_t)addSkills, v5, v6);
    p_addSkills->monitor = (void *)equipTargetInfo->fields.updatedAt;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipTargetInfo___ctor_40710408(
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
  __int64 v48; // x2
  unsigned int v49; // w8
  _QWORD *v50; // x20
  __int64 v51; // x9
  __int64 v52; // x9
  __int64 v53; // x9
  System_Collections_Generic_List_object__o *v54; // x21
  const MethodInfo *v55; // x3
  __int64 i; // x27
  unsigned __int64 v57; // x28
  AddSkillInfoData_o *v58; // x22
  const MethodInfo *v59; // x3
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

  if ( (byte_4B445EB & 1) == 0 )
  {
    sub_1BDB878(&AddSkillInfoData_TypeInfo, *(_QWORD *)&svtId);
    sub_1BDB878(&BalanceConfig_TypeInfo, v11);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantExpMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1BDB878(&EquipTargetInfo_TypeInfo, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__, v20);
    sub_1BDB878(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo, v21);
    sub_1BDB878(&NetworkManager_TypeInfo, v22);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_4B445EB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( isSetUserId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v28);
      byte_4B3ED56 = 1;
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v68, 1LL, 0LL);
  v30 = *(_OWORD *)&v68[0].fields.currentCryptoKey;
  v68[1] = v68[0];
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v68[0].fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL )
  {
LABEL_71:
    sub_1BDBAD4(Instance, v28);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    v42 = sub_1C2BF08(inited);
  v43 = *(_QWORD *)(*(_QWORD *)(v42 + 192) + 16LL);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C2BF08(inited);
  Instance = **(void ***)(v43 + 184);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v46 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v47 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v69.fields.currentCryptoKey = v46;
  *(_QWORD *)&v69.fields.fakeValue = v45;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v69, 0LL);
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
  v49 = *((_DWORD *)Instance + 6);
  v50 = Instance;
  if ( !v49 )
    goto LABEL_72;
  v51 = *((_QWORD *)Instance + 4);
  if ( v51 )
    LODWORD(v51) = *(_DWORD *)(v51 + 28);
  this->fields.skillId1 = v51;
  if ( v49 <= 1 )
    goto LABEL_72;
  v52 = *((_QWORD *)Instance + 5);
  if ( v52 )
    LODWORD(v52) = *(_DWORD *)(v52 + 28);
  this->fields.skillId2 = v52;
  if ( v49 <= 2 )
LABEL_72:
    sub_1BDBADC(Instance, v28, v48);
  v53 = *((_QWORD *)Instance + 6);
  if ( v53 )
    LODWORD(v53) = *(_DWORD *)(v53 + 28);
  this->fields.skillId3 = v53;
  v54 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7LL; ; ++i )
  {
    Instance = BalanceConfig_TypeInfo;
    v57 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v57 >= *(int *)(*((_QWORD *)Instance + 23) + 56LL) )
      break;
    if ( v57 >= *((unsigned int *)v50 + 6) )
      goto LABEL_72;
    if ( v50[i] )
    {
      v58 = (AddSkillInfoData_o *)sub_1BDBAC4(AddSkillInfoData_TypeInfo);
      AddSkillInfoData___ctor(v58, 0LL);
      if ( v57 >= *((unsigned int *)v50 + 6) )
        goto LABEL_72;
      v60 = v50[i];
      if ( !v60 )
        goto LABEL_71;
      if ( !v58 )
        goto LABEL_71;
      v58->fields.num = *(_DWORD *)(v60 + 20);
      v58->fields.skillId = *(_DWORD *)(v60 + 28);
      if ( !v54 )
        goto LABEL_71;
      items = v54->fields._items;
      v62 = Method_System_Collections_Generic_List_AddSkillInfoData__Add__;
      ++v54->fields._version;
      if ( !items )
        goto LABEL_71;
      size = v54->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v54,
          (Il2CppObject *)v58,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        v54->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v58;
        sub_1BDB81C((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v58, v48, v59);
      }
    }
  }
  if ( v54 )
  {
    v65 = System_Collections_Generic_List_object___ToArray(
            v54,
            (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
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
  sub_1BDB81C((CGThumbnailListItem_o *)p_addSkills, v66, v48, v55);
  this->fields.updatedAt = 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_ValueTuple_FuncList_TYPE__int___o __fastcall EquipTargetInfo__GetFriendPointUpTypeVal(
        EquipTargetInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x20
  Il2CppObject *Master_object; // x19
  const MethodInfo *v10; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v12; // x1
  __int128 v13; // x0 OVERLAPPED
  __int64 v14; // x2
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 v16; // x24
  __int64 v17; // x27
  __int64 v18; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B445F0 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__, v5);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B445F0 = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v8;
  *(_QWORD *)&v20.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v20, 0LL) >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v10);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v12);
    v16 = 0LL;
    v17 = 0LL;
    while ( 1 )
    {
      *(_QWORD *)&v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        *(_QWORD *)&v13 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v16 >= *(int *)(*(_QWORD *)(v13 + 184) + 56LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_26;
      if ( v16 >= SkillIdList->max_length )
        goto LABEL_27;
      *((_QWORD *)&v13 + 1) = (unsigned int)SkillIdList->m_Items[v16 + 1];
      if ( SDWORD2(v13) >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_26;
        if ( v16 >= SkillLevelList->max_length )
LABEL_27:
          sub_1BDBADC(v13, *((_QWORD *)&v13 + 1), v14);
        if ( !Master_object )
          goto LABEL_26;
        *(_QWORD *)&v13 = SkillLvMaster__GetEntity(
                            (SkillLvMaster_o *)Master_object,
                            SDWORD2(v13),
                            SkillLevelList->m_Items[v16 + 1],
                            0LL);
        v18 = v13;
        if ( !(_QWORD)v13 )
          *(_QWORD *)&v13 = v17;
        if ( v18 )
        {
          if ( !(_QWORD)v13 )
LABEL_26:
            sub_1BDBAD4(v13, *((_QWORD *)&v13 + 1));
          *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v13 = SkillLvEntity__GetFriendPointUpTypeVal(
                                                                         (SkillLvEntity_o *)v13,
                                                                         0LL);
          v17 = v18;
          if ( (_BYTE)v13 )
            return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v13;
        }
      }
      ++v16;
    }
  }
  *(_QWORD *)&v13 = 0LL;
  DWORD2(v13) = 0;
  return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v13;
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

  if ( (byte_4B445F4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B445F4 = 1;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v16, 0LL);
  if ( !v13 )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v13,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0, 0LL);
LABEL_11:
    sub_1BDBAD4(Instance, v9);
  }
  return v7;
}


void __fastcall EquipTargetInfo__SetImagePartsGroupIdxs(
        EquipTargetInfo_o *this,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ImagePartsGroupIdxs_k__BackingField = imagePartsGroupIdxs;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._ImagePartsGroupIdxs_k__BackingField,
    (int32_t)imagePartsGroupIdxs,
    (int32_t)method,
    v3);
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
  __int64 v20; // x2
  System_Int32_array *SkillLevelList; // x25
  unsigned __int64 i; // x28
  __int64 v23; // x8
  bool v24; // w26
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v26; // x27
  int32_t EventId; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B445F1 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B445F1 = 1;
  }
  if ( !setupInfo )
    return 0;
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v13;
  *(_QWORD *)&v31.fields.fakeValue = v12;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v31, 0LL) < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1BDBAD4(Instance, v15);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    v23 = *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 56LL);
    v24 = (__int64)i < v23;
    if ( (__int64)i >= v23 )
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
        sub_1BDBADC(Instance, v15, v20);
      if ( !MasterData_object )
        goto LABEL_23;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)MasterData_object,
                 (int32_t)v15,
                 SkillLevelList->m_Items[i + 1],
                 0LL);
      if ( Entity )
      {
        v26 = Entity;
        EventId = EventUpValSetupInfo__get_EventId(setupInfo, v15);
        if ( SkillLvEntity__getEventUpVal(
               v26,
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
  return v24;
}


bool __fastcall EquipTargetInfo__getEventUpVal_40714524(
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
  __int64 v19; // x2
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v21; // x25
  bool v22; // w24
  bool v23; // w22
  SkillLvEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B445F2 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B445F2 = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v11;
  *(_QWORD *)&v25.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v25, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_25;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_25:
    sub_1BDBAD4(Instance, v13);
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v16);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v18);
  v21 = 0LL;
  v22 = 0;
  v23 = isSupport;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v21 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 56LL) )
      return v22;
    if ( !SkillIdList )
      goto LABEL_25;
    if ( v21 >= SkillIdList->max_length )
      goto LABEL_26;
    v13 = (unsigned int)SkillIdList->m_Items[v21 + 1];
    if ( (int)v13 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_25;
      if ( v21 >= SkillLevelList->max_length )
LABEL_26:
        sub_1BDBADC(Instance, v13, v19);
      if ( !MasterData_object )
        goto LABEL_25;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)MasterData_object,
                 v13,
                 SkillLevelList->m_Items[v21 + 1],
                 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_41841520(Entity, eventUpVallInfo, 1, 0, v23, 0, 0LL, 0LL) )
          v22 = 1;
      }
    }
    ++v21;
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

  if ( (byte_4B445F3 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B445F3 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v14;
  *(_QWORD *)&v29.fields.fakeValue = v13;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v29, 0LL) < 1 )
  {
    result = 0;
    v27 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
    v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v19;
    *(_QWORD *)&v30.fields.fakeValue = v18;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v30, 0LL);
    if ( !v20 )
      goto LABEL_25;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v22) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
      sub_1BDBAD4(Instance, v16);
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

  if ( (byte_4B445EC & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B445EC = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v14, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v15, 0LL);
  if ( !v12 || (Instance = ServantLimitMaster__GetEntity(v12, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_13:
    sub_1BDBAD4(Instance, v8);
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
  __int64 v7; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v9; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v11; // x22
  __int64 v12; // x23
  AddSkillInfoData_o *v13; // x10

  if ( (byte_4B445ED & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&int___TypeInfo, v3);
    byte_4B445ED = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1BDB920(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
LABEL_21:
    sub_1BDBAD4(v5, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v9 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_23:
    sub_1BDBADC(v5, v6, v7);
  }
  v5->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v11 = 0LL;
    v12 = 0x300000000LL;
    while ( (__int64)v11 < (int)addSkills->max_length )
    {
      v5 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v5 = BalanceConfig_TypeInfo;
      }
      addSkills = this->fields.addSkills;
      if ( v5->static_fields->SvtEquipSkillListMax > (int)v11 + 3 )
      {
        if ( !addSkills )
          goto LABEL_21;
        if ( v11 >= addSkills->max_length )
          goto LABEL_23;
        v13 = addSkills->m_Items[v11];
        if ( !v13 )
          goto LABEL_21;
        if ( v11 + 3 >= v9->max_length )
          goto LABEL_23;
        *(int32_t *)((char *)&v9->m_Items[1] + (v12 >> 30)) = v13->fields.skillId;
      }
      ++v11;
      v12 += 0x100000000LL;
      if ( !addSkills )
        goto LABEL_21;
    }
  }
  return v9;
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
  const MethodInfo *v13; // x3
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
  __int64 v25; // x2
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v27; // x28
  il2cpp_array_size_t v28; // w19
  int32_t *v29; // x29
  Il2CppObject *Entity; // x0
  SkillEntity_o *v31; // x24
  __int64 v32; // x23
  int32_t v33; // w1
  System_String_o *EffectTitle; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *EffectExplanation; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  SkillInfo_array *v40; // x24
  const MethodInfo *v41; // x3
  Il2CppClass **v42; // x0
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B445EF & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_1BDB878(&SkillInfo___TypeInfo, v8);
    sub_1BDB878(&SkillInfo_TypeInfo, v9);
    byte_4B445EF = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (SkillInfo_array *)sub_1BDB920(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v11;
  sub_1BDB81C((CGThumbnailListItem_o *)skillInfoList, (int32_t)v11, v12, v13);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v15;
  *(_QWORD *)&v45.fields.fakeValue = v14;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v45, 0LL) >= 1 )
  {
    v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C2BF08(v17);
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C2BF08(v17);
    v20 = **(BalanceConfig_c ***)(v19 + 184);
    if ( !v20 )
LABEL_32:
      sub_1BDBAD4(v20, v16);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v20,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v22);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v24);
    v27 = 0LL;
    v28 = 0;
    v29 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      v20 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v20 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v27 >= v20->static_fields->SvtEquipSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_32;
      if ( v27 >= SkillIdList->max_length )
LABEL_33:
        sub_1BDBADC(v20, v16, v25);
      v16 = (unsigned int)v29[v27];
      if ( (int)v16 >= 1 )
      {
        if ( !MasterData_object )
          goto LABEL_32;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v16,
                   (const MethodInfo_32E1E3C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v31 = (SkillEntity_o *)Entity;
          v32 = sub_1BDBAC4(SkillInfo_TypeInfo);
          SkillInfo___ctor((SkillInfo_o *)v32, 0LL);
          if ( v27 >= SkillIdList->max_length )
            goto LABEL_33;
          if ( !v32 )
            goto LABEL_32;
          *(_DWORD *)(v32 + 16) = v29[v27];
          if ( !SkillLevelList )
            goto LABEL_32;
          if ( v27 >= SkillLevelList->max_length )
            goto LABEL_33;
          v33 = SkillLevelList->m_Items[v27 + 1];
          *(_DWORD *)(v32 + 20) = v33;
          *(_DWORD *)(v32 + 24) = SkillEntity__getEffectChargeTurn(v31, v33, 0LL);
          EffectTitle = SkillEntity__getEffectTitle(v31, 0, 0LL);
          *(_QWORD *)(v32 + 32) = EffectTitle;
          sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 32), (int32_t)EffectTitle, v35, v36);
          EffectExplanation = SkillEntity__getEffectExplanation(v31, *(_DWORD *)(v32 + 20), 0LL);
          *(_QWORD *)(v32 + 40) = EffectExplanation;
          sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 40), (int32_t)EffectExplanation, v38, v39);
          *(_BYTE *)(v32 + 56) = 1;
          v40 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_32;
          v20 = (BalanceConfig_c *)sub_1BDB9B4(v32, v40->obj.klass->_1.element_class);
          if ( !v20 )
          {
            v43 = sub_1BDBAF8(0LL);
            sub_1BDB9A0(v43, 0LL);
          }
          if ( v28 >= v40->max_length )
            goto LABEL_33;
          v42 = &v40->obj.klass + (int)v28;
          v42[4] = (Il2CppClass *)v32;
          sub_1BDB81C((CGThumbnailListItem_o *)(v42 + 4), v32, v25, v41);
          ++v28;
        }
      }
      ++v27;
    }
  }
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v9; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v11; // x25
  __int64 v12; // x22

  if ( (byte_4B445EE & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&int___TypeInfo, v3);
    byte_4B445EE = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1BDB920(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
LABEL_18:
    sub_1BDBAD4(v5, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v9 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_20:
    sub_1BDBADC(v5, v6, v7);
  }
  v5->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v11 = 0LL;
    v12 = 0x300000000LL;
    while ( v11 < (int)addSkills->max_length )
    {
      v5 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v5 = BalanceConfig_TypeInfo;
      }
      if ( v5->static_fields->SvtEquipSkillListMax > (int)v11 + 3 )
      {
        if ( v11 + 3 >= (unsigned __int64)v9->max_length )
          goto LABEL_20;
        *(int32_t *)((char *)&v9->m_Items[1] + (v12 >> 30)) = 1;
      }
      addSkills = this->fields.addSkills;
      v12 += 0x100000000LL;
      ++v11;
      if ( !addSkills )
        goto LABEL_18;
    }
  }
  return v9;
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
  const MethodInfo *v3; // x3

  this->fields._ImagePartsGroupIdxs_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._ImagePartsGroupIdxs_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}