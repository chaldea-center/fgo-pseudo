void UserDeleteReservationEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D31771 & 1) == 0 )
  {
    sub_1C93AD4(&UserDeleteReservationEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_15326/*"UserDeleteFlag"*/);
    byte_4D31771 = 1;
  }
  UserDeleteReservationEntity_TypeInfo->static_fields->UserDeleteFlag = (struct System_String_o *)StringLiteral_15326/*"UserDeleteFlag"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)UserDeleteReservationEntity_TypeInfo->static_fields,
    StringLiteral_15326/*"UserDeleteFlag"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void UserDeleteReservationEntity___ctor(UserDeleteReservationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31770 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31770 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserDeleteReservationEntity__CreatePK(int64_t userId, const MethodInfo *method)
{
  if ( (byte_4D3176D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_long___);
    byte_4D3176D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long_(
           userId,
           (const MethodInfo_31A2A94 *)Method_DataEntityBase_CreateMultiplePK_long___);
}


System_String_o *UserDeleteReservationEntity__CreatePrimaryKey(
        UserDeleteReservationEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q0
  const MethodInfo *v4; // x1
  int64_t v5; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4D3176C & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&UserDeleteReservationEntity_TypeInfo);
    byte_4D3176C = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v7, 0);
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  return UserDeleteReservationEntity__CreatePK(v5, v4);
}


bool UserDeleteReservationEntity__IsUserDeleteFlag(const MethodInfo *method)
{
  UserDeleteReservationEntity_c *v1; // x0

  if ( (byte_4D3176F & 1) == 0 )
  {
    sub_1C93AD4(&UserDeleteReservationEntity_TypeInfo);
    byte_4D3176F = 1;
  }
  v1 = UserDeleteReservationEntity_TypeInfo;
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
    v1 = UserDeleteReservationEntity_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->UserDeleteFlag, 0, 0) == 1;
}


void UserDeleteReservationEntity__SetUserDeleteFlag(bool flag, const MethodInfo *method)
{
  UserDeleteReservationEntity_c *v3; // x0

  if ( (byte_4D3176E & 1) == 0 )
  {
    sub_1C93AD4(&UserDeleteReservationEntity_TypeInfo);
    byte_4D3176E = 1;
  }
  v3 = UserDeleteReservationEntity_TypeInfo;
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
    v3 = UserDeleteReservationEntity_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->UserDeleteFlag, flag, 0);
  UnityEngine_PlayerPrefs__Save(0);
}