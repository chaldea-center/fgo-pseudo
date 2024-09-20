void __fastcall SpecialAscensionControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5E9A0 & 1) == 0 )
  {
    sub_1B885B0(&SpecialAscensionControl_TypeInfo);
    sub_1B885B0(&StringLiteral_3683/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/);
    byte_4A5E9A0 = 1;
  }
  SpecialAscensionControl_TypeInfo->static_fields->PRIVILEGE_KEY_NAME = (struct System_String_o *)StringLiteral_3683/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SpecialAscensionControl_TypeInfo->static_fields,
    StringLiteral_3683/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/,
    v1,
    v2);
  SpecialAscensionControl_TypeInfo->static_fields->SPEND_QP_VAL = 0;
}


void __fastcall SpecialAscensionControl___ctor(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E99F & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    byte_4A5E99F = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SpecialAscensionControl__CanExeSpecialAscension(
        SpecialAscensionControl_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 v4; // x1
  UserServantEntity_o *v5; // x0

  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity || UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    return 0;
  v5 = this->fields.baseUserServantEntity;
  if ( !v5 )
LABEL_9:
    sub_1B8880C(v5, v4);
  if ( !UserServantEntity__IsEventJoin(v5, 0LL) )
  {
    v5 = this->fields.baseUserServantEntity;
    if ( v5 )
      return !UserServantEntity__IsHeroine(v5, 0LL);
    goto LABEL_9;
  }
  return 0;
}


int32_t __fastcall SpecialAscensionControl__GetEffectLimitCount(
        SpecialAscensionControl_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4A5E99B & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E99B = 1;
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
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL);
}


System_Collections_Generic_List_int__o *__fastcall SpecialAscensionControl__GetEffectRequestItemList(
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

  if ( (byte_4A5E99D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E99D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  if ( !v8
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v8,
                   (int32_t)Instance,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v12 = CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, HIDWORD(Entity[7].klass), limitCnt, 0LL),
        v13 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v13,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__),
        !v12)
    || !v13 )
  {
LABEL_14:
    sub_1B8880C(Instance, v6);
  }
  System_Collections_Generic_List_int___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)v12->fields.itemIds,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  return v13;
}


void __fastcall SpecialAscensionControl__GetHpAndAtk(
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
  const MethodInfo *v16; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5E99C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E99C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_11;
  v11 = (ServantLimitMaster_o *)Instance;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v15);
  if ( !v11
    || (Instance = ServantLimitMaster__GetEntity(v11, v14, (int)Instance - 1, 0LL)) == 0LL
    || !this->fields.combineResStatus )
  {
LABEL_11:
    sub_1B8880C(Instance, v10);
  }
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)Instance,
    afterHp,
    afterAtk,
    userServantEntity,
    *((_DWORD *)Instance + 7),
    v16);
}


int32_t __fastcall SpecialAscensionControl__GetTutorialOpenType(
        SpecialAscensionControl_o *this,
        const MethodInfo *method)
{
  return 58;
}


