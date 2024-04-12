void __fastcall UserDeleteReservationEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B14E7 & 1) == 0 )
  {
    sub_B52984(&UserDeleteReservationEntity_TypeInfo);
    sub_B52984(&StringLiteral_15195/*"UserDeleteFlag"*/);
    byte_42B14E7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserDeleteReservationEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_15195/*"UserDeleteFlag"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15195/*"UserDeleteFlag"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall UserDeleteReservationEntity___ctor(UserDeleteReservationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B14E6 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B14E6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserDeleteReservationEntity__CreatePK(int64_t userId, const MethodInfo *method)
{
  if ( (byte_42B14E3 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long___);
    byte_42B14E3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long_(
           userId,
           (const MethodInfo_1A4DF0C *)Method_DataEntityBase_CreateMultiplePK_long___);
}


System_String_o *__fastcall UserDeleteReservationEntity__CreatePrimaryKey(
        UserDeleteReservationEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  const MethodInfo *v4; // x1
  int64_t v5; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_42B14E2 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserDeleteReservationEntity_TypeInfo);
    byte_42B14E2 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v7, 0LL);
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  }
  return UserDeleteReservationEntity__CreatePK(v5, v4);
}


bool __fastcall UserDeleteReservationEntity__IsUserDeleteFlag(const MethodInfo *method)
{
  UserDeleteReservationEntity_c *v1; // x0

  if ( (byte_42B14E5 & 1) == 0 )
  {
    sub_B52984(&UserDeleteReservationEntity_TypeInfo);
    byte_42B14E5 = 1;
  }
  v1 = UserDeleteReservationEntity_TypeInfo;
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
    v1 = UserDeleteReservationEntity_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->UserDeleteFlag, 0, 0LL) == 1;
}


void __fastcall UserDeleteReservationEntity__SetUserDeleteFlag(bool flag, const MethodInfo *method)
{
  _BOOL4 v3; // w19
  UserDeleteReservationEntity_c *v4; // x0

  if ( (byte_42B14E4 & 1) == 0 )
  {
    sub_B52984(&UserDeleteReservationEntity_TypeInfo);
    byte_42B14E4 = 1;
  }
  v3 = flag;
  v4 = UserDeleteReservationEntity_TypeInfo;
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
    v4 = UserDeleteReservationEntity_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v4->static_fields->UserDeleteFlag, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}