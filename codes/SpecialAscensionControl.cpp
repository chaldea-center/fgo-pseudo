void SpecialAscensionControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C2B225 & 1) == 0 )
  {
    sub_1C2D490(&SpecialAscensionControl_TypeInfo);
    sub_1C2D490(&StringLiteral_3599/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/);
    byte_4C2B225 = 1;
  }
  SpecialAscensionControl_TypeInfo->static_fields->PRIVILEGE_KEY_NAME = (struct System_String_o *)StringLiteral_3599/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_1C2D434((CGThumbnailListItem_o *)SpecialAscensionControl_TypeInfo->static_fields, StringLiteral_3599/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v1, v2);
  SpecialAscensionControl_TypeInfo->static_fields->SPEND_QP_VAL = 0;
}


void SpecialAscensionControl___ctor(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C2B224 & 1) == 0 )
  {
    sub_1C2D490(&CombineMenuControl_TypeInfo);
    byte_4C2B224 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


bool SpecialAscensionControl__CanExeSpecialAscension(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 v4; // x1
  UserServantEntity_o *v5; // x0

  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity || UserServantEntity__isLimitCountMax(baseUserServantEntity, 0) )
    return 0;
  v5 = this->fields.baseUserServantEntity;
  if ( !v5 )
LABEL_9:
    sub_1C2D6EC(v5, v4);
  if ( !UserServantEntity__IsEventJoin(v5, 0) )
  {
    v5 = this->fields.baseUserServantEntity;
    if ( v5 )
      return !UserServantEntity__IsHeroine(v5, 0);
    goto LABEL_9;
  }
  return 0;
}


int32_t SpecialAscensionControl__GetEffectLimitCount(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4C2B220 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2B220 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0;
  v5 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v7, 0);
}


System_Collections_Generic_List_int__o *SpecialAscensionControl__GetEffectRequestItemList(
        SpecialAscensionControl_o *this,
        int32_t limitCnt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  Il2CppObject *Entity; // x20
  CombineLimitEntity_o *v12; // x20
  System_Collections_Generic_List_int__o *v13; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C2B222 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B222 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15, 0);
  if ( !v8
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v8,
                   (int32_t)Instance,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v12 = CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, HIDWORD(Entity[7].klass), limitCnt, 0),
        v13 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v13,
          (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__),
        !v12)
    || !v13 )
  {
LABEL_14:
    sub_1C2D6EC(Instance, v6);
  }
  System_Collections_Generic_List_int___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)v12->fields.itemIds,
    (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
  return v13;
}


void SpecialAscensionControl__GetHpAndAtk(
        SpecialAscensionControl_o *this,
        int32_t *afterHp,
        int32_t *afterAtk,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  ServantLimitMaster_o *v11; // x23
  __int64 v12; // x24
  __int64 v13; // x25
  int32_t v14; // w24
  const MethodInfo *v15; // x1
  CheckCombineResStatus_o *combineResStatus; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C2B221 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B221 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_11;
  v11 = (ServantLimitMaster_o *)Instance;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v17, 0);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v15);
  if ( !v11
    || (Instance = ServantLimitMaster__GetEntity(v11, v14, (int)Instance - 1, 0)) == 0
    || (combineResStatus = this->fields.combineResStatus) == 0 )
  {
LABEL_11:
    sub_1C2D6EC(Instance, v10);
  }
  CheckCombineResStatus__getCombineResStatus(
    combineResStatus,
    afterHp,
    afterAtk,
    userServantEntity,
    *((_DWORD *)Instance + 7),
    0);
}


int32_t SpecialAscensionControl__GetTutorialOpenType(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  return 58;
}


