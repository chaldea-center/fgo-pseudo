void SpecialAscensionControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C3B944 & 1) == 0 )
  {
    sub_1C32C20(&SpecialAscensionControl_TypeInfo);
    sub_1C32C20(&StringLiteral_3606/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/);
    byte_4C3B944 = 1;
  }
  SpecialAscensionControl_TypeInfo->static_fields->PRIVILEGE_KEY_NAME = (struct System_String_o *)StringLiteral_3606/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)SpecialAscensionControl_TypeInfo->static_fields, StringLiteral_3606/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v1, v2);
  SpecialAscensionControl_TypeInfo->static_fields->SPEND_QP_VAL = 0;
}


void SpecialAscensionControl___ctor(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B943 & 1) == 0 )
  {
    sub_1C32C20(&CombineMenuControl_TypeInfo);
    byte_4C3B943 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


bool SpecialAscensionControl__CanExeSpecialAscension(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseUserServantEntity; // x0
  UserServantEntity_o *v4; // x0

  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity || UserServantEntity__isLimitCountMax(baseUserServantEntity, 0) )
    return 0;
  v4 = this->fields.baseUserServantEntity;
  if ( !v4 )
LABEL_9:
    sub_1C32E7C(v4);
  if ( !UserServantEntity__IsEventJoin(v4, 0) )
  {
    v4 = this->fields.baseUserServantEntity;
    if ( v4 )
      return !UserServantEntity__IsHeroine(v4, 0);
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

  if ( (byte_4C3B93F & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3B93F = 1;
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
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v7, 0);
}


System_Collections_Generic_List_int__o *SpecialAscensionControl__GetEffectRequestItemList(
        SpecialAscensionControl_o *this,
        int32_t limitCnt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  Il2CppObject *Entity; // x20
  CombineLimitEntity_o *v11; // x20
  System_Collections_Generic_List_int__o *v12; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C3B941 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B941 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v14, 0);
  if ( !v7
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v7,
                   (int32_t)Instance,
                   (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v11 = CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, HIDWORD(Entity[7].klass), limitCnt, 0),
        v12 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v12,
          (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__),
        !v11)
    || !v12 )
  {
LABEL_14:
    sub_1C32E7C(Instance);
  }
  System_Collections_Generic_List_int___AddRange(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)v11->fields.itemIds,
    (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
  return v12;
}


void SpecialAscensionControl__GetHpAndAtk(
        SpecialAscensionControl_o *this,
        int32_t *afterHp,
        int32_t *afterAtk,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  void *Instance; // x0
  ServantLimitMaster_o *v10; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w24
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x5
  CheckCombineResStatus_o *combineResStatus; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C3B940 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B940 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_11;
  v10 = (ServantLimitMaster_o *)Instance;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v17, 0);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v14);
  if ( !v10
    || (Instance = ServantLimitMaster__GetEntity(v10, v13, (int)Instance - 1, 0)) == 0
    || (combineResStatus = this->fields.combineResStatus) == 0 )
  {
LABEL_11:
    sub_1C32E7C(Instance);
  }
  CheckCombineResStatus__getCombineResStatus(
    combineResStatus,
    afterHp,
    afterAtk,
    userServantEntity,
    *((_DWORD *)Instance + 7),
    v15);
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
  __int64 v8; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v9; // x24
  int64_t v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v11; // x28
  unsigned __int64 v12; // x27
  UserServantEntity_Fields *p_fields; // x29
  __int64 v14; // x22
  __int128 v15; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v16; // x0
  __int128 v17; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v18; // x0
  int64_t v19; // x0
  __int128 v20; // q1
  int64_t v21; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v23; // x26
  UserServantEntity_Fields *v24; // x28
  System_Collections_Generic_List_object__o *v25; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v26; // x20
  uint32_t cctor_finished; // w8
  __int64 v28; // x23
  __int64 v29; // x24
  int32_t v30; // w23
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  _BOOL8 v37; // x0
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  int v42; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  char v45; // w19
  int v46; // w20
  int64_t v48; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4C3B93D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B93D = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_62;
  v8 = *(_QWORD *)(Instance + 24);
  v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v10 = Instance;
  if ( (int)v8 >= 1 )
  {
    v11 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v12 = 0;
    p_fields = &userSvtEntity->fields;
    v48 = userIdNumber;
    do
    {
      if ( v12 >= (unsigned int)v8 )
        sub_1C32E84(Instance);
      v14 = *(_QWORD *)(v10 + 32 + 8 * v12);
      if ( v14 )
      {
        v15 = *(_OWORD *)(v14 + 64);
        v16 = *v11;
        *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v14 + 48);
        *(_OWORD *)&v52.fields.fakeValue = v15;
        if ( !v16->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v16);
        v51 = v52;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v51, 0);
        if ( Instance == userIdNumber )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v14, 0);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_62;
            v17 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            v18 = *v11;
            *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v52.fields.fakeValue = v17;
            if ( !v18->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v18);
            v50 = v52;
            v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v50, 0);
            v20 = *(_OWORD *)(v14 + 32);
            v21 = v19;
            *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
            *(_OWORD *)&v49.fields.fakeValue = v20;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v49, 0);
            if ( v21 != Instance )
            {
              v22 = *v9;
              v23 = v11;
              v24 = p_fields;
              v25 = v4;
              v26 = v9;
              cctor_finished = (*v9)->_2.cctor_finished;
              v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !cctor_finished )
                j_il2cpp_runtime_class_init_0(v22);
              *(_QWORD *)&v54.fields.currentCryptoKey = v29;
              *(_QWORD *)&v54.fields.fakeValue = v28;
              v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v54, 0);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v14 + 80),
                           0);
              v9 = v26;
              v4 = v25;
              p_fields = v24;
              v11 = v23;
              userIdNumber = v48;
              if ( v30 == (_DWORD)Instance )
              {
                if ( !v4 )
                  goto LABEL_62;
                items = v4->fields._items;
                v34 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v4->fields._version;
                if ( !items )
                  goto LABEL_62;
                size = v4->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v4,
                    (Il2CppObject *)v14,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                }
                else
                {
                  v36 = &items->obj.klass + size;
                  v4->fields._size = size + 1;
                  v36[4] = (Il2CppClass *)v14;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 4), v14, v31, v32);
                }
              }
            }
          }
        }
      }
      LODWORD(v8) = *(_DWORD *)(v10 + 24);
    }
    while ( (__int64)++v12 < (int)v8 );
  }
  if ( !v4 )
