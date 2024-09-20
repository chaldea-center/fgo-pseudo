void __fastcall BattleMasterImageEntity___ctor(BattleMasterImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADEA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5ADEA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BattleMasterImageEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4A5ADE6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5ADE6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattleMasterImageEntity__CreatePrimaryKey(
        BattleMasterImageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleMasterImageEntity__CreatePK(this->fields.id, this->fields.type, v2);
}


int32_t __fastcall BattleMasterImageEntity__GetOverwriteMasterBackgroundId(
        BattleMasterImageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5ADE9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22396/*"overwriteMasterBackgroundId"*/);
    byte_4A5ADE9 = 1;
  }
  return BattleMasterImageEntity__getScript(this, (System_String_o *)StringLiteral_22396/*"overwriteMasterBackgroundId"*/, 0, v2);
}


bool __fastcall BattleMasterImageEntity__checkScript(
        BattleMasterImageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5ADE7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4A5ADE7 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleMasterImageEntity__getScript(
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
  if ( (byte_4A5ADE8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5ADE8 = 1;
  }
  if ( !BattleMasterImageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1B88ACC(script);
  return BattleMasterImageEntity__GetOverwriteMasterBackgroundId(v12, v13);
}