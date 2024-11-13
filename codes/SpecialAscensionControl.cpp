void __fastcall SpecialAscensionControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B19AF1 & 1) == 0 )
  {
    sub_1BCA7E0(&SpecialAscensionControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3714/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v8, v9);
    byte_4B19AF1 = 1;
  }
  SpecialAscensionControl_TypeInfo->static_fields->PRIVILEGE_KEY_NAME = (struct System_String_o *)StringLiteral_3714/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SpecialAscensionControl_TypeInfo->static_fields,
    StringLiteral_3714/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SpecialAscensionControl_TypeInfo->static_fields->SPEND_QP_VAL = 0;
}


void __fastcall SpecialAscensionControl___ctor(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19AF0 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19AF0 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
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
    sub_1BCAA3C(v5, v4);
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
  __int64 v2; // x2
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B19AEC & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B19AEC = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0;
  v6 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall SpecialAscensionControl__GetEffectRequestItemList(
        SpecialAscensionControl_o *this,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  __int64 v23; // x21
  __int64 v24; // x22
  Il2CppObject *Entity; // x20
  CombineLimitEntity_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_int__o *v30; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B19AEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineLimitMaster___, *(_QWORD *)&limitCnt, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B19AEE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v24 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v32.fields.currentCryptoKey = v24;
  *(_QWORD *)&v32.fields.fakeValue = v23;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
  if ( !v22
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v22,
                   (int32_t)Instance,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v26 = CombineLimitMaster__GetEntity((CombineLimitMaster_o *)Instance, HIDWORD(Entity[7].klass), limitCnt, 0LL),
        v30 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v27,
                                                          v28,
                                                          v29),
        System_Collections_Generic_List_int____ctor(
          v30,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__),
        !v26)
    || !v30 )
  {
LABEL_14:
    sub_1BCAA3C(Instance, v20);
  }
  System_Collections_Generic_List_int___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)v26->fields.itemIds,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  return v30;
}


void __fastcall SpecialAscensionControl__GetHpAndAtk(
        SpecialAscensionControl_o *this,
        int32_t *afterHp,
        int32_t *afterAtk,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *Instance; // x0
  __int64 v14; // x1
  ServantLimitMaster_o *v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  int32_t v18; // w24
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B19AED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, afterHp, afterAtk);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B19AED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_11;
  v15 = (ServantLimitMaster_o *)Instance;
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v19);
  if ( !v15
    || (Instance = ServantLimitMaster__GetEntity(v15, v18, (int)Instance - 1, 0LL)) == 0LL
    || !this->fields.combineResStatus )
  {
LABEL_11:
    sub_1BCAA3C(Instance, v14);
  }
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)Instance,
    afterHp,
    afterAtk,
    userServantEntity,
    *((_DWORD *)Instance + 7),
    v20);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  System_Collections_Generic_List_object__o *v29; // x20
  __int64 v30; // x1
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v33; // x1
  __int64 v34; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v35; // x25
  int64_t v36; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v37; // x28
  unsigned __int64 v38; // x27
  UserServantEntity_Fields *p_fields; // x29
  int64_t v40; // x23
  __int128 v41; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v42; // x0
  __int128 v43; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v44; // x0
  int64_t v45; // x0
  __int128 v46; // q1
  int64_t v47; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v49; // x21
  System_Collections_Generic_List_object__o *v50; // x28
  UserServantEntity_Fields *v51; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v52; // x29
  uint32_t cctor_finished; // w8
  __int64 v54; // x24
  __int64 v55; // x25
  int32_t v56; // w24
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  _BOOL8 v67; // x0
  __int64 v68; // x1
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v71; // x1
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  int v74; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  char v77; // w19
  int v78; // w20
  int64_t v80; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_4B19AEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtEntity, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B19AEA = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       userSvtEntity,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_58;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_58;
  v34 = *(_QWORD *)(Instance + 24);
  v35 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v36 = Instance;
  if ( (int)v34 >= 1 )
  {
    v37 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v38 = 0LL;
    p_fields = &userSvtEntity->fields;
    v80 = UserId;
    do
    {
      if ( v38 >= (unsigned int)v34 )
        sub_1BCAA44(Instance, v33);
      v40 = *(_QWORD *)(v36 + 32 + 8 * v38);
      if ( v40 )
      {
        v41 = *(_OWORD *)(v40 + 64);
        v42 = *v37;
        *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
        *(_OWORD *)&v84.fields.fakeValue = v41;
        if ( !v42->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v42, v33);
        v83 = v84;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v83, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v40, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_58;
            v43 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            v44 = *v37;
            *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v84.fields.fakeValue = v43;
            if ( !v44->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v44, v33);
            v82 = v84;
            v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v82, 0LL);
            v46 = *(_OWORD *)(v40 + 32);
            v47 = v45;
            *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)(v40 + 16);
            *(_OWORD *)&v81.fields.fakeValue = v46;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v81, 0LL);
            if ( v47 != Instance )
            {
              v48 = *v35;
              v49 = v37;
              v50 = v29;
              v51 = p_fields;
              v52 = v35;
              cctor_finished = (*v35)->_2.cctor_finished;
              v55 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v54 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !cctor_finished )
                j_il2cpp_runtime_class_init_0(v48, v33);
              *(_QWORD *)&v86.fields.currentCryptoKey = v55;
              *(_QWORD *)&v86.fields.fakeValue = v54;
              v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v86, 0LL);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v40 + 80),
                           0LL);
              v35 = v52;
              p_fields = v51;
              v29 = v50;
              v37 = v49;
              UserId = v80;
              if ( v56 == (_DWORD)Instance )
              {
                if ( !v29 )
                  goto LABEL_58;
                items = v29->fields._items;
                v64 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v29->fields._version;
                if ( !items )
                  goto LABEL_58;
                size = v29->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v29,
                    (Il2CppObject *)v40,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                }
                else
                {
                  v66 = &items->obj.klass + size;
                  v29->fields._size = size + 1;
                  v66[4] = (Il2CppClass *)v40;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 4), v40, v57, v58, v59, v60, v61, v62);
                }
              }
            }
          }
        }
      }
      LODWORD(v34) = *(_DWORD *)(v36 + 24);
    }
    while ( (__int64)++v38 < (int)v34 );
  }
  if ( !v29 )
