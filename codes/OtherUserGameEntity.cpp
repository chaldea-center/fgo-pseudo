void __fastcall OtherUserGameEntity___ctor(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB615A & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_long___ctor__, method);
    byte_4AB615A = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3163BD8 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall OtherUserGameEntity__CreatePrimaryKey(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


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
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x8
  OtherUserGameEntity_o **v15; // x9
  BalanceConfig_c *v16; // x0
  SkillInfo_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  v10 = this;
  if ( (byte_4AB6159 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, skillInfoList);
    this = (OtherUserGameEntity_o *)sub_1BAB41C(&SkillInfo___TypeInfo, v11);
    byte_4AB6159 = 1;
  }
  v12 = 80LL;
  if ( !returnSupportServantType )
    v12 = 72LL;
  v13 = *(__int64 *)((char *)&v10->klass + v12);
  if ( !v13 )
LABEL_19:
    sub_1BAB678(this, skillInfoList);
  if ( (int)*(_QWORD *)(v13 + 24) >= 1 )
  {
    v14 = (unsigned int)*(_QWORD *)(v13 + 24);
    v15 = (OtherUserGameEntity_o **)(v13 + 32);
    do
    {
      this = *v15;
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
        ServantLeaderInfo__GetAppendPassiveSkillInfo_40902076((ServantLeaderInfo_o *)this, skillInfoList, 0, 0LL);
        return;
      }
LABEL_14:
      --v14;
      ++v15;
    }
    while ( v14 );
  }
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (SkillInfo_array *)sub_1BAB4C4(
                             SkillInfo___TypeInfo,
                             (unsigned int)v16->static_fields->SvtAppendPassiveSkillListMax);
  *skillInfoList = v17;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *__fastcall OtherUserGameEntity__GetEquipInfo(
        OtherUserGameEntity_o *this,
        int32_t index,
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
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *userRecommendSupportHash; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  OtherUserGameEntity___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__object__o *_9__45_1; // x20
  Il2CppObject *v22; // x21
  struct OtherUserGameEntity___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4AB6158 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_FirstOrDefault_EquipTargetInfo___, *(_QWORD *)&index);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__EquipTargetInfo___, v5);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___, v6);
    sub_1BAB41C(&System_Func_UserRecommendSupportInfo__EquipTargetInfo__TypeInfo, v7);
    sub_1BAB41C(&System_Func_UserRecommendSupportInfo__bool__TypeInfo, v8);
    sub_1BAB41C(&Method_OtherUserGameEntity___c__GetEquipInfo_b__45_1__, v9);
    sub_1BAB41C(&Method_OtherUserGameEntity___c__DisplayClass45_0__GetEquipInfo_b__0__, v10);
    sub_1BAB41C(&OtherUserGameEntity___c__DisplayClass45_0_TypeInfo, v11);
    sub_1BAB41C(&OtherUserGameEntity___c_TypeInfo, v12);
    byte_4AB6158 = 1;
  }
  v13 = sub_1BAB668(OtherUserGameEntity___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BAB678(v14, v15);
  *(_DWORD *)(v13 + 16) = index;
  userRecommendSupportHash = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userRecommendSupportHash;
  v17 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_UserRecommendSupportInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_OtherUserGameEntity___c__DisplayClass45_0__GetEquipInfo_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__Where_object_(
          userRecommendSupportHash,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___);
  v19 = OtherUserGameEntity___c_TypeInfo;
  v20 = v18;
  if ( !OtherUserGameEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserGameEntity___c_TypeInfo);
    v19 = OtherUserGameEntity___c_TypeInfo;
  }
  _9__45_1 = (System_Func_object__object__o *)v19->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = OtherUserGameEntity___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__45_1 = (System_Func_object__object__o *)sub_1BAB668(System_Func_UserRecommendSupportInfo__EquipTargetInfo__TypeInfo);
    System_Func_object__object____ctor(_9__45_1, v22, Method_OtherUserGameEntity___c__GetEquipInfo_b__45_1__, 0LL);
    static_fields = OtherUserGameEntity___c_TypeInfo->static_fields;
    static_fields->__9__45_1 = (struct System_Func_UserRecommendSupportInfo__EquipTargetInfo__o *)_9__45_1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__45_1, (int32_t)_9__45_1, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__45_1,
                                                               (const MethodInfo_2EF4318 *)Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__EquipTargetInfo___);
  return (EquipTargetInfo_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                v26,
                                (const MethodInfo_2EE74A0 *)Method_System_Linq_Enumerable_FirstOrDefault_EquipTargetInfo___);
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
  if ( (byte_4AB6154 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BAB41C(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      *(_QWORD *)&index);
    byte_4AB6154 = 1;
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
      sub_1BAB680(this, *(_QWORD *)&index);
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
    sub_1BAB678(this, *(_QWORD *)&index);
  message = this->fields.message;
  pushUserSvtId = this->fields.pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = message;
  *(_QWORD *)&v12.fields.fakeValue = pushUserSvtId;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v12, 0LL);
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
  if ( (byte_4AB6152 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BAB41C(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                      *(_QWORD *)&index);
    byte_4AB6152 = 1;
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
      sub_1BAB680(this, *(_QWORD *)&index);
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
    sub_1BAB678(this, *(_QWORD *)&index);
  v10 = *(_OWORD *)&this->fields.friendCode;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userName;
  *(_OWORD *)&v12.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v11, 0LL);
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
  if ( (byte_4AB6155 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BAB41C(&int___TypeInfo, *(_QWORD *)&index);
    byte_4AB6155 = 1;
  }
  userRecommendSupportHash = v4->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
LABEL_13:
    sub_1BAB678(this, *(_QWORD *)&index);
  max_length = userRecommendSupportHash->max_length;
  if ( max_length < 1 )
    return (System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 0LL);
  v7 = 0;
  while ( 1 )
  {
    if ( max_length == v7 )
      sub_1BAB680(this, *(_QWORD *)&index);
    v8 = userRecommendSupportHash->m_Items[v7];
    if ( !v8 )
      goto LABEL_13;
    if ( v8->fields.idx == index )
      return v8->fields.adviceMessageIds;
    if ( max_length == ++v7 )
      return (System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 0LL);
  }
}


int32_t __fastcall OtherUserGameEntity__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4AB614D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4AB614D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BAB678(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3163D90 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  return Entity && QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *userRecommendSupportHash; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  OtherUserGameEntity___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_T__TResult__o *_9__20_1; // x20
  Il2CppObject *v22; // x21
  struct OtherUserGameEntity___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4AB614F & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_FirstOrDefault_long___, *(_QWORD *)&index);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__long___, v5);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___, v6);
    sub_1BAB41C(&System_Func_UserRecommendSupportInfo__bool__TypeInfo, v7);
    sub_1BAB41C(&System_Func_UserRecommendSupportInfo__long__TypeInfo, v8);
    sub_1BAB41C(&Method_OtherUserGameEntity___c__GetUserSvtId_b__20_1__, v9);
    sub_1BAB41C(&Method_OtherUserGameEntity___c__DisplayClass20_0__GetUserSvtId_b__0__, v10);
    sub_1BAB41C(&OtherUserGameEntity___c__DisplayClass20_0_TypeInfo, v11);
    sub_1BAB41C(&OtherUserGameEntity___c_TypeInfo, v12);
    byte_4AB614F = 1;
  }
  v13 = sub_1BAB668(OtherUserGameEntity___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BAB678(v14, v15);
  *(_DWORD *)(v13 + 16) = index;
  userRecommendSupportHash = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userRecommendSupportHash;
  v17 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_UserRecommendSupportInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_OtherUserGameEntity___c__DisplayClass20_0__GetUserSvtId_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__Where_object_(
          userRecommendSupportHash,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___);
  v19 = OtherUserGameEntity___c_TypeInfo;
  v20 = v18;
  if ( !OtherUserGameEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserGameEntity___c_TypeInfo);
    v19 = OtherUserGameEntity___c_TypeInfo;
  }
  _9__20_1 = (System_Func_T__TResult__o *)v19->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = OtherUserGameEntity___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__20_1 = (System_Func_T__TResult__o *)sub_1BAB668(System_Func_UserRecommendSupportInfo__long__TypeInfo);
    System_Func_object__long____ctor(_9__20_1, v22, Method_OtherUserGameEntity___c__GetUserSvtId_b__20_1__, 0LL);
    static_fields = OtherUserGameEntity___c_TypeInfo->static_fields;
    static_fields->__9__20_1 = (struct System_Func_UserRecommendSupportInfo__long__o *)_9__20_1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_1, (int32_t)_9__20_1, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__20_1,
                                                               (const MethodInfo_2EF4024 *)Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__long___);
  return System_Linq_Enumerable__FirstOrDefault_long_(
           v26,
           (const MethodInfo_2EE7058 *)Method_System_Linq_Enumerable_FirstOrDefault_long___);
}