bool __fastcall SpecialAscensionControl__HaveCombineOtherServant(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v9; // x25
  int64_t v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v11; // x28
  unsigned __int64 v12; // x27
  UserServantEntity_Fields *p_fields; // x29
  __int64 v14; // x23
  __int128 v15; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v16; // x0
  __int128 v17; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v18; // x0
  int64_t v19; // x0
  __int128 v20; // q1
  int64_t v21; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v23; // x21
  System_Collections_Generic_List_object__o *v24; // x28
  UserServantEntity_Fields *v25; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v26; // x29
  uint32_t cctor_finished; // w8
  __int64 v28; // x24
  __int64 v29; // x25
  int32_t v30; // w24
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v41; // x1
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  int v44; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  char v47; // w19
  int v48; // w20
  int64_t v50; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4A5E999 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E999 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_58;
  v8 = *(_QWORD *)(Instance + 24);
  v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v10 = Instance;
  if ( (int)v8 >= 1 )
  {
    v11 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v12 = 0LL;
    p_fields = &userSvtEntity->fields;
    v50 = UserId;
    do
    {
      if ( v12 >= (unsigned int)v8 )
        sub_1B88814(Instance, v7);
      v14 = *(_QWORD *)(v10 + 32 + 8 * v12);
      if ( v14 )
      {
        v15 = *(_OWORD *)(v14 + 64);
        v16 = *v11;
        *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(v14 + 48);
        *(_OWORD *)&v54.fields.fakeValue = v15;
        if ( !v16->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v16);
        v53 = v54;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v53, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v14, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_58;
            v17 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            v18 = *v11;
            *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v54.fields.fakeValue = v17;
            if ( !v18->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v18);
            v52 = v54;
            v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v52, 0LL);
            v20 = *(_OWORD *)(v14 + 32);
            v21 = v19;
            *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
            *(_OWORD *)&v51.fields.fakeValue = v20;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v51, 0LL);
            if ( v21 != Instance )
            {
              v22 = *v9;
              v23 = v11;
              v24 = v4;
              v25 = p_fields;
              v26 = v9;
              cctor_finished = (*v9)->_2.cctor_finished;
              v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !cctor_finished )
                j_il2cpp_runtime_class_init_0(v22);
              *(_QWORD *)&v56.fields.currentCryptoKey = v29;
              *(_QWORD *)&v56.fields.fakeValue = v28;
              v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v56, 0LL);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v14 + 80),
                           0LL);
              v9 = v26;
              p_fields = v25;
              v4 = v24;
              v11 = v23;
              UserId = v50;
              if ( v30 == (_DWORD)Instance )
              {
                if ( !v4 )
                  goto LABEL_58;
                items = v4->fields._items;
                v34 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v4->fields._version;
                if ( !items )
                  goto LABEL_58;
                size = v4->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v4,
                    (Il2CppObject *)v14,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                }
                else
                {
                  v36 = &items->obj.klass + size;
                  v4->fields._size = size + 1;
                  v36[4] = (Il2CppClass *)v14;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), v14, v31, v32);
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
LABEL_58:
    sub_1B8880C(Instance, v7);
  if ( v4->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v4,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v55 = *(System_Collections_Generic_List_Enumerator_object__o *)&v54.fields.currentCryptoKey;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v55.fields._current;
    if ( !v55.fields._current )
      sub_1B8880C(v37, v38);
    if ( SHIDWORD(v55.fields._current[16].klass) >= 2
      || SLODWORD(v55.fields._current[17].monitor) > 1
      || SHIDWORD(v55.fields._current[17].monitor) > 1
      || SLODWORD(v55.fields._current[18].klass) > 1 )
    {
      goto LABEL_51;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v55.fields._current, 0LL);
    if ( !AppendSkillInfo )
      sub_1B8880C(0LL, v41);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_1B8880C(AppendSkillInfo, v41);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( max_length == v44 )
          sub_1B88814(AppendSkillInfo, v41);
        if ( svtSkillLvList->m_Items[v44 + 1] >= 2 )
          break;
        if ( max_length == ++v44 )
          goto LABEL_45;
      }
LABEL_51:
      v47 = 1;
      v48 = 9;
      goto LABEL_52;
    }
LABEL_45:
    klass = current[6].klass;
    monitor = current[6].monitor;
    if ( !(*v9)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v9);
    *(_QWORD *)&v57.fields.currentCryptoKey = klass;
    *(_QWORD *)&v57.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v57, 0LL) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_51;
    }
  }
  v47 = 0;
  v48 = 18;
LABEL_52:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v47 & (v48 == 9);
}


bool __fastcall SpecialAscensionControl__HaveRequestItemAndQp(
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
  struct DataMasterBase_array *datalist; // x21
  __int64 v17; // x8
  __int64 v18; // x29
  unsigned __int64 v19; // x27
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v28; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v29; // q0
  UserItemMaster_o *v30; // x21
  int64_t v31; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  int v35; // w19
  UserServantEntity_o *v36; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v37; // [xsp+10h] [xbp-E0h]
  int m_CancellationTokenSource; // [xsp+18h] [xbp-D8h]
  int v39; // [xsp+1Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+40h] [xbp-B0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4A5E99A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E99A = 1;
  }
  memset(&v43, 0, 32);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v10;
  *(_QWORD *)&v44.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v44, 0LL);
  if ( !v8 )
    goto LABEL_47;
  v11 = DataMasterBase_object__object__int___GetEntity(
          v8,
          (int32_t)Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v13 = this->fields.baseUserServantEntity;
  if ( !v13 )
    goto LABEL_47;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v13->fields.limitCount,
                                0LL);
  if ( !v11 )
    goto LABEL_47;
  v14 = (int)Instance;
  v36 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v11[5].monitor) )
  {
    v15 = 0;
    v37 = v11;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_47;
      v39 = v15;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v11[7].klass),
                                    v14,
                                    0LL);
      if ( !Instance )
        goto LABEL_47;
      datalist = Instance->fields.datalist;
      if ( !datalist )
        goto LABEL_47;
      v17 = *(_QWORD *)&datalist->max_length;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      if ( (int)v17 >= 1 )
        break;
