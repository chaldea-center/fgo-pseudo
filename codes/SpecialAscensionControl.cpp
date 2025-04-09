void __fastcall SpecialAscensionControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_49BE95A & 1) == 0 )
  {
    sub_1B4CF90(&SpecialAscensionControl_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_3584/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v4);
    byte_49BE95A = 1;
  }
  SpecialAscensionControl_TypeInfo->static_fields->PRIVILEGE_KEY_NAME = (struct System_String_o *)StringLiteral_3584/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)SpecialAscensionControl_TypeInfo->static_fields, StringLiteral_3584/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v2, v3);
  SpecialAscensionControl_TypeInfo->static_fields->SPEND_QP_VAL = 0;
}


void __fastcall SpecialAscensionControl___ctor(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  if ( (byte_49BE959 & 1) == 0 )
  {
    sub_1B4CF90(&CombineMenuControl_TypeInfo, method);
    byte_49BE959 = 1;
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
    sub_1B4D1EC(v5, v4);
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

  if ( (byte_49BE955 & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49BE955 = 1;
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
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall SpecialAscensionControl__GetEffectRequestItemList(
        SpecialAscensionControl_o *this,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  Il2CppObject *Entity; // x20
  CombineLimitEntity_o *v19; // x20
  System_Collections_Generic_List_int__o *v20; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49BE957 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CombineLimitMaster___, *(_QWORD *)&limitCnt);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49BE957 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v17;
  *(_QWORD *)&v22.fields.fakeValue = v16;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v22, 0LL);
  if ( !v15
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v15,
                   (int32_t)Instance,
                   (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v19 = CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, HIDWORD(Entity[7].klass), limitCnt, 0LL),
        v20 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v20,
          (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__),
        !v19)
    || !v20 )
  {
LABEL_14:
    sub_1B4D1EC(Instance, v13);
  }
  System_Collections_Generic_List_int___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)v19->fields.itemIds,
    (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
  return v20;
}


void __fastcall SpecialAscensionControl__GetHpAndAtk(
        SpecialAscensionControl_o *this,
        int32_t *afterHp,
        int32_t *afterAtk,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  __int64 v12; // x1
  ServantLimitMaster_o *v13; // x23
  __int64 v14; // x24
  __int64 v15; // x25
  int32_t v16; // w24
  const MethodInfo *v17; // x1
  CheckCombineResStatus_o *combineResStatus; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_49BE956 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitMaster___, afterHp);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49BE956 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_11;
  v13 = (ServantLimitMaster_o *)Instance;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v19, 0LL);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v17);
  if ( !v13
    || (Instance = ServantLimitMaster__GetEntity(v13, v16, (int)Instance - 1, 0LL)) == 0LL
    || (combineResStatus = this->fields.combineResStatus) == 0LL )
  {
LABEL_11:
    sub_1B4D1EC(Instance, v12);
  }
  CheckCombineResStatus__getCombineResStatus(
    combineResStatus,
    afterHp,
    afterAtk,
    userServantEntity,
    *((_DWORD *)Instance + 7),
    0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 v17; // x1
  NetworkManager_c *v18; // x0
  int64_t userIdNumber; // x26
  int64_t Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v23; // x24
  int64_t v24; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v25; // x28
  unsigned __int64 v26; // x27
  UserServantEntity_Fields *p_fields; // x29
  __int64 v28; // x22
  __int128 v29; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v30; // x0
  __int128 v31; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v32; // x0
  int64_t v33; // x0
  __int128 v34; // q1
  int64_t v35; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v37; // x26
  UserServantEntity_Fields *v38; // x28
  System_Collections_Generic_List_object__o *v39; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v40; // x20
  uint32_t cctor_finished; // w8
  __int64 v42; // x23
  __int64 v43; // x24
  int32_t v44; // w23
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  _BOOL8 v51; // x0
  __int64 v52; // x1
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v55; // x1
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  int v58; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  char v61; // w19
  int v62; // w20
  int64_t v64; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_49BE953 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtEntity);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_1B4CF90(&NetworkManager_TypeInfo, v12);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49BE953 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v17);
    byte_49B57A5 = 1;
  }
  v18 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v18 = NetworkManager_TypeInfo;
  }
  userIdNumber = v18->static_fields->userIdNumber;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_62;
  v22 = *(_QWORD *)(Instance + 24);
  v23 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v24 = Instance;
  if ( (int)v22 >= 1 )
  {
    v25 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v26 = 0LL;
    p_fields = &userSvtEntity->fields;
    v64 = userIdNumber;
    do
    {
      if ( v26 >= (unsigned int)v22 )
        sub_1B4D1F4(Instance, v21);
      v28 = *(_QWORD *)(v24 + 32 + 8 * v26);
      if ( v28 )
      {
        v29 = *(_OWORD *)(v28 + 64);
        v30 = *v25;
        *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)(v28 + 48);
        *(_OWORD *)&v68.fields.fakeValue = v29;
        if ( !v30->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v30);
        v67 = v68;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v67, 0LL);
        if ( Instance == userIdNumber )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v28, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_62;
            v31 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            v32 = *v25;
            *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v68.fields.fakeValue = v31;
            if ( !v32->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v32);
            v66 = v68;
            v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v66, 0LL);
            v34 = *(_OWORD *)(v28 + 32);
            v35 = v33;
            *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
            *(_OWORD *)&v65.fields.fakeValue = v34;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v65, 0LL);
            if ( v35 != Instance )
            {
              v36 = *v23;
              v37 = v25;
              v38 = p_fields;
              v39 = v16;
              v40 = v23;
              cctor_finished = (*v23)->_2.cctor_finished;
              v43 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v42 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !cctor_finished )
                j_il2cpp_runtime_class_init_0(v36);
              *(_QWORD *)&v70.fields.currentCryptoKey = v43;
              *(_QWORD *)&v70.fields.fakeValue = v42;
              v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v70, 0LL);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v28 + 80),
                           0LL);
              v23 = v40;
              v16 = v39;
              p_fields = v38;
              v25 = v37;
              userIdNumber = v64;
              if ( v44 == (_DWORD)Instance )
              {
                if ( !v16 )
                  goto LABEL_62;
                items = v16->fields._items;
                v48 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v16->fields._version;
                if ( !items )
                  goto LABEL_62;
                size = v16->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v16,
                    (Il2CppObject *)v28,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                }
                else
                {
                  v50 = &items->obj.klass + size;
                  v16->fields._size = size + 1;
                  v50[4] = (Il2CppClass *)v28;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v50 + 4), v28, v45, v46);
                }
              }
            }
          }
        }
      }
      LODWORD(v22) = *(_DWORD *)(v24 + 24);
    }
    while ( (__int64)++v26 < (int)v22 );
  }
  if ( !v16 )
