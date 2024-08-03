void __fastcall SpecialAscensionControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FFBB7 & 1) == 0 )
  {
    sub_1B640C8(&SpecialAscensionControl_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_3661/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v4);
    byte_49FFBB7 = 1;
  }
  SpecialAscensionControl_TypeInfo->static_fields->PRIVILEGE_KEY_NAME = (struct System_String_o *)StringLiteral_3661/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SpecialAscensionControl_TypeInfo->static_fields,
    StringLiteral_3661/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/,
    v2,
    v3);
  SpecialAscensionControl_TypeInfo->static_fields->SPEND_QP_VAL = 0;
}


void __fastcall SpecialAscensionControl___ctor(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  if ( (byte_49FFBB6 & 1) == 0 )
  {
    sub_1B640C8(&CombineMenuControl_TypeInfo, method);
    byte_49FFBB6 = 1;
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
  UserServantEntity_o *v4; // x0

  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity || UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    return 0;
  v4 = this->fields.baseUserServantEntity;
  if ( !v4 )
LABEL_9:
    sub_1B64324(v4);
  if ( !UserServantEntity__IsEventJoin(v4, 0LL) )
  {
    v4 = this->fields.baseUserServantEntity;
    if ( v4 )
      return !UserServantEntity__IsHeroine(v4, 0LL);
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

  if ( (byte_49FFBB2 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FFBB2 = 1;
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
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v7, 0LL);
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
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  Il2CppObject *Entity; // x20
  CombineLimitEntity_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FFBB4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineLimitMaster___, *(_QWORD *)&limitCnt);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FFBB4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v16 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v16;
  *(_QWORD *)&v23.fields.fakeValue = v15;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
  if ( !v14
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v14,
                   (int32_t)Instance,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v18 = CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, HIDWORD(Entity[7].klass), limitCnt, 0LL),
        v21 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v19,
                                                          v20),
        System_Collections_Generic_List_int____ctor(
          v21,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__),
        !v18)
    || !v21 )
  {
LABEL_14:
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_int___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)v18->fields.itemIds,
    (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  return v21;
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
  ServantLimitMaster_o *v12; // x23
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w24
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FFBB3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, afterHp);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FFBB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_11;
  v12 = (ServantLimitMaster_o *)Instance;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  *(_QWORD *)&v18.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v16);
  if ( !v12
    || (Instance = ServantLimitMaster__GetEntity(v12, v15, (int)Instance - 1, 0LL)) == 0LL
    || !this->fields.combineResStatus )
  {
LABEL_11:
    sub_1B64324(Instance);
  }
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)Instance,
    afterHp,
    afterAtk,
    userServantEntity,
    *((_DWORD *)Instance + 7),
    v17);
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
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v21; // x25
  int64_t v22; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v23; // x28
  unsigned __int64 v24; // x27
  UserServantEntity_Fields *p_fields; // x29
  __int64 v26; // x23
  __int128 v27; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v28; // x0
  __int128 v29; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v30; // x0
  int64_t v31; // x0
  __int128 v32; // q1
  int64_t v33; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v35; // x21
  System_Collections_Generic_List_object__o *v36; // x28
  UserServantEntity_Fields *v37; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v38; // x29
  uint32_t cctor_finished; // w8
  __int64 v40; // x24
  __int64 v41; // x25
  int32_t v42; // w24
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  _BOOL8 v49; // x0
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v52; // x1
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  int v55; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  char v58; // w19
  int v59; // w20
  int64_t v61; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_49FFBB0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v10);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FFBB0 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       userSvtEntity,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_58;
  v20 = *(_QWORD *)(Instance + 24);
  v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v22 = Instance;
  if ( (int)v20 >= 1 )
  {
    v23 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v24 = 0LL;
    p_fields = &userSvtEntity->fields;
    v61 = UserId;
    do
    {
      if ( v24 >= (unsigned int)v20 )
        sub_1B6432C(Instance, v19);
      v26 = *(_QWORD *)(v22 + 32 + 8 * v24);
      if ( v26 )
      {
        v27 = *(_OWORD *)(v26 + 64);
        v28 = *v23;
        *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)(v26 + 48);
        *(_OWORD *)&v65.fields.fakeValue = v27;
        if ( !v28->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v28);
        v64 = v65;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v64, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v26, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_58;
            v29 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            v30 = *v23;
            *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v65.fields.fakeValue = v29;
            if ( !v30->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v30);
            v63 = v65;
            v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v63, 0LL);
            v32 = *(_OWORD *)(v26 + 32);
            v33 = v31;
            *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v26 + 16);
            *(_OWORD *)&v62.fields.fakeValue = v32;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v62, 0LL);
            if ( v33 != Instance )
            {
              v34 = *v21;
              v35 = v23;
              v36 = v16;
              v37 = p_fields;
              v38 = v21;
              cctor_finished = (*v21)->_2.cctor_finished;
              v41 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !cctor_finished )
                j_il2cpp_runtime_class_init_0(v34);
              *(_QWORD *)&v67.fields.currentCryptoKey = v41;
              *(_QWORD *)&v67.fields.fakeValue = v40;
              v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v67, 0LL);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v26 + 80),
                           0LL);
              v21 = v38;
              p_fields = v37;
              v16 = v36;
              v23 = v35;
              UserId = v61;
              if ( v42 == (_DWORD)Instance )
              {
                if ( !v16 )
                  goto LABEL_58;
                items = v16->fields._items;
                v46 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v16->fields._version;
                if ( !items )
                  goto LABEL_58;
                size = v16->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v16,
                    (Il2CppObject *)v26,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                }
                else
                {
                  v48 = &items->obj.klass + size;
                  v16->fields._size = size + 1;
                  v48[4] = (Il2CppClass *)v26;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), v26, v43, v44);
                }
              }
            }
          }
        }
      }
      LODWORD(v20) = *(_DWORD *)(v22 + 24);
    }
    while ( (__int64)++v24 < (int)v20 );
  }
  if ( !v16 )
