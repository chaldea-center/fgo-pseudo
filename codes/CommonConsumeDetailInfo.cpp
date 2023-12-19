void __fastcall CommonConsumeDetailInfo___ctor(
        CommonConsumeDetailInfo_o *this,
        CommonConsumeEntity_o *commonConsumeEntity,
        Il2CppObject *targetEntity,
        Il2CppObject *userOwnStatusEntity,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  struct CommonConsumeEntity_o *v28; // x8
  struct System_String_o *TargetName; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.CommonConsumeEntity = commonConsumeEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)commonConsumeEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetEntity = targetEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetEntity,
    (System_Int32_array **)targetEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.userOwnStatusEntity = userOwnStatusEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userOwnStatusEntity,
    (System_Int32_array **)userOwnStatusEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v28 = this->fields.CommonConsumeEntity;
  if ( !v28 )
    sub_B170D4();
  this->fields._Num_k__BackingField = v28->fields.num;
  TargetName = CommonConsumeDetailInfo__GetTargetName(this, v27);
  this->fields._Name_k__BackingField = TargetName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Name_k__BackingField,
    (System_Int32_array **)TargetName,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._IsOwnedEnoughly_k__BackingField = CommonConsumeDetailInfo__CheckIsOwnedEnoughly(this, v36);
}


bool __fastcall CommonConsumeDetailInfo__CheckIsOwnedEnoughly(
        CommonConsumeDetailInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *targetEntity; // x8
  __int64 v5; // x10
  bool result; // w0
  Il2CppObject *userOwnStatusEntity; // x8
  __int64 v8; // x11

  if ( (byte_40F6558 & 1) == 0 )
  {
    sub_B16FFC(&ItemEntity_TypeInfo, method);
    sub_B16FFC(&UserItemEntity_TypeInfo, v3);
    byte_40F6558 = 1;
  }
  targetEntity = this->fields.targetEntity;
  result = targetEntity
        && (v5 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1), *(&targetEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v5)
        && (ItemEntity_c *)targetEntity->klass->_2.typeHierarchy[v5 - 1] == ItemEntity_TypeInfo
        && (userOwnStatusEntity = this->fields.userOwnStatusEntity) != 0LL
        && (v8 = *(&UserItemEntity_TypeInfo->_2.bitflags2 + 1),
            *(&userOwnStatusEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v8)
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
  __int64 v5; // x11
  System_String_o **p_monitor; // x8

  if ( (byte_40F6557 & 1) == 0 )
  {
    sub_B16FFC(&ItemEntity_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40F6557 = 1;
  }
  targetEntity = this->fields.targetEntity;
  if ( targetEntity
    && (v5 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1), *(&targetEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v5)
    && (ItemEntity_c *)targetEntity->klass->_2.typeHierarchy[v5 - 1] == ItemEntity_TypeInfo )
  {
    p_monitor = (System_String_o **)&targetEntity[1].monitor;
  }
  else
  {
    p_monitor = (System_String_o **)&StringLiteral_1;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Name_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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