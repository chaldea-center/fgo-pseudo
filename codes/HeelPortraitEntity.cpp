void HeelPortraitEntity___ctor(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37E04 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    byte_4C37E04 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
}


int32_t HeelPortraitEntity__CreatePrimaryKey(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t HeelPortraitEntity__GetOverwriteImageId(
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

  if ( (byte_4C37E01 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&StringLiteral_22535/*"overwriteCondNum"*/);
    sub_1C32C20(&StringLiteral_22536/*"overwriteCondTargetId"*/);
    sub_1C32C20(&StringLiteral_22537/*"overwriteCondType"*/);
    sub_1C32C20(&StringLiteral_22555/*"overwriteImageId"*/);
    byte_4C37E01 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22537/*"overwriteCondType"*/, 0, v3);
  v8 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22536/*"overwriteCondTargetId"*/, 0, v7);
  v10 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22535/*"overwriteCondNum"*/, 0, v9);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v8, v10, 0, 0, 0) )
    return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22555/*"overwriteImageId"*/, 0, v11);
  else
    return originImageId;
}


System_String_o *HeelPortraitEntity__GetOverwriteName(
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

  if ( (byte_4C37DFF & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&StringLiteral_22535/*"overwriteCondNum"*/);
    sub_1C32C20(&StringLiteral_22536/*"overwriteCondTargetId"*/);
    sub_1C32C20(&StringLiteral_22564/*"overwriteName"*/);
    sub_1C32C20(&StringLiteral_22537/*"overwriteCondType"*/);
    byte_4C37DFF = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22537/*"overwriteCondType"*/, 0, v3);
  v8 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22536/*"overwriteCondTargetId"*/, 0, v7);
  v10 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22535/*"overwriteCondNum"*/, 0, v9);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v8, v10, 0, 0, 0) )
    return HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_22564/*"overwriteName"*/, 0, v11);
  else
    return originName;
}


bool HeelPortraitEntity__IsSetOverwriteImageId(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E00 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22555/*"overwriteImageId"*/);
    byte_4C37E00 = 1;
  }
  return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22555/*"overwriteImageId"*/, 0, v2) != 0;
}


bool HeelPortraitEntity__IsSetOverwriteName(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *ScriptStr; // x0

  if ( (byte_4C37DFE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22564/*"overwriteName"*/);
    byte_4C37DFE = 1;
  }
  ScriptStr = HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_22564/*"overwriteName"*/, 0, v2);
  return !System_String__IsNullOrEmpty(ScriptStr, 0);
}


int32_t HeelPortraitEntity__getScript(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  HeelPortraitEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4C37E02 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    byte_4C37E02 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C32E7C(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
  sub_1C3313C(Item);
  return HeelPortraitEntity__IsSetOverwriteImageId(v12, v13);
}


System_String_o *HeelPortraitEntity__getScriptStr(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x0
  Il2CppObject *Item; // x0
  HeelPortraitEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C37E03 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&string_TypeInfo);
    byte_4C37E03 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v8 = this->fields.script;
  if ( !v8 )
    sub_1C32E7C(0);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v8,
           (Il2CppObject *)key,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C3313C(Item);
  return HeelPortraitEntity__GetOverwriteName(v11, v12, v13);
}