void __fastcall SpecialAscensionControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B20317 & 1) == 0 )
  {
    sub_1BCAFF8(&SpecialAscensionControl_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_3571/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v4);
    byte_4B20317 = 1;
  }
  SpecialAscensionControl_TypeInfo->static_fields->PRIVILEGE_KEY_NAME = (struct System_String_o *)StringLiteral_3571/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)SpecialAscensionControl_TypeInfo->static_fields, StringLiteral_3571/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v2, v3);
  SpecialAscensionControl_TypeInfo->static_fields->SPEND_QP_VAL = 0;
}


void __fastcall SpecialAscensionControl___ctor(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B20316 & 1) == 0 )
  {
    sub_1BCAFF8(&CombineMenuControl_TypeInfo, method);
    byte_4B20316 = 1;
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
    sub_1BCB254(v5, v4);
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

  if ( (byte_4B20312 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B20312 = 1;
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
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v7, 0LL);
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

  if ( (byte_4B20314 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CombineLimitMaster___, *(_QWORD *)&limitCnt);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B20314 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v22, 0LL);
  if ( !v15
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v15,
                   (int32_t)Instance,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v19 = CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, HIDWORD(Entity[7].klass), limitCnt, 0LL),
        v20 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v20,
          (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__),
        !v19)
    || !v20 )
  {
LABEL_14:
    sub_1BCB254(Instance, v13);
  }
  System_Collections_Generic_List_int___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)v19->fields.itemIds,
    (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
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
  const MethodInfo *v18; // x5
  CheckCombineResStatus_o *combineResStatus; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B20313 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, afterHp);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B20313 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_11;
  v13 = (ServantLimitMaster_o *)Instance;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v20, 0LL);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v17);
  if ( !v13
    || (Instance = ServantLimitMaster__GetEntity(v13, v16, (int)Instance - 1, 0LL)) == 0LL
    || (combineResStatus = this->fields.combineResStatus) == 0LL )
  {
LABEL_11:
    sub_1BCB254(Instance, v12);
  }
  CheckCombineResStatus__getCombineResStatus(
    combineResStatus,
    afterHp,
    afterAtk,
    userServantEntity,
    *((_DWORD *)Instance + 7),
    v18);
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
  __int64 v22; // x2
  __int64 v23; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v24; // x24
  int64_t v25; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v26; // x28
  unsigned __int64 v27; // x27
  UserServantEntity_Fields *p_fields; // x29
  __int64 v29; // x22
  __int128 v30; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v31; // x0
  __int128 v32; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v33; // x0
  int64_t v34; // x0
  __int128 v35; // q1
  int64_t v36; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v38; // x26
  UserServantEntity_Fields *v39; // x28
  System_Collections_Generic_List_object__o *v40; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v41; // x20
  uint32_t cctor_finished; // w8
  __int64 v43; // x23
  __int64 v44; // x24
  int32_t v45; // w23
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
  __int64 v56; // x2
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  int v59; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  char v62; // w19
  int v63; // w20
  int64_t v65; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4B20310 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtEntity);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B20310 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v17);
    byte_4B165D1 = 1;
  }
  v18 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v18 = NetworkManager_TypeInfo;
  }
  userIdNumber = v18->static_fields->userIdNumber;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_62;
  v23 = *(_QWORD *)(Instance + 24);
  v24 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v25 = Instance;
  if ( (int)v23 >= 1 )
  {
    v26 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v27 = 0LL;
    p_fields = &userSvtEntity->fields;
    v65 = userIdNumber;
    do
    {
      if ( v27 >= (unsigned int)v23 )
        sub_1BCB25C(Instance, v21, v22);
      v29 = *(_QWORD *)(v25 + 32 + 8 * v27);
      if ( v29 )
      {
        v30 = *(_OWORD *)(v29 + 64);
        v31 = *v26;
        *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v29 + 48);
        *(_OWORD *)&v69.fields.fakeValue = v30;
        if ( !v31->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v31);
        v68 = v69;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v68, 0LL);
        if ( Instance == userIdNumber )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v29, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_62;
            v32 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            v33 = *v26;
            *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v69.fields.fakeValue = v32;
            if ( !v33->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v33);
            v67 = v69;
            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v67, 0LL);
            v35 = *(_OWORD *)(v29 + 32);
            v36 = v34;
            *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
            *(_OWORD *)&v66.fields.fakeValue = v35;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v66, 0LL);
            if ( v36 != Instance )
            {
              v37 = *v24;
              v38 = v26;
              v39 = p_fields;
              v40 = v16;
              v41 = v24;
              cctor_finished = (*v24)->_2.cctor_finished;
              v44 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v43 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !cctor_finished )
                j_il2cpp_runtime_class_init_0(v37);
              *(_QWORD *)&v71.fields.currentCryptoKey = v44;
              *(_QWORD *)&v71.fields.fakeValue = v43;
              v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v71, 0LL);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v29 + 80),
                           0LL);
              v24 = v41;
              v16 = v40;
              p_fields = v39;
              v26 = v38;
              userIdNumber = v65;
              if ( v45 == (_DWORD)Instance )
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
                    (Il2CppObject *)v29,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                }
                else
                {
                  v50 = &items->obj.klass + size;
                  v16->fields._size = size + 1;
                  v50[4] = (Il2CppClass *)v29;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v50 + 4), v29, v22, v46);
                }
              }
            }
          }
        }
      }
      LODWORD(v23) = *(_DWORD *)(v25 + 24);
    }
    while ( (__int64)++v27 < (int)v23 );
  }
  if ( !v16 )