LABEL_25:
      v11 = v37;
      ++v14;
      v15 = m_CancellationTokenSource + v39;
      if ( v14 >= SLODWORD(v37[5].monitor) )
        goto LABEL_28;
    }
    v18 = *(_QWORD *)&Instance->fields._DispLog;
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
        goto LABEL_48;
      if ( !v18 )
        break;
      if ( v19 >= *(unsigned int *)(v18 + 24) )
LABEL_48:
        sub_1B88814(Instance, v6);
      if ( !v12 )
        break;
      v20 = *((_DWORD *)datalist->m_Items + v19);
      v21 = *(_DWORD *)(v18 + 32 + 4 * v19);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v12,
             v20,
             (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v21 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v12,
                 v20,
                 (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v12,
          v20,
          (const MethodInfo_3166240 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v12,
        v20,
        v21,
        (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(v17) = datalist->max_length;
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_25;
    }
LABEL_47:
    sub_1B8880C(Instance, v6);
  }
  v15 = 0;
LABEL_28:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_47;
  if ( SLODWORD(Instance->fields.lockCountObj) < v15 )
    return 0;
  if ( !v12 )
    goto LABEL_47;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v41,
    v12,
    (const MethodInfo_3165260 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v43.fields._dictionary = *(_OWORD *)&v41.fields._dictionary;
  v43.fields._current = v41.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v43,
            (const MethodInfo_32B5A9C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v43.fields._current.fields.key;
    key_high = HIDWORD(v43.fields._current.fields.key);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v25 )
      sub_1B8880C(0LL, v26);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v25,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v36 )
      sub_1B8880C(MasterData_object, v28);
    v29 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v36->fields.userId.fields.fakeValue;
    v30 = (UserItemMaster_o *)MasterData_object;
    *(_OWORD *)&v41.fields._dictionary = *(_OWORD *)&v36->fields.userId.fields.currentCryptoKey;
    v41.fields._current = v29;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&v41.fields._dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v40.fields.fakeValue = v41.fields._current;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v40, 0LL);
    if ( !v30 )
      sub_1B8880C(v31, v32);
    v33 = UserItemMaster__TryGetEntity(v30, &entity, v31, key, 0LL);
    if ( v33 )
    {
      if ( !entity )
        sub_1B8880C(v33, v34);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v35 = 12;
    goto LABEL_45;
  }
  v35 = 13;
LABEL_45:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v43,
    (const MethodInfo_32B5B9C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v35 != 12;
}


void __fastcall SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_4A5E99E & 1) == 0 )
  {
    sub_1B885B0(&Method_SpecialAscensionControl_OnClickHelp__);
    byte_4A5E99E = 1;
  }
  if ( !this->fields.helpSeSilent )
  {
    v3 = Method_SpecialAscensionControl_OnClickHelp__;
    if ( (*((_BYTE *)Method_SpecialAscensionControl_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SpecialAscensionControl_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  }
  v5 = ((__int64 (__fastcall *)(SpecialAscensionControl_o *, void *))this->klass->vtable._6_GetTutorialOpenType.method)(
         this,
         this->klass[1]._1.image);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v5, 0LL, 0LL);
}


void __fastcall SpecialAscensionControl__OnClickSpecialAscension(
        SpecialAscensionControl_o *this,
        const MethodInfo *method)
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
      sub_1B8880C(HaveRequestItemAndQp, v10);
    SetRarityDialogControl__SetSpecialAscension(
      exeCombineDlg,
      baseUserServantEntity,
      1,
      HaveCombineOtherServant,
      HaveRequestItemAndQp,
      0LL);
  }
}