bool SpecialAscensionControl__HaveCombineOtherServant(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  NetworkManager_c *v5; // x0
  int64_t userIdNumber; // x26
  int64_t Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v11; // x24
  int64_t v12; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v13; // x28
  unsigned __int64 v14; // x27
  UserServantEntity_Fields *p_fields; // x29
  __int64 v16; // x22
  __int128 v17; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v18; // x0
  __int128 v19; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v20; // x0
  int64_t v21; // x0
  __int128 v22; // q1
  int64_t v23; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v25; // x26
  UserServantEntity_Fields *v26; // x28
  System_Collections_Generic_List_object__o *v27; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v28; // x20
  uint32_t cctor_finished; // w8
  __int64 v30; // x23
  __int64 v31; // x24
  int32_t v32; // w23
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  int v46; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  char v49; // w19
  int v50; // w20
  int64_t v52; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4C2B21E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B21E = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_62;
  v10 = *(_QWORD *)(Instance + 24);
  v11 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v12 = Instance;
  if ( (int)v10 >= 1 )
  {
    v13 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v14 = 0;
    p_fields = &userSvtEntity->fields;
    v52 = userIdNumber;
    do
    {
      if ( v14 >= (unsigned int)v10 )
        sub_1C2D6F4(Instance, v8, v9);
      v16 = *(_QWORD *)(v12 + 32 + 8 * v14);
      if ( v16 )
      {
        v17 = *(_OWORD *)(v16 + 64);
        v18 = *v13;
        *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)(v16 + 48);
        *(_OWORD *)&v56.fields.fakeValue = v17;
        if ( !v18->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v18);
        v55 = v56;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v55, 0);
        if ( Instance == userIdNumber )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v16, 0);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_62;
            v19 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            v20 = *v13;
            *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v56.fields.fakeValue = v19;
            if ( !v20->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v20);
            v54 = v56;
            v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v54, 0);
            v22 = *(_OWORD *)(v16 + 32);
            v23 = v21;
            *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
            *(_OWORD *)&v53.fields.fakeValue = v22;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v53, 0);
            if ( v23 != Instance )
            {
              v24 = *v11;
              v25 = v13;
              v26 = p_fields;
              v27 = v4;
              v28 = v11;
              cctor_finished = (*v11)->_2.cctor_finished;
              v31 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v30 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !cctor_finished )
                j_il2cpp_runtime_class_init_0(v24);
              *(_QWORD *)&v58.fields.currentCryptoKey = v31;
              *(_QWORD *)&v58.fields.fakeValue = v30;
              v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v58, 0);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v16 + 80),
                           0);
              v11 = v28;
              v4 = v27;
              p_fields = v26;
              v13 = v25;
              userIdNumber = v52;
              if ( v32 == (_DWORD)Instance )
              {
                if ( !v4 )
                  goto LABEL_62;
                items = v4->fields._items;
                v35 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v4->fields._version;
                if ( !items )
                  goto LABEL_62;
                size = v4->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v4,
                    (Il2CppObject *)v16,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                }
                else
                {
                  v37 = &items->obj.klass + size;
                  v4->fields._size = size + 1;
                  v37[4] = (Il2CppClass *)v16;
                  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), v16, v9, v33);
                }
              }
            }
          }
        }
      }
      LODWORD(v10) = *(_DWORD *)(v12 + 24);
    }
    while ( (__int64)++v14 < (int)v10 );
  }
  if ( !v4 )
LABEL_62:
    sub_1C2D6EC(Instance, v8);
  if ( v4->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    v4,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v57 = *(System_Collections_Generic_List_Enumerator_object__o *)&v56.fields.currentCryptoKey;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v38 )
      break;
    current = v57.fields._current;
    if ( !v57.fields._current )
      sub_1C2D6EC(v38, v39);
    if ( SHIDWORD(v57.fields._current[16].klass) >= 2
      || SLODWORD(v57.fields._current[17].monitor) > 1
      || SHIDWORD(v57.fields._current[17].monitor) > 1
      || SLODWORD(v57.fields._current[18].klass) > 1 )
    {
      goto LABEL_55;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v57.fields._current, 0);
    if ( !AppendSkillInfo )
      sub_1C2D6EC(0, v42);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_1C2D6EC(AppendSkillInfo, v42);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( max_length == v46 )
          sub_1C2D6F4(AppendSkillInfo, v42, v43);
        if ( svtSkillLvList->m_Items[v46] >= 2 )
          break;
        if ( max_length == ++v46 )
          goto LABEL_49;
      }
LABEL_55:
      v49 = 1;
      v50 = 9;
      goto LABEL_56;
    }
LABEL_49:
    klass = current[6].klass;
    monitor = current[6].monitor;
    if ( !(*v11)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v11);
    *(_QWORD *)&v59.fields.currentCryptoKey = klass;
    *(_QWORD *)&v59.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v59, 0) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_55;
    }
  }
  v49 = 0;
  v50 = 18;
LABEL_56:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v49 & (v50 == 9);
}


