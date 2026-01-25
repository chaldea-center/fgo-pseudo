void UserServantLeaderEntity___ctor(UserServantLeaderEntity_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct EquipTargetInfo_o **p_equipTarget1; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CEF6A5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF6A5 = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  this->fields.userServantEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v3, v4, v5, v6, v7, v8);
  this->fields.servantLeaderInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v9, v10, v11, v12, v13, v14);
  this->fields.supportDeckId = 1;
  this->fields.equipTarget1 = 0;
  p_equipTarget1 = &this->fields.equipTarget1;
  *(struct EquipTargetInfo_o **)((char *)p_equipTarget1 + 28) = 0;
  *(struct EquipTargetInfo_o **)((char *)p_equipTarget1 + 20) = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_equipTarget1, 0, v16, v17, v18, v19, v20, v21);
}


void UserServantLeaderEntity___ctor_43752820(
        UserServantLeaderEntity_o *this,
        int32_t classPos,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct EquipTargetInfo_o **p_equipTarget1; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CEF6A6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF6A6 = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  this->fields.userServantEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v7, v8, v9, v10, v11, v12);
  this->fields.servantLeaderInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v13, v14, v15, v16, v17, v18);
  this->fields.supportDeckId = supportDeckId;
  this->fields.equipTarget1 = 0;
  p_equipTarget1 = &this->fields.equipTarget1;
  *((_DWORD *)p_equipTarget1 + 8) = 0;
  p_equipTarget1[3] = 0;
  *((_DWORD *)p_equipTarget1 + 5) = classPos;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_equipTarget1, 0, v20, v21, v22, v23, v24, v25);
}


void UserServantLeaderEntity___ctor_43752980(
        UserServantLeaderEntity_o *this,
        UserServantLeaderEntity_o *src,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4CEF6A7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF6A7 = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  if ( !src )
    sub_1C7BD40(v5, v6);
  userServantEntity = src->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)userServantEntity, v7, v8, v9, v10, v11, v12);
  servantLeaderInfo = src->fields.servantLeaderInfo;
  this->fields.servantLeaderInfo = servantLeaderInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo,
    (int32_t)servantLeaderInfo,
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


System_String_o *UserServantLeaderEntity__CreatePK(
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  if ( (byte_4CEF6A4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4CEF6A4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           classId,
           supportDeckId,
           (const MethodInfo_316EBC8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserServantLeaderEntity__CreatePrimaryKey(UserServantLeaderEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserServantLeaderEntity__CreatePK(this->fields.userId, this->fields.classId, this->fields.supportDeckId, v2);
}


UserServantEntity_o *UserServantLeaderEntity__GetUserServantEntity(
        UserServantLeaderEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t UserServantLeaderEntity__getEquipUserSvtId(UserServantLeaderEntity_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4CEF6A8 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEF6A8 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v4 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v6, 0);
}


ServantLeaderInfo_o *UserServantLeaderEntity__getServantLeaderInfo(
        UserServantLeaderEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.servantLeaderInfo;
}


void UserServantLeaderEntity__setEquipTargetInfo(
        UserServantLeaderEntity_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  EquipTargetInfo_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CEF6A9 & 1) == 0 )
  {
    sub_1C7BAE8(&EquipTargetInfo_TypeInfo);
    byte_4CEF6A9 = 1;
  }
  v5 = (EquipTargetInfo_o *)sub_1C7BD34(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_42285616(v5, equipTargetInfo, 0);
  this->fields.equipTarget1 = v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipTarget1, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


void UserServantLeaderEntity__setUserServantEntity(
        UserServantLeaderEntity_o *this,
        UserServantEntity_o *entity,
        int32_t classPos,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  __int128 v20; // q1
  __int128 v21; // q1
  __int64 v22; // x20
  __int64 v23; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CEF6AA & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEF6AA = 1;
  }
  this->fields.userServantEntity = entity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)entity,
    classPos,
    supportDeckId,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.servantLeaderInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v12, v13, v14, v15, v16, v17);
  if ( !entity )
    sub_1C7BD40(v18, v19);
  v20 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v25 = v26;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v25, 0);
  this->fields.supportDeckId = supportDeckId;
  this->fields.classId = classPos;
  v21 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v21;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v24, 0);
  v23 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v23;
  *(_QWORD *)&v27.fields.fakeValue = v22;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
}


void UserServantLeaderEntity__setUserServantEntity_43753664(
        UserServantLeaderEntity_o *this,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x22
  struct EquipTargetInfo_o *equipTarget1; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CEF6AB & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF6AB = 1;
  }
  this->fields.userServantEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.servantLeaderInfo = info;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo,
    (int32_t)info,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !info )
    sub_1C7BD40(v16, v17);
  this->fields.userId = info->fields.userId;
  this->fields.supportDeckId = info->fields.supportDeckId;
  this->fields.classId = info->fields.classId;
  this->fields.userSvtId = info->fields.userSvtId;
  v19 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
  ServantLeaderInfo__SetEquipImagePartsGroupIdxs(info, 0);
  equipTarget1 = info->fields.equipTarget1;
  this->fields.equipTarget1 = equipTarget1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipTarget1,
    (int32_t)equipTarget1,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}