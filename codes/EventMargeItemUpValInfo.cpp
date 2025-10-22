void EventMargeItemUpValInfo___ctor(
        EventMargeItemUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct ItemEntity_o *itemEntity; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct ItemEntity_o *v19; // x8

  if ( (byte_4C5689C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5689C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_1C3E7C0(v5, v6);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = -1;
  v9 = StringLiteral_1/*""*/;
  this->fields.servantName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.servantName, v9, v7, v8);
  *(_WORD *)&this->fields.isFollower = 0;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.funcGroupEntity, (int32_t)funcGroupEntity, v11, v12);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseFuncGroupEntity, (int32_t)baseFuncGroupEntity, v14, v15);
  *(_OWORD *)&this->fields.baseFuncId = *(_OWORD *)&dropItemInfo->fields.baseFuncId;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemEntity, (int32_t)itemEntity, v17, v18);
  v19 = this->fields.itemEntity;
  if ( v19 )
    LODWORD(v19) = v19->fields.priority;
  this->fields.priority2 = (int)v19;
  this->fields.groupId = dropItemInfo->fields.groupId;
}


void EventMargeItemUpValInfo___ctor_41766436(
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct ItemEntity_o *itemEntity; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct ItemEntity_o *v26; // x8

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_1C3E7C0(v13, v14);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = member;
  this->fields.servantName = servantName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.servantName, (int32_t)servantName, v15, v16);
  this->fields.isFollower = isFollower;
  this->fields.isOtherUp = isOtherUp;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.funcGroupEntity, (int32_t)funcGroupEntity, v18, v19);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseFuncGroupEntity, (int32_t)baseFuncGroupEntity, v21, v22);
  *(_OWORD *)&this->fields.baseFuncId = *(_OWORD *)&dropItemInfo->fields.baseFuncId;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemEntity, (int32_t)itemEntity, v24, v25);
  v26 = this->fields.itemEntity;
  if ( v26 )
    LODWORD(v26) = v26->fields.priority;
  this->fields.priority2 = (int)v26;
  this->fields.groupId = dropItemInfo->fields.groupId;
}


void EventMargeItemUpValInfo___ctor_41766656(
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


void EventMargeItemUpValInfo___ctor_41766736(
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
    sub_1C3E7C0(this, 0);
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


int32_t EventMargeItemUpValInfo__CompPartyPriority(
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
    sub_1C3E7C0(this, info);
  }
  if ( !info )
    goto LABEL_15;
  priority2 = info->fields.member;
  if ( priority2 < 0 )
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


int32_t EventMargeItemUpValInfo__CompPersonalPriority(
        EventMargeItemUpValInfo_o *this,
        EventMargeItemUpValInfo_o *info,
        const MethodInfo *method)
{
  int32_t priority1; // w9
  int32_t v4; // w10
  int32_t result; // w0

  if ( !info )
    sub_1C3E7C0(this, 0);
  priority1 = this->fields.priority1;
  v4 = info->fields.priority1;
  result = v4 - priority1;
  if ( v4 == priority1 )
    return this->fields.priority2 - info->fields.priority2;
  return result;
}


System_String_o *EventMargeItemUpValInfo__GetColorString(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  _BOOL4 isOtherUp; // w20
  System_String_o **v4; // x8

  if ( (byte_4C5689D & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_10233/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/);
    sub_1C3E564(&StringLiteral_10235/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/);
    byte_4C5689D = 1;
  }
  isOtherUp = this->fields.isOtherUp;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isOtherUp )
    v4 = (System_String_o **)&StringLiteral_10235/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_10233/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/;
  return LocalizationManager__Get(*v4, 0);
}


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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  System_String_o *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  int32_t v31; // w20
  int32_t v32; // w0
  System_String_o *v33; // x2
  int32_t v34; // w1
  bool v35; // w3
  int32_t rateCount; // w19
  int32_t v37; // w19
  int32_t v38; // w20
  int32_t v39; // w21
  struct ItemEntity_o *itemEntity; // x8
  __int64 *p_unit; // x8
  System_String_o *v42; // x19
  int32_t servantPoint; // [xsp+8h] [xbp-28h] BYREF
  float v44; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C568A1 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_11532/*"SELECT_FP_NUM_UP"*/);
    sub_1C3E564(&StringLiteral_10296/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_10264/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/);
    sub_1C3E564(&StringLiteral_10297/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/);
    byte_4C568A1 = 1;
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
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v33 = (System_String_o *)StringLiteral_1/*""*/;
            v34 = rateCount / 10;
            v35 = 1;
            v32 = 0;
            return LocalizationManager__GetEventPointInfo(v32, v34, v33, v35, 0);
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
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v32 = 0;
LABEL_37:
            v33 = (System_String_o *)StringLiteral_1/*""*/;
            v34 = addCount;