LABEL_62:
    sub_1BCB254(Instance, v21);
  if ( v16->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    v16,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v70 = *(System_Collections_Generic_List_Enumerator_object__o *)&v69.fields.currentCryptoKey;
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v51 )
      break;
    current = v70.fields._current;
    if ( !v70.fields._current )
      sub_1BCB254(v51, v52);
    if ( SHIDWORD(v70.fields._current[16].klass) >= 2
      || SLODWORD(v70.fields._current[17].monitor) > 1
      || SHIDWORD(v70.fields._current[17].monitor) > 1
      || SLODWORD(v70.fields._current[18].klass) > 1 )
    {
      goto LABEL_55;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v70.fields._current, 0LL);
    if ( !AppendSkillInfo )
      sub_1BCB254(0LL, v55);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_1BCB254(AppendSkillInfo, v55);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v59 = 0;
      while ( 1 )
      {
        if ( max_length == v59 )
          sub_1BCB25C(AppendSkillInfo, v55, v56);
        if ( svtSkillLvList->m_Items[v59 + 1] >= 2 )
          break;
        if ( max_length == ++v59 )
          goto LABEL_49;
      }
LABEL_55:
      v62 = 1;
      v63 = 9;
      goto LABEL_56;
    }
LABEL_49:
    klass = current[6].klass;
    monitor = current[6].monitor;
    if ( !(*v24)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v24);
    *(_QWORD *)&v72.fields.currentCryptoKey = klass;
    *(_QWORD *)&v72.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v72, 0LL) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_55;
    }
  }
  v62 = 0;
  v63 = 18;
