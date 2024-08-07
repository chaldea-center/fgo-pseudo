void __fastcall BattleMasterImageEntity___ctor(BattleMasterImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE7BE & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE7BE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleMasterImageEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_49FE7BB & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&type);
    byte_49FE7BB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattleMasterImageEntity__CreatePrimaryKey(
        BattleMasterImageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleMasterImageEntity__CreatePK(this->fields.id, this->fields.type, v2);
}


bool __fastcall BattleMasterImageEntity__checkScript(
        BattleMasterImageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FE7BC & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_49FE7BC = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  int32_t result; // w0
  BattleMasterImageEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  v4 = defVal;
  if ( (byte_49FE7BD & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B64A00(&long_TypeInfo, v7);
    byte_49FE7BD = 1;
  }
  if ( !BattleMasterImageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64C5C(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1B64F1C(script);
  BattleMasterImageEntity___ctor(v13, v14);
  return result;
}