LABEL_38:
            v35 = 0;
            return LocalizationManager__GetEventPointInfo(v32, v34, v33, v35, 0);
          }
          if ( v8 == 10 )
          {
            v37 = this->fields.rateCount;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v33 = (System_String_o *)StringLiteral_1/*""*/;
            v34 = v37 / 10;
            v32 = 0;
            goto LABEL_38;
          }
LABEL_47:
          v38 = this->fields.addCount;
          v39 = this->fields.rateCount;
          itemEntity = this->fields.itemEntity;
          if ( itemEntity )
            p_unit = (__int64 *)&itemEntity->fields.unit;
          else
            p_unit = &StringLiteral_1/*""*/;
          v42 = (System_String_o *)*p_unit;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v32 = v38;
          v34 = v39;
          v33 = v42;
          goto LABEL_38;
        }
      }
      v31 = this->fields.addCount;
      addCount = this->fields.rateCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = v31;
      goto LABEL_37;
    }
    return IconDetailText;
  }
  if ( this->fields.friendPointBonus >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11532/*"SELECT_FP_NUM_UP"*/, 0);
    v11 = (double)this->fields.friendPointBonus / 1000.0;
    v44 = v11;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v12, v13, v14, v15, v16, v17);
    return System_String__Format(v10, v18, 0);
  }
  if ( this->fields.isServantPoint )
  {
    v21 = System_Int32__ToString((int)this + 144, 0);
    v22 = System_String__Concat_63636468((System_String_o *)StringLiteral_10297/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v21, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IconDetailText = LocalizationManager__Get(v22, 0);
    if ( this->fields.isFollower )
      return IconDetailText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0);
    servantPoint = this->fields.servantPoint;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantPoint, v24, v25, v26, v27, v28, v29);
    return System_String__Format_63677760(v23, (Il2CppObject *)IconDetailText, v30, 0);
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10264/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, 0);
}


