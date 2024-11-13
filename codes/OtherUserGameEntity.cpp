void __fastcall OtherUserGameEntity___ctor(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1660E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B1660E = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall OtherUserGameEntity__CreatePrimaryKey(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserGameEntity__GetAppendSkillInfo(
        OtherUserGameEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x8
  OtherUserGameEntity_o **v16; // x9
  BalanceConfig_c *v17; // x0
  SkillInfo_array *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  v10 = this;
  if ( (byte_4B1660D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, *(_QWORD *)&classPos);
    this = (OtherUserGameEntity_o *)sub_1BCA7E0(&SkillInfo___TypeInfo, v11, v12);
    byte_4B1660D = 1;
  }
  v13 = 80LL;
  if ( !returnSupportServantType )
    v13 = 72LL;
  v14 = *(__int64 *)((char *)&v10->klass + v13);
  if ( !v14 )
LABEL_19:
    sub_1BCAA3C(this, skillInfoList);
  if ( (int)*(_QWORD *)(v14 + 24) >= 1 )
  {
    v15 = (unsigned int)*(_QWORD *)(v14 + 24);
    v16 = (OtherUserGameEntity_o **)(v14 + 32);
    do
    {
      this = *v16;
      if ( supportDeckId < 1 )
      {
        if ( !this )
          goto LABEL_19;
      }
      else
      {
        if ( !this )
          goto LABEL_19;
        if ( LODWORD(this->fields.userId) != supportDeckId )
          goto LABEL_14;
      }
      if ( this->fields.userLv == classPos )
      {
        ServantLeaderInfo__GetAppendPassiveSkillInfo_41245048((ServantLeaderInfo_o *)this, skillInfoList, 0, 0LL);
        return;
      }
LABEL_14:
      --v15;
      ++v16;
    }
    while ( v15 );
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (SkillInfo_array *)sub_1BCA888(
                             SkillInfo___TypeInfo,
                             (unsigned int)v17->static_fields->SvtAppendPassiveSkillListMax);
  *skillInfoList = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v18, v19, v20, v21, v22, v23, v24);
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *__fastcall OtherUserGameEntity__GetEquipInfo(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *userRecommendSupportHash; // x19
  System_Func_object__bool__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  OtherUserGameEntity___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_object__object__o *_9__45_1; // x20
  Il2CppObject *v36; // x21
  struct OtherUserGameEntity___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0

  if ( (byte_4B1660C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EquipTargetInfo___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__EquipTargetInfo___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___, v8, v9);
    sub_1BCA7E0(&System_Func_UserRecommendSupportInfo__EquipTargetInfo__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_UserRecommendSupportInfo__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_OtherUserGameEntity___c__GetEquipInfo_b__45_1__, v14, v15);
    sub_1BCA7E0(&Method_OtherUserGameEntity___c__DisplayClass45_0__GetEquipInfo_b__0__, v16, v17);
    sub_1BCA7E0(&OtherUserGameEntity___c__DisplayClass45_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&OtherUserGameEntity___c_TypeInfo, v20, v21);
    byte_4B1660C = 1;
  }
  v22 = sub_1BCAA2C(OtherUserGameEntity___c__DisplayClass45_0_TypeInfo, *(_QWORD *)&index, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    sub_1BCAA3C(v23, v24);
  *(_DWORD *)(v22 + 16) = index;
  userRecommendSupportHash = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userRecommendSupportHash;
  v28 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserRecommendSupportInfo__bool__TypeInfo, v24, v25, v26);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v22,
    Method_OtherUserGameEntity___c__DisplayClass45_0__GetEquipInfo_b__0__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          userRecommendSupportHash,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___);
  v33 = OtherUserGameEntity___c_TypeInfo;
  v34 = v29;
  if ( !OtherUserGameEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserGameEntity___c_TypeInfo, v30);
    v33 = OtherUserGameEntity___c_TypeInfo;
  }
  _9__45_1 = (System_Func_object__object__o *)v33->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v30);
      v33 = OtherUserGameEntity___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__45_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_UserRecommendSupportInfo__EquipTargetInfo__TypeInfo,
                                                  v30,
                                                  v31,
                                                  v32);
    System_Func_object__object____ctor(_9__45_1, v36, Method_OtherUserGameEntity___c__GetEquipInfo_b__45_1__, 0LL);
    static_fields = OtherUserGameEntity___c_TypeInfo->static_fields;
    static_fields->__9__45_1 = (struct System_Func_UserRecommendSupportInfo__EquipTargetInfo__o *)_9__45_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__45_1,
      (int64_t)_9__45_1,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v34,
                                                               (System_Func_TSource__TResult__o *)_9__45_1,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__EquipTargetInfo___);
  return (EquipTargetInfo_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                v44,
                                (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_EquipTargetInfo___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__GetEquipSvtId(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v4; // x20
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x21
  int max_length; // w8
  unsigned int v7; // w22
  UserRecommendSupportInfo_o *v8; // x20
  int64_t pushUserSvtId; // x19
  struct System_String_o *message; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v4 = this;
  if ( (byte_4B16608 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BCA7E0(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      *(_QWORD *)&index,
                                      method);
    byte_4B16608 = 1;
  }
  userRecommendSupportHash = v4->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
    goto LABEL_17;
  max_length = userRecommendSupportHash->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1BCAA44(this, *(_QWORD *)&index);
    v8 = userRecommendSupportHash->m_Items[v7];
    if ( !v8 )
      goto LABEL_17;
    if ( v8->fields.idx == index )
    {
      this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0LL);
      if ( this )
        break;
    }
    max_length = userRecommendSupportHash->max_length;
    if ( (int)++v7 >= max_length )
      return 0;
  }
  this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0LL);
  if ( !this )
LABEL_17:
    sub_1BCAA3C(this, *(_QWORD *)&index);
  message = this->fields.message;
  pushUserSvtId = this->fields.pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index);
  *(_QWORD *)&v12.fields.currentCryptoKey = message;
  *(_QWORD *)&v12.fields.fakeValue = pushUserSvtId;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__GetEquipUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v4; // x20
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x21
  int max_length; // w8
  unsigned int v7; // w22
  UserRecommendSupportInfo_o *v8; // x20
  __int128 v10; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4B16606 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BCA7E0(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                      *(_QWORD *)&index,
                                      method);
    byte_4B16606 = 1;
  }
  userRecommendSupportHash = v4->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
    goto LABEL_18;
  max_length = userRecommendSupportHash->max_length;
  if ( max_length < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1BCAA44(this, *(_QWORD *)&index);
    v8 = userRecommendSupportHash->m_Items[v7];
    if ( !v8 )
      goto LABEL_18;
    if ( v8->fields.idx == index )
    {
      this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0LL);
      if ( this )
        break;
    }
    max_length = userRecommendSupportHash->max_length;
    if ( (int)++v7 >= max_length )
      return 0LL;
  }
  this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0LL);
  if ( !this )