LABEL_62:
    sub_1B4D1EC(Instance, v21);
  if ( v16->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    v16,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v69 = *(System_Collections_Generic_List_Enumerator_object__o *)&v68.fields.currentCryptoKey;
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v51 )
      break;
    current = v69.fields._current;
    if ( !v69.fields._current )
      sub_1B4D1EC(v51, v52);
    if ( SHIDWORD(v69.fields._current[16].klass) >= 2
      || SLODWORD(v69.fields._current[17].monitor) > 1
      || SHIDWORD(v69.fields._current[17].monitor) > 1
      || SLODWORD(v69.fields._current[18].klass) > 1 )
    {
      goto LABEL_55;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v69.fields._current, 0LL);
    if ( !AppendSkillInfo )
      sub_1B4D1EC(0LL, v55);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_1B4D1EC(AppendSkillInfo, v55);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v58 = 0;
      while ( 1 )
      {
        if ( max_length == v58 )
          sub_1B4D1F4(AppendSkillInfo, v55);
        if ( svtSkillLvList->m_Items[v58 + 1] >= 2 )
          break;
        if ( max_length == ++v58 )
          goto LABEL_49;
      }
LABEL_55:
      v61 = 1;
      v62 = 9;
      goto LABEL_56;
    }
LABEL_49:
    klass = current[6].klass;
    monitor = current[6].monitor;
    if ( !(*v23)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v23);
    *(_QWORD *)&v71.fields.currentCryptoKey = klass;
    *(_QWORD *)&v71.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v71, 0LL) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_55;
    }
  }
  v61 = 0;
  v62 = 18;
LABEL_56:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v61 & (v62 == 9);
}


