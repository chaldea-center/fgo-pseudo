void UserServantLeaderEntity___ctor(UserServantLeaderEntity_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct EquipTargetInfo_o **p_equipTarget1; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C38A11 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C38A11 = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
  this->fields.userServantEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v3, v4);
  this->fields.servantLeaderInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v5, v6);
  this->fields.supportDeckId = 1;
  this->fields.equipTarget1 = 0;
  p_equipTarget1 = &this->fields.equipTarget1;
  *(struct EquipTargetInfo_o **)((char *)p_equipTarget1 + 28) = 0;
  *(struct EquipTargetInfo_o **)((char *)p_equipTarget1 + 20) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)p_equipTarget1, 0, v8, v9);
}


void UserServantLeaderEntity___ctor_43111508(
        UserServantLeaderEntity_o *this,
        int32_t classPos,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct EquipTargetInfo_o **p_equipTarget1; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C38A12 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C38A12 = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
  this->fields.userServantEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v7, v8);
  this->fields.servantLeaderInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v9, v10);
  this->fields.supportDeckId = supportDeckId;
  this->fields.equipTarget1 = 0;
  p_equipTarget1 = &this->fields.equipTarget1;
  *((_DWORD *)p_equipTarget1 + 8) = 0;
  p_equipTarget1[3] = 0;
  *((_DWORD *)p_equipTarget1 + 5) = classPos;
  sub_1C32BC4((CGThumbnailListItem_o *)p_equipTarget1, 0, v12, v13);
}


void UserServantLeaderEntity___ctor_43111668(
        UserServantLeaderEntity_o *this,
        UserServantLeaderEntity_o *src,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UserServantEntity_o *userServantEntity; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4C38A13 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C38A13 = 1;
  }
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
  if ( !src )
    sub_1C32E7C(v5);
  userServantEntity = src->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)userServantEntity, v6, v7);
  servantLeaderInfo = src->fields.servantLeaderInfo;
  this->fields.servantLeaderInfo = servantLeaderInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, (int32_t)servantLeaderInfo, v10, v11);
  this->fields.svtId = src->fields.svtId;
  this->fields.userSvtId = src->fields.userSvtId;
  *(_QWORD *)&this->fields.supportDeckId = *(_QWORD *)&src->fields.supportDeckId;
  UserServantLeaderEntity__setEquipTargetInfo(this, src->fields.equipTarget1, v12);
}


System_String_o *UserServantLeaderEntity__CreatePK(
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  if ( (byte_4C38A10 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4C38A10 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           classId,
           supportDeckId,
           (const MethodInfo_30DBBC4 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_4C38A14 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C38A14 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v6, 0);
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
  const MethodInfo *v7; // x3

  if ( (byte_4C38A15 & 1) == 0 )
  {
    sub_1C32C20(&EquipTargetInfo_TypeInfo);
    byte_4C38A15 = 1;
  }
  v5 = (EquipTargetInfo_o *)sub_1C32E6C(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_41611092(v5, equipTargetInfo, 0);
  this->fields.equipTarget1 = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipTarget1, (int32_t)v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void UserServantLeaderEntity__setUserServantEntity(
        UserServantLeaderEntity_o *this,
        UserServantEntity_o *entity,
        int32_t classPos,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int128 v12; // q1
  __int128 v13; // q1
  __int64 v14; // x20
  __int64 v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C38A16 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C38A16 = 1;
  }
  this->fields.userServantEntity = entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)entity, classPos, *(const MethodInfo **)&supportDeckId);
  this->fields.servantLeaderInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v9, v10);
  if ( !entity )
    sub_1C32E7C(v11);
  v12 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v17, 0);
  this->fields.supportDeckId = supportDeckId;
  this->fields.classId = classPos;
  v13 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v13;
  this->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v16, 0);
  v15 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v19, 0);
}


void UserServantLeaderEntity__setUserServantEntity_43112352(
        UserServantLeaderEntity_o *this,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  struct EquipTargetInfo_o *equipTarget1; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C38A17 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C38A17 = 1;
  }
  this->fields.userServantEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, (int32_t)method, v3);
  this->fields.servantLeaderInfo = info;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, (int32_t)info, v6, v7);
  if ( !info )
    sub_1C32E7C(v8);
  this->fields.userId = info->fields.userId;
  this->fields.supportDeckId = info->fields.supportDeckId;
  this->fields.classId = info->fields.classId;
  this->fields.userSvtId = info->fields.userSvtId;
  v10 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v14, 0);
  ServantLeaderInfo__SetEquipImagePartsGroupIdxs(info, 0);
  equipTarget1 = info->fields.equipTarget1;
  this->fields.equipTarget1 = equipTarget1;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipTarget1, (int32_t)equipTarget1, v12, v13);
}