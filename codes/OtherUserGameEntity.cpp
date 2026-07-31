void OtherUserGameEntity___ctor(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C92 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_long___ctor__);
    byte_5938C92 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3EDADB8 *)Method_DataEntityBase_long___ctor__);
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
  int64_t userId; // x9
  __int64 v16; // x8
  __int64 v17; // x9
  ServantLeaderInfo_o **p_classId; // x10
  BalanceConfig_c *v19; // x0
  SkillInfo_array *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_5938C91 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&SkillInfo___TypeInfo);
    byte_5938C91 = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_23:
    sub_21FFECC(ServantLeaderInfoByReturnType, v14);
  userId = ServantLeaderInfoByReturnType->fields.userId;
  if ( (int)userId >= 1 )
  {
    v16 = (unsigned int)userId & ~((int)userId >> 31);
    v17 = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
    p_classId = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId;
    do
    {
      if ( !v17 )
        sub_21FFED4(ServantLeaderInfoByReturnType);
      ServantLeaderInfoByReturnType = *p_classId;
      if ( supportDeckId < 1 )
        goto LABEL_10;
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_23;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId == supportDeckId )
      {
LABEL_10:
        if ( returnSupportServantType == 2 )
        {
          if ( !ServantLeaderInfoByReturnType )
            goto LABEL_23;
          if ( ServantLeaderInfoByReturnType->fields.userSvtId
            && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
          {
            goto LABEL_22;
          }
        }
        else
        {
          if ( !ServantLeaderInfoByReturnType )
            goto LABEL_23;
          if ( ServantLeaderInfoByReturnType->fields.classId == classPos
            && ServantLeaderInfoByReturnType->fields.userSvtId )
          {
LABEL_22:
            ServantLeaderInfo__GetAppendPassiveSkillInfo_50536596(ServantLeaderInfoByReturnType, skillInfoList, 0, 0);
            return;
          }
        }
      }
      --v16;
      ++p_classId;
      --v17;
    }
    while ( v16 );
  }
  v19 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
    v19 = BalanceConfig_TypeInfo;
  }
  v20 = (SkillInfo_array *)sub_21FFD10(
                             SkillInfo___TypeInfo,
                             (unsigned int)v19->static_fields->SvtAppendPassiveSkillListMax);
  *skillInfoList = v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v20, v21, v22, v23, v24, v25, v26);
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
  const MethodInfo *v6; // x1

  if ( (byte_5938C8C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938C8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  return Entity && QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, v6);
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
      v5 = sub_21FFC64(&System_ArgumentOutOfRangeException_TypeInfo);
      v6 = (System_ArgumentOutOfRangeException_o *)sub_21FFEBC(v5);
      v7 = (System_String_o *)sub_21FFC64(&StringLiteral_24252/*"returnSupportServantType"*/);
      v8 = (System_String_o *)sub_21FFC64(&StringLiteral_26803/*"予期されないReturnSupportServantTypeです。"*/);
      System_ArgumentOutOfRangeException___ctor_76416484(v6, v7, v8, 0);
      v9 = sub_21FFC64(&Method_OtherUserGameEntity_GetServantLeaderInfoByReturnType__);
      sub_21FFD90(v6, v9);
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
  __int64 v13; // x8
  __int64 v14; // x9
  ServantLeaderInfo_o **i; // x10
  ServantLeaderInfo_o *v16; // x11
  struct EquipTargetInfo_o *equipTarget1; // x11

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_21:
    sub_21FFECC(ServantLeaderInfoByReturnType, v11);
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v13 = (unsigned int)max_length & ~((int)max_length >> 31);
  v14 = (unsigned int)ServantLeaderInfoByReturnType->max_length;
  for ( i = ServantLeaderInfoByReturnType->m_Items; ; ++i )
  {
    if ( !v14 )
      sub_21FFED4(ServantLeaderInfoByReturnType);
    v16 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v16 )
        goto LABEL_21;
      if ( v16->fields.supportDeckId != supportDeckId )
        goto LABEL_17;
    }
    if ( returnSupportServantType == 2 )
      break;
    if ( !v16 )
      goto LABEL_21;
    if ( v16->fields.classId == classPos )
    {
      if ( v16->fields.userSvtId )
      {
        equipTarget1 = v16->fields.equipTarget1;
        if ( equipTarget1 )
          return equipTarget1->fields.atk;
      }
    }
