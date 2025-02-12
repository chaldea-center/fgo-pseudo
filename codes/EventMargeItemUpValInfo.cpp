void __fastcall EventMargeItemUpValInfo___ctor(
        EventMargeItemUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
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
  void *v13; // x1
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct ItemEntity_o *itemEntity; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct ItemEntity_o *v35; // x8

  if ( (byte_4BC7648 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, dropItemInfo);
    byte_4BC7648 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_1C1AE30(v5, v6);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = -1;
  v13 = StringLiteral_1/*""*/;
  this->fields.servantName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.servantName, (int64_t)v13, v7, v8, v9, v10, v11, v12);
  *(_WORD *)&this->fields.isFollower = 0;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.funcGroupEntity,
    (int64_t)funcGroupEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseFuncGroupEntity,
    (int64_t)baseFuncGroupEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  *(_OWORD *)&this->fields.baseFuncId = *(_OWORD *)&dropItemInfo->fields.baseFuncId;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemEntity, (int64_t)itemEntity, v29, v30, v31, v32, v33, v34);
  v35 = this->fields.itemEntity;
  if ( v35 )
    LODWORD(v35) = v35->fields.priority;
  this->fields.priority2 = (int)v35;
}


void __fastcall EventMargeItemUpValInfo___ctor_40102608(
        EventMargeItemUpValInfo_o *this,
        int32_t member,
        System_String_o *servantName,
        bool isFollower,
        bool isOtherUp,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct ItemEntity_o *itemEntity; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct ItemEntity_o *v42; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_1C1AE30(v13, v14);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = member;
  this->fields.servantName = servantName;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.servantName,
    (int64_t)servantName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.isFollower = isFollower;
  this->fields.isOtherUp = isOtherUp;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.funcGroupEntity,
    (int64_t)funcGroupEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseFuncGroupEntity,
    (int64_t)baseFuncGroupEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_OWORD *)&this->fields.baseFuncId = *(_OWORD *)&dropItemInfo->fields.baseFuncId;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemEntity, (int64_t)itemEntity, v36, v37, v38, v39, v40, v41);
  v42 = this->fields.itemEntity;
  if ( v42 )
    LODWORD(v42) = v42->fields.priority;
  this->fields.priority2 = (int)v42;
}


void __fastcall EventMargeItemUpValInfo___ctor_40102820(
        EventMargeItemUpValInfo_o *this,
        int32_t eventId,
        int32_t friendPointBonus,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.friendPointBonus = friendPointBonus;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  this->fields.isFriendPointBonus = 1;
}


void __fastcall EventMargeItemUpValInfo___ctor_40102900(
        EventMargeItemUpValInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  this->fields.eventId = eventId;
}


int32_t __fastcall EventMargeItemUpValInfo__CompMemberPriority(
        EventMargeItemUpValInfo_o *this,
        EventMargeItemUpValInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( !info )
    sub_1C1AE30(this, 0LL);
  if ( this->fields.isOtherUp == info->fields.isOtherUp )
  {
    v3 = info->fields.priority1 - this->fields.priority1;
    if ( !v3 )
      return this->fields.priority2 - info->fields.priority2;
    return v3;
  }
  else if ( this->fields.isOtherUp )
  {
    return 1;
  }
  else
  {
    return -1;
  }
}


int32_t __fastcall EventMargeItemUpValInfo__CompPartyPriority(
        EventMargeItemUpValInfo_o *this,
        EventMargeItemUpValInfo_o *info,
        const MethodInfo *method)
{
  int32_t member; // w8
  int32_t priority2; // w9
  int32_t v5; // w8

  member = this->fields.member;
  if ( (member & 0x80000000) == 0 )
  {
    if ( info )
    {
      priority2 = info->fields.member;
      if ( (priority2 & 0x80000000) == 0 )
        return member - priority2;
      goto LABEL_7;
    }
LABEL_15:
    sub_1C1AE30(this, info);
  }
  if ( !info )
    goto LABEL_15;
  priority2 = info->fields.member;
  if ( (priority2 & 0x80000000) != 0 )
  {
LABEL_8:
    v5 = info->fields.priority1 - this->fields.priority1;
    if ( v5 )
      return v5;
    member = this->fields.priority2;
    priority2 = info->fields.priority2;
    return member - priority2;
  }
LABEL_7:
  if ( member == priority2 )
    goto LABEL_8;
  if ( member < 0 )
    return 1;
  else
    return -1;
}


