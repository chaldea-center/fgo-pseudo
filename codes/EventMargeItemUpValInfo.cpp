void __fastcall EventMargeItemUpValInfo___ctor(
        EventMargeItemUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ItemEntity_o *itemEntity; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct ItemEntity_o *v35; // x8

  if ( (byte_4352F09 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352F09 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_B7076C(v5, v6);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = -1;
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.servantName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.servantName, v13, v7, v8, v9, v10, v11, v12);
  *(_WORD *)&this->fields.isFollower = 0;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.funcGroupEntity,
    (System_Int32_array **)funcGroupEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseFuncGroupEntity,
    (System_Int32_array **)baseFuncGroupEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.baseFuncId = dropItemInfo->fields.baseFuncId;
  this->fields.baseFuncType = dropItemInfo->fields.baseFuncType;
  this->fields.targetType = dropItemInfo->fields.targetType;
  this->fields.priority1 = dropItemInfo->fields.priority;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)itemEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = this->fields.itemEntity;
  if ( v35 )
    LODWORD(v35) = v35->fields.priority;
  this->fields.priority2 = (int)v35;
}


void __fastcall EventMargeItemUpValInfo___ctor_27374592(
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t eventId; // w8
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct ItemEntity_o *itemEntity; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct ItemEntity_o *v43; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_B7076C(v13, v14);
  eventId = dropItemInfo->fields.eventId;
  this->fields.servantName = servantName;
  this->fields.eventId = eventId;
  this->fields.member = member;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantName,
    (System_Int32_array **)servantName,
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.funcGroupEntity,
    (System_Int32_array **)funcGroupEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseFuncGroupEntity,
    (System_Int32_array **)baseFuncGroupEntity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.baseFuncId = dropItemInfo->fields.baseFuncId;
  this->fields.baseFuncType = dropItemInfo->fields.baseFuncType;
  this->fields.targetType = dropItemInfo->fields.targetType;
  this->fields.priority1 = dropItemInfo->fields.priority;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)itemEntity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = this->fields.itemEntity;
  if ( v43 )
    LODWORD(v43) = v43->fields.priority;
  this->fields.priority2 = (int)v43;
}


void __fastcall EventMargeItemUpValInfo___ctor_27374840(
        EventMargeItemUpValInfo_o *this,
        int32_t eventId,
        int32_t friendPointBonus,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  this->fields.eventId = eventId;
  this->fields.friendPointBonus = friendPointBonus;
  this->fields.isFriendPointBonus = 1;
}


