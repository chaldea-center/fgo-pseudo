void __fastcall EnemyMstBattleEntity___ctor(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4356422 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_4356422 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EnemyMstBattleEntity__CreatePrimaryKey(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(
        EnemyMstBattleEntity_o *this,
        int32_t commandSpellCnt,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  void *v6; // x1
  void *Item; // x0
  System_String_o *v8; // x20
  int v9; // w9
  int v10; // w8
  __int64 v11; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4356420 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&StringLiteral_18116/*"cutinId"*/);
    byte_4356420 = 1;
  }
  result = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18116/*"cutinId"*/,
           (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = this->fields.script;
      if ( !Item )
        goto LABEL_18;
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
               (System_Type_o *)StringLiteral_18116/*"cutinId"*/,
               (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_18;
      v8 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                Item,
                                *(_QWORD *)(*(_QWORD *)Item + 368LL));
      Item = (void *)sub_B706AC(char___TypeInfo, 1LL);
      if ( !Item )
        goto LABEL_18;
      v6 = Item;
      if ( !*((_DWORD *)Item + 6) )
        goto LABEL_19;
      *((_WORD *)Item + 16) = 44;
      if ( !v8 || (Item = System_String__Split(v8, (System_Char_array *)Item, 0LL)) == 0LL )
LABEL_18:
        sub_B7076C(Item, v6);
      v9 = *((_DWORD *)Item + 6);
      v10 = commandSpellCnt - 1;
      if ( commandSpellCnt - 1 < v9 )
      {
        result = 0;
        if ( v10 < (unsigned int)v9 )
        {
          if ( System_Int32__TryParse(*((System_String_o **)Item + v10 + 4), &result, 0LL) )
            LODWORD(script) = result;
          else
            LODWORD(script) = 0;
          return (int)script;
        }
LABEL_19:
        v11 = sub_B70798(Item);
        sub_B70738(v11, 0LL);
      }
    }
    LODWORD(script) = 0;
  }
  return (int)script;
}


int32_t __fastcall EnemyMstBattleEntity__GetOverwriteFrame(
        EnemyMstBattleEntity_o *this,
        int32_t defval,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4356421 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21708/*"overwriteEnemyMasterBackgroundId"*/);
    byte_4356421 = 1;
  }
  return EnemyMstBattleEntity__getScript(this, (System_String_o *)StringLiteral_21708/*"overwriteEnemyMasterBackgroundId"*/, defval, v3);
}


bool __fastcall EnemyMstBattleEntity__checkScript(
        EnemyMstBattleEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_435641E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_435641E = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  EnemyMstBattleEntity_o *v10; // x0
  int32_t v11; // w1
  const MethodInfo *v12; // x2

  v4 = defVal;
  if ( (byte_435641F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&long_TypeInfo);
    byte_435641F = 1;
  }
  if ( !EnemyMstBattleEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7076C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  sub_B70A60(script);
  return EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(v10, v11, v12);
}