LABEL_58:
    sub_1BCAA3C(Instance, v33);
  if ( v29->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    v29,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v85 = *(System_Collections_Generic_List_Enumerator_object__o *)&v84.fields.currentCryptoKey;
  while ( 1 )
  {
    v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v67 )
      break;
    current = v85.fields._current;
    if ( !v85.fields._current )
      sub_1BCAA3C(v67, v68);
    if ( SHIDWORD(v85.fields._current[16].klass) >= 2
      || SLODWORD(v85.fields._current[17].monitor) > 1
      || SHIDWORD(v85.fields._current[17].monitor) > 1
      || SLODWORD(v85.fields._current[18].klass) > 1 )
    {
      goto LABEL_51;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v85.fields._current, 0LL);
    if ( !AppendSkillInfo )
      sub_1BCAA3C(0LL, v71);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_1BCAA3C(AppendSkillInfo, v71);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v74 = 0;
      while ( 1 )
      {
        if ( max_length == v74 )
          sub_1BCAA44(AppendSkillInfo, v71);
        if ( svtSkillLvList->m_Items[v74 + 1] >= 2 )
          break;
        if ( max_length == ++v74 )
          goto LABEL_45;
      }
LABEL_51:
      v77 = 1;
      v78 = 9;
      goto LABEL_52;
    }
LABEL_45:
    klass = current[6].klass;
    monitor = current[6].monitor;
    if ( !(*v35)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v35, v71);
    *(_QWORD *)&v87.fields.currentCryptoKey = klass;
    *(_QWORD *)&v87.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v87, 0LL) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_51;
    }
  }
  v77 = 0;
  v78 = 18;
LABEL_52:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v77 & (v78 == 9);
}


bool __fastcall SpecialAscensionControl__HaveRequestItemAndQp(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x20
  __int64 v45; // x21
  __int64 v46; // x23
  Il2CppObject *v47; // x19
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_Dictionary_int__int__o *v51; // x20
  struct UserServantEntity_o *v52; // x8
  int32_t v53; // w22
  int v54; // w21
  struct DataMasterBase_array *datalist; // x21
  __int64 v56; // x8
  __int64 v57; // x29
  unsigned __int64 v58; // x27
  int32_t v59; // w23
  int32_t v60; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v67; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v68; // q0
  UserItemMaster_o *v69; // x21
  int64_t v70; // x0
  __int64 v71; // x1
  _BOOL8 v72; // x0
  __int64 v73; // x1
  int v74; // w19
  UserServantEntity_o *v75; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v76; // [xsp+10h] [xbp-E0h]
  int m_CancellationTokenSource; // [xsp+18h] [xbp-D8h]
  int v78; // [xsp+1Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+20h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v80; // [xsp+40h] [xbp-B0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v82; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4B19AEB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineLimitMaster___, userSvtEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v33, v34);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    byte_4B19AEB = 1;
  }
  memset(&v82, 0, 32);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v46 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
  *(_QWORD *)&v83.fields.currentCryptoKey = v46;
  *(_QWORD *)&v83.fields.fakeValue = v45;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v83, 0LL);
  if ( !v44 )
    goto LABEL_47;
  v47 = DataMasterBase_object__object__int___GetEntity(
          v44,
          (int32_t)Instance,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v51 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v48,
                                                               v49,
                                                               v50);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v51,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v52 = this->fields.baseUserServantEntity;
  if ( !v52 )
    goto LABEL_47;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v52->fields.limitCount,
                                0LL);
  if ( !v47 )
    goto LABEL_47;
  v53 = (int)Instance;
  v75 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v47[5].monitor) )
  {
    v54 = 0;
    v76 = v47;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_47;
      v78 = v54;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v47[7].klass),
                                    v53,
                                    0LL);
      if ( !Instance )
        goto LABEL_47;
      datalist = Instance->fields.datalist;
      if ( !datalist )
        goto LABEL_47;
      v56 = *(_QWORD *)&datalist->max_length;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
      if ( (int)v56 >= 1 )
        break;