bool __fastcall SpecialAscensionControl__HaveRequestItemAndQp(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
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
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x20
  __int64 v27; // x21
  __int64 v28; // x23
  Il2CppObject *v29; // x19
  System_Collections_Generic_Dictionary_int__int__o *v30; // x20
  struct UserServantEntity_o *v31; // x8
  int32_t v32; // w22
  int v33; // w21
  struct DataMasterBase_array *datalist; // x21
  __int64 v35; // x8
  __int64 v36; // x29
  unsigned __int64 v37; // x27
  int32_t v38; // w23
  int32_t v39; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v46; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v47; // q0
  UserItemMaster_o *v48; // x21
  int64_t v49; // x0
  __int64 v50; // x1
  _BOOL8 v51; // x0
  __int64 v52; // x1
  int v53; // w19
  UserServantEntity_o *v54; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v55; // [xsp+10h] [xbp-E0h]
  int m_CancellationTokenSource; // [xsp+18h] [xbp-D8h]
  int v57; // [xsp+1Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+40h] [xbp-B0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_49BE954 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CombineLimitMaster___, userSvtEntity);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v19);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49BE954 = 1;
  }
  memset(&v61, 0, 32);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v62.fields.currentCryptoKey = v28;
  *(_QWORD *)&v62.fields.fakeValue = v27;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v62, 0LL);
  if ( !v26 )
    goto LABEL_47;
  v29 = DataMasterBase_object__object__int___GetEntity(
          v26,
          (int32_t)Instance,
          (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_31ED794 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v31 = this->fields.baseUserServantEntity;
  if ( !v31 )
    goto LABEL_47;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                v31->fields.limitCount,
                                0LL);
  if ( !v29 )
    goto LABEL_47;
  v32 = (int)Instance;
  v54 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v29[5].monitor) )
  {
    v33 = 0;
    v55 = v29;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_47;
      v57 = v33;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v29[7].klass),
                                    v32,
                                    0LL);
      if ( !Instance )
        goto LABEL_47;
      datalist = Instance->fields.datalist;
      if ( !datalist )
        goto LABEL_47;
      v35 = *(_QWORD *)&datalist->max_length;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      if ( (int)v35 >= 1 )
        break;
LABEL_25:
      v29 = v55;
      ++v32;
      v33 = m_CancellationTokenSource + v57;
      if ( v32 >= SLODWORD(v55[5].monitor) )
        goto LABEL_28;
    }
    v36 = *(_QWORD *)&Instance->fields._DispLog;
    v37 = 0LL;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)v35 )
        goto LABEL_48;
      if ( !v36 )
        break;
      if ( v37 >= *(unsigned int *)(v36 + 24) )
