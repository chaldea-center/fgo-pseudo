void __fastcall EventMargeItemUpValInfo___ctor(
        EventMargeItemUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct ItemEntity_o *itemEntity; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct ItemEntity_o *v18; // x8

  if ( (byte_49FBFCC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, dropItemInfo);
    byte_49FBFCC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_1B64324(v5);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = -1;
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.servantName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantName, v8, v6, v7);
  *(_WORD *)&this->fields.isFollower = 0;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.funcGroupEntity, (int32_t)funcGroupEntity, v10, v11);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseFuncGroupEntity,
    (int32_t)baseFuncGroupEntity,
    v13,
    v14);
  *(_OWORD *)&this->fields.baseFuncId = *(_OWORD *)&dropItemInfo->fields.baseFuncId;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemEntity, (int32_t)itemEntity, v16, v17);
  v18 = this->fields.itemEntity;
  if ( v18 )
    LODWORD(v18) = v18->fields.priority;
  this->fields.priority2 = (int)v18;
}


void __fastcall EventMargeItemUpValInfo___ctor_38572708(
        EventMargeItemUpValInfo_o *this,
        int32_t member,
        System_String_o *servantName,
        bool isFollower,
        bool isOtherUp,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct ItemEntity_o *itemEntity; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  struct ItemEntity_o *v25; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_1B64324(v13);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = member;
  this->fields.servantName = servantName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantName, (int32_t)servantName, v14, v15);
  this->fields.isFollower = isFollower;
  this->fields.isOtherUp = isOtherUp;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.funcGroupEntity, (int32_t)funcGroupEntity, v17, v18);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseFuncGroupEntity,
    (int32_t)baseFuncGroupEntity,
    v20,
    v21);
  *(_OWORD *)&this->fields.baseFuncId = *(_OWORD *)&dropItemInfo->fields.baseFuncId;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemEntity, (int32_t)itemEntity, v23, v24);
  v25 = this->fields.itemEntity;
  if ( v25 )
    LODWORD(v25) = v25->fields.priority;
  this->fields.priority2 = (int)v25;
}


void __fastcall EventMargeItemUpValInfo___ctor_38572920(
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


void __fastcall EventMargeItemUpValInfo___ctor_38573000(
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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

  if ( (byte_49FBFCD & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_10205/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/, v3);
    sub_1B640C8(&StringLiteral_10207/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/, v4);
    byte_49FBFCD = 1;
  }
  isOtherUp = this->fields.isOtherUp;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isOtherUp )
    v6 = (System_String_o **)&StringLiteral_10207/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/;
  else
    v6 = (System_String_o **)&StringLiteral_10205/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/;
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
  Il2CppObject *v17; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  int32_t v24; // w20
  int32_t v25; // w0
  System_String_o *v26; // x2
  int v27; // w1
  bool v28; // w3
  int32_t rateCount; // w19
  int32_t v30; // w19
  int32_t v31; // w20
  int32_t v32; // w21
  struct ItemEntity_o *itemEntity; // x8
  void **p_unit; // x8
  System_String_o *v35; // x19
  int32_t servantPoint; // [xsp+8h] [xbp-28h] BYREF
  float v37; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FBFD3 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&float_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_11449/*"SELECT_FP_NUM_UP"*/, v5);
    sub_1B640C8(&StringLiteral_10260/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    sub_1B640C8(&StringLiteral_10230/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, v8);
    sub_1B640C8(&StringLiteral_10261/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v9);
    byte_49FBFD3 = 1;
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
            v26 = (System_String_o *)StringLiteral_1/*""*/;
            v27 = rateCount / 10;
            v28 = 1;
            v25 = 0;
            return LocalizationManager__GetEventPointInfo(v25, v27, v26, v28, 0LL);
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
            v25 = 0;
LABEL_37:
            v26 = (System_String_o *)StringLiteral_1/*""*/;
            v27 = addCount;
LABEL_38:
            v28 = 0;
            return LocalizationManager__GetEventPointInfo(v25, v27, v26, v28, 0LL);
          }
          if ( v13 == 10 )
          {
            v30 = this->fields.rateCount;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v26 = (System_String_o *)StringLiteral_1/*""*/;
            v27 = v30 / 10;
            v25 = 0;
            goto LABEL_38;
          }
