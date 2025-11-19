void HeelPortraitEntity___ctor(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB671B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB671B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4CB6718 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&StringLiteral_22626/*"overwriteCondNum"*/);
    sub_1C6BA08(&StringLiteral_22627/*"overwriteCondTargetId"*/);
    sub_1C6BA08(&StringLiteral_22628/*"overwriteCondType"*/);
    sub_1C6BA08(&StringLiteral_22646/*"overwriteImageId"*/);
    byte_4CB6718 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22628/*"overwriteCondType"*/, 0, v3);
  v8 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22627/*"overwriteCondTargetId"*/, 0, v7);
  v10 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22626/*"overwriteCondNum"*/, 0, v9);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v8, v10, 0, 0, 0) )
    return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22646/*"overwriteImageId"*/, 0, v11);
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

  if ( (byte_4CB6716 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&StringLiteral_22626/*"overwriteCondNum"*/);
    sub_1C6BA08(&StringLiteral_22627/*"overwriteCondTargetId"*/);
    sub_1C6BA08(&StringLiteral_22655/*"overwriteName"*/);
    sub_1C6BA08(&StringLiteral_22628/*"overwriteCondType"*/);
    byte_4CB6716 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22628/*"overwriteCondType"*/, 0, v3);
  v8 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22627/*"overwriteCondTargetId"*/, 0, v7);
  v10 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22626/*"overwriteCondNum"*/, 0, v9);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(Script, v8, v10, 0, 0, 0) )
    return HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_22655/*"overwriteName"*/, 0, v11);
  else
    return originName;
}


bool HeelPortraitEntity__IsSetOverwriteImageId(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6717 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22646/*"overwriteImageId"*/);
    byte_4CB6717 = 1;
  }
  return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_22646/*"overwriteImageId"*/, 0, v2) != 0;
}


bool HeelPortraitEntity__IsSetOverwriteName(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *ScriptStr; // x0

  if ( (byte_4CB6715 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22655/*"overwriteName"*/);
    byte_4CB6715 = 1;
  }
  ScriptStr = HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_22655/*"overwriteName"*/, 0, v2);
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

  if ( (byte_4CB6719 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&long_TypeInfo);
    byte_4CB6719 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C6BC60(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1C6BFFC(Item);
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

  if ( (byte_4CB671A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB671A = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1C6BC60(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C6BFFC(Item);
  return HeelPortraitEntity__GetOverwriteName(v12, v13, v14);
}