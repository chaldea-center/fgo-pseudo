void __fastcall EventMargeItemUpValInfo___ctor(
        EventMargeItemUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ItemEntity_o *itemEntity; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct ItemEntity_o *v36; // x8

  if ( (byte_42E9B2C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)dropItemInfo, (_DWORD)method, v3);
    byte_42E9B2C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isFriendPointBonus = 0;
  this->fields.isServantPoint = 0;
  this->fields.isFriendshipUpForCampaign = 0;
  this->fields.isStartingMemberFriendshipUp = 0;
  *(_WORD *)&this->fields.isStartingMemberFriendshipUpAll = 0;
  if ( !dropItemInfo )
    sub_B5D69C(v6, v7);
  this->fields.eventId = dropItemInfo->fields.eventId;
  this->fields.member = -1;
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.servantName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantName, v14, v8, v9, v10, v11, v12, v13);
  *(_WORD *)&this->fields.isFollower = 0;
  funcGroupEntity = dropItemInfo->fields.funcGroupEntity;
  this->fields.funcGroupEntity = funcGroupEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.funcGroupEntity,
    (System_Int32_array **)funcGroupEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  baseFuncGroupEntity = dropItemInfo->fields.baseFuncGroupEntity;
  this->fields.baseFuncGroupEntity = baseFuncGroupEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseFuncGroupEntity,
    (System_Int32_array **)baseFuncGroupEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.baseFuncId = dropItemInfo->fields.baseFuncId;
  this->fields.baseFuncType = dropItemInfo->fields.baseFuncType;
  this->fields.targetType = dropItemInfo->fields.targetType;
  this->fields.priority1 = dropItemInfo->fields.priority;
  itemEntity = dropItemInfo->fields.itemEntity;
  this->fields.itemEntity = itemEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)itemEntity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = this->fields.itemEntity;
  if ( v36 )
    LODWORD(v36) = v36->fields.priority;
  this->fields.priority2 = (int)v36;
}