bool __fastcall OtherUserGameEntity__IsSameSupportDeck(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  int32_t v4; // w20
  _BOOL4 v5; // w24
  ServantLeaderInfo_o *ServantLeaderInfo; // x22
  const MethodInfo *v7; // x5
  int64_t v8; // x0
  __int64 v9; // x1
  int64_t v10; // x21
  _BOOL4 v11; // w8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v13; // q0
  _BOOL4 v14; // w24
  __int64 v15; // x8
  __int128 v16; // q0
  _BOOL4 v17; // w8
  struct EquipTargetInfo_o *v18; // x8
  __int128 v19; // q0
  __int64 v20; // x8
  __int128 v21; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+80h] [xbp-60h]

  if ( (byte_4AB614E & 1) == 0 )
  {
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4AB614E = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = 1;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(this, v4, 1, 0, 0, v2);
    v8 = (int64_t)OtherUserGameEntity__getServantLeaderInfo(this, v4, 1, 1, 0, v7);
    v10 = v8;
    if ( ServantLeaderInfo )
      v5 = ServantLeaderInfo->fields.userSvtId == 0;
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 40) == 0LL;
      if ( !v5 )
        goto LABEL_13;
    }
    else
    {
      v11 = 1;
      if ( !v5 )
        goto LABEL_13;
    }
    if ( !v11 )
    {
LABEL_13:
      if ( v11 || v5 )
        return 0;
      if ( !ServantLeaderInfo || !v8 )
        goto LABEL_41;
      if ( ServantLeaderInfo->fields.userSvtId != *(_QWORD *)(v8 + 40) )
        return 0;
      goto LABEL_17;
    }
    if ( !ServantLeaderInfo )
      break;