LABEL_56:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v62 & (v63 == 9);
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
  __int64 v34; // x2
  struct DataMasterBase_array *datalist; // x21
  __int64 v36; // x8
  __int64 v37; // x29
  unsigned __int64 v38; // x27
  int32_t v39; // w23
  int32_t v40; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v47; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v48; // q0
  UserItemMaster_o *v49; // x21
  int64_t v50; // x0
  __int64 v51; // x1
  _BOOL8 v52; // x0
  __int64 v53; // x1
  int v54; // w19
  UserServantEntity_o *v55; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v56; // [xsp+10h] [xbp-E0h]
  int m_CancellationTokenSource; // [xsp+18h] [xbp-D8h]
  int v58; // [xsp+1Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+40h] [xbp-B0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4B20311 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CombineLimitMaster___, userSvtEntity);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v19);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4B20311 = 1;
  }
  memset(&v62, 0, 32);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v28;
  *(_QWORD *)&v63.fields.fakeValue = v27;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v63, 0LL);
  if ( !v26 )
    goto LABEL_47;
  v29 = DataMasterBase_object__object__int___GetEntity(
          v26,
          (int32_t)Instance,
          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_3317E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v31 = this->fields.baseUserServantEntity;
  if ( !v31 )
    goto LABEL_47;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                v31->fields.limitCount,
                                0LL);
  if ( !v29 )
    goto LABEL_47;
  v32 = (int)Instance;
  v55 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v29[5].monitor) )
  {
    v33 = 0;
    v56 = v29;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_47;
      v58 = v33;
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
      v36 = *(_QWORD *)&datalist->max_length;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      if ( (int)v36 >= 1 )
        break;
LABEL_25:
      v29 = v56;
      ++v32;
      v33 = m_CancellationTokenSource + v58;
      if ( v32 >= SLODWORD(v56[5].monitor) )
        goto LABEL_28;
    }
    v37 = *(_QWORD *)&Instance->fields._DispLog;
    v38 = 0LL;
    while ( 1 )
    {
      if ( v38 >= (unsigned int)v36 )
        goto LABEL_48;
      if ( !v37 )
        break;
      if ( v38 >= *(unsigned int *)(v37 + 24) )
LABEL_48:
        sub_1BCB25C(Instance, v24, v34);
      if ( !v30 )
        break;
      v39 = *((_DWORD *)datalist->m_Items + v38);
      v40 = *(_DWORD *)(v37 + 32 + 4 * v38);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v30,
             v39,
             (const MethodInfo_3318A18 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v40 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v30,
                 v39,
                 (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v30,
          v39,
          (const MethodInfo_3319BE4 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v30,
        v39,
        v40,
        (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(v36) = datalist->max_length;
      if ( (__int64)++v38 >= (int)v36 )
        goto LABEL_25;
    }
LABEL_47:
    sub_1BCB254(Instance, v24);
  }
  v33 = 0;
LABEL_28:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_47;
  if ( (__int64)Instance->fields.lockCountObj < v33 )
    return 0;
  if ( !v30 )
    goto LABEL_47;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v60,
    v30,
    (const MethodInfo_3318C04 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v62.fields._dictionary = *(_OWORD *)&v60.fields._dictionary;
  v62.fields._current = v60.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v62,
            (const MethodInfo_3471394 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v62.fields._current.fields.key;
    key_high = HIDWORD(v62.fields._current.fields.key);
    v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v44 )
      sub_1BCB254(0LL, v45);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v44,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v55 )
      sub_1BCB254(MasterData_object, v47);
    v48 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v55->fields.userId.fields.fakeValue;
    v49 = (UserItemMaster_o *)MasterData_object;
    *(_OWORD *)&v60.fields._dictionary = *(_OWORD *)&v55->fields.userId.fields.currentCryptoKey;
    v60.fields._current = v48;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v60.fields._dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v59.fields.fakeValue = v60.fields._current;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v59, 0LL);
    if ( !v49 )
      sub_1BCB254(v50, v51);
    v52 = UserItemMaster__TryGetEntity(v49, &entity, v50, key, 0LL);
    if ( v52 )
    {
      if ( !entity )
        sub_1BCB254(v52, v53);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v54 = 12;
    goto LABEL_45;
  }
  v54 = 13;
LABEL_45:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v62,
    (const MethodInfo_3471494 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v54 != 12;
}


void __fastcall SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_4B20315 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SpecialAscensionControl_OnClickHelp__, method);
    byte_4B20315 = 1;
  }
  if ( !this->fields.helpSeSilent )
  {
    v3 = Method_SpecialAscensionControl_OnClickHelp__;
    if ( (*((_BYTE *)Method_SpecialAscensionControl_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_SpecialAscensionControl_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  }
  v5 = ((__int64 (__fastcall *)(SpecialAscensionControl_o *, Il2CppMethodPointer))this->klass->vtable._6_GetTutorialOpenType.method)(
         this,
         this->klass->vtable._7_SetCharaGraph.methodPtr);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v5, 0LL, 0, 0LL);
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
      sub_1BCB254(HaveRequestItemAndQp, v10);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBaseSvt, (int32_t)method, v3);
  SpecialAscensionControl__SetStateInfoMsg(this, v5);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    sub_1BCB254(0LL, v6);
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

  if ( (byte_4B2030E & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B2030E = 1;
  }
  p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    if ( !*p_charaGraph )
      sub_1BCB254(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.charaGraph, 0, v7, v8);
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v10 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(SpecialAscensionControl_o *, struct UICharaGraphTexture_o *, struct UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                            this,
                                            this->fields.charaGraph,
                                            baseUserServantEntity,
                                            this->klass[1]._1.image);
    this->fields.charaGraph = v10;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)v10, v11, v12);
  }
}