LABEL_18:
    sub_1BCAA3C(this, *(_QWORD *)&index);
  v10 = *(_OWORD *)&this->fields.friendCode;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userName;
  *(_OWORD *)&v12.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&index);
  v11 = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OtherUserGameEntity__GetRecommendSupportMessageIds(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v4; // x20
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  int max_length; // w9
  int v7; // w10
  UserRecommendSupportInfo_o *v8; // x11

  v4 = this;
  if ( (byte_4B16609 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&index, method);
    byte_4B16609 = 1;
  }
  userRecommendSupportHash = v4->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
LABEL_13:
    sub_1BCAA3C(this, *(_QWORD *)&index);
  max_length = userRecommendSupportHash->max_length;
  if ( max_length < 1 )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  v7 = 0;
  while ( 1 )
  {
    if ( max_length == v7 )
      sub_1BCAA44(this, *(_QWORD *)&index);
    v8 = userRecommendSupportHash->m_Items[v7];
    if ( !v8 )
      goto LABEL_13;
    if ( v8->fields.idx == index )
      return v8->fields.adviceMessageIds;
    if ( max_length == ++v7 )
      return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  }
}


int32_t __fastcall OtherUserGameEntity__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B16601 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16601 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  return Entity && QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, v11);
}


ServantLeaderInfo_array *__fastcall OtherUserGameEntity__GetServantLeaderInfoByReturnType(
        OtherUserGameEntity_o *this,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 80LL;
  if ( !returnSupportServantType )
    v3 = 72LL;
  return *(ServantLeaderInfo_array **)((char *)&this->klass + v3);
}