bool SpecialAscensionControl__HaveRequestItemAndQp(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x23
  Il2CppObject *v11; // x19
  System_Collections_Generic_Dictionary_int__int__o *v12; // x20
  struct UserServantEntity_o *v13; // x8
  int32_t v14; // w22
  int v15; // w21
  __int64 v16; // x2
  struct DataMasterBase_array *datalist; // x21
  il2cpp_array_size_t max_length; // x8
  __int64 v19; // x29
  unsigned __int64 v20; // x27
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v29; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v30; // q0
  UserItemMaster_o *v31; // x21
  int64_t v32; // x0
  __int64 v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int v36; // w19
  UserServantEntity_o *v37; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v38; // [xsp+10h] [xbp-E0h]
  int m_CancellationTokenSource; // [xsp+18h] [xbp-D8h]
  int v40; // [xsp+1Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+40h] [xbp-B0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4C2B21F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B21F = 1;
  }
  memset(&v44, 0, 32);
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v10;
  *(_QWORD *)&v45.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v45, 0);
  if ( !v8 )
    goto LABEL_47;
  v11 = DataMasterBase_object__object__int___GetEntity(
          v8,
          (int32_t)Instance,
          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v13 = this->fields.baseUserServantEntity;
  if ( !v13 )
    goto LABEL_47;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                v13->fields.limitCount,
                                0);
  if ( !v11 )
    goto LABEL_47;
  v14 = (int)Instance;
  v37 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v11[5].monitor) )
  {
    v15 = 0;
    v38 = v11;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_47;
      v40 = v15;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v11[7].klass),
                                    v14,
                                    0);
      if ( !Instance )
        goto LABEL_47;
      datalist = Instance->fields.datalist;
      if ( !datalist )
        goto LABEL_47;
      max_length = datalist->max_length;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      if ( (int)max_length >= 1 )
        break;
LABEL_25:
      v11 = v38;
      ++v14;
      v15 = m_CancellationTokenSource + v40;
      if ( v14 >= SLODWORD(v38[5].monitor) )
        goto LABEL_28;
    }
    v19 = *(_QWORD *)&Instance->fields._DispLog;
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)max_length )
        goto LABEL_48;
      if ( !v19 )
        break;
      if ( v20 >= *(unsigned int *)(v19 + 24) )
LABEL_48:
        sub_1C2D6F4(Instance, v6, v16);
      if ( !v12 )
        break;
      v21 = *((_DWORD *)datalist->m_Items + v20);
      v22 = *(_DWORD *)(v19 + 32 + 4 * v20);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v12,
             v21,
             (const MethodInfo_33D89B0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v22 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v12,
                 v21,
                 (const MethodInfo_33D8728 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v12,
          v21,
          (const MethodInfo_33D9B7C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v12,
        v21,
        v22,
        (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(max_length) = datalist->max_length;
      if ( (__int64)++v20 >= (int)max_length )
        goto LABEL_25;
    }
LABEL_47:
    sub_1C2D6EC(Instance, v6);
  }
  v15 = 0;
LABEL_28:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_47;
  if ( (__int64)Instance->fields.lockCountObj < v15 )
    return 0;
  if ( !v12 )
    goto LABEL_47;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v42,
    v12,
    (const MethodInfo_33D8B9C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v44.fields._dictionary = *(_OWORD *)&v42.fields._dictionary;
  v44.fields._current = v42.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v44,
            (const MethodInfo_3536774 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v44.fields._current.fields.key;
    key_high = HIDWORD(v44.fields._current.fields.key);
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v26 )
      sub_1C2D6EC(0, v27);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v26,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v37 )
      sub_1C2D6EC(MasterData_object, v29);
    v30 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v37->fields.userId.fields.fakeValue;
    v31 = (UserItemMaster_o *)MasterData_object;
    *(_OWORD *)&v42.fields._dictionary = *(_OWORD *)&v37->fields.userId.fields.currentCryptoKey;
    v42.fields._current = v30;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v42.fields._dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v41.fields.fakeValue = v42.fields._current;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v41, 0);
    if ( !v31 )
      sub_1C2D6EC(v32, v33);
    v34 = UserItemMaster__TryGetEntity(v31, &entity, v32, key, 0);
    if ( v34 )
    {
      if ( !entity )
        sub_1C2D6EC(v34, v35);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v36 = 12;
    goto LABEL_45;
  }
  v36 = 13;
LABEL_45:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v44,
    (const MethodInfo_3536874 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v36 != 12;
}


void SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_4C2B223 & 1) == 0 )
  {
    sub_1C2D490(&Method_SpecialAscensionControl_OnClickHelp__);
    byte_4C2B223 = 1;
  }
  if ( !this->fields.helpSeSilent )
  {
    v3 = Method_SpecialAscensionControl_OnClickHelp__;
    if ( (*((_BYTE *)Method_SpecialAscensionControl_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SpecialAscensionControl_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  }
  v5 = ((__int64 (__fastcall *)(SpecialAscensionControl_o *, const MethodInfo *))this->klass->vtable._6_GetTutorialOpenType.methodPtr)(
         this,
         this->klass->vtable._6_GetTutorialOpenType.method);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v5, 0, 0, 0);
}


void SpecialAscensionControl__OnClickSpecialAscension(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  _BOOL8 CanExeSpecialAscension; // x0
  const MethodInfo *v4; // x2
  UserServantEntity_o *baseUserServantEntity; // x20
  SetRarityDialogControl_o *exeCombineDlg; // x19
  bool HaveCombineOtherServant; // w22
  const MethodInfo *v8; // x2
  _BOOL8 HaveRequestItemAndQp; // x0
  __int64 v10; // x1

  CanExeSpecialAscension = SpecialAscensionControl__CanExeSpecialAscension(this, method);
  if ( CanExeSpecialAscension )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    exeCombineDlg = this->fields.exeCombineDlg;
    this->fields.pushExeButton = 1;
    HaveCombineOtherServant = SpecialAscensionControl__HaveCombineOtherServant(
                                (SpecialAscensionControl_o *)CanExeSpecialAscension,
                                baseUserServantEntity,
                                v4);
    HaveRequestItemAndQp = SpecialAscensionControl__HaveRequestItemAndQp(this, this->fields.baseUserServantEntity, v8);
    if ( !exeCombineDlg )
      sub_1C2D6EC(HaveRequestItemAndQp, v10);
    SetRarityDialogControl__SetSpecialAscension(
      exeCombineDlg,
      baseUserServantEntity,
      1,
      HaveCombineOtherServant,
      HaveRequestItemAndQp,
      0);
  }
}


