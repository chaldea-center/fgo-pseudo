void UserServantLeaderEntity___ctor(UserServantLeaderEntity_o *this, const MethodInfo *method)
{
  const MethodInfo_3F0E590 *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5971915 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971915 = 1;
  }
  v3 = (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__;
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor((DataEntityBase_PKType__o *)this, v3);
  this->fields.userServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v4, v5, v6, v7, v8, v9);
  this->fields.servantLeaderInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo, 0, v10, v11, v12, v13, v14, v15);
  this->fields.supportDeckId = 1;
  this->fields.equipTarget1 = 0;
  *(int64_t *)((char *)&this->fields.userSvtId + 4) = 0;
  *(_QWORD *)&this->fields.classId = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipTarget1, 0, v16, v17, v18, v19, v20, v21);
}


void UserServantLeaderEntity___ctor_50230212(
        UserServantLeaderEntity_o *this,
        int32_t classPos,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  const MethodInfo_3F0E590 *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
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

  if ( (byte_5971916 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971916 = 1;
  }
  v7 = (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__;
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor((DataEntityBase_PKType__o *)this, v7);
  this->fields.userServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v8, v9, v10, v11, v12, v13);
  this->fields.servantLeaderInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo, 0, v14, v15, v16, v17, v18, v19);
  this->fields.supportDeckId = supportDeckId;
  this->fields.equipTarget1 = 0;
  this->fields.svtId = 0;
  this->fields.userSvtId = 0;
  this->fields.classId = classPos;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipTarget1, 0, v20, v21, v22, v23, v24, v25);
}


void UserServantLeaderEntity___ctor_50230372(
        UserServantLeaderEntity_o *this,
        UserServantLeaderEntity_o *src,
        const MethodInfo *method)
{
  const MethodInfo_3F0E590 *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UserServantEntity_o *userServantEntity; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int64_t userSvtId; // x9
  EquipTargetInfo_o *equipTarget1; // x1
  int32_t supportDeckId; // w8
  const MethodInfo *v25; // x2

  if ( (byte_5971917 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971917 = 1;
  }
  v5 = (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__;
  this->fields.supportDeckId = 1;
  DataEntityBase_object____ctor((DataEntityBase_PKType__o *)this, v5);
  if ( !src )
    sub_2213CDC(v6, v7);
  userServantEntity = src->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)userServantEntity, v8, v9, v10, v11, v12, v13);
  servantLeaderInfo = src->fields.servantLeaderInfo;
  this->fields.servantLeaderInfo = servantLeaderInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo,
    (int32_t)servantLeaderInfo,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  userSvtId = src->fields.userSvtId;
  equipTarget1 = src->fields.equipTarget1;
  this->fields.svtId = src->fields.svtId;
  supportDeckId = src->fields.supportDeckId;
  this->fields.userSvtId = userSvtId;
  LODWORD(userSvtId) = src->fields.classId;
  this->fields.supportDeckId = supportDeckId;
  this->fields.classId = userSvtId;
  UserServantLeaderEntity__setEquipTargetInfo(this, equipTarget1, v25);
}