LABEL_25:
      v47 = v76;
      ++v53;
      v54 = m_CancellationTokenSource + v78;
      if ( v53 >= SLODWORD(v76[5].monitor) )
        goto LABEL_28;
    }
    v57 = *(_QWORD *)&Instance->fields._DispLog;
    v58 = 0LL;
    while ( 1 )
    {
      if ( v58 >= (unsigned int)v56 )
        goto LABEL_48;
      if ( !v57 )
        break;
      if ( v58 >= *(unsigned int *)(v57 + 24) )
LABEL_48:
        sub_1BCAA44(Instance, v42);
      if ( !v51 )
        break;
      v59 = *((_DWORD *)datalist->m_Items + v58);
      v60 = *(_DWORD *)(v57 + 32 + 4 * v58);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v51,
             v59,
             (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v60 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v51,
                 v59,
                 (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v51,
          v59,
          (const MethodInfo_31FE62C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v51,
        v59,
        v60,
        (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(v56) = datalist->max_length;
      if ( (__int64)++v58 >= (int)v56 )
        goto LABEL_25;
    }
LABEL_47:
    sub_1BCAA3C(Instance, v42);
  }
  v54 = 0;
LABEL_28:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_47;
  if ( SLODWORD(Instance->fields.lockCountObj) < v54 )
    return 0;
  if ( !v51 )
    goto LABEL_47;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v80,
    v51,
    (const MethodInfo_31FD64C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v82.fields._dictionary = *(_OWORD *)&v80.fields._dictionary;
  v82.fields._current = v80.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v82,
            (const MethodInfo_3354DA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v82.fields._current.fields.key;
    key_high = HIDWORD(v82.fields._current.fields.key);
    v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v64 )
      sub_1BCAA3C(0LL, v65);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v64,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v75 )
      sub_1BCAA3C(MasterData_object, v67);
    v68 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v75->fields.userId.fields.fakeValue;
    v69 = (UserItemMaster_o *)MasterData_object;
    *(_OWORD *)&v80.fields._dictionary = *(_OWORD *)&v75->fields.userId.fields.currentCryptoKey;
    v80.fields._current = v68;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v67);
    *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&v80.fields._dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v79.fields.fakeValue = v80.fields._current;
    v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v79, 0LL);
    if ( !v69 )
      sub_1BCAA3C(v70, v71);
    v72 = UserItemMaster__TryGetEntity(v69, &entity, v70, key, 0LL);
    if ( v72 )
    {
      if ( !entity )
        sub_1BCAA3C(v72, v73);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v74 = 12;
    goto LABEL_45;
  }
  v74 = 13;
LABEL_45:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v82,
    (const MethodInfo_3354EA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v74 != 12;
}


void __fastcall SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  int32_t v6; // w0

  if ( (byte_4B19AEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SpecialAscensionControl_OnClickHelp__, method, v2);
    byte_4B19AEF = 1;
  }
  if ( !this->fields.helpSeSilent )
  {
    v4 = Method_SpecialAscensionControl_OnClickHelp__;
    if ( (*((_BYTE *)Method_SpecialAscensionControl_OnClickHelp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SpecialAscensionControl_OnClickHelp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  }
  v6 = ((__int64 (__fastcall *)(SpecialAscensionControl_o *, void *))this->klass->vtable._6_GetTutorialOpenType.method)(
         this,
         this->klass[1]._1.image);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v6, 0LL, 0LL);
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
      sub_1BCAA3C(HaveRequestItemAndQp, v10);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  this->fields.baseUserServantEntity = selectBaseSvt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
    (int64_t)selectBaseSvt,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SpecialAscensionControl__SetStateInfoMsg(this, v9);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    sub_1BCAA3C(0LL, v10);
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, this->fields.baseUserServantEntity == 0LL, 0LL);
  SpecialAscensionControl__SetBaseSvtCardImg(this, v12);
  SpecialAscensionControl__SetCombineInfo(this, v13);
  SpecialAscensionControl__SetExeBtnState(this, v14);
  this->fields.effectCnt = 0;
}


bool __fastcall SpecialAscensionControl__SelectedBaseSvt(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  return this->fields.baseUserServantEntity != 0LL;
}


void __fastcall SpecialAscensionControl__SetBaseSvtCardImg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct UserServantEntity_o *v14; // x8
  ServantLimitImageMaster_o *v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v19; // x1
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  int32_t v22; // w21
  __int64 v23; // x1
  UnityEngine_Object_o *gameObject; // x22
  struct UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UICharaGraphTexture_o **v32; // x0
  struct UICharaGraphTexture_o **v33; // x19
  UnityEngine_Object_o *v34; // x20
  struct UICharaGraphTexture_o *v35; // t1
  __int64 v36; // x1
  UnityEngine_Object_o *v37; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4B19AE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19AE8 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v14 = this->fields.baseUserServantEntity;
      if ( v14 )
      {
        v15 = (ServantLimitImageMaster_o *)Instance;
        v17 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
        *(_QWORD *)&v38.fields.currentCryptoKey = v17;
        *(_QWORD *)&v38.fields.fakeValue = v16;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v38, 0LL);
        if ( v15 )
        {
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         v15,
                                         (int32_t)Instance,
                                         CardImageLimitCount,
                                         0LL);
          p_charaGraph = &this->fields.charaGraph;
          charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
          v22 = ServantImageLimitSealAfter;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
          if ( !UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
            goto LABEL_16;
          Instance = (DataManager_o *)*p_charaGraph;
          if ( *p_charaGraph )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Instance,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
            UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
LABEL_16:
            TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                                       this->fields.charaGraphBase,
                                       this->fields.baseUserServantEntity,
                                       v22,
                                       10,
                                       0LL,
                                       0,
                                       0LL);
            this->fields.charaGraph = TexturePrefab_38621628;
            v32 = &this->fields.charaGraph;
LABEL_24:
            sub_1BCA784(
              (PartyOrganizationUtility_o *)v32,
              (int64_t)TexturePrefab_38621628,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(Instance, v13);
  }
  v35 = this->fields.charaGraph;
  v33 = &this->fields.charaGraph;
  v34 = (UnityEngine_Object_o *)v35;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*v33;
    if ( *v33 )
    {
      v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
      UnityEngine_Object__Destroy_70154244(v37, 0LL);
      v32 = v33;
      TexturePrefab_38621628 = 0LL;
      *v33 = 0LL;
      goto LABEL_24;
    }
    goto LABEL_26;
  }
}


