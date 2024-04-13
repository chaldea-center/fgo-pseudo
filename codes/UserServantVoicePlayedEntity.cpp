void __fastcall UserServantVoicePlayedEntity___ctor(UserServantVoicePlayedEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE6AB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserServantVoicePlayedEntity__CreatePK(
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EE6A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int___, svtId, (_DWORD)method, v3);
    byte_42EE6A8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_1AE3148 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantVoicePlayedEntity__CreatePrimaryKey(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int128 v5; // q1
  int64_t v6; // x0
  const MethodInfo *v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-30h]

  if ( (byte_42EE6A7 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE6A7 = 1;
  }
  v5 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v9, 0LL);
  return UserServantVoicePlayedEntity__CreatePK(v6, this->fields.svtId, v7);
}


bool __fastcall UserServantVoicePlayedEntity__IsPlayed(
        UserServantVoicePlayedEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_HashSet_int__o *voicePlayedHash; // x0
  BattleServantConfConponent_o *p_voicePlayedHash; // x20
  System_Collections_Generic_IEnumerable_T__o *voicePlayed; // x21
  System_Collections_Generic_HashSet_int__o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1

  if ( (byte_42EE6A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, flagNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716240, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v9, v10, v11);
    byte_42EE6A9 = 1;
  }
  p_voicePlayedHash = (BattleServantConfConponent_o *)&this->fields.voicePlayedHash;
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( voicePlayedHash )
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
  voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
  if ( voicePlayed && voicePlayed[1].monitor )
  {
    v16 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_38794568(
      v16,
      voicePlayed,
      (const MethodInfo_24FF548 *)Method_System_Collections_Generic_HashSet_int___ctor___68716240);
    p_voicePlayedHash->klass = (BattleServantConfConponent_c *)v16;
    sub_B5D560(p_voicePlayedHash, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
    voicePlayedHash = (System_Collections_Generic_HashSet_int__o *)p_voicePlayedHash->klass;
    if ( !p_voicePlayedHash->klass )
      sub_B5D69C(0LL, v23);
    return System_Collections_Generic_HashSet_int___Contains(
             voicePlayedHash,
             flagNum,
             (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
  }
  return 0;
}


bool __fastcall UserServantVoicePlayedEntity__SetPlayed(
        UserServantVoicePlayedEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_HashSet_int__o *voicePlayedHash; // x0
  System_Collections_Generic_IEnumerable_T__o *voicePlayed; // x22
  System_Collections_Generic_HashSet_int__o *v14; // x23
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1

  if ( (byte_42EE6AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, flagNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716240, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v9, v10, v11);
    byte_42EE6AA = 1;
  }
  voicePlayedHash = this->fields.voicePlayedHash;
  if ( !voicePlayedHash )
  {
    voicePlayed = (System_Collections_Generic_IEnumerable_T__o *)this->fields.voicePlayed;
    v14 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_38794568(
      v14,
      voicePlayed,
      (const MethodInfo_24FF548 *)Method_System_Collections_Generic_HashSet_int___ctor___68716240);
    this->fields.voicePlayedHash = v14;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.voicePlayedHash,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    voicePlayedHash = this->fields.voicePlayedHash;
    if ( !voicePlayedHash )
      sub_B5D69C(0LL, v21);
  }
  return System_Collections_Generic_HashSet_int___Add(
           voicePlayedHash,
           flagNum,
           (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


System_Collections_Generic_HashSet_int__o *__fastcall UserServantVoicePlayedEntity__get_VoicePlayedHash(
        UserServantVoicePlayedEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.voicePlayedHash;
}