int32_t __fastcall EventMargeItemUpValInfo__CompPersonalPriority(
        EventMargeItemUpValInfo_o *this,
        EventMargeItemUpValInfo_o *info,
        const MethodInfo *method)
{
  int32_t priority1; // w9
  int32_t v4; // w10
  int32_t result; // w0

  if ( !info )
    sub_1C1AE30(this, 0LL);
  priority1 = this->fields.priority1;
  v4 = info->fields.priority1;
  result = v4 - priority1;
  if ( v4 == priority1 )
    return this->fields.priority2 - info->fields.priority2;
  return result;
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetColorString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL4 isOtherUp; // w20
  System_String_o **v6; // x8

  if ( (byte_4BC7649 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_10442/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/, v3);
    sub_1C1ABD4(&StringLiteral_10444/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/, v4);
    byte_4BC7649 = 1;
  }
  isOtherUp = this->fields.isOtherUp;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isOtherUp )
    v6 = (System_String_o **)&StringLiteral_10444/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/;
  else
    v6 = (System_String_o **)&StringLiteral_10442/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/;
  return LocalizationManager__Get(*v6, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetEventUpString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct FunctionGroupEntity_o *funcGroupEntity; // x0
  System_String_o *IconDetailText; // x20
  int32_t baseFuncType; // w8
  unsigned int v13; // w8
  int32_t addCount; // w19
  System_String_o *v15; // x20
  float v16; // s0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x20
  System_String_o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  int32_t v30; // w20
  int32_t v31; // w0
  System_String_o *v32; // x2
  int v33; // w1
  bool v34; // w3
  int32_t rateCount; // w19
  int32_t v36; // w19
  int32_t v37; // w20
  int32_t v38; // w21
  struct ItemEntity_o *itemEntity; // x8
  void **p_unit; // x8
  System_String_o *v41; // x19
  int32_t servantPoint; // [xsp+8h] [xbp-28h] BYREF
  float v43; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BC764F & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, method);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v3);
    sub_1C1ABD4(&float_TypeInfo, v4);
    sub_1C1ABD4(&StringLiteral_11712/*"SELECT_FP_NUM_UP"*/, v5);
    sub_1C1ABD4(&StringLiteral_10503/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v6);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v7);
    sub_1C1ABD4(&StringLiteral_10472/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, v8);
    sub_1C1ABD4(&StringLiteral_10504/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v9);
    byte_4BC764F = 1;
  }
  funcGroupEntity = this->fields.funcGroupEntity;
  if ( funcGroupEntity && funcGroupEntity->fields.isDispValue )
  {
    IconDetailText = FunctionGroupEntity__GetIconDetailText(funcGroupEntity, 0LL);
    if ( System_String__IsNullOrEmpty(IconDetailText, 0LL) )
    {
      baseFuncType = this->fields.baseFuncType;
      if ( baseFuncType <= 16 )
      {
        if ( baseFuncType != 1 )
        {
          if ( baseFuncType == 7 )
          {
            rateCount = this->fields.rateCount;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v32 = (System_String_o *)StringLiteral_1/*""*/;
            v33 = rateCount / 10;
            v34 = 1;
            v31 = 0;
            return LocalizationManager__GetEventPointInfo(v31, v33, v32, v34, 0LL);
          }
          if ( baseFuncType != 16 )
            goto LABEL_47;
        }
      }
      else
      {
        v13 = baseFuncType - 106;
        if ( v13 > 0x1A )
          goto LABEL_47;
        if ( ((1 << v13) & 0x4800320) == 0 )
        {
          if ( ((1 << v13) & 5) != 0 )
          {
            addCount = this->fields.addCount;
LABEL_34:
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v31 = 0;
LABEL_37:
            v32 = (System_String_o *)StringLiteral_1/*""*/;
            v33 = addCount;
LABEL_38:
            v34 = 0;
            return LocalizationManager__GetEventPointInfo(v31, v33, v32, v34, 0LL);
          }
          if ( v13 == 10 )
          {
            v36 = this->fields.rateCount;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v32 = (System_String_o *)StringLiteral_1/*""*/;
            v33 = v36 / 10;
            v31 = 0;
            goto LABEL_38;
          }
LABEL_47:
          v37 = this->fields.addCount;
          v38 = this->fields.rateCount;
          itemEntity = this->fields.itemEntity;
          if ( itemEntity )
            p_unit = (void **)&itemEntity->fields.unit;
          else
            p_unit = &StringLiteral_1/*""*/;
          v41 = (System_String_o *)*p_unit;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v31 = v37;
          v33 = v38;
          v32 = v41;
          goto LABEL_38;
        }
      }
      v30 = this->fields.addCount;
      addCount = this->fields.rateCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = v30;
      goto LABEL_37;
    }
    return IconDetailText;
  }
  if ( this->fields.friendPointBonus >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11712/*"SELECT_FP_NUM_UP"*/, 0LL);
    v16 = (double)this->fields.friendPointBonus / 1000.0;
    v43 = v16;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v43, v17, v18, v19);
    return System_String__Format(v15, v20, 0LL);
  }
  if ( this->fields.isServantPoint )
  {
    v23 = System_Int32__ToString((int)this + 116, 0LL);
    v24 = System_String__Concat_63040368((System_String_o *)StringLiteral_10504/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v23, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IconDetailText = LocalizationManager__Get(v24, 0LL);
    if ( this->fields.isFollower )
      return IconDetailText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10503/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
    servantPoint = this->fields.servantPoint;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantPoint, v26, v27, v28);
    return System_String__Format_63054740(v25, (Il2CppObject *)IconDetailText, v29, 0LL);
  }
  if ( this->fields.isFriendshipUpForCampaign )
  {
    addCount = this->fields.friendshipUpBonus;
    goto LABEL_34;
  }
  if ( this->fields.isStartingMemberFriendshipUp )
  {
    addCount = this->fields.startingMemberFriendshipUpBonus;
    goto LABEL_34;
  }
  if ( !this->fields.isNotClassBoard )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10472/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetItemName(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4BC764B & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC764B = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_name = &itemEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetNameTitleString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4BC764C & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC764C = 1;
  }
  baseFuncGroupEntity = this->fields.baseFuncGroupEntity;
  if ( baseFuncGroupEntity )
    p_name = &baseFuncGroupEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetNameTotalString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x8
  System_String_o **p_nameTotal; // x8

  if ( (byte_4BC764D & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC764D = 1;
  }
  baseFuncGroupEntity = this->fields.baseFuncGroupEntity;
  if ( baseFuncGroupEntity )
    p_nameTotal = &baseFuncGroupEntity->fields.nameTotal;
  else
    p_nameTotal = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_nameTotal;
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetServantName(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o **v6; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x0

  if ( (byte_4BC764A & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_10445/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/, v3);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    sub_1C1ABD4(&StringLiteral_10439/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/, v5);
    byte_4BC764A = 1;
  }
  if ( (this->fields.member & 0x80000000) != 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = (System_String_o **)&StringLiteral_10439/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
  if ( this->fields.isFollower )
    v6 = (System_String_o **)&StringLiteral_10445/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
  v7 = *v6;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v7, 0LL);
  return System_String__Format(v8, (Il2CppObject *)this->fields.servantName, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetTargetString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t baseFuncType; // w8
  int32_t targetType; // w8
  __int64 *v11; // x8

  if ( (byte_4BC764E & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_10448/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/, v3);
    sub_1C1ABD4(&StringLiteral_10450/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/, v4);
    sub_1C1ABD4(&StringLiteral_10449/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/, v5);
    sub_1C1ABD4(&StringLiteral_10451/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/, v6);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v7);
    byte_4BC764E = 1;
  }
  if ( this->fields.isOtherUp )
    return (System_String_o *)StringLiteral_1/*""*/;
  baseFuncType = this->fields.baseFuncType;
  if ( baseFuncType != 1 && baseFuncType != 111 && baseFuncType != 16 )
    return (System_String_o *)StringLiteral_1/*""*/;
  targetType = this->fields.targetType;
  if ( targetType <= 3 )
  {
    if ( !targetType )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_10451/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/;
      return LocalizationManager__Get((System_String_o *)*v11, 0LL);
    }
    if ( targetType == 3 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_10448/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v11, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( targetType == 7 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_10449/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/;
    return LocalizationManager__Get((System_String_o *)*v11, 0LL);
  }
  if ( targetType != 14 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = &StringLiteral_10450/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/;
  return LocalizationManager__Get((System_String_o *)*v11, 0LL);
}


void __fastcall EventMargeItemUpValInfo__InitFlag(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
}


bool __fastcall EventMargeItemUpValInfo__IsFriendPointUpBonus(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendPointBonus;
}


bool __fastcall EventMargeItemUpValInfo__IsFriendshipUpForCampaign(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendshipUpForCampaign;
}


bool __fastcall EventMargeItemUpValInfo__IsNotClassBoard(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNotClassBoard;
}


bool __fastcall EventMargeItemUpValInfo__IsServantPoint(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.isServantPoint;
}


bool __fastcall EventMargeItemUpValInfo__IsServantSelfValInfo(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.member != -1;
}


bool __fastcall EventMargeItemUpValInfo__IsStartingMemberFriendshipUp(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isStartingMemberFriendshipUp;
}


void __fastcall EventMargeItemUpValInfo__SetFriendshipUpBonus(
        EventMargeItemUpValInfo_o *this,
        int32_t eventId,
        int32_t friendshipUpBonus,
        const MethodInfo *method)
{
  this->fields.eventId = eventId;
  this->fields.friendshipUpBonus = friendshipUpBonus;
  this->fields.isFriendshipUpForCampaign = 1;
}


void __fastcall EventMargeItemUpValInfo__SetIcon(
        EventMargeItemUpValInfo_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  EventMargeItemUpValInfo_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int iconId; // w21
  int baseFuncType; // w8
  struct ItemEntity_o *itemEntity; // x8
  UISprite_o *v14; // x0
  int32_t v15; // w1
  int *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  UISprite_o *v19; // x0
  System_String_o *v20; // x1
  __int64 *v21; // x8
  _BOOL4 isStartingMemberFriendshipUpAll; // w20
  int v23; // [xsp+8h] [xbp-28h] BYREF
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4BC7650 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, sprite);
    sub_1C1ABD4(&StringLiteral_19999/*"func_group_icon_1009_starting"*/, v5);
    sub_1C1ABD4(&StringLiteral_19997/*"func_group_icon_"*/, v6);
    sub_1C1ABD4(&StringLiteral_19998/*"func_group_icon_1009"*/, v7);
    sub_1C1ABD4(&StringLiteral_20001/*"func_group_icon_1028"*/, v8);
    this = (EventMargeItemUpValInfo_o *)sub_1C1ABD4(&StringLiteral_20000/*"func_group_icon_1023_starting"*/, v9);
    byte_4BC7650 = 1;
  }
  v23 = 0;
  funcGroupEntity = v4->fields.funcGroupEntity;
  if ( funcGroupEntity )
  {
    iconId = funcGroupEntity->fields.iconId;
    v24 = iconId;
    if ( (iconId & 0x80000000) != 0 )
    {
      v16 = &v23;
      v23 = -iconId;
    }
    else
    {
      baseFuncType = v4->fields.baseFuncType;
      if ( baseFuncType >= 17 && ((unsigned int)(baseFuncType - 105) < 4 || baseFuncType == 132) )
      {
        if ( iconId )
        {
LABEL_11:
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v14 = sprite;
          v15 = iconId;
LABEL_18:
          AtlasManager__SetItem(v14, v15, 0LL);
          return;
        }
        itemEntity = v4->fields.itemEntity;
        if ( itemEntity )
        {
          iconId = itemEntity->fields.imageId;
          v24 = iconId;
          goto LABEL_11;
        }
LABEL_42:
        sub_1C1AE30(this, sprite);
      }
      v16 = &v24;
    }
    v17 = System_Int32__ToString((int32_t)v16, 0LL);
    v18 = System_String__Concat_63040368((System_String_o *)StringLiteral_19997/*"func_group_icon_"*/, v17, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v19 = sprite;
    v20 = v18;
    goto LABEL_33;
  }
  if ( v4->fields.friendPointBonus >= 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v15 = 12;
    v14 = sprite;
    goto LABEL_18;
  }
  if ( v4->fields.isServantPoint )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v21 = &StringLiteral_20001/*"func_group_icon_1028"*/;
LABEL_32:
    v20 = (System_String_o *)*v21;
    v19 = sprite;
LABEL_33:
    AtlasManager__SetEventUI(v19, v20, 0LL);
    return;
  }
  if ( v4->fields.isFriendshipUpForCampaign )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v21 = &StringLiteral_19998/*"func_group_icon_1009"*/;
    goto LABEL_32;
  }
  if ( v4->fields.isStartingMemberFriendshipUp )
  {
    isStartingMemberFriendshipUpAll = v4->fields.isStartingMemberFriendshipUpAll;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( isStartingMemberFriendshipUpAll )
      v21 = &StringLiteral_20000/*"func_group_icon_1023_starting"*/;
    else
      v21 = &StringLiteral_19999/*"func_group_icon_1009_starting"*/;
    goto LABEL_32;
  }
  if ( !sprite )
    goto LABEL_42;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
}


