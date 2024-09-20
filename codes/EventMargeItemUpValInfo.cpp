void __fastcall EventMargeItemUpValInfo___ctor(
        EventMargeItemUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct ItemEntity_o *itemEntity; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct ItemEntity_o *v19; // x8

  if ( (byte_4A5AD0F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AD0F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_1B8880C(v5, v6);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = -1;
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.servantName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantName, v9, v7, v8);
  *(_WORD *)&this->fields.isFollower = 0;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcGroupEntity, (int32_t)funcGroupEntity, v11, v12);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseFuncGroupEntity,
    (int32_t)baseFuncGroupEntity,
    v14,
    v15);
  *(_OWORD *)&this->fields.baseFuncId = *(_OWORD *)&dropItemInfo->fields.baseFuncId;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEntity, (int32_t)itemEntity, v17, v18);
  v19 = this->fields.itemEntity;
  if ( v19 )
    LODWORD(v19) = v19->fields.priority;
  this->fields.priority2 = (int)v19;
}


void __fastcall EventMargeItemUpValInfo___ctor_38889940(
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
  int32_t v16; // w3
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  struct ItemEntity_o *itemEntity; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  struct ItemEntity_o *v26; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_1B8880C(v13, v14);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = member;
  this->fields.servantName = servantName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantName, (int32_t)servantName, v15, v16);
  this->fields.isFollower = isFollower;
  this->fields.isOtherUp = isOtherUp;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcGroupEntity, (int32_t)funcGroupEntity, v18, v19);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseFuncGroupEntity,
    (int32_t)baseFuncGroupEntity,
    v21,
    v22);
  *(_OWORD *)&this->fields.baseFuncId = *(_OWORD *)&dropItemInfo->fields.baseFuncId;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEntity, (int32_t)itemEntity, v24, v25);
  v26 = this->fields.itemEntity;
  if ( v26 )
    LODWORD(v26) = v26->fields.priority;
  this->fields.priority2 = (int)v26;
}


