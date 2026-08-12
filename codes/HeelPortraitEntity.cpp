void HeelPortraitEntity___ctor(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970CC9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970CC9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v10; // x1
  int32_t v11; // w23
  const MethodInfo *v12; // x3

  if ( (byte_5970CC6 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&StringLiteral_23679/*"overwriteCondNum"*/);
    sub_2213A60(&StringLiteral_23680/*"overwriteCondTargetId"*/);
    sub_2213A60(&StringLiteral_23681/*"overwriteCondType"*/);
    sub_2213A60(&StringLiteral_23701/*"overwriteImageId"*/);
    byte_5970CC6 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_23681/*"overwriteCondType"*/, 0, v3);
  v8 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_23680/*"overwriteCondTargetId"*/, 0, v7);
  v11 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_23679/*"overwriteCondNum"*/, 0, v9);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
  if ( CondType__IsOpen(Script, v8, v11, 0, 0, 0) )
    return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_23701/*"overwriteImageId"*/, 0, v12);
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
  __int64 v10; // x1
  int32_t v11; // w23
  const MethodInfo *v12; // x3

  if ( (byte_5970CC4 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&StringLiteral_23679/*"overwriteCondNum"*/);
    sub_2213A60(&StringLiteral_23680/*"overwriteCondTargetId"*/);
    sub_2213A60(&StringLiteral_23713/*"overwriteName"*/);
    sub_2213A60(&StringLiteral_23681/*"overwriteCondType"*/);
    byte_5970CC4 = 1;
  }
  Script = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_23681/*"overwriteCondType"*/, 0, v3);
  v8 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_23680/*"overwriteCondTargetId"*/, 0, v7);
  v11 = HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_23679/*"overwriteCondNum"*/, 0, v9);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
  if ( CondType__IsOpen(Script, v8, v11, 0, 0, 0) )
    return HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_23713/*"overwriteName"*/, 0, v12);
  else
    return originName;
}


bool HeelPortraitEntity__IsSetOverwriteImageId(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970CC5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23701/*"overwriteImageId"*/);
    byte_5970CC5 = 1;
  }
  return HeelPortraitEntity__getScript(this, (System_String_o *)StringLiteral_23701/*"overwriteImageId"*/, 0, v2) != 0;
}


bool HeelPortraitEntity__IsSetOverwriteName(HeelPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *ScriptStr; // x0

  if ( (byte_5970CC3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23713/*"overwriteName"*/);
    byte_5970CC3 = 1;
  }
  ScriptStr = HeelPortraitEntity__getScriptStr(this, (System_String_o *)StringLiteral_23713/*"overwriteName"*/, 0, v2);
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
  HeelPortraitEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_5970CC7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5970CC7 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(Item, v8);
  }
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v10);
  sub_221405C(Item, qword_5984368, v10);
  return HeelPortraitEntity__IsSetOverwriteImageId(v12, v13);
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
  __int64 v11; // x2
  HeelPortraitEntity_o *v13; // x0
  System_String_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5970CC8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5970CC8 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_2213CDC(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || Item->klass == (Il2CppClass *)qword_5984390 )
    return defVal;
  sub_221405C(Item, qword_5984390, v11);
  return HeelPortraitEntity__GetOverwriteName(v13, v14, v15);
}