void __fastcall OtherUserGameEntity___ctor(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B024B4 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_long___ctor__, method);
    byte_4B024B4 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32ACBD4 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall OtherUserGameEntity__CreatePrimaryKey(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserGameEntity__GetAppendSkillInfo(
        OtherUserGameEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 v15; // x1
  __int64 userId; // x8
  ServantLeaderInfo_o **p_classId; // x9
  BalanceConfig_c *v18; // x0
  SkillInfo_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B024B3 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BC3008(&SkillInfo___TypeInfo, v13);
    byte_4B024B3 = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1BC3264(ServantLeaderInfoByReturnType, v15);
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
LABEL_21:
            ServantLeaderInfo__GetAppendPassiveSkillInfo_42469628(ServantLeaderInfoByReturnType, skillInfoList, 0, 0LL);
            return;
          }
        }
        else if ( !ServantLeaderInfoByReturnType )
        {
          goto LABEL_22;
        }
        if ( ServantLeaderInfoByReturnType->fields.classId == classPos
          && ServantLeaderInfoByReturnType->fields.userSvtId )
        {
          goto LABEL_21;
        }
      }
      --userId;
      ++p_classId;
    }
    while ( userId );
  }
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v19 = (SkillInfo_array *)sub_1BC30B0(
                             SkillInfo___TypeInfo,
                             (unsigned int)v18->static_fields->SvtAppendPassiveSkillListMax);
  *skillInfoList = v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)skillInfoList, (int32_t)v19, v20, v21);
}


int32_t __fastcall OtherUserGameEntity__GetAtkBoostValue(
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
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__get_AtkBoostValue(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *__fastcall OtherUserGameEntity__GetEquipInfo(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *userRecommendSupportHash; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  OtherUserGameEntity___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__object__o *_9__49_1; // x20
  Il2CppObject *v22; // x21
  struct OtherUserGameEntity___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4B024B2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_EquipTargetInfo___, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__EquipTargetInfo___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___, v6);
    sub_1BC3008(&System_Func_UserRecommendSupportInfo__EquipTargetInfo__TypeInfo, v7);
    sub_1BC3008(&System_Func_UserRecommendSupportInfo__bool__TypeInfo, v8);
    sub_1BC3008(&Method_OtherUserGameEntity___c__GetEquipInfo_b__49_1__, v9);
    sub_1BC3008(&Method_OtherUserGameEntity___c__DisplayClass49_0__GetEquipInfo_b__0__, v10);
    sub_1BC3008(&OtherUserGameEntity___c__DisplayClass49_0_TypeInfo, v11);
    sub_1BC3008(&OtherUserGameEntity___c_TypeInfo, v12);
    byte_4B024B2 = 1;
  }
  v13 = sub_1BC3254(OtherUserGameEntity___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BC3264(v14, v15);
  *(_DWORD *)(v13 + 16) = index;
  userRecommendSupportHash = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userRecommendSupportHash;
  v17 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserRecommendSupportInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_OtherUserGameEntity___c__DisplayClass49_0__GetEquipInfo_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__Where_object_(
          userRecommendSupportHash,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___);
  v19 = OtherUserGameEntity___c_TypeInfo;
  v20 = v18;
  if ( !OtherUserGameEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserGameEntity___c_TypeInfo);
    v19 = OtherUserGameEntity___c_TypeInfo;
  }
  _9__49_1 = (System_Func_object__object__o *)v19->static_fields->__9__49_1;
  if ( !_9__49_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = OtherUserGameEntity___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__49_1 = (System_Func_object__object__o *)sub_1BC3254(System_Func_UserRecommendSupportInfo__EquipTargetInfo__TypeInfo);
    System_Func_object__object____ctor(_9__49_1, v22, Method_OtherUserGameEntity___c__GetEquipInfo_b__49_1__, 0LL);
    static_fields = OtherUserGameEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_1 = (struct System_Func_UserRecommendSupportInfo__EquipTargetInfo__o *)_9__49_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__49_1, (int32_t)_9__49_1, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__49_1,
                                                               (const MethodInfo_3036320 *)Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__EquipTargetInfo___);
  return (EquipTargetInfo_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                v26,
                                (const MethodInfo_3026590 *)Method_System_Linq_Enumerable_FirstOrDefault_EquipTargetInfo___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__GetEquipSvtId(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v4; // x20
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x21
  int max_length; // w8
  unsigned int v7; // w22
  UserRecommendSupportInfo_o *v8; // x20
  int64_t pushUserSvtId; // x19
  struct System_String_o *message; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v4 = this;
  if ( (byte_4B024AE & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BC3008(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      *(_QWORD *)&index);
    byte_4B024AE = 1;
  }
  userRecommendSupportHash = v4->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
    goto LABEL_17;
  max_length = userRecommendSupportHash->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1BC326C(this, *(_QWORD *)&index, method);
    v8 = userRecommendSupportHash->m_Items[v7];
    if ( !v8 )
      goto LABEL_17;
    if ( v8->fields.idx == index )
    {
      this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0LL);
      if ( this )
        break;
    }
    max_length = userRecommendSupportHash->max_length;
    if ( (int)++v7 >= max_length )
      return 0;
  }
  this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0LL);
  if ( !this )
LABEL_17:
    sub_1BC3264(this, *(_QWORD *)&index);
  message = this->fields.message;
  pushUserSvtId = this->fields.pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = message;
  *(_QWORD *)&v12.fields.fakeValue = pushUserSvtId;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__GetEquipUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v4; // x20
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x21
  int max_length; // w8
  unsigned int v7; // w22
  UserRecommendSupportInfo_o *v8; // x20
  __int128 v10; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_4B024AC & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BC3008(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                      *(_QWORD *)&index);
    byte_4B024AC = 1;
  }
  userRecommendSupportHash = v4->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
    goto LABEL_18;
  max_length = userRecommendSupportHash->max_length;
  if ( max_length < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1BC326C(this, *(_QWORD *)&index, method);
    v8 = userRecommendSupportHash->m_Items[v7];
    if ( !v8 )
      goto LABEL_18;
    if ( v8->fields.idx == index )
    {
      this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0LL);
      if ( this )
        break;
    }
    max_length = userRecommendSupportHash->max_length;
    if ( (int)++v7 >= max_length )
      return 0LL;
  }
  this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0LL);
  if ( !this )
