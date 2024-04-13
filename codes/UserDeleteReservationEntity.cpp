void __fastcall UserDeleteReservationEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EA1C2 & 1) == 0 )
  {
    sub_B5D5C4(&UserDeleteReservationEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_15254/*"UserDeleteFlag"*/, v8, v9, v10);
    byte_42EA1C2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserDeleteReservationEntity_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_15254/*"UserDeleteFlag"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15254/*"UserDeleteFlag"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall UserDeleteReservationEntity___ctor(UserDeleteReservationEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA1C1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserDeleteReservationEntity__CreatePK(int64_t userId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long___, (_DWORD)method, v2, v3);
    byte_42EA1BE = 1;
  }
  return DataEntityBase__CreateMultiplePK_long_(
           userId,
           (const MethodInfo_1AE2FD4 *)Method_DataEntityBase_CreateMultiplePK_long___);
}


System_String_o *__fastcall UserDeleteReservationEntity__CreatePrimaryKey(
        UserDeleteReservationEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int128 v8; // q1
  const MethodInfo *v9; // x1
  int64_t v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-30h]

  if ( (byte_42EA1BD & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserDeleteReservationEntity_TypeInfo, v5, v6, v7);
    byte_42EA1BD = 1;
  }
  v8 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v12 = v13;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v12, 0LL);
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  }
  return UserDeleteReservationEntity__CreatePK(v10, v9);
}


bool __fastcall UserDeleteReservationEntity__IsUserDeleteFlag(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserDeleteReservationEntity_c *v4; // x0

  if ( (byte_42EA1C0 & 1) == 0 )
  {
    sub_B5D5C4(&UserDeleteReservationEntity_TypeInfo, v1, v2, v3);
    byte_42EA1C0 = 1;
  }
  v4 = UserDeleteReservationEntity_TypeInfo;
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
    v4 = UserDeleteReservationEntity_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->UserDeleteFlag, 0, 0LL) == 1;
}


void __fastcall UserDeleteReservationEntity__SetUserDeleteFlag(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v5; // w19
  UserDeleteReservationEntity_c *v6; // x0

  if ( (byte_42EA1BF & 1) == 0 )
  {
    sub_B5D5C4(&UserDeleteReservationEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA1BF = 1;
  }
  v5 = flag;
  v6 = UserDeleteReservationEntity_TypeInfo;
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
    v6 = UserDeleteReservationEntity_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v6->static_fields->UserDeleteFlag, v5, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}