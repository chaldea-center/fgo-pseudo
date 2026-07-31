void UserDeleteReservationEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593949A & 1) == 0 )
  {
    sub_21FFC50(&UserDeleteReservationEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_15804/*"UserDeleteFlag"*/);
    byte_593949A = 1;
  }
  v7 = StringLiteral_15804/*"UserDeleteFlag"*/;
  UserDeleteReservationEntity_TypeInfo->static_fields->UserDeleteFlag = (struct System_String_o *)StringLiteral_15804/*"UserDeleteFlag"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserDeleteReservationEntity_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void UserDeleteReservationEntity___ctor(UserDeleteReservationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939499 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939499 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserDeleteReservationEntity__CreatePK(int64_t userId, const MethodInfo *method)
{
  if ( (byte_5939496 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long___);
    byte_5939496 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long_(
           userId,
           (const MethodInfo_3820E34 *)Method_DataEntityBase_CreateMultiplePK_long___);
}


System_String_o *UserDeleteReservationEntity__CreatePrimaryKey(
        UserDeleteReservationEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int v4; // w8
  const MethodInfo *v5; // x1
  int64_t v6; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_5939495 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&UserDeleteReservationEntity_TypeInfo);
    byte_5939495 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v8 = v9;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v8, 0);
  if ( !*(&UserDeleteReservationEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo, v5);
  return UserDeleteReservationEntity__CreatePK(v6, v5);
}


bool UserDeleteReservationEntity__IsUserDeleteFlag(const MethodInfo *method)
{
  __int64 v1; // x1
  UserDeleteReservationEntity_c *v2; // x0

  if ( (byte_5939498 & 1) == 0 )
  {
    sub_21FFC50(&UserDeleteReservationEntity_TypeInfo);
    byte_5939498 = 1;
  }
  v2 = UserDeleteReservationEntity_TypeInfo;
  if ( !*(&UserDeleteReservationEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo, v1);
    v2 = UserDeleteReservationEntity_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->UserDeleteFlag, 0, 0) == 1;
}


void UserDeleteReservationEntity__SetUserDeleteFlag(bool flag, const MethodInfo *method)
{
  UserDeleteReservationEntity_c *v3; // x0

  if ( (byte_5939497 & 1) == 0 )
  {
    sub_21FFC50(&UserDeleteReservationEntity_TypeInfo);
    byte_5939497 = 1;
  }
  v3 = UserDeleteReservationEntity_TypeInfo;
  if ( !*(&UserDeleteReservationEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo, method);
    v3 = UserDeleteReservationEntity_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->UserDeleteFlag, flag, 0);
  UnityEngine_PlayerPrefs__Save(0);
}