UserRecommendSupportInfo_array *__fastcall OtherUserGameEntity__GetUserRecommendSupportInfo(
        OtherUserGameEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userRecommendSupportHash;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__GetUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *userRecommendSupportHash; // x19
  System_Func_object__bool__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  OtherUserGameEntity___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_T__TResult__o *_9__20_1; // x20
  Il2CppObject *v36; // x21
  struct OtherUserGameEntity___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0

  if ( (byte_4B16603 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_long___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__long___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___, v8, v9);
    sub_1BCA7E0(&System_Func_UserRecommendSupportInfo__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_UserRecommendSupportInfo__long__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_OtherUserGameEntity___c__GetUserSvtId_b__20_1__, v14, v15);
    sub_1BCA7E0(&Method_OtherUserGameEntity___c__DisplayClass20_0__GetUserSvtId_b__0__, v16, v17);
    sub_1BCA7E0(&OtherUserGameEntity___c__DisplayClass20_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&OtherUserGameEntity___c_TypeInfo, v20, v21);
    byte_4B16603 = 1;
  }
  v22 = sub_1BCAA2C(OtherUserGameEntity___c__DisplayClass20_0_TypeInfo, *(_QWORD *)&index, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    sub_1BCAA3C(v23, v24);
  *(_DWORD *)(v22 + 16) = index;
  userRecommendSupportHash = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userRecommendSupportHash;
  v28 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserRecommendSupportInfo__bool__TypeInfo, v24, v25, v26);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v22,
    Method_OtherUserGameEntity___c__DisplayClass20_0__GetUserSvtId_b__0__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          userRecommendSupportHash,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___);
  v33 = OtherUserGameEntity___c_TypeInfo;
  v34 = v29;
  if ( !OtherUserGameEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserGameEntity___c_TypeInfo, v30);
    v33 = OtherUserGameEntity___c_TypeInfo;
  }
  _9__20_1 = (System_Func_T__TResult__o *)v33->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v30);
      v33 = OtherUserGameEntity___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__20_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_UserRecommendSupportInfo__long__TypeInfo,
                                              v30,
                                              v31,
                                              v32);
    System_Func_object__long____ctor(_9__20_1, v36, Method_OtherUserGameEntity___c__GetUserSvtId_b__20_1__, 0LL);
    static_fields = OtherUserGameEntity___c_TypeInfo->static_fields;
    static_fields->__9__20_1 = (struct System_Func_UserRecommendSupportInfo__long__o *)_9__20_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__20_1,
      (int64_t)_9__20_1,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v34,
                                                               (System_Func_TSource__TResult__o *)_9__20_1,
                                                               (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__long___);
  return System_Linq_Enumerable__FirstOrDefault_long_(
           v44,
           (const MethodInfo_2F34720 *)Method_System_Linq_Enumerable_FirstOrDefault_long___);
}


bool __fastcall OtherUserGameEntity__IsSameSupportDeck(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x5
  int32_t v5; // w20
  _BOOL4 v6; // w24
  ServantLeaderInfo_o *ServantLeaderInfo; // x22
  const MethodInfo *v8; // x5
  int64_t v9; // x0
  __int64 v10; // x1
  int64_t v11; // x21
  _BOOL4 v12; // w8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v14; // q0
  _BOOL4 v15; // w24
  __int64 v16; // x8
  __int128 v17; // q0
  _BOOL4 v18; // w8
  struct EquipTargetInfo_o *v19; // x8
  __int128 v20; // q0
  __int64 v21; // x8
  __int128 v22; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+80h] [xbp-60h]

  if ( (byte_4B16602 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B16602 = 1;
  }
  v5 = 0;
  while ( 1 )
  {
    v6 = 1;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(this, v5, 1, 0, 0, v3);
    v9 = (int64_t)OtherUserGameEntity__getServantLeaderInfo(this, v5, 1, 1, 0, v8);
    v11 = v9;
    if ( ServantLeaderInfo )
      v6 = ServantLeaderInfo->fields.userSvtId == 0;
    if ( v9 )
    {
      v12 = *(_QWORD *)(v9 + 40) == 0LL;
      if ( !v6 )
        goto LABEL_13;
    }
    else
    {
      v12 = 1;
      if ( !v6 )
        goto LABEL_13;
    }
    if ( !v12 )
    {
LABEL_13:
      if ( v12 || v6 )
        return 0;
      if ( !ServantLeaderInfo || !v9 )
        goto LABEL_41;
      if ( ServantLeaderInfo->fields.userSvtId != *(_QWORD *)(v9 + 40) )
        return 0;
      goto LABEL_17;
    }
    if ( !ServantLeaderInfo )
      break;
LABEL_17:
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      break;
    v14 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v28.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    v27 = v28;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v27, 0LL);
    v15 = v9 == 0;
    if ( v11 )
      goto LABEL_23;
LABEL_28:
    v18 = 1;
    if ( !v15 )
      goto LABEL_30;
LABEL_29:
    if ( !v18 )
      goto LABEL_30;
LABEL_38:
    if ( ++v5 == 8 )
      return 1;
  }
  v15 = 1;
  if ( !v9 )
    goto LABEL_28;
LABEL_23:
  v16 = *(_QWORD *)(v11 + 144);
  if ( !v16 )
    goto LABEL_28;
  v17 = *(_OWORD *)(v16 + 40);
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v16 + 24);
  *(_OWORD *)&v28.fields.fakeValue = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
  v26 = v28;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v26, 0LL);
  v18 = v9 == 0;
  if ( v15 )
    goto LABEL_29;