void __fastcall SpecialAscensionControl__SetCombineInfo(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  CombineInfoComponent_o *combineInfoComp; // x0
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x1
  struct UserServantEntity_o *v23; // x8
  ServantLimitMaster_o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  int32_t v27; // w22
  struct UserServantEntity_o *v28; // x8
  int32_t v29; // w22
  int32_t LimitCntMax; // w0
  const MethodInfo *v31; // x5
  const MethodInfo *v32; // x2
  struct UserServantEntity_o *v33; // x8
  int32_t v34; // w9
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B19AE9 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineSvtData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19AE9 = 1;
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
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, (UserServantEntity_o *)method, v11);
  v15 = sub_1BCAA2C(CombineSvtData_TypeInfo, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_23;
  baseUserServantEntity = this->fields.baseUserServantEntity;
  *(_QWORD *)(v15 + 16) = baseUserServantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)baseUserServantEntity, v16, v17, v18, v19, v20, v21);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v23 = this->fields.baseUserServantEntity;
  if ( !v23 )
    goto LABEL_23;
  v24 = (ServantLimitMaster_o *)combineInfoComp;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v37.fields.currentCryptoKey = v26;
  *(_QWORD *)&v37.fields.fakeValue = v25;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                v37,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v27 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  if ( !v24 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v24, v27, (int)combineInfoComp - 1, 0LL);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v15 + 24) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0LL);
  *(_DWORD *)(v15 + 28) = (_DWORD)combineInfoComp;
  v28 = this->fields.baseUserServantEntity;
  if ( !v28 )
    goto LABEL_23;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                v28->fields.svtId,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_23;
  v29 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v24, v29, LimitCntMax, 0LL);
  if ( !combineInfoComp )
    goto LABEL_23;
  *(_DWORD *)(v15 + 32) = HIDWORD(combineInfoComp->fields.m_CancellationTokenSource);
  if ( !this->fields.combineResStatus )
    goto LABEL_23;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v15 + 24),
    v31);
  *(_DWORD *)(v15 + 44) = afterAtk[1];
  v33 = this->fields.baseUserServantEntity;
  if ( !v33
    || (v34 = afterAtk[0],
        *(_DWORD *)(v15 + 48) = v33->fields.adjustHp,
        *(_DWORD *)(v15 + 52) = v34,
        adjustAtk = v33->fields.adjustAtk,
        *(_DWORD *)(v15 + 36) = 1065353216,
        *(_DWORD *)(v15 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(combineInfoComp, method);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v15, v32);
}


void __fastcall SpecialAscensionControl__SetExeBtnState(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *combineBtn; // x0
  UIWidget_o *v7; // x20
  Il2CppObject *Component_object; // x19
  const MethodInfo *v9; // x1
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19AE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenScale___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v4, v5);
    byte_4B19AE6 = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            combineBtn,
                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v7 = (UIWidget_o *)combineBtn;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.combineTxtImg,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  combineBtn = (UnityEngine_Component_o *)SpecialAscensionControl__CanExeSpecialAscension(this, v9);
  if ( ((unsigned __int8)combineBtn & 1) != 0 )
  {
    if ( v7 )
    {
      v10.fields.r = 1.0;
      v10.fields.g = 1.0;
      v10.fields.b = 1.0;
      v10.fields.a = 1.0;
      UIWidget__set_color(v7, v10, 0LL);
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)Component_object, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(combineBtn, method);
  }
  if ( !v7 )
    goto LABEL_12;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v7, v11, 0LL);
  if ( !Component_object )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
}