void __fastcall SpecialAscensionControl__Refresh(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *selectBaseSvt,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.baseUserServantEntity = selectBaseSvt;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBaseSvt,
    (int32_t)method,
    v3);
  SpecialAscensionControl__SetStateInfoMsg(this, v5);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    sub_1B8880C(0LL, v6);
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, this->fields.baseUserServantEntity == 0LL, 0LL);
  SpecialAscensionControl__SetBaseSvtCardImg(this, v8);
  SpecialAscensionControl__SetCombineInfo(this, v9);
  SpecialAscensionControl__SetExeBtnState(this, v10);
  this->fields.effectCnt = 0;
}


bool __fastcall SpecialAscensionControl__SelectedBaseSvt(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  return this->fields.baseUserServantEntity != 0LL;
}


void __fastcall SpecialAscensionControl__SetBaseSvtCardImg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *v7; // x8
  ServantLimitImageMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  int32_t v14; // w21
  UnityEngine_Object_o *gameObject; // x22
  struct UICharaGraphTexture_o *TexturePrefab_37906428; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct UICharaGraphTexture_o **v20; // x0
  struct UICharaGraphTexture_o **v21; // x19
  UnityEngine_Object_o *v22; // x20
  struct UICharaGraphTexture_o *v23; // t1
  UnityEngine_Object_o *v24; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A5E997 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E997 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v7 = this->fields.baseUserServantEntity;
      if ( v7 )
      {
        v8 = (ServantLimitImageMaster_o *)Instance;
        v10 = *(_QWORD *)&v7->fields.svtId.fields.currentCryptoKey;
        v9 = *(_QWORD *)&v7->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v25.fields.currentCryptoKey = v10;
        *(_QWORD *)&v25.fields.fakeValue = v9;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
        if ( v8 )
        {
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         v8,
                                         (int32_t)Instance,
                                         CardImageLimitCount,
                                         0LL);
          p_charaGraph = &this->fields.charaGraph;
          charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
          v14 = ServantImageLimitSealAfter;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
            goto LABEL_16;
          Instance = (DataManager_o *)*p_charaGraph;
          if ( *p_charaGraph )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Instance,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
LABEL_16:
            TexturePrefab_37906428 = CharaGraphManager__CreateTexturePrefab_37906428(
                                       this->fields.charaGraphBase,
                                       this->fields.baseUserServantEntity,
                                       v14,
                                       10,
                                       0LL,
                                       0,
                                       0LL);
            v19 = (int)TexturePrefab_37906428;
            this->fields.charaGraph = TexturePrefab_37906428;
            v20 = &this->fields.charaGraph;
LABEL_24:
            sub_1B88554((ServantStatusBattleListViewItem_o *)v20, v19, v17, v18);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_1B8880C(Instance, v6);
  }
  v23 = this->fields.charaGraph;
  v21 = &this->fields.charaGraph;
  v22 = (UnityEngine_Object_o *)v23;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*v21;
    if ( *v21 )
    {
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v24, 0LL);
      v20 = v21;
      v19 = 0;
      *v21 = 0LL;
      goto LABEL_24;
    }
    goto LABEL_26;
  }
}