LABEL_17:
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      break;
    v13 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v26, 0LL);
    v14 = v8 == 0;
    if ( v10 )
      goto LABEL_23;
LABEL_28:
    v17 = 1;
    if ( !v14 )
      goto LABEL_30;
LABEL_29:
    if ( !v17 )
      goto LABEL_30;
LABEL_38:
    if ( ++v4 == 8 )
      return 1;
  }
  v14 = 1;
  if ( !v8 )
    goto LABEL_28;
LABEL_23:
  v15 = *(_QWORD *)(v10 + 144);
  if ( !v15 )
    goto LABEL_28;
  v16 = *(_OWORD *)(v15 + 40);
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v15 + 24);
  *(_OWORD *)&v27.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v25 = v27;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v25, 0LL);
  v17 = v8 == 0;
  if ( v14 )
    goto LABEL_29;
LABEL_30:
  if ( v17 || v14 )
    return 0;
  if ( !ServantLeaderInfo )
    goto LABEL_41;
  v18 = ServantLeaderInfo->fields.equipTarget1;
  if ( !v18 )
    goto LABEL_41;
  v19 = *(_OWORD *)&v18->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v18->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v24 = v27;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v24, 0LL);
  if ( !v10 || (v20 = *(_QWORD *)(v10 + 144)) == 0 )
LABEL_41:
    sub_1BAB678(v8, v9);
  v21 = *(_OWORD *)(v20 + 40);
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(v20 + 24);
  *(_OWORD *)&v23.fields.fakeValue = v21;
  if ( v8 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v23, 0LL) )
    goto LABEL_38;
  return 0;
}


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
    sub_1BAB678(this, classPos);
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
    sub_1BAB678(this, classPos);
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
    sub_1BAB678(this, classPos);
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
    sub_1BAB678(this, classPos);
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
    sub_1BAB678(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v6 == v7 )
      sub_1BAB680(this, *(_QWORD *)&classPos);
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
    sub_1BAB678(this, classPos);
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
    sub_1BAB678(this, classPos);
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
  if ( (byte_4AB6153 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BAB41C(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      *(_QWORD *)&classPos);
    byte_4AB6153 = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_20:
    sub_1BAB678(this, *(_QWORD *)&classPos);
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v17;
  *(_QWORD *)&v18.fields.fakeValue = v16;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v18, 0LL);
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
  if ( (byte_4AB6151 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BAB41C(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                      *(_QWORD *)&classPos);
    byte_4AB6151 = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_21:
    sub_1BAB678(this, *(_QWORD *)&classPos);
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
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v16 = v17;
          return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v16, 0LL);
        }
      }