LABEL_18:
    sub_1BC3264(this, *(_QWORD *)&index);
  v10 = *(_OWORD *)&this->fields.friendCode;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userName;
  *(_OWORD *)&v12.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v11, 0LL);
}


int32_t __fastcall OtherUserGameEntity__GetHpBoostValue(
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
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__get_HpBoostValue(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OtherUserGameEntity__GetRecommendSupportMessageIds(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v4; // x20
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  int max_length; // w9
  int v7; // w10
  UserRecommendSupportInfo_o *v8; // x11

  v4 = this;
  if ( (byte_4B024AF & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1BC3008(&int___TypeInfo, *(_QWORD *)&index);
    byte_4B024AF = 1;
  }
  userRecommendSupportHash = v4->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
LABEL_13:
    sub_1BC3264(this, *(_QWORD *)&index);
  max_length = userRecommendSupportHash->max_length;
  if ( max_length < 1 )
    return (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  v7 = 0;
  while ( 1 )
  {
    if ( max_length == v7 )
      sub_1BC326C(this, *(_QWORD *)&index, method);
    v8 = userRecommendSupportHash->m_Items[v7];
    if ( !v8 )
      goto LABEL_13;
    if ( v8->fields.idx == index )
      return v8->fields.adviceMessageIds;
    if ( max_length == ++v7 )
      return (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  }
}


int32_t __fastcall OtherUserGameEntity__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B024A6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B024A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  return Entity && QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, v8);
}


// local variable allocation has failed, the output may be wrong!
ServantLeaderInfo_array *__fastcall OtherUserGameEntity__GetServantLeaderInfoByReturnType(
        OtherUserGameEntity_o *this,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B024A7 & 1) == 0 )
  {
    sub_1BC3008(&OtherUserGameEntity_ReturnSupportServantType_TypeInfo, *(_QWORD *)&returnSupportServantType);
    byte_4B024A7 = 1;
  }
  if ( returnSupportServantType == 2 )
    return this->fields.userSvtGrandHash;
  if ( returnSupportServantType == 1 )
    return this->fields.eventUserSvtLeaderHash;
  if ( returnSupportServantType )
  {
    v9 = returnSupportServantType;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(
                           OtherUserGameEntity_ReturnSupportServantType_TypeInfo,
                           &v9,
                           method,
                           v3,
                           v4);
    PrivateImplementationDetails___ThrowSwitchExpressionException(v8, 0LL);
  }
  return this->fields.userSvtLeaderHash;
}


UserRecommendSupportInfo_array *__fastcall OtherUserGameEntity__GetUserRecommendSupportInfo(
        OtherUserGameEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userRecommendSupportHash;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__GetUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *userRecommendSupportHash; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  OtherUserGameEntity___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_T__TResult__o *_9__22_1; // x20
  Il2CppObject *v22; // x21
  struct OtherUserGameEntity___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4B024A9 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_long___, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__long___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___, v6);
    sub_1BC3008(&System_Func_UserRecommendSupportInfo__bool__TypeInfo, v7);
    sub_1BC3008(&System_Func_UserRecommendSupportInfo__long__TypeInfo, v8);
    sub_1BC3008(&Method_OtherUserGameEntity___c__GetUserSvtId_b__22_1__, v9);
    sub_1BC3008(&Method_OtherUserGameEntity___c__DisplayClass22_0__GetUserSvtId_b__0__, v10);
    sub_1BC3008(&OtherUserGameEntity___c__DisplayClass22_0_TypeInfo, v11);
    sub_1BC3008(&OtherUserGameEntity___c_TypeInfo, v12);
    byte_4B024A9 = 1;
  }
  v13 = sub_1BC3254(OtherUserGameEntity___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BC3264(v14, v15);
  *(_DWORD *)(v13 + 16) = index;
  userRecommendSupportHash = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userRecommendSupportHash;
  v17 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserRecommendSupportInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_OtherUserGameEntity___c__DisplayClass22_0__GetUserSvtId_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__Where_object_(
          userRecommendSupportHash,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___);
  v19 = OtherUserGameEntity___c_TypeInfo;
  v20 = v18;
  if ( !OtherUserGameEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserGameEntity___c_TypeInfo);
    v19 = OtherUserGameEntity___c_TypeInfo;
  }
  _9__22_1 = (System_Func_T__TResult__o *)v19->static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = OtherUserGameEntity___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__22_1 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_UserRecommendSupportInfo__long__TypeInfo);
    System_Func_object__long____ctor(_9__22_1, v22, Method_OtherUserGameEntity___c__GetUserSvtId_b__22_1__, 0LL);
    static_fields = OtherUserGameEntity___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = (struct System_Func_UserRecommendSupportInfo__long__o *)_9__22_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__22_1, (int32_t)_9__22_1, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__22_1,
                                                               (const MethodInfo_303602C *)Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__long___);
  return System_Linq_Enumerable__FirstOrDefault_long_(
           v26,
           (const MethodInfo_3026148 *)Method_System_Linq_Enumerable_FirstOrDefault_long___);
}


