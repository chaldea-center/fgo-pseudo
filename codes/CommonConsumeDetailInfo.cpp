void __fastcall CommonConsumeDetailInfo___ctor(
        CommonConsumeDetailInfo_o *this,
        CommonConsumeEntity_o *commonConsumeEntity,
        Il2CppObject *targetEntity,
        Il2CppObject *userOwnStatusEntity,
        const MethodInfo *method)
{
  __int64 v9; // x0
  const MethodInfo *v10; // x1
  struct CommonConsumeEntity_o *v11; // x8
  const MethodInfo *v12; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.CommonConsumeEntity = commonConsumeEntity;
  sub_B77560(&this->fields);
  this->fields.targetEntity = targetEntity;
  sub_B77560(&this->fields.targetEntity);
  this->fields.userOwnStatusEntity = userOwnStatusEntity;
  v9 = sub_B77560(&this->fields.userOwnStatusEntity);
  v11 = this->fields.CommonConsumeEntity;
  if ( !v11 )
    sub_B7769C(v9, v10);
  this->fields._Num_k__BackingField = v11->fields.num;
  this->fields._Name_k__BackingField = CommonConsumeDetailInfo__GetTargetName(this, v10);
  sub_B77560(&this->fields._Name_k__BackingField);
  this->fields._IsOwnedEnoughly_k__BackingField = CommonConsumeDetailInfo__CheckIsOwnedEnoughly(this, v12);
}


bool __fastcall CommonConsumeDetailInfo__CheckIsOwnedEnoughly(
        CommonConsumeDetailInfo_o *this,
        const MethodInfo *method)
{
  Il2CppObject *targetEntity; // x8
  __int64 v4; // x10
  bool result; // w0
  Il2CppObject *userOwnStatusEntity; // x8
  __int64 v7; // x11

  if ( (byte_4387509 & 1) == 0 )
  {
    sub_B775C4(&ItemEntity_TypeInfo);
    sub_B775C4(&UserItemEntity_TypeInfo);
    byte_4387509 = 1;
  }
  targetEntity = this->fields.targetEntity;
  result = targetEntity
        && (v4 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1), *(&targetEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v4)
        && (ItemEntity_c *)targetEntity->klass->_2.typeHierarchy[v4 - 1] == ItemEntity_TypeInfo
        && (userOwnStatusEntity = this->fields.userOwnStatusEntity) != 0LL
        && (v7 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1),
            *(&userOwnStatusEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v7)
        && (UserItemEntity_c *)userOwnStatusEntity->klass->_2.typeHierarchy[v7 - 1] == UserItemEntity_TypeInfo
        && HIDWORD(userOwnStatusEntity[1].monitor) - this->fields._Num_k__BackingField >= 0;
  return result;
}


System_String_o *__fastcall CommonConsumeDetailInfo__GetTargetName(
        CommonConsumeDetailInfo_o *this,
        const MethodInfo *method)
{
  Il2CppObject *targetEntity; // x8
  __int64 v4; // x11
  System_String_o **p_monitor; // x8

  if ( (byte_4387508 & 1) == 0 )
  {
    sub_B775C4(&ItemEntity_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387508 = 1;
  }
  targetEntity = this->fields.targetEntity;
  if ( targetEntity
    && (v4 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1), *(&targetEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v4)
    && (ItemEntity_c *)targetEntity->klass->_2.typeHierarchy[v4 - 1] == ItemEntity_TypeInfo )
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
  this->fields._Name_k__BackingField = value;
  sub_B77560(&this->fields._Name_k__BackingField);
}


void __fastcall CommonConsumeDetailInfo__set_Num(
        CommonConsumeDetailInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}