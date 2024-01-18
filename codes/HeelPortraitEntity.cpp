void __fastcall HeelPortraitEntity___ctor(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188F53 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4188F53 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall HeelPortraitEntity__CreatePrimaryKey(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HeelPortraitEntity__GetOverwriteImageId(
        HeelPortraitEntity_o *this,
        int32_t originImageId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t Script; // w21
  const MethodInfo *v11; // x3
  int32_t v12; // w22
  const MethodInfo *v13; // x3
  int32_t v14; // w23
  const MethodInfo *v15; // x3

  if ( (byte_4188F50 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&originImageId);
    sub_B2C35C(&StringLiteral_21356/*"overwriteCondNum"*/, v6);
    sub_B2C35C(&StringLiteral_21357/*"overwriteCondTargetId"*/, v7);
    sub_B2C35C(&StringLiteral_21358/*"overwriteCondType"*/, v8);
    sub_B2C35C(&StringLiteral_21366/*"overwriteImageId"*/, v9);
    byte_4188F50 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21358/*"overwriteCondType"*/, 0, v3);
  v12 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21357/*"overwriteCondTargetId"*/, 0, v11);
  v14 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21356/*"overwriteCondNum"*/, 0, v13);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v12, v14, 0, 0LL) )
    return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21366/*"overwriteImageId"*/, 0, v15);
  else
    return originImageId;
}


System_String_o *__fastcall HeelPortraitEntity__GetOverwriteName(
        HeelPortraitEntity_o *this,
        System_String_o *originName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t Script; // w21
  const MethodInfo *v11; // x3
  int32_t v12; // w22
  const MethodInfo *v13; // x3
  int32_t v14; // w23
  const MethodInfo *v15; // x3

  if ( (byte_4188F4E & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, originName);
    sub_B2C35C(&StringLiteral_21356/*"overwriteCondNum"*/, v6);
    sub_B2C35C(&StringLiteral_21357/*"overwriteCondTargetId"*/, v7);
    sub_B2C35C(&StringLiteral_21373/*"overwriteName"*/, v8);
    sub_B2C35C(&StringLiteral_21358/*"overwriteCondType"*/, v9);
    byte_4188F4E = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21358/*"overwriteCondType"*/, 0, v3);
  v12 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21357/*"overwriteCondTargetId"*/, 0, v11);
  v14 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21356/*"overwriteCondNum"*/, 0, v13);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v12, v14, 0, 0LL) )
    return HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_21373/*"overwriteName"*/, 0LL, v15);
  else
    return originName;
}


bool __fastcall HeelPortraitEntity__IsSetOverwriteImageId(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188F4F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21366/*"overwriteImageId"*/, method);
    byte_4188F4F = 1;
  }
  return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21366/*"overwriteImageId"*/, 0, v2) != 0;
}


bool __fastcall HeelPortraitEntity__IsSetOverwriteName(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *ScriptStr; // x0

  if ( (byte_4188F4D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21373/*"overwriteName"*/, method);
    byte_4188F4D = 1;
  }
  ScriptStr = HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_21373/*"overwriteName"*/, 0LL, v2);
  return !System_String__IsNullOrEmpty(ScriptStr, 0LL);
}


int32_t __fastcall HeelPortraitEntity__getScript(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  HeelPortraitEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4188F51 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_4188F51 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v13 = (HeelPortraitEntity_o *)sub_B2C728(Item);
  return HeelPortraitEntity__CreatePrimaryKey(v13, v14);
}


System_String_o *__fastcall HeelPortraitEntity__getScriptStr(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  System_String_o *Item; // x0
  HeelPortraitEntity_o *v14; // x0
  System_String_o *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4188F52 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&string_TypeInfo, v8);
    byte_4188F52 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_B2C434(0LL, v10);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11,
                              (System_Type_o *)key,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v14 = (HeelPortraitEntity_o *)sub_B2C728(Item);
  return (System_String_o *)HeelPortraitEntity__getScript(v14, v15, v16, v17);
}