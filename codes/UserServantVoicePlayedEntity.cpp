void __fastcall UserServantVoicePlayedEntity___ctor(UserServantVoicePlayedEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B170DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B170DD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserServantVoicePlayedEntity__CreatePK(
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4B170DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId, method);
    byte_4B170DA = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_2F10FBC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantVoicePlayedEntity__CreatePrimaryKey(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int128 v4; // q0
  int64_t v5; // x0
  const MethodInfo *v6; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4B170D9 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B170D9 = 1;
  }
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v8 = v9;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v8, 0LL);
  return UserServantVoicePlayedEntity__CreatePK(v5, this->fields.svtId, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantVoicePlayedEntity__IsPlayed(
        UserServantVoicePlayedEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_HashSet_int__o *voicePlayedHash; // x0
  PartyOrganizationUtility_o *p_voicePlayedHash; // x20
  System_Collections_Generic_IEnumerable_T__o *voicePlayed; // x21
  System_Collections_Generic_HashSet_int__o *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1

  if ( (byte_4B170DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&flagNum, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v8, v9);
    byte_4B170DB = 1;
  }
  p_voicePlayedHash = (PartyOrganizationUtility_o *)&this->fields.voicePlayedHash;
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( voicePlayedHash )
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
  voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
  if ( voicePlayed && voicePlayed[1].monitor )
  {
    v14 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         *(_QWORD *)&flagNum,
                                                         method,
                                                         v3);
    System_Collections_Generic_HashSet_int____ctor_54873236(
      v14,
      voicePlayed,
      (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
    p_voicePlayedHash->klass = (PartyOrganizationUtility_c *)v14;
    sub_1BCA784(p_voicePlayedHash, (int64_t)v14, v15, v16, v17, v18, v19, v20);
    voicePlayedHash = (System_Collections_Generic_HashSet_int__o *)p_voicePlayedHash->klass;
    if ( !p_voicePlayedHash->klass )
      sub_1BCAA3C(0LL, v21);
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantVoicePlayedEntity__SetPlayed(
        UserServantVoicePlayedEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_HashSet_int__o *voicePlayedHash; // x0
  System_Collections_Generic_IEnumerable_T__o *voicePlayed; // x22
  System_Collections_Generic_HashSet_int__o *v12; // x23
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1

  if ( (byte_4B170DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&flagNum, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v8, v9);
    byte_4B170DC = 1;
  }
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( !voicePlayedHash )
  {
    voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
    v12 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         *(_QWORD *)&flagNum,
                                                         method,
                                                         v3);
    System_Collections_Generic_HashSet_int____ctor_54873236(
      v12,
      voicePlayed,
      (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
    this->fields.voicePlayedHash = v12;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayedHash, (int64_t)v12, v13, v14, v15, v16, v17, v18);
    voicePlayedHash = this->fields.voicePlayedHash;
    if ( !voicePlayedHash )
      sub_1BCAA3C(0LL, v19);
  }
  return System_Collections_Generic_HashSet_int___Add(
           voicePlayedHash,
           flagNum,
           (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


System_Collections_Generic_HashSet_int__o *__fastcall UserServantVoicePlayedEntity__get_VoicePlayedHash(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.voicePlayedHash;
}