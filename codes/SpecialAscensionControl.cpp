void SpecialAscensionControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5974B3F & 1) == 0 )
  {
    sub_2213A60(&SpecialAscensionControl_TypeInfo);
    sub_2213A60(&StringLiteral_3748/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/);
    byte_5974B3F = 1;
  }
  v7 = StringLiteral_3748/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  SpecialAscensionControl_TypeInfo->static_fields->PRIVILEGE_KEY_NAME = (struct System_String_o *)StringLiteral_3748/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SpecialAscensionControl_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  SpecialAscensionControl_TypeInfo->static_fields->SPEND_QP_VAL = 0;
}


void SpecialAscensionControl___ctor(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  if ( (byte_5974B3E & 1) == 0 )
  {
    sub_2213A60(&CombineMenuControl_TypeInfo);
    byte_5974B3E = 1;
  }
  if ( !*(&CombineMenuControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
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
    sub_2213CDC(v5, v4);
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

  if ( (byte_5974B3A & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974B3A = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0;
  v4 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v4;
  *(_QWORD *)&v7.fields.fakeValue = v5;
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0);
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

  if ( (byte_5974B3C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  if ( !v8
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v8,
                   (int32_t)Instance,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v12 = CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, HIDWORD(Entity[7].klass), limitCnt, 0),
        v13 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v13,
          (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__),
        !v12)
    || !v13 )
  {
LABEL_14:
    sub_2213CDC(Instance, v6);
  }
  System_Collections_Generic_List_int___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)v12->fields.itemIds,
    (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
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

  if ( (byte_5974B3B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B3B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_11;
  v11 = (ServantLimitMaster_o *)Instance;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v15);
  if ( !v11
    || (Instance = ServantLimitMaster__GetEntity(v11, v14, (int)Instance - 1, 0)) == 0
    || (combineResStatus = this->fields.combineResStatus) == 0 )
  {
LABEL_11:
    sub_2213CDC(Instance, v10);
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
  __int64 v5; // x1
  NetworkManager_c *v6; // x0
  int64_t userIdNumber; // x26
  int64_t Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  int64_t v11; // x21
  unsigned __int64 v12; // x27
  __int64 v13; // x22
  __int128 v14; // q1
  int v15; // w8
  __int128 v16; // q1
  int v17; // w8
  int64_t v18; // x0
  __int128 v19; // q0
  int64_t v20; // x23
  __int64 v21; // x23
  __int64 v22; // x24
  int32_t v23; // w23
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  _BOOL8 v34; // x0
  __int64 v35; // x1
  char v36; // w19
  Il2CppObject *current; // x20
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v39; // x1
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  int v42; // w11
  Il2CppClass *klass; // x21
  void *monitor; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_5974B38 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B38 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_63;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_63;
  v10 = *(_QWORD *)(Instance + 24);
  v11 = Instance;
  if ( (int)v10 >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)v10 )
        sub_2213CE4(Instance);
      v13 = *(_QWORD *)(v11 + 32 + 8 * v12);
      if ( v13 )
      {
        v14 = *(_OWORD *)(v13 + 64);
        v15 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v13 + 48);
        *(_OWORD *)&v49.fields.fakeValue = v14;
        if ( !v15 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
        v48 = v49;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v48, 0);
        if ( Instance == userIdNumber )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v13, 0);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_63;
            v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v49.fields.fakeValue = v16;
            if ( !v17 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
            v47 = v49;
            v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v47, 0);
            v19 = *(_OWORD *)(v13 + 32);
            v20 = v18;
            *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(v13 + 16);
            *(_OWORD *)&v46.fields.fakeValue = v19;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v46, 0);
            if ( v20 != Instance )
            {
              v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
              *(_QWORD *)&v51.fields.currentCryptoKey = v21;
              *(_QWORD *)&v51.fields.fakeValue = v22;
              v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v51, 0);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v13 + 80),
                           0);
              if ( v23 == (_DWORD)Instance )
              {
                if ( !v4 )
                  goto LABEL_63;
                items = v4->fields._items;
                v31 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v4->fields._version;
                if ( !items )
                  goto LABEL_63;
                size = v4->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v4,
                    (Il2CppObject *)v13,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = &items->obj.klass + size;
                  v4->fields._size = size + 1;
                  v33[4] = (Il2CppClass *)v13;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), v13, v24, v25, v26, v27, v28, v29);
                }
              }
            }
          }
        }
      }
      LODWORD(v10) = *(_DWORD *)(v11 + 24);
    }
    while ( (__int64)++v12 < (int)v10 );
  }
  if ( !v4 )
