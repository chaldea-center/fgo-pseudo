void EnemyMstBattleEntity___ctor(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384ED & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59384ED = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_59384EB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&StringLiteral_19218/*"cutinId"*/);
    byte_59384EB = 1;
  }
  script = this->fields.script;
  result = 0;
  if ( script )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_19218/*"cutinId"*/,
            (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      goto LABEL_14;
    Item = this->fields.script;
    if ( !Item
      || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)Item,
                   (Il2CppObject *)StringLiteral_19218/*"cutinId"*/,
                   (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0
      || (Item = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                           Item,
                           *(_QWORD *)(*(_QWORD *)Item + 368LL))) == 0
      || (Item = System_String__Split((System_String_o *)Item, 0x2Cu, 0, 0)) == 0 )
    {
      sub_21FFECC(Item, v6);
    }
    v8 = *((_DWORD *)Item + 6);
    v9 = commandSpellCnt - 1;
    if ( commandSpellCnt - 1 < v8 )
    {
      result = 0;
      if ( v9 >= (unsigned int)v8 )
        sub_21FFED4(Item);
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

  if ( (byte_59384EC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23643/*"overwriteEnemyMasterBackgroundId"*/);
    byte_59384EC = 1;
  }
  return EnemyMstBattleEntity__getScript(this, (System_String_o *)StringLiteral_23643/*"overwriteEnemyMasterBackgroundId"*/, defval, v3);
}


bool EnemyMstBattleEntity__checkScript(EnemyMstBattleEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_59384E9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_59384E9 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  if ( (byte_59384EA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_59384EA = 1;
  }
  if ( !EnemyMstBattleEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_21FFECC(script, v7);
  }
  if ( script->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, qword_594C090, v9, v10);
  sub_220024C(script, qword_594C090, v9, v10);
  return EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(v12, v13, v14);
}