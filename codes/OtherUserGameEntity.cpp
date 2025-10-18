void OtherUserGameEntity___ctor(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43563 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_long___ctor__);
    byte_4C43563 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_339EC04 *)Method_DataEntityBase_long___ctor__);
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
  __int64 userId; // x8
  ServantLeaderInfo_o **p_classId; // x9
  BalanceConfig_c *v16; // x0
  SkillInfo_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C43562 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&SkillInfo___TypeInfo);
    byte_4C43562 = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1C372B4(ServantLeaderInfoByReturnType);
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
            ServantLeaderInfo__GetAppendPassiveSkillInfo_43499912(ServantLeaderInfoByReturnType, skillInfoList, 0, 0);
            return;
          }
        }
      }
      --userId;
      ++p_classId;
    }
    while ( userId );
  }
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (SkillInfo_array *)sub_1C37100(
                             SkillInfo___TypeInfo,
                             (unsigned int)v16->static_fields->SvtAppendPassiveSkillListMax);
  *skillInfoList = v17;
  sub_1C36FFC((CGThumbnailListItem_o *)skillInfoList, (int32_t)v17, v18, v19);
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


EquipTargetInfo_o *OtherUserGameEntity__GetEquipInfo(
        OtherUserGameEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *userRecommendSupportHash; // x19
  System_Func_object__bool__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  OtherUserGameEntity___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__object__o *_9__49_1; // x20
  Il2CppObject *v13; // x21
  struct OtherUserGameEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C43561 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_EquipTargetInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__EquipTargetInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___);
    sub_1C37058(&System_Func_UserRecommendSupportInfo__EquipTargetInfo__TypeInfo);
    sub_1C37058(&System_Func_UserRecommendSupportInfo__bool__TypeInfo);
    sub_1C37058(&Method_OtherUserGameEntity___c__GetEquipInfo_b__49_1__);
    sub_1C37058(&Method_OtherUserGameEntity___c__DisplayClass49_0__GetEquipInfo_b__0__);
    sub_1C37058(&OtherUserGameEntity___c__DisplayClass49_0_TypeInfo);
    sub_1C37058(&OtherUserGameEntity___c_TypeInfo);
    byte_4C43561 = 1;
  }
  v5 = sub_1C372A4(OtherUserGameEntity___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = index;
  userRecommendSupportHash = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userRecommendSupportHash;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UserRecommendSupportInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_OtherUserGameEntity___c__DisplayClass49_0__GetEquipInfo_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         userRecommendSupportHash,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___);
  v10 = OtherUserGameEntity___c_TypeInfo;
  v11 = v9;
  if ( !OtherUserGameEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserGameEntity___c_TypeInfo);
    v10 = OtherUserGameEntity___c_TypeInfo;
  }
  _9__49_1 = (System_Func_object__object__o *)v10->static_fields->__9__49_1;
  if ( !_9__49_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = OtherUserGameEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__49_1 = (System_Func_object__object__o *)sub_1C372A4(System_Func_UserRecommendSupportInfo__EquipTargetInfo__TypeInfo);
    System_Func_object__object____ctor(_9__49_1, v13, Method_OtherUserGameEntity___c__GetEquipInfo_b__49_1__, 0);
    static_fields = OtherUserGameEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_1 = (struct System_Func_UserRecommendSupportInfo__EquipTargetInfo__o *)_9__49_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__49_1, (int32_t)_9__49_1, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__49_1,
                                                               (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__EquipTargetInfo___);
  return (EquipTargetInfo_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                v17,
                                (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_EquipTargetInfo___);
}


int32_t OtherUserGameEntity__GetEquipSvtId(OtherUserGameEntity_o *this, int32_t index, const MethodInfo *method)
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
  if ( (byte_4C4355D & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4355D = 1;
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
      sub_1C372BC(this);
    v8 = userRecommendSupportHash->m_Items[v7];
    if ( !v8 )
      goto LABEL_17;
    if ( v8->fields.idx == index )
    {
      this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0);
      if ( this )
        break;
    }
    max_length = userRecommendSupportHash->max_length;
    if ( (int)++v7 >= max_length )
      return 0;
  }
  this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0);
  if ( !this )
LABEL_17:
    sub_1C372B4(this);
  message = this->fields.message;
  pushUserSvtId = this->fields.pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = message;
  *(_QWORD *)&v12.fields.fakeValue = pushUserSvtId;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v12, 0);
}


