void BuffTypeDetailEntity___ctor(BuffTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE3D6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEE3D6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


bool BuffTypeDetailEntity__CheckScript(BuffTypeDetailEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4CEE3D3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CEE3D3 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t BuffTypeDetailEntity__CreatePrimaryKey(BuffTypeDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffType;
}


// local variable allocation has failed, the output may be wrong!
int32_t BuffTypeDetailEntity__GetScript(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BuffTypeDetailEntity_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2

  v4 = defVal;
  if ( (byte_4CEE3D4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&long_TypeInfo);
    byte_4CEE3D4 = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C7BD40(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C7C0DC(script);
  return BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(v12, v13, v14);
}


int32_t BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
        BuffTypeDetailEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CEE3D5 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_12923/*"ShowStateWarBoardEnemyEquip"*/);
    byte_4CEE3D5 = 1;
  }
  return BuffTypeDetailEntity__GetScript(this, (System_String_o *)StringLiteral_12923/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}