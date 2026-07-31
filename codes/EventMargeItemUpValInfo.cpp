void EventMargeItemUpValInfo___ctor(
        EventMargeItemUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_String_o *v13; // x1
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct ItemEntity_o *itemEntity; // x1
  __int128 v29; // q0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct ItemEntity_o *v36; // x8
  int32_t groupId; // w9

  if ( (byte_59381BA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59381BA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_21FFECC(v5, v6);
  v13 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = -1;
  this->fields.servantName = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.servantName, (int32_t)v13, v7, v8, v9, v10, v11, v12);
  *(_WORD *)&this->fields.isFollower = 0;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.funcGroupEntity,
    (int32_t)funcGroupEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseFuncGroupEntity,
    (int32_t)baseFuncGroupEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  itemEntity = dropItemInfo->fields.itemEntity;
  v29 = *(_OWORD *)&dropItemInfo->fields.baseFuncId;
  this->fields.itemEntity = itemEntity;
  *(_OWORD *)&this->fields.baseFuncId = v29;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemEntity,
    (int32_t)itemEntity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = this->fields.itemEntity;
  if ( v36 )
    LODWORD(v36) = v36->fields.priority;
  groupId = dropItemInfo->fields.groupId;
  this->fields.priority2 = (int)v36;
  this->fields.groupId = groupId;
}


void EventMargeItemUpValInfo___ctor_48669268(
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct ItemEntity_o *itemEntity; // x1
  __int128 v36; // q0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct ItemEntity_o *v43; // x8
  int32_t groupId; // w9

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_21FFECC(v13, v14);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = member;
  this->fields.servantName = servantName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantName,
    (int32_t)servantName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.isFollower = isFollower;
  this->fields.isOtherUp = isOtherUp;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.funcGroupEntity,
    (int32_t)funcGroupEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseFuncGroupEntity,
    (int32_t)baseFuncGroupEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  itemEntity = dropItemInfo->fields.itemEntity;
  v36 = *(_OWORD *)&dropItemInfo->fields.baseFuncId;
  this->fields.itemEntity = itemEntity;
  *(_OWORD *)&this->fields.baseFuncId = v36;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemEntity,
    (int32_t)itemEntity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = this->fields.itemEntity;
  if ( v43 )
    LODWORD(v43) = v43->fields.priority;
  groupId = dropItemInfo->fields.groupId;
  this->fields.priority2 = (int)v43;
  this->fields.groupId = groupId;
}


void EventMargeItemUpValInfo___ctor_48669488(
        EventMargeItemUpValInfo_o *this,
        int32_t eventId,
        int32_t friendPointBonus,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.friendPointBonus = friendPointBonus;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  this->fields.isFriendPointBonus = 1;
}


void EventMargeItemUpValInfo___ctor_48669568(
        EventMargeItemUpValInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  this->fields.eventId = eventId;
}


int32_t EventMargeItemUpValInfo__CompMemberPriority(
        EventMargeItemUpValInfo_o *this,
        EventMargeItemUpValInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( !info )
    sub_21FFECC(this, 0);
  if ( this->fields.isOtherUp == info->fields.isOtherUp )
  {
    v3 = info->fields.priority1 - this->fields.priority1;
    if ( !v3 )
      return this->fields.priority2 - info->fields.priority2;
  }
  else if ( this->fields.isOtherUp )
  {
    return 1;
  }
  else
  {
    return -1;
  }
  return v3;
}


int32_t EventMargeItemUpValInfo__CompPartyPriority(
        EventMargeItemUpValInfo_o *this,
        EventMargeItemUpValInfo_o *info,
        const MethodInfo *method)
{
  int32_t member; // w8
  int32_t priority2; // w9
  int32_t v5; // w8

  member = this->fields.member;
  if ( member < 0 )
  {
    if ( info )
    {
      priority2 = info->fields.member;
      if ( priority2 < 0 )
        goto LABEL_8;
      goto LABEL_7;
    }
LABEL_15:
    sub_21FFECC(this, info);
  }
  if ( !info )
    goto LABEL_15;
  priority2 = info->fields.member;
  if ( (priority2 & 0x80000000) == 0 )
    return member - priority2;
LABEL_7:
  if ( member != priority2 )
  {
    if ( member >= 0 )
      return -1;
    else
      return 1;
  }
LABEL_8:
  v5 = info->fields.priority1 - this->fields.priority1;
  if ( !v5 )
  {
    member = this->fields.priority2;
    priority2 = info->fields.priority2;
    return member - priority2;
  }
  return v5;
}


int32_t EventMargeItemUpValInfo__CompPersonalPriority(
        EventMargeItemUpValInfo_o *this,
        EventMargeItemUpValInfo_o *info,
        const MethodInfo *method)
{
  int32_t priority1; // w9
  int32_t v4; // w10
  int32_t result; // w0

  if ( !info )
    sub_21FFECC(this, 0);
  priority1 = this->fields.priority1;
  v4 = info->fields.priority1;
  result = v4 - priority1;
  if ( v4 == priority1 )
    return this->fields.priority2 - info->fields.priority2;
  return result;
}


System_String_o *EventMargeItemUpValInfo__GetColorString(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  _BOOL4 isOtherUp; // w19
  System_String_o **v4; // x8

  if ( (byte_59381BB & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10628/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/);
    sub_21FFC50(&StringLiteral_10630/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/);
    byte_59381BB = 1;
  }
  isOtherUp = this->fields.isOtherUp;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  if ( isOtherUp )
    v4 = (System_String_o **)&StringLiteral_10630/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_10628/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/;
  return LocalizationManager__Get(*v4, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventMargeItemUpValInfo__GetEventUpString(
        EventMargeItemUpValInfo_o *this,
        bool isEventBonus,
        const MethodInfo *method)
{
  struct FunctionGroupEntity_o *funcGroupEntity; // x0
  System_String_o *IconDetailText; // x20
  int32_t baseFuncType; // w8
  unsigned int v8; // w8
  int32_t addCount; // w19
  System_String_o *v10; // x20
  float v11; // s0
  Il2CppObject *v12; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  __int64 v18; // x1
  System_String_o *v19; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // w20
  int32_t v22; // w0
  System_String_o *v23; // x2
  int32_t v24; // w1
  bool v25; // w3
  int32_t rateCount; // w19
  int32_t v27; // w19
  struct ItemEntity_o *itemEntity; // x9
  int32_t v29; // w19
  int32_t v30; // w20
  struct System_String_o **p_unit; // x8
  System_String_o *v32; // x21
  int32_t servantPoint; // [xsp+8h] [xbp-28h] BYREF
  float v34; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59381BF & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12015/*"SELECT_FP_NUM_UP"*/);
    sub_21FFC50(&StringLiteral_10693/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_10659/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/);
    sub_21FFC50(&StringLiteral_10694/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/);
    byte_59381BF = 1;
  }
  funcGroupEntity = this->fields.funcGroupEntity;
  if ( funcGroupEntity && funcGroupEntity->fields.isDispValue )
  {
    IconDetailText = FunctionGroupEntity__GetIconDetailText(funcGroupEntity, 0);
    if ( System_String__IsNullOrEmpty(IconDetailText, 0) )
    {
      baseFuncType = this->fields.baseFuncType;
      if ( baseFuncType <= 16 )
      {
        if ( baseFuncType != 1 )
        {
          if ( baseFuncType == 7 )
          {
            rateCount = this->fields.rateCount;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isEventBonus);
            v22 = 0;
            v25 = 1;
            v23 = (System_String_o *)StringLiteral_1/*""*/;
            v24 = rateCount / 10;
            return LocalizationManager__GetEventPointInfo(v22, v24, v23, v25, 0);
          }
          if ( baseFuncType != 16 )
            goto LABEL_47;
        }
      }
      else
      {
        v8 = baseFuncType - 106;
        if ( v8 > 0x1A )
          goto LABEL_47;
        if ( ((1 << v8) & 0x4800320) == 0 )
        {
          if ( ((1 << v8) & 5) != 0 )
          {
            addCount = this->fields.addCount;
LABEL_34:
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isEventBonus);
            v22 = 0;
LABEL_37:
            v23 = (System_String_o *)StringLiteral_1/*""*/;
            v24 = addCount;
LABEL_38:
            v25 = 0;
            return LocalizationManager__GetEventPointInfo(v22, v24, v23, v25, 0);
          }
          if ( v8 == 10 )
          {
            v27 = this->fields.rateCount;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isEventBonus);
            v22 = 0;
            v23 = (System_String_o *)StringLiteral_1/*""*/;
            v24 = v27 / 10;
            goto LABEL_38;
          }
LABEL_47:
          itemEntity = this->fields.itemEntity;
          v30 = this->fields.addCount;
          v29 = this->fields.rateCount;
          p_unit = &itemEntity->fields.unit;
          if ( !itemEntity )
            p_unit = (struct System_String_o **)&StringLiteral_1/*""*/;
          v32 = *p_unit;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isEventBonus);
          v22 = v30;
          v24 = v29;
          v23 = v32;
          goto LABEL_38;
        }
      }
      v21 = this->fields.addCount;
      addCount = this->fields.rateCount;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isEventBonus);
      v22 = v21;
      goto LABEL_37;
    }
    return IconDetailText;
  }
  if ( this->fields.friendPointBonus >= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isEventBonus);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12015/*"SELECT_FP_NUM_UP"*/, 0);
    v11 = (double)this->fields.friendPointBonus / 1000.0;
    v34 = v11;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &v34);
    return System_String__Format(v10, v12, 0);
  }
  if ( this->fields.isServantPoint )
  {
    v15 = System_Int32__ToString((int)this + 144, 0);
    v17 = System_String__Concat_75438412((System_String_o *)StringLiteral_10694/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v15, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    IconDetailText = LocalizationManager__Get(v17, 0);
    if ( this->fields.isFollower )
      return IconDetailText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10693/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0);
    servantPoint = this->fields.servantPoint;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &servantPoint);
    return System_String__Format_75484576(v19, (Il2CppObject *)IconDetailText, v20, 0);
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
  if ( this->fields.isAddPassiveForCampaign )
  {
    if ( isEventBonus )
      return this->fields.addPassiveContentDetailForCampaign;
    else
      return this->fields.addPassiveContentForCampaign;
  }
  if ( !this->fields.isNotClassBoard )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isEventBonus);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10659/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, 0);
}