int64_t OtherUserGameEntity__GetEquipUserSvtId(OtherUserGameEntity_o *this, int32_t index, const MethodInfo *method)
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
  if ( (byte_4C4355B & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C4355B = 1;
  }
  userRecommendSupportHash = v4->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
    goto LABEL_18;
  max_length = userRecommendSupportHash->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1C372BC(this);
    v8 = userRecommendSupportHash->m_Items[v7];
    if ( !v8 )
      goto LABEL_18;
    if ( v8->fields.idx == index )
    {
      this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0);
      if ( this )
        break;
    }
    max_length = userRecommendSupportHash->max_length;
    if ( (int)++v7 >= max_length )
      return 0;
  }
  this = (OtherUserGameEntity_o *)UserRecommendSupportInfo__GetEquipTarget(v8, 0);
  if ( !this )
LABEL_18:
    sub_1C372B4(this);
  v10 = *(_OWORD *)&this->fields.friendCode;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userName;
  *(_OWORD *)&v12.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v11, 0);
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


System_Int32_array *OtherUserGameEntity__GetRecommendSupportMessageIds(
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
  if ( (byte_4C4355E & 1) == 0 )
  {
    this = (OtherUserGameEntity_o *)sub_1C37058(&int___TypeInfo);
    byte_4C4355E = 1;
  }
  userRecommendSupportHash = v4->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
LABEL_13:
    sub_1C372B4(this);
  max_length = userRecommendSupportHash->max_length;
  if ( max_length < 1 )
    return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  v7 = 0;
  while ( 1 )
  {
    if ( max_length == v7 )
      sub_1C372BC(this);
    v8 = userRecommendSupportHash->m_Items[v7];
    if ( !v8 )
      goto LABEL_13;
    if ( v8->fields.idx == index )
      return v8->fields.adviceMessageIds;
    if ( max_length == ++v7 )
      return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  }
}


int32_t OtherUserGameEntity__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4C43556 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43556 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
      v5 = sub_1C3706C(&System_ArgumentOutOfRangeException_TypeInfo);
      v6 = (System_ArgumentOutOfRangeException_o *)sub_1C372A4(v5);
      v7 = (System_String_o *)sub_1C3706C(&StringLiteral_23092/*"returnSupportServantType"*/);
      v8 = (System_String_o *)sub_1C3706C(&StringLiteral_25455/*"予期されないReturnSupportServantTypeです。"*/);
      System_ArgumentOutOfRangeException___ctor_64588440(v6, v7, v8, 0);
      v9 = sub_1C3706C(&Method_OtherUserGameEntity_GetServantLeaderInfoByReturnType__);
      sub_1C37180(v6, v9);
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


int64_t OtherUserGameEntity__GetUserSvtId(OtherUserGameEntity_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *userRecommendSupportHash; // x19
  System_Func_object__bool__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  OtherUserGameEntity___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__long__o *_9__22_1; // x20
  Il2CppObject *v13; // x21
  struct OtherUserGameEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C43558 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_long___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__long___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___);
    sub_1C37058(&System_Func_UserRecommendSupportInfo__bool__TypeInfo);
    sub_1C37058(&System_Func_UserRecommendSupportInfo__long__TypeInfo);
    sub_1C37058(&Method_OtherUserGameEntity___c__GetUserSvtId_b__22_1__);
    sub_1C37058(&Method_OtherUserGameEntity___c__DisplayClass22_0__GetUserSvtId_b__0__);
    sub_1C37058(&OtherUserGameEntity___c__DisplayClass22_0_TypeInfo);
    sub_1C37058(&OtherUserGameEntity___c_TypeInfo);
    byte_4C43558 = 1;
  }
  v5 = sub_1C372A4(OtherUserGameEntity___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = index;
  userRecommendSupportHash = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userRecommendSupportHash;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UserRecommendSupportInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_OtherUserGameEntity___c__DisplayClass22_0__GetUserSvtId_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         userRecommendSupportHash,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_UserRecommendSupportInfo___);
  v10 = OtherUserGameEntity___c_TypeInfo;
  v11 = v9;
  if ( !OtherUserGameEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserGameEntity___c_TypeInfo);
    v10 = OtherUserGameEntity___c_TypeInfo;
  }
  _9__22_1 = (System_Func_object__long__o *)v10->static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = OtherUserGameEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__22_1 = (System_Func_object__long__o *)sub_1C372A4(System_Func_UserRecommendSupportInfo__long__TypeInfo);
    System_Func_object__long____ctor(_9__22_1, v13, Method_OtherUserGameEntity___c__GetUserSvtId_b__22_1__, 0);
    static_fields = OtherUserGameEntity___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = (struct System_Func_UserRecommendSupportInfo__long__o *)_9__22_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__22_1, (int32_t)_9__22_1, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__22_1,
                                                               (const MethodInfo_311E030 *)Method_System_Linq_Enumerable_Select_UserRecommendSupportInfo__long___);
  return System_Linq_Enumerable__FirstOrDefault_long_(
           v17,
           (const MethodInfo_310FF14 *)Method_System_Linq_Enumerable_FirstOrDefault_long___);
}


