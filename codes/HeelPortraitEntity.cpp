void __fastcall HeelPortraitEntity___ctor(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A7015C & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_int___ctor__, method);
    byte_4A7015C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_312C3A8 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4A70159 & 1) == 0 )
  {
    sub_1B90010(&CondType_TypeInfo, *(_QWORD *)&originImageId);
    sub_1B90010(&StringLiteral_22413/*"overwriteCondNum"*/, v6);
    sub_1B90010(&StringLiteral_22414/*"overwriteCondTargetId"*/, v7);
    sub_1B90010(&StringLiteral_22415/*"overwriteCondType"*/, v8);
    sub_1B90010(&StringLiteral_22423/*"overwriteImageId"*/, v9);
    byte_4A70159 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22415/*"overwriteCondType"*/, 0, v3);
  v12 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22414/*"overwriteCondTargetId"*/, 0, v11);
  v14 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22413/*"overwriteCondNum"*/, 0, v13);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v12, v14, 0, 0LL, 0LL) )
    return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22423/*"overwriteImageId"*/, 0, v15);
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

  if ( (byte_4A70157 & 1) == 0 )
  {
    sub_1B90010(&CondType_TypeInfo, originName);
    sub_1B90010(&StringLiteral_22413/*"overwriteCondNum"*/, v6);
    sub_1B90010(&StringLiteral_22414/*"overwriteCondTargetId"*/, v7);
    sub_1B90010(&StringLiteral_22431/*"overwriteName"*/, v8);
    sub_1B90010(&StringLiteral_22415/*"overwriteCondType"*/, v9);
    byte_4A70157 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22415/*"overwriteCondType"*/, 0, v3);
  v12 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22414/*"overwriteCondTargetId"*/, 0, v11);
  v14 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22413/*"overwriteCondNum"*/, 0, v13);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v12, v14, 0, 0LL, 0LL) )
    return HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_22431/*"overwriteName"*/, 0LL, v15);
  else
    return originName;
}


bool __fastcall HeelPortraitEntity__IsSetOverwriteImageId(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A70158 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_22423/*"overwriteImageId"*/, method);
    byte_4A70158 = 1;
  }
  return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22423/*"overwriteImageId"*/, 0, v2) != 0;
}


bool __fastcall HeelPortraitEntity__IsSetOverwriteName(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *ScriptStr; // x0

  if ( (byte_4A70156 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_22431/*"overwriteName"*/, method);
    byte_4A70156 = 1;
  }
  ScriptStr = HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_22431/*"overwriteName"*/, 0LL, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  HeelPortraitEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4A7015A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B90010(&long_TypeInfo, v8);
    byte_4A7015A = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31D8FA8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_31D8D34 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B9026C(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  sub_1B9052C(Item);
  return HeelPortraitEntity__IsSetOverwriteImageId(v15, v16);
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
  Il2CppObject *Item; // x0
  HeelPortraitEntity_o *v14; // x0
  System_String_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4A7015B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B90010(&string_TypeInfo, v8);
    byte_4A7015B = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31D8FA8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_1B9026C(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_31D8D34 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B9052C(Item);
  return HeelPortraitEntity__GetOverwriteName(v14, v15, v16);
}