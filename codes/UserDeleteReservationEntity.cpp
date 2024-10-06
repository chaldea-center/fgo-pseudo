void __fastcall UserDeleteReservationEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A70A6E & 1) == 0 )
  {
    sub_1B90010(&UserDeleteReservationEntity_TypeInfo, v1);
    sub_1B90010(&StringLiteral_15244/*"UserDeleteFlag"*/, v4);
    byte_4A70A6E = 1;
  }
  UserDeleteReservationEntity_TypeInfo->static_fields->UserDeleteFlag = (struct System_String_o *)StringLiteral_15244/*"UserDeleteFlag"*/;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)UserDeleteReservationEntity_TypeInfo->static_fields,
    StringLiteral_15244/*"UserDeleteFlag"*/,
    v2,
    v3);
}


void __fastcall UserDeleteReservationEntity___ctor(UserDeleteReservationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A70A6D & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    byte_4A70A6D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserDeleteReservationEntity__CreatePK(int64_t userId, const MethodInfo *method)
{
  if ( (byte_4A70A6A & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_long___, method);
    byte_4A70A6A = 1;
  }
  return DataEntityBase__CreateMultiplePK_long_(
           userId,
           (const MethodInfo_2E8C310 *)Method_DataEntityBase_CreateMultiplePK_long___);
}


System_String_o *__fastcall UserDeleteReservationEntity__CreatePrimaryKey(
        UserDeleteReservationEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int128 v4; // q0
  const MethodInfo *v5; // x1
  int64_t v6; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4A70A69 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_1B90010(&UserDeleteReservationEntity_TypeInfo, v3);
    byte_4A70A69 = 1;
  }
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v8, 0LL);
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  return UserDeleteReservationEntity__CreatePK(v6, v5);
}


bool __fastcall UserDeleteReservationEntity__IsUserDeleteFlag(const MethodInfo *method)
{
  __int64 v1; // x1
  UserDeleteReservationEntity_c *v2; // x0

  if ( (byte_4A70A6C & 1) == 0 )
  {
    sub_1B90010(&UserDeleteReservationEntity_TypeInfo, v1);
    byte_4A70A6C = 1;
  }
  v2 = UserDeleteReservationEntity_TypeInfo;
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
    v2 = UserDeleteReservationEntity_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->UserDeleteFlag, 0, 0LL) == 1;
}


void __fastcall UserDeleteReservationEntity__SetUserDeleteFlag(bool flag, const MethodInfo *method)
{
  UserDeleteReservationEntity_c *v3; // x0

  if ( (byte_4A70A6B & 1) == 0 )
  {
    sub_1B90010(&UserDeleteReservationEntity_TypeInfo, method);
    byte_4A70A6B = 1;
  }
  v3 = UserDeleteReservationEntity_TypeInfo;
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
    v3 = UserDeleteReservationEntity_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->UserDeleteFlag, flag, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}