LABEL_62:
    sub_1C32E7C(Instance);
  if ( v4->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v4,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v53 = *(System_Collections_Generic_List_Enumerator_object__o *)&v52.fields.currentCryptoKey;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v53.fields._current;
    if ( !v53.fields._current )
      sub_1C32E7C(v37);
    if ( SHIDWORD(v53.fields._current[16].klass) >= 2
      || SLODWORD(v53.fields._current[17].monitor) > 1
      || SHIDWORD(v53.fields._current[17].monitor) > 1
      || SLODWORD(v53.fields._current[18].klass) > 1 )
    {
      goto LABEL_55;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v53.fields._current, 0);
    if ( !AppendSkillInfo )
      sub_1C32E7C(0);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_1C32E7C(AppendSkillInfo);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( max_length == v42 )
          sub_1C32E84(AppendSkillInfo);
        if ( svtSkillLvList->m_Items[v42] >= 2 )
          break;
        if ( max_length == ++v42 )
          goto LABEL_49;
      }
LABEL_55:
      v45 = 1;
      v46 = 9;
      goto LABEL_56;
    }
LABEL_49:
    klass = current[6].klass;
    monitor = current[6].monitor;
    if ( !(*v9)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v9);
    *(_QWORD *)&v55.fields.currentCryptoKey = klass;
    *(_QWORD *)&v55.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v55, 0) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_55;
    }
  }
  v45 = 0;
  v46 = 18;
LABEL_56:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v45 & (v46 == 9);
}


bool SpecialAscensionControl__HaveRequestItemAndQp(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x23
  Il2CppObject *v10; // x19
  System_Collections_Generic_Dictionary_int__int__o *v11; // x20
  struct UserServantEntity_o *v12; // x8
  int32_t v13; // w22
  int v14; // w21
  struct DataMasterBase_array *datalist; // x21
  il2cpp_array_size_t max_length; // x8
  __int64 v17; // x29
  unsigned __int64 v18; // x27
  int32_t v19; // w23
  int32_t v20; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  Il2CppObject *v24; // x0
  Il2CppObject *MasterData_object; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v26; // q0
  UserItemMaster_o *v27; // x21
  int64_t v28; // x0
  _BOOL8 v29; // x0
  int v30; // w19
  UserServantEntity_o *v31; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v32; // [xsp+10h] [xbp-E0h]
  int m_CancellationTokenSource; // [xsp+18h] [xbp-D8h]
  int v34; // [xsp+1Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+40h] [xbp-B0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4C3B93E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B93E = 1;
  }
  memset(&v38, 0, 32);
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v9;
  *(_QWORD *)&v39.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v39, 0);
  if ( !v7 )
    goto LABEL_47;
  v10 = DataMasterBase_object__object__int___GetEntity(
          v7,
          (int32_t)Instance,
          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v11,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v12 = this->fields.baseUserServantEntity;
  if ( !v12 )
    goto LABEL_47;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                v12->fields.limitCount,
                                0);
  if ( !v10 )
    goto LABEL_47;
  v13 = (int)Instance;
  v31 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v10[5].monitor) )
  {
    v14 = 0;
    v32 = v10;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_47;
      v34 = v14;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v10[7].klass),
                                    v13,
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
      v10 = v32;
      ++v13;
      v14 = m_CancellationTokenSource + v34;
      if ( v13 >= SLODWORD(v32[5].monitor) )
        goto LABEL_28;
    }
    v17 = *(_QWORD *)&Instance->fields._DispLog;
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)max_length )
        goto LABEL_48;
      if ( !v17 )
        break;
      if ( v18 >= *(unsigned int *)(v17 + 24) )
