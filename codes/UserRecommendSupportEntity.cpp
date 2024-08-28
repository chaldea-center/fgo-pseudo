void __fastcall UserRecommendSupportEntity___ctor(UserRecommendSupportEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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

  if ( (byte_4A20862 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_string___ctor__, method);
    sub_1B715CC(&int___TypeInfo, v3);
    sub_1B715CC(&ServantLeaderInfo_TypeInfo, v4);
    byte_4A20862 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30F85D8 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.idx = 0LL;
  this->fields.questPhase = 0;
  v5 = (struct System_Int32_array *)sub_1B71674(int___TypeInfo, 0LL);
  this->fields.adviceMessageIds = v5;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.adviceMessageIds, (int32_t)v5, v6, v7);
  v8 = (ServantLeaderInfo_o *)sub_1B71818(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor(v8, 0LL);
  this->fields.userSvtLeaderInfo = v8;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.userSvtLeaderInfo, (int32_t)v8, v9, v10);
  this->fields._UserServantEntity_k__BackingField = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField, 0, v11, v12);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField, 0, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserRecommendSupportEntity___ctor_39948144(
        UserRecommendSupportEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Int32_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  ServantLeaderInfo_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A20863 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_string___ctor__, *(_QWORD *)&index);
    sub_1B715CC(&int___TypeInfo, v5);
    sub_1B715CC(&ServantLeaderInfo_TypeInfo, v6);
    byte_4A20863 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30F85D8 *)Method_DataEntityBase_string___ctor__);
  this->fields.questId = 0;
  this->fields.questPhase = 0;
  this->fields.idx = index + 1;
  v7 = (struct System_Int32_array *)sub_1B71674(int___TypeInfo, 0LL);
  this->fields.adviceMessageIds = v7;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.adviceMessageIds, (int32_t)v7, v8, v9);
  v10 = (ServantLeaderInfo_o *)sub_1B71818(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor(v10, 0LL);
  this->fields.userSvtLeaderInfo = v10;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.userSvtLeaderInfo, (int32_t)v10, v11, v12);
  this->fields._UserServantEntity_k__BackingField = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField, 0, v13, v14);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField, 0, v15, v16);
}


void __fastcall UserRecommendSupportEntity___ctor_39948384(
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

  if ( (byte_4A20864 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_string___ctor__, src);
    byte_4A20864 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30F85D8 *)Method_DataEntityBase_string___ctor__);
  if ( !src )
    sub_1B71828(v5, v6);
  UserServantEntity_k__BackingField = src->fields._UserServantEntity_k__BackingField;
  this->fields._UserServantEntity_k__BackingField = UserServantEntity_k__BackingField;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)UserServantEntity_k__BackingField,
    v7,
    v8);
  UserRecommendSupportInfo_k__BackingField = src->fields._UserRecommendSupportInfo_k__BackingField;
  this->fields._UserRecommendSupportInfo_k__BackingField = UserRecommendSupportInfo_k__BackingField;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    (int32_t)UserRecommendSupportInfo_k__BackingField,
    v11,
    v12);
  *(_QWORD *)&this->fields.idx = *(_QWORD *)&src->fields.idx;
  this->fields.questPhase = src->fields.questPhase;
  adviceMessageIds = src->fields.adviceMessageIds;
  this->fields.adviceMessageIds = adviceMessageIds;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.adviceMessageIds, (int32_t)adviceMessageIds, v14, v15);
  userSvtLeaderInfo = src->fields.userSvtLeaderInfo;
  this->fields.userSvtLeaderInfo = userSvtLeaderInfo;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtLeaderInfo,
    (int32_t)userSvtLeaderInfo,
    v17,
    v18);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserRecommendSupportEntity__CreatePK(int64_t userId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4A20861 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&idx);
    byte_4A20861 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           idx,
           (const MethodInfo_2E59714 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  const MethodInfo_35EE43C *v2; // x3
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
  if ( (byte_4A20865 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__, method);
    sub_1B715CC(&Method_System_Nullable_ObscuredLong___ctor__, v4);
    sub_1B715CC(&Method_System_Nullable_ObscuredLong__get_HasValue__, v5);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4A20865 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46311792(&v15, 0LL);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_adviceMessageIds, (int32_t)ids, (int32_t)ids, (int32_t)method);
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

  if ( (byte_4A20866 & 1) == 0 )
  {
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&index);
    byte_4A20866 = 1;
  }
  this->fields._UserServantEntity_k__BackingField = entity;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)entity,
    (int32_t)method);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField, 0, v7, v8);
  if ( !entity )
    goto LABEL_9;
  v11 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46311792(&v16, 0LL);
  this->fields.idx = index + 1;
  v12 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v12;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46311792(&v15, 0LL);
  if ( !userSvtLeaderInfo || (userSvtLeaderInfo->fields.userSvtId = v9, (v14 = this->fields.userSvtLeaderInfo) == 0LL) )
LABEL_9:
    sub_1B71828(v9, v10);
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
  sub_1B71570(
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
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}