void __fastcall EventMargeItemUpValInfo__SetNotClassBoard(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  this->fields.isNotClassBoard = 1;
}


void __fastcall EventMargeItemUpValInfo__SetServantPointInfo(
        EventMargeItemUpValInfo_o *this,
        int32_t servantPoint,
        int32_t servantPointRank,
        bool isFollower,
        const MethodInfo *method)
{
  this->fields.servantPoint = servantPoint;
  this->fields.servantPointRank = servantPointRank;
  this->fields.isServantPoint = 1;
  this->fields.isFollower = isFollower;
}


void __fastcall EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(
        EventMargeItemUpValInfo_o *this,
        int32_t friendshipUpBonus,
        const MethodInfo *method)
{
  this->fields.startingMemberFriendshipUpBonus = friendshipUpBonus;
  this->fields.isStartingMemberFriendshipUp = 1;
  this->fields.isStartingMemberFriendshipUpAll = 0;
}


void __fastcall EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(
        EventMargeItemUpValInfo_o *this,
        int32_t friendshipUpBonus,
        const MethodInfo *method)
{
  this->fields.startingMemberFriendshipUpBonus = friendshipUpBonus;
  this->fields.isStartingMemberFriendshipUp = 1;
  this->fields.isStartingMemberFriendshipUpAll = 1;
}