void __fastcall EventMargeItemUpValInfo___ctor_27133088(
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
    sub_B5D69C(v13, v14);
  eventId = dropItemInfo->fields.eventId;
  this->fields.servantName = servantName;
  this->fields.eventId = eventId;
  this->fields.member = member;
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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


void __fastcall EventMargeItemUpValInfo___ctor_27133336(
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


void __fastcall EventMargeItemUpValInfo___ctor_27133428(
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, info);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 *v11; // x8

  if ( (byte_42E9B2D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10443/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10445/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/, v8, v9, v10);
    byte_42E9B2D = 1;
  }
  if ( this->fields.isOtherUp )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_10445/*"PARTY_ORGANIZATION_EVENT_MEMBER_OTHER_EFFECT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_10443/*"PARTY_ORGANIZATION_EVENT_MEMBER_MINE_EFFECT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v11, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetEventUpString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct FunctionGroupEntity_o *funcGroupEntity; // x0
  System_String_o *IconDetailText; // x20
  int32_t baseFuncType; // w8
  unsigned int v29; // w8
  int32_t addCount; // w19
  System_String_o *v31; // x20
  float v32; // s0
  Il2CppObject *v33; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x20
  System_String_o *v38; // x21
  Il2CppObject *v39; // x0
  int32_t v40; // w20
  int32_t v41; // w0
  System_String_o *v42; // x2
  int v43; // w1
  bool v44; // w3
  int32_t rateCount; // w19
  int32_t v46; // w19
  int32_t v47; // w20
  int32_t v48; // w21
  struct ItemEntity_o *itemEntity; // x8
  void **p_unit; // x8
  System_String_o *v51; // x19
  int32_t servantPoint; // [xsp+8h] [xbp-18h] BYREF
  float v53; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9B33 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&float_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11760/*"SELECT_FP_NUM_UP"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10496/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_10466/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_10497/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v23, v24, v25);
    byte_42E9B33 = 1;
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
            v42 = (System_String_o *)StringLiteral_1/*""*/;
            v43 = rateCount / 10;
            v44 = 1;
            v41 = 0;
            return LocalizationManager__GetEventPointInfo(v41, v43, v42, v44, 0LL);
          }
          if ( baseFuncType != 16 )
            goto LABEL_54;
        }
      }
      else
      {
        v29 = baseFuncType - 106;
        if ( v29 > 0x1A )
          goto LABEL_54;
        if ( ((1 << v29) & 0x4800320) == 0 )
        {
          if ( ((1 << v29) & 5) != 0 )
          {
            addCount = this->fields.addCount;
LABEL_38:
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v41 = 0;
LABEL_42:
            v42 = (System_String_o *)StringLiteral_1/*""*/;
            v43 = addCount;
LABEL_43:
            v44 = 0;
            return LocalizationManager__GetEventPointInfo(v41, v43, v42, v44, 0LL);
          }
          if ( v29 == 10 )
          {
            v46 = this->fields.rateCount;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v42 = (System_String_o *)StringLiteral_1/*""*/;
            v43 = v46 / 10;
            v41 = 0;
            goto LABEL_43;
          }
LABEL_54:
          v47 = this->fields.addCount;
          v48 = this->fields.rateCount;
          itemEntity = this->fields.itemEntity;
          if ( itemEntity )
            p_unit = (void **)&itemEntity->fields.unit;
          else
            p_unit = &StringLiteral_1/*""*/;
          v51 = (System_String_o *)*p_unit;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v41 = v47;
          v43 = v48;
          v42 = v51;
          goto LABEL_43;
        }
      }
      v40 = this->fields.addCount;
      addCount = this->fields.rateCount;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v41 = v40;
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
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11760/*"SELECT_FP_NUM_UP"*/, 0LL);
    v32 = (double)this->fields.friendPointBonus / 1000.0;
    v53 = v32;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v53);
    return System_String__Format(v31, v33, 0LL);
  }
  if ( this->fields.isServantPoint )
  {
    v36 = System_Int32__ToString((int)this + 116, 0LL);
    v37 = System_String__Concat_44577788((System_String_o *)StringLiteral_10497/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v36, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IconDetailText = LocalizationManager__Get(v37, 0LL);
    if ( this->fields.isFollower )
      return IconDetailText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_10496/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
    servantPoint = this->fields.servantPoint;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantPoint);
    return System_String__Format_44573324(v38, (Il2CppObject *)IconDetailText, v39, 0LL);
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
  return LocalizationManager__Get((System_String_o *)StringLiteral_10466/*"PARTY_ORGANIZATION_NOT_CLASS_BOARD"*/, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetItemName(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_42E9B2F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E9B2F = 1;
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
  int v2; // w2
  __int64 v3; // x3
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_42E9B30 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E9B30 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  struct FunctionGroupEntity_o *baseFuncGroupEntity; // x8
  System_String_o **p_nameTotal; // x8

  if ( (byte_42E9B31 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E9B31 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o **v14; // x8
  System_String_o *v15; // x20
  System_String_o *v16; // x0

  if ( (byte_42E9B2E & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10446/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10440/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/, v11, v12, v13);
    byte_42E9B2E = 1;
  }
  if ( (this->fields.member & 0x80000000) != 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( this->fields.isFollower )
    v14 = (System_String_o **)&StringLiteral_10446/*"PARTY_ORGANIZATION_EVENT_MEMBER_SUPPORT"*/;
  else
    v14 = (System_String_o **)&StringLiteral_10440/*"PARTY_ORGANIZATION_EVENT_MEMBER"*/;
  v15 = *v14;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get(v15, 0LL);
  return System_String__Format(v16, (Il2CppObject *)this->fields.servantName, 0LL);
}


System_String_o *__fastcall EventMargeItemUpValInfo__GetTargetString(
        EventMargeItemUpValInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t baseFuncType; // w8
  int32_t targetType; // w8
  __int64 *v23; // x8

  if ( (byte_42E9B32 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10449/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10451/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10450/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10452/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42E9B32 = 1;
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
      v23 = &StringLiteral_10452/*"PARTY_ORGANIZATION_EVENT_TARGET_SELF"*/;
      return LocalizationManager__Get((System_String_o *)*v23, 0LL);
    }
    if ( targetType == 3 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = &StringLiteral_10449/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_ALL"*/;
      return LocalizationManager__Get((System_String_o *)*v23, 0LL);
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
    v23 = &StringLiteral_10450/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_FULL"*/;
    return LocalizationManager__Get((System_String_o *)*v23, 0LL);
  }
  if ( targetType != 14 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = &StringLiteral_10451/*"PARTY_ORGANIZATION_EVENT_TARGET_PT_OTHER_FULL"*/;
  return LocalizationManager__Get((System_String_o *)*v23, 0LL);
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
  __int64 v3; // x3
  EventMargeItemUpValInfo_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int32_t iconId; // w21
  int baseFuncType; // w8
  struct ItemEntity_o *itemEntity; // x8
  UISprite_o *v25; // x0
  int32_t v26; // w1
  __int64 *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  UISprite_o *v30; // x0
  System_String_o *v31; // x1
  __int64 *v32; // x8
  __int64 v33; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42E9B34 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)sprite, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_19165/*"func_group_icon_1009_starting"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_19163/*"func_group_icon_"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19164/*"func_group_icon_1009"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_19167/*"func_group_icon_1028"*/, v15, v16, v17);
    this = (EventMargeItemUpValInfo_o *)sub_B5D5C4(&StringLiteral_19166/*"func_group_icon_1023_starting"*/, v18, v19, v20);
    byte_42E9B34 = 1;
  }
  v33 = 0LL;
  funcGroupEntity = v5->fields.funcGroupEntity;
  if ( funcGroupEntity )
  {
    iconId = funcGroupEntity->fields.iconId;
    HIDWORD(v33) = iconId;
    if ( (iconId & 0x80000000) != 0 )
    {
      v27 = &v33;
      LODWORD(v33) = -iconId;
    }
    else
    {
      baseFuncType = v5->fields.baseFuncType;
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
          v25 = sprite;
          v26 = iconId;
LABEL_20:
          AtlasManager__SetItem(v25, v26, 0LL);
          return;
        }
        itemEntity = v5->fields.itemEntity;
        if ( itemEntity )
        {
          iconId = itemEntity->fields.imageId;
          HIDWORD(v33) = iconId;
          goto LABEL_11;
        }
LABEL_51:
        sub_B5D69C(this, sprite);
      }
      v27 = (__int64 *)((char *)&v33 + 4);
    }
    v28 = System_Int32__ToString((int32_t)v27, 0LL);
    v29 = System_String__Concat_44577788((System_String_o *)StringLiteral_19163/*"func_group_icon_"*/, v28, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v30 = sprite;
    v31 = v29;
    goto LABEL_38;
  }
  if ( v5->fields.friendPointBonus >= 1 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v26 = 12;
    v25 = sprite;
    goto LABEL_20;
  }
  if ( v5->fields.isServantPoint )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v32 = &StringLiteral_19167/*"func_group_icon_1028"*/;
LABEL_37:
    v31 = (System_String_o *)*v32;
    v30 = sprite;
LABEL_38:
    AtlasManager__SetEventUI(v30, v31, 0LL);
    return;
  }
  if ( v5->fields.isFriendshipUpForCampaign )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v32 = &StringLiteral_19164/*"func_group_icon_1009"*/;
    goto LABEL_37;
  }
  if ( v5->fields.isStartingMemberFriendshipUp )
  {
    if ( v5->fields.isStartingMemberFriendshipUpAll )
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v32 = &StringLiteral_19166/*"func_group_icon_1023_starting"*/;
    }
    else
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v32 = &StringLiteral_19165/*"func_group_icon_1009_starting"*/;
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