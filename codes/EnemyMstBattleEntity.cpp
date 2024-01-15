void __fastcall EnemyMstBattleEntity___ctor(EnemyMstBattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FE2B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FE2B9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v11; // x20
  __int64 v12; // x2
  System_Char_array *v13; // x0
  __int64 v14; // x2
  System_Char_array *v15; // x1
  int max_length; // w9
  int v17; // w8
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FE2B7 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, *(_QWORD *)&commandSpellCnt);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B16FFC(&StringLiteral_17782/*"cutinId"*/, v7);
    byte_40FE2B7 = 1;
  }
  result = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_17782/*"cutinId"*/,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v9 = this->fields.script;
      if ( !v9 )
        goto LABEL_18;
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
               (System_Type_o *)StringLiteral_17782/*"cutinId"*/,
               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_18;
      v11 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
      v13 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v12);
      if ( !v13 )
        goto LABEL_18;
      v15 = v13;
      if ( !v13->max_length )
        goto LABEL_19;
      v13->m_Items[2] = 44;
      if ( !v11 || (v13 = (System_Char_array *)System_String__Split(v11, v13, 0LL)) == 0LL )
LABEL_18:
        sub_B170D4();
      max_length = v13->max_length;
      v17 = commandSpellCnt - 1;
      if ( commandSpellCnt - 1 < max_length )
      {
        result = 0;
        if ( v17 < (unsigned int)max_length )
        {
          if ( System_Int32__TryParse(*(System_String_o **)&v13->m_Items[4 * v17 + 2], &result, 0LL) )
            LODWORD(script) = result;
          else
            LODWORD(script) = 0;
          return (int)script;
        }
LABEL_19:
        sub_B17100(v13, v15, v14);
        sub_B170A0();
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

  if ( (byte_40FE2B8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21274/*"overwriteEnemyMasterBackgroundId"*/, *(_QWORD *)&defval);
    byte_40FE2B8 = 1;
  }
  return EnemyMstBattleEntity__getScript(this, (System_String_o *)StringLiteral_21274/*"overwriteEnemyMasterBackgroundId"*/, defval, v3);
}


bool __fastcall EnemyMstBattleEntity__checkScript(
        EnemyMstBattleEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40FE2B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_40FE2B5 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  EnemyMstBattleEntity_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  v4 = defVal;
  if ( (byte_40FE2B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B16FFC(&long_TypeInfo, v7);
    byte_40FE2B6 = 1;
  }
  if ( !EnemyMstBattleEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = this->fields.script;
  if ( !script
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  sub_B173C8(Item);
  return EnemyMstBattleEntity__GetCommandSpellCntFromCutInId(v11, v12, v13);
}