LABEL_58:
    sub_1B64324(Instance);
  if ( v16->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    v16,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v66 = *(System_Collections_Generic_List_Enumerator_object__o *)&v65.fields.currentCryptoKey;
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v49 )
      break;
    current = v66.fields._current;
    if ( !v66.fields._current )
      sub_1B64324(v49);
    if ( SHIDWORD(v66.fields._current[16].klass) >= 2
      || SLODWORD(v66.fields._current[17].monitor) > 1
      || SHIDWORD(v66.fields._current[17].monitor) > 1
      || SLODWORD(v66.fields._current[18].klass) > 1 )
    {
      goto LABEL_51;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v66.fields._current, 0LL);
    if ( !AppendSkillInfo )
      sub_1B64324(0LL);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_1B64324(AppendSkillInfo);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v55 = 0;
      while ( 1 )
      {
        if ( max_length == v55 )
          sub_1B6432C(AppendSkillInfo, v52);
        if ( svtSkillLvList->m_Items[v55 + 1] >= 2 )
          break;
        if ( max_length == ++v55 )
          goto LABEL_45;
      }
LABEL_51:
      v58 = 1;
      v59 = 9;
      goto LABEL_52;
    }
LABEL_45:
    klass = current[6].klass;
    monitor = current[6].monitor;
    if ( !(*v21)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v21);
    *(_QWORD *)&v68.fields.currentCryptoKey = klass;
    *(_QWORD *)&v68.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v68, 0LL) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_51;
    }
  }
  v58 = 0;
  v59 = 18;
