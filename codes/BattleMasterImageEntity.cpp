void __fastcall BattleMasterImageEntity___ctor(BattleMasterImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189B76 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189B76 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleMasterImageEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4189B73 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&type);
    byte_4189B73 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4189B74 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4189B74 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  int32_t result; // w0
  BattleMasterImageEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = defVal;
  if ( (byte_4189B75 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B2C35C(&long_TypeInfo, v7);
    byte_4189B75 = 1;
  }
  if ( !BattleMasterImageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v11 = (BattleMasterImageEntity_o *)sub_B2C728(script);
  BattleMasterImageEntity___ctor(v11, v12);
  return result;
}