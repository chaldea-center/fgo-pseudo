void CommonConsumeDetailInfo___ctor(
        CommonConsumeDetailInfo_o *this,
        CommonConsumeEntity_o *commonConsumeEntity,
        Il2CppObject *targetEntity,
        Il2CppObject *userOwnStatusEntity,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
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
  __int64 v27; // x0
  const MethodInfo *v28; // x1
  struct CommonConsumeEntity_o *v29; // x8
  struct System_String_o *TargetName; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  const MethodInfo *v37; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.CommonConsumeEntity = commonConsumeEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)commonConsumeEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetEntity = targetEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetEntity,
    (int32_t)targetEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.userOwnStatusEntity = userOwnStatusEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userOwnStatusEntity,
    (int32_t)userOwnStatusEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v29 = this->fields.CommonConsumeEntity;
  if ( !v29 )
    sub_2213CDC(v27, v28);
  this->fields._Num_k__BackingField = v29->fields.num;
  TargetName = CommonConsumeDetailInfo__GetTargetName(this, v28);
  this->fields._Name_k__BackingField = TargetName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
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
  Il2CppObject *targetEntity; // x9
  Il2CppClass *klass; // x9
  __int64 naturalAligment; // x10
  bool result; // w0
  Il2CppObject *userOwnStatusEntity; // x8
  __int64 v8; // x11

  if ( (byte_59702AA & 1) == 0 )
  {
    sub_2213A60(&ItemEntity_TypeInfo);
    sub_2213A60(&UserItemEntity_TypeInfo);
    byte_59702AA = 1;
  }
  targetEntity = this->fields.targetEntity;
  result = targetEntity
        && (klass = targetEntity->klass,
            naturalAligment = ItemEntity_TypeInfo->_2.naturalAligment,
            klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (ItemEntity_c *)klass->_2.typeHierarchy[naturalAligment - 1] == ItemEntity_TypeInfo
        && (userOwnStatusEntity = this->fields.userOwnStatusEntity) != 0
        && (v8 = UserItemEntity_TypeInfo->_2.naturalAligment,
            userOwnStatusEntity->klass->_2.naturalAligment >= (unsigned int)v8)
        && (UserItemEntity_c *)userOwnStatusEntity->klass->_2.typeHierarchy[v8 - 1] == UserItemEntity_TypeInfo
        && HIDWORD(userOwnStatusEntity[1].monitor) - this->fields._Num_k__BackingField >= 0;
  return result;
}


System_String_o *CommonConsumeDetailInfo__GetTargetName(CommonConsumeDetailInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *targetEntity; // x9
  Il2CppClass *klass; // x11
  __int64 naturalAligment; // x12
  System_String_o **v6; // x8
  System_String_o **p_monitor; // x9

  if ( (byte_59702A9 & 1) == 0 )
  {
    sub_2213A60(&ItemEntity_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59702A9 = 1;
  }
  targetEntity = this->fields.targetEntity;
  if ( targetEntity )
  {
    klass = targetEntity->klass;
    naturalAligment = ItemEntity_TypeInfo->_2.naturalAligment;
    v6 = (System_String_o **)&StringLiteral_1/*""*/;
    if ( targetEntity->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      p_monitor = (System_String_o **)&targetEntity[1].monitor;
      if ( (ItemEntity_c *)klass->_2.typeHierarchy[naturalAligment - 1] == ItemEntity_TypeInfo )
        v6 = p_monitor;
    }
  }
  else
  {
    v6 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v6;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Name_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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