LABEL_30:
  if ( v18 || v15 )
    return 0;
  if ( !ServantLeaderInfo )
    goto LABEL_41;
  v19 = ServantLeaderInfo->fields.equipTarget1;
  if ( !v19 )
    goto LABEL_41;
  v20 = *(_OWORD *)&v19->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v19->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
  v25 = v28;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v25, 0LL);
  if ( !v11 || (v21 = *(_QWORD *)(v11 + 144)) == 0 )
LABEL_41:
    sub_1BCAA3C(v9, v10);
  v22 = *(_OWORD *)(v21 + 40);
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)(v21 + 24);
  *(_OWORD *)&v24.fields.fakeValue = v22;
  if ( v9 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v24, 0LL) )
    goto LABEL_38;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getAdjustAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 *i; // x9
  __int64 v9; // x10

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_17:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  this = 0LL;
  if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)(v6 + 24);
    for ( i = (__int64 *)(v6 + 32); ; ++i )
    {
      v9 = *i;
      if ( supportDeckId < 1 )
      {
        if ( !v9 )
          goto LABEL_17;
      }
      else
      {
        if ( !v9 )
          goto LABEL_17;
        if ( *(_DWORD *)(v9 + 16) != supportDeckId )
          goto LABEL_13;
      }
      if ( *(_DWORD *)(v9 + 32) == classPos && *(_QWORD *)(v9 + 40) )
      {
        LODWORD(this) = *(_DWORD *)(v9 + 84);
        return (int)this;
      }
LABEL_13:
      if ( !--v7 )
      {
        LODWORD(this) = 0;
        return (int)this;
      }
    }
  }
  return (int)this;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getAdjustHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 *i; // x9
  __int64 v9; // x10

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_17:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  this = 0LL;
  if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)(v6 + 24);
    for ( i = (__int64 *)(v6 + 32); ; ++i )
    {
      v9 = *i;
      if ( supportDeckId < 1 )
      {
        if ( !v9 )
          goto LABEL_17;
      }
      else
      {
        if ( !v9 )
          goto LABEL_17;
        if ( *(_DWORD *)(v9 + 16) != supportDeckId )
          goto LABEL_13;
      }
      if ( *(_DWORD *)(v9 + 32) == classPos && *(_QWORD *)(v9 + 40) )
      {
        LODWORD(this) = *(_DWORD *)(v9 + 88);
        return (int)this;
      }
LABEL_13:
      if ( !--v7 )
      {
        LODWORD(this) = 0;
        return (int)this;
      }
    }
  }
  return (int)this;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 *i; // x9
  __int64 v9; // x10

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_17:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  this = 0LL;
  if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)(v6 + 24);
    for ( i = (__int64 *)(v6 + 32); ; ++i )
    {
      v9 = *i;
      if ( supportDeckId < 1 )
      {
        if ( !v9 )
          goto LABEL_17;
      }
      else
      {
        if ( !v9 )
          goto LABEL_17;
        if ( *(_DWORD *)(v9 + 16) != supportDeckId )
          goto LABEL_13;
      }
      if ( *(_DWORD *)(v9 + 32) == classPos && *(_QWORD *)(v9 + 40) )
      {
        LODWORD(this) = *(_DWORD *)(v9 + 80);
        return (int)this;
      }
LABEL_13:
      if ( !--v7 )
      {
        LODWORD(this) = 0;
        return (int)this;
      }
    }
  }
  return (int)this;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 *i; // x9
  __int64 v9; // x10
  __int64 v10; // x10

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_18:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  this = 0LL;
  if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)(v6 + 24);
    for ( i = (__int64 *)(v6 + 32); ; ++i )
    {
      v9 = *i;
      if ( supportDeckId < 1 )
      {
        if ( !v9 )
          goto LABEL_18;
      }
      else
      {
        if ( !v9 )
          goto LABEL_18;
        if ( *(_DWORD *)(v9 + 16) != supportDeckId )
          goto LABEL_14;
      }
      if ( *(_DWORD *)(v9 + 32) == classPos )
      {
        if ( *(_QWORD *)(v9 + 40) )
        {
          v10 = *(_QWORD *)(v9 + 144);
          if ( v10 )
          {
            LODWORD(this) = *(_DWORD *)(v10 + 88);
            return (int)this;
          }
        }
      }
LABEL_14:
      if ( !--v7 )
      {
        LODWORD(this) = 0;
        return (int)this;
      }
    }
  }
  return (int)this;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipExp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w9
  int v7; // w10
  __int64 v8; // x11
  __int64 v9; // x11

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v6 == v7 )
      sub_1BCAA44(this, classPos);
    v8 = *(_QWORD *)(v5 + 8LL * v7 + 32);
    if ( !v8 )
      goto LABEL_15;
    if ( *(_DWORD *)(v8 + 32) == classPos )
    {
      if ( *(_QWORD *)(v8 + 40) )
      {
        v9 = *(_QWORD *)(v8 + 144);
        if ( v9 )
          return *(_DWORD *)(v9 + 80);
      }
    }
    if ( v6 == ++v7 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 *i; // x9
  __int64 v9; // x10
  __int64 v10; // x10

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_18:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  this = 0LL;
  if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)(v6 + 24);
    for ( i = (__int64 *)(v6 + 32); ; ++i )
    {
      v9 = *i;
      if ( supportDeckId < 1 )
      {
        if ( !v9 )
          goto LABEL_18;
      }
      else
      {
        if ( !v9 )
          goto LABEL_18;
        if ( *(_DWORD *)(v9 + 16) != supportDeckId )
          goto LABEL_14;
      }
      if ( *(_DWORD *)(v9 + 32) == classPos )
      {
        if ( *(_QWORD *)(v9 + 40) )
        {
          v10 = *(_QWORD *)(v9 + 144);
          if ( v10 )
          {
            LODWORD(this) = *(_DWORD *)(v10 + 84);
            return (int)this;
          }
        }
      }
LABEL_14:
      if ( !--v7 )
      {
        LODWORD(this) = 0;
        return (int)this;
      }
    }
  }
  return (int)this;
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *__fastcall OtherUserGameEntity__getEquipInfo(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 *i; // x9
  __int64 v9; // x10

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  this = 0LL;
  if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)(v6 + 24);
    for ( i = (__int64 *)(v6 + 32); ; ++i )
    {
      v9 = *i;
      if ( supportDeckId < 1 )
      {
        if ( !v9 )
          goto LABEL_16;
      }
      else
      {
        if ( !v9 )
          goto LABEL_16;
        if ( *(_DWORD *)(v9 + 16) != supportDeckId )
          goto LABEL_12;
      }
      if ( *(_DWORD *)(v9 + 32) == classPos )
        return *(EquipTargetInfo_o **)(v9 + 144);
LABEL_12:
      if ( !--v7 )
        return 0LL;
    }
  }
  return (EquipTargetInfo_o *)this;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 *i; // x9
  __int64 v13; // x10
  __int64 v14; // x10
  __int64 v16; // x19
  __int64 v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v8 = this;
  if ( (byte_4B16607 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BCA7E0(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      *(_QWORD *)&classPos,
                                      *(_QWORD *)&returnSupportServantType);
    byte_4B16607 = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_20:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( (int)*(_QWORD *)(v10 + 24) < 1 )
    return 0;
  v11 = (unsigned int)*(_QWORD *)(v10 + 24);
  for ( i = (__int64 *)(v10 + 32); ; ++i )
  {
    v13 = *i;
    if ( supportDeckId < 1 )
    {
      if ( !v13 )
        goto LABEL_20;
    }
    else
    {
      if ( !v13 )
        goto LABEL_20;
      if ( *(_DWORD *)(v13 + 16) != supportDeckId )
        goto LABEL_15;
    }
    if ( *(_DWORD *)(v13 + 32) == classPos )
    {
      v14 = *(_QWORD *)(v13 + 144);
      if ( v14 )
        break;
    }
LABEL_15:
    if ( !--v11 )
      return 0;
  }
  v17 = *(_QWORD *)(v14 + 56);
  v16 = *(_QWORD *)(v14 + 64);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos);
  *(_QWORD *)&v18.fields.currentCryptoKey = v17;
  *(_QWORD *)&v18.fields.fakeValue = v16;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__getEquipUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 *i; // x9
  __int64 v13; // x10
  __int64 v14; // x10
  __int128 v15; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]

  v8 = this;
  if ( (byte_4B16605 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BCA7E0(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                      *(_QWORD *)&classPos,
                                      *(_QWORD *)&returnSupportServantType);
    byte_4B16605 = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_21:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  this = 0LL;
  if ( (int)*(_QWORD *)(v10 + 24) >= 1 )
  {
    v11 = (unsigned int)*(_QWORD *)(v10 + 24);
    for ( i = (__int64 *)(v10 + 32); ; ++i )
    {
      v13 = *i;
      if ( supportDeckId < 1 )
      {
        if ( !v13 )
          goto LABEL_21;
      }
      else
      {
        if ( !v13 )
          goto LABEL_21;
        if ( *(_DWORD *)(v13 + 16) != supportDeckId )
          goto LABEL_15;
      }
      if ( *(_DWORD *)(v13 + 32) == classPos )
      {
        v14 = *(_QWORD *)(v13 + 144);
        if ( v14 )
        {
          v15 = *(_OWORD *)(v14 + 40);
          *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(v14 + 24);
          *(_OWORD *)&v17.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&classPos);
          v16 = v17;
          return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v16, 0LL);
        }
      }
LABEL_15:
      if ( !--v11 )
        return 0LL;
    }
  }
  return (int64_t)this;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 *i; // x9
  __int64 v9; // x10

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_17:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  this = 0LL;
  if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)(v6 + 24);
    for ( i = (__int64 *)(v6 + 32); ; ++i )
    {
      v9 = *i;
      if ( supportDeckId < 1 )
      {
        if ( !v9 )
          goto LABEL_17;
      }
      else
      {
        if ( !v9 )
          goto LABEL_17;
        if ( *(_DWORD *)(v9 + 16) != supportDeckId )
          goto LABEL_13;
      }
      if ( *(_DWORD *)(v9 + 32) == classPos && *(_QWORD *)(v9 + 40) )
      {
        LODWORD(this) = *(_DWORD *)(v9 + 76);
        return (int)this;
      }
LABEL_13:
      if ( !--v7 )
      {
        LODWORD(this) = 0;
        return (int)this;
      }
    }
  }
  return (int)this;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getLimitCount(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w9
  int v7; // w10
  __int64 v8; // x11

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_13:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v6 == v7 )
      sub_1BCAA44(this, classPos);
    v8 = *(_QWORD *)(v5 + 8LL * v7 + 32);
    if ( !v8 )
      goto LABEL_13;
    if ( *(_DWORD *)(v8 + 32) == classPos && *(_QWORD *)(v8 + 40) )
      return *(_DWORD *)(v8 + 64);
    if ( v6 == ++v7 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getLv(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 *i; // x9
  __int64 v9; // x10

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_17:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  this = 0LL;
  if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)(v6 + 24);
    for ( i = (__int64 *)(v6 + 32); ; ++i )
    {
      v9 = *i;
      if ( supportDeckId < 1 )
      {
        if ( !v9 )
          goto LABEL_17;
      }
      else
      {
        if ( !v9 )
          goto LABEL_17;
        if ( *(_DWORD *)(v9 + 16) != supportDeckId )
          goto LABEL_13;
      }
      if ( *(_DWORD *)(v9 + 32) == classPos && *(_QWORD *)(v9 + 40) )
      {
        LODWORD(this) = *(_DWORD *)(v9 + 68);
        return (int)this;
      }
LABEL_13:
      if ( !--v7 )
      {
        LODWORD(this) = 0;
        return (int)this;
      }
    }
  }
  return (int)this;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getMaxLv(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  OtherUserGameEntity_o **i; // x9

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( (int)*(_QWORD *)(v6 + 24) < 1 )
    return 0;
  v7 = (unsigned int)*(_QWORD *)(v6 + 24);
  for ( i = (OtherUserGameEntity_o **)(v6 + 32); ; ++i )
  {
    this = *i;
    if ( supportDeckId < 1 )
    {
      if ( !this )
        goto LABEL_16;
    }
    else
    {
      if ( !this )
        goto LABEL_16;
      if ( LODWORD(this->fields.userId) != supportDeckId )
        goto LABEL_13;
    }
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      break;
LABEL_13:
    if ( !--v7 )
      return 0;
  }
  return ServantLeaderInfo__getLevelMax((ServantLeaderInfo_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantLeaderInfo_o *__fastcall OtherUserGameEntity__getServantLeaderInfo(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        bool isExist,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  int v8; // w9
  int v9; // w10

  v6 = 80LL;
  if ( !returnSupportServantType )
    v6 = 72LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_16;
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v8 == v9 )
        sub_1BCAA44(this, classPos);
      this = *(OtherUserGameEntity_o **)(v7 + 8LL * v9 + 32);
      if ( !this )
        break;
      if ( this->fields.userLv == classPos
        && (supportDeckId < 1 || LODWORD(this->fields.userId) == supportDeckId)
        && (isExist || this->fields.friendCode) )
      {
        return (ServantLeaderInfo_o *)this;
      }
      if ( v8 == ++v9 )
        return 0LL;
    }
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OtherUserGameEntity__getSkillIdList(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w9
  int v7; // w10

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_13:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v6 == v7 )
      sub_1BCAA44(this, classPos);
    this = *(OtherUserGameEntity_o **)(v5 + 8LL * v7 + 32);
    if ( !this )
      goto LABEL_13;
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      return ServantLeaderInfo__getSkillIdList((ServantLeaderInfo_o *)this, 0LL);
    if ( v6 == ++v7 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserGameEntity__getSkillInfo(
        OtherUserGameEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x8
  OtherUserGameEntity_o **v16; // x9
  BalanceConfig_c *v17; // x0
  SkillInfo_array *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  v10 = this;
  if ( (byte_4B1660A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, *(_QWORD *)&classPos);
    this = (OtherUserGameEntity_o *)sub_1BCA7E0(&SkillInfo___TypeInfo, v11, v12);
    byte_4B1660A = 1;
  }
  v13 = 80LL;
  if ( !returnSupportServantType )
    v13 = 72LL;
  v14 = *(__int64 *)((char *)&v10->klass + v13);
  if ( !v14 )
LABEL_20:
    sub_1BCAA3C(this, skillInfoList);
  if ( (int)*(_QWORD *)(v14 + 24) >= 1 )
  {
    v15 = (unsigned int)*(_QWORD *)(v14 + 24);
    v16 = (OtherUserGameEntity_o **)(v14 + 32);
    do
    {
      this = *v16;
      if ( supportDeckId < 1 )
      {
        if ( !this )
          goto LABEL_20;
      }
      else
      {
        if ( !this )
          goto LABEL_20;
        if ( LODWORD(this->fields.userId) != supportDeckId )
          goto LABEL_15;
      }
      if ( this->fields.userLv == classPos && this->fields.friendCode )
      {
        ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)this, skillInfoList, 0LL);
        return;
      }
LABEL_15:
      --v15;
      ++v16;
    }
    while ( v15 );
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v17->static_fields->SvtSkillListMax);
  *skillInfoList = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v18, v19, v20, v21, v22, v23, v24);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OtherUserGameEntity__getSkillLevelList(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w9
  int v7; // w10

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_13:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v6 == v7 )
      sub_1BCAA44(this, classPos);
    this = *(OtherUserGameEntity_o **)(v5 + 8LL * v7 + 32);
    if ( !this )
      goto LABEL_13;
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      return ServantLeaderInfo__getSkillLevelList((ServantLeaderInfo_o *)this, 0LL);
    if ( v6 == ++v7 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 *i; // x9
  __int64 v13; // x10
  __int64 v15; // x19
  __int64 v16; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v8 = this;
  if ( (byte_4B16604 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BCA7E0(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      *(_QWORD *)&classPos,
                                      *(_QWORD *)&returnSupportServantType);
    byte_4B16604 = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_20:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( (int)*(_QWORD *)(v10 + 24) < 1 )
    return 0;
  v11 = (unsigned int)*(_QWORD *)(v10 + 24);
  for ( i = (__int64 *)(v10 + 32); ; ++i )
  {
    v13 = *i;
    if ( supportDeckId < 1 )
    {
      if ( !v13 )
        goto LABEL_20;
    }
    else
    {
      if ( !v13 )
        goto LABEL_20;
      if ( *(_DWORD *)(v13 + 16) != supportDeckId )
        goto LABEL_15;
    }
    if ( *(_DWORD *)(v13 + 32) == classPos && *(_QWORD *)(v13 + 40) )
      break;
LABEL_15:
    if ( !--v11 )
      return 0;
  }
  v16 = *(_QWORD *)(v13 + 48);
  v15 = *(_QWORD *)(v13 + 56);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos);
  *(_QWORD *)&v17.fields.currentCryptoKey = v16;
  *(_QWORD *)&v17.fields.fakeValue = v15;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall OtherUserGameEntity__getTreasureDeviceInfo(
        OtherUserGameEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v10; // x22
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x8
  OtherUserGameEntity_o **v14; // x9
  TreasureDvcInfo_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  v10 = this;
  if ( (byte_4B1660B & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, *(_QWORD *)&classPos);
    byte_4B1660B = 1;
  }
  v11 = 80LL;
  if ( !returnSupportServantType )
    v11 = 72LL;
  v12 = *(__int64 *)((char *)&v10->klass + v11);
  if ( !v12 )
LABEL_18:
    sub_1BCAA3C(this, tdInfo);
  if ( (int)*(_QWORD *)(v12 + 24) < 1 )
  {
LABEL_16:
    v15 = (TreasureDvcInfo_o *)sub_1BCAA2C(
                                 TreasureDvcInfo_TypeInfo,
                                 tdInfo,
                                 *(_QWORD *)&classPos,
                                 *(_QWORD *)&returnSupportServantType);
    TreasureDvcInfo___ctor(v15, 0LL);
    *tdInfo = v15;
    sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    return 0;
  }
  v13 = (unsigned int)*(_QWORD *)(v12 + 24);
  v14 = (OtherUserGameEntity_o **)(v12 + 32);
  while ( 1 )
  {
    this = *v14;
    if ( supportDeckId < 1 )
    {
      if ( !this )
        goto LABEL_18;
    }
    else
    {
      if ( !this )
        goto LABEL_18;
      if ( LODWORD(this->fields.userId) != supportDeckId )
        goto LABEL_15;
    }
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      return ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)this, tdInfo, 0LL);
LABEL_15:
    --v13;
    ++v14;
    if ( !v13 )
      goto LABEL_16;
  }
}


bool __fastcall OtherUserGameEntity__getTreasureDeviceInfo_40175344(
        OtherUserGameEntity_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  int v8; // w9
  int v9; // w10

  v6 = 80LL;
  if ( !returnSupportServantType )
    v6 = 72LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
LABEL_13:
    sub_1BCAA3C(this, tdLv);
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 < 1 )
  {
LABEL_11:
    *tdLv = 0;
    *tdMaxLv = 0;
    return 0;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v8 == v9 )
        sub_1BCAA44(this, tdLv);
      this = *(OtherUserGameEntity_o **)(v7 + 8LL * v9 + 32);
      if ( !this )
        goto LABEL_13;
      if ( this->fields.userLv == classPos && this->fields.friendCode )
        return ServantLeaderInfo__getTreasureDeviceInfo_41235708((ServantLeaderInfo_o *)this, tdLv, tdMaxLv, 0LL);
      if ( v8 == ++v9 )
        goto LABEL_11;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getTreasureDeviceLevelIcon(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  OtherUserGameEntity_o **i; // x9

  v5 = 80LL;
  if ( !returnSupportServantType )
    v5 = 72LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( (int)*(_QWORD *)(v6 + 24) < 1 )
    return 0;
  v7 = (unsigned int)*(_QWORD *)(v6 + 24);
  for ( i = (OtherUserGameEntity_o **)(v6 + 32); ; ++i )
  {
    this = *i;
    if ( supportDeckId < 1 )
    {
      if ( !this )
        goto LABEL_16;
    }
    else
    {
      if ( !this )
        goto LABEL_16;
      if ( LODWORD(this->fields.userId) != supportDeckId )
        goto LABEL_13;
    }
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      break;
LABEL_13:
    if ( !--v7 )
      return 0;
  }
  return ServantLeaderInfo__getTreasureDeviceLevelIcon((ServantLeaderInfo_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__getUpdatedAt(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v4; // x8

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_5;
  if ( !userSvtLeaderHash->max_length )
    sub_1BCAA44(this, classPos);
  v4 = userSvtLeaderHash->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  return v4->fields.updatedAt;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__getUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w9
  int v7; // w10
  __int64 v8; // x11

  v4 = 80LL;
  if ( !returnSupportServantType )
    v4 = 72LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
LABEL_13:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v6 == v7 )
      sub_1BCAA44(this, classPos);
    v8 = *(_QWORD *)(v5 + 8LL * v7 + 32);
    if ( !v8 )
      goto LABEL_13;
    if ( *(_DWORD *)(v8 + 32) == classPos )
      return *(_QWORD *)(v8 + 40);
    if ( v6 == ++v7 )
      return 0LL;
  }
}


void __fastcall OtherUserGameEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1660F & 1) == 0 )
  {
    sub_1BCA7E0(&OtherUserGameEntity___c_TypeInfo, v1, v2);
    byte_4B1660F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(OtherUserGameEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  OtherUserGameEntity___c_TypeInfo->static_fields->__9 = (struct OtherUserGameEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)OtherUserGameEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall OtherUserGameEntity___c___ctor(OtherUserGameEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


EquipTargetInfo_o *__fastcall OtherUserGameEntity___c___GetEquipInfo_b__45_1(
        OtherUserGameEntity___c_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCAA3C(this, 0LL);
  return UserRecommendSupportInfo__GetEquipTarget(info, 0LL);
}


int64_t __fastcall OtherUserGameEntity___c___GetUserSvtId_b__20_1(
        OtherUserGameEntity___c_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCAA3C(this, 0LL);
  return UserRecommendSupportInfo__GetUserServantId(info, 0LL);
}


void __fastcall OtherUserGameEntity___c__DisplayClass20_0___ctor(
        OtherUserGameEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall OtherUserGameEntity___c__DisplayClass20_0___GetUserSvtId_b__0(
        OtherUserGameEntity___c__DisplayClass20_0_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCAA3C(this, 0LL);
  return info->fields.idx == this->fields.index;
}


void __fastcall OtherUserGameEntity___c__DisplayClass45_0___ctor(
        OtherUserGameEntity___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall OtherUserGameEntity___c__DisplayClass45_0___GetEquipInfo_b__0(
        OtherUserGameEntity___c__DisplayClass45_0_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCAA3C(this, 0LL);
  return info->fields.idx == this->fields.index;
}