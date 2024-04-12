void __fastcall HeelPortraitEntity___ctor(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1B80 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B1B80 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall HeelPortraitEntity__CreatePrimaryKey(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall HeelPortraitEntity__GetOverwriteImageId(
        HeelPortraitEntity_o *this,
        int32_t originImageId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Script; // w21
  const MethodInfo *v7; // x3
  int32_t v8; // w22
  const MethodInfo *v9; // x3
  int32_t v10; // w23
  const MethodInfo *v11; // x3

  if ( (byte_42B1B7D & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&StringLiteral_21526/*"overwriteCondNum"*/);
    sub_B52984(&StringLiteral_21527/*"overwriteCondTargetId"*/);
    sub_B52984(&StringLiteral_21528/*"overwriteCondType"*/);
    sub_B52984(&StringLiteral_21536/*"overwriteImageId"*/);
    byte_42B1B7D = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21528/*"overwriteCondType"*/, 0, v3);
  v8 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21527/*"overwriteCondTargetId"*/, 0, v7);
  v10 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21526/*"overwriteCondNum"*/, 0, v9);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v8, v10, 0, 0LL) )
    return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21536/*"overwriteImageId"*/, 0, v11);
  else
    return originImageId;
}


System_String_o *__fastcall HeelPortraitEntity__GetOverwriteName(
        HeelPortraitEntity_o *this,
        System_String_o *originName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Script; // w21
  const MethodInfo *v7; // x3
  int32_t v8; // w22
  const MethodInfo *v9; // x3
  int32_t v10; // w23
  const MethodInfo *v11; // x3

  if ( (byte_42B1B7B & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&StringLiteral_21526/*"overwriteCondNum"*/);
    sub_B52984(&StringLiteral_21527/*"overwriteCondTargetId"*/);
    sub_B52984(&StringLiteral_21543/*"overwriteName"*/);
    sub_B52984(&StringLiteral_21528/*"overwriteCondType"*/);
    byte_42B1B7B = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21528/*"overwriteCondType"*/, 0, v3);
  v8 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21527/*"overwriteCondTargetId"*/, 0, v7);
  v10 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21526/*"overwriteCondNum"*/, 0, v9);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v8, v10, 0, 0LL) )
    return HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_21543/*"overwriteName"*/, 0LL, v11);
  else
    return originName;
}


bool __fastcall HeelPortraitEntity__IsSetOverwriteImageId(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1B7C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21536/*"overwriteImageId"*/);
    byte_42B1B7C = 1;
  }
  return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21536/*"overwriteImageId"*/, 0, v2) != 0;
}


bool __fastcall HeelPortraitEntity__IsSetOverwriteName(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *ScriptStr; // x0

  if ( (byte_42B1B7A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21543/*"overwriteName"*/);
    byte_42B1B7A = 1;
  }
  ScriptStr = HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_21543/*"overwriteName"*/, 0LL, v2);
  return !System_String__IsNullOrEmpty(ScriptStr, 0LL);
}


int32_t __fastcall HeelPortraitEntity__getScript(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  HeelPortraitEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42B1B7E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42B1B7E = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v11 = (HeelPortraitEntity_o *)sub_B52D50(Item);
  return HeelPortraitEntity__CreatePrimaryKey(v11, v12);
}


System_String_o *__fastcall HeelPortraitEntity__getScriptStr(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  System_String_o *Item; // x0
  HeelPortraitEntity_o *v12; // x0
  System_String_o *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_42B1B7F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&string_TypeInfo);
    byte_42B1B7F = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_B52A5C(0LL, v8);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                              (System_Type_o *)key,
                              (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v12 = (HeelPortraitEntity_o *)sub_B52D50(Item);
  return (System_String_o *)HeelPortraitEntity__getScript(v12, v13, v14, v15);
}