LABEL_15:
      if ( !--v11 )
        return 0LL;
    }
  }
  return (int64_t)this;
}


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
    sub_1BAB678(this, classPos);
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
    sub_1BAB678(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v6 == v7 )
      sub_1BAB680(this, *(_QWORD *)&classPos);
    v8 = *(_QWORD *)(v5 + 8LL * v7 + 32);
    if ( !v8 )
      goto LABEL_13;
    if ( *(_DWORD *)(v8 + 32) == classPos && *(_QWORD *)(v8 + 40) )
      return *(_DWORD *)(v8 + 64);
    if ( v6 == ++v7 )
      return 0;
  }
}


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
    sub_1BAB678(this, classPos);
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
    sub_1BAB678(this, classPos);
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
        sub_1BAB680(this, *(_QWORD *)&classPos);
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
    sub_1BAB678(this, classPos);
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
    sub_1BAB678(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v6 == v7 )
      sub_1BAB680(this, *(_QWORD *)&classPos);
    this = *(OtherUserGameEntity_o **)(v5 + 8LL * v7 + 32);
    if ( !this )
      goto LABEL_13;
    if ( this->fields.userLv == classPos && this->fields.friendCode )
      return ServantLeaderInfo__getSkillIdList((ServantLeaderInfo_o *)this, 0LL);
    if ( v6 == ++v7 )
      return 0LL;
  }
}


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
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x8
  OtherUserGameEntity_o **v15; // x9
  BalanceConfig_c *v16; // x0
  SkillInfo_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  v10 = this;
  if ( (byte_4AB6156 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, skillInfoList);
    this = (OtherUserGameEntity_o *)sub_1BAB41C(&SkillInfo___TypeInfo, v11);
    byte_4AB6156 = 1;
  }
  v12 = 80LL;
  if ( !returnSupportServantType )
    v12 = 72LL;
  v13 = *(__int64 *)((char *)&v10->klass + v12);
  if ( !v13 )
LABEL_20:
    sub_1BAB678(this, skillInfoList);
  if ( (int)*(_QWORD *)(v13 + 24) >= 1 )
  {
    v14 = (unsigned int)*(_QWORD *)(v13 + 24);
    v15 = (OtherUserGameEntity_o **)(v13 + 32);
    do
    {
      this = *v15;
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
      --v14;
      ++v15;
    }
    while ( v14 );
  }
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (SkillInfo_array *)sub_1BAB4C4(SkillInfo___TypeInfo, (unsigned int)v16->static_fields->SvtSkillListMax);
  *skillInfoList = v17;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v17, v18, v19);
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
    sub_1BAB678(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v6 == v7 )
      sub_1BAB680(this, *(_QWORD *)&classPos);
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
  if ( (byte_4AB6150 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BAB41C(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      *(_QWORD *)&classPos);
    byte_4AB6150 = 1;
  }
  v9 = 80LL;
  if ( !returnSupportServantType )
    v9 = 72LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
LABEL_20:
    sub_1BAB678(this, *(_QWORD *)&classPos);
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v16;
  *(_QWORD *)&v17.fields.fakeValue = v15;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v17, 0LL);
}


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
  int32_t v16; // w2
  int32_t v17; // w3

  v10 = this;
  if ( (byte_4AB6157 & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BAB41C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4AB6157 = 1;
  }
  v11 = 80LL;
  if ( !returnSupportServantType )
    v11 = 72LL;
  v12 = *(__int64 *)((char *)&v10->klass + v11);
  if ( !v12 )
LABEL_18:
    sub_1BAB678(this, tdInfo);
  if ( (int)*(_QWORD *)(v12 + 24) < 1 )
  {
LABEL_16:
    v15 = (TreasureDvcInfo_o *)sub_1BAB668(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v15, 0LL);
    *tdInfo = v15;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v15, v16, v17);
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


bool __fastcall OtherUserGameEntity__getTreasureDeviceInfo_39838176(
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
    sub_1BAB678(this, tdLv);
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
        sub_1BAB680(this, tdLv);
      this = *(OtherUserGameEntity_o **)(v7 + 8LL * v9 + 32);
      if ( !this )
        goto LABEL_13;
      if ( this->fields.userLv == classPos && this->fields.friendCode )
        return ServantLeaderInfo__getTreasureDeviceInfo_40892716((ServantLeaderInfo_o *)this, tdLv, tdMaxLv, 0LL);
      if ( v8 == ++v9 )
        goto LABEL_11;
    }
  }
}


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
    sub_1BAB678(this, classPos);
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
    sub_1BAB680(this, *(_QWORD *)&classPos);
  v4 = userSvtLeaderHash->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_1BAB678(this, classPos);
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
    sub_1BAB678(this, classPos);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v6 == v7 )
      sub_1BAB680(this, *(_QWORD *)&classPos);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB615B & 1) == 0 )
  {
    sub_1BAB41C(&OtherUserGameEntity___c_TypeInfo, v1);
    byte_4AB615B = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(OtherUserGameEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  OtherUserGameEntity___c_TypeInfo->static_fields->__9 = (struct OtherUserGameEntity___c_o *)v2;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)OtherUserGameEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BAB678(this, 0LL);
  return UserRecommendSupportInfo__GetEquipTarget(info, 0LL);
}


int64_t __fastcall OtherUserGameEntity___c___GetUserSvtId_b__20_1(
        OtherUserGameEntity___c_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BAB678(this, 0LL);
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
    sub_1BAB678(this, 0LL);
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
    sub_1BAB678(this, 0LL);
  return info->fields.idx == this->fields.index;
}