LABEL_17:
    --v13;
    --v14;
    if ( !v13 )
      return 0;
  }
  if ( !v16 )
    goto LABEL_21;
  if ( !v16->fields.userSvtId || v16->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_17;
  equipTarget1 = v16->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_21;
  return equipTarget1->fields.atk;
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
  __int64 v13; // x8
  __int64 v14; // x9
  ServantLeaderInfo_o **i; // x10
  ServantLeaderInfo_o *v16; // x11
  struct EquipTargetInfo_o *equipTarget1; // x11

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_21:
    sub_21FFECC(ServantLeaderInfoByReturnType, v11);
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v13 = (unsigned int)max_length & ~((int)max_length >> 31);
  v14 = (unsigned int)ServantLeaderInfoByReturnType->max_length;
  for ( i = ServantLeaderInfoByReturnType->m_Items; ; ++i )
  {
    if ( !v14 )
      sub_21FFED4(ServantLeaderInfoByReturnType);
    v16 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v16 )
        goto LABEL_21;
      if ( v16->fields.supportDeckId != supportDeckId )
        goto LABEL_17;
    }
    if ( returnSupportServantType == 2 )
      break;
    if ( !v16 )
      goto LABEL_21;
    if ( v16->fields.classId == classPos )
    {
      if ( v16->fields.userSvtId )
      {
        equipTarget1 = v16->fields.equipTarget1;
        if ( equipTarget1 )
          return equipTarget1->fields.hp;
      }
    }
LABEL_17:
    --v13;
    --v14;
    if ( !v13 )
      return 0;
  }
  if ( !v16 )
    goto LABEL_21;
  if ( !v16->fields.userSvtId || v16->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_17;
  equipTarget1 = v16->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_21;
  return equipTarget1->fields.hp;
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
  EquipTargetInfo_o **p_equipTarget3; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_25:
    sub_21FFECC(ServantLeaderInfoByReturnType, v13);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v15 = ServantLeaderInfoByReturnType;
  if ( (int)max_length < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= (unsigned int)max_length )
      sub_21FFED4(ServantLeaderInfoByReturnType);
    m_Items = v15->m_Items;
    v18 = v15->m_Items[v16];
    if ( supportDeckId >= 1 )
    {
      if ( !v18 )
        goto LABEL_25;
      if ( v18->fields.supportDeckId != supportDeckId )
        goto LABEL_18;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v18 )
      goto LABEL_25;
    if ( v18->fields.userSvtId && v18->fields.grandGraphId == followerGrandGraphId )
    {
      ServantLeaderInfo__SetSkillChangeInfo(m_Items[v16], 0);
      switch ( index )
      {
        case 2:
          p_equipTarget3 = &v18->fields.equipTarget3;
          return *p_equipTarget3;
        case 1:
          p_equipTarget3 = &v18->fields.equipTarget2;
          return *p_equipTarget3;
        case 0:
          goto LABEL_21;
      }
    }
LABEL_18:
    LODWORD(max_length) = v15->max_length;
    if ( (__int64)++v16 >= (int)max_length )
      return 0;
  }
  if ( !v18 )
    goto LABEL_25;
  if ( v18->fields.classId != classPos )
    goto LABEL_18;
  ServantLeaderInfo__SetEquipImagePartsGroupIdxs(m_Items[v16], 0);
