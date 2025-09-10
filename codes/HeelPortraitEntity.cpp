void HeelPortraitEntity___ctor(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27623 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27623 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4C27620 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&StringLiteral_22518/*"overwriteCondNum"*/);
    sub_1C2D490(&StringLiteral_22519/*"overwriteCondTargetId"*/);
    sub_1C2D490(&StringLiteral_22520/*"overwriteCondType"*/);
    sub_1C2D490(&StringLiteral_22538/*"overwriteImageId"*/);
    byte_4C27620 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22520/*"overwriteCondType"*/, 0, v3);
  v8 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22519/*"overwriteCondTargetId"*/, 0, v7);
  v10 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22518/*"overwriteCondNum"*/, 0, v9);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v8, v10, 0, 0, 0) )
    return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22538/*"overwriteImageId"*/, 0, v11);
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

  if ( (byte_4C2761E & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&StringLiteral_22518/*"overwriteCondNum"*/);
    sub_1C2D490(&StringLiteral_22519/*"overwriteCondTargetId"*/);
    sub_1C2D490(&StringLiteral_22547/*"overwriteName"*/);
    sub_1C2D490(&StringLiteral_22520/*"overwriteCondType"*/);
    byte_4C2761E = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22520/*"overwriteCondType"*/, 0, v3);
  v8 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22519/*"overwriteCondTargetId"*/, 0, v7);
  v10 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22518/*"overwriteCondNum"*/, 0, v9);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v8, v10, 0, 0, 0) )
    return HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_22547/*"overwriteName"*/, 0, v11);
  else
    return originName;
}


bool HeelPortraitEntity__IsSetOverwriteImageId(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2761F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22538/*"overwriteImageId"*/);
    byte_4C2761F = 1;
  }
  return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22538/*"overwriteImageId"*/, 0, v2) != 0;
}


bool HeelPortraitEntity__IsSetOverwriteName(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *ScriptStr; // x0

  if ( (byte_4C2761D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22547/*"overwriteName"*/);
    byte_4C2761D = 1;
  }
  ScriptStr = HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_22547/*"overwriteName"*/, 0, v2);
  return !System_String__IsNullOrEmpty(ScriptStr, 0);
}


int32_t HeelPortraitEntity__getScript(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  HeelPortraitEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4C27621 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&long_TypeInfo);
    byte_4C27621 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C2D6EC(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1C2D9AC(Item);
  return HeelPortraitEntity__IsSetOverwriteImageId(v13, v14);
}


System_String_o *HeelPortraitEntity__getScriptStr(
        HeelPortraitEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  Il2CppObject *Item; // x0
  HeelPortraitEntity_o *v12; // x0
  System_String_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4C27622 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C27622 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1C2D6EC(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C2D9AC(Item);
  return HeelPortraitEntity__GetOverwriteName(v12, v13, v14);
}