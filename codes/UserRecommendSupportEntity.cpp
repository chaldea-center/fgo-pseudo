void __fastcall UserRecommendSupportEntity___ctor(UserRecommendSupportEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Int32_array *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  ServantLeaderInfo_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B37F7B & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_string___ctor__, method);
    sub_1BD3458(&int___TypeInfo, v3);
    sub_1BD3458(&ServantLeaderInfo_TypeInfo, v4);
    byte_4B37F7B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31D1D68 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.idx = 0LL;
  this->fields.questPhase = 0;
  v5 = (struct System_Int32_array *)sub_1BD3500(int___TypeInfo, 0LL);
  this->fields.adviceMessageIds = v5;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.adviceMessageIds, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (ServantLeaderInfo_o *)sub_1BD36A4(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor(v12, 0LL);
  this->fields.userSvtLeaderInfo = v12;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.userSvtLeaderInfo, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  this->fields._UserServantEntity_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    0LL,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    0LL,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserRecommendSupportEntity___ctor_40987452(
        UserRecommendSupportEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Int32_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  ServantLeaderInfo_o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B37F7C & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_string___ctor__, *(_QWORD *)&index);
    sub_1BD3458(&int___TypeInfo, v5);
    sub_1BD3458(&ServantLeaderInfo_TypeInfo, v6);
    byte_4B37F7C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31D1D68 *)Method_DataEntityBase_string___ctor__);
  this->fields.questId = 0;
  this->fields.questPhase = 0;
  this->fields.idx = index + 1;
  v7 = (struct System_Int32_array *)sub_1BD3500(int___TypeInfo, 0LL);
  this->fields.adviceMessageIds = v7;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.adviceMessageIds, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (ServantLeaderInfo_o *)sub_1BD36A4(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor(v14, 0LL);
  this->fields.userSvtLeaderInfo = v14;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.userSvtLeaderInfo, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  this->fields._UserServantEntity_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void __fastcall UserRecommendSupportEntity___ctor_40987692(
        UserRecommendSupportEntity_o *this,
        UserRecommendSupportEntity_o *src,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x1
  struct UserRecommendSupportInfo_o *UserRecommendSupportInfo_k__BackingField; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Int32_array *adviceMessageIds; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B37F7D & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_string___ctor__, src);
    byte_4B37F7D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31D1D68 *)Method_DataEntityBase_string___ctor__);
  if ( !src )
    sub_1BD36B4(v5, v6);
  UserServantEntity_k__BackingField = src->fields._UserServantEntity_k__BackingField;
  this->fields._UserServantEntity_k__BackingField = UserServantEntity_k__BackingField;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)UserServantEntity_k__BackingField,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  UserRecommendSupportInfo_k__BackingField = src->fields._UserRecommendSupportInfo_k__BackingField;
  this->fields._UserRecommendSupportInfo_k__BackingField = UserRecommendSupportInfo_k__BackingField;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    (int64_t)UserRecommendSupportInfo_k__BackingField,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)&this->fields.idx = *(_QWORD *)&src->fields.idx;
  this->fields.questPhase = src->fields.questPhase;
  adviceMessageIds = src->fields.adviceMessageIds;
  this->fields.adviceMessageIds = adviceMessageIds;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.adviceMessageIds,
    (int64_t)adviceMessageIds,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  userSvtLeaderInfo = src->fields.userSvtLeaderInfo;
  this->fields.userSvtLeaderInfo = userSvtLeaderInfo;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.userSvtLeaderInfo,
    (int64_t)userSvtLeaderInfo,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserRecommendSupportEntity__CreatePK(int64_t userId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4B37F7A & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&idx);
    byte_4B37F7A = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           idx,
           (const MethodInfo_2F2F9B0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserRecommendSupportEntity__CreatePrimaryKey(
        UserRecommendSupportEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserRecommendSupportEntity__CreatePK(this->fields.userId, this->fields.idx, v2);
}


int64_t __fastcall UserRecommendSupportEntity__GetEquipUserSvtId(
        UserRecommendSupportEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo_36DF094 *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v9; // q0
  __int128 v10; // q1
  int v11; // w9
  __int128 v12; // q0
  __int128 v13; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-F0h] BYREF
  __int128 v17; // [xsp+40h] [xbp-D0h]
  __int128 v18; // [xsp+50h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+60h] [xbp-B0h]
  __int128 v20[3]; // [xsp+80h] [xbp-90h] BYREF
  _BYTE v21[39]; // [xsp+B0h] [xbp-60h] BYREF
  __int64 v22; // [xsp+D8h] [xbp-38h]
  System_Nullable_T__o v23; // 0:x0.16

  v22 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4B37F7E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__, method);
    sub_1BD3458(&Method_System_Nullable_ObscuredLong___ctor__, v4);
    sub_1BD3458(&Method_System_Nullable_ObscuredLong__get_HasValue__, v5);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4B37F7E = 1;
  }
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo && (equipTarget1 = userSvtLeaderInfo->fields.equipTarget1) != 0LL )
  {
    v9 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
    v10 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
    *(_QWORD *)&v23.fields.hasValue = v20;
    v23.fields.value = (Il2CppObject *)v21;
    memset(v20, 0, 40);
    v17 = v9;
    v18 = v10;
    *(_OWORD *)v21 = v9;
    *(_OWORD *)&v21[16] = v10;
    System_Nullable_ObscuredLong____ctor(
      v23,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v2);
    v11 = LOBYTE(v20[0]);
    *(_QWORD *)&v21[31] = *(_QWORD *)&v20[2];
    *(_OWORD *)v21 = *(__int128 *)((char *)v20 + 1);
    v20[0] = *(__int128 *)((char *)v20 + 1);
    v20[1] = *(__int128 *)((char *)&v20[1] + 1);
    *(_OWORD *)&v21[16] = v20[1];
    *(_QWORD *)((char *)&v20[1] + 15) = *(_QWORD *)&v21[31];
    if ( v11 )
    {
      v12 = *(__int128 *)((char *)v20 + 7);
      v13 = *(__int128 *)((char *)&v20[1] + 7);
      goto LABEL_11;
    }
  }
  else
  {
    memset(v21, 0, sizeof(v21));
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v16, 0LL, 0LL);
  v12 = *(_OWORD *)&v16.fields.currentCryptoKey;
  v13 = *(_OWORD *)&v16.fields.fakeValue;
