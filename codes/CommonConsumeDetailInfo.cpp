void __fastcall CommonConsumeDetailInfo___ctor(
        CommonConsumeDetailInfo_o *this,
        CommonConsumeEntity_o *commonConsumeEntity,
        Il2CppObject *targetEntity,
        Il2CppObject *userOwnStatusEntity,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  struct CommonConsumeEntity_o *v17; // x8
  struct System_String_o *TargetName; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.CommonConsumeEntity = commonConsumeEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)commonConsumeEntity, v9, v10);
  this->fields.targetEntity = targetEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.targetEntity, (int32_t)targetEntity, v11, v12);
  this->fields.userOwnStatusEntity = userOwnStatusEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userOwnStatusEntity, (int32_t)userOwnStatusEntity, v13, v14);
  v17 = this->fields.CommonConsumeEntity;
  if ( !v17 )
    sub_1BCB254(v15, v16);
  this->fields._Num_k__BackingField = v17->fields.num;
  TargetName = CommonConsumeDetailInfo__GetTargetName(this, v16);
  this->fields._Name_k__BackingField = TargetName;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)TargetName, v19, v20);
  this->fields._IsOwnedEnoughly_k__BackingField = CommonConsumeDetailInfo__CheckIsOwnedEnoughly(this, v21);
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

  if ( (byte_4B1BFDB & 1) == 0 )
  {
    sub_1BCAFF8(&ItemEntity_TypeInfo, method);
    sub_1BCAFF8(&UserItemEntity_TypeInfo, v3);
    byte_4B1BFDB = 1;
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

  if ( (byte_4B1BFDA & 1) == 0 )
  {
    sub_1BCAFF8(&ItemEntity_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v3);
    byte_4B1BFDA = 1;
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
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall CommonConsumeDetailInfo__set_Num(
        CommonConsumeDetailInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}