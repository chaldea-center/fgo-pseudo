void __fastcall UserServantLeaderEntity___ctor(UserServantLeaderEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct EquipTargetInfo_o **p_equipTarget1; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B17099 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B17099 = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  this->fields.userServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.servantLeaderInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.supportDeckId = 1;
  this->fields.equipTarget1 = 0LL;
  p_equipTarget1 = &this->fields.equipTarget1;
  *(struct EquipTargetInfo_o **)((char *)p_equipTarget1 + 28) = 0LL;
  *(struct EquipTargetInfo_o **)((char *)p_equipTarget1 + 20) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)p_equipTarget1, 0LL, v17, v18, v19, v20, v21, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantLeaderEntity___ctor_40973144(
        UserServantLeaderEntity_o *this,
        int32_t classPos,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct EquipTargetInfo_o **p_equipTarget1; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B1709A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, *(_QWORD *)&classPos, *(_QWORD *)&supportDeckId);
    byte_4B1709A = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  this->fields.userServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v7, v8, v9, v10, v11, v12);
  this->fields.servantLeaderInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.supportDeckId = supportDeckId;
  this->fields.equipTarget1 = 0LL;
  p_equipTarget1 = &this->fields.equipTarget1;
  *((_DWORD *)p_equipTarget1 + 8) = 0;
  p_equipTarget1[3] = 0LL;
  *((_DWORD *)p_equipTarget1 + 5) = classPos;
  sub_1BCA784((PartyOrganizationUtility_o *)p_equipTarget1, 0LL, v20, v21, v22, v23, v24, v25);
}


void __fastcall UserServantLeaderEntity___ctor_40973304(
        UserServantLeaderEntity_o *this,
        UserServantLeaderEntity_o *src,
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
  struct UserServantEntity_o *userServantEntity; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4B1709B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, src, method);
    byte_4B1709B = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  if ( !src )
    sub_1BCAA3C(v5, v6);
  userServantEntity = src->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)userServantEntity, v7, v8, v9, v10, v11, v12);
  servantLeaderInfo = src->fields.servantLeaderInfo;
  this->fields.servantLeaderInfo = servantLeaderInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo,
    (int64_t)servantLeaderInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.svtId = src->fields.svtId;
  this->fields.userSvtId = src->fields.userSvtId;
  *(_QWORD *)&this->fields.supportDeckId = *(_QWORD *)&src->fields.supportDeckId;
  UserServantLeaderEntity__setEquipTargetInfo(this, src->fields.equipTarget1, v21);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserServantLeaderEntity__CreatePK(
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  if ( (byte_4B17098 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_long__int__int___,
      *(_QWORD *)&classId,
      *(_QWORD *)&supportDeckId);
    byte_4B17098 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           classId,
           supportDeckId,
           (const MethodInfo_2F11500 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserServantLeaderEntity__CreatePrimaryKey(
        UserServantLeaderEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserServantLeaderEntity__CreatePK(this->fields.userId, this->fields.classId, this->fields.supportDeckId, v2);
}


UserServantEntity_o *__fastcall UserServantLeaderEntity__GetUserServantEntity(
        UserServantLeaderEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t __fastcall UserServantLeaderEntity__getEquipUserSvtId(
        UserServantLeaderEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v5; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4B1709C & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B1709C = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0LL;
  v5 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
}


ServantLeaderInfo_o *__fastcall UserServantLeaderEntity__getServantLeaderInfo(
        UserServantLeaderEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.servantLeaderInfo;
}


void __fastcall UserServantLeaderEntity__setEquipTargetInfo(
        UserServantLeaderEntity_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EquipTargetInfo_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1709D & 1) == 0 )
  {
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, equipTargetInfo, method);
    byte_4B1709D = 1;
  }
  v6 = (EquipTargetInfo_o *)sub_1BCAA2C(EquipTargetInfo_TypeInfo, equipTargetInfo, method, v3);
  EquipTargetInfo___ctor_39602212(v6, equipTargetInfo, 0LL);
  this->fields.equipTarget1 = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipTarget1, (int64_t)v6, v7, v8, v9, v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantLeaderEntity__setUserServantEntity(
        UserServantLeaderEntity_o *this,
        UserServantEntity_o *entity,
        int32_t classPos,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  __int128 v22; // q1
  __int128 v23; // q1
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B1709E & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, entity, *(_QWORD *)&classPos);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
    byte_4B1709E = 1;
  }
  this->fields.userServantEntity = entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)entity,
    *(int64_t *)&classPos,
    supportDeckId,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.servantLeaderInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v14, v15, v16, v17, v18, v19);
  if ( !entity )
    sub_1BCAA3C(v20, v21);
  v22 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v22;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
  v28 = v29;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v28, 0LL);
  this->fields.supportDeckId = supportDeckId;
  this->fields.classId = classPos;
  v23 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v23;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v27, 0LL);
  v26 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v30.fields.currentCryptoKey = v26;
  *(_QWORD *)&v30.fields.fakeValue = v25;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v30, 0LL);
}


void __fastcall UserServantLeaderEntity__setUserServantEntity_40973988(
        UserServantLeaderEntity_o *this,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x22
  struct EquipTargetInfo_o *equipTarget1; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B1709F & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, info, method);
    byte_4B1709F = 1;
  }
  this->fields.userServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.servantLeaderInfo = info;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo,
    (int64_t)info,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !info )
    sub_1BCAA3C(v16, v17);
  this->fields.userId = info->fields.userId;
  this->fields.supportDeckId = info->fields.supportDeckId;
  this->fields.classId = info->fields.classId;
  this->fields.userSvtId = info->fields.userSvtId;
  v19 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
  equipTarget1 = info->fields.equipTarget1;
  this->fields.equipTarget1 = equipTarget1;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipTarget1,
    (int64_t)equipTarget1,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}