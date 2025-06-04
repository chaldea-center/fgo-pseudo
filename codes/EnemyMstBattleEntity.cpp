void __fastcall EnemyMstBattleEntity___ctor(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01E8E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_int___ctor__, method);
    byte_4B01E8E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32ACB8C *)Method_DataEntityBase_int___ctor__);
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
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  void *Item; // x0
  __int64 v10; // x2
  int v11; // w9
  int v12; // w8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B01E8C & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      *(_QWORD *)&commandSpellCnt);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1BC3008(&StringLiteral_18257/*"cutinId"*/, v6);
    byte_4B01E8C = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_18257/*"cutinId"*/,
            (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      goto LABEL_14;
    Item = this->fields.script;
    if ( !Item
      || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)Item,
                   (Il2CppObject *)StringLiteral_18257/*"cutinId"*/,
                   (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
      || (Item = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                           Item,
                           *(_QWORD *)(*(_QWORD *)Item + 368LL))) == 0LL
      || (Item = System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0LL)) == 0LL )
    {
      sub_1BC3264(Item, v8);
    }
    v11 = *((_DWORD *)Item + 6);
    v12 = commandSpellCnt - 1;
    if ( commandSpellCnt - 1 < v11 )
    {
      result = 0;
      if ( v12 >= (unsigned int)v11 )
        sub_1BC326C(Item, v8, v10);
      if ( System_Int32__TryParse(*((System_String_o **)Item + v12 + 4), &result, 0LL) )
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

  if ( (byte_4B01E8D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22328/*"overwriteEnemyMasterBackgroundId"*/, *(_QWORD *)&defval);
    byte_4B01E8D = 1;
  }
  return EnemyMstBattleEntity__getScript(this, (System_String_o *)StringLiteral_22328/*"overwriteEnemyMasterBackgroundId"*/, defval, v3);
}


bool __fastcall EnemyMstBattleEntity__checkScript(
        EnemyMstBattleEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B01E8A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B01E8A = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  EnemyMstBattleEntity_o *v13; // x0
  int32_t v14; // w1
  const MethodInfo *v15; // x2

  v4 = defVal;
  if ( (byte_4B01E8B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1BC3008(&long_TypeInfo, v7);
    byte_4B01E8B = 1;
  }
  if ( !EnemyMstBattleEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BC3264(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1BC3524(script);
  return EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(v13, v14, v15);
}