LABEL_48:
        sub_1C32E84(Instance);
      if ( !v11 )
        break;
      v19 = *((_DWORD *)datalist->m_Items + v18);
      v20 = *(_DWORD *)(v17 + 32 + 4 * v18);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v11,
             v19,
             (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v20 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v11,
                 v19,
                 (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v11,
          v19,
          (const MethodInfo_33E861C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v11,
        v19,
        v20,
        (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(max_length) = datalist->max_length;
      if ( (__int64)++v18 >= (int)max_length )
        goto LABEL_25;
    }
LABEL_47:
    sub_1C32E7C(Instance);
  }
  v14 = 0;
LABEL_28:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_47;
  if ( (__int64)Instance->fields.lockCountObj < v14 )
    return 0;
  if ( !v11 )
    goto LABEL_47;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v36,
    v11,
    (const MethodInfo_33E763C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v38.fields._dictionary = *(_OWORD *)&v36.fields._dictionary;
  v38.fields._current = v36.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v38,
            (const MethodInfo_3545214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v38.fields._current.fields.key;
    key_high = HIDWORD(v38.fields._current.fields.key);
    v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v24 )
      sub_1C32E7C(0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v24,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v31 )
      sub_1C32E7C(MasterData_object);
    v26 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v31->fields.userId.fields.fakeValue;
    v27 = (UserItemMaster_o *)MasterData_object;
    *(_OWORD *)&v36.fields._dictionary = *(_OWORD *)&v31->fields.userId.fields.currentCryptoKey;
    v36.fields._current = v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v36.fields._dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v35.fields.fakeValue = v36.fields._current;
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v35, 0);
    if ( !v27 )
      sub_1C32E7C(v28);
    v29 = UserItemMaster__TryGetEntity(v27, &entity, v28, key, 0);
    if ( v29 )
    {
      if ( !entity )
        sub_1C32E7C(v29);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v30 = 12;
    goto LABEL_45;
  }
  v30 = 13;
LABEL_45:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v38,
    (const MethodInfo_3545314 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v30 != 12;
}


void SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_4C3B942 & 1) == 0 )
  {
    sub_1C32C20(&Method_SpecialAscensionControl_OnClickHelp__);
    byte_4C3B942 = 1;
  }
  if ( !this->fields.helpSeSilent )
  {
    v3 = Method_SpecialAscensionControl_OnClickHelp__;
    if ( (*((_BYTE *)Method_SpecialAscensionControl_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SpecialAscensionControl_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
      sub_1C32E7C(HaveRequestItemAndQp);
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
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  this->fields.baseUserServantEntity = selectBaseSvt;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBaseSvt, (int32_t)method, v3);
  SpecialAscensionControl__SetStateInfoMsg(this, v5);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, this->fields.baseUserServantEntity == 0, 0);
  SpecialAscensionControl__SetBaseSvtCardImg(this, v7);
  SpecialAscensionControl__SetCombineInfo(this, v8);
  SpecialAscensionControl__SetExeBtnState(this, v9);
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
  UnityEngine_Object_o *gameObject; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x2
  struct UICharaGraphTexture_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3B93B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B93B = 1;
  }
  p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    if ( !*p_charaGraph )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_charaGraph = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.charaGraph, 0, v6, v7);
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v9 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(SpecialAscensionControl_o *, struct UICharaGraphTexture_o *, struct UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                           this,
                                           this->fields.charaGraph,
                                           baseUserServantEntity,
                                           this->klass->vtable._7_SetCharaGraph.method);
    this->fields.charaGraph = v9;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)v9, v10, v11);
  }
}