void __fastcall SpecialAscensionControl__SetCombineInfo(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CombineInfoComponent_o *combineInfoComp; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x1
  struct UserServantEntity_o *v13; // x8
  ServantLimitMaster_o *v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  int32_t v17; // w22
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w22
  int32_t LimitCntMax; // w0
  const MethodInfo *v21; // x5
  const MethodInfo *v22; // x2
  struct UserServantEntity_o *v23; // x8
  int32_t v24; // w9
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B2030F & 1) == 0 )
  {
    sub_1BCAFF8(&CombineSvtData_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B2030F = 1;
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
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, (UserServantEntity_o *)method, v8);
  v9 = sub_1BCB244(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_23;
  baseUserServantEntity = this->fields.baseUserServantEntity;
  *(_QWORD *)(v9 + 16) = baseUserServantEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)baseUserServantEntity, v10, v11);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v13 = this->fields.baseUserServantEntity;
  if ( !v13 )
    goto LABEL_23;
  v14 = (ServantLimitMaster_o *)combineInfoComp;
  v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v16;
  *(_QWORD *)&v27.fields.fakeValue = v15;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                v27,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v17 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  if ( !v14 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v14, v17, (int)combineInfoComp - 1, 0LL);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v9 + 24) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0LL);
  *(_DWORD *)(v9 + 28) = (_DWORD)combineInfoComp;
  v18 = this->fields.baseUserServantEntity;
  if ( !v18 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                v18->fields.svtId,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v19 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v14, v19, LimitCntMax, 0LL);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v9 + 32) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.combineResStatus;
  if ( !combineInfoComp )
    goto LABEL_23;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v9 + 24),
    v21);
  *(_DWORD *)(v9 + 44) = afterAtk[1];
  v23 = this->fields.baseUserServantEntity;
  if ( !v23
    || (v24 = afterAtk[0],
        *(_DWORD *)(v9 + 48) = v23->fields.adjustHp,
        *(_DWORD *)(v9 + 52) = v24,
        adjustAtk = v23->fields.adjustAtk,
        *(_DWORD *)(v9 + 36) = 1065353216,
        *(_DWORD *)(v9 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_23:
    sub_1BCB254(combineInfoComp, method);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v9, v22);
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

  if ( (byte_4B2030C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4B2030C = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            combineBtn,
                                            (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtn;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.combineTxtImg,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1BCB254(combineBtn, method);
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

  if ( (byte_4B2030D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_5744/*"EXE_SUMMON_COMBINE_TXT"*/, v4);
    sub_1BCAFF8(&StringLiteral_7386/*"INFO_MSG_SPECIAL_ASCENSION"*/, v5);
    sub_1BCAFF8(&StringLiteral_8729/*"MSG_LIMITUP_MAX"*/, v6);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v7);
    byte_4B2030D = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_18;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
      v11 = &StringLiteral_8729/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_5744/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_7386/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v11, 0LL);
  v12 = this->fields.detailInfoLb;
  if ( !v12 )
LABEL_18:
    sub_1BCB254(detailInfoLb, method);
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

  if ( (byte_4B2030B & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&SpecialAscensionControl_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_8734/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, v4);
    sub_1BCAFF8(&StringLiteral_9161/*"N0"*/, v5);
    byte_4B2030B = 1;
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int64__ToString_63964312(
                                                   (int64_t)&baseSelectInfoLb[4],
                                                   (System_String_o *)StringLiteral_9161/*"N0"*/,
                                                   0LL);
  if ( !haveQpLb )
    goto LABEL_18;
  UILabel__set_text(haveQpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  this->fields.pushExeButton = 0;
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8734/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !preSelectBaseLb )
LABEL_18:
    sub_1BCB254(baseSelectInfoLb, v7);
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

  if ( (byte_4B2030A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    byte_4B2030A = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCB254(0LL, v4);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       transform,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)Component_object, v6, v7);
}