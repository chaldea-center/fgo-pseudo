void __fastcall UserServantVoicePlayedEntity___ctor(UserServantVoicePlayedEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D272 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418D272 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserServantVoicePlayedEntity__CreatePK(
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_418D26F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_418D26F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantVoicePlayedEntity__CreatePrimaryKey(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int64_t v4; // x0
  const MethodInfo *v5; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_418D26E & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_418D26E = 1;
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
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v7, 0LL);
  return UserServantVoicePlayedEntity__CreatePK(v4, this->fields.svtId, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantVoicePlayedEntity__IsPlayed(
        UserServantVoicePlayedEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *voicePlayedHash; // x0
  BattleServantConfConponent_o *p_voicePlayedHash; // x20
  System_Collections_Generic_IEnumerable_T__o *voicePlayed; // x21
  System_Collections_Generic_HashSet_int__o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1

  if ( (byte_418D270 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&flagNum);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287832, v5);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_418D270 = 1;
  }
  p_voicePlayedHash = (BattleServantConfConponent_o *)&this->fields.voicePlayedHash;
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( voicePlayedHash )
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
  voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
  if ( voicePlayed && voicePlayed[1].monitor )
  {
    v11 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_47731024(
      v11,
      voicePlayed,
      (const MethodInfo_2D85150 *)Method_System_Collections_Generic_HashSet_int___ctor___67287832);
    p_voicePlayedHash->klass = (BattleServantConfConponent_c *)v11;
    sub_B2C2F8(p_voicePlayedHash, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
    voicePlayedHash = (System_Collections_Generic_HashSet_int__o *)p_voicePlayedHash->klass;
    if ( !p_voicePlayedHash->klass )
      sub_B2C434(0LL, v18);
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantVoicePlayedEntity__SetPlayed(
        UserServantVoicePlayedEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *voicePlayedHash; // x0
  System_Collections_Generic_IEnumerable_T__o *voicePlayed; // x22
  System_Collections_Generic_HashSet_int__o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1

  if ( (byte_418D271 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&flagNum);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287832, v5);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_418D271 = 1;
  }
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( !voicePlayedHash )
  {
    voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
    v9 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_47731024(
      v9,
      voicePlayed,
      (const MethodInfo_2D85150 *)Method_System_Collections_Generic_HashSet_int___ctor___67287832);
    this->fields.voicePlayedHash = v9;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.voicePlayedHash,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    voicePlayedHash = this->fields.voicePlayedHash;
    if ( !voicePlayedHash )
      sub_B2C434(0LL, v16);
  }
  return System_Collections_Generic_HashSet_int___Add(
           voicePlayedHash,
           flagNum,
           (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


System_Collections_Generic_HashSet_int__o *__fastcall UserServantVoicePlayedEntity__get_VoicePlayedHash(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.voicePlayedHash;
}