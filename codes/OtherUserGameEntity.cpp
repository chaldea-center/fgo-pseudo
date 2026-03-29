void OtherUserGameEntity___ctor(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30FA0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_long___ctor__);
    byte_4D30FA0 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3460B84 *)Method_DataEntityBase_long___ctor__);
}


int64_t OtherUserGameEntity__CreatePrimaryKey(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


// local variable allocation has failed, the output may be wrong!
void OtherUserGameEntity__GetAppendSkillInfo(
        OtherUserGameEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 v14; // x1
  __int64 userId; // x8
  ServantLeaderInfo_o **p_classId; // x9
  BalanceConfig_c *v17; // x0
  SkillInfo_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D30F9F & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&SkillInfo___TypeInfo);
    byte_4D30F9F = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1C93D2C(ServantLeaderInfoByReturnType, v14);
  if ( (int)ServantLeaderInfoByReturnType->fields.userId >= 1 )
  {
    userId = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
    p_classId = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId;
    do
    {
      ServantLeaderInfoByReturnType = *p_classId;
      if ( supportDeckId < 1 )
        goto LABEL_9;
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_22;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId == supportDeckId )
      {
LABEL_9:
        if ( returnSupportServantType == 2 )
        {
          if ( !ServantLeaderInfoByReturnType )
            goto LABEL_22;
          if ( ServantLeaderInfoByReturnType->fields.userSvtId
            && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
          {
            goto LABEL_21;
          }
        }
        else
        {
          if ( !ServantLeaderInfoByReturnType )
            goto LABEL_22;
          if ( ServantLeaderInfoByReturnType->fields.classId == classPos
            && ServantLeaderInfoByReturnType->fields.userSvtId )
          {
LABEL_21:
            ServantLeaderInfo__GetAppendPassiveSkillInfo_44278344(ServantLeaderInfoByReturnType, skillInfoList, 0, 0);
            return;
          }
        }
      }
      --userId;
      ++p_classId;
    }
    while ( userId );
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (SkillInfo_array *)sub_1C93B7C(
                             SkillInfo___TypeInfo,
                             (unsigned int)v17->static_fields->SvtAppendPassiveSkillListMax);
  *skillInfoList = v18;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


int32_t OtherUserGameEntity__GetAtkBoostValue(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        this,
                        classPos,
                        0,
                        returnSupportServantType,
                        supportDeckId,
                        followerGrandGraphId,
                        v6);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__get_AtkBoostValue(ServantLeaderInfo, 0);
  return (int)ServantLeaderInfo;
}


int32_t OtherUserGameEntity__GetHpBoostValue(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        this,
                        classPos,
                        0,
                        returnSupportServantType,
                        supportDeckId,
                        followerGrandGraphId,
                        v6);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__get_HpBoostValue(ServantLeaderInfo, 0);
  return (int)ServantLeaderInfo;
}


int32_t OtherUserGameEntity__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4D30F99 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30F99 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  return Entity && QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0);
}


ServantLeaderInfo_array *OtherUserGameEntity__GetServantLeaderInfoByReturnType(
        OtherUserGameEntity_o *this,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array **p_userSvtGrandHash; // x8
  __int64 v5; // x0
  System_ArgumentOutOfRangeException_o *v6; // x19
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x0

  if ( returnSupportServantType == 2 )
  {
    p_userSvtGrandHash = &this->fields.userSvtGrandHash;
  }
  else if ( returnSupportServantType == 1 )
  {
    p_userSvtGrandHash = &this->fields.eventUserSvtLeaderHash;
  }
  else
  {
    if ( returnSupportServantType )
    {
      v5 = sub_1C93AE8(&System_ArgumentOutOfRangeException_TypeInfo);
      v6 = (System_ArgumentOutOfRangeException_o *)sub_1C93D20(v5);
      v7 = (System_String_o *)sub_1C93AE8(&StringLiteral_23381/*"returnSupportServantType"*/);
      v8 = (System_String_o *)sub_1C93AE8(&StringLiteral_25780/*"予期されないReturnSupportServantTypeです。"*/);
      System_ArgumentOutOfRangeException___ctor_65450564(v6, v7, v8, 0);
      v9 = sub_1C93AE8(&Method_OtherUserGameEntity_GetServantLeaderInfoByReturnType__);
      sub_1C93BFC(v6, v9);
    }
    p_userSvtGrandHash = &this->fields.userSvtLeaderHash;
  }
  return *p_userSvtGrandHash;
}


