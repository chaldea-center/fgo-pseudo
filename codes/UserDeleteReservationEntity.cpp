void __fastcall UserDeleteReservationEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B16E14 & 1) == 0 )
  {
    sub_1BCA7E0(&UserDeleteReservationEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_15386/*"UserDeleteFlag"*/, v8, v9);
    byte_4B16E14 = 1;
  }
  UserDeleteReservationEntity_TypeInfo->static_fields->UserDeleteFlag = (struct System_String_o *)StringLiteral_15386/*"UserDeleteFlag"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserDeleteReservationEntity_TypeInfo->static_fields,
    StringLiteral_15386/*"UserDeleteFlag"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserDeleteReservationEntity___ctor(UserDeleteReservationEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E13 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16E13 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserDeleteReservationEntity__CreatePK(int64_t userId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E10 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long___, method, v2);
    byte_4B16E10 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long_(
           userId,
           (const MethodInfo_2F10D84 *)Method_DataEntityBase_CreateMultiplePK_long___);
}


System_String_o *__fastcall UserDeleteReservationEntity__CreatePrimaryKey(
        UserDeleteReservationEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int128 v6; // q0
  const MethodInfo *v7; // x1
  int64_t v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_4B16E0F & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    sub_1BCA7E0(&UserDeleteReservationEntity_TypeInfo, v4, v5);
    byte_4B16E0F = 1;
  }
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v10 = v11;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v10, 0LL);
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo, v7);
  return UserDeleteReservationEntity__CreatePK(v8, v7);
}


bool __fastcall UserDeleteReservationEntity__IsUserDeleteFlag(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserDeleteReservationEntity_c *v3; // x0

  if ( (byte_4B16E12 & 1) == 0 )
  {
    sub_1BCA7E0(&UserDeleteReservationEntity_TypeInfo, v1, v2);
    byte_4B16E12 = 1;
  }
  v3 = UserDeleteReservationEntity_TypeInfo;
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo, v1);
    v3 = UserDeleteReservationEntity_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->UserDeleteFlag, 0, 0LL) == 1;
}


void __fastcall UserDeleteReservationEntity__SetUserDeleteFlag(bool flag, const MethodInfo *method)
{
  __int64 v2; // x2
  UserDeleteReservationEntity_c *v4; // x0

  if ( (byte_4B16E11 & 1) == 0 )
  {
    sub_1BCA7E0(&UserDeleteReservationEntity_TypeInfo, method, v2);
    byte_4B16E11 = 1;
  }
  v4 = UserDeleteReservationEntity_TypeInfo;
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo, method);
    v4 = UserDeleteReservationEntity_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v4->static_fields->UserDeleteFlag, flag, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}