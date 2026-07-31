void UserServantVoicePlayedEntity___ctor(UserServantVoicePlayedEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939798 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939798 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserServantVoicePlayedEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_5939795 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_5939795 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserServantVoicePlayedEntity__CreatePrimaryKey(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int v4; // w8
  int64_t v5; // x0
  const MethodInfo *v6; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_5939794 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5939794 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v8 = v9;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v8, 0);
  return UserServantVoicePlayedEntity__CreatePK(v5, this->fields.svtId, v6);
}


bool UserServantVoicePlayedEntity__IsPlayed(
        UserServantVoicePlayedEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *voicePlayedHash; // x0
  MissionNaviTransitionBoardItem_o *p_voicePlayedHash; // x20
  System_Collections_Generic_IEnumerable_T__o *voicePlayed; // x21
  System_Collections_Generic_HashSet_int__o *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1

  if ( (byte_5939796 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_5939796 = 1;
  }
  p_voicePlayedHash = (MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayedHash;
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( voicePlayedHash )
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
  voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
  if ( voicePlayed && voicePlayed[1].monitor )
  {
    v9 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_69731156(
      v9,
      voicePlayed,
      (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    p_voicePlayedHash->klass = (MissionNaviTransitionBoardItem_c *)v9;
    sub_21FFBF4(p_voicePlayedHash, (int32_t)v9, v10, v11, v12, v13, v14, v15);
    voicePlayedHash = (System_Collections_Generic_HashSet_int__o *)p_voicePlayedHash->klass;
    if ( !p_voicePlayedHash->klass )
      sub_21FFECC(0, v16);
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
  }
  return 0;
}


bool UserServantVoicePlayedEntity__SetPlayed(
        UserServantVoicePlayedEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *voicePlayedHash; // x0
  System_Collections_Generic_IEnumerable_T__o *voicePlayed; // x22
  System_Collections_Generic_HashSet_int__o *v7; // x23
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1

  if ( (byte_5939797 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_5939797 = 1;
  }
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( !voicePlayedHash )
  {
    voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
    v7 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_69731156(
      v7,
      voicePlayed,
      (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    this->fields.voicePlayedHash = v7;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayedHash,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    voicePlayedHash = this->fields.voicePlayedHash;
    if ( !voicePlayedHash )
      sub_21FFECC(0, v14);
  }
  return System_Collections_Generic_HashSet_int___Add(
           voicePlayedHash,
           flagNum,
           (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


System_Collections_Generic_HashSet_int__o *UserServantVoicePlayedEntity__get_VoicePlayedHash(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.voicePlayedHash;
}