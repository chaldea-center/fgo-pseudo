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

  if ( (byte_4C22C0D & 1) == 0 )
  {
    sub_1C3B764(&UserDeleteReservationEntity_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_15525/*"[ACTk] Injection Detector: has properly configured Detection Event in the inspector, but still get started with Action callback. Both Action and Detection Event will be called on detection. Are you sure you wish to do this?"*/, v8);
    byte_4C22C0D = 1;
  }
  UserDeleteReservationEntity_TypeInfo->static_fields->UserDeleteFlag = (struct System_String_o *)StringLiteral_15525/*"[ACTk] Injection Detector: has properly configured Detection Event in the inspector, but still get started with Action callback. Both Action and Detection Event will be called on detection. Are you sure you wish to do this?"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)UserDeleteReservationEntity_TypeInfo->static_fields,
    StringLiteral_15525/*"[ACTk] Injection Detector: has properly configured Detection Event in the inspector, but still get started with Action callback. Both Action and Detection Event will be called on detection. Are you sure you wish to do this?"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserDeleteReservationEntity___ctor(UserDeleteReservationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22C0C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22C0C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserDeleteReservationEntity__CreatePK(int64_t userId, const MethodInfo *method)
{
  if ( (byte_4C22C09 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_long___, method);
    byte_4C22C09 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long_(
           userId,
           (const MethodInfo_2FEE25C *)Method_DataEntityBase_CreateMultiplePK_long___);
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

  if ( (byte_4C22C08 & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_1C3B764(&UserDeleteReservationEntity_TypeInfo, v3);
    byte_4C22C08 = 1;
  }
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v8, 0LL);
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  return UserDeleteReservationEntity__CreatePK(v6, v5);
}


bool __fastcall UserDeleteReservationEntity__IsUserDeleteFlag(const MethodInfo *method)
{
  __int64 v1; // x1
  UserDeleteReservationEntity_c *v2; // x0

  if ( (byte_4C22C0B & 1) == 0 )
  {
    sub_1C3B764(&UserDeleteReservationEntity_TypeInfo, v1);
    byte_4C22C0B = 1;
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

  if ( (byte_4C22C0A & 1) == 0 )
  {
    sub_1C3B764(&UserDeleteReservationEntity_TypeInfo, method);
    byte_4C22C0A = 1;
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