void __fastcall SpecialAscensionControl__SetCombineInfo(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CombineInfoComponent_o *combineInfoComp; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct UserServantEntity_o *baseUserServantEntity; // x1
  struct UserServantEntity_o *v10; // x8
  ServantLimitMaster_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w22
  struct UserServantEntity_o *v15; // x8
  int32_t v16; // w22
  int32_t LimitCntMax; // w0
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x2
  struct UserServantEntity_o *v20; // x8
  int32_t v21; // w9
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4A5E998 & 1) == 0 )
  {
    sub_1B885B0(&CombineSvtData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E998 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_23;
  CombineInfoComponent__initStatusInfo(combineInfoComp, 4, v2);
  method = (const MethodInfo *)this->fields.baseUserServantEntity;
  if ( !method )
    return;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_23;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, (UserServantEntity_o *)method, v5);
  v6 = sub_1B887FC(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_23;
  baseUserServantEntity = this->fields.baseUserServantEntity;
  *(_QWORD *)(v6 + 16) = baseUserServantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)baseUserServantEntity, v7, v8);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = this->fields.baseUserServantEntity;
  if ( !v10 )
    goto LABEL_23;
  v11 = (ServantLimitMaster_o *)combineInfoComp;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v13;
  *(_QWORD *)&v24.fields.fakeValue = v12;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                v24,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v14 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  if ( !v11 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v11, v14, (int)combineInfoComp - 1, 0LL);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v6 + 24) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0LL);
  *(_DWORD *)(v6 + 28) = (_DWORD)combineInfoComp;
  v15 = this->fields.baseUserServantEntity;
  if ( !v15 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                v15->fields.svtId,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v16 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v11, v16, LimitCntMax, 0LL);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v6 + 32) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  if ( !this->fields.combineResStatus )
    goto LABEL_23;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v6 + 24),
    v18);
  *(_DWORD *)(v6 + 44) = afterAtk[1];
  v20 = this->fields.baseUserServantEntity;
  if ( !v20
    || (v21 = afterAtk[0],
        *(_DWORD *)(v6 + 48) = v20->fields.adjustHp,
        *(_DWORD *)(v6 + 52) = v21,
        adjustAtk = v20->fields.adjustAtk,
        *(_DWORD *)(v6 + 36) = 1065353216,
        *(_DWORD *)(v6 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(combineInfoComp, method);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v6, v19);
}


void __fastcall SpecialAscensionControl__SetExeBtnState(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtn; // x0
  UIWidget_o *v4; // x20
  Il2CppObject *Component_object; // x19
  const MethodInfo *v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E995 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5E995 = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            combineBtn,
                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtn;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.combineTxtImg,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  combineBtn = (UnityEngine_Component_o *)SpecialAscensionControl__CanExeSpecialAscension(this, v6);
  if ( ((unsigned __int8)combineBtn & 1) != 0 )
  {
    if ( v4 )
    {
      v7.fields.r = 1.0;
      v7.fields.g = 1.0;
      v7.fields.b = 1.0;
      v7.fields.a = 1.0;
      UIWidget__set_color(v4, v7, 0LL);
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)Component_object, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B8880C(combineBtn, method);
  }
  if ( !v4 )
    goto LABEL_12;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  UIWidget__set_color(v4, v8, 0LL);
  if ( !Component_object )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
}


void __fastcall SpecialAscensionControl__SetStateInfoMsg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v4; // x20
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 *v6; // x8
  UILabel_o *v7; // x8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E996 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1B885B0(&StringLiteral_7364/*"INFO_MSG_SPECIAL_ASCENSION"*/);
    sub_1B885B0(&StringLiteral_8759/*"MSG_LIMITUP_MAX"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E996 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_18;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_18;
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  v4 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    if ( UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(v4, v9, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_8759/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_7364/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v6, 0LL);
  v7 = this->fields.detailInfoLb;
  if ( !v7 )
LABEL_18:
    sub_1B8880C(detailInfoLb, method);
  UILabel__set_text(v7, (System_String_o *)detailInfoLb, 0LL);
}


void __fastcall SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
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

  if ( (byte_4A5E994 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&SpecialAscensionControl_TypeInfo);
    sub_1B885B0(&StringLiteral_8764/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E994 = 1;
  }
  klass = this->klass;
  this->fields.helpSeSilent = 1;
  ((void (__fastcall *)(SpecialAscensionControl_o *, Il2CppMethodPointer))klass->vtable._5_OnClickHelp.method)(
    this,
    klass->vtable._6_GetTutorialOpenType.methodPtr);
  this->fields.helpSeSilent = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
  v6 = SpecialAscensionControl_TypeInfo;
  qpLb = this->fields.qpLb;
  if ( !SpecialAscensionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo);
    v6 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v6->static_fields->SPEND_QP_VAL;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0LL);
  if ( !qpLb )
    goto LABEL_18;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)baseSelectInfoLb, v12, 0LL);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)baseSelectInfoLb,
                                                   0LL);
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)baseSelectInfoLb,
                                                   0LL);
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  baseSelectInfoLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSelectInfoLb, 0LL);
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
  haveQpLb = this->fields.haveQpLb;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString_62512312(
                                                   (int)baseSelectInfoLb + 96,
                                                   (System_String_o *)StringLiteral_9206/*"N0"*/,
                                                   0LL);
  if ( !haveQpLb )
    goto LABEL_18;
  UILabel__set_text(haveQpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  this->fields.pushExeButton = 0;
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8764/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !preSelectBaseLb )
LABEL_18:
    sub_1B8880C(baseSelectInfoLb, v4);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0LL);
  SpecialAscensionControl__Refresh(this, 0LL, v10);
}


void __fastcall SpecialAscensionControl__Start(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5E993 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    byte_4A5E993 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B8880C(0LL, v4);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       transform,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineResStatus, (int32_t)Component_object, v6, v7);
}