bool OtherUserGameEntity__IsSameSupportDeck(OtherUserGameEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  int32_t v4; // w20
  _BOOL4 v5; // w24
  ServantLeaderInfo_o *ServantLeaderInfo; // x22
  const MethodInfo *v7; // x6
  int64_t v8; // x0
  int64_t v9; // x21
  _BOOL4 v10; // w8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v12; // q0
  _BOOL4 v13; // w24
  __int64 v14; // x8
  __int128 v15; // q0
  _BOOL4 v16; // w8
  struct EquipTargetInfo_o *v17; // x8
  __int128 v18; // q0
  __int64 v19; // x8
  __int128 v20; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+80h] [xbp-60h]

  if ( (byte_4C43557 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C43557 = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = 1;
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(this, v4, 1, 0, 0, 0, v2);
    v8 = (int64_t)OtherUserGameEntity__getServantLeaderInfo(this, v4, 1, 1, 0, 0, v7);
    v9 = v8;
    if ( ServantLeaderInfo )
      v5 = ServantLeaderInfo->fields.userSvtId == 0;
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 40) == 0;
      if ( !v5 )
        goto LABEL_13;
    }
    else
    {
      v10 = 1;
      if ( !v5 )
        goto LABEL_13;
    }
    if ( !v10 )
    {
LABEL_13:
      if ( v10 || v5 )
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
    v12 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v25 = v26;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v25, 0);
    v13 = v8 == 0;
    if ( v9 )
      goto LABEL_23;
LABEL_28:
    v16 = 1;
    if ( !v13 )
      goto LABEL_30;
LABEL_29:
    if ( !v16 )
      goto LABEL_30;
LABEL_38:
    if ( ++v4 == 8 )
      return 1;
  }
  v13 = 1;
  if ( !v8 )
    goto LABEL_28;
LABEL_23:
  v14 = *(_QWORD *)(v9 + 144);
  if ( !v14 )
    goto LABEL_28;
  v15 = *(_OWORD *)(v14 + 40);
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v14 + 24);
  *(_OWORD *)&v26.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v24 = v26;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v24, 0);
  v16 = v8 == 0;
  if ( v13 )
    goto LABEL_29;
LABEL_30:
  if ( v16 || v13 )
    return 0;
  if ( !ServantLeaderInfo )
    goto LABEL_41;
  v17 = ServantLeaderInfo->fields.equipTarget1;
  if ( !v17 )
    goto LABEL_41;
  v18 = *(_OWORD *)&v17->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v17->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v23 = v26;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v23, 0);
  if ( !v9 || (v19 = *(_QWORD *)(v9 + 144)) == 0 )