LABEL_63:
    sub_2213CDC(Instance, v9);
  if ( v4->fields._size < 1 )
  {
    v36 = 0;
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      v4,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    v50 = *(System_Collections_Generic_List_Enumerator_object__o *)&v49.fields.currentCryptoKey;
    v49.fields.currentCryptoKey = 0;
    v49.fields.hiddenValue = (int64_t)&v50;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
      v36 = v34;
      if ( !v34 )
        break;
      current = v50.fields._current;
      if ( !v50.fields._current )
        sub_2213CDC(v34, v35);
      if ( SHIDWORD(v50.fields._current[25].klass) >= 2
        || SLODWORD(v50.fields._current[26].monitor) > 1
        || SHIDWORD(v50.fields._current[26].monitor) > 1
        || SLODWORD(v50.fields._current[27].klass) > 1 )
      {
        goto LABEL_56;
      }
      AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v50.fields._current, 0);
      if ( !AppendSkillInfo )
        sub_2213CDC(0, v39);
      svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        sub_2213CDC(AppendSkillInfo, v39);
      max_length = svtSkillLvList->max_length;
      if ( max_length >= 1 )
      {
        v42 = 0;
        while ( 1 )
        {
          if ( max_length == v42 )
            sub_2213CE4(AppendSkillInfo);
          if ( svtSkillLvList->m_Items[v42] >= 2 )
            break;
          if ( (max_length & ~(max_length >> 31)) == ++v42 )
            goto LABEL_49;
        }
LABEL_56:
        v36 = 1;
        goto LABEL_57;
      }
LABEL_49:
      klass = current[6].klass;
      monitor = current[6].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
      *(_QWORD *)&v52.fields.currentCryptoKey = klass;
      *(_QWORD *)&v52.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v52, 0) >= 1
        || SLODWORD(current[26].klass) > 0
        || SHIDWORD(current[26].klass) > 0
        || SHIDWORD(current[25].klass) > 0 )
      {
        goto LABEL_57;
      }
    }
    v36 = 0;
LABEL_57:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  }
  return v36 & 1;
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
  Il2CppObject *v11; // x23
  System_Collections_Generic_Dictionary_int__int__o *v12; // x20
  struct UserServantEntity_o *v13; // x8
  int32_t v14; // w22
  int v15; // w21
  struct DataMasterBase_array *datalist; // x21
  il2cpp_array_size_t max_length; // x8
  __int64 v18; // x29
  unsigned __int64 v19; // x27
  int32_t v20; // w23
  int32_t v21; // w24
  bool v22; // w19
  bool v23; // w20
  int32_t key; // w21
  int32_t key_high; // w25
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v29; // x1
  UserItemMaster_o *v30; // x22
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v31; // q1
  int v32; // w8
  int64_t v33; // x0
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 v36; // x1
  UserServantEntity_o *v38; // [xsp+8h] [xbp-F8h]
  Il2CppObject *v39; // [xsp+10h] [xbp-F0h]
  int m_CancellationTokenSource; // [xsp+18h] [xbp-E8h]
  int v41; // [xsp+1Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-E0h] BYREF
  __int64 v43; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v44; // [xsp+48h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+50h] [xbp-B0h] BYREF
  UserItemEntity_o *entity; // [xsp+78h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+80h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_5974B39 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B39 = 1;
  }
  memset(&v47, 0, 32);
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_45;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v48.fields.currentCryptoKey = v9;
  *(_QWORD *)&v48.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v48, 0);
  if ( !v8 )
    goto LABEL_45;
  v11 = DataMasterBase_object__object__int___GetEntity(
          v8,
          (int32_t)Instance,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v13 = this->fields.baseUserServantEntity;
  if ( !v13 )
    goto LABEL_45;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                v13->fields.limitCount,
                                0);
  if ( !v11 )
    goto LABEL_45;
  v14 = (int)Instance;
  v38 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v11[5].monitor) )
  {
    v15 = 0;
    v39 = v11;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_45;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_45;
      v41 = v15;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v11[7].klass),
                                    v14,
                                    0);
      if ( !Instance )
        goto LABEL_45;
      datalist = Instance->fields.datalist;
      if ( !datalist )
        goto LABEL_45;
      max_length = datalist->max_length;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      if ( (int)max_length >= 1 )
        break;