System_String_o *EventMargeItemUpValInfo__GetItemName(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_59381BD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59381BD = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_name = &itemEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


System_String_o *EventMargeItemUpValInfo__GetNameTitleString(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x8
  System_String_o **p_name; // x8

  baseFuncGroupEntity = this->fields.baseFuncGroupEntity;
  if ( baseFuncGroupEntity )
    p_name = &baseFuncGroupEntity->fields.name;
  else
    p_name = &this->fields.nameTitle;
  return *p_name;
}


System_String_o *EventMargeItemUpValInfo__GetNameTotalString(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x8
  System_String_o **p_nameTotal; // x8

  baseFuncGroupEntity = this->fields.baseFuncGroupEntity;
  if ( baseFuncGroupEntity )
    p_nameTotal = &baseFuncGroupEntity->fields.nameTotal;
  else
    p_nameTotal = &this->fields.nameTotal;
  return *p_nameTotal;
}


System_String_o *EventMargeItemUpValInfo__GetServantName(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  System_String_o **v3; // x8
  System_String_o *v4; // x20
  System_String_o *v5; // x0

  if ( (byte_59381BC & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10631/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_10624/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/);
    byte_59381BC = 1;
  }
  if ( this->fields.member < 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( this->fields.isFollower )
    v3 = (System_String_o **)&StringLiteral_10631/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
  else
    v3 = (System_String_o **)&StringLiteral_10624/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
  v4 = *v3;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v5 = LocalizationManager__Get(v4, 0);
  return System_String__Format(v5, (Il2CppObject *)this->fields.servantName, 0);
}


System_String_o *EventMargeItemUpValInfo__GetTargetString(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  int32_t baseFuncType; // w8
  int32_t targetType; // w8
  __int64 *v6; // x8

  if ( (byte_59381BE & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10634/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/);
    sub_21FFC50(&StringLiteral_10636/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/);
    sub_21FFC50(&StringLiteral_10635/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/);
    sub_21FFC50(&StringLiteral_10637/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59381BE = 1;
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v6 = &StringLiteral_10637/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
    if ( targetType == 3 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v6 = &StringLiteral_10634/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( targetType == 7 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v6 = &StringLiteral_10635/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  if ( targetType != 14 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = &StringLiteral_10636/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/;
  return LocalizationManager__Get((System_String_o *)*v6, 0);
}


void EventMargeItemUpValInfo__InitFlag(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
}


bool EventMargeItemUpValInfo__IsFriendPointUpBonus(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFriendPointBonus;
}


bool EventMargeItemUpValInfo__IsFriendshipUpForCampaign(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFriendshipUpForCampaign;
}


bool EventMargeItemUpValInfo__IsNotClassBoard(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNotClassBoard;
}


bool EventMargeItemUpValInfo__IsServantPoint(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.isServantPoint;
}


bool EventMargeItemUpValInfo__IsServantSelfValInfo(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.member != -1;
}


void EventMargeItemUpValInfo__SetAddPassiveCampaign(
        EventMargeItemUpValInfo_o *this,
        int32_t inEventId,
        System_String_o *addPassiveContent,
        System_String_o *addPassiveContentDetail,
        int32_t funcGroupId,
        System_String_o *titleName,
        System_String_o *iconName,
        int32_t funcType,
        const MethodInfo *method)
{
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  this->fields.eventId = inEventId;
  this->fields.addPassiveContentForCampaign = addPassiveContent;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.addPassiveContentForCampaign,
    (int32_t)addPassiveContent,
    addPassiveContent,
    addPassiveContentDetail,
    funcGroupId,
    (int32_t)titleName,
    (bool)iconName,
    funcType);
  this->fields.isAddPassiveForCampaign = 1;
  this->fields.addPassiveContentDetailForCampaign = addPassiveContentDetail;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.addPassiveContentDetailForCampaign,
    (int32_t)addPassiveContentDetail,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.baseFuncType = funcType;
  this->fields.groupId = funcGroupId;
  this->fields.nameTitle = titleName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nameTitle,
    (int32_t)titleName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.addPassiveIconNameOverwrite = iconName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.addPassiveIconNameOverwrite,
    (int32_t)iconName,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


// local variable allocation has failed, the output may be wrong!
void EventMargeItemUpValInfo__SetFriendshipUpBonus(
        EventMargeItemUpValInfo_o *this,
        int32_t inEventId,
        int32_t friendshipUpValue,
        int32_t funcGroupId,
        System_String_o *totalName,
        System_String_o *titleName,
        int32_t calcType,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  this->fields.eventId = inEventId;
  this->fields.isFriendshipUpForCampaign = 1;
  this->fields.friendshipUpBonus = friendshipUpValue;
  this->fields.baseFuncType = 111;
  this->fields.groupId = funcGroupId;
  this->fields.nameTotal = totalName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nameTotal,
    (int32_t)totalName,
    *(System_String_o **)&friendshipUpValue,
    *(System_String_o **)&funcGroupId,
    (int32_t)totalName,
    (int32_t)titleName,
    calcType,
    (bool)method);
  this->fields.nameTitle = titleName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nameTitle,
    (int32_t)titleName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( calcType == 2 )
  {
    this->fields.rateCount = this->fields.friendshipUpBonus;
  }
  else if ( calcType == 1 )
  {
    this->fields.addCount = this->fields.friendshipUpBonus;
  }
}


void EventMargeItemUpValInfo__SetIcon(EventMargeItemUpValInfo_o *this, UISprite_o *sprite, const MethodInfo *method)
{
  EventMargeItemUpValInfo_o *v4; // x20
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int32_t iconId; // w21
  int baseFuncType; // w8
  struct ItemEntity_o *itemEntity; // x8
  UISprite_o *v9; // x0
  int32_t v10; // w1
  char *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x20
  __int64 *v15; // x8
  System_String_o *v16; // x1
  UISprite_o *v17; // x0
  int v18; // w8
  System_String_o *addPassiveIconNameOverwrite; // x20
  __int64 v20; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_59381C0 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20603/*"func_group_icon_1009_starting"*/);
    sub_21FFC50(&StringLiteral_20601/*"func_group_icon_"*/);
    sub_21FFC50(&StringLiteral_20602/*"func_group_icon_1009"*/);
    sub_21FFC50(&StringLiteral_20605/*"func_group_icon_1028"*/);
    this = (EventMargeItemUpValInfo_o *)sub_21FFC50(&StringLiteral_20604/*"func_group_icon_1023_starting"*/);
    byte_59381C0 = 1;
  }
  funcGroupEntity = v4->fields.funcGroupEntity;
  v20 = 0;
  if ( !funcGroupEntity )
  {
    if ( v4->fields.friendPointBonus >= 1 )
    {
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
      v9 = sprite;
      v10 = 12;
      goto LABEL_18;
    }
    if ( v4->fields.isServantPoint )
    {
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
      v15 = &StringLiteral_20605/*"func_group_icon_1028"*/;
    }
    else if ( v4->fields.isFriendshipUpForCampaign )
    {
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
      v15 = &StringLiteral_20602/*"func_group_icon_1009"*/;
    }
    else
    {
      if ( !v4->fields.isStartingMemberFriendshipUp )
      {
        if ( !v4->fields.isAddPassiveForCampaign )
        {
          if ( !sprite )
            goto LABEL_48;
          UISprite__set_spriteName(sprite, 0, 0);
          return;
        }
        addPassiveIconNameOverwrite = v4->fields.addPassiveIconNameOverwrite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
        v17 = sprite;
        v16 = addPassiveIconNameOverwrite;
LABEL_33:
        AtlasManager__SetEventUI(v17, v16, 0);
        return;
      }
      v18 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
      if ( v4->fields.isStartingMemberFriendshipUpAll )
      {
        if ( !v18 )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
        v15 = &StringLiteral_20604/*"func_group_icon_1023_starting"*/;
      }
      else
      {
        if ( !v18 )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
        v15 = &StringLiteral_20603/*"func_group_icon_1009_starting"*/;
      }
    }
    v16 = (System_String_o *)*v15;
    v17 = sprite;
    goto LABEL_33;
  }
  iconId = funcGroupEntity->fields.iconId;
  HIDWORD(v20) = iconId;
  if ( iconId < 0 )
  {
    v11 = (char *)&v20;
    LODWORD(v20) = -iconId;
  }
  else
  {
    baseFuncType = v4->fields.baseFuncType;
    if ( baseFuncType >= 17 && ((unsigned int)(baseFuncType - 105) < 4 || baseFuncType == 132) )
    {
      if ( iconId )
      {
LABEL_11:
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
        v9 = sprite;
        v10 = iconId;
LABEL_18:
        AtlasManager__SetItem(v9, v10, 0);
        return;
      }
      itemEntity = v4->fields.itemEntity;
      if ( itemEntity )
      {
        iconId = itemEntity->fields.imageId;
        HIDWORD(v20) = iconId;
        goto LABEL_11;
      }
LABEL_48:
      sub_21FFECC(this, sprite);
    }
    v11 = (char *)&v20 + 4;
  }
  v12 = System_Int32__ToString((int32_t)v11, 0);
  v14 = System_String__Concat_75438412((System_String_o *)StringLiteral_20601/*"func_group_icon_"*/, v12, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
  AtlasManager__SetEventUI(sprite, v14, 0);
}


void EventMargeItemUpValInfo__SetNotClassBoard(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  this->fields.isNotClassBoard = 1;
}


void EventMargeItemUpValInfo__SetServantPointInfo(
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


void EventMargeItemUpValInfo__SetStartingMemberFriendshipUp(
        EventMargeItemUpValInfo_o *this,
        int32_t friendshipUpBonus,
        const MethodInfo *method)
{
  this->fields.startingMemberFriendshipUpBonus = friendshipUpBonus;
  this->fields.isStartingMemberFriendshipUp = 1;
  this->fields.isStartingMemberFriendshipUpAll = 0;
}


void EventMargeItemUpValInfo__SetStartingMemberFriendshipUpAll(
        EventMargeItemUpValInfo_o *this,
        int32_t friendshipUpBonus,
        const MethodInfo *method)
{
  this->fields.startingMemberFriendshipUpBonus = friendshipUpBonus;
  this->fields.isStartingMemberFriendshipUp = 1;
  this->fields.isStartingMemberFriendshipUpAll = 1;
}