void __fastcall SpecialAscensionControl__SetStateInfoMsg(SpecialAscensionControl_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v15; // x20
  __int64 v16; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 *v20; // x8
  UILabel_o *v21; // x8
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19AE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_7489/*"INFO_MSG_SPECIAL_ASCENSION"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_8887/*"MSG_LIMITUP_MAX"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B19AE7 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_18;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_18;
  v22.fields.r = 0.0;
  v22.fields.a = 1.0;
  v22.fields.g = 0.87891;
  v22.fields.b = 0.98828;
  v15 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v22, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    if ( UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    {
      v23.fields.r = 1.0;
      v23.fields.g = 1.0;
      v23.fields.b = 1.0;
      v23.fields.a = 1.0;
      UIWidget__set_color(v15, v23, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v20 = &StringLiteral_8887/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
      v20 = &StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v20 = &StringLiteral_7489/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v20, 0LL);
  v21 = this->fields.detailInfoLb;
  if ( !v21 )
LABEL_18:
    sub_1BCAA3C(detailInfoLb, method);
  UILabel__set_text(v21, (System_String_o *)detailInfoLb, 0LL);
}


void __fastcall SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  SpecialAscensionControl_c *klass; // x8
  __int64 v11; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  __int64 v13; // x1
  SpecialAscensionControl_c *v14; // x0
  UILabel_o *qpLb; // x20
  UILabel_o *haveQpLb; // x20
  __int64 v17; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v19; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19AE5 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SpecialAscensionControl_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_8892/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v8, v9);
    byte_4B19AE5 = 1;
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
  v14 = SpecialAscensionControl_TypeInfo;
  qpLb = this->fields.qpLb;
  if ( !SpecialAscensionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo, v13);
    v14 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v14->static_fields->SPEND_QP_VAL;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0LL);
  if ( !qpLb )
    goto LABEL_18;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_18;
  v21.fields.r = 1.0;
  v21.fields.g = 1.0;
  v21.fields.b = 1.0;
  v21.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)baseSelectInfoLb, v21, 0LL);
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString_63206828(
                                                   (int)baseSelectInfoLb + 96,
                                                   (System_String_o *)StringLiteral_9337/*"N0"*/,
                                                   0LL);
  if ( !haveQpLb )
    goto LABEL_18;
  UILabel__set_text(haveQpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  this->fields.pushExeButton = 0;
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8892/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !preSelectBaseLb )
LABEL_18:
    sub_1BCAA3C(baseSelectInfoLb, v11);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0LL);
  SpecialAscensionControl__Refresh(this, 0LL, v19);
}


void __fastcall SpecialAscensionControl__Start(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *transform; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B19AE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method, v2);
    byte_4B19AE4 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v5);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       transform,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.combineResStatus,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}