void __fastcall EventMargeItemUpValInfo___ctor_38890152(
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


void __fastcall EventMargeItemUpValInfo___ctor_38890232(
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, info);
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
    sub_1B8880C(this, 0LL);
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
  _BOOL4 isOtherUp; // w20
  System_String_o **v4; // x8

  if ( (byte_4A5AD10 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10254/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/);
    sub_1B885B0(&StringLiteral_10256/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/);
    byte_4A5AD10 = 1;
  }
  isOtherUp = this->fields.isOtherUp;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isOtherUp )
    v4 = (System_String_o **)&StringLiteral_10256/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_10254/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/;
  return LocalizationManager__Get(*v4, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetEventUpString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  struct FunctionGroupEntity_o *funcGroupEntity; // x0
  System_String_o *IconDetailText; // x20
  int32_t baseFuncType; // w8
  unsigned int v6; // w8
  int32_t addCount; // w19
  System_String_o *v8; // x20
  float v9; // s0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  System_String_o *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  int32_t v23; // w20
  int32_t v24; // w0
  System_String_o *v25; // x2
  int v26; // w1
  bool v27; // w3
  int32_t rateCount; // w19
  int32_t v29; // w19
  int32_t v30; // w20
  int32_t v31; // w21
  struct ItemEntity_o *itemEntity; // x8
  void **p_unit; // x8
  System_String_o *v34; // x19
  int32_t servantPoint; // [xsp+8h] [xbp-28h] BYREF
  float v36; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5AD16 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_11504/*"SELECT_FP_NUM_UP"*/);
    sub_1B885B0(&StringLiteral_10309/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_10279/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/);
    sub_1B885B0(&StringLiteral_10310/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/);
    byte_4A5AD16 = 1;
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
            v25 = (System_String_o *)StringLiteral_1/*""*/;
            v26 = rateCount / 10;
            v27 = 1;
            v24 = 0;
            return LocalizationManager__GetEventPointInfo(v24, v26, v25, v27, 0LL);
          }
          if ( baseFuncType != 16 )
            goto LABEL_47;
        }
      }
      else
      {
        v6 = baseFuncType - 106;
        if ( v6 > 0x1A )
          goto LABEL_47;
        if ( ((1 << v6) & 0x4800320) == 0 )
        {
          if ( ((1 << v6) & 5) != 0 )
          {
            addCount = this->fields.addCount;
LABEL_34:
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v24 = 0;
LABEL_37:
            v25 = (System_String_o *)StringLiteral_1/*""*/;
            v26 = addCount;
LABEL_38:
            v27 = 0;
            return LocalizationManager__GetEventPointInfo(v24, v26, v25, v27, 0LL);
          }
          if ( v6 == 10 )
          {
            v29 = this->fields.rateCount;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v25 = (System_String_o *)StringLiteral_1/*""*/;
            v26 = v29 / 10;
            v24 = 0;
            goto LABEL_38;
          }
LABEL_47:
          v30 = this->fields.addCount;
          v31 = this->fields.rateCount;
          itemEntity = this->fields.itemEntity;
          if ( itemEntity )
            p_unit = (void **)&itemEntity->fields.unit;
          else
            p_unit = &StringLiteral_1/*""*/;
          v34 = (System_String_o *)*p_unit;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v24 = v30;
          v26 = v31;
          v25 = v34;
          goto LABEL_38;
        }
      }
      v23 = this->fields.addCount;
      addCount = this->fields.rateCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = v23;
      goto LABEL_37;
    }
    return IconDetailText;
  }
  if ( this->fields.friendPointBonus >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11504/*"SELECT_FP_NUM_UP"*/, 0LL);
    v9 = (double)this->fields.friendPointBonus / 1000.0;
    v36 = v9;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v36, v10, v11, v12);
    return System_String__Format(v8, v13, 0LL);
  }
  if ( this->fields.isServantPoint )
  {
    v16 = System_Int32__ToString((int)this + 116, 0LL);
    v17 = System_String__Concat_61707032((System_String_o *)StringLiteral_10310/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v16, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IconDetailText = LocalizationManager__Get(v17, 0LL);
    if ( this->fields.isFollower )
      return IconDetailText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10309/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
    servantPoint = this->fields.servantPoint;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantPoint, v19, v20, v21);
    return System_String__Format_61721404(v18, (Il2CppObject *)IconDetailText, v22, 0LL);
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
  return LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetItemName(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4A5AD12 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AD12 = 1;
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

  if ( (byte_4A5AD13 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AD13 = 1;
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

  if ( (byte_4A5AD14 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AD14 = 1;
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
  System_String_o **v3; // x8
  System_String_o *v4; // x20
  System_String_o *v5; // x0

  if ( (byte_4A5AD11 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10257/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_10251/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/);
    byte_4A5AD11 = 1;
  }
  if ( (this->fields.member & 0x80000000) != 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v3 = (System_String_o **)&StringLiteral_10251/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
  if ( this->fields.isFollower )
    v3 = (System_String_o **)&StringLiteral_10257/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
  v4 = *v3;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get(v4, 0LL);
  return System_String__Format(v5, (Il2CppObject *)this->fields.servantName, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetTargetString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  int32_t baseFuncType; // w8
  int32_t targetType; // w8
  __int64 *v6; // x8

  if ( (byte_4A5AD15 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10260/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/);
    sub_1B885B0(&StringLiteral_10262/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/);
    sub_1B885B0(&StringLiteral_10261/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/);
    sub_1B885B0(&StringLiteral_10263/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AD15 = 1;
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
      v6 = &StringLiteral_10263/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    if ( targetType == 3 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_10260/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( targetType == 7 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_10261/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( targetType != 14 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = &StringLiteral_10262/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/;
  return LocalizationManager__Get((System_String_o *)*v6, 0LL);
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
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int iconId; // w21
  int baseFuncType; // w8
  struct ItemEntity_o *itemEntity; // x8
  UISprite_o *v9; // x0
  int32_t v10; // w1
  int *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  UISprite_o *v14; // x0
  System_String_o *v15; // x1
  __int64 *v16; // x8
  _BOOL4 isStartingMemberFriendshipUpAll; // w20
  int v18; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4A5AD17 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19671/*"func_group_icon_1009_starting"*/);
    sub_1B885B0(&StringLiteral_19669/*"func_group_icon_"*/);
    sub_1B885B0(&StringLiteral_19670/*"func_group_icon_1009"*/);
    sub_1B885B0(&StringLiteral_19673/*"func_group_icon_1028"*/);
    this = (EventMargeItemUpValInfo_o *)sub_1B885B0(&StringLiteral_19672/*"func_group_icon_1023_starting"*/);
    byte_4A5AD17 = 1;
  }
  v18 = 0;
  funcGroupEntity = v4->fields.funcGroupEntity;
  if ( funcGroupEntity )
  {
    iconId = funcGroupEntity->fields.iconId;
    v19 = iconId;
    if ( (iconId & 0x80000000) != 0 )
    {
      v11 = &v18;
      v18 = -iconId;
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
          v9 = sprite;
          v10 = iconId;
LABEL_18:
          AtlasManager__SetItem(v9, v10, 0LL);
          return;
        }
        itemEntity = v4->fields.itemEntity;
        if ( itemEntity )
        {
          iconId = itemEntity->fields.imageId;
          v19 = iconId;
          goto LABEL_11;
        }
LABEL_42:
        sub_1B8880C(this, sprite);
      }
      v11 = &v19;
    }
    v12 = System_Int32__ToString((int32_t)v11, 0LL);
    v13 = System_String__Concat_61707032((System_String_o *)StringLiteral_19669/*"func_group_icon_"*/, v12, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v14 = sprite;
    v15 = v13;
    goto LABEL_33;
  }
  if ( v4->fields.friendPointBonus >= 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v10 = 12;
    v9 = sprite;
    goto LABEL_18;
  }
  if ( v4->fields.isServantPoint )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v16 = &StringLiteral_19673/*"func_group_icon_1028"*/;
LABEL_32:
    v15 = (System_String_o *)*v16;
    v14 = sprite;
LABEL_33:
    AtlasManager__SetEventUI(v14, v15, 0LL);
    return;
  }
  if ( v4->fields.isFriendshipUpForCampaign )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v16 = &StringLiteral_19670/*"func_group_icon_1009"*/;
    goto LABEL_32;
  }
  if ( v4->fields.isStartingMemberFriendshipUp )
  {
    isStartingMemberFriendshipUpAll = v4->fields.isStartingMemberFriendshipUpAll;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( isStartingMemberFriendshipUpAll )
      v16 = &StringLiteral_19672/*"func_group_icon_1023_starting"*/;
    else
      v16 = &StringLiteral_19671/*"func_group_icon_1009_starting"*/;
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