void BattleMasterImageEntity___ctor(BattleMasterImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2CD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE2CD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleMasterImageEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4CEE2C8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEE2C8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *BattleMasterImageEntity__CreatePrimaryKey(BattleMasterImageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleMasterImageEntity__CreatePK(this->fields.id, this->fields.type, v2);
}


int32_t BattleMasterImageEntity__GetOverwriteMasterBackgroundId(
        BattleMasterImageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE2CB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22777/*"overwriteMasterBackgroundId"*/);
    byte_4CEE2CB = 1;
  }
  return BattleMasterImageEntity__getScript(this, (System_String_o *)StringLiteral_22777/*"overwriteMasterBackgroundId"*/, 0, v2);
}


System_Int32_array *BattleMasterImageEntity__GetOverwriteResultPosition(
        BattleMasterImageEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEE2CC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22788/*"overwriteResultPosition"*/);
    byte_4CEE2CC = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22788/*"overwriteResultPosition"*/, 0, 0);
}


bool BattleMasterImageEntity__checkScript(
        BattleMasterImageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4CEE2C9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CEE2C9 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleMasterImageEntity__getScript(
        BattleMasterImageEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleMasterImageEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  v4 = defVal;
  if ( (byte_4CEE2CA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&long_TypeInfo);
    byte_4CEE2CA = 1;
  }
  if ( !BattleMasterImageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C7BD40(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C7C0DC(script);
  return BattleMasterImageEntity__GetOverwriteMasterBackgroundId(v12, v13);
}