bool __fastcall OtherUserGameEntity__IsSameSupportDeck(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  int32_t v4; // w20
  _BOOL4 v5; // w24
  ServantLeaderInfo_o *ServantLeaderInfo; // x22
  const MethodInfo *v7; // x6
  int64_t v8; // x0
  __int64 v9; // x1
  int64_t v10; // x21
  _BOOL4 v11; // w8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v13; // q0
  _BOOL4 v14; // w24
  __int64 v15; // x8
  __int128 v16; // q0
  _BOOL4 v17; // w8
  struct EquipTargetInfo_o *v18; // x8
  __int128 v19; // q0
  __int64 v20; // x8
  __int128 v21; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+80h] [xbp-60h]

  if ( (byte_4B024A8 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B024A8 = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = 1;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(this, v4, 1, 0, 0, 0, v2);
    v8 = (int64_t)OtherUserGameEntity__getServantLeaderInfo(this, v4, 1, 1, 0, 0, v7);
    v10 = v8;
    if ( ServantLeaderInfo )
      v5 = ServantLeaderInfo->fields.userSvtId == 0;
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 40) == 0LL;
      if ( !v5 )
        goto LABEL_13;
    }
    else
    {
      v11 = 1;
      if ( !v5 )
        goto LABEL_13;
    }
    if ( !v11 )
    {
LABEL_13:
      if ( v11 || v5 )
        return 0;
      if ( !ServantLeaderInfo || !v8 )
        goto LABEL_41;
      if ( ServantLeaderInfo->fields.userSvtId != *(_QWORD *)(v8 + 40) )
        return 0;
      goto LABEL_17;
    }
    if ( !ServantLeaderInfo )
      break;
LABEL_17:
    equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
    if ( !equipTarget1 )
      break;
    v13 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v26, 0LL);
    v14 = v8 == 0;
    if ( v10 )
      goto LABEL_23;
LABEL_28:
    v17 = 1;
    if ( !v14 )
      goto LABEL_30;
LABEL_29:
    if ( !v17 )
      goto LABEL_30;
LABEL_38:
    if ( ++v4 == 8 )
      return 1;
  }
  v14 = 1;
  if ( !v8 )
    goto LABEL_28;
LABEL_23:
  v15 = *(_QWORD *)(v10 + 144);
  if ( !v15 )
    goto LABEL_28;
  v16 = *(_OWORD *)(v15 + 40);
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v15 + 24);
  *(_OWORD *)&v27.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v25 = v27;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v25, 0LL);
  v17 = v8 == 0;
  if ( v14 )
    goto LABEL_29;
LABEL_30:
  if ( v17 || v14 )
    return 0;
  if ( !ServantLeaderInfo )
    goto LABEL_41;
  v18 = ServantLeaderInfo->fields.equipTarget1;
  if ( !v18 )
    goto LABEL_41;
  v19 = *(_OWORD *)&v18->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v18->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v24 = v27;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v24, 0LL);
  if ( !v10 || (v20 = *(_QWORD *)(v10 + 144)) == 0 )