LABEL_21:
  p_equipTarget3 = &v18->fields.equipTarget1;
  return *p_equipTarget3;
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
  il2cpp_array_size_t max_length; // x9
  __int64 v14; // x8
  __int64 v15; // x9
  ServantLeaderInfo_o **i; // x10
  ServantLeaderInfo_o *v17; // x11
  struct EquipTargetInfo_o *v18; // x11
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v21; // x19
  __int64 v22; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_5938C8E & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5938C8E = 1;
  }
  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_26;
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v14 = (unsigned int)max_length & ~((int)max_length >> 31);
  v15 = (unsigned int)ServantLeaderInfoByReturnType->max_length;
  for ( i = ServantLeaderInfoByReturnType->m_Items; ; ++i )
  {
    if ( !v15 )
      sub_21FFED4(ServantLeaderInfoByReturnType);
    v17 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v17 )
        goto LABEL_26;
      if ( v17->fields.supportDeckId != supportDeckId )
        goto LABEL_18;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v17 )
      goto LABEL_26;
    if ( v17->fields.userSvtId && v17->fields.grandGraphId == followerGrandGraphId )
    {
      equipTarget1 = v17->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v21 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_22;
        goto LABEL_23;
      }
LABEL_26:
      sub_21FFECC(ServantLeaderInfoByReturnType, v12);
    }
LABEL_18:
    --v14;
    --v15;
    if ( !v14 )
      return 0;
  }
  if ( !v17 )
    goto LABEL_26;
  if ( v17->fields.classId != classPos )
    goto LABEL_18;
  v18 = v17->fields.equipTarget1;
  if ( !v18 )
    goto LABEL_18;
  v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
LABEL_22:
    j_il2cpp_runtime_class_init_0(v23, v12);
LABEL_23:
  *(_QWORD *)&v24.fields.currentCryptoKey = v21;
  *(_QWORD *)&v24.fields.fakeValue = v22;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v24, 0);
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
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v12; // x1
  il2cpp_array_size_t max_length; // x9
  __int64 v14; // x8
  __int64 v15; // x9
  ServantLeaderInfo_o **i; // x10
  ServantLeaderInfo_o *v17; // x11
  struct EquipTargetInfo_o *v18; // x11
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v21; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v22; // x0
  __int128 v23; // q1
  _OWORD v24[2]; // [xsp+0h] [xbp-A0h] BYREF
  _OWORD v25[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v26; // [xsp+40h] [xbp-60h]
  __int128 v27; // [xsp+50h] [xbp-50h]

  if ( (byte_5938C8D & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5938C8D = 1;
  }
  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_29;
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v14 = (unsigned int)max_length & ~((int)max_length >> 31);
  v15 = (unsigned int)ServantLeaderInfoByReturnType->max_length;
  for ( i = ServantLeaderInfoByReturnType->m_Items; ; ++i )
  {
    if ( !v15 )
      sub_21FFED4(ServantLeaderInfoByReturnType);
    v17 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v17 )
        goto LABEL_29;
      if ( v17->fields.supportDeckId != supportDeckId )
        goto LABEL_18;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v17 )
      goto LABEL_29;
    if ( v17->fields.userSvtId && v17->fields.grandGraphId == followerGrandGraphId )
    {
      equipTarget1 = v17->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v21 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
        v26 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
        v27 = v21;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
        v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v25;
        v25[0] = v26;
        v25[1] = v27;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(v22, 0);
      }
LABEL_29:
      sub_21FFECC(ServantLeaderInfoByReturnType, v12);
    }
