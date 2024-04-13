void __fastcall HeelPortraitEntity___ctor(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA4A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA4A5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t Script; // w21
  const MethodInfo *v19; // x3
  int32_t v20; // w22
  const MethodInfo *v21; // x3
  int32_t v22; // w23
  const MethodInfo *v23; // x3

  if ( (byte_42EA4A2 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, originImageId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21637/*"overwriteCondNum"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21638/*"overwriteCondTargetId"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21639/*"overwriteCondType"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21647/*"overwriteImageId"*/, v15, v16, v17);
    byte_42EA4A2 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21639/*"overwriteCondType"*/, 0, v3);
  v20 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21638/*"overwriteCondTargetId"*/, 0, v19);
  v22 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21637/*"overwriteCondNum"*/, 0, v21);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v20, v22, 0, 0LL) )
    return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21647/*"overwriteImageId"*/, 0, v23);
  else
    return originImageId;
}


System_String_o *__fastcall HeelPortraitEntity__GetOverwriteName(
        HeelPortraitEntity_o *this,
        System_String_o *originName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t Script; // w21
  const MethodInfo *v19; // x3
  int32_t v20; // w22
  const MethodInfo *v21; // x3
  int32_t v22; // w23
  const MethodInfo *v23; // x3

  if ( (byte_42EA4A0 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)originName, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21637/*"overwriteCondNum"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21638/*"overwriteCondTargetId"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21654/*"overwriteName"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21639/*"overwriteCondType"*/, v15, v16, v17);
    byte_42EA4A0 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21639/*"overwriteCondType"*/, 0, v3);
  v20 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21638/*"overwriteCondTargetId"*/, 0, v19);
  v22 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21637/*"overwriteCondNum"*/, 0, v21);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v20, v22, 0, 0LL) )
    return HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_21654/*"overwriteName"*/, 0LL, v23);
  else
    return originName;
}


bool __fastcall HeelPortraitEntity__IsSetOverwriteImageId(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA4A1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21647/*"overwriteImageId"*/, (_DWORD)method, v2, v3);
    byte_42EA4A1 = 1;
  }
  return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_21647/*"overwriteImageId"*/, 0, v3) != 0;
}


bool __fastcall HeelPortraitEntity__IsSetOverwriteName(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  System_String_o *ScriptStr; // x0

  if ( (byte_42EA49F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21654/*"overwriteName"*/, (_DWORD)method, v2, v3);
    byte_42EA49F = 1;
  }
  ScriptStr = HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_21654/*"overwriteName"*/, 0LL, v3);
  return !System_String__IsNullOrEmpty(ScriptStr, 0LL);
}


int32_t __fastcall HeelPortraitEntity__getScript(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  HeelPortraitEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  v4 = defVal;
  if ( (byte_42EA4A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42EA4A3 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(Item, v14);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v17 = (HeelPortraitEntity_o *)sub_B5D990(Item);
  return HeelPortraitEntity__CreatePrimaryKey(v17, v18);
}


System_String_o *__fastcall HeelPortraitEntity__getScriptStr(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  HeelPortraitEntity_o *v18; // x0
  System_String_o *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v4 = defVal;
  if ( (byte_42EA4A4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)defVal,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&string_TypeInfo, v10, v11, v12);
    byte_42EA4A4 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  v15 = this->fields.script;
  if ( !v15 )
    sub_B5D69C(0LL, v14);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
           (System_Type_o *)key,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v4 = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return v4;
  v18 = (HeelPortraitEntity_o *)sub_B5D990(Item);
  return (System_String_o *)HeelPortraitEntity__getScript(v18, v19, v20, v21);
}