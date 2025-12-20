void EnemyMstBattleEntity___ctor(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C6D1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2C6D1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t EnemyMstBattleEntity__CreatePrimaryKey(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(
        EnemyMstBattleEntity_o *this,
        int32_t commandSpellCnt,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  void *Item; // x0
  int v8; // w9
  int v9; // w8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2C6CF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&StringLiteral_18536/*"cutinId"*/);
    byte_4D2C6CF = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_18536/*"cutinId"*/,
            (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      goto LABEL_14;
    Item = this->fields.script;
    if ( !Item
      || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)Item,
                   (Il2CppObject *)StringLiteral_18536/*"cutinId"*/,
                   (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0
      || (Item = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                           Item,
                           *(_QWORD *)(*(_QWORD *)Item + 368LL))) == 0
      || (Item = System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0)) == 0 )
    {
      sub_1C942F0(Item, v6);
    }
    v8 = *((_DWORD *)Item + 6);
    v9 = commandSpellCnt - 1;
    if ( commandSpellCnt - 1 < v8 )
    {
      result = 0;
      if ( v9 >= (unsigned int)v8 )
        sub_1C942F8(Item);
      if ( System_Int32__TryParse(*((System_String_o **)Item + v9 + 4), &result, 0) )
        LODWORD(script) = result;
      else
        LODWORD(script) = 0;
    }
    else
    {
LABEL_14:
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t EnemyMstBattleEntity__GetOverwriteFrame(EnemyMstBattleEntity_o *this, int32_t defval, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4D2C6D0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22763/*"overwriteEnemyMasterBackgroundId"*/);
    byte_4D2C6D0 = 1;
  }
  return EnemyMstBattleEntity__getScript(this, (System_String_o *)StringLiteral_22763/*"overwriteEnemyMasterBackgroundId"*/, defval, v3);
}


bool EnemyMstBattleEntity__checkScript(EnemyMstBattleEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D2C6CD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4D2C6CD = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


// local variable allocation has failed, the output may be wrong!
int32_t EnemyMstBattleEntity__getScript(
        EnemyMstBattleEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  EnemyMstBattleEntity_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2

  v4 = defVal;
  if ( (byte_4D2C6CE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    byte_4D2C6CE = 1;
  }
  if ( !EnemyMstBattleEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C942F0(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C9468C(script);
  return EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(v12, v13, v14);
}