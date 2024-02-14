void __fastcall EnemyMstBattleEntity___ctor(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4218BBE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_4218BBE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  void *Item; // x0
  System_String_o *v10; // x20
  int v11; // w9
  int v12; // w8
  __int64 v13; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4218BBC & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, *(_QWORD *)&commandSpellCnt);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B0D8A4(&StringLiteral_17906/*"cutinId"*/, v7);
    byte_4218BBC = 1;
  }
  result = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_17906/*"cutinId"*/,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = this->fields.script;
      if ( !Item )
        goto LABEL_18;
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
               (System_Type_o *)StringLiteral_17906/*"cutinId"*/,
               (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_18;
      v10 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                 Item,
                                 *(_QWORD *)(*(_QWORD *)Item + 368LL));
      Item = (void *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !Item )
        goto LABEL_18;
      if ( !*((_DWORD *)Item + 6) )
        goto LABEL_19;
      *((_WORD *)Item + 16) = 44;
      if ( !v10 || (Item = System_String__Split(v10, (System_Char_array *)Item, 0LL)) == 0LL )
LABEL_18:
        sub_B0D97C(Item);
      v11 = *((_DWORD *)Item + 6);
      v12 = commandSpellCnt - 1;
      if ( commandSpellCnt - 1 < v11 )
      {
        result = 0;
        if ( v12 < (unsigned int)v11 )
        {
          if ( System_Int32__TryParse(*((System_String_o **)Item + v12 + 4), &result, 0LL) )
            LODWORD(script) = result;
          else
            LODWORD(script) = 0;
          return (int)script;
        }
LABEL_19:
        v13 = sub_B0D9A8(Item);
        sub_B0D948(v13, 0LL);
      }
    }
    LODWORD(script) = 0;
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

  if ( (byte_4218BBD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21433/*"overwriteEnemyMasterBackgroundId"*/, *(_QWORD *)&defval);
    byte_4218BBD = 1;
  }
  return EnemyMstBattleEntity__getScript(this, (System_String_o *)StringLiteral_21433/*"overwriteEnemyMasterBackgroundId"*/, defval, v3);
}


bool __fastcall EnemyMstBattleEntity__checkScript(
        EnemyMstBattleEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4218BBA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4218BBA = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  if ( (byte_4218BBB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B0D8A4(&long_TypeInfo, v7);
    byte_4218BBB = 1;
  }
  if ( !EnemyMstBattleEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B0D97C(script);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  sub_B0DC70(script);
  return EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(v10, v11, v12);
}