LABEL_52:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v58 & (v59 == 9);
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
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x20
  __int64 v26; // x21
  __int64 v27; // x23
  Il2CppObject *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_Dictionary_int__int__o *v31; // x20
  struct UserServantEntity_o *v32; // x8
  int32_t v33; // w22
  int v34; // w21
  __int64 v35; // x1
  struct DataMasterBase_array *datalist; // x21
  __int64 v37; // x8
  __int64 v38; // x29
  unsigned __int64 v39; // x27
  int32_t v40; // w23
  int32_t v41; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  Il2CppObject *v45; // x0
  Il2CppObject *MasterData_object; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v47; // q0
  UserItemMaster_o *v48; // x21
  int64_t v49; // x0
  _BOOL8 v50; // x0
  int v51; // w19
  UserServantEntity_o *v52; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v53; // [xsp+10h] [xbp-E0h]
  int m_CancellationTokenSource; // [xsp+18h] [xbp-D8h]
  int v55; // [xsp+1Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+20h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+40h] [xbp-B0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_49FFBB1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineLimitMaster___, userSvtEntity);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v19);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49FFBB1 = 1;
  }
  memset(&v59, 0, 32);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v60.fields.currentCryptoKey = v27;
  *(_QWORD *)&v60.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v60, 0LL);
  if ( !v25 )
    goto LABEL_47;
  v28 = DataMasterBase_object__object__int___GetEntity(
          v25,
          (int32_t)Instance,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v31 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v29,
                                                               v30);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v31,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v32 = this->fields.baseUserServantEntity;
  if ( !v32 )
    goto LABEL_47;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                v32->fields.limitCount,
                                0LL);
  if ( !v28 )
    goto LABEL_47;
  v33 = (int)Instance;
  v52 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v28[5].monitor) )
  {
    v34 = 0;
    v53 = v28;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_47;
      v55 = v34;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v28[7].klass),
                                    v33,
                                    0LL);
      if ( !Instance )
        goto LABEL_47;
      datalist = Instance->fields.datalist;
      if ( !datalist )
        goto LABEL_47;
      v37 = *(_QWORD *)&datalist->max_length;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      if ( (int)v37 >= 1 )
        break;
