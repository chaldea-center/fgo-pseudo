void __fastcall EnemyMstBattleEntity___ctor(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16077 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16077 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EnemyMstBattleEntity__CreatePrimaryKey(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(
        EnemyMstBattleEntity_o *this,
        int32_t commandSpellCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  void *Item; // x0
  int v12; // w9
  int v13; // w8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16075 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      *(_QWORD *)&commandSpellCnt,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6);
    sub_1BCA7E0(&StringLiteral_18605/*"cutinId"*/, v7, v8);
    byte_4B16075 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_18605/*"cutinId"*/,
            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      goto LABEL_14;
    Item = this->fields.script;
    if ( !Item
      || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)Item,
                   (Il2CppObject *)StringLiteral_18605/*"cutinId"*/,
                   (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
      || (Item = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                           Item,
                           *(_QWORD *)(*(_QWORD *)Item + 368LL))) == 0LL
      || (Item = System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL)) == 0LL )
    {
      sub_1BCAA3C(Item, v10);
    }
    v12 = *((_DWORD *)Item + 6);
    v13 = commandSpellCnt - 1;
    if ( commandSpellCnt - 1 < v12 )
    {
      result = 0;
      if ( v13 >= (unsigned int)v12 )
        sub_1BCAA44(Item, v10);
      if ( System_Int32__TryParse(*((System_String_o **)Item + v13 + 4), &result, 0LL) )
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EnemyMstBattleEntity__GetOverwriteFrame(
        EnemyMstBattleEntity_o *this,
        int32_t defval,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B16076 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22629/*"overwriteEnemyMasterBackgroundId"*/, *(_QWORD *)&defval, method);
    byte_4B16076 = 1;
  }
  return EnemyMstBattleEntity__getScript(this, (System_String_o *)StringLiteral_22629/*"overwriteEnemyMasterBackgroundId"*/, defval, v3);
}


bool __fastcall EnemyMstBattleEntity__checkScript(
        EnemyMstBattleEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16073 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method);
    byte_4B16073 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EnemyMstBattleEntity__getScript(
        EnemyMstBattleEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  EnemyMstBattleEntity_o *v14; // x0
  int32_t v15; // w1
  const MethodInfo *v16; // x2

  v4 = defVal;
  if ( (byte_4B16074 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    byte_4B16074 = 1;
  }
  if ( !EnemyMstBattleEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(script, v9);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v11, v12);
  sub_1BCACFC(script);
  return EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(v14, v15, v16);
}