LABEL_18:
    --v14;
    --v15;
    if ( !v14 )
      return 0;
  }
  if ( !v17 )
    goto LABEL_29;
  if ( v17->fields.classId != classPos )
    goto LABEL_18;
  v18 = v17->fields.equipTarget1;
  if ( !v18 )
    goto LABEL_18;
  v23 = *(_OWORD *)&v18->fields.userSvtId.fields.fakeValue;
  v26 = *(_OWORD *)&v18->fields.userSvtId.fields.currentCryptoKey;
  v27 = v23;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
  v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v24;
  v24[0] = v26;
  v24[1] = v27;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(v22, 0);
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
  __int64 v13; // x8
  __int64 v14; // x9
  ServantLeaderInfo_o **i; // x10
  ServantLeaderInfo_o *v16; // x11

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_21FFECC(ServantLeaderInfoByReturnType, v11);
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v13 = (unsigned int)max_length & ~((int)max_length >> 31);
  v14 = (unsigned int)ServantLeaderInfoByReturnType->max_length;
  for ( i = ServantLeaderInfoByReturnType->m_Items; ; ++i )
  {
    if ( !v14 )
      sub_21FFED4(ServantLeaderInfoByReturnType);
    v16 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v16 )
        goto LABEL_19;
      if ( v16->fields.supportDeckId != supportDeckId )
        goto LABEL_16;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v16 )
      goto LABEL_19;
    if ( v16->fields.userSvtId && v16->fields.grandGraphId == followerGrandGraphId )
      return v16->fields.lv;
LABEL_16:
    --v13;
    --v14;
    if ( !v13 )
      return 0;
  }
  if ( !v16 )
    goto LABEL_19;
  if ( v16->fields.classId != classPos || !v16->fields.userSvtId )
    goto LABEL_16;
  return v16->fields.lv;
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
  int64_t userId; // x9
  __int64 v13; // x8
  __int64 v14; // x9
  ServantLeaderInfo_o **i; // x10

  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_21FFECC(ServantLeaderInfoByReturnType, v11);
  userId = ServantLeaderInfoByReturnType->fields.userId;
  if ( (int)userId < 1 )
    return 0;
  v13 = (unsigned int)userId & ~((int)userId >> 31);
  v14 = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
  for ( i = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId; ; ++i )
  {
    if ( !v14 )
      sub_21FFED4(ServantLeaderInfoByReturnType);
    ServantLeaderInfoByReturnType = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_19;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId != supportDeckId )
        goto LABEL_16;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_19;
    if ( ServantLeaderInfoByReturnType->fields.userSvtId
      && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
    {
      return ServantLeaderInfo__getLevelMax(ServantLeaderInfoByReturnType, 0);
    }
LABEL_16:
    --v13;
    --v14;
    if ( !v13 )
      return 0;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_19;
  if ( ServantLeaderInfoByReturnType->fields.classId != classPos || !ServantLeaderInfoByReturnType->fields.userSvtId )
    goto LABEL_16;
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
  __int64 v15; // x8
  __int64 v16; // x9
  ServantLeaderInfo_o **p_classId; // x10

  result = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)isExist);
  if ( !result )
