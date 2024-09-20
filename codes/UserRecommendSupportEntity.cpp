void __fastcall UserRecommendSupportEntity___ctor(UserRecommendSupportEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  ServantLeaderInfo_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5BF04 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&ServantLeaderInfo_TypeInfo);
    byte_4A5BF04 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.idx = 0LL;
  this->fields.questPhase = 0;
  v3 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.adviceMessageIds = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.adviceMessageIds, (int32_t)v3, v4, v5);
  v6 = (ServantLeaderInfo_o *)sub_1B887FC(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor(v6, 0LL);
  this->fields.userSvtLeaderInfo = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtLeaderInfo, (int32_t)v6, v7, v8);
  this->fields._UserServantEntity_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField, 0, v9, v10);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField, 0, v11, v12);
}


void __fastcall UserRecommendSupportEntity___ctor_40160328(
        UserRecommendSupportEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  ServantLeaderInfo_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5BF05 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&ServantLeaderInfo_TypeInfo);
    byte_4A5BF05 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  this->fields.questId = 0;
  this->fields.questPhase = 0;
  this->fields.idx = index + 1;
  v5 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.adviceMessageIds = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.adviceMessageIds, (int32_t)v5, v6, v7);
  v8 = (ServantLeaderInfo_o *)sub_1B887FC(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor(v8, 0LL);
  this->fields.userSvtLeaderInfo = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtLeaderInfo, (int32_t)v8, v9, v10);
  this->fields._UserServantEntity_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField, 0, v11, v12);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField, 0, v13, v14);
}


void __fastcall UserRecommendSupportEntity___ctor_40160568(
        UserRecommendSupportEntity_o *this,
        UserRecommendSupportEntity_o *src,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x1
  struct UserRecommendSupportInfo_o *UserRecommendSupportInfo_k__BackingField; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Int32_array *adviceMessageIds; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x1
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5BF06 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BF06 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  if ( !src )
    sub_1B8880C(v5, v6);
  UserServantEntity_k__BackingField = src->fields._UserServantEntity_k__BackingField;
  this->fields._UserServantEntity_k__BackingField = UserServantEntity_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)UserServantEntity_k__BackingField,
    v7,
    v8);
  UserRecommendSupportInfo_k__BackingField = src->fields._UserRecommendSupportInfo_k__BackingField;
  this->fields._UserRecommendSupportInfo_k__BackingField = UserRecommendSupportInfo_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    (int32_t)UserRecommendSupportInfo_k__BackingField,
    v11,
    v12);
  *(_QWORD *)&this->fields.idx = *(_QWORD *)&src->fields.idx;
  this->fields.questPhase = src->fields.questPhase;
  adviceMessageIds = src->fields.adviceMessageIds;
  this->fields.adviceMessageIds = adviceMessageIds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.adviceMessageIds, (int32_t)adviceMessageIds, v14, v15);
  userSvtLeaderInfo = src->fields.userSvtLeaderInfo;
  this->fields.userSvtLeaderInfo = userSvtLeaderInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtLeaderInfo,
    (int32_t)userSvtLeaderInfo,
    v17,
    v18);
}


System_String_o *__fastcall UserRecommendSupportEntity__CreatePK(int64_t userId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4A5BF03 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4A5BF03 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           idx,
           (const MethodInfo_2E7DC34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  const MethodInfo_361B780 *v2; // x3
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v6; // q0
  __int128 v7; // q1
  int v8; // w9
  __int128 v9; // q0
  __int128 v10; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-F0h] BYREF
  __int128 v14; // [xsp+40h] [xbp-D0h]
  __int128 v15; // [xsp+50h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+60h] [xbp-B0h]
  __int128 v17[3]; // [xsp+80h] [xbp-90h] BYREF
  _BYTE v18[39]; // [xsp+B0h] [xbp-60h] BYREF
  __int64 v19; // [xsp+D8h] [xbp-38h]
  System_Nullable_T__o v20; // 0:x0.16

  v19 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4A5BF07 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1B885B0(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BF07 = 1;
  }
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo && (equipTarget1 = userSvtLeaderInfo->fields.equipTarget1) != 0LL )
  {
    v6 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
    v7 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
    *(_QWORD *)&v20.fields.hasValue = v17;
    v20.fields.value = (Il2CppObject *)v18;
    memset(v17, 0, 40);
    v14 = v6;
    v15 = v7;
    *(_OWORD *)v18 = v6;
    *(_OWORD *)&v18[16] = v7;
    System_Nullable_ObscuredLong____ctor(
      v20,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v2);
    v8 = LOBYTE(v17[0]);
    *(_QWORD *)&v18[31] = *(_QWORD *)&v17[2];
    *(_OWORD *)v18 = *(__int128 *)((char *)v17 + 1);
    v17[0] = *(__int128 *)((char *)v17 + 1);
    v17[1] = *(__int128 *)((char *)&v17[1] + 1);
    *(_OWORD *)&v18[16] = v17[1];
    *(_QWORD *)((char *)&v17[1] + 15) = *(_QWORD *)&v18[31];
    if ( v8 )
    {
      v9 = *(__int128 *)((char *)v17 + 7);
      v10 = *(__int128 *)((char *)&v17[1] + 7);
      goto LABEL_11;
    }
  }
  else
  {
    memset(v18, 0, sizeof(v18));
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v13, 0LL, 0LL);
  v9 = *(_OWORD *)&v13.fields.currentCryptoKey;
  v10 = *(_OWORD *)&v13.fields.fakeValue;
LABEL_11:
  *(_OWORD *)&v16.fields.currentCryptoKey = v9;
  *(_OWORD *)&v16.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v16;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL);
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
  struct System_Int32_array **p_adviceMessageIds; // x0

  this->fields.adviceMessageIds = ids;
  p_adviceMessageIds = &this->fields.adviceMessageIds;
  *((_DWORD *)p_adviceMessageIds - 4) = index + 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_adviceMessageIds, (int32_t)ids, (int32_t)ids, (int32_t)method);
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


void __fastcall UserRecommendSupportEntity__SetUserServantEntity(
        UserRecommendSupportEntity_o *this,
        int32_t index,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int64_t v9; // x0
  __int64 v10; // x1
  __int128 v11; // q1
  __int128 v12; // q0
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x21
  struct ServantLeaderInfo_o *v14; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+50h] [xbp-50h]

  if ( (byte_4A5BF08 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BF08 = 1;
  }
  this->fields._UserServantEntity_k__BackingField = entity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)entity,
    (int32_t)method);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField, 0, v7, v8);
  if ( !entity )
    goto LABEL_9;
  v11 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v16, 0LL);
  this->fields.idx = index + 1;
  v12 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v12;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v15, 0LL);
  if ( !userSvtLeaderInfo || (userSvtLeaderInfo->fields.userSvtId = v9, (v14 = this->fields.userSvtLeaderInfo) == 0LL) )
LABEL_9:
    sub_1B8880C(v9, v10);
  v14->fields.svtId = entity->fields.svtId;
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

  this->fields._UserRecommendSupportInfo_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall UserRecommendSupportEntity__set_UserServantEntity(
        UserRecommendSupportEntity_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}