LABEL_47:
          v31 = this->fields.addCount;
          v32 = this->fields.rateCount;
          itemEntity = this->fields.itemEntity;
          if ( itemEntity )
            p_unit = (void **)&itemEntity->fields.unit;
          else
            p_unit = &StringLiteral_1/*""*/;
          v35 = (System_String_o *)*p_unit;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v25 = v31;
          v27 = v32;
          v26 = v35;
          goto LABEL_38;
        }
      }
      v24 = this->fields.addCount;
      addCount = this->fields.rateCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = v24;
      goto LABEL_37;
    }
    return IconDetailText;
  }
  if ( this->fields.friendPointBonus >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11449/*"SELECT_FP_NUM_UP"*/, 0LL);
    v16 = (double)this->fields.friendPointBonus / 1000.0;
    v37 = v16;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v37);
    return System_String__Format(v15, v17, 0LL);
  }
  if ( this->fields.isServantPoint )
  {
    v20 = System_Int32__ToString((int)this + 116, 0LL);
    v21 = System_String__Concat_61375396((System_String_o *)StringLiteral_10261/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v20, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IconDetailText = LocalizationManager__Get(v21, 0LL);
    if ( this->fields.isFollower )
      return IconDetailText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10260/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
    servantPoint = this->fields.servantPoint;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantPoint);
    return System_String__Format_61389768(v22, (Il2CppObject *)IconDetailText, v23, 0LL);
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
  return LocalizationManager__Get((System_String_o *)StringLiteral_10230/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetItemName(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_49FBFCF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FBFCF = 1;
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

  if ( (byte_49FBFD0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FBFD0 = 1;
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

  if ( (byte_49FBFD1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FBFD1 = 1;
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

  if ( (byte_49FBFCE & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_10208/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    sub_1B640C8(&StringLiteral_10202/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/, v5);
    byte_49FBFCE = 1;
  }
  if ( (this->fields.member & 0x80000000) != 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = (System_String_o **)&StringLiteral_10202/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
  if ( this->fields.isFollower )
    v6 = (System_String_o **)&StringLiteral_10208/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
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

  if ( (byte_49FBFD2 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_10211/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/, v3);
    sub_1B640C8(&StringLiteral_10213/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/, v4);
    sub_1B640C8(&StringLiteral_10212/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/, v5);
    sub_1B640C8(&StringLiteral_10214/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FBFD2 = 1;
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
      v11 = &StringLiteral_10214/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/;
      return LocalizationManager__Get((System_String_o *)*v11, 0LL);
    }
    if ( targetType == 3 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_10211/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v11, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( targetType == 7 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_10212/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/;
    return LocalizationManager__Get((System_String_o *)*v11, 0LL);
  }
  if ( targetType != 14 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = &StringLiteral_10213/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/;
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
  if ( (byte_49FBFD4 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, sprite);
    sub_1B640C8(&StringLiteral_19592/*"func_group_icon_1009_starting"*/, v5);
    sub_1B640C8(&StringLiteral_19590/*"func_group_icon_"*/, v6);
    sub_1B640C8(&StringLiteral_19591/*"func_group_icon_1009"*/, v7);
    sub_1B640C8(&StringLiteral_19594/*"func_group_icon_1028"*/, v8);
    this = (EventMargeItemUpValInfo_o *)sub_1B640C8(&StringLiteral_19593/*"func_group_icon_1023_starting"*/, v9);
    byte_49FBFD4 = 1;
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
        sub_1B64324(this);
      }
      v16 = &v24;
    }
    v17 = System_Int32__ToString((int32_t)v16, 0LL);
    v18 = System_String__Concat_61375396((System_String_o *)StringLiteral_19590/*"func_group_icon_"*/, v17, 0LL);
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
    v21 = &StringLiteral_19594/*"func_group_icon_1028"*/;
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
    v21 = &StringLiteral_19591/*"func_group_icon_1009"*/;
    goto LABEL_32;
  }
  if ( v4->fields.isStartingMemberFriendshipUp )
  {
    isStartingMemberFriendshipUpAll = v4->fields.isStartingMemberFriendshipUpAll;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( isStartingMemberFriendshipUpAll )
      v21 = &StringLiteral_19593/*"func_group_icon_1023_starting"*/;
    else
      v21 = &StringLiteral_19592/*"func_group_icon_1009_starting"*/;
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