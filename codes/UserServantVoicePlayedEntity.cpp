void __fastcall UserServantVoicePlayedEntity___ctor(UserServantVoicePlayedEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22EE1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22EE1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserServantVoicePlayedEntity__CreatePK(
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4C22EDE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_4C22EDE = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_2FEE494 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantVoicePlayedEntity__CreatePrimaryKey(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q0
  int64_t v4; // x0
  const MethodInfo *v5; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4C22EDD & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4C22EDD = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v7, 0LL);
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
  PartyOrganizationUtility_o *p_voicePlayedHash; // x20
  System_Collections_Generic_IEnumerable_T__o *voicePlayed; // x21
  System_Collections_Generic_HashSet_int__o *v11; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1

  if ( (byte_4C22EDF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&flagNum);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int___ctor___77832208, v5);
    sub_1C3B764(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_4C22EDF = 1;
  }
  p_voicePlayedHash = (PartyOrganizationUtility_o *)&this->fields.voicePlayedHash;
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( voicePlayedHash )
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_3541CF0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
  voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
  if ( voicePlayed && voicePlayed[1].monitor )
  {
    v11 = (System_Collections_Generic_HashSet_int__o *)sub_1C3B9B0(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_55842540(
      v11,
      voicePlayed,
      (const MethodInfo_35416EC *)Method_System_Collections_Generic_HashSet_int___ctor___77832208);
    p_voicePlayedHash->klass = (PartyOrganizationUtility_c *)v11;
    sub_1C3B708(p_voicePlayedHash, (int64_t)v11, v12, v13, v14, v15, v16, v17);
    voicePlayedHash = (System_Collections_Generic_HashSet_int__o *)p_voicePlayedHash->klass;
    if ( !p_voicePlayedHash->klass )
      sub_1C3B9C0(0LL, v18);
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_3541CF0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1

  if ( (byte_4C22EE0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&flagNum);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int___ctor___77832208, v5);
    sub_1C3B764(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_4C22EE0 = 1;
  }
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( !voicePlayedHash )
  {
    voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
    v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C3B9B0(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_55842540(
      v9,
      voicePlayed,
      (const MethodInfo_35416EC *)Method_System_Collections_Generic_HashSet_int___ctor___77832208);
    this->fields.voicePlayedHash = v9;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.voicePlayedHash, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    voicePlayedHash = this->fields.voicePlayedHash;
    if ( !voicePlayedHash )
      sub_1C3B9C0(0LL, v16);
  }
  return System_Collections_Generic_HashSet_int___Add(
           voicePlayedHash,
           flagNum,
           (const MethodInfo_3542800 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


System_Collections_Generic_HashSet_int__o *__fastcall UserServantVoicePlayedEntity__get_VoicePlayedHash(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.voicePlayedHash;
}