LABEL_25:
      v11 = v39;
      ++v14;
      v15 = m_CancellationTokenSource + v41;
      if ( v14 >= SLODWORD(v39[5].monitor) )
        goto LABEL_28;
    }
    v18 = *(_QWORD *)&Instance->fields._DispLog;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
        goto LABEL_46;
      if ( !v18 )
        break;
      if ( v19 >= *(unsigned int *)(v18 + 24) )
LABEL_46:
        sub_2213CE4(Instance);
      if ( !v12 )
        break;
      v20 = *((_DWORD *)datalist->m_Items + v19);
      v21 = *(_DWORD *)(v18 + 32 + 4 * v19);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v12,
             v20,
             (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v21 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v12,
                 v20,
                 (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v12,
          v20,
          (const MethodInfo_3F93FF4 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v12,
        v20,
        v21,
        (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(max_length) = datalist->max_length;
      if ( (__int64)++v19 >= (int)max_length )
        goto LABEL_25;
    }
LABEL_45:
    sub_2213CDC(Instance, v6);
  }
  v15 = 0;
LABEL_28:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_45;
  if ( (__int64)Instance->fields.lockCountObj >= v15 )
  {
    if ( !v12 )
      goto LABEL_45;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      &v45,
      v12,
      (const MethodInfo_3F92FF8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    *(_OWORD *)&v47.fields._dictionary = *(_OWORD *)&v45.fields._dictionary;
    v47.fields._current = v45.fields._current;
    v43 = 0;
    v44 = &v47;
    do
    {
      v23 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v47,
              (const MethodInfo_4156B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
      if ( !v23 )
        break;
      key = (int32_t)v47.fields._current.fields.key;
      key_high = HIDWORD(v47.fields._current.fields.key);
      v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v26 )
        sub_2213CDC(0, v27);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)v26,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !v38 )
        sub_2213CDC(MasterData_object, v29);
      v30 = (UserItemMaster_o *)MasterData_object;
      v31 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v38->fields.userId.fields.fakeValue;
      v32 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v45.fields._dictionary = *(_OWORD *)&v38->fields.userId.fields.currentCryptoKey;
      v45.fields._current = v31;
      if ( !v32 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29);
      *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v45.fields._dictionary;
      *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v42.fields.fakeValue = v45.fields._current;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v42, 0);
      if ( !v30 )
        sub_2213CDC(v33, v34);
      v35 = UserItemMaster__TryGetEntity(v30, &entity, v33, key, 0);
      if ( !v35 )
        break;
      if ( !entity )
        sub_2213CDC(v35, v36);
    }
    while ( entity->fields.itemId != key || entity->fields.num >= key_high );
    v22 = !v23;
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v47,
      (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  }
  else
  {
    return 0;
  }
  return v22;
}


void SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_5974B3D & 1) == 0 )
  {
    sub_2213A60(&Method_SpecialAscensionControl_OnClickHelp__);
    byte_5974B3D = 1;
  }
  if ( !this->fields.helpSeSilent )
  {
    v3 = Method_SpecialAscensionControl_OnClickHelp__;
    if ( (*((_BYTE *)Method_SpecialAscensionControl_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SpecialAscensionControl_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UserServantEntity_o *baseUserServantEntity; // x20
  SetRarityDialogControl_o *exeCombineDlg; // x19
  bool HaveCombineOtherServant; // w22
  const MethodInfo *v9; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8

  CanExeSpecialAscension = SpecialAscensionControl__CanExeSpecialAscension(this, method);
  if ( CanExeSpecialAscension )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    exeCombineDlg = this->fields.exeCombineDlg;
    this->fields.pushExeButton = 1;
    HaveCombineOtherServant = SpecialAscensionControl__HaveCombineOtherServant(
                                (SpecialAscensionControl_o *)CanExeSpecialAscension,
                                baseUserServantEntity,
                                v5);
    CanExeSpecialAscension = SpecialAscensionControl__HaveRequestItemAndQp(this, this->fields.baseUserServantEntity, v9);
    if ( exeCombineDlg )
    {
      SetRarityDialogControl__SetSpecialAscension(
        exeCombineDlg,
        baseUserServantEntity,
        1,
        HaveCombineOtherServant,
        CanExeSpecialAscension,
        0);
      return;
    }
LABEL_6:
    sub_2213CDC(CanExeSpecialAscension, v4);
  }
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_6;
  combineRootComponent->fields._IsExeButtonProcessing_k__BackingField = 0;
}


void SpecialAscensionControl__Refresh(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *selectBaseSvt,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  this->fields.baseUserServantEntity = selectBaseSvt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBaseSvt,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SpecialAscensionControl__SetStateInfoMsg(this, v9);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    sub_2213CDC(0, v10);
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, this->fields.baseUserServantEntity == 0, 0);
  SpecialAscensionControl__SetBaseSvtCardImg(this, v12);
  SpecialAscensionControl__SetCombineInfo(this, v13);
  SpecialAscensionControl__SetExeBtnState(this, v14);
  this->fields.effectCnt = 0;
}


bool SpecialAscensionControl__SelectedBaseSvt(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  return this->fields.baseUserServantEntity != 0;
}


void SpecialAscensionControl__SetBaseSvtCardImg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UserServantEntity_o *baseUserServantEntity; // x2
  struct UICharaGraphTexture_o *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5974B36 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B36 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.charaGraph;
    if ( !v5 )
      sub_2213CDC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    this->fields.charaGraph = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, 0, v8, v9, v10, v11, v12, v13);
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v15 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(SpecialAscensionControl_o *, struct UICharaGraphTexture_o *, struct UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                            this,
                                            this->fields.charaGraph,
                                            baseUserServantEntity,
                                            this->klass->vtable._7_SetCharaGraph.method);
    this->fields.charaGraph = v15;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph,
      (int32_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
}