void __fastcall EventMargeItemUpValInfo___ctor_27374932(
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
  int32_t v4; // w8

  if ( !info )
    sub_B7076C(this, 0LL);
  if ( this->fields.isOtherUp == info->fields.isOtherUp )
  {
    v4 = info->fields.priority1 - this->fields.priority1;
    if ( !v4 )
      return this->fields.priority2 - info->fields.priority2;
    return v4;
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
  int32_t member; // w9
  int32_t v4; // w8
  int32_t v5; // w8

  member = this->fields.member;
  if ( (member & 0x80000000) == 0 )
  {
    if ( info )
    {
      v4 = info->fields.member;
      if ( (v4 & 0x80000000) == 0 )
        return member - v4;
      v5 = -1;
      goto LABEL_9;
    }
LABEL_13:
    sub_B7076C(this, info);
  }
  if ( !info )
    goto LABEL_13;
  if ( (info->fields.member & 0x80000000) == 0 )
  {
    v5 = 1;
LABEL_9:
    if ( member != info->fields.member )
      return v5;
  }
  v5 = info->fields.priority1 - this->fields.priority1;
  if ( !v5 )
    return this->fields.priority2 - info->fields.priority2;
  return v5;
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
    sub_B7076C(this, 0LL);
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
  __int64 *v3; // x8

  if ( (byte_4352F0A & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_10462/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/);
    sub_B70694(&StringLiteral_10464/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/);
    byte_4352F0A = 1;
  }
  if ( this->fields.isOtherUp )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v3 = &StringLiteral_10464/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v3 = &StringLiteral_10462/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v3, 0LL);
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
  Il2CppObject *v11; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  System_String_o *v16; // x21
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  int32_t v19; // w20
  int32_t v20; // w0
  System_String_o *v21; // x2
  int v22; // w1
  bool v23; // w3
  int32_t rateCount; // w19
  int32_t v25; // w19
  int32_t v26; // w20
  int32_t v27; // w21
  struct ItemEntity_o *itemEntity; // x8
  void **p_unit; // x8
  System_String_o *v30; // x19
  int32_t servantPoint; // [xsp+8h] [xbp-18h] BYREF
  float v32; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4352F10 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_11781/*"SELECT_FP_NUM_UP"*/);
    sub_B70694(&StringLiteral_10517/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_10487/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/);
    sub_B70694(&StringLiteral_10518/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/);
    byte_4352F10 = 1;
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
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v21 = (System_String_o *)StringLiteral_1/*""*/;
            v22 = rateCount / 10;
            v23 = 1;
            v20 = 0;
            return LocalizationManager__GetEventPointInfo(v20, v22, v21, v23, 0LL);
          }
          if ( baseFuncType != 16 )
            goto LABEL_54;
        }
      }
      else
      {
        v6 = baseFuncType - 106;
        if ( v6 > 0x1A )
          goto LABEL_54;
        if ( ((1 << v6) & 0x4800320) == 0 )
        {
          if ( ((1 << v6) & 5) != 0 )
          {
            addCount = this->fields.addCount;
LABEL_38:
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v20 = 0;
LABEL_42:
            v21 = (System_String_o *)StringLiteral_1/*""*/;
            v22 = addCount;
LABEL_43:
            v23 = 0;
            return LocalizationManager__GetEventPointInfo(v20, v22, v21, v23, 0LL);
          }
          if ( v6 == 10 )
          {
            v25 = this->fields.rateCount;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v21 = (System_String_o *)StringLiteral_1/*""*/;
            v22 = v25 / 10;
            v20 = 0;
            goto LABEL_43;
          }
LABEL_54:
          v26 = this->fields.addCount;
          v27 = this->fields.rateCount;
          itemEntity = this->fields.itemEntity;
          if ( itemEntity )
            p_unit = (void **)&itemEntity->fields.unit;
          else
            p_unit = &StringLiteral_1/*""*/;
          v30 = (System_String_o *)*p_unit;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v20 = v26;
          v22 = v27;
          v21 = v30;
          goto LABEL_43;
        }
      }
      v19 = this->fields.addCount;
      addCount = this->fields.rateCount;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = v19;
      goto LABEL_42;
    }
    return IconDetailText;
  }
  if ( this->fields.friendPointBonus >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11781/*"SELECT_FP_NUM_UP"*/, 0LL);
    v9 = (double)this->fields.friendPointBonus / 1000.0;
    v32 = v9;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v32, v10);
    return System_String__Format(v8, v11, 0LL);
  }
  if ( this->fields.isServantPoint )
  {
    v14 = System_Int32__ToString((int)this + 116, 0LL);
    v15 = System_String__Concat_44758168((System_String_o *)StringLiteral_10518/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v14, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IconDetailText = LocalizationManager__Get(v15, 0LL);
    if ( this->fields.isFollower )
      return IconDetailText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10517/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
    servantPoint = this->fields.servantPoint;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantPoint, v17);
    return System_String__Format_44753704(v16, (Il2CppObject *)IconDetailText, v18, 0LL);
  }
  if ( this->fields.isFriendshipUpForCampaign )
  {
    addCount = this->fields.friendshipUpBonus;
    goto LABEL_38;
  }
  if ( this->fields.isStartingMemberFriendshipUp )
  {
    addCount = this->fields.startingMemberFriendshipUpBonus;
    goto LABEL_38;
  }
  if ( !this->fields.isNotClassBoard )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10487/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetItemName(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4352F0C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352F0C = 1;
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

  if ( (byte_4352F0D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352F0D = 1;
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

  if ( (byte_4352F0E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352F0E = 1;
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

  if ( (byte_4352F0B & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_10465/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_10459/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/);
    byte_4352F0B = 1;
  }
  if ( (this->fields.member & 0x80000000) != 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( this->fields.isFollower )
    v3 = (System_String_o **)&StringLiteral_10465/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
  else
    v3 = (System_String_o **)&StringLiteral_10459/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
  v4 = *v3;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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

  if ( (byte_4352F0F & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_10468/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/);
    sub_B70694(&StringLiteral_10470/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/);
    sub_B70694(&StringLiteral_10469/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/);
    sub_B70694(&StringLiteral_10471/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352F0F = 1;
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
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_10471/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    if ( targetType == 3 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_10468/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( targetType == 7 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_10469/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( targetType != 14 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = &StringLiteral_10470/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/;
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
  int32_t iconId; // w21
  int baseFuncType; // w8
  struct ItemEntity_o *itemEntity; // x8
  UISprite_o *v9; // x0
  int32_t v10; // w1
  __int64 *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  UISprite_o *v14; // x0
  System_String_o *v15; // x1
  __int64 *v16; // x8
  __int64 v17; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4352F11 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&StringLiteral_19221/*"func_group_icon_1009_starting"*/);
    sub_B70694(&StringLiteral_19219/*"func_group_icon_"*/);
    sub_B70694(&StringLiteral_19220/*"func_group_icon_1009"*/);
    sub_B70694(&StringLiteral_19223/*"func_group_icon_1028"*/);
    this = (EventMargeItemUpValInfo_o *)sub_B70694(&StringLiteral_19222/*"func_group_icon_1023_starting"*/);
    byte_4352F11 = 1;
  }
  v17 = 0LL;
  funcGroupEntity = v4->fields.funcGroupEntity;
  if ( funcGroupEntity )
  {
    iconId = funcGroupEntity->fields.iconId;
    HIDWORD(v17) = iconId;
    if ( (iconId & 0x80000000) != 0 )
    {
      v11 = &v17;
      LODWORD(v17) = -iconId;
    }
    else
    {
      baseFuncType = v4->fields.baseFuncType;
      if ( baseFuncType >= 17 && ((unsigned int)(baseFuncType - 105) < 4 || baseFuncType == 132) )
      {
        if ( iconId )
        {
LABEL_11:
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          v9 = sprite;
          v10 = iconId;
LABEL_20:
          AtlasManager__SetItem(v9, v10, 0LL);
          return;
        }
        itemEntity = v4->fields.itemEntity;
        if ( itemEntity )
        {
          iconId = itemEntity->fields.imageId;
          HIDWORD(v17) = iconId;
          goto LABEL_11;
        }
LABEL_51:
        sub_B7076C(this, sprite);
      }
      v11 = (__int64 *)((char *)&v17 + 4);
    }
    v12 = System_Int32__ToString((int32_t)v11, 0LL);
    v13 = System_String__Concat_44758168((System_String_o *)StringLiteral_19219/*"func_group_icon_"*/, v12, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v14 = sprite;
    v15 = v13;
    goto LABEL_38;
  }
  if ( v4->fields.friendPointBonus >= 1 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v10 = 12;
    v9 = sprite;
    goto LABEL_20;
  }
  if ( v4->fields.isServantPoint )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v16 = &StringLiteral_19223/*"func_group_icon_1028"*/;
LABEL_37:
    v15 = (System_String_o *)*v16;
    v14 = sprite;
LABEL_38:
    AtlasManager__SetEventUI(v14, v15, 0LL);
    return;
  }
  if ( v4->fields.isFriendshipUpForCampaign )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v16 = &StringLiteral_19220/*"func_group_icon_1009"*/;
    goto LABEL_37;
  }
  if ( v4->fields.isStartingMemberFriendshipUp )
  {
    if ( v4->fields.isStartingMemberFriendshipUpAll )
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v16 = &StringLiteral_19222/*"func_group_icon_1023_starting"*/;
    }
    else
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v16 = &StringLiteral_19221/*"func_group_icon_1009_starting"*/;
    }
    goto LABEL_37;
  }
  if ( !sprite )
    goto LABEL_51;
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