void __fastcall EventMargeItemUpValInfo___ctor(
        EventMargeItemUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ItemEntity_o *itemEntity; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct ItemEntity_o *v34; // x8

  if ( (byte_4215A1F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, dropItemInfo);
    byte_4215A1F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_B0D97C(v5);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = -1;
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.servantName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.servantName, v12, v6, v7, v8, v9, v10, v11);
  *(_WORD *)&this->fields.isFollower = 0;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.funcGroupEntity,
    (System_Int32_array **)funcGroupEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseFuncGroupEntity,
    (System_Int32_array **)baseFuncGroupEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.baseFuncId = dropItemInfo->fields.baseFuncId;
  this->fields.baseFuncType = dropItemInfo->fields.baseFuncType;
  this->fields.targetType = dropItemInfo->fields.targetType;
  this->fields.priority1 = dropItemInfo->fields.priority;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)itemEntity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = this->fields.itemEntity;
  if ( v34 )
    LODWORD(v34) = v34->fields.priority;
  this->fields.priority2 = (int)v34;
}


void __fastcall EventMargeItemUpValInfo___ctor_26623760(
        EventMargeItemUpValInfo_o *this,
        int32_t member,
        System_String_o *servantName,
        bool isFollower,
        bool isOtherUp,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t eventId; // w8
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct ItemEntity_o *itemEntity; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ItemEntity_o *v42; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_B0D97C(v13);
  eventId = dropItemInfo->fields.eventId;
  this->fields.servantName = servantName;
  this->fields.eventId = eventId;
  this->fields.member = member;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantName,
    (System_Int32_array **)servantName,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.isFollower = isFollower;
  this->fields.isOtherUp = isOtherUp;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.funcGroupEntity,
    (System_Int32_array **)funcGroupEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseFuncGroupEntity,
    (System_Int32_array **)baseFuncGroupEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.baseFuncId = dropItemInfo->fields.baseFuncId;
  this->fields.baseFuncType = dropItemInfo->fields.baseFuncType;
  this->fields.targetType = dropItemInfo->fields.targetType;
  this->fields.priority1 = dropItemInfo->fields.priority;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)itemEntity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = this->fields.itemEntity;
  if ( v42 )
    LODWORD(v42) = v42->fields.priority;
  this->fields.priority2 = (int)v42;
}


