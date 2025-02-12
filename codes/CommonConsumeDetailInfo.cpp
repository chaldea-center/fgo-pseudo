void __fastcall CommonConsumeDetailInfo___ctor(
        CommonConsumeDetailInfo_o *this,
        CommonConsumeEntity_o *commonConsumeEntity,
        Il2CppObject *targetEntity,
        Il2CppObject *userOwnStatusEntity,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x0
  const MethodInfo *v28; // x1
  struct CommonConsumeEntity_o *v29; // x8
  struct System_String_o *TargetName; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.CommonConsumeEntity = commonConsumeEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)commonConsumeEntity, v9, v10, v11, v12, v13, v14);
  this->fields.targetEntity = targetEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.targetEntity,
    (int64_t)targetEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.userOwnStatusEntity = userOwnStatusEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userOwnStatusEntity,
    (int64_t)userOwnStatusEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v29 = this->fields.CommonConsumeEntity;
  if ( !v29 )
    sub_1C13F80(v27, v28);
  this->fields._Num_k__BackingField = v29->fields.num;
  TargetName = CommonConsumeDetailInfo__GetTargetName(this, v28);
  this->fields._Name_k__BackingField = TargetName;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._Name_k__BackingField,
    (int64_t)TargetName,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields._IsOwnedEnoughly_k__BackingField = CommonConsumeDetailInfo__CheckIsOwnedEnoughly(this, v37);
}


bool __fastcall CommonConsumeDetailInfo__CheckIsOwnedEnoughly(
        CommonConsumeDetailInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *targetEntity; // x8
  __int64 methodPtr_low; // x10
  bool result; // w0
  Il2CppObject *userOwnStatusEntity; // x8
  __int64 v8; // x11

  if ( (byte_4BB41DD & 1) == 0 )
  {
    sub_1C13D24(&ItemEntity_TypeInfo, method);
    sub_1C13D24(&UserItemEntity_TypeInfo, v3);
    byte_4BB41DD = 1;
  }
  targetEntity = this->fields.targetEntity;
  result = targetEntity
        && (methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(targetEntity->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
        && (ItemEntity_c *)targetEntity->klass->_2.typeHierarchy[methodPtr_low - 1] == ItemEntity_TypeInfo
        && (userOwnStatusEntity = this->fields.userOwnStatusEntity) != 0LL
        && (v8 = LOBYTE(UserItemEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(userOwnStatusEntity->klass->vtable[0].methodPtr) >= (unsigned int)v8)
        && (UserItemEntity_c *)userOwnStatusEntity->klass->_2.typeHierarchy[v8 - 1] == UserItemEntity_TypeInfo
        && HIDWORD(userOwnStatusEntity[1].monitor) - this->fields._Num_k__BackingField >= 0;
  return result;
}


System_String_o *__fastcall CommonConsumeDetailInfo__GetTargetName(
        CommonConsumeDetailInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *targetEntity; // x8
  __int64 methodPtr_low; // x11
  System_String_o **p_monitor; // x8

  if ( (byte_4BB41DC & 1) == 0 )
  {
    sub_1C13D24(&ItemEntity_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v3);
    byte_4BB41DC = 1;
  }
  targetEntity = this->fields.targetEntity;
  if ( targetEntity
    && (methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(targetEntity->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (ItemEntity_c *)targetEntity->klass->_2.typeHierarchy[methodPtr_low - 1] == ItemEntity_TypeInfo )
  {
    p_monitor = (System_String_o **)&targetEntity[1].monitor;
  }
  else
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_monitor;
}


bool __fastcall CommonConsumeDetailInfo__get_IsOwnedEnoughly(CommonConsumeDetailInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsOwnedEnoughly_k__BackingField;
}


System_String_o *__fastcall CommonConsumeDetailInfo__get_Name(
        CommonConsumeDetailInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t __fastcall CommonConsumeDetailInfo__get_Num(CommonConsumeDetailInfo_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


void __fastcall CommonConsumeDetailInfo__set_IsOwnedEnoughly(
        CommonConsumeDetailInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsOwnedEnoughly_k__BackingField = value;
}


void __fastcall CommonConsumeDetailInfo__set_Name(
        CommonConsumeDetailInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._Name_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommonConsumeDetailInfo__set_Num(
        CommonConsumeDetailInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}