UserRecommendSupportInfo_array *OtherUserGameEntity__GetUserRecommendSupportInfo(
        OtherUserGameEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userRecommendSupportHash;
}


// local variable allocation has failed, the output may be wrong!
int32_t OtherUserGameEntity__getEquipAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v13; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v15; // x10
  struct EquipTargetInfo_o *equipTarget1; // x10
  struct EquipTargetInfo_o *v17; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1C93D2C(ServantLeaderInfoByReturnType, v11);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v13 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length < 1 )
    return (int)ServantLeaderInfoByReturnType;
  max_length = (unsigned int)max_length;
  for ( i = v13->m_Items; ; ++i )
  {
    v15 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v15 )
        goto LABEL_22;
      if ( v15->fields.supportDeckId != supportDeckId )
        goto LABEL_16;
    }
    if ( returnSupportServantType == 2 )
      break;
    if ( !v15 )
      goto LABEL_22;
    if ( v15->fields.classId == classPos )
    {
      if ( v15->fields.userSvtId )
      {
        equipTarget1 = v15->fields.equipTarget1;
        if ( equipTarget1 )
        {
          LODWORD(ServantLeaderInfoByReturnType) = equipTarget1->fields.atk;
          return (int)ServantLeaderInfoByReturnType;
        }
      }
    }
LABEL_16:
    if ( !--max_length )
    {
      LODWORD(ServantLeaderInfoByReturnType) = 0;
      return (int)ServantLeaderInfoByReturnType;
    }
  }
  if ( !v15 )
    goto LABEL_22;
  if ( !v15->fields.userSvtId || v15->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_16;
  v17 = v15->fields.equipTarget1;
  if ( !v17 )
    goto LABEL_22;
  LODWORD(ServantLeaderInfoByReturnType) = v17->fields.atk;
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t OtherUserGameEntity__getEquipHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v13; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v15; // x10
  struct EquipTargetInfo_o *equipTarget1; // x10
  struct EquipTargetInfo_o *v17; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1C93D2C(ServantLeaderInfoByReturnType, v11);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v13 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length < 1 )
    return (int)ServantLeaderInfoByReturnType;
  max_length = (unsigned int)max_length;
  for ( i = v13->m_Items; ; ++i )
  {
    v15 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v15 )
        goto LABEL_22;
      if ( v15->fields.supportDeckId != supportDeckId )
        goto LABEL_16;
    }
    if ( returnSupportServantType == 2 )
      break;
    if ( !v15 )
      goto LABEL_22;
    if ( v15->fields.classId == classPos )
    {
      if ( v15->fields.userSvtId )
      {
        equipTarget1 = v15->fields.equipTarget1;
        if ( equipTarget1 )
        {
          LODWORD(ServantLeaderInfoByReturnType) = equipTarget1->fields.hp;
          return (int)ServantLeaderInfoByReturnType;
        }
      }
    }