void SpecialAscensionControl__SetCombineInfo(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  CombineInfoComponent_o *combineInfoComp; // x0
  __int64 v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct UserServantEntity_o *baseUserServantEntity; // x1
  struct UserServantEntity_o *v12; // x8
  ServantLimitMaster_o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w22
  int m_CancellationTokenSource_high; // w8
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w22
  int32_t LimitCntMax; // w0
  int v21; // w8
  struct UserServantEntity_o *v22; // x8
  int32_t adjustHp; // w9
  int32_t v24; // w10
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_5974B37 & 1) == 0 )
  {
    sub_2213A60(&CombineSvtData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B37 = 1;
  }
  combineInfoComp = this->fields.combineInfoComp;
  *(_QWORD *)afterAtk = 0;
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
  v4 = sub_2213CCC(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_23;
  baseUserServantEntity = this->fields.baseUserServantEntity;
  *(_QWORD *)(v4 + 16) = baseUserServantEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)baseUserServantEntity, v5, v6, v7, v8, v9, v10);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v12 = this->fields.baseUserServantEntity;
  if ( !v12 )
    goto LABEL_23;
  v13 = (ServantLimitMaster_o *)combineInfoComp;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v27.fields.currentCryptoKey = v14;
  *(_QWORD *)&v27.fields.fakeValue = v15;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v27,
                                                0);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v16 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0);
  if ( !v13 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v13, v16, (int)combineInfoComp - 1, 0);
  if ( !combineInfoComp )
    goto LABEL_23;
  m_CancellationTokenSource_high = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  *(_DWORD *)(v4 + 24) = m_CancellationTokenSource_high;
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0);
  v18 = this->fields.baseUserServantEntity;
  *(_DWORD *)(v4 + 28) = (_DWORD)combineInfoComp;
  if ( !v18 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v18->fields.svtId,
                                                0);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v19 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v13, v19, LimitCntMax, 0);
  if ( !combineInfoComp )
    goto LABEL_23;
  v21 = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.combineResStatus;
  *(_DWORD *)(v4 + 32) = v21;
  if ( !combineInfoComp )
    goto LABEL_23;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v4 + 24),
    0);
  v22 = this->fields.baseUserServantEntity;
  *(_DWORD *)(v4 + 44) = afterAtk[1];
  if ( !v22 )
    goto LABEL_23;
  adjustHp = v22->fields.adjustHp;
  v24 = afterAtk[0];
  adjustAtk = v22->fields.adjustAtk;
  combineInfoComp = this->fields.combineInfoComp;
  *(_DWORD *)(v4 + 48) = adjustHp;
  *(_DWORD *)(v4 + 52) = v24;
  *(_DWORD *)(v4 + 56) = adjustAtk;
  *(_DWORD *)(v4 + 36) = 1065353216;
  if ( !combineInfoComp )
LABEL_23:
    sub_2213CDC(combineInfoComp, method);
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v4, 0);
}