LABEL_41:
    sub_1C372B4(v8);
  v20 = *(_OWORD *)(v19 + 40);
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(v19 + 24);
  *(_OWORD *)&v22.fields.fakeValue = v20;
  if ( v8 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v22, 0) )
    goto LABEL_38;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t OtherUserGameEntity__getAdjustAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v12; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v14; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v12 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length >= 1 )
  {
    max_length = (unsigned int)max_length;
    for ( i = v12->m_Items; ; ++i )
    {
      v14 = *i;
      if ( supportDeckId < 1 )
        goto LABEL_7;
      if ( !v14 )
        goto LABEL_19;
      if ( v14->fields.supportDeckId == supportDeckId )
      {
LABEL_7:
        if ( returnSupportServantType == 2 )
        {
          if ( !v14 )
            goto LABEL_19;
          if ( v14->fields.userSvtId && v14->fields.grandGraphId == followerGrandGraphId )
            goto LABEL_17;
        }
        else
        {
          if ( !v14 )
            goto LABEL_19;
          if ( v14->fields.classId == classPos && v14->fields.userSvtId )
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v14->fields.adjustAtk;
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
int32_t OtherUserGameEntity__getAdjustHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v12; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v14; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v12 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length >= 1 )
  {
    max_length = (unsigned int)max_length;
    for ( i = v12->m_Items; ; ++i )
    {
      v14 = *i;
      if ( supportDeckId < 1 )
        goto LABEL_7;
      if ( !v14 )
        goto LABEL_19;
      if ( v14->fields.supportDeckId == supportDeckId )
      {
LABEL_7:
        if ( returnSupportServantType == 2 )
        {
          if ( !v14 )
            goto LABEL_19;
          if ( v14->fields.userSvtId && v14->fields.grandGraphId == followerGrandGraphId )
            goto LABEL_17;
        }
        else
        {
          if ( !v14 )
            goto LABEL_19;
          if ( v14->fields.classId == classPos && v14->fields.userSvtId )
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v14->fields.adjustHp;
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
int32_t OtherUserGameEntity__getAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v12; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v14; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v12 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length >= 1 )
  {
    max_length = (unsigned int)max_length;
    for ( i = v12->m_Items; ; ++i )
    {
      v14 = *i;
      if ( supportDeckId < 1 )
        goto LABEL_7;
      if ( !v14 )
        goto LABEL_19;
      if ( v14->fields.supportDeckId == supportDeckId )
      {
LABEL_7:
        if ( returnSupportServantType == 2 )
        {
          if ( !v14 )
            goto LABEL_19;
          if ( v14->fields.userSvtId && v14->fields.grandGraphId == followerGrandGraphId )
            goto LABEL_17;
        }
        else
        {
          if ( !v14 )
            goto LABEL_19;
          if ( v14->fields.classId == classPos && v14->fields.userSvtId )
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v14->fields.atk;
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
int32_t OtherUserGameEntity__getEquipAtk(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v12; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v14; // x10
  struct EquipTargetInfo_o *equipTarget1; // x10
  struct EquipTargetInfo_o *v16; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v12 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length < 1 )
    return (int)ServantLeaderInfoByReturnType;
  max_length = (unsigned int)max_length;
  for ( i = v12->m_Items; ; ++i )
  {
    v14 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v14 )
        goto LABEL_22;
      if ( v14->fields.supportDeckId != supportDeckId )
        goto LABEL_16;
    }
    if ( returnSupportServantType == 2 )
      break;
    if ( !v14 )
      goto LABEL_22;
    if ( v14->fields.classId == classPos )
    {
      if ( v14->fields.userSvtId )
      {
        equipTarget1 = v14->fields.equipTarget1;
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
  if ( !v14 )
    goto LABEL_22;
  if ( !v14->fields.userSvtId || v14->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_16;
  v16 = v14->fields.equipTarget1;
  if ( !v16 )
    goto LABEL_22;
  LODWORD(ServantLeaderInfoByReturnType) = v16->fields.atk;
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t OtherUserGameEntity__getEquipExp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v10; // x8
  ServantLeaderInfo_o **m_Items; // x8
  ServantLeaderInfo_o *v12; // x10
  struct EquipTargetInfo_o *v13; // x10
  struct EquipTargetInfo_o *equipTarget1; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_19;
  max_length = ServantLeaderInfoByReturnType->max_length;
  v10 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length < 1 )
    return (int)ServantLeaderInfoByReturnType;
  max_length = (unsigned int)max_length;
  m_Items = v10->m_Items;
  do
  {
    v12 = *m_Items;
    if ( returnSupportServantType == 2 )
    {
      if ( !v12 )
        goto LABEL_19;
      if ( v12->fields.userSvtId && v12->fields.grandGraphId == followerGrandGraphId )
      {
        equipTarget1 = v12->fields.equipTarget1;
        if ( equipTarget1 )
        {
          LODWORD(ServantLeaderInfoByReturnType) = equipTarget1->fields.exp;
          return (int)ServantLeaderInfoByReturnType;
        }
LABEL_19:
        sub_1C372B4(ServantLeaderInfoByReturnType);
      }
    }
    else
    {
      if ( !v12 )
        goto LABEL_19;
      if ( v12->fields.classId == classPos )
      {
        if ( v12->fields.userSvtId )
        {
          v13 = v12->fields.equipTarget1;
          if ( v13 )
          {
            LODWORD(ServantLeaderInfoByReturnType) = v13->fields.exp;
            return (int)ServantLeaderInfoByReturnType;
          }
        }
      }
    }
    --max_length;
    ++m_Items;
  }
  while ( max_length );
  LODWORD(ServantLeaderInfoByReturnType) = 0;
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
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v12; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v14; // x10
  struct EquipTargetInfo_o *equipTarget1; // x10
  struct EquipTargetInfo_o *v16; // x8

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v12 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length < 1 )
    return (int)ServantLeaderInfoByReturnType;
  max_length = (unsigned int)max_length;
  for ( i = v12->m_Items; ; ++i )
  {
    v14 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v14 )
        goto LABEL_22;
      if ( v14->fields.supportDeckId != supportDeckId )
        goto LABEL_16;
    }
    if ( returnSupportServantType == 2 )
      break;
    if ( !v14 )
      goto LABEL_22;
    if ( v14->fields.classId == classPos )
    {
      if ( v14->fields.userSvtId )
      {
        equipTarget1 = v14->fields.equipTarget1;
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
  if ( !v14 )
    goto LABEL_22;
  if ( !v14->fields.userSvtId || v14->fields.grandGraphId != followerGrandGraphId )
    goto LABEL_16;
  v16 = v14->fields.equipTarget1;
  if ( !v16 )
    goto LABEL_22;
  LODWORD(ServantLeaderInfoByReturnType) = v16->fields.hp;
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
  il2cpp_array_size_t max_length; // x8
  ServantLeaderInfo_array *v14; // x24
  unsigned __int64 v15; // x26
  ServantLeaderInfo_o **m_Items; // x27
  ServantLeaderInfo_o *v17; // x25

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_24:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v14 = ServantLeaderInfoByReturnType;
  if ( (int)max_length < 1 )
    return 0;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)max_length )
      sub_1C372BC(ServantLeaderInfoByReturnType);
    m_Items = v14->m_Items;
    v17 = v14->m_Items[v15];
    if ( supportDeckId >= 1 )
    {
      if ( !v17 )
        goto LABEL_24;
      if ( v17->fields.supportDeckId != supportDeckId )
        goto LABEL_18;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v17 )
      goto LABEL_24;
    if ( v17->fields.userSvtId && v17->fields.grandGraphId == followerGrandGraphId )
    {
      ServantLeaderInfo__SetSkillChangeInfo(m_Items[v15], 0);
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
LABEL_18:
    LODWORD(max_length) = v14->max_length;
    if ( (__int64)++v15 >= (int)max_length )
      return 0;
  }
  if ( !v17 )
    goto LABEL_24;
  if ( v17->fields.classId != classPos )
    goto LABEL_18;
  ServantLeaderInfo__SetEquipImagePartsGroupIdxs(m_Items[v15], 0);
  return v17->fields.equipTarget1;
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
  __int64 max_length; // x8
  ServantLeaderInfo_o **i; // x9
  ServantLeaderInfo_o *v14; // x10
  struct EquipTargetInfo_o *v15; // x10
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v18; // x19
  __int64 v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C4355C & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4355C = 1;
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
    v14 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v14 )
        goto LABEL_25;
      if ( v14->fields.supportDeckId != supportDeckId )
        goto LABEL_17;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v14 )
      goto LABEL_25;
    if ( v14->fields.userSvtId && v14->fields.grandGraphId == followerGrandGraphId )
    {
      equipTarget1 = v14->fields.equipTarget1;
      if ( equipTarget1 )
      {
        v19 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          goto LABEL_21;
        goto LABEL_22;
      }
LABEL_25:
      sub_1C372B4(ServantLeaderInfoByReturnType);
    }
LABEL_17:
    if ( !--max_length )
      return 0;
  }
  if ( !v14 )
    goto LABEL_25;
  if ( v14->fields.classId != classPos )
    goto LABEL_17;
  v15 = v14->fields.equipTarget1;
  if ( !v15 )
    goto LABEL_17;
  v19 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
LABEL_21:
    j_il2cpp_runtime_class_init_0(v20);
LABEL_22:
  *(_QWORD *)&v21.fields.currentCryptoKey = v19;
  *(_QWORD *)&v21.fields.fakeValue = v18;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v21, 0);
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
  __int64 v12; // x9
  int64_t v13; // x8
  __int64 *i; // x8
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x8
  __int128 v18; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v19; // x0
  __int128 v20; // q1
  _OWORD v21[2]; // [xsp+0h] [xbp-A0h] BYREF
  _OWORD v22[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v23; // [xsp+40h] [xbp-60h]
  __int128 v24; // [xsp+50h] [xbp-50h]

  if ( (byte_4C4355A & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C4355A = 1;
  }
  result = (int64_t)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    goto LABEL_28;
  v12 = *(_QWORD *)(result + 24);
  v13 = result;
  result = 0;
  if ( (int)v12 < 1 )
    return result;
  v12 = (unsigned int)v12;
  for ( i = (__int64 *)(v13 + 32); ; ++i )
  {
    v15 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v15 )
        goto LABEL_28;
      if ( *(_DWORD *)(v15 + 16) != supportDeckId )
        goto LABEL_17;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v15 )
      goto LABEL_28;
    if ( *(_QWORD *)(v15 + 40) && *(_DWORD *)(v15 + 268) == followerGrandGraphId )
    {
      v17 = *(_QWORD *)(v15 + 144);
      if ( v17 )
      {
        v18 = *(_OWORD *)(v17 + 40);
        v23 = *(_OWORD *)(v17 + 24);
        v24 = v18;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v22;
        v22[0] = v23;
        v22[1] = v24;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(v19, 0);
      }
LABEL_28:
      sub_1C372B4(result);
    }
LABEL_17:
    if ( !--v12 )
      return 0;
  }
  if ( !v15 )
    goto LABEL_28;
  if ( *(_DWORD *)(v15 + 32) != classPos )
    goto LABEL_17;
  v16 = *(_QWORD *)(v15 + 144);
  if ( !v16 )
    goto LABEL_17;
  v20 = *(_OWORD *)(v16 + 40);
  v23 = *(_OWORD *)(v16 + 24);
  v24 = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v21;
  v21[0] = v23;
  v21[1] = v24;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(v19, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t OtherUserGameEntity__getHp(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v12; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v14; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v12 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length >= 1 )
  {
    max_length = (unsigned int)max_length;
    for ( i = v12->m_Items; ; ++i )
    {
      v14 = *i;
      if ( supportDeckId < 1 )
        goto LABEL_7;
      if ( !v14 )
        goto LABEL_19;
      if ( v14->fields.supportDeckId == supportDeckId )
      {
LABEL_7:
        if ( returnSupportServantType == 2 )
        {
          if ( !v14 )
            goto LABEL_19;
          if ( v14->fields.userSvtId && v14->fields.grandGraphId == followerGrandGraphId )
            goto LABEL_17;
        }
        else
        {
          if ( !v14 )
            goto LABEL_19;
          if ( v14->fields.classId == classPos && v14->fields.userSvtId )
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v14->fields.hp;
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
int32_t OtherUserGameEntity__getLimitCount(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v10; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v12; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_16:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v10 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length >= 1 )
  {
    max_length = (unsigned int)max_length;
    for ( i = v10->m_Items; ; ++i )
    {
      v12 = *i;
      if ( returnSupportServantType == 2 )
      {
        if ( !v12 )
          goto LABEL_16;
        if ( v12->fields.userSvtId && v12->fields.grandGraphId == followerGrandGraphId )
          goto LABEL_14;
      }
      else
      {
        if ( !v12 )
          goto LABEL_16;
        if ( v12->fields.classId == classPos && v12->fields.userSvtId )
        {
LABEL_14:
          LODWORD(ServantLeaderInfoByReturnType) = v12->fields.limitCount;
          return (int)ServantLeaderInfoByReturnType;
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
int32_t OtherUserGameEntity__getLv(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v12; // x8
  ServantLeaderInfo_o **i; // x8
  ServantLeaderInfo_o *v14; // x10

  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_19:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  max_length = ServantLeaderInfoByReturnType->max_length;
  v12 = ServantLeaderInfoByReturnType;
  ServantLeaderInfoByReturnType = 0;
  if ( (int)max_length >= 1 )
  {
    max_length = (unsigned int)max_length;
    for ( i = v12->m_Items; ; ++i )
    {
      v14 = *i;
      if ( supportDeckId < 1 )
        goto LABEL_7;
      if ( !v14 )
        goto LABEL_19;
      if ( v14->fields.supportDeckId == supportDeckId )
      {
LABEL_7:
        if ( returnSupportServantType == 2 )
        {
          if ( !v14 )
            goto LABEL_19;
          if ( v14->fields.userSvtId && v14->fields.grandGraphId == followerGrandGraphId )
            goto LABEL_17;
        }
        else
        {
          if ( !v14 )
            goto LABEL_19;
          if ( v14->fields.classId == classPos && v14->fields.userSvtId )
          {
LABEL_17:
            LODWORD(ServantLeaderInfoByReturnType) = v14->fields.lv;
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
  __int64 userId; // x8
  ServantLeaderInfo_o **i; // x9

  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_18:
    sub_1C372B4(ServantLeaderInfoByReturnType);
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
  int64_t userId; // x9
  ServantLeaderInfo_o *v14; // x8
  ServantLeaderInfo_o **p_classId; // x8

  result = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)isExist);
  if ( !result )
LABEL_18:
    sub_1C372B4(result);
  userId = result->fields.userId;
  v14 = result;
  result = 0;
  if ( (int)userId >= 1 )
  {
    userId = (unsigned int)userId;
    p_classId = (ServantLeaderInfo_o **)&v14->fields.classId;
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
System_Int32_array *OtherUserGameEntity__getSkillIdList(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 userId; // x8
  ServantLeaderInfo_o **i; // x9

  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_15:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  if ( (int)ServantLeaderInfoByReturnType->fields.userId < 1 )
    return 0;
  userId = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
  for ( i = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId; ; ++i )
  {
    ServantLeaderInfoByReturnType = *i;
    if ( returnSupportServantType != 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_15;
    if ( ServantLeaderInfoByReturnType->fields.userSvtId
      && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
    {
      return ServantLeaderInfo__getSkillIdList(ServantLeaderInfoByReturnType, 0);
    }
LABEL_12:
    if ( !--userId )
      return 0;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_15;
  if ( ServantLeaderInfoByReturnType->fields.classId != classPos || !ServantLeaderInfoByReturnType->fields.userSvtId )
    goto LABEL_12;
  return ServantLeaderInfo__getSkillIdList(ServantLeaderInfoByReturnType, 0);
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
  __int64 userId; // x8
  ServantLeaderInfo_o **p_classId; // x9
  BalanceConfig_c *v16; // x0
  SkillInfo_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C4355F & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&SkillInfo___TypeInfo);
    byte_4C4355F = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1C372B4(ServantLeaderInfoByReturnType);
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
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (SkillInfo_array *)sub_1C37100(SkillInfo___TypeInfo, (unsigned int)v16->static_fields->SvtSkillListMax);
  *skillInfoList = v17;
  sub_1C36FFC((CGThumbnailListItem_o *)skillInfoList, (int32_t)v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *OtherUserGameEntity__getSkillLevelList(
        OtherUserGameEntity_o *this,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 userId; // x8
  ServantLeaderInfo_o **i; // x9

  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_15:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  if ( (int)ServantLeaderInfoByReturnType->fields.userId < 1 )
    return 0;
  userId = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
  for ( i = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId; ; ++i )
  {
    ServantLeaderInfoByReturnType = *i;
    if ( returnSupportServantType != 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_15;
    if ( ServantLeaderInfoByReturnType->fields.userSvtId
      && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
    {
      return ServantLeaderInfo__getSkillLevelList(ServantLeaderInfoByReturnType, 0);
    }
LABEL_12:
    if ( !--userId )
      return 0;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_15;
  if ( ServantLeaderInfoByReturnType->fields.classId != classPos || !ServantLeaderInfoByReturnType->fields.userSvtId )
    goto LABEL_12;
  return ServantLeaderInfo__getSkillLevelList(ServantLeaderInfoByReturnType, 0);
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
  __int64 max_length; // x8
  ServantLeaderInfo_o **i; // x9
  ServantLeaderInfo_o *v14; // x10
  __int64 v16; // x19
  __int64 v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C43559 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C43559 = 1;
  }
  ServantLeaderInfoByReturnType = OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_22:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  if ( (int)ServantLeaderInfoByReturnType->max_length < 1 )
    return 0;
  max_length = (unsigned int)ServantLeaderInfoByReturnType->max_length;
  for ( i = ServantLeaderInfoByReturnType->m_Items; ; ++i )
  {
    v14 = *i;
    if ( supportDeckId >= 1 )
    {
      if ( !v14 )
        goto LABEL_22;
      if ( v14->fields.supportDeckId != supportDeckId )
        goto LABEL_17;
    }
    if ( returnSupportServantType != 2 )
      break;
    if ( !v14 )
      goto LABEL_22;
    if ( v14->fields.userSvtId && v14->fields.grandGraphId == followerGrandGraphId )
      goto LABEL_19;
LABEL_17:
    if ( !--max_length )
      return 0;
  }
  if ( !v14 )
    goto LABEL_22;
  if ( v14->fields.classId != classPos || !v14->fields.userSvtId )
    goto LABEL_17;
LABEL_19:
  v17 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v17;
  *(_QWORD *)&v18.fields.fakeValue = v16;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v18, 0);
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
  __int64 userId; // x8
  ServantLeaderInfo_o **p_classId; // x9
  TreasureDvcInfo_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C43560 & 1) == 0 )
  {
    sub_1C37058(&TreasureDvcInfo_TypeInfo);
    byte_4C43560 = 1;
  }
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&classPos);
  if ( !ServantLeaderInfoByReturnType )
LABEL_20:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  if ( (int)ServantLeaderInfoByReturnType->fields.userId < 1 )
  {
LABEL_18:
    v16 = (TreasureDvcInfo_o *)sub_1C372A4(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v16, 0);
    *tdInfo = v16;
    sub_1C36FFC((CGThumbnailListItem_o *)tdInfo, (int32_t)v16, v17, v18);
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


bool OtherUserGameEntity__getTreasureDeviceInfo_42442468(
        OtherUserGameEntity_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        int32_t classPos,
        int32_t returnSupportServantType,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfoByReturnType; // x0
  __int64 userId; // x8
  ServantLeaderInfo_o **p_classId; // x9

  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           (const MethodInfo *)tdMaxLv);
  if ( !ServantLeaderInfoByReturnType )
LABEL_15:
    sub_1C372B4(ServantLeaderInfoByReturnType);
  if ( (int)ServantLeaderInfoByReturnType->fields.userId < 1 )
  {
LABEL_13:
    *tdLv = 0;
    *tdMaxLv = 0;
    return 0;
  }
  userId = (unsigned int)ServantLeaderInfoByReturnType->fields.userId;
  p_classId = (ServantLeaderInfo_o **)&ServantLeaderInfoByReturnType->fields.classId;
  while ( 1 )
  {
    ServantLeaderInfoByReturnType = *p_classId;
    if ( returnSupportServantType != 2 )
      break;
    if ( !ServantLeaderInfoByReturnType )
      goto LABEL_15;
    if ( ServantLeaderInfoByReturnType->fields.userSvtId
      && ServantLeaderInfoByReturnType->fields.grandGraphId == followerGrandGraphId )
    {
      return ServantLeaderInfo__getTreasureDeviceInfo_43490244(ServantLeaderInfoByReturnType, tdLv, tdMaxLv, 0);
    }
LABEL_12:
    --userId;
    ++p_classId;
    if ( !userId )
      goto LABEL_13;
  }
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_15;
  if ( ServantLeaderInfoByReturnType->fields.classId != classPos || !ServantLeaderInfoByReturnType->fields.userSvtId )
    goto LABEL_12;
  return ServantLeaderInfo__getTreasureDeviceInfo_43490244(ServantLeaderInfoByReturnType, tdLv, tdMaxLv, 0);
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
  __int64 userId; // x8
  ServantLeaderInfo_o **i; // x9

  ServantLeaderInfoByReturnType = (ServantLeaderInfo_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
LABEL_18:
    sub_1C372B4(ServantLeaderInfoByReturnType);
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
    sub_1C372BC(this);
  v4 = userSvtLeaderHash->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
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
  __int64 v9; // x9
  int64_t v10; // x8
  __int64 *i; // x8
  __int64 v12; // x10

  result = (int64_t)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
LABEL_15:
    sub_1C372B4(result);
  v9 = *(_QWORD *)(result + 24);
  v10 = result;
  result = 0;
  if ( (int)v9 >= 1 )
  {
    v9 = (unsigned int)v9;
    for ( i = (__int64 *)(v10 + 32); ; ++i )
    {
      v12 = *i;
      if ( returnSupportServantType == 2 )
      {
        if ( !v12 )
          goto LABEL_15;
        result = *(_QWORD *)(v12 + 40);
        if ( result && *(_DWORD *)(v12 + 268) == followerGrandGraphId )
          return result;
      }
      else
      {
        if ( !v12 )
          goto LABEL_15;
        if ( *(_DWORD *)(v12 + 32) == classPos )
          return *(_QWORD *)(v12 + 40);
      }
      if ( !--v9 )
        return 0;
    }
  }
  return result;
}


void OtherUserGameEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43564 & 1) == 0 )
  {
    sub_1C37058(&OtherUserGameEntity___c_TypeInfo);
    byte_4C43564 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(OtherUserGameEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  OtherUserGameEntity___c_TypeInfo->static_fields->__9 = (struct OtherUserGameEntity___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)OtherUserGameEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void OtherUserGameEntity___c___ctor(OtherUserGameEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


EquipTargetInfo_o *OtherUserGameEntity___c___GetEquipInfo_b__49_1(
        OtherUserGameEntity___c_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C372B4(this);
  return UserRecommendSupportInfo__GetEquipTarget(info, 0);
}


int64_t OtherUserGameEntity___c___GetUserSvtId_b__22_1(
        OtherUserGameEntity___c_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C372B4(this);
  return UserRecommendSupportInfo__GetUserServantId(info, 0);
}


void OtherUserGameEntity___c__DisplayClass22_0___ctor(
        OtherUserGameEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool OtherUserGameEntity___c__DisplayClass22_0___GetUserSvtId_b__0(
        OtherUserGameEntity___c__DisplayClass22_0_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C372B4(this);
  return info->fields.idx == this->fields.index;
}


void OtherUserGameEntity___c__DisplayClass49_0___ctor(
        OtherUserGameEntity___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool OtherUserGameEntity___c__DisplayClass49_0___GetEquipInfo_b__0(
        OtherUserGameEntity___c__DisplayClass49_0_o *this,
        UserRecommendSupportInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C372B4(this);
  return info->fields.idx == this->fields.index;
}