void SpecialAscensionControl__SetCombineInfo(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CombineInfoComponent_o *combineInfoComp; // x0
  const MethodInfo *v5; // x2
  UserServantEntity_o *baseUserServantEntity; // x1
  __int64 v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UserServantEntity_o *v10; // x1
  struct UserServantEntity_o *v11; // x8
  ServantLimitMaster_o *v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w22
  struct UserServantEntity_o *v16; // x8
  int32_t v17; // w22
  int32_t LimitCntMax; // w0
  const MethodInfo *v19; // x5
  const MethodInfo *v20; // x2
  struct UserServantEntity_o *v21; // x8
  int32_t v22; // w9
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4C3B93C & 1) == 0 )
  {
    sub_1C32C20(&CombineSvtData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B93C = 1;
  }
  *(_QWORD *)afterAtk = 0;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_23;
  CombineInfoComponent__initStatusInfo(combineInfoComp, 4, v2);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    return;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_23;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, baseUserServantEntity, v5);
  v7 = sub_1C32E6C(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_23;
  v10 = this->fields.baseUserServantEntity;
  *(_QWORD *)(v7 + 16) = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v10, v8, v9);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = this->fields.baseUserServantEntity;
  if ( !v11 )
    goto LABEL_23;
  v12 = (ServantLimitMaster_o *)combineInfoComp;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v14;
  *(_QWORD *)&v25.fields.fakeValue = v13;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                v25,
                                                0);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v15 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0);
  if ( !v12 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v12, v15, (int)combineInfoComp - 1, 0);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v7 + 24) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0);
  *(_DWORD *)(v7 + 28) = (_DWORD)combineInfoComp;
  v16 = this->fields.baseUserServantEntity;
  if ( !v16 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                v16->fields.svtId,
                                                0);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v17 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v12, v17, LimitCntMax, 0);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v7 + 32) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.combineResStatus;
  if ( !combineInfoComp )
    goto LABEL_23;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v7 + 24),
    v19);
  *(_DWORD *)(v7 + 44) = afterAtk[1];
  v21 = this->fields.baseUserServantEntity;
  if ( !v21
    || (v22 = afterAtk[0],
        *(_DWORD *)(v7 + 48) = v21->fields.adjustHp,
        *(_DWORD *)(v7 + 52) = v22,
        adjustAtk = v21->fields.adjustAtk,
        *(_DWORD *)(v7 + 36) = 1065353216,
        *(_DWORD *)(v7 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0) )
  {
LABEL_23:
    sub_1C32E7C(combineInfoComp);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v7, v20);
}


void SpecialAscensionControl__SetExeBtnState(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtn; // x0
  UIWidget_o *v4; // x20
  Il2CppObject *Component_object; // x19
  const MethodInfo *v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B939 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C3B939 = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            combineBtn,
                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtn;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.combineTxtImg,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C32E7C(combineBtn);
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

  if ( (byte_4C3B93A & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5789/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C32C20(&StringLiteral_7452/*"INFO_MSG_SPECIAL_ASCENSION"*/);
    sub_1C32C20(&StringLiteral_8799/*"MSG_LIMITUP_MAX"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B93A = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_18;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
      v6 = &StringLiteral_8799/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_5789/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_7452/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v6, 0);
  v7 = this->fields.detailInfoLb;
  if ( !v7 )
LABEL_18:
    sub_1C32E7C(detailInfoLb);
  UILabel__set_text(v7, (System_String_o *)detailInfoLb, 0);
}


void SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  SpecialAscensionControl_c *klass; // x8
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  SpecialAscensionControl_c *v5; // x0
  UILabel_o *qpLb; // x20
  UILabel_o *haveQpLb; // x20
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v9; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B938 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&SpecialAscensionControl_TypeInfo);
    sub_1C32C20(&StringLiteral_8804/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/);
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C3B938 = 1;
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
  v5 = SpecialAscensionControl_TypeInfo;
  qpLb = this->fields.qpLb;
  if ( !SpecialAscensionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo);
    v5 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v5->static_fields->SPEND_QP_VAL;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0);
  if ( !qpLb )
    goto LABEL_18;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  v11.fields.r = 1.0;
  v11.fields.g = 1.0;
  v11.fields.b = 1.0;
  v11.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)baseSelectInfoLb, v11, 0);
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int64__ToString_65033828(
                                                   (int64_t)&baseSelectInfoLb[4],
                                                   (System_String_o *)StringLiteral_9231/*"N0"*/,
                                                   0);
  if ( !haveQpLb )
    goto LABEL_18;
  UILabel__set_text(haveQpLb, (System_String_o *)baseSelectInfoLb, 0);
  this->fields.pushExeButton = 0;
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8804/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0);
  if ( !preSelectBaseLb )
LABEL_18:
    sub_1C32E7C(baseSelectInfoLb);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0);
  SpecialAscensionControl__Refresh(this, 0, v9);
}


void SpecialAscensionControl__Start(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3B937 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    byte_4C3B937 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C32E7C(0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       transform,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)Component_object, v5, v6);
}