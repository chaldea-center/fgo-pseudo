void __fastcall EnemyMstBattleEntity___ctor(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED003 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42ED003 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  void *v16; // x1
  void *Item; // x0
  System_String_o *v18; // x20
  int v19; // w9
  int v20; // w8
  __int64 v21; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ED001 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, commandSpellCnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_18069/*"cutinId"*/, v12, v13, v14);
    byte_42ED001 = 1;
  }
  result = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18069/*"cutinId"*/,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = this->fields.script;
      if ( !Item )
        goto LABEL_18;
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
               (System_Type_o *)StringLiteral_18069/*"cutinId"*/,
               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_18;
      v18 = (System_String_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                 Item,
                                 *(_QWORD *)(*(_QWORD *)Item + 368LL));
      Item = (void *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !Item )
        goto LABEL_18;
      v16 = Item;
      if ( !*((_DWORD *)Item + 6) )
        goto LABEL_19;
      *((_WORD *)Item + 16) = 44;
      if ( !v18 || (Item = System_String__Split(v18, (System_Char_array *)Item, 0LL)) == 0LL )
LABEL_18:
        sub_B5D69C(Item, v16);
      v19 = *((_DWORD *)Item + 6);
      v20 = commandSpellCnt - 1;
      if ( commandSpellCnt - 1 < v19 )
      {
        result = 0;
        if ( v20 < (unsigned int)v19 )
        {
          if ( System_Int32__TryParse(*((System_String_o **)Item + v20 + 4), &result, 0LL) )
            LODWORD(script) = result;
          else
            LODWORD(script) = 0;
          return (int)script;
        }
LABEL_19:
        v21 = sub_B5D6C8(Item);
        sub_B5D668(v21, 0LL);
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

  if ( (byte_42ED002 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21645/*"overwriteEnemyMasterBackgroundId"*/, defval, (_DWORD)method, v3);
    byte_42ED002 = 1;
  }
  return EnemyMstBattleEntity__getScript(this, (System_String_o *)StringLiteral_21645/*"overwriteEnemyMasterBackgroundId"*/, defval, v3);
}


bool __fastcall EnemyMstBattleEntity__checkScript(
        EnemyMstBattleEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42ECFFF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42ECFFF = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  EnemyMstBattleEntity_o *v13; // x0
  int32_t v14; // w1
  const MethodInfo *v15; // x2

  v4 = defVal;
  if ( (byte_42ED000 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    byte_42ED000 = 1;
  }
  if ( !EnemyMstBattleEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(script, v10);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  sub_B5D990(script);
  return EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(v13, v14, v15);
}