void SpecialAscensionControl__Refresh(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *selectBaseSvt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.baseUserServantEntity = selectBaseSvt;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBaseSvt, (int32_t)method, v3);
  SpecialAscensionControl__SetStateInfoMsg(this, v5);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    sub_1C2D6EC(0, v6);
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, this->fields.baseUserServantEntity == 0, 0);
  SpecialAscensionControl__SetBaseSvtCardImg(this, v8);
  SpecialAscensionControl__SetCombineInfo(this, v9);
  SpecialAscensionControl__SetExeBtnState(this, v10);
  this->fields.effectCnt = 0;
}


bool SpecialAscensionControl__SelectedBaseSvt(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  return this->fields.baseUserServantEntity != 0;
}


void SpecialAscensionControl__SetBaseSvtCardImg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x2
  struct UICharaGraphTexture_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C2B21C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B21C = 1;
  }
  p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    if ( !*p_charaGraph )
      sub_1C2D6EC(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    *p_charaGraph = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.charaGraph, 0, v7, v8);
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v10 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(SpecialAscensionControl_o *, struct UICharaGraphTexture_o *, struct UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                            this,
                                            this->fields.charaGraph,
                                            baseUserServantEntity,
                                            this->klass->vtable._7_SetCharaGraph.method);
    this->fields.charaGraph = v10;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)v10, v11, v12);
  }
}


void SpecialAscensionControl__SetCombineInfo(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  CombineInfoComponent_o *combineInfoComp; // x0
  __int64 v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x1
  struct UserServantEntity_o *v8; // x8
  ServantLimitMaster_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w22
  struct UserServantEntity_o *v13; // x8
  int32_t v14; // w22
  int32_t LimitCntMax; // w0
  struct UserServantEntity_o *v16; // x8
  int32_t v17; // w9
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C2B21D & 1) == 0 )
  {
    sub_1C2D490(&CombineSvtData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B21D = 1;
  }
  *(_QWORD *)afterAtk = 0;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_23;
  CombineInfoComponent__initStatusInfo(combineInfoComp, 4, 0);
  method = (const MethodInfo *)this->fields.baseUserServantEntity;
  if ( !method )
    return;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_23;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, (UserServantEntity_o *)method, 0);
  v4 = sub_1C2D6DC(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v4, 0);
  if ( !v4 )
    goto LABEL_23;
  baseUserServantEntity = this->fields.baseUserServantEntity;
  *(_QWORD *)(v4 + 16) = baseUserServantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)baseUserServantEntity, v5, v6);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v8 = this->fields.baseUserServantEntity;
  if ( !v8 )
    goto LABEL_23;
  v9 = (ServantLimitMaster_o *)combineInfoComp;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v10;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                v20,
                                                0);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v12 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0);
  if ( !v9 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v9, v12, (int)combineInfoComp - 1, 0);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v4 + 24) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0);
  *(_DWORD *)(v4 + 28) = (_DWORD)combineInfoComp;
  v13 = this->fields.baseUserServantEntity;
  if ( !v13 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                v13->fields.svtId,
                                                0);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v14 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v9, v14, LimitCntMax, 0);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v4 + 32) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.combineResStatus;
  if ( !combineInfoComp )
    goto LABEL_23;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v4 + 24),
    0);
  *(_DWORD *)(v4 + 44) = afterAtk[1];
  v16 = this->fields.baseUserServantEntity;
  if ( !v16
    || (v17 = afterAtk[0],
        *(_DWORD *)(v4 + 48) = v16->fields.adjustHp,
        *(_DWORD *)(v4 + 52) = v17,
        adjustAtk = v16->fields.adjustAtk,
        *(_DWORD *)(v4 + 36) = 1065353216,
        *(_DWORD *)(v4 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0) )
  {
LABEL_23:
    sub_1C2D6EC(combineInfoComp, method);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v4, 0);
}