LABEL_25:
      v28 = v53;
      ++v33;
      v34 = m_CancellationTokenSource + v55;
      if ( v33 >= SLODWORD(v53[5].monitor) )
        goto LABEL_28;
    }
    v38 = *(_QWORD *)&Instance->fields._DispLog;
    v39 = 0LL;
    while ( 1 )
    {
      if ( v39 >= (unsigned int)v37 )
        goto LABEL_48;
      if ( !v38 )
        break;
      if ( v39 >= *(unsigned int *)(v38 + 24) )
LABEL_48:
        sub_1B6432C(Instance, v35);
      if ( !v31 )
        break;
      v40 = *((_DWORD *)datalist->m_Items + v39);
      v41 = *(_DWORD *)(v38 + 32 + 4 * v39);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v31,
             v40,
             (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v41 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v31,
                 v40,
                 (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v31,
          v40,
          (const MethodInfo_311C26C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v31,
        v40,
        v41,
        (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(v37) = datalist->max_length;
      if ( (__int64)++v39 >= (int)v37 )
        goto LABEL_25;
    }
LABEL_47:
    sub_1B64324(Instance);
  }
  v34 = 0;
LABEL_28:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_47;
  if ( SLODWORD(Instance->fields.lockCountObj) < v34 )
    return 0;
  if ( !v31 )
    goto LABEL_47;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v57,
    v31,
    (const MethodInfo_311B28C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v59.fields._dictionary = *(_OWORD *)&v57.fields._dictionary;
  v59.fields._current = v57.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v59,
            (const MethodInfo_32682F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v59.fields._current.fields.key;
    key_high = HIDWORD(v59.fields._current.fields.key);
    v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v45 )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v45,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v52 )
      sub_1B64324(MasterData_object);
    v47 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v52->fields.userId.fields.fakeValue;
    v48 = (UserItemMaster_o *)MasterData_object;
    *(_OWORD *)&v57.fields._dictionary = *(_OWORD *)&v52->fields.userId.fields.currentCryptoKey;
    v57.fields._current = v47;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v57.fields._dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v56.fields.fakeValue = v57.fields._current;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v56, 0LL);
    if ( !v48 )
      sub_1B64324(v49);
    v50 = UserItemMaster__TryGetEntity(v48, &entity, v49, key, 0LL);
    if ( v50 )
    {
      if ( !entity )
        sub_1B64324(v50);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v51 = 12;
    goto LABEL_45;
  }
  v51 = 13;
LABEL_45:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v59,
    (const MethodInfo_32683F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v51 != 12;
}


void __fastcall SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_49FFBB5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SpecialAscensionControl_OnClickHelp__, method);
    byte_49FFBB5 = 1;
  }
  if ( !this->fields.helpSeSilent )
  {
    v3 = Method_SpecialAscensionControl_OnClickHelp__;
    if ( (*((_BYTE *)Method_SpecialAscensionControl_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_SpecialAscensionControl_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
      sub_1B64324(HaveRequestItemAndQp);
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
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  this->fields.baseUserServantEntity = selectBaseSvt;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBaseSvt,
    (int32_t)method,
    v3);
  SpecialAscensionControl__SetStateInfoMsg(this, v5);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, this->fields.baseUserServantEntity == 0LL, 0LL);
  SpecialAscensionControl__SetBaseSvtCardImg(this, v7);
  SpecialAscensionControl__SetCombineInfo(this, v8);
  SpecialAscensionControl__SetExeBtnState(this, v9);
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
  struct UserServantEntity_o *v9; // x8
  ServantLimitImageMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  int32_t v16; // w21
  UnityEngine_Object_o *gameObject; // x22
  struct UICharaGraphTexture_o *TexturePrefab_37591604; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  struct UICharaGraphTexture_o **v22; // x0
  struct UICharaGraphTexture_o **v23; // x19
  UnityEngine_Object_o *v24; // x20
  struct UICharaGraphTexture_o *v25; // t1
  UnityEngine_Object_o *v26; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_49FFBAE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFBAE = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v9 = this->fields.baseUserServantEntity;
      if ( v9 )
      {
        v10 = (ServantLimitImageMaster_o *)Instance;
        v12 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
        v11 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v27.fields.currentCryptoKey = v12;
        *(_QWORD *)&v27.fields.fakeValue = v11;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v27, 0LL);
        if ( v10 )
        {
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         v10,
                                         (int32_t)Instance,
                                         CardImageLimitCount,
                                         0LL);
          p_charaGraph = &this->fields.charaGraph;
          charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
          v16 = ServantImageLimitSealAfter;
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
            UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
LABEL_16:
            TexturePrefab_37591604 = CharaGraphManager__CreateTexturePrefab_37591604(
                                       this->fields.charaGraphBase,
                                       this->fields.baseUserServantEntity,
                                       v16,
                                       10,
                                       0LL,
                                       0,
                                       0LL);
            v21 = (int)TexturePrefab_37591604;
            this->fields.charaGraph = TexturePrefab_37591604;
            v22 = &this->fields.charaGraph;
LABEL_24:
            sub_1B6406C((ServantStatusBattleListViewItem_o *)v22, v21, v19, v20);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_1B64324(Instance);
  }
  v25 = this->fields.charaGraph;
  v23 = &this->fields.charaGraph;
  v24 = (UnityEngine_Object_o *)v25;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*v23;
    if ( *v23 )
    {
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v26, 0LL);
      v22 = v23;
      v21 = 0;
      *v23 = 0LL;
      goto LABEL_24;
    }
    goto LABEL_26;
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
  UserServantEntity_o *baseUserServantEntity; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct UserServantEntity_o *v15; // x1
  struct UserServantEntity_o *v16; // x8
  ServantLimitMaster_o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  int32_t v20; // w22
  struct UserServantEntity_o *v21; // x8
  int32_t v22; // w22
  int32_t LimitCntMax; // w0
  const MethodInfo *v24; // x5
  const MethodInfo *v25; // x2
  struct UserServantEntity_o *v26; // x8
  int32_t v27; // w9
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_49FFBAF & 1) == 0 )
  {
    sub_1B640C8(&CombineSvtData_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FFBAF = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
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
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, baseUserServantEntity, v8);
  v12 = sub_1B64314(CombineSvtData_TypeInfo, v10, v11);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_23;
  v15 = this->fields.baseUserServantEntity;
  *(_QWORD *)(v12 + 16) = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v15, v13, v14);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v16 = this->fields.baseUserServantEntity;
  if ( !v16 )
    goto LABEL_23;
  v17 = (ServantLimitMaster_o *)combineInfoComp;
  v19 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v19;
  *(_QWORD *)&v30.fields.fakeValue = v18;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                v30,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v20 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  if ( !v17 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v17, v20, (int)combineInfoComp - 1, 0LL);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v12 + 24) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0LL);
  *(_DWORD *)(v12 + 28) = (_DWORD)combineInfoComp;
  v21 = this->fields.baseUserServantEntity;
  if ( !v21 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                v21->fields.svtId,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v22 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v17, v22, LimitCntMax, 0LL);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v12 + 32) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  if ( !this->fields.combineResStatus )
    goto LABEL_23;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v12 + 24),
    v24);
  *(_DWORD *)(v12 + 44) = afterAtk[1];
  v26 = this->fields.baseUserServantEntity;
  if ( !v26
    || (v27 = afterAtk[0],
        *(_DWORD *)(v12 + 48) = v26->fields.adjustHp,
        *(_DWORD *)(v12 + 52) = v27,
        adjustAtk = v26->fields.adjustAtk,
        *(_DWORD *)(v12 + 36) = 1065353216,
        *(_DWORD *)(v12 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_23:
    sub_1B64324(combineInfoComp);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v12, v25);
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

  if ( (byte_49FFBAC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_49FFBAC = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            combineBtn,
                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtn;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.combineTxtImg,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1B64324(combineBtn);
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

  if ( (byte_49FFBAD & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_5730/*"EXE_SUMMON_COMBINE_TXT"*/, v4);
    sub_1B640C8(&StringLiteral_7334/*"INFO_MSG_SPECIAL_ASCENSION"*/, v5);
    sub_1B640C8(&StringLiteral_8717/*"MSG_LIMITUP_MAX"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FFBAD = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_18;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
      v11 = &StringLiteral_8717/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_5730/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_7334/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v11, 0LL);
  v12 = this->fields.detailInfoLb;
  if ( !v12 )
LABEL_18:
    sub_1B64324(detailInfoLb);
  UILabel__set_text(v12, (System_String_o *)detailInfoLb, 0LL);
}


void __fastcall SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SpecialAscensionControl_c *klass; // x8
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  SpecialAscensionControl_c *v8; // x0
  UILabel_o *qpLb; // x20
  UILabel_o *haveQpLb; // x20
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v12; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFBAB & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&SpecialAscensionControl_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_8722/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, v4);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v5);
    byte_49FFBAB = 1;
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
  v8 = SpecialAscensionControl_TypeInfo;
  qpLb = this->fields.qpLb;
  if ( !SpecialAscensionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo);
    v8 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v8->static_fields->SPEND_QP_VAL;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0LL);
  if ( !qpLb )
    goto LABEL_18;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  v14.fields.r = 1.0;
  v14.fields.g = 1.0;
  v14.fields.b = 1.0;
  v14.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)baseSelectInfoLb, v14, 0LL);
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString_62180668(
                                                   (int)baseSelectInfoLb + 96,
                                                   (System_String_o *)StringLiteral_9164/*"N0"*/,
                                                   0LL);
  if ( !haveQpLb )
    goto LABEL_18;
  UILabel__set_text(haveQpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  this->fields.pushExeButton = 0;
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8722/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !preSelectBaseLb )
LABEL_18:
    sub_1B64324(baseSelectInfoLb);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0LL);
  SpecialAscensionControl__Refresh(this, 0LL, v12);
}


void __fastcall SpecialAscensionControl__Start(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FFBAA & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    byte_49FFBAA = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64324(0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       transform,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineResStatus, (int32_t)Component_object, v5, v6);
}