LABEL_19:
    sub_21FFECC(result, v13);
  userId = result->fields.userId;
  if ( (int)userId >= 1 )
  {
    v15 = (unsigned int)userId & ~((int)userId >> 31);
    v16 = (unsigned int)result->fields.userId;
    p_classId = (ServantLeaderInfo_o **)&result->fields.classId;
    do
    {
      if ( !v16 )
        sub_21FFED4(result);
      result = *p_classId;
      if ( returnSupportServantType == 2 )
      {
        if ( !result )
          goto LABEL_19;
        if ( result->fields.userSvtId && result->fields.grandGraphId == followerGrandGraphId )
          return result;
      }
      else
      {
        if ( !result )
          goto LABEL_19;
        if ( result->fields.classId == classPos
          && (supportDeckId < 1 || result->fields.supportDeckId == supportDeckId)
          && (isExist || result->fields.userSvtId) )
        {
          return result;
        }
      }
      --v15;
      ++p_classId;
      --v16;
    }
    while ( v15 );
  }
  return 0;
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
  int64_t userId; // x9
  __int64 v16; // x8
  __int64 v17; // x9
  ServantLeaderInfo_o **p_classId; // x10
  BalanceConfig_c *v19; // x0
  SkillInfo_array *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_5938C8F & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&SkillInfo___TypeInfo);
    byte_5938C8F = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_23:
    sub_21FFECC(ServantLeaderInfoByReturnType, v14);
  userId = ServantLeaderInfoByReturnType->fields.userId;
  if ( (int)userId >= 1 )
  {
    v16 = (unsigned int)userId & ~((int)userId >> 31);
    v17 = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
    p_classId = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId;
    do
    {
      if ( !v17 )
        sub_21FFED4(ServantLeaderInfoByReturnType);
      ServantLeaderInfoByReturnType = *p_classId;
      if ( supportDeckId < 1 )
        goto LABEL_10;
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_23;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId == supportDeckId )
      {
LABEL_10:
        if ( returnSupportServantType == 2 )
        {
          if ( !ServantLeaderInfoByReturnType )
            goto LABEL_23;
          if ( ServantLeaderInfoByReturnType->fields.userSvtId
            && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
          {
            goto LABEL_22;
          }
        }
        else
        {
          if ( !ServantLeaderInfoByReturnType )
            goto LABEL_23;
          if ( ServantLeaderInfoByReturnType->fields.classId == classPos
            && ServantLeaderInfoByReturnType->fields.userSvtId )
          {
LABEL_22:
            ServantLeaderInfo__getSkillInfo(ServantLeaderInfoByReturnType, skillInfoList, -1, 0);
            return;
          }
        }
      }
      --v16;
      ++p_classId;
      --v17;
    }
    while ( v16 );
  }
  v19 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
    v19 = BalanceConfig_TypeInfo;
  }
  v20 = (SkillInfo_array *)sub_21FFD10(SkillInfo___TypeInfo, (unsigned int)v19->static_fields->SvtSkillListMax);
  *skillInfoList = v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v20, v21, v22, v23, v24, v25, v26);
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
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  int64_t userId; // x9
  __int64 v13; // x8
  __int64 v14; // x9
  ServantLeaderInfo_o **i; // x10

  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_21FFECC(ServantLeaderInfoByReturnType, v11);
  userId = ServantLeaderInfoByReturnType->fields.userId;
  if ( (int)userId < 1 )
    return 0;
  v13 = (unsigned int)userId & ~((int)userId >> 31);
  v14 = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
  for ( i = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId; ; ++i )
  {
    if ( !v14 )
      sub_21FFED4(ServantLeaderInfoByReturnType);
    ServantLeaderInfoByReturnType = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_19;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId != supportDeckId )
        goto LABEL_16;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_19;
    if ( ServantLeaderInfoByReturnType->fields.userSvtId
      && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
    {
      return ServantLeaderInfo__GetServantId(ServantLeaderInfoByReturnType, -1, 0);
    }
LABEL_16:
    --v13;
    --v14;
    if ( !v13 )
      return 0;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_19;
  if ( ServantLeaderInfoByReturnType->fields.classId != classPos || !ServantLeaderInfoByReturnType->fields.userSvtId )
    goto LABEL_16;
  return ServantLeaderInfo__GetServantId(ServantLeaderInfoByReturnType, -1, 0);
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
  int64_t userId; // x9
  __int64 v16; // x8
  __int64 v17; // x9
  ServantLeaderInfo_o **p_classId; // x10
  TreasureDvcInfo_o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5938C90 & 1) == 0 )
  {
    sub_21FFC50(&TreasureDvcInfo_TypeInfo);
    byte_5938C90 = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_21:
    sub_21FFECC(ServantLeaderInfoByReturnType, v14);
  userId = ServantLeaderInfoByReturnType->fields.userId;
  if ( (int)userId < 1 )
  {
LABEL_19:
    v19 = (TreasureDvcInfo_o *)sub_21FFEBC(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v19, 0);
    *tdInfo = v19;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)tdInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
    return 0;
  }
  v16 = (unsigned int)userId & ~((int)userId >> 31);
  v17 = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
  p_classId = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId;
  while ( 1 )
  {
    if ( !v17 )
      sub_21FFED4(ServantLeaderInfoByReturnType);
    ServantLeaderInfoByReturnType = *p_classId;
    if ( supportDeckId >= 1 )
    {
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_21;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId != supportDeckId )
        goto LABEL_18;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_21;
    if ( ServantLeaderInfoByReturnType->fields.userSvtId
      && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
    {
      return ServantLeaderInfo__getTreasureDeviceInfo(ServantLeaderInfoByReturnType, tdInfo, -1, 0);
    }
LABEL_18:
    --v16;
    ++p_classId;
    --v17;
    if ( !v16 )
      goto LABEL_19;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_21;
  if ( ServantLeaderInfoByReturnType->fields.classId != classPos || !ServantLeaderInfoByReturnType->fields.userSvtId )
    goto LABEL_18;
  return ServantLeaderInfo__getTreasureDeviceInfo(ServantLeaderInfoByReturnType, tdInfo, -1, 0);
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
  int64_t userId; // x9
  __int64 v13; // x8
  __int64 v14; // x9
  ServantLeaderInfo_o **i; // x10

  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_21FFECC(ServantLeaderInfoByReturnType, v11);
  userId = ServantLeaderInfoByReturnType->fields.userId;
  if ( (int)userId < 1 )
    return 0;
  v13 = (unsigned int)userId & ~((int)userId >> 31);
  v14 = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
  for ( i = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId; ; ++i )
  {
    if ( !v14 )
      sub_21FFED4(ServantLeaderInfoByReturnType);
    ServantLeaderInfoByReturnType = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !ServantLeaderInfoByReturnType )
        goto LABEL_19;
      if ( ServantLeaderInfoByReturnType->fields.supportDeckId != supportDeckId )
        goto LABEL_16;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_19;
    if ( ServantLeaderInfoByReturnType->fields.userSvtId
      && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
    {
      return ServantLeaderInfo__getTreasureDeviceLevelIcon(ServantLeaderInfoByReturnType, 0);
    }
LABEL_16:
    --v13;
    --v14;
    if ( !v13 )
      return 0;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_19;
  if ( ServantLeaderInfoByReturnType->fields.classId != classPos || !ServantLeaderInfoByReturnType->fields.userSvtId )
    goto LABEL_16;
  return ServantLeaderInfo__getTreasureDeviceLevelIcon(ServantLeaderInfoByReturnType, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t OtherUserGameEntity__getUpdatedAt(OtherUserGameEntity_o *this, int32_t classPos, const MethodInfo *method)
{
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v4; // x8

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_5;
  if ( !LODWORD(userSvtLeaderHash->max_length) )
    sub_21FFED4(this);
  v4 = userSvtLeaderHash->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&classPos);
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
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 *i; // x10
  __int64 v14; // x11

  result = (int64_t)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
LABEL_15:
    sub_21FFECC(result, v9);
  v10 = *(_QWORD *)(result + 24);
  if ( (int)v10 < 1 )
    return 0;
  v11 = (unsigned int)v10 & ~((int)v10 >> 31);
  v12 = (unsigned int)*(_QWORD *)(result + 24);
  for ( i = (__int64 *)(result + 32); ; ++i )
  {
    if ( !v12 )
      sub_21FFED4(result);
    v14 = *i;
    if ( returnSupportServantType != 2 )
      break;
    if ( !v14 )
      goto LABEL_15;
    result = *(_QWORD *)(v14 + 40);
    if ( result && *(_DWORD *)(v14 + 268) == followerGrandGraphId )
      return result;
LABEL_12:
    --v11;
    --v12;
    if ( !v11 )
      return 0;
  }
  if ( !v14 )
    goto LABEL_15;
  if ( *(_DWORD *)(v14 + 32) != classPos )
    goto LABEL_12;
  return *(_QWORD *)(v14 + 40);
}