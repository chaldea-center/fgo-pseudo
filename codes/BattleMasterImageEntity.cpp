void __fastcall BattleMasterImageEntity___ctor(BattleMasterImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66834 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66834 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleMasterImageEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4B66830 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&type);
    byte_4B66830 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4B66833 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22715/*"overwriteMasterBackgroundId"*/, method);
    byte_4B66833 = 1;
  }
  return BattleMasterImageEntity__getScript(this, (System_String_o *)StringLiteral_22715/*"overwriteMasterBackgroundId"*/, 0, v2);
}


bool __fastcall BattleMasterImageEntity__checkScript(
        BattleMasterImageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B66831 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B66831 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  BattleMasterImageEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  v4 = defVal;
  if ( (byte_4B66832 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1BE4ACC(&long_TypeInfo, v7);
    byte_4B66832 = 1;
  }
  if ( !BattleMasterImageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BE4D28(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1BE4FE8(script);
  return BattleMasterImageEntity__GetOverwriteMasterBackgroundId(v13, v14);
}