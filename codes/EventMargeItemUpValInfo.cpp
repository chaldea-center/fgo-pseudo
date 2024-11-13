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

  if ( (byte_4B15D98 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, dropItemInfo, method);
    byte_4B15D98 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_1BCAA3C(v5, v6);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = -1;
  v13 = StringLiteral_1/*""*/;
  this->fields.servantName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantName, (int64_t)v13, v7, v8, v9, v10, v11, v12);
  *(_WORD *)&this->fields.isFollower = 0;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemEntity, (int64_t)itemEntity, v29, v30, v31, v32, v33, v34);
  v35 = this->fields.itemEntity;
  if ( v35 )
    LODWORD(v35) = v35->fields.priority;
  this->fields.priority2 = (int)v35;
}


void __fastcall EventMargeItemUpValInfo___ctor_39609440(
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
    sub_1BCAA3C(v13, v14);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = member;
  this->fields.servantName = servantName;
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemEntity, (int64_t)itemEntity, v36, v37, v38, v39, v40, v41);
  v42 = this->fields.itemEntity;
  if ( v42 )
    LODWORD(v42) = v42->fields.priority;
  this->fields.priority2 = (int)v42;
}


void __fastcall EventMargeItemUpValInfo___ctor_39609652(
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


void __fastcall EventMargeItemUpValInfo___ctor_39609732(
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, info);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _BOOL4 isOtherUp; // w20
  System_String_o **v9; // x8

  if ( (byte_4B15D99 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10387/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_10389/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/, v6, v7);
    byte_4B15D99 = 1;
  }
  isOtherUp = this->fields.isOtherUp;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  if ( isOtherUp )
    v9 = (System_String_o **)&StringLiteral_10389/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/;
  else
    v9 = (System_String_o **)&StringLiteral_10387/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/;
  return LocalizationManager__Get(*v9, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetEventUpString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct FunctionGroupEntity_o *funcGroupEntity; // x0
  System_String_o *IconDetailText; // x20
  int32_t baseFuncType; // w8
  unsigned int v21; // w8
  int32_t addCount; // w19
  System_String_o *v23; // x20
  float v24; // s0
  Il2CppObject *v25; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x20
  __int64 v31; // x1
  System_String_o *v32; // x21
  Il2CppObject *v33; // x0
  int32_t v34; // w20
  int32_t v35; // w0
  System_String_o *v36; // x2
  int v37; // w1
  bool v38; // w3
  int32_t rateCount; // w19
  int32_t v40; // w19
  int32_t v41; // w20
  int32_t v42; // w21
  struct ItemEntity_o *itemEntity; // x8
  void **p_unit; // x8
  System_String_o *v45; // x19
  int32_t servantPoint; // [xsp+8h] [xbp-28h] BYREF
  float v47; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15D9F & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&float_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_11642/*"SELECT_FP_NUM_UP"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_10442/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_10412/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_10443/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v16, v17);
    byte_4B15D9F = 1;
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
            v36 = (System_String_o *)StringLiteral_1/*""*/;
            v37 = rateCount / 10;
            v38 = 1;
            v35 = 0;
            return LocalizationManager__GetEventPointInfo(v35, v37, v36, v38, 0LL);
          }
          if ( baseFuncType != 16 )
            goto LABEL_47;
        }
      }
      else
      {
        v21 = baseFuncType - 106;
        if ( v21 > 0x1A )
          goto LABEL_47;
        if ( ((1 << v21) & 0x4800320) == 0 )
        {
          if ( ((1 << v21) & 5) != 0 )
          {
            addCount = this->fields.addCount;
LABEL_34:
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
            v35 = 0;
LABEL_37:
            v36 = (System_String_o *)StringLiteral_1/*""*/;
            v37 = addCount;
LABEL_38:
            v38 = 0;
            return LocalizationManager__GetEventPointInfo(v35, v37, v36, v38, 0LL);
          }
          if ( v21 == 10 )
          {
            v40 = this->fields.rateCount;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
            v36 = (System_String_o *)StringLiteral_1/*""*/;
            v37 = v40 / 10;
            v35 = 0;
            goto LABEL_38;
          }
LABEL_47:
          v41 = this->fields.addCount;
          v42 = this->fields.rateCount;
          itemEntity = this->fields.itemEntity;
          if ( itemEntity )
            p_unit = (void **)&itemEntity->fields.unit;
          else
            p_unit = &StringLiteral_1/*""*/;
          v45 = (System_String_o *)*p_unit;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
          v35 = v41;
          v37 = v42;
          v36 = v45;
          goto LABEL_38;
        }
      }
      v34 = this->fields.addCount;
      addCount = this->fields.rateCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v35 = v34;
      goto LABEL_37;
    }
    return IconDetailText;
  }
  if ( this->fields.friendPointBonus >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11642/*"SELECT_FP_NUM_UP"*/, 0LL);
    v24 = (double)this->fields.friendPointBonus / 1000.0;
    v47 = v24;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v47);
    return System_String__Format(v23, v25, 0LL);
  }
  if ( this->fields.isServantPoint )
  {
    v28 = System_Int32__ToString((int)this + 116, 0LL);
    v30 = System_String__Concat_62401220((System_String_o *)StringLiteral_10443/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v28, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    IconDetailText = LocalizationManager__Get(v30, 0LL);
    if ( this->fields.isFollower )
      return IconDetailText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10442/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
    servantPoint = this->fields.servantPoint;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantPoint);
    return System_String__Format_62415592(v32, (Il2CppObject *)IconDetailText, v33, 0LL);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10412/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetItemName(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4B15D9B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B15D9B = 1;
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
  __int64 v2; // x2
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4B15D9C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B15D9C = 1;
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
  __int64 v2; // x2
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x8
  System_String_o **p_nameTotal; // x8

  if ( (byte_4B15D9D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B15D9D = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o **v10; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x0

  if ( (byte_4B15D9A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10390/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_10384/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/, v8, v9);
    byte_4B15D9A = 1;
  }
  if ( (this->fields.member & 0x80000000) != 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v10 = (System_String_o **)&StringLiteral_10384/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
  if ( this->fields.isFollower )
    v10 = (System_String_o **)&StringLiteral_10390/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
  v11 = *v10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v12 = LocalizationManager__Get(v11, 0LL);
  return System_String__Format(v12, (Il2CppObject *)this->fields.servantName, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetTargetString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t baseFuncType; // w8
  int32_t targetType; // w8
  __int64 *v17; // x8

  if ( (byte_4B15D9E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10393/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_10395/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_10394/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_10396/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B15D9E = 1;
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v17 = &StringLiteral_10396/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/;
      return LocalizationManager__Get((System_String_o *)*v17, 0LL);
    }
    if ( targetType == 3 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v17 = &StringLiteral_10393/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v17, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( targetType == 7 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v17 = &StringLiteral_10394/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/;
    return LocalizationManager__Get((System_String_o *)*v17, 0LL);
  }
  if ( targetType != 14 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v17 = &StringLiteral_10395/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/;
  return LocalizationManager__Get((System_String_o *)*v17, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int iconId; // w21
  int baseFuncType; // w8
  struct ItemEntity_o *itemEntity; // x8
  UISprite_o *v19; // x0
  int32_t v20; // w1
  int *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x20
  UISprite_o *v25; // x0
  System_String_o *v26; // x1
  __int64 *v27; // x8
  _BOOL4 isStartingMemberFriendshipUpAll; // w20
  int v29; // [xsp+8h] [xbp-28h] BYREF
  int v30; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B15DA0 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, sprite, method);
    sub_1BCA7E0(&StringLiteral_19873/*"func_group_icon_1009_starting"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_19871/*"func_group_icon_"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_19872/*"func_group_icon_1009"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_19875/*"func_group_icon_1028"*/, v11, v12);
    this = (EventMargeItemUpValInfo_o *)sub_1BCA7E0(&StringLiteral_19874/*"func_group_icon_1023_starting"*/, v13, v14);
    byte_4B15DA0 = 1;
  }
  v29 = 0;
  funcGroupEntity = v4->fields.funcGroupEntity;
  if ( funcGroupEntity )
  {
    iconId = funcGroupEntity->fields.iconId;
    v30 = iconId;
    if ( (iconId & 0x80000000) != 0 )
    {
      v21 = &v29;
      v29 = -iconId;
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
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
          v19 = sprite;
          v20 = iconId;
LABEL_18:
          AtlasManager__SetItem(v19, v20, 0LL);
          return;
        }
        itemEntity = v4->fields.itemEntity;
        if ( itemEntity )
        {
          iconId = itemEntity->fields.imageId;
          v30 = iconId;
          goto LABEL_11;
        }
LABEL_42:
        sub_1BCAA3C(this, sprite);
      }
      v21 = &v30;
    }
    v22 = System_Int32__ToString((int32_t)v21, 0LL);
    v24 = System_String__Concat_62401220((System_String_o *)StringLiteral_19871/*"func_group_icon_"*/, v22, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23);
    v25 = sprite;
    v26 = v24;
    goto LABEL_33;
  }
  if ( v4->fields.friendPointBonus >= 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
    v20 = 12;
    v19 = sprite;
    goto LABEL_18;
  }
  if ( v4->fields.isServantPoint )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
    v27 = &StringLiteral_19875/*"func_group_icon_1028"*/;
LABEL_32:
    v26 = (System_String_o *)*v27;
    v25 = sprite;
LABEL_33:
    AtlasManager__SetEventUI(v25, v26, 0LL);
    return;
  }
  if ( v4->fields.isFriendshipUpForCampaign )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
    v27 = &StringLiteral_19872/*"func_group_icon_1009"*/;
    goto LABEL_32;
  }
  if ( v4->fields.isStartingMemberFriendshipUp )
  {
    isStartingMemberFriendshipUpAll = v4->fields.isStartingMemberFriendshipUpAll;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
    if ( isStartingMemberFriendshipUpAll )
      v27 = &StringLiteral_19874/*"func_group_icon_1023_starting"*/;
    else
      v27 = &StringLiteral_19873/*"func_group_icon_1009_starting"*/;
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