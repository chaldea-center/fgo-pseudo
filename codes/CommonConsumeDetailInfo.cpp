void CommonConsumeDetailInfo___ctor(
        CommonConsumeDetailInfo_o *this,
        CommonConsumeEntity_o *commonConsumeEntity,
        Il2CppObject *targetEntity,
        Il2CppObject *userOwnStatusEntity,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x0
  const MethodInfo *v28; // x1
  struct CommonConsumeEntity_o *v29; // x8
  struct System_String_o *TargetName; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  const MethodInfo *v37; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.CommonConsumeEntity = commonConsumeEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)commonConsumeEntity, v9, v10, v11, v12, v13, v14);
  this->fields.targetEntity = targetEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetEntity,
    (int32_t)targetEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.userOwnStatusEntity = userOwnStatusEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userOwnStatusEntity,
    (int32_t)userOwnStatusEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v29 = this->fields.CommonConsumeEntity;
  if ( !v29 )
    sub_1C71608(v27, v28);
  this->fields._Num_k__BackingField = v29->fields.num;
  TargetName = CommonConsumeDetailInfo__GetTargetName(this, v28);
  this->fields._Name_k__BackingField = TargetName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)TargetName,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields._IsOwnedEnoughly_k__BackingField = CommonConsumeDetailInfo__CheckIsOwnedEnoughly(this, v37);
}


bool CommonConsumeDetailInfo__CheckIsOwnedEnoughly(CommonConsumeDetailInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *targetEntity; // x8
  __int64 naturalAligment; // x10
  bool result; // w0
  Il2CppObject *userOwnStatusEntity; // x8
  __int64 v7; // x11

  if ( (byte_4CC6E6F & 1) == 0 )
  {
    sub_1C713B0(&ItemEntity_TypeInfo);
    sub_1C713B0(&UserItemEntity_TypeInfo);
    byte_4CC6E6F = 1;
  }
  targetEntity = this->fields.targetEntity;
  result = targetEntity
        && (naturalAligment = ItemEntity_TypeInfo->_2.naturalAligment,
            targetEntity->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (ItemEntity_c *)targetEntity->klass->_2.typeHierarchy[naturalAligment - 1] == ItemEntity_TypeInfo
        && (userOwnStatusEntity = this->fields.userOwnStatusEntity) != 0
        && (v7 = UserItemEntity_TypeInfo->_2.naturalAligment,
            userOwnStatusEntity->klass->_2.naturalAligment >= (unsigned int)v7)
        && (UserItemEntity_c *)userOwnStatusEntity->klass->_2.typeHierarchy[v7 - 1] == UserItemEntity_TypeInfo
        && HIDWORD(userOwnStatusEntity[1].monitor) - this->fields._Num_k__BackingField >= 0;
  return result;
}


System_String_o *CommonConsumeDetailInfo__GetTargetName(CommonConsumeDetailInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *targetEntity; // x8
  __int64 naturalAligment; // x11
  System_String_o **p_monitor; // x8

  if ( (byte_4CC6E6E & 1) == 0 )
  {
    sub_1C713B0(&ItemEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC6E6E = 1;
  }
  targetEntity = this->fields.targetEntity;
  if ( targetEntity
    && (naturalAligment = ItemEntity_TypeInfo->_2.naturalAligment,
        targetEntity->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ItemEntity_c *)targetEntity->klass->_2.typeHierarchy[naturalAligment - 1] == ItemEntity_TypeInfo )
  {
    p_monitor = (System_String_o **)&targetEntity[1].monitor;
  }
  else
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_monitor;
}


bool CommonConsumeDetailInfo__get_IsOwnedEnoughly(CommonConsumeDetailInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsOwnedEnoughly_k__BackingField;
}


System_String_o *CommonConsumeDetailInfo__get_Name(CommonConsumeDetailInfo_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t CommonConsumeDetailInfo__get_Num(CommonConsumeDetailInfo_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


void CommonConsumeDetailInfo__set_IsOwnedEnoughly(
        CommonConsumeDetailInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsOwnedEnoughly_k__BackingField = value;
}


void CommonConsumeDetailInfo__set_Name(
        CommonConsumeDetailInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommonConsumeDetailInfo__set_Num(CommonConsumeDetailInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}