LABEL_48:
        sub_1B4D1F4(Instance, v24);
      if ( !v30 )
        break;
      v38 = *((_DWORD *)datalist->m_Items + v37);
      v39 = *(_DWORD *)(v36 + 32 + 4 * v37);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v30,
             v38,
             (const MethodInfo_31EE344 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v39 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v30,
                 v38,
                 (const MethodInfo_31EE0BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v30,
          v38,
          (const MethodInfo_31EF510 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v30,
        v38,
        v39,
        (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(v35) = datalist->max_length;
      if ( (__int64)++v37 >= (int)v35 )
        goto LABEL_25;
    }
LABEL_47:
    sub_1B4D1EC(Instance, v24);
  }
  v33 = 0;
LABEL_28:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_47;
  if ( SLODWORD(Instance->fields.lockCountObj) < v33 )
    return 0;
  if ( !v30 )
    goto LABEL_47;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v59,
    v30,
    (const MethodInfo_31EE530 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v61.fields._dictionary = *(_OWORD *)&v59.fields._dictionary;
  v61.fields._current = v59.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v61,
            (const MethodInfo_33432B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v61.fields._current.fields.key;
    key_high = HIDWORD(v61.fields._current.fields.key);
    v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v43 )
      sub_1B4D1EC(0LL, v44);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v43,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v54 )
      sub_1B4D1EC(MasterData_object, v46);
    v47 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v54->fields.userId.fields.fakeValue;
    v48 = (UserItemMaster_o *)MasterData_object;
    *(_OWORD *)&v59.fields._dictionary = *(_OWORD *)&v54->fields.userId.fields.currentCryptoKey;
    v59.fields._current = v47;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v59.fields._dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v58.fields.fakeValue = v59.fields._current;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v58, 0LL);
    if ( !v48 )
      sub_1B4D1EC(v49, v50);
    v51 = UserItemMaster__TryGetEntity(v48, &entity, v49, key, 0LL);
    if ( v51 )
    {
      if ( !entity )
        sub_1B4D1EC(v51, v52);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v53 = 12;
    goto LABEL_45;
  }
  v53 = 13;
LABEL_45:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v61,
    (const MethodInfo_33433B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v53 != 12;
}


void __fastcall SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_49BE958 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SpecialAscensionControl_OnClickHelp__, method);
    byte_49BE958 = 1;
  }
  if ( !this->fields.helpSeSilent )
  {
    v3 = Method_SpecialAscensionControl_OnClickHelp__;
    if ( (*((_BYTE *)Method_SpecialAscensionControl_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_SpecialAscensionControl_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
      sub_1B4D1EC(HaveRequestItemAndQp, v10);
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
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.baseUserServantEntity = selectBaseSvt;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBaseSvt, (int32_t)method, v3);
  SpecialAscensionControl__SetStateInfoMsg(this, v5);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    sub_1B4D1EC(0LL, v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct UserServantEntity_o *v10; // x8
  ServantLimitImageMaster_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  int32_t v17; // w21
  UnityEngine_Object_o *gameObject; // x22
  struct UICharaGraphTexture_o *TexturePrefab_38446864; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  struct UICharaGraphTexture_o **v23; // x0
  struct UICharaGraphTexture_o **v24; // x19
  UnityEngine_Object_o *v25; // x20
  struct UICharaGraphTexture_o *v26; // t1
  UnityEngine_Object_o *v27; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_49BE951 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49BE951 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v10 = this->fields.baseUserServantEntity;
      if ( v10 )
      {
        v11 = (ServantLimitImageMaster_o *)Instance;
        v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v28.fields.currentCryptoKey = v13;
        *(_QWORD *)&v28.fields.fakeValue = v12;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v28, 0LL);
        if ( v11 )
        {
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         v11,
                                         (int32_t)Instance,
                                         CardImageLimitCount,
                                         0LL);
          p_charaGraph = &this->fields.charaGraph;
          charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
          v17 = ServantImageLimitSealAfter;
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
            UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
LABEL_16:
            TexturePrefab_38446864 = CharaGraphManager__CreateTexturePrefab_38446864(
                                       this->fields.charaGraphBase,
                                       this->fields.baseUserServantEntity,
                                       v17,
                                       10,
                                       0LL,
                                       0,
                                       0LL);
            v22 = (int)TexturePrefab_38446864;
            this->fields.charaGraph = TexturePrefab_38446864;
            v23 = &this->fields.charaGraph;
LABEL_24:
            sub_1B4CF34((CGThumbnailListItem_o *)v23, v22, v20, v21);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_1B4D1EC(Instance, v9);
  }
  v26 = this->fields.charaGraph;
  v24 = &this->fields.charaGraph;
  v25 = (UnityEngine_Object_o *)v26;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*v24;
    if ( *v24 )
    {
      v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68804456(v27, 0LL);
      v23 = v24;
      v22 = 0;
      *v24 = 0LL;
      goto LABEL_24;
    }
    goto LABEL_26;
  }
}


void __fastcall SpecialAscensionControl__SetCombineInfo(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CombineInfoComponent_o *combineInfoComp; // x0
  __int64 v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x1
  struct UserServantEntity_o *v11; // x8
  ServantLimitMaster_o *v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w22
  struct UserServantEntity_o *v16; // x8
  int32_t v17; // w22
  int32_t LimitCntMax; // w0
  struct UserServantEntity_o *v19; // x8
  int32_t v20; // w9
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49BE952 & 1) == 0 )
  {
    sub_1B4CF90(&CombineSvtData_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49BE952 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_23;
  CombineInfoComponent__initStatusInfo(combineInfoComp, 4, 0LL);
  method = (const MethodInfo *)this->fields.baseUserServantEntity;
  if ( !method )
    return;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_23;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, (UserServantEntity_o *)method, 0LL);
  v7 = sub_1B4D1DC(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_23;
  baseUserServantEntity = this->fields.baseUserServantEntity;
  *(_QWORD *)(v7 + 16) = baseUserServantEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 16), (int32_t)baseUserServantEntity, v8, v9);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = this->fields.baseUserServantEntity;
  if ( !v11 )
    goto LABEL_23;
  v12 = (ServantLimitMaster_o *)combineInfoComp;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                v23,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v15 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  if ( !v12 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v12, v15, (int)combineInfoComp - 1, 0LL);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v7 + 24) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0LL);
  *(_DWORD *)(v7 + 28) = (_DWORD)combineInfoComp;
  v16 = this->fields.baseUserServantEntity;
  if ( !v16 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                v16->fields.svtId,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v17 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v12, v17, LimitCntMax, 0LL);
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
    0LL);
  *(_DWORD *)(v7 + 44) = afterAtk[1];
  v19 = this->fields.baseUserServantEntity;
  if ( !v19
    || (v20 = afterAtk[0],
        *(_DWORD *)(v7 + 48) = v19->fields.adjustHp,
        *(_DWORD *)(v7 + 52) = v20,
        adjustAtk = v19->fields.adjustAtk,
        *(_DWORD *)(v7 + 36) = 1065353216,
        *(_DWORD *)(v7 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_23:
    sub_1B4D1EC(combineInfoComp, method);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v7, 0LL);
}


void __fastcall SpecialAscensionControl__SetExeBtnState(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtn; // x0
  UIWidget_o *v5; // x20
  Il2CppObject *Component_object; // x19
  const MethodInfo *v7; // x1
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49BE94F & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_49BE94F = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            combineBtn,
                                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtn;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.combineTxtImg,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  combineBtn = (UnityEngine_Component_o *)SpecialAscensionControl__CanExeSpecialAscension(this, v7);
  if ( ((unsigned __int8)combineBtn & 1) != 0 )
  {
    if ( v5 )
    {
      v8.fields.r = 1.0;
      v8.fields.g = 1.0;
      v8.fields.b = 1.0;
      v8.fields.a = 1.0;
      UIWidget__set_color(v5, v8, 0LL);
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)Component_object, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B4D1EC(combineBtn, method);
  }
  if ( !v5 )
    goto LABEL_12;
  v9.fields.r = 0.5;
  v9.fields.g = 0.5;
  v9.fields.b = 0.5;
  v9.fields.a = 1.0;
  UIWidget__set_color(v5, v9, 0LL);
  if ( !Component_object )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
}


void __fastcall SpecialAscensionControl__SetStateInfoMsg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v9; // x20
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 *v11; // x8
  UILabel_o *v12; // x8
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49BE950 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_5688/*"EXE_SUMMON_COMBINE_TXT"*/, v4);
    sub_1B4CF90(&StringLiteral_7269/*"INFO_MSG_SPECIAL_ASCENSION"*/, v5);
    sub_1B4CF90(&StringLiteral_8599/*"MSG_LIMITUP_MAX"*/, v6);
    sub_1B4CF90(&StringLiteral_1/*""*/, v7);
    byte_49BE950 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_18;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_18;
  v13.fields.r = 0.0;
  v13.fields.a = 1.0;
  v13.fields.g = 0.87891;
  v13.fields.b = 0.98828;
  v9 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v13, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    if ( UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    {
      v14.fields.r = 1.0;
      v14.fields.g = 1.0;
      v14.fields.b = 1.0;
      v14.fields.a = 1.0;
      UIWidget__set_color(v9, v14, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_8599/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_5688/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_7269/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v11, 0LL);
  v12 = this->fields.detailInfoLb;
  if ( !v12 )
LABEL_18:
    sub_1B4D1EC(detailInfoLb, method);
  UILabel__set_text(v12, (System_String_o *)detailInfoLb, 0LL);
}


void __fastcall SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SpecialAscensionControl_c *klass; // x8
  __int64 v7; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  SpecialAscensionControl_c *v9; // x0
  UILabel_o *qpLb; // x20
  UILabel_o *haveQpLb; // x20
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v13; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49BE94E & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&SpecialAscensionControl_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_8604/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, v4);
    sub_1B4CF90(&StringLiteral_9034/*"N0"*/, v5);
    byte_49BE94E = 1;
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
  v9 = SpecialAscensionControl_TypeInfo;
  qpLb = this->fields.qpLb;
  if ( !SpecialAscensionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo);
    v9 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v9->static_fields->SPEND_QP_VAL;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0LL);
  if ( !qpLb )
    goto LABEL_18;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  v15.fields.r = 1.0;
  v15.fields.g = 1.0;
  v15.fields.b = 1.0;
  v15.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)baseSelectInfoLb, v15, 0LL);
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString_62608464(
                                                   (int)baseSelectInfoLb + 96,
                                                   (System_String_o *)StringLiteral_9034/*"N0"*/,
                                                   0LL);
  if ( !haveQpLb )
    goto LABEL_18;
  UILabel__set_text(haveQpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  this->fields.pushExeButton = 0;
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8604/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !preSelectBaseLb )
LABEL_18:
    sub_1B4D1EC(baseSelectInfoLb, v7);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0LL);
  SpecialAscensionControl__Refresh(this, 0LL, v13);
}


void __fastcall SpecialAscensionControl__Start(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BE94D & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    byte_49BE94D = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B4D1EC(0LL, v4);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       transform,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)Component_object, v6, v7);
}