System_String_o *UserServantLeaderEntity__CreatePK(
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  if ( (byte_5971914 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_5971914 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           classId,
           supportDeckId,
           (const MethodInfo_3854A80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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


bool UserServantLeaderEntity__TryGetNarrowFigureLimitCountStage(
        UserServantLeaderEntity_o *this,
        int32_t *svtId,
        int32_t *limitCountStage,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  UserServantEntity_o *v9; // x21
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  ServantLeaderInfo_o *v11; // x8

  if ( (byte_597191C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_597191C = 1;
  }
  *svtId = this->fields.svtId;
  *limitCountStage = 0;
  if ( *svtId && this->fields.userSvtId )
  {
    if ( this->fields.userServantEntity )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtId);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        Master_object = DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          this->fields.userSvtId,
                          (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Master_object )
        {
          v9 = (UserServantEntity_o *)Master_object;
          *svtId = UserServantEntity__GetServantId((UserServantEntity_o *)Master_object, -1, 0);
          LODWORD(servantLeaderInfo) = UserServantEntity__GetCardImageLimitCountStageSealAfter(v9, -1, 0, 0, 0);
LABEL_15:
          *limitCountStage = (int)servantLeaderInfo;
          LOBYTE(servantLeaderInfo) = 1;
          return (char)servantLeaderInfo;
        }
      }
      goto LABEL_17;
    }
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      Master_object = (Il2CppObject *)ServantLeaderInfo__GetServantId(servantLeaderInfo, -1, 0);
      v11 = this->fields.servantLeaderInfo;
      *svtId = (int)Master_object;
      if ( v11 )
      {
        LODWORD(servantLeaderInfo) = ServantLeaderInfo__GetCardImageLimitCountStageSealAfter(v11, 0);
        goto LABEL_15;
      }
LABEL_17:
      sub_2213CDC(Master_object, v8);
    }
  }
  else
  {
    LOBYTE(servantLeaderInfo) = 0;
  }
  return (char)servantLeaderInfo;
}


int64_t UserServantLeaderEntity__getEquipUserSvtId(UserServantLeaderEntity_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_5971918 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5971918 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v4 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v6, 0);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5971919 & 1) == 0 )
  {
    sub_2213A60(&EquipTargetInfo_TypeInfo);
    byte_5971919 = 1;
  }
  v5 = (EquipTargetInfo_o *)sub_2213CCC(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_48715868(v5, equipTargetInfo, 0);
  this->fields.equipTarget1 = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipTarget1, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void UserServantLeaderEntity__setUserServantEntity(
        UserServantLeaderEntity_o *this,
        UserServantEntity_o *entity,
        int32_t classPos,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  __int64 v19; // x1
  __int128 v20; // q1
  int v21; // w8
  int64_t v22; // x0
  __int128 v23; // q1
  __int64 v24; // x1
  int64_t v25; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v26; // x0
  __int64 v27; // x20
  __int64 v28; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_597191A & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_597191A = 1;
  }
  this->fields.userServantEntity = entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)entity,
    *(System_String_o **)&classPos,
    *(System_String_o **)&supportDeckId,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.servantLeaderInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo, 0, v12, v13, v14, v15, v16, v17);
  if ( !entity )
    sub_2213CDC(v18, v19);
  v20 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  v21 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v20;
  if ( !v21 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
  v30 = v31;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v30, 0);
  this->fields.supportDeckId = supportDeckId;
  this->fields.classId = classPos;
  this->fields.userId = v22;
  v23 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v29, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.userSvtId = v25;
  v28 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( !*(&v26->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v26, v24);
  *(_QWORD *)&v32.fields.currentCryptoKey = v28;
  *(_QWORD *)&v32.fields.fakeValue = v27;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v32, 0);
}


void UserServantLeaderEntity__setUserServantEntity_50231064(
        UserServantLeaderEntity_o *this,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t supportDeckId; // w10
  int32_t classId; // w11
  int64_t userSvtId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v21; // x0
  __int64 v22; // x21
  __int64 v23; // x22
  struct EquipTargetInfo_o *equipTarget1; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_597191B & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597191B = 1;
  }
  this->fields.userServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  this->fields.servantLeaderInfo = info;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo,
    (int32_t)info,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !info )
    sub_2213CDC(v16, v17);
  supportDeckId = info->fields.supportDeckId;
  classId = info->fields.classId;
  this->fields.userId = info->fields.userId;
  userSvtId = info->fields.userSvtId;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.supportDeckId = supportDeckId;
  this->fields.classId = classId;
  this->fields.userSvtId = userSvtId;
  v22 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
  if ( !*(&v21->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v21, v17);
  *(_QWORD *)&v31.fields.currentCryptoKey = v22;
  *(_QWORD *)&v31.fields.fakeValue = v23;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v31, 0);
  ServantLeaderInfo__SetEquipImagePartsGroupIdxs(info, 0);
  equipTarget1 = info->fields.equipTarget1;
  this->fields.equipTarget1 = equipTarget1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipTarget1,
    (int32_t)equipTarget1,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}