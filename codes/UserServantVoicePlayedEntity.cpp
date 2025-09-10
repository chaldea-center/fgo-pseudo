void UserServantVoicePlayedEntity___ctor(UserServantVoicePlayedEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28355 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28355 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserServantVoicePlayedEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4C28352 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C28352 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_30CCBE0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserServantVoicePlayedEntity__CreatePrimaryKey(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q0
  int64_t v4; // x0
  const MethodInfo *v5; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4C28351 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C28351 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v7, 0);
  return UserServantVoicePlayedEntity__CreatePK(v4, this->fields.svtId, v5);
}


bool UserServantVoicePlayedEntity__IsPlayed(
        UserServantVoicePlayedEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *voicePlayedHash; // x0
  CGThumbnailListItem_o *p_voicePlayedHash; // x20
  System_Collections_Generic_IEnumerable_T__o *voicePlayed; // x21
  System_Collections_Generic_HashSet_int__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1

  if ( (byte_4C28353 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C28353 = 1;
  }
  p_voicePlayedHash = (CGThumbnailListItem_o *)&this->fields.voicePlayedHash;
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( voicePlayedHash )
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
  voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
  if ( voicePlayed && voicePlayed[1].monitor )
  {
    v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_56862832(
      v9,
      voicePlayed,
      (const MethodInfo_363A870 *)Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    p_voicePlayedHash->klass = (CGThumbnailListItem_c *)v9;
    sub_1C2D434(p_voicePlayedHash, (int32_t)v9, v10, v11);
    voicePlayedHash = (System_Collections_Generic_HashSet_int__o *)p_voicePlayedHash->klass;
    if ( !p_voicePlayedHash->klass )
      sub_1C2D6EC(0, v12);
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1

  if ( (byte_4C28354 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C28354 = 1;
  }
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( !voicePlayedHash )
  {
    voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
    v7 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_56862832(
      v7,
      voicePlayed,
      (const MethodInfo_363A870 *)Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    this->fields.voicePlayedHash = v7;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voicePlayedHash, (int32_t)v7, v8, v9);
    voicePlayedHash = this->fields.voicePlayedHash;
    if ( !voicePlayedHash )
      sub_1C2D6EC(0, v10);
  }
  return System_Collections_Generic_HashSet_int___Add(
           voicePlayedHash,
           flagNum,
           (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


System_Collections_Generic_HashSet_int__o *UserServantVoicePlayedEntity__get_VoicePlayedHash(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.voicePlayedHash;
}