LABEL_41:
    sub_1BC3264(v8, v9);
  v21 = *(_OWORD *)(v20 + 40);
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(v20 + 24);
  *(_OWORD *)&v23.fields.fakeValue = v21;
  if ( v8 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v23, 0LL) )
    goto LABEL_38;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getAdjustAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  __int64 v12; // x9
  ServantLeaderInfo_array *v13; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v15; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1BC3264(ServantLeaderInfoByReturnType, v11);
  v12 = *(_QWORD *)&ServantLeaderInfoByReturnType->max_length;
  v13 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0LL;
  if ( (int)v12 >= 1 )
  {
    v12 = (unsigned int)v12;
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
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v15->fields.adjustAtk;
            return (int)ServantLeaderInfoByReturnType;
          }
        }
        else if ( !v15 )
        {
          goto LABEL_19;
        }
        if ( v15->fields.classId == classPos && v15->fields.userSvtId )
          goto LABEL_17;
      }
      if ( !--v12 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = 0;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getAdjustHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  __int64 v12; // x9
  ServantLeaderInfo_array *v13; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v15; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1BC3264(ServantLeaderInfoByReturnType, v11);
  v12 = *(_QWORD *)&ServantLeaderInfoByReturnType->max_length;
  v13 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0LL;
  if ( (int)v12 >= 1 )
  {
    v12 = (unsigned int)v12;
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
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v15->fields.adjustHp;
            return (int)ServantLeaderInfoByReturnType;
          }
        }
        else if ( !v15 )
        {
          goto LABEL_19;
        }
        if ( v15->fields.classId == classPos && v15->fields.userSvtId )
          goto LABEL_17;
      }
      if ( !--v12 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = 0;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  __int64 v12; // x9
  ServantLeaderInfo_array *v13; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v15; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1BC3264(ServantLeaderInfoByReturnType, v11);
  v12 = *(_QWORD *)&ServantLeaderInfoByReturnType->max_length;
  v13 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0LL;
  if ( (int)v12 >= 1 )
  {
    v12 = (unsigned int)v12;
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
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v15->fields.atk;
            return (int)ServantLeaderInfoByReturnType;
          }
        }
        else if ( !v15 )
        {
          goto LABEL_19;
        }
        if ( v15->fields.classId == classPos && v15->fields.userSvtId )
          goto LABEL_17;
      }
      if ( !--v12 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = 0;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  __int64 v12; // x9
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
    sub_1BC3264(ServantLeaderInfoByReturnType, v11);
  v12 = *(_QWORD *)&ServantLeaderInfoByReturnType->max_length;
  v13 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0LL;
  if ( (int)v12 < 1 )
    return (int)ServantLeaderInfoByReturnType;
  v12 = (unsigned int)v12;
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
LABEL_13:
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
    if ( !--v12 )
    {
      LODWORD(ServantLeaderInfoByReturnType) = 0;
      return (int)ServantLeaderInfoByReturnType;
    }
  }
  if ( !v15 )
    goto LABEL_22;
  if ( !v15->fields.userSvtId || v15->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_13;
  v17 = v15->fields.equipTarget1;
  if ( !v17 )
    goto LABEL_22;
  LODWORD(ServantLeaderInfoByReturnType) = v17->fields.atk;
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipExp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  int v12; // w9
  ServantLeaderInfo_o *v13; // x10
  struct EquipTargetInfo_o *v14; // x10
  struct EquipTargetInfo_o *equipTarget1; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_19;
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( max_length == v12 )
      sub_1BC326C(ServantLeaderInfoByReturnType, v9, v10);
    v13 = ServantLeaderInfoByReturnType->m_Items[v12];
    if ( returnSupportServantType == 2 )
    {
      if ( !v13 )
        goto LABEL_19;
      if ( v13->fields.userSvtId && v13->fields.grandGraphId == followerGrandGraphId )
      {
        equipTarget1 = v13->fields.equipTarget1;
        if ( equipTarget1 )
          return equipTarget1->fields.exp;
LABEL_19:
        sub_1BC3264(ServantLeaderInfoByReturnType, v9);
      }
    }
    else if ( !v13 )
    {
      goto LABEL_19;
    }
    if ( v13->fields.classId == classPos )
    {
      if ( v13->fields.userSvtId )
      {
        v14 = v13->fields.equipTarget1;
        if ( v14 )
          return v14->fields.exp;
      }
    }
    if ( max_length == ++v12 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  __int64 v12; // x9
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
    sub_1BC3264(ServantLeaderInfoByReturnType, v11);
  v12 = *(_QWORD *)&ServantLeaderInfoByReturnType->max_length;
  v13 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0LL;
  if ( (int)v12 < 1 )
    return (int)ServantLeaderInfoByReturnType;
  v12 = (unsigned int)v12;
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
LABEL_13:
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
    if ( !--v12 )
    {
      LODWORD(ServantLeaderInfoByReturnType) = 0;
      return (int)ServantLeaderInfoByReturnType;
    }
  }
  if ( !v15 )
    goto LABEL_22;
  if ( !v15->fields.userSvtId || v15->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_13;
  v17 = v15->fields.equipTarget1;
  if ( !v17 )
    goto LABEL_22;
  LODWORD(ServantLeaderInfoByReturnType) = v17->fields.hp;
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *__fastcall OtherUserGameEntity__getEquipInfo(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t index,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  EquipTargetInfo_o *result; // x0
  __int64 v13; // x1
  int64_t currentCryptoKey; // x9
  EquipTargetInfo_o *v15; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v17; // x24

  result = (EquipTargetInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                  this,
                                  returnSupportServantType,
                                  *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
LABEL_24:
    sub_1BC3264(result, v13);
  currentCryptoKey = result->fields.userSvtId.fields.currentCryptoKey;
  v15 = result;
  result = 0LL;
  if ( (int)currentCryptoKey >= 1 )
  {
    currentCryptoKey = (unsigned int)currentCryptoKey;
    for ( i = (ServantLeaderInfo_o **)&v15->fields.userSvtId.fields.hiddenValue; ; ++i )
    {
      v17 = *i;
      if ( supportDeckId < 1 )
        goto LABEL_16;
      if ( !v17 )
        goto LABEL_24;
      if ( v17->fields.supportDeckId == supportDeckId )
      {
LABEL_16:
        if ( returnSupportServantType == 2 )
        {
          if ( !v17 )
            goto LABEL_24;
          if ( v17->fields.userSvtId && v17->fields.grandGraphId == followerGrandGraphId )
          {
            switch ( index )
            {
              case 2:
                return v17->fields.equipTarget3;
              case 1:
                return v17->fields.equipTarget2;
              case 0:
                return v17->fields.equipTarget1;
            }
          }
        }
        else if ( !v17 )
        {
          goto LABEL_24;
        }
        if ( v17->fields.classId == classPos )
          break;
      }
      if ( !--currentCryptoKey )
        return 0LL;
    }
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs(*i, 0LL);
    return v17->fields.equipTarget1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getEquipSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  ServantLeaderInfo_o **i; // x9
  ServantLeaderInfo_o *v15; // x10
  struct EquipTargetInfo_o *equipTarget1; // x10
  __int64 v18; // x19
  __int64 v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v20; // x0
  struct EquipTargetInfo_o *v21; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B024AD & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos);
    byte_4B024AD = 1;
  }
  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_25:
    sub_1BC3264(ServantLeaderInfoByReturnType, v12);
  if ( (int)*(_QWORD *)&ServantLeaderInfoByReturnType->max_length < 1 )
    return 0;
  v13 = (unsigned int)*(_QWORD *)&ServantLeaderInfoByReturnType->max_length;
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
    if ( returnSupportServantType == 2 )
      break;
    if ( !v15 )
      goto LABEL_25;
LABEL_15:
    if ( v15->fields.classId == classPos )
    {
      equipTarget1 = v15->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v19 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          goto LABEL_20;
        goto LABEL_21;
      }
    }
LABEL_17:
    if ( !--v13 )
      return 0;
  }
  if ( !v15 )
    goto LABEL_25;
  if ( !v15->fields.userSvtId || v15->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_15;
  v21 = v15->fields.equipTarget1;
  if ( !v21 )
    goto LABEL_25;
  v19 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
LABEL_20:
    j_il2cpp_runtime_class_init_0(v20);
LABEL_21:
  *(_QWORD *)&v22.fields.currentCryptoKey = v19;
  *(_QWORD *)&v22.fields.fakeValue = v18;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__getEquipUserSvtId(
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
  __int128 v18; // q1
  __int128 *v19; // x0
  __int64 v20; // x8
  __int128 v21; // q1
  __int128 v22[2]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v23[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v24; // [xsp+40h] [xbp-60h]
  __int128 v25; // [xsp+50h] [xbp-50h]

  if ( (byte_4B024AB & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&classPos);
    byte_4B024AB = 1;
  }
  result = (int64_t)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    goto LABEL_28;
  v13 = *(_QWORD *)(result + 24);
  v14 = result;
  result = 0LL;
  if ( (int)v13 >= 1 )
  {
    v13 = (unsigned int)v13;
    for ( i = (__int64 *)(v14 + 32); ; ++i )
    {
      v16 = *i;
      if ( supportDeckId < 1 )
        goto LABEL_31;
      if ( !v16 )
        goto LABEL_28;
      if ( *(_DWORD *)(v16 + 16) == supportDeckId )
      {
LABEL_31:
        if ( returnSupportServantType == 2 )
        {
          if ( !v16 )
            goto LABEL_28;
          if ( *(_QWORD *)(v16 + 40) && *(_DWORD *)(v16 + 268) == followerGrandGraphId )
          {
            v20 = *(_QWORD *)(v16 + 144);
            if ( v20 )
            {
              v21 = *(_OWORD *)(v20 + 40);
              v24 = *(_OWORD *)(v20 + 24);
              v25 = v21;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v19 = v23;
              v23[0] = v24;
              v23[1] = v25;
              return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v19,
                       0LL);
            }
LABEL_28:
            sub_1BC3264(result, v12);
          }
        }
        else if ( !v16 )
        {
          goto LABEL_28;
        }
        if ( *(_DWORD *)(v16 + 32) == classPos )
        {
          v17 = *(_QWORD *)(v16 + 144);
          if ( v17 )
            break;
        }
      }
      if ( !--v13 )
        return 0LL;
    }
    v18 = *(_OWORD *)(v17 + 40);
    v24 = *(_OWORD *)(v17 + 24);
    v25 = v18;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v19 = v22;
    v22[0] = v24;
    v22[1] = v25;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
             (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v19,
             0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  __int64 v12; // x9
  ServantLeaderInfo_array *v13; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v15; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1BC3264(ServantLeaderInfoByReturnType, v11);
  v12 = *(_QWORD *)&ServantLeaderInfoByReturnType->max_length;
  v13 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0LL;
  if ( (int)v12 >= 1 )
  {
    v12 = (unsigned int)v12;
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
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v15->fields.hp;
            return (int)ServantLeaderInfoByReturnType;
          }
        }
        else if ( !v15 )
        {
          goto LABEL_19;
        }
        if ( v15->fields.classId == classPos && v15->fields.userSvtId )
          goto LABEL_17;
      }
      if ( !--v12 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = 0;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getLimitCount(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  int v12; // w9
  ServantLeaderInfo_o *v13; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_17:
    sub_1BC3264(ServantLeaderInfoByReturnType, v9);
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( max_length == v12 )
      sub_1BC326C(ServantLeaderInfoByReturnType, v9, v10);
    v13 = ServantLeaderInfoByReturnType->m_Items[v12];
    if ( returnSupportServantType == 2 )
      break;
    if ( !v13 )
      goto LABEL_17;
LABEL_11:
    if ( v13->fields.classId == classPos && v13->fields.userSvtId )
      return v13->fields.limitCount;
    if ( max_length == ++v12 )
      return 0;
  }
  if ( !v13 )
    goto LABEL_17;
  if ( !v13->fields.userSvtId || v13->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_11;
  return v13->fields.limitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getLv(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  __int64 v12; // x9
  ServantLeaderInfo_array *v13; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v15; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1BC3264(ServantLeaderInfoByReturnType, v11);
  v12 = *(_QWORD *)&ServantLeaderInfoByReturnType->max_length;
  v13 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0LL;
  if ( (int)v12 >= 1 )
  {
    v12 = (unsigned int)v12;
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
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v15->fields.lv;
            return (int)ServantLeaderInfoByReturnType;
          }
        }
        else if ( !v15 )
        {
          goto LABEL_19;
        }
        if ( v15->fields.classId == classPos && v15->fields.userSvtId )
          goto LABEL_17;
      }
      if ( !--v12 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = 0;
        return (int)ServantLeaderInfoByReturnType;
      }
    }
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getMaxLv(
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
    sub_1BC3264(ServantLeaderInfoByReturnType, v11);
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
    if ( returnSupportServantType == 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_18;
LABEL_13:
    if ( ServantLeaderInfoByReturnType->fields.classId == classPos && ServantLeaderInfoByReturnType->fields.userSvtId )
      return ServantLeaderInfo__getLevelMax(ServantLeaderInfoByReturnType, 0LL);
LABEL_15:
    if ( !--userId )
      return 0;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_18;
  if ( !ServantLeaderInfoByReturnType->fields.userSvtId
    || ServantLeaderInfoByReturnType->fields.grandGraphId != followerGrandGraphId )
  {
    goto LABEL_13;
  }
  return ServantLeaderInfo__getLevelMax(ServantLeaderInfoByReturnType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantLeaderInfo_o *__fastcall OtherUserGameEntity__getServantLeaderInfo(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        bool isExist,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int max_length; // w9
  int i; // w10
  ServantLeaderInfo_o *v17; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)isExist);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1BC3264(ServantLeaderInfoByReturnType, v13);
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; max_length != i; ++i )
    {
      if ( max_length == i )
        sub_1BC326C(ServantLeaderInfoByReturnType, v13, v14);
      v17 = ServantLeaderInfoByReturnType->m_Items[i];
      if ( returnSupportServantType == 2 )
      {
        if ( !v17 )
          goto LABEL_19;
        if ( v17->fields.userSvtId && v17->fields.grandGraphId == followerGrandGraphId )
          return v17;
      }
      else if ( !v17 )
      {
        goto LABEL_19;
      }
      if ( v17->fields.classId == classPos
        && (supportDeckId < 1 || v17->fields.supportDeckId == supportDeckId)
        && (isExist || v17->fields.userSvtId) )
      {
        return v17;
      }
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OtherUserGameEntity__getSkillIdList(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w9
  int v12; // w10
  ServantLeaderInfo_o *v13; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_17:
    sub_1BC3264(ServantLeaderInfoByReturnType, v9);
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length < 1 )
    return 0LL;
  v12 = 0;
  while ( 1 )
  {
    if ( max_length == v12 )
      sub_1BC326C(ServantLeaderInfoByReturnType, v9, v10);
    v13 = ServantLeaderInfoByReturnType->m_Items[v12];
    if ( returnSupportServantType == 2 )
      break;
    if ( !v13 )
      goto LABEL_17;
LABEL_11:
    if ( v13->fields.classId == classPos && v13->fields.userSvtId )
      return ServantLeaderInfo__getSkillIdList(ServantLeaderInfoByReturnType->m_Items[v12], 0LL);
    if ( max_length == ++v12 )
      return 0LL;
  }
  if ( !v13 )
    goto LABEL_17;
  if ( !v13->fields.userSvtId || v13->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_11;
  return ServantLeaderInfo__getSkillIdList(ServantLeaderInfoByReturnType->m_Items[v12], 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserGameEntity__getSkillInfo(
        OtherUserGameEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 v15; // x1
  __int64 userId; // x8
  ServantLeaderInfo_o **p_classId; // x9
  BalanceConfig_c *v18; // x0
  SkillInfo_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B024B0 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BC3008(&SkillInfo___TypeInfo, v13);
    byte_4B024B0 = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1BC3264(ServantLeaderInfoByReturnType, v15);
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
LABEL_21:
            ServantLeaderInfo__getSkillInfo(ServantLeaderInfoByReturnType, skillInfoList, 0LL);
            return;
          }
        }
        else if ( !ServantLeaderInfoByReturnType )
        {
          goto LABEL_22;
        }
        if ( ServantLeaderInfoByReturnType->fields.classId == classPos
          && ServantLeaderInfoByReturnType->fields.userSvtId )
        {
          goto LABEL_21;
        }
      }
      --userId;
      ++p_classId;
    }
    while ( userId );
  }
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v19 = (SkillInfo_array *)sub_1BC30B0(SkillInfo___TypeInfo, (unsigned int)v18->static_fields->SvtSkillListMax);
  *skillInfoList = v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)skillInfoList, (int32_t)v19, v20, v21);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OtherUserGameEntity__getSkillLevelList(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w9
  int v12; // w10
  ServantLeaderInfo_o *v13; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_17:
    sub_1BC3264(ServantLeaderInfoByReturnType, v9);
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length < 1 )
    return 0LL;
  v12 = 0;
  while ( 1 )
  {
    if ( max_length == v12 )
      sub_1BC326C(ServantLeaderInfoByReturnType, v9, v10);
    v13 = ServantLeaderInfoByReturnType->m_Items[v12];
    if ( returnSupportServantType == 2 )
      break;
    if ( !v13 )
      goto LABEL_17;
LABEL_11:
    if ( v13->fields.classId == classPos && v13->fields.userSvtId )
      return ServantLeaderInfo__getSkillLevelList(ServantLeaderInfoByReturnType->m_Items[v12], 0LL);
    if ( max_length == ++v12 )
      return 0LL;
  }
  if ( !v13 )
    goto LABEL_17;
  if ( !v13->fields.userSvtId || v13->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_11;
  return ServantLeaderInfo__getSkillLevelList(ServantLeaderInfoByReturnType->m_Items[v12], 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  ServantLeaderInfo_o **i; // x9
  ServantLeaderInfo_o *v15; // x10
  __int64 v17; // x19
  __int64 v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B024AA & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos);
    byte_4B024AA = 1;
  }
  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1BC3264(ServantLeaderInfoByReturnType, v12);
  if ( (int)*(_QWORD *)&ServantLeaderInfoByReturnType->max_length < 1 )
    return 0;
  v13 = (unsigned int)*(_QWORD *)&ServantLeaderInfoByReturnType->max_length;
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
    if ( returnSupportServantType == 2 )
      break;
    if ( !v15 )
      goto LABEL_22;
LABEL_15:
    if ( v15->fields.classId == classPos && v15->fields.userSvtId )
      goto LABEL_19;
LABEL_17:
    if ( !--v13 )
      return 0;
  }
  if ( !v15 )
    goto LABEL_22;
  if ( !v15->fields.userSvtId || v15->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_15;
LABEL_19:
  v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v18;
  *(_QWORD *)&v19.fields.fakeValue = v17;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall OtherUserGameEntity__getTreasureDeviceInfo(
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
  const MethodInfo *v19; // x3

  if ( (byte_4B024B1 & 1) == 0 )
  {
    sub_1BC3008(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4B024B1 = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_20:
    sub_1BC3264(ServantLeaderInfoByReturnType, v14);
  if ( (int)ServantLeaderInfoByReturnType->fields.userId < 1 )
  {
LABEL_18:
    v17 = (TreasureDvcInfo_o *)sub_1BC3254(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v17, 0LL);
    *tdInfo = v17;
    sub_1BC2FAC((CGThumbnailListItem_o *)tdInfo, (int32_t)v17, v18, v19);
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
    if ( returnSupportServantType == 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_20;
LABEL_15:
    if ( ServantLeaderInfoByReturnType->fields.classId == classPos && ServantLeaderInfoByReturnType->fields.userSvtId )
      return ServantLeaderInfo__getTreasureDeviceInfo(ServantLeaderInfoByReturnType, tdInfo, 0LL);
LABEL_17:
    --userId;
    ++p_classId;
    if ( !userId )
      goto LABEL_18;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_20;
  if ( !ServantLeaderInfoByReturnType->fields.userSvtId
    || ServantLeaderInfoByReturnType->fields.grandGraphId != followerGrandGraphId )
  {
    goto LABEL_15;
  }
  return ServantLeaderInfo__getTreasureDeviceInfo(ServantLeaderInfoByReturnType, tdInfo, 0LL);
}


bool __fastcall OtherUserGameEntity__getTreasureDeviceInfo_41347988(
        OtherUserGameEntity_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int max_length; // w9
  int v16; // w10
  ServantLeaderInfo_o *v17; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)tdMaxLv);
  if ( !ServantLeaderInfoByReturnType )
LABEL_17:
    sub_1BC3264(ServantLeaderInfoByReturnType, v13);
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    *tdLv = 0;
    *tdMaxLv = 0;
    return 0;
  }
  v16 = 0;
  while ( 1 )
  {
    if ( max_length == v16 )
      sub_1BC326C(ServantLeaderInfoByReturnType, v13, v14);
    v17 = ServantLeaderInfoByReturnType->m_Items[v16];
    if ( returnSupportServantType == 2 )
      break;
    if ( !v17 )
      goto LABEL_17;
LABEL_11:
    if ( v17->fields.classId == classPos && v17->fields.userSvtId )
      return ServantLeaderInfo__getTreasureDeviceInfo_42459960(
               ServantLeaderInfoByReturnType->m_Items[v16],
               tdLv,
               tdMaxLv,
               0LL);
    if ( max_length == ++v16 )
      goto LABEL_14;
  }
  if ( !v17 )
    goto LABEL_17;
  if ( !v17->fields.userSvtId || v17->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_11;
  return ServantLeaderInfo__getTreasureDeviceInfo_42459960(
           ServantLeaderInfoByReturnType->m_Items[v16],
           tdLv,
           tdMaxLv,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OtherUserGameEntity__getTreasureDeviceLevelIcon(
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
    sub_1BC3264(ServantLeaderInfoByReturnType, v11);
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
    if ( returnSupportServantType == 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_18;
LABEL_13:
    if ( ServantLeaderInfoByReturnType->fields.classId == classPos && ServantLeaderInfoByReturnType->fields.userSvtId )
      return ServantLeaderInfo__getTreasureDeviceLevelIcon(ServantLeaderInfoByReturnType, 0LL);
LABEL_15:
    if ( !--userId )
      return 0;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_18;
  if ( !ServantLeaderInfoByReturnType->fields.userSvtId
    || ServantLeaderInfoByReturnType->fields.grandGraphId != followerGrandGraphId )
  {
    goto LABEL_13;
  }
  return ServantLeaderInfo__getTreasureDeviceLevelIcon(ServantLeaderInfoByReturnType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__getUpdatedAt(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v4; // x8

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_5;
  if ( !userSvtLeaderHash->max_length )
    sub_1BC326C(this, *(_QWORD *)&classPos, method);
  v4 = userSvtLeaderHash->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_1BC3264(this, classPos);
  return v4->fields.updatedAt;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall OtherUserGameEntity__getUserSvtId(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w9
  int v12; // w10
  ServantLeaderInfo_o *v13; // x11
  int64_t userSvtId; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_17:
    sub_1BC3264(ServantLeaderInfoByReturnType, v9);
  max_length = ServantLeaderInfoByReturnType->max_length;
  if ( max_length < 1 )
    return 0LL;
  v12 = 0;
  while ( 1 )
  {
    if ( max_length == v12 )
      sub_1BC326C(ServantLeaderInfoByReturnType, v9, v10);
    v13 = ServantLeaderInfoByReturnType->m_Items[v12];
    if ( returnSupportServantType == 2 )
    {
      if ( !v13 )
        goto LABEL_17;
      userSvtId = v13->fields.userSvtId;
      if ( userSvtId && v13->fields.grandGraphId == followerGrandGraphId )
        return userSvtId;
    }
    else if ( !v13 )
    {
      goto LABEL_17;
    }
    if ( v13->fields.classId == classPos )
      return v13->fields.userSvtId;
    if ( max_length == ++v12 )
      return 0LL;
  }
}


void __fastcall OtherUserGameEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B024B5 & 1) == 0 )
  {
    sub_1BC3008(&OtherUserGameEntity___c_TypeInfo, v1);
    byte_4B024B5 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(OtherUserGameEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  OtherUserGameEntity___c_TypeInfo->static_fields->__9 = (struct OtherUserGameEntity___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)OtherUserGameEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall OtherUserGameEntity___c___ctor(OtherUserGameEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


EquipTargetInfo_o *__fastcall OtherUserGameEntity___c___GetEquipInfo_b__49_1(
        OtherUserGameEntity___c_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BC3264(this, 0LL);
  return UserRecommendSupportInfo__GetEquipTarget(info, 0LL);
}


int64_t __fastcall OtherUserGameEntity___c___GetUserSvtId_b__22_1(
        OtherUserGameEntity___c_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BC3264(this, 0LL);
  return UserRecommendSupportInfo__GetUserServantId(info, 0LL);
}


void __fastcall OtherUserGameEntity___c__DisplayClass22_0___ctor(
        OtherUserGameEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall OtherUserGameEntity___c__DisplayClass22_0___GetUserSvtId_b__0(
        OtherUserGameEntity___c__DisplayClass22_0_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BC3264(this, 0LL);
  return info->fields.idx == this->fields.index;
}


void __fastcall OtherUserGameEntity___c__DisplayClass49_0___ctor(
        OtherUserGameEntity___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall OtherUserGameEntity___c__DisplayClass49_0___GetEquipInfo_b__0(
        OtherUserGameEntity___c__DisplayClass49_0_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BC3264(this, 0LL);
  return info->fields.idx == this->fields.index;
}