void SpecialAscensionControl__SetExeBtnState(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtn; // x0
  UIWidget_o *v4; // x21
  Il2CppObject *Component_object; // x19
  const MethodInfo *v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974B34 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_5974B34 = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            combineBtn,
                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtn;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.combineTxtImg,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_2213CDC(combineBtn, method);
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
  __int64 v5; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  LocalizationManager_c *v7; // x0
  __int64 *v8; // x20
  UILabel_o *v9; // x8
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974B35 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_2213A60(&StringLiteral_7774/*"INFO_MSG_SPECIAL_ASCENSION"*/);
    sub_2213A60(&StringLiteral_9165/*"MSG_LIMITUP_MAX"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974B35 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_15:
    sub_2213CDC(detailInfoLb, method);
  }
  v10.fields.r = 0.0;
  v10.fields.a = 1.0;
  v10.fields.g = 0.87891;
  v10.fields.b = 0.98828;
  v4 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v10, 0);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
  {
    v7 = LocalizationManager_TypeInfo;
    v8 = &StringLiteral_7774/*"INFO_MSG_SPECIAL_ASCENSION"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( UserServantEntity__isLimitCountMax(baseUserServantEntity, 0) )
  {
    v11.fields.r = 1.0;
    v11.fields.g = 1.0;
    v11.fields.b = 1.0;
    v11.fields.a = 1.0;
    UIWidget__set_color(v4, v11, 0);
    v7 = LocalizationManager_TypeInfo;
    v8 = &StringLiteral_9165/*"MSG_LIMITUP_MAX"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_11;
    goto LABEL_10;
  }
  v7 = LocalizationManager_TypeInfo;
  v8 = &StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_10:
    j_il2cpp_runtime_class_init_0(v7, v5);
LABEL_11:
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v8, 0);
  v9 = this->fields.detailInfoLb;
  if ( !v9 )
    goto LABEL_15;
  UILabel__set_text(v9, (System_String_o *)detailInfoLb, 0);
}


void SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  SpecialAscensionControl_c *klass; // x8
  const MethodInfo *v4; // x1
  void (__fastcall *methodPtr)(SpecialAscensionControl_o *, const MethodInfo *); // x10
  __int64 v6; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  __int64 v8; // x1
  SpecialAscensionControl_c *v9; // x0
  UILabel_o *qpLb; // x20
  UILabel_o *haveQpLb; // x20
  __int64 v12; // x1
  LocalizationManager_c *v13; // x0
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v15; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974B33 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&SpecialAscensionControl_TypeInfo);
    sub_2213A60(&StringLiteral_9170/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5974B33 = 1;
  }
  klass = this->klass;
  SPEND_QP_VAL = 0;
  methodPtr = (void (__fastcall *)(SpecialAscensionControl_o *, const MethodInfo *))klass->vtable._5_OnClickHelp.methodPtr;
  v4 = klass->vtable._5_OnClickHelp.method;
  this->fields.helpSeSilent = 1;
  methodPtr(this, v4);
  this->fields.helpSeSilent = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0);
  v9 = SpecialAscensionControl_TypeInfo;
  qpLb = this->fields.qpLb;
  if ( !*(&SpecialAscensionControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo, v8);
    v9 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v9->static_fields->SPEND_QP_VAL;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0);
  if ( !qpLb )
    goto LABEL_18;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  v17.fields.r = 1.0;
  v17.fields.g = 1.0;
  v17.fields.b = 1.0;
  v17.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)baseSelectInfoLb, v17, 0);
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int64__ToString_77143864(
                                                   (int64_t)&baseSelectInfoLb[4],
                                                   (System_String_o *)StringLiteral_9617/*"N0"*/,
                                                   0);
  if ( !haveQpLb )
    goto LABEL_18;
  UILabel__set_text(haveQpLb, (System_String_o *)baseSelectInfoLb, 0);
  v13 = LocalizationManager_TypeInfo;
  preSelectBaseLb = this->fields.preSelectBaseLb;
  this->fields.pushExeButton = 0;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, v12);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0);
  if ( !preSelectBaseLb )
LABEL_18:
    sub_2213CDC(baseSelectInfoLb, v6);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0);
  SpecialAscensionControl__Refresh(this, 0, v15);
}


void SpecialAscensionControl__Start(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5974B32 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    byte_5974B32 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       transform,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineResStatus,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}