LABEL_11:
  *(_OWORD *)&v19.fields.currentCryptoKey = v12;
  *(_OWORD *)&v19.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v19;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v15, 0LL);
}


UserServantEntity_o *__fastcall UserRecommendSupportEntity__GetUserServantEntity(
        UserRecommendSupportEntity_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


int64_t __fastcall UserRecommendSupportEntity__GetUserSvtId(
        UserRecommendSupportEntity_o *this,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.userSvtId;
  else
    return 0LL;
}


void __fastcall UserRecommendSupportEntity__SetAdviceMessage(
        UserRecommendSupportEntity_o *this,
        int32_t index,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Int32_array **p_adviceMessageIds; // x0

  this->fields.adviceMessageIds = ids;
  p_adviceMessageIds = &this->fields.adviceMessageIds;
  *((_DWORD *)p_adviceMessageIds - 4) = index + 1;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)p_adviceMessageIds,
    (int64_t)ids,
    (int64_t)ids,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserRecommendSupportEntity__SetQuest(
        UserRecommendSupportEntity_o *this,
        int32_t index,
        int32_t id,
        int32_t phase,
        const MethodInfo *method)
{
  this->fields.idx = index + 1;
  this->fields.questId = id;
  this->fields.questPhase = phase;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserRecommendSupportEntity__SetUserServantEntity(
        UserRecommendSupportEntity_o *this,
        int32_t index,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x0
  __int64 v18; // x1
  __int128 v19; // q1
  __int128 v20; // q0
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x21
  struct ServantLeaderInfo_o *v22; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+50h] [xbp-50h]

  if ( (byte_4B37F7F & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&index);
    byte_4B37F7F = 1;
  }
  this->fields._UserServantEntity_k__BackingField = entity;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)entity,
    (int64_t)entity,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !entity )
    goto LABEL_9;
  v19 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v24 = v25;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v24, 0LL);
  this->fields.idx = index + 1;
  v20 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v23.fields.fakeValue = v20;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v23, 0LL);
  if ( !userSvtLeaderInfo || (userSvtLeaderInfo->fields.userSvtId = v17, (v22 = this->fields.userSvtLeaderInfo) == 0LL) )
LABEL_9:
    sub_1BD36B4(v17, v18);
  v22->fields.svtId = entity->fields.svtId;
}


UserRecommendSupportInfo_o *__fastcall UserRecommendSupportEntity__get_UserRecommendSupportInfo(
        UserRecommendSupportEntity_o *this,
        const MethodInfo *method)
{
  return this->fields._UserRecommendSupportInfo_k__BackingField;
}


UserServantEntity_o *__fastcall UserRecommendSupportEntity__get_UserServantEntity(
        UserRecommendSupportEntity_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


void __fastcall UserRecommendSupportEntity__set_UserRecommendSupportInfo(
        UserRecommendSupportEntity_o *this,
        UserRecommendSupportInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserRecommendSupportInfo_k__BackingField = value;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserRecommendSupportEntity__set_UserServantEntity(
        UserRecommendSupportEntity_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}