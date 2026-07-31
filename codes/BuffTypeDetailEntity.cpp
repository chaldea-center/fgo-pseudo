void BuffTypeDetailEntity___ctor(BuffTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59383BC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59383BC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


bool BuffTypeDetailEntity__CheckScript(BuffTypeDetailEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_59383B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_59383B9 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  if ( (byte_59383BA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_59383BA = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_21FFECC(script, v7);
  }
  if ( script->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, qword_594C090, v9, v10);
  sub_220024C(script, qword_594C090, v9, v10);
  return BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(v12, v13, v14);
}


int32_t BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
        BuffTypeDetailEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_59383BB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13384/*"ShowStateWarBoardEnemyEquip"*/);
    byte_59383BB = 1;
  }
  return BuffTypeDetailEntity__GetScript(this, (System_String_o *)StringLiteral_13384/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}