void SpecialAscensionControl__SetExeBtnState(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtn; // x0
  UIWidget_o *v4; // x20
  Il2CppObject *Component_object; // x19
  const MethodInfo *v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B21A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C2B21A = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            combineBtn,
                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtn;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.combineTxtImg,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  combineBtn = (UnityEngine_Component_o *)SpecialAscensionControl__CanExeSpecialAscension(this, v6);
  if ( ((unsigned __int8)combineBtn & 1) != 0 )
  {
    if ( v4 )
    {
      v7.fields.r = 1.0;
      v7.fields.g = 1.0;
      v7.fields.b = 1.0;
      v7.fields.a = 1.0;
      UIWidget__set_color(v4, v7, 0);
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
        UITweener__PlayForward((UITweener_o *)Component_object, 0);
        return;
      }
    }
LABEL_12:
    sub_1C2D6EC(combineBtn, method);
  }
  if ( !v4 )
    goto LABEL_12;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  UIWidget__set_color(v4, v8, 0);
  if ( !Component_object )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
}


void SpecialAscensionControl__SetStateInfoMsg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v4; // x20
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 *v6; // x8
  UILabel_o *v7; // x8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B21B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5781/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C2D490(&StringLiteral_7447/*"INFO_MSG_SPECIAL_ASCENSION"*/);
    sub_1C2D490(&StringLiteral_8793/*"MSG_LIMITUP_MAX"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B21B = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_18;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_18;
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  v4 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    if ( UserServantEntity__isLimitCountMax(baseUserServantEntity, 0) )
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(v4, v9, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_8793/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_5781/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_7447/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v6, 0);
  v7 = this->fields.detailInfoLb;
  if ( !v7 )
LABEL_18:
    sub_1C2D6EC(detailInfoLb, method);
  UILabel__set_text(v7, (System_String_o *)detailInfoLb, 0);
}


void SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  SpecialAscensionControl_c *klass; // x8
  __int64 v4; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  SpecialAscensionControl_c *v6; // x0
  UILabel_o *qpLb; // x20
  UILabel_o *haveQpLb; // x20
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v10; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B219 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&SpecialAscensionControl_TypeInfo);
    sub_1C2D490(&StringLiteral_8798/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/);
    sub_1C2D490(&StringLiteral_9225/*"N0"*/);
    byte_4C2B219 = 1;
  }
  klass = this->klass;
  this->fields.helpSeSilent = 1;
  ((void (__fastcall *)(SpecialAscensionControl_o *, const MethodInfo *))klass->vtable._5_OnClickHelp.methodPtr)(
    this,
    klass->vtable._5_OnClickHelp.method);
  this->fields.helpSeSilent = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0);
  v6 = SpecialAscensionControl_TypeInfo;
  qpLb = this->fields.qpLb;
  if ( !SpecialAscensionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo);
    v6 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v6->static_fields->SPEND_QP_VAL;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0);
  if ( !qpLb )
    goto LABEL_18;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)baseSelectInfoLb, v12, 0);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)baseSelectInfoLb,
                                                   0);
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)baseSelectInfoLb,
                                                   0);
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  baseSelectInfoLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSelectInfoLb, 0);
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0);
  haveQpLb = this->fields.haveQpLb;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int64__ToString_64973892(
                                                   (int64_t)&baseSelectInfoLb[4],
                                                   (System_String_o *)StringLiteral_9225/*"N0"*/,
                                                   0);
  if ( !haveQpLb )
    goto LABEL_18;
  UILabel__set_text(haveQpLb, (System_String_o *)baseSelectInfoLb, 0);
  this->fields.pushExeButton = 0;
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8798/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0);
  if ( !preSelectBaseLb )
LABEL_18:
    sub_1C2D6EC(baseSelectInfoLb, v4);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0);
  SpecialAscensionControl__Refresh(this, 0, v10);
}


void SpecialAscensionControl__Start(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2B218 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    byte_4C2B218 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C2D6EC(0, v4);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       transform,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)Component_object, v6, v7);
}