void UserRecommendSupportEntity___ctor(UserRecommendSupportEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  ServantLeaderInfo_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4CEF5A0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&ServantLeaderInfo_TypeInfo);
    byte_4CEF5A0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.idx = 0;
  this->fields.questPhase = 0;
  v3 = (struct System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
  this->fields.adviceMessageIds = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.adviceMessageIds, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (ServantLeaderInfo_o *)sub_1C7BD34(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor(v10, 0);
  this->fields.userSvtLeaderInfo = v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtLeaderInfo,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._UserServantEntity_k__BackingField = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    0,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void UserRecommendSupportEntity___ctor_43662928(
        UserRecommendSupportEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  ServantLeaderInfo_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CEF5A1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&ServantLeaderInfo_TypeInfo);
    byte_4CEF5A1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  this->fields.questId = 0;
  this->fields.questPhase = 0;
  this->fields.idx = index + 1;
  v5 = (struct System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
  this->fields.adviceMessageIds = v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.adviceMessageIds, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (ServantLeaderInfo_o *)sub_1C7BD34(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor(v12, 0);
  this->fields.userSvtLeaderInfo = v12;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtLeaderInfo,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._UserServantEntity_k__BackingField = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    0,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    0,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


System_String_o *UserRecommendSupportEntity__CreatePK(int64_t userId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CEF59F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4CEF59F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           idx,
           (const MethodInfo_316E684 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserRecommendSupportEntity__CreatePrimaryKey(
        UserRecommendSupportEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserRecommendSupportEntity__CreatePK(this->fields.userId, this->fields.idx, v2);
}


int64_t UserRecommendSupportEntity__GetEquipUserSvtId(UserRecommendSupportEntity_o *this, const MethodInfo *method)
{
  const MethodInfo_39665F0 *v2; // x3
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
  _OWORD v17[3]; // [xsp+80h] [xbp-90h] BYREF
  _BYTE v18[39]; // [xsp+B0h] [xbp-60h] BYREF
  __int64 v19; // [xsp+D8h] [xbp-38h]
  System_Nullable_T__o v20; // 0:x0.16

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4CEF5A2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1C7BAE8(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1C7BAE8(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEF5A2 = 1;
  }
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo && (equipTarget1 = userSvtLeaderInfo->fields.equipTarget1) != 0 )
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
    *(_OWORD *)v18 = *(_OWORD *)((char *)v17 + 1);
    v17[0] = *(_OWORD *)((char *)v17 + 1);
    v17[1] = *(_OWORD *)((char *)&v17[1] + 1);
    *(_OWORD *)&v18[16] = v17[1];
    *(_QWORD *)((char *)&v17[1] + 15) = *(_QWORD *)&v18[31];
    if ( v8 )
    {
      v9 = *(_OWORD *)((char *)v17 + 7);
      v10 = *(_OWORD *)((char *)&v17[1] + 7);
      goto LABEL_11;
    }
  }
  else
  {
    memset(v18, 0, sizeof(v18));
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v13, 0, 0);
  v9 = *(_OWORD *)&v13.fields.currentCryptoKey;
  v10 = *(_OWORD *)&v13.fields.fakeValue;
LABEL_11:
  *(_OWORD *)&v16.fields.currentCryptoKey = v9;
  *(_OWORD *)&v16.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v16;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v12, 0);
}


int64_t UserRecommendSupportEntity__GetUserSvtId(UserRecommendSupportEntity_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.userSvtId;
  else
    return 0;
}


UserRecommendSupportInfo_o *UserRecommendSupportEntity__get_UserRecommendSupportInfo(
        UserRecommendSupportEntity_o *this,
        const MethodInfo *method)
{
  return this->fields._UserRecommendSupportInfo_k__BackingField;
}


UserServantEntity_o *UserRecommendSupportEntity__get_UserServantEntity(
        UserRecommendSupportEntity_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


void UserRecommendSupportEntity__set_UserRecommendSupportInfo(
        UserRecommendSupportEntity_o *this,
        UserRecommendSupportInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UserRecommendSupportInfo_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserRecommendSupportEntity__set_UserServantEntity(
        UserRecommendSupportEntity_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}