System_String_o *EventMargeItemUpValInfo__GetItemName(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4C5689F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5689F = 1;
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

  if ( (byte_4C5689E & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_10236/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_10229/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/);
    byte_4C5689E = 1;
  }
  if ( this->fields.member < 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v3 = (System_String_o **)&StringLiteral_10229/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
  if ( this->fields.isFollower )
    v3 = (System_String_o **)&StringLiteral_10236/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
  v4 = *v3;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get(v4, 0);
  return System_String__Format(v5, (Il2CppObject *)this->fields.servantName, 0);
}


System_String_o *EventMargeItemUpValInfo__GetTargetString(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  int32_t baseFuncType; // w8
  int32_t targetType; // w8
  __int64 *v6; // x8

  if ( (byte_4C568A0 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_10239/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/);
    sub_1C3E564(&StringLiteral_10241/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/);
    sub_1C3E564(&StringLiteral_10240/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/);
    sub_1C3E564(&StringLiteral_10242/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C568A0 = 1;
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
      v6 = &StringLiteral_10242/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
    if ( targetType == 3 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_10239/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( targetType == 7 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_10240/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  if ( targetType != 14 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = &StringLiteral_10241/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/;
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


bool EventMargeItemUpValInfo__IsStartingMemberFriendshipUp(EventMargeItemUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.isStartingMemberFriendshipUp;
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  this->fields.eventId = inEventId;
  this->fields.addPassiveContentForCampaign = addPassiveContent;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.addPassiveContentForCampaign,
    (int32_t)addPassiveContent,
    (int32_t)addPassiveContent,
    (const MethodInfo *)addPassiveContentDetail);
  this->fields.isAddPassiveForCampaign = 1;
  this->fields.addPassiveContentDetailForCampaign = addPassiveContentDetail;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.addPassiveContentDetailForCampaign,
    (int32_t)addPassiveContentDetail,
    v15,
    v16);
  this->fields.baseFuncType = funcType;
  this->fields.groupId = funcGroupId;
  this->fields.nameTitle = titleName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.nameTitle, (int32_t)titleName, v17, v18);
  this->fields.addPassiveIconNameOverwrite = iconName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.addPassiveIconNameOverwrite, (int32_t)iconName, v19, v20);
}


void EventMargeItemUpValInfo__SetFriendshipUpBonus(
        EventMargeItemUpValInfo_o *this,
        int32_t eventId,
        int32_t friendshipUpBonus,
        const MethodInfo *method)
{
  this->fields.eventId = eventId;
  this->fields.friendshipUpBonus = friendshipUpBonus;
  this->fields.isFriendshipUpForCampaign = 1;
}


// local variable allocation has failed, the output may be wrong!
void EventMargeItemUpValInfo__SetFriendshipUpBonus_41766840(
        EventMargeItemUpValInfo_o *this,
        int32_t inEventId,
        int32_t friendshipUpValue,
        int32_t funcGroupId,
        System_String_o *totalName,
        System_String_o *titleName,
        int32_t calcType,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  this->fields.eventId = inEventId;
  this->fields.friendshipUpBonus = friendshipUpValue;
  this->fields.groupId = funcGroupId;
  this->fields.isFriendshipUpForCampaign = 1;
  this->fields.baseFuncType = 111;
  this->fields.nameTotal = totalName;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.nameTotal,
    (int32_t)totalName,
    friendshipUpValue,
    *(const MethodInfo **)&funcGroupId);
  this->fields.nameTitle = titleName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.nameTitle, (int32_t)titleName, v11, v12);
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
  int *v11; // x0
  __int64 *v12; // x8
  System_String_o *v13; // x0
  System_String_o *addPassiveIconNameOverwrite; // x20
  AtlasManager_c *v15; // x0
  UISprite_o *v16; // x0
  System_String_o *v17; // x1
  _BOOL4 isStartingMemberFriendshipUpAll; // w20
  int v19; // [xsp+8h] [xbp-28h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C568A2 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&StringLiteral_19732/*"func_group_icon_1009_starting"*/);
    sub_1C3E564(&StringLiteral_19730/*"func_group_icon_"*/);
    sub_1C3E564(&StringLiteral_19731/*"func_group_icon_1009"*/);
    sub_1C3E564(&StringLiteral_19734/*"func_group_icon_1028"*/);
    this = (EventMargeItemUpValInfo_o *)sub_1C3E564(&StringLiteral_19733/*"func_group_icon_1023_starting"*/);
    byte_4C568A2 = 1;
  }
  v19 = 0;
  funcGroupEntity = v4->fields.funcGroupEntity;
  if ( !funcGroupEntity )
  {
    if ( v4->fields.friendPointBonus >= 1 )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v10 = 12;
      v9 = sprite;
      goto LABEL_17;
    }
    if ( v4->fields.isServantPoint )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v12 = &StringLiteral_19734/*"func_group_icon_1028"*/;
    }
    else if ( v4->fields.isFriendshipUpForCampaign )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v12 = &StringLiteral_19731/*"func_group_icon_1009"*/;
    }
    else
    {
      if ( !v4->fields.isStartingMemberFriendshipUp )
      {
        if ( v4->fields.isAddPassiveForCampaign )
        {
          addPassiveIconNameOverwrite = v4->fields.addPassiveIconNameOverwrite;
          v15 = AtlasManager_TypeInfo;
          if ( AtlasManager_TypeInfo->_2.cctor_finished )
            goto LABEL_28;
          goto LABEL_27;
        }
        if ( sprite )
        {
          UISprite__set_spriteName(sprite, 0, 0);
          return;
        }
        goto LABEL_47;
      }
      isStartingMemberFriendshipUpAll = v4->fields.isStartingMemberFriendshipUpAll;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( isStartingMemberFriendshipUpAll )
        v12 = &StringLiteral_19733/*"func_group_icon_1023_starting"*/;
      else
        v12 = &StringLiteral_19732/*"func_group_icon_1009_starting"*/;
    }
    v17 = (System_String_o *)*v12;
    v16 = sprite;
    goto LABEL_34;
  }
  iconId = funcGroupEntity->fields.iconId;
  v20 = iconId;
  if ( iconId < 0 )
  {
    v11 = &v19;
    v19 = -iconId;
    goto LABEL_25;
  }
  baseFuncType = v4->fields.baseFuncType;
  if ( baseFuncType >= 17 && ((unsigned int)(baseFuncType - 105) < 4 || baseFuncType == 132) )
  {
    if ( iconId )
    {
LABEL_10:
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v9 = sprite;
      v10 = iconId;
LABEL_17:
      AtlasManager__SetItem(v9, v10, 0);
      return;
    }
    itemEntity = v4->fields.itemEntity;
    if ( itemEntity )
    {
      iconId = itemEntity->fields.imageId;
      v20 = iconId;
      goto LABEL_10;
    }
LABEL_47:
    sub_1C3E7C0(this, sprite);
  }
  v11 = &v20;
LABEL_25:
  v13 = System_Int32__ToString((int32_t)v11, 0);
  addPassiveIconNameOverwrite = System_String__Concat_63636468((System_String_o *)StringLiteral_19730/*"func_group_icon_"*/, v13, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    v15 = AtlasManager_TypeInfo;
LABEL_27:
    j_il2cpp_runtime_class_init_0(v15);
  }
LABEL_28:
  v16 = sprite;
  v17 = addPassiveIconNameOverwrite;
LABEL_34:
  AtlasManager__SetEventUI(v16, v17, 0);
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