LABEL_16:
    if ( !--max_length )
    {
      LODWORD(ServantLeaderInfoByReturnType) = 0;
      return (int)ServantLeaderInfoByReturnType;
    }
  }
  if ( !v15 )
    goto LABEL_22;
  if ( !v15->fields.userSvtId || v15->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_16;
  v17 = v15->fields.equipTarget1;
  if ( !v17 )
    goto LABEL_22;
  LODWORD(ServantLeaderInfoByReturnType) = v17->fields.hp;
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *OtherUserGameEntity__getEquipInfo(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t index,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v13; // x1
  il2cpp_array_size_t max_length; // x8
  ServantLeaderInfo_array *v15; // x24
  unsigned __int64 v16; // x26
  ServantLeaderInfo_o **m_Items; // x27
  ServantLeaderInfo_o *v18; // x25

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_24:
    sub_1C93D2C(ServantLeaderInfoByReturnType, v13);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v15 = ServantLeaderInfoByReturnType;
  if ( (int)max_length < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= (unsigned int)max_length )
      sub_1C93D34(ServantLeaderInfoByReturnType);
    m_Items = v15->m_Items;
    v18 = v15->m_Items[v16];
    if ( supportDeckId >= 1 )
    {
      if ( !v18 )
        goto LABEL_24;
      if ( v18->fields.supportDeckId != supportDeckId )
        goto LABEL_18;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v18 )
      goto LABEL_24;
    if ( v18->fields.userSvtId && v18->fields.grandGraphId == followerGrandGraphId )
    {
      ServantLeaderInfo__SetSkillChangeInfo(m_Items[v16], 0);
      switch ( index )
      {
        case 2:
          return v18->fields.equipTarget3;
        case 1:
          return v18->fields.equipTarget2;
        case 0:
          return v18->fields.equipTarget1;
      }
    }
LABEL_18:
    LODWORD(max_length) = v15->max_length;
    if ( (__int64)++v16 >= (int)max_length )
      return 0;
  }
  if ( !v18 )
    goto LABEL_24;
  if ( v18->fields.classId != classPos )
    goto LABEL_18;
  ServantLeaderInfo__SetEquipImagePartsGroupIdxs(m_Items[v16], 0);
  return v18->fields.equipTarget1;
}


// local variable allocation has failed, the output may be wrong!
int32_t OtherUserGameEntity__getEquipSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v12; // x1
  __int64 max_length; // x8
  ServantLeaderInfo_o **i; // x9
  ServantLeaderInfo_o *v15; // x10
  struct EquipTargetInfo_o *v16; // x10
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v19; // x19
  __int64 v20; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4D30F9C & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D30F9C = 1;
  }
  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_25;
  if ( (int)ServantLeaderInfoByReturnType->max_length < 1 )
    return 0;
  max_length = (unsigned int)ServantLeaderInfoByReturnType->max_length;
  for ( i = ServantLeaderInfoByReturnType->m_Items; ; ++i )
  {
    v15 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v15 )
        goto LABEL_25;
      if ( v15->fields.supportDeckId != supportDeckId )
        goto LABEL_17;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v15 )
      goto LABEL_25;
    if ( v15->fields.userSvtId && v15->fields.grandGraphId == followerGrandGraphId )
    {
      equipTarget1 = v15->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          goto LABEL_21;
        goto LABEL_22;
      }
LABEL_25:
      sub_1C93D2C(ServantLeaderInfoByReturnType, v12);
    }
LABEL_17:
    if ( !--max_length )
      return 0;
  }
  if ( !v15 )
    goto LABEL_25;
  if ( v15->fields.classId != classPos )
    goto LABEL_17;
  v16 = v15->fields.equipTarget1;
  if ( !v16 )
    goto LABEL_17;
  v20 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
LABEL_21:
    j_il2cpp_runtime_class_init_0(v21);