void __fastcall EventMargeItemUpValInfo___ctor_26624008(
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


void __fastcall EventMargeItemUpValInfo___ctor_26624100(
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 *v5; // x8

  if ( (byte_4215A20 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10361/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/, v3);
    sub_B0D8A4(&StringLiteral_10363/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/, v4);
    byte_4215A20 = 1;
  }
  if ( this->fields.isOtherUp )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = &StringLiteral_10363/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = &StringLiteral_10361/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v5, 0LL);
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
  int32_t servantPoint; // [xsp+8h] [xbp-18h] BYREF
  float v37; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215A26 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&float_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_11654/*"SELECT_FP_NUM_UP"*/, v5);
    sub_B0D8A4(&StringLiteral_10412/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    sub_B0D8A4(&StringLiteral_10384/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, v8);
    sub_B0D8A4(&StringLiteral_10413/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v9);
    byte_4215A26 = 1;
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
            v26 = (System_String_o *)StringLiteral_1/*""*/;
            v27 = rateCount / 10;
            v28 = 1;
            v25 = 0;
            return LocalizationManager__GetEventPointInfo(v25, v27, v26, v28, 0LL);
          }
          if ( baseFuncType != 16 )
            goto LABEL_54;
        }
      }
      else
      {
        v13 = baseFuncType - 106;
        if ( v13 > 0x1A )
          goto LABEL_54;
        if ( ((1 << v13) & 0x4800320) == 0 )
        {
          if ( ((1 << v13) & 5) != 0 )
          {
            addCount = this->fields.addCount;
LABEL_38:
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v25 = 0;
LABEL_42:
            v26 = (System_String_o *)StringLiteral_1/*""*/;
            v27 = addCount;
LABEL_43:
            v28 = 0;
            return LocalizationManager__GetEventPointInfo(v25, v27, v26, v28, 0LL);
          }
          if ( v13 == 10 )
          {
            v30 = this->fields.rateCount;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v26 = (System_String_o *)StringLiteral_1/*""*/;
            v27 = v30 / 10;
            v25 = 0;
            goto LABEL_43;
          }
LABEL_54:
          v31 = this->fields.addCount;
          v32 = this->fields.rateCount;
          itemEntity = this->fields.itemEntity;
          if ( itemEntity )
            p_unit = (void **)&itemEntity->fields.unit;
          else
            p_unit = &StringLiteral_1/*""*/;
          v35 = (System_String_o *)*p_unit;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v25 = v31;
          v27 = v32;
          v26 = v35;
          goto LABEL_43;
        }
      }
      v24 = this->fields.addCount;
      addCount = this->fields.rateCount;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = v24;
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
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11654/*"SELECT_FP_NUM_UP"*/, 0LL);
    v16 = (double)this->fields.friendPointBonus / 1000.0;
    v37 = v16;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v37);
    return System_String__Format(v15, v17, 0LL);
  }
  if ( this->fields.isServantPoint )
  {
    v20 = System_Int32__ToString((int)this + 116, 0LL);
    v21 = System_String__Concat_43849904((System_String_o *)StringLiteral_10413/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v20, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IconDetailText = LocalizationManager__Get(v21, 0LL);
    if ( this->fields.isFollower )
      return IconDetailText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10412/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
    servantPoint = this->fields.servantPoint;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantPoint);
    return System_String__Format_43845440(v22, (Il2CppObject *)IconDetailText, v23, 0LL);
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
  return LocalizationManager__Get((System_String_o *)StringLiteral_10384/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetItemName(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4215A22 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4215A22 = 1;
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

  if ( (byte_4215A23 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4215A23 = 1;
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

  if ( (byte_4215A24 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4215A24 = 1;
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

  if ( (byte_4215A21 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10364/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    sub_B0D8A4(&StringLiteral_10358/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/, v5);
    byte_4215A21 = 1;
  }
  if ( (this->fields.member & 0x80000000) != 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( this->fields.isFollower )
    v6 = (System_String_o **)&StringLiteral_10364/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
  else
    v6 = (System_String_o **)&StringLiteral_10358/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
  v7 = *v6;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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

  if ( (byte_4215A25 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10367/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/, v3);
    sub_B0D8A4(&StringLiteral_10369/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/, v4);
    sub_B0D8A4(&StringLiteral_10368/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/, v5);
    sub_B0D8A4(&StringLiteral_10370/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4215A25 = 1;
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
      v11 = &StringLiteral_10370/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/;
      return LocalizationManager__Get((System_String_o *)*v11, 0LL);
    }
    if ( targetType == 3 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_10367/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v11, 0LL);
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
    v11 = &StringLiteral_10368/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/;
    return LocalizationManager__Get((System_String_o *)*v11, 0LL);
  }
  if ( targetType != 14 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = &StringLiteral_10369/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/;
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
  int32_t iconId; // w21
  int baseFuncType; // w8
  struct ItemEntity_o *itemEntity; // x8
  UISprite_o *v14; // x0
  int32_t v15; // w1
  __int64 *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  UISprite_o *v19; // x0
  System_String_o *v20; // x1
  __int64 *v21; // x8
  __int64 v22; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4215A27 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, sprite);
    sub_B0D8A4(&StringLiteral_18984/*"func_group_icon_1009_starting"*/, v5);
    sub_B0D8A4(&StringLiteral_18982/*"func_group_icon_"*/, v6);
    sub_B0D8A4(&StringLiteral_18983/*"func_group_icon_1009"*/, v7);
    sub_B0D8A4(&StringLiteral_18986/*"func_group_icon_1028"*/, v8);
    this = (EventMargeItemUpValInfo_o *)sub_B0D8A4(&StringLiteral_18985/*"func_group_icon_1023_starting"*/, v9);
    byte_4215A27 = 1;
  }
  v22 = 0LL;
  funcGroupEntity = v4->fields.funcGroupEntity;
  if ( funcGroupEntity )
  {
    iconId = funcGroupEntity->fields.iconId;
    HIDWORD(v22) = iconId;
    if ( (iconId & 0x80000000) != 0 )
    {
      v16 = &v22;
      LODWORD(v22) = -iconId;
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
          v14 = sprite;
          v15 = iconId;
LABEL_20:
          AtlasManager__SetItem(v14, v15, 0LL);
          return;
        }
        itemEntity = v4->fields.itemEntity;
        if ( itemEntity )
        {
          iconId = itemEntity->fields.imageId;
          HIDWORD(v22) = iconId;
          goto LABEL_11;
        }
LABEL_51:
        sub_B0D97C(this);
      }
      v16 = (__int64 *)((char *)&v22 + 4);
    }
    v17 = System_Int32__ToString((int32_t)v16, 0LL);
    v18 = System_String__Concat_43849904((System_String_o *)StringLiteral_18982/*"func_group_icon_"*/, v17, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v19 = sprite;
    v20 = v18;
    goto LABEL_38;
  }
  if ( v4->fields.friendPointBonus >= 1 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v15 = 12;
    v14 = sprite;
    goto LABEL_20;
  }
  if ( v4->fields.isServantPoint )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v21 = &StringLiteral_18986/*"func_group_icon_1028"*/;
LABEL_37:
    v20 = (System_String_o *)*v21;
    v19 = sprite;
LABEL_38:
    AtlasManager__SetEventUI(v19, v20, 0LL);
    return;
  }
  if ( v4->fields.isFriendshipUpForCampaign )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v21 = &StringLiteral_18983/*"func_group_icon_1009"*/;
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
      v21 = &StringLiteral_18985/*"func_group_icon_1023_starting"*/;
    }
    else
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v21 = &StringLiteral_18984/*"func_group_icon_1009_starting"*/;
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