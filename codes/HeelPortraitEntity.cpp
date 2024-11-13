void __fastcall HeelPortraitEntity___ctor(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B164F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B164F0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t Script; // w21
  const MethodInfo *v15; // x3
  int32_t v16; // w22
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  int32_t v19; // w23
  const MethodInfo *v20; // x3

  if ( (byte_4B164ED & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&originImageId, method);
    sub_1BCA7E0(&StringLiteral_22621/*"overwriteCondNum"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_22622/*"overwriteCondTargetId"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_22623/*"overwriteCondType"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22631/*"overwriteImageId"*/, v12, v13);
    byte_4B164ED = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22623/*"overwriteCondType"*/, 0, v3);
  v16 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22622/*"overwriteCondTargetId"*/, 0, v15);
  v19 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22621/*"overwriteCondNum"*/, 0, v17);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18);
  if ( CondType__IsOpen(Script, v16, v19, 0, 0LL, 0LL) )
    return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22631/*"overwriteImageId"*/, 0, v20);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t Script; // w21
  const MethodInfo *v15; // x3
  int32_t v16; // w22
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  int32_t v19; // w23
  const MethodInfo *v20; // x3

  if ( (byte_4B164EB & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, originName, method);
    sub_1BCA7E0(&StringLiteral_22621/*"overwriteCondNum"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_22622/*"overwriteCondTargetId"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_22639/*"overwriteName"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22623/*"overwriteCondType"*/, v12, v13);
    byte_4B164EB = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22623/*"overwriteCondType"*/, 0, v3);
  v16 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22622/*"overwriteCondTargetId"*/, 0, v15);
  v19 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22621/*"overwriteCondNum"*/, 0, v17);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18);
  if ( CondType__IsOpen(Script, v16, v19, 0, 0LL, 0LL) )
    return HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_22639/*"overwriteName"*/, 0LL, v20);
  else
    return originName;
}


bool __fastcall HeelPortraitEntity__IsSetOverwriteImageId(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B164EC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22631/*"overwriteImageId"*/, method, v2);
    byte_4B164EC = 1;
  }
  return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22631/*"overwriteImageId"*/, 0, v3) != 0;
}


bool __fastcall HeelPortraitEntity__IsSetOverwriteName(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  System_String_o *ScriptStr; // x0

  if ( (byte_4B164EA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22639/*"overwriteName"*/, method, v2);
    byte_4B164EA = 1;
  }
  ScriptStr = HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_22639/*"overwriteName"*/, 0LL, v3);
  return !System_String__IsNullOrEmpty(ScriptStr, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HeelPortraitEntity__getScript(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  HeelPortraitEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  v4 = defVal;
  if ( (byte_4B164EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B164EE = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(Item, v12);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15);
  sub_1BCACFC(Item);
  return HeelPortraitEntity__IsSetOverwriteImageId(v17, v18);
}


System_String_o *__fastcall HeelPortraitEntity__getScriptStr(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x0
  Il2CppObject *Item; // x0
  HeelPortraitEntity_o *v16; // x0
  System_String_o *v17; // x1
  const MethodInfo *v18; // x2

  v4 = defVal;
  if ( (byte_4B164EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&string_TypeInfo, v9, v10);
    byte_4B164EF = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  v13 = this->fields.script;
  if ( !v13 )
    sub_1BCAA3C(0LL, v12);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v13,
           (Il2CppObject *)key,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v4 = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return v4;
  sub_1BCACFC(Item);
  return HeelPortraitEntity__GetOverwriteName(v16, v17, v18);
}