LABEL_22:
  *(_QWORD *)&v22.fields.currentCryptoKey = v20;
  *(_QWORD *)&v22.fields.fakeValue = v19;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v22, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t OtherUserGameEntity__getEquipUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v12; // x1
  __int64 v13; // x9
  int64_t v14; // x8
  __int64 *i; // x8
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x8
  __int128 v19; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v20; // x0
  __int128 v21; // q1
  _OWORD v22[2]; // [xsp+0h] [xbp-A0h] BYREF
  _OWORD v23[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v24; // [xsp+40h] [xbp-60h]
  __int128 v25; // [xsp+50h] [xbp-50h]

  if ( (byte_4D30F9B & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D30F9B = 1;
  }
  result = (int64_t)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    goto LABEL_28;
  v13 = *(_QWORD *)(result + 24);
  v14 = result;
  result = 0;
  if ( (int)v13 < 1 )
    return result;
  v13 = (unsigned int)v13;
  for ( i = (__int64 *)(v14 + 32); ; ++i )
  {
    v16 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v16 )
        goto LABEL_28;
      if ( *(_DWORD *)(v16 + 16) != supportDeckId )
        goto LABEL_17;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v16 )
      goto LABEL_28;
    if ( *(_QWORD *)(v16 + 40) && *(_DWORD *)(v16 + 268) == followerGrandGraphId )
    {
      v18 = *(_QWORD *)(v16 + 144);
      if ( v18 )
      {
        v19 = *(_OWORD *)(v18 + 40);
        v24 = *(_OWORD *)(v18 + 24);
        v25 = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v23;
        v23[0] = v24;
        v23[1] = v25;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(v20, 0);
      }
LABEL_28:
      sub_1C93D2C(result, v12);
    }
LABEL_17:
    if ( !--v13 )
      return 0;
  }
  if ( !v16 )
    goto LABEL_28;
  if ( *(_DWORD *)(v16 + 32) != classPos )
    goto LABEL_17;
  v17 = *(_QWORD *)(v16 + 144);
  if ( !v17 )
    goto LABEL_17;
  v21 = *(_OWORD *)(v17 + 40);
  v24 = *(_OWORD *)(v17 + 24);
  v25 = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v22;
  v22[0] = v24;
  v22[1] = v25;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(v20, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t OtherUserGameEntity__getLv(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v13; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v15; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1C93D2C(ServantLeaderInfoByReturnType, v11);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v13 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length >= 1 )
  {
    max_length = (unsigned int)max_length;
    for ( i = v13->m_Items; ; ++i )
    {
      v15 = *i;
      if ( supportDeckId < 1 )
        goto LABEL_7;
      if ( !v15 )
        goto LABEL_19;
      if ( v15->fields.supportDeckId == supportDeckId )
      {
LABEL_7:
        if ( returnSupportServantType == 2 )
        {
          if ( !v15 )
            goto LABEL_19;
          if ( v15->fields.userSvtId && v15->fields.grandGraphId == followerGrandGraphId )
            goto LABEL_17;
        }
        else
        {
          if ( !v15 )
            goto LABEL_19;
          if ( v15->fields.classId == classPos && v15->fields.userSvtId )
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v15->fields.lv;
            return (int)ServantLeaderInfoByReturnType;
          }
        }
      }
      if ( !--max_length )
      {
        LODWORD(ServantLeaderInfoByReturnType) = 0;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t OtherUserGameEntity__getMaxLv(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  __int64 userId; // x8
  ServantLeaderInfo_o **i; // x9

  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_18:
    sub_1C93D2C(ServantLeaderInfoByReturnType, v11);
  if ( (int)ServantLeaderInfoByReturnType->fields.userId < 1 )
    return 0;
  userId = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
  for ( i = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId; ; ++i )
  {
    ServantLeaderInfoByReturnType = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_18;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId != supportDeckId )
        goto LABEL_15;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_18;
    if ( ServantLeaderInfoByReturnType->fields.userSvtId
      && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
    {
      return ServantLeaderInfo__getLevelMax(ServantLeaderInfoByReturnType, 0);
    }
LABEL_15:
    if ( !--userId )
      return 0;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_18;
  if ( ServantLeaderInfoByReturnType->fields.classId != classPos || !ServantLeaderInfoByReturnType->fields.userSvtId )
    goto LABEL_15;
  return ServantLeaderInfo__getLevelMax(ServantLeaderInfoByReturnType, 0);
}


// local variable allocation has failed, the output may be wrong!
ServantLeaderInfo_o *OtherUserGameEntity__getServantLeaderInfo(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        bool isExist,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *result; // x0
  __int64 v13; // x1
  int64_t userId; // x9
  ServantLeaderInfo_o *v15; // x8
  ServantLeaderInfo_o **p_classId; // x8

  result = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)isExist);
  if ( !result )
LABEL_18:
    sub_1C93D2C(result, v13);
  userId = result->fields.userId;
  v15 = result;
  result = 0;
  if ( (int)userId >= 1 )
  {
    userId = (unsigned int)userId;
    p_classId = (ServantLeaderInfo_o **)&v15->fields.classId;
    do
    {
      result = *p_classId;
      if ( returnSupportServantType == 2 )
      {
        if ( !result )
          goto LABEL_18;
        if ( result->fields.userSvtId && result->fields.grandGraphId == followerGrandGraphId )
          return result;
      }
      else
      {
        if ( !result )
          goto LABEL_18;
        if ( result->fields.classId == classPos
          && (supportDeckId < 1 || result->fields.supportDeckId == supportDeckId)
          && (isExist || result->fields.userSvtId) )
        {
          return result;
        }
      }
      --userId;
      ++p_classId;
    }
    while ( userId );
    return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void OtherUserGameEntity__getSkillInfo(
        OtherUserGameEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 v14; // x1
  __int64 userId; // x8
  ServantLeaderInfo_o **p_classId; // x9
  BalanceConfig_c *v17; // x0
  SkillInfo_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D30F9D & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&SkillInfo___TypeInfo);
    byte_4D30F9D = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1C93D2C(ServantLeaderInfoByReturnType, v14);
  if ( (int)ServantLeaderInfoByReturnType->fields.userId >= 1 )
  {
    userId = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
    p_classId = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId;
    do
    {
      ServantLeaderInfoByReturnType = *p_classId;
      if ( supportDeckId < 1 )
        goto LABEL_9;
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_22;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId == supportDeckId )
      {
LABEL_9:
        if ( returnSupportServantType == 2 )
        {
          if ( !ServantLeaderInfoByReturnType )
            goto LABEL_22;
          if ( ServantLeaderInfoByReturnType->fields.userSvtId
            && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
          {
            goto LABEL_21;
          }
        }
        else
        {
          if ( !ServantLeaderInfoByReturnType )
            goto LABEL_22;
          if ( ServantLeaderInfoByReturnType->fields.classId == classPos
            && ServantLeaderInfoByReturnType->fields.userSvtId )
          {
LABEL_21:
            ServantLeaderInfo__getSkillInfo(ServantLeaderInfoByReturnType, skillInfoList, 0);
            return;
          }
        }
      }
      --userId;
      ++p_classId;
    }
    while ( userId );
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (SkillInfo_array *)sub_1C93B7C(SkillInfo___TypeInfo, (unsigned int)v17->static_fields->SvtSkillListMax);
  *skillInfoList = v18;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


// local variable allocation has failed, the output may be wrong!
int32_t OtherUserGameEntity__getSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v12; // x1
  __int64 max_length; // x8
  ServantLeaderInfo_o **i; // x9
  ServantLeaderInfo_o *v15; // x10
  __int64 v17; // x19
  __int64 v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4D30F9A & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D30F9A = 1;
  }
  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1C93D2C(ServantLeaderInfoByReturnType, v12);
  if ( (int)ServantLeaderInfoByReturnType->max_length < 1 )
    return 0;
  max_length = (unsigned int)ServantLeaderInfoByReturnType->max_length;
  for ( i = ServantLeaderInfoByReturnType->m_Items; ; ++i )
  {
    v15 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v15 )
        goto LABEL_22;
      if ( v15->fields.supportDeckId != supportDeckId )
        goto LABEL_17;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v15 )
      goto LABEL_22;
    if ( v15->fields.userSvtId && v15->fields.grandGraphId == followerGrandGraphId )
      goto LABEL_19;
LABEL_17:
    if ( !--max_length )
      return 0;
  }
  if ( !v15 )
    goto LABEL_22;
  if ( v15->fields.classId != classPos || !v15->fields.userSvtId )
    goto LABEL_17;
LABEL_19:
  v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v18;
  *(_QWORD *)&v19.fields.fakeValue = v17;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v19, 0);
}


// local variable allocation has failed, the output may be wrong!
bool OtherUserGameEntity__getTreasureDeviceInfo(
        OtherUserGameEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 v14; // x1
  __int64 userId; // x8
  ServantLeaderInfo_o **p_classId; // x9
  TreasureDvcInfo_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D30F9E & 1) == 0 )
  {
    sub_1C93AD4(&TreasureDvcInfo_TypeInfo);
    byte_4D30F9E = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_20:
    sub_1C93D2C(ServantLeaderInfoByReturnType, v14);
  if ( (int)ServantLeaderInfoByReturnType->fields.userId < 1 )
  {
LABEL_18:
    v17 = (TreasureDvcInfo_o *)sub_1C93D20(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v17, 0);
    *tdInfo = v17;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    return 0;
  }
  userId = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
  p_classId = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId;
  while ( 1 )
  {
    ServantLeaderInfoByReturnType = *p_classId;
    if ( supportDeckId >= 1 )
    {
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_20;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId != supportDeckId )
        goto LABEL_17;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_20;
    if ( ServantLeaderInfoByReturnType->fields.userSvtId
      && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
    {
      return ServantLeaderInfo__getTreasureDeviceInfo(ServantLeaderInfoByReturnType, tdInfo, 0);
    }
LABEL_17:
    --userId;
    ++p_classId;
    if ( !userId )
      goto LABEL_18;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_20;
  if ( ServantLeaderInfoByReturnType->fields.classId != classPos || !ServantLeaderInfoByReturnType->fields.userSvtId )
    goto LABEL_17;
  return ServantLeaderInfo__getTreasureDeviceInfo(ServantLeaderInfoByReturnType, tdInfo, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t OtherUserGameEntity__getTreasureDeviceLevelIcon(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  __int64 userId; // x8
  ServantLeaderInfo_o **i; // x9

  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_18:
    sub_1C93D2C(ServantLeaderInfoByReturnType, v11);
  if ( (int)ServantLeaderInfoByReturnType->fields.userId < 1 )
    return 0;
  userId = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
  for ( i = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId; ; ++i )
  {
    ServantLeaderInfoByReturnType = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_18;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId != supportDeckId )
        goto LABEL_15;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_18;
    if ( ServantLeaderInfoByReturnType->fields.userSvtId
      && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
    {
      return ServantLeaderInfo__getTreasureDeviceLevelIcon(ServantLeaderInfoByReturnType, 0);
    }
LABEL_15:
    if ( !--userId )
      return 0;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_18;
  if ( ServantLeaderInfoByReturnType->fields.classId != classPos || !ServantLeaderInfoByReturnType->fields.userSvtId )
    goto LABEL_15;
  return ServantLeaderInfo__getTreasureDeviceLevelIcon(ServantLeaderInfoByReturnType, 0);
}


int64_t OtherUserGameEntity__getUpdatedAt(OtherUserGameEntity_o *this, int32_t classPos, const MethodInfo *method)
{
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v4; // x8

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_5;
  if ( !LODWORD(userSvtLeaderHash->max_length) )
    sub_1C93D34(this);
  v4 = userSvtLeaderHash->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_1C93D2C(this, classPos);
  return v4->fields.updatedAt;
}


// local variable allocation has failed, the output may be wrong!
int64_t OtherUserGameEntity__getUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v9; // x1
  __int64 v10; // x9
  int64_t v11; // x8
  __int64 *i; // x8
  __int64 v13; // x10

  result = (int64_t)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
LABEL_15:
    sub_1C93D2C(result, v9);
  v10 = *(_QWORD *)(result + 24);
  v11 = result;
  result = 0;
  if ( (int)v10 >= 1 )
  {
    v10 = (unsigned int)v10;
    for ( i = (__int64 *)(v11 + 32); ; ++i )
    {
      v13 = *i;
      if ( returnSupportServantType == 2 )
      {
        if ( !v13 )
          goto LABEL_15;
        result = *(_QWORD *)(v13 + 40);
        if ( result && *(_DWORD *)(v13 + 268) == followerGrandGraphId )
          return result;
      }
      else
      {
        if ( !v13 )
          goto LABEL_15;
        if ( *(_DWORD *)(v13 + 32) == classPos )
          return *(_QWORD *)(v13 + 40);
      }
      if ( !--v10 )
        return 0;
    }
  }
  return result;
}