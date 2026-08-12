void UserRecommendSupportEntity___ctor(UserRecommendSupportEntity_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct System_Int32_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  ServantLeaderInfo_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_5971818 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&ServantLeaderInfo_TypeInfo);
    byte_5971818 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
  v3 = int___TypeInfo;
  *(_QWORD *)&this->fields.idx = 0;
  this->fields.questPhase = 0;
  v4 = (struct System_Int32_array *)sub_2213B20(v3, 0);
  this->fields.adviceMessageIds = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.adviceMessageIds, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (ServantLeaderInfo_o *)sub_2213CCC(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor(v11, 0);
  this->fields.userSvtLeaderInfo = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtLeaderInfo,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._UserServantEntity_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    0,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    0,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void UserRecommendSupportEntity___ctor_50141712(
        UserRecommendSupportEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppClass *v5; // x0
  struct System_Int32_array *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  ServantLeaderInfo_o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5971819 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&ServantLeaderInfo_TypeInfo);
    byte_5971819 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
  v5 = int___TypeInfo;
  this->fields.questId = 0;
  this->fields.questPhase = 0;
  this->fields.idx = index + 1;
  v6 = (struct System_Int32_array *)sub_2213B20(v5, 0);
  this->fields.adviceMessageIds = v6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.adviceMessageIds,
    (int32_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (ServantLeaderInfo_o *)sub_2213CCC(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor(v13, 0);
  this->fields.userSvtLeaderInfo = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtLeaderInfo,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields._UserServantEntity_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    0,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields._UserRecommendSupportInfo_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    0,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


System_String_o *UserRecommendSupportEntity__CreatePK(int64_t userId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5971817 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_5971817 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           idx,
           (const MethodInfo_3854538 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  const MethodInfo_45E5BF4 *v2; // x3
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v6; // q2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-140h] BYREF
  __int128 v9; // [xsp+20h] [xbp-120h]
  __int128 v10; // [xsp+30h] [xbp-110h]
  _OWORD v11[3]; // [xsp+40h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+70h] [xbp-D0h] BYREF
  _OWORD v13[2]; // [xsp+90h] [xbp-B0h] BYREF
  __int128 v14; // [xsp+B0h] [xbp-90h]
  _OWORD v15[2]; // [xsp+C0h] [xbp-80h] BYREF
  _BYTE v16[39]; // [xsp+E0h] [xbp-60h] BYREF
  __int64 v17; // [xsp+108h] [xbp-38h]
  System_Nullable_T__o v18; // 0:x0.16

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_597181A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_597181A = 1;
  }
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  v14 = 0u;
  memset(v15, 0, 23);
  memset(v16, 0, sizeof(v16));
  memset(&v12, 0, sizeof(v12));
  if ( userSvtLeaderInfo && (equipTarget1 = userSvtLeaderInfo->fields.equipTarget1) != 0 )
  {
    v6 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
    *(_QWORD *)&v18.fields.hasValue = v11;
    v9 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
    v10 = v6;
    v18.fields.value = (Il2CppObject *)v13;
    v13[0] = v9;
    v13[1] = v6;
    memset(v11, 0, 40);
    System_Nullable_ObscuredLong____ctor(
      v18,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v2);
    *(_QWORD *)((char *)v15 + 15) = *(_QWORD *)&v11[2];
    v14 = *(_OWORD *)((char *)v11 + 1);
    v15[0] = *(_OWORD *)((char *)&v11[1] + 1);
    *(_OWORD *)v16 = *(_OWORD *)((char *)v11 + 1);
    *(_OWORD *)&v16[16] = *(_OWORD *)((char *)&v11[1] + 1);
    *(_QWORD *)&v16[31] = *(_QWORD *)((char *)v15 + 15);
    if ( LOBYTE(v11[0]) )
    {
      v12 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)&v16[7];
      goto LABEL_11;
    }
  }
  else
  {
    v14 = 0u;
    memset(v15, 0, 23);
    memset(v16, 0, sizeof(v16));
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v12, 0, 0);
LABEL_11:
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v8 = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v8, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserRecommendSupportInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserRecommendSupportInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}