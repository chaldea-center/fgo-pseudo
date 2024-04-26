void __fastcall CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_434DF13 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_434DF13 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_434DF12 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18113/*"cutinAdditionalTime"*/);
    byte_434DF12 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18113/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


bool __fastcall CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_434DF10 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&StringLiteral_15411/*"VoiceVolume"*/);
    byte_434DF10 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_15411/*"VoiceVolume"*/,
                       (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434DF0C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7261/*"HideInDetailWindow"*/);
    byte_434DF0C = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7261/*"HideInDetailWindow"*/, &param, v2);
  return param > 0;
}


bool __fastcall CommandSpellEntity__checkScript(
        CommandSpellEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v10; // x8
  CommandSpellEntity_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_434DF0A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&long_TypeInfo);
    byte_434DF0A = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B7076C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v10 = *(_QWORD *)j_il2cpp_object_unbox_0();
        LOBYTE(script) = 1;
        *param = v10;
      }
      else
      {
        v11 = (CommandSpellEntity_o *)sub_B70A60(Item);
        LOBYTE(script) = CommandSpellEntity__checkUseTreasure(v11, v12, v13);
      }
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkUseTreasure(
        CommandSpellEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_434DF0B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&StringLiteral_17673/*"checkUseTreasure"*/);
    byte_434DF0B = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_17673/*"checkUseTreasure"*/,
            (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


DataVals_array *__fastcall CommandSpellEntity__getDataValsList(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  DataVals_array *v7; // x19
  __int64 v8; // x23
  __int64 v9; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x26
  System_String_o *v12; // x22
  DataVals_o *v13; // x21
  DataVals_o *v14; // x20
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_434DF09 & 1) == 0 )
  {
    sub_B70694(&DataVals___TypeInfo);
    sub_B70694(&DataVals_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434DF09 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = (DataVals_array *)sub_B706AC(DataVals___TypeInfo, 1LL);
    v14 = (DataVals_o *)sub_B70764(DataVals_TypeInfo);
    DataVals___ctor(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v7 )
    {
      if ( v14 )
      {
        v4 = sub_B70754(v14, v7->obj.klass->_1.element_class);
        if ( !v4 )
        {
LABEL_21:
          v17 = sub_B7078C();
          sub_B70738(v17, 0LL);
        }
      }
      if ( !v7->max_length )
      {
LABEL_20:
        v16 = sub_B70798(v4);
        sub_B70738(v16, 0LL);
      }
      v7->m_Items[0] = v14;
      sub_B70630(v7->m_Items);
      return v7;
    }
LABEL_13:
    sub_B7076C(v4, v5);
  }
  v4 = sub_B706AC(DataVals___TypeInfo, svals->max_length);
  v6 = this->fields.svals;
  if ( !v6 )
    goto LABEL_13;
  v7 = (DataVals_array *)v4;
  v8 = 4LL;
  v9 = 32LL;
  while ( 1 )
  {
    max_length = v6->max_length;
    v11 = v8 - 4;
    if ( v8 - 4 >= (int)max_length )
      return v7;
    if ( v11 >= max_length )
      goto LABEL_20;
    v12 = (System_String_o *)*((_QWORD *)&v6->obj.klass + v8);
    v13 = (DataVals_o *)sub_B70764(DataVals_TypeInfo);
    DataVals___ctor(v13, v12, 0LL);
    if ( v7 )
    {
      if ( v13 )
      {
        v4 = sub_B70754(v13, v7->obj.klass->_1.element_class);
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v11 >= v7->max_length )
        goto LABEL_20;
      *((_QWORD *)&v7->obj.klass + v8) = v13;
      v4 = sub_B70630((char *)v7 + v9);
      v6 = this->fields.svals;
      ++v8;
      v9 += 8LL;
      if ( v6 )
        continue;
    }
    goto LABEL_13;
  }
}


System_String_o *__fastcall CommandSpellEntity__getName(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


System_String_o *__fastcall CommandSpellEntity__getPlayVoiceNo(CommandSpellEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_434DF0E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_10843/*"PlayVoiceNo"*/);
    byte_434DF0E = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_10843/*"PlayVoiceNo"*/,
            (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B7076C(0LL, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_10843/*"PlayVoiceNo"*/,
                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B70A60(result);
      return 0LL;
    }
  }
  return result;
}


System_Int32_array_array *__fastcall CommandSpellEntity__getValues(
        CommandSpellEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  System_Int32_array_array *v4; // x0
  System_Int32_array_array *v5; // x1
  struct System_String_array *v6; // x8
  System_Int32_array_array *v7; // x20
  __int64 v8; // x25
  _QWORD *m_Items; // x21
  int max_length; // w9
  System_String_o *v11; // x22
  System_String_array *v12; // x0
  CommandSpellEntity___c_c *v13; // x8
  System_String_array *v14; // x22
  struct CommandSpellEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__13_0; // x23
  Il2CppObject *v17; // x24
  struct CommandSpellEntity___c_StaticFields *v18; // x0
  System_Int32_array_array *v19; // x22
  System_Int32_array *v20; // x19
  __int64 v22; // x0
  __int64 v23; // x0

  if ( (byte_434DF08 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_ConvertAll_string__int___);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Converter_string__int___ctor__);
    sub_B70694(&System_Converter_string__int__TypeInfo);
    sub_B70694(&int_____TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_CommandSpellEntity___c__getValues_b__13_0__);
    sub_B70694(&CommandSpellEntity___c_TypeInfo);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_434DF08 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = (System_Int32_array_array *)sub_B706AC(int_____TypeInfo, 1LL);
    v4 = (System_Int32_array_array *)sub_B706AC(int___TypeInfo, 5LL);
    if ( v7 )
    {
      v20 = (System_Int32_array *)v4;
      if ( v4 )
      {
        v4 = (System_Int32_array_array *)sub_B70754(v4, v7->obj.klass->_1.element_class);
        if ( !v4 )
        {
LABEL_34:
          v23 = sub_B7078C();
          sub_B70738(v23, 0LL);
        }
      }
      if ( !v7->max_length )
      {
LABEL_33:
        v22 = sub_B70798(v4);
        sub_B70738(v22, 0LL);
      }
      v7->m_Items[0] = v20;
      sub_B70630(v7->m_Items);
      return v7;
    }
LABEL_26:
    sub_B7076C(v4, v5);
  }
  v4 = (System_Int32_array_array *)sub_B706AC(int_____TypeInfo, svals->max_length);
  v6 = this->fields.svals;
  if ( !v6 )
    goto LABEL_26;
  v7 = v4;
  v8 = 0LL;
  m_Items = v4->m_Items;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v8 >= max_length )
      return v7;
    if ( (unsigned int)v8 >= max_length )
      goto LABEL_33;
    v4 = (System_Int32_array_array *)v6->m_Items[v8];
    if ( v4 )
    {
      v4 = (System_Int32_array_array *)System_String__Replace_44765404(
                                         (System_String_o *)v4,
                                         (System_String_o *)StringLiteral_15855/*"["*/,
                                         (System_String_o *)StringLiteral_1/*""*/,
                                         0LL);
      if ( v4 )
      {
        v11 = System_String__Replace_44765404(
                (System_String_o *)v4,
                (System_String_o *)StringLiteral_16092/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v4 = (System_Int32_array_array *)sub_B706AC(char___TypeInfo, 1LL);
        if ( v4 )
        {
          v5 = v4;
          if ( !v4->max_length )
            goto LABEL_33;
          LOWORD(v4->m_Items[0]) = 44;
          if ( v11 )
          {
            v12 = System_String__Split(v11, (System_Char_array *)v4, 0LL);
            v13 = CommandSpellEntity___c_TypeInfo;
            v14 = v12;
            if ( (BYTE3(CommandSpellEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo);
              v13 = CommandSpellEntity___c_TypeInfo;
            }
            static_fields = v13->static_fields;
            _9__13_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__13_0;
            if ( !_9__13_0 )
            {
              if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v13);
                static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
              }
              v17 = (Il2CppObject *)static_fields->__9;
              _9__13_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B70764(System_Converter_string__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__13_0,
                v17,
                Method_CommandSpellEntity___c__getValues_b__13_0__,
                (const MethodInfo_21BC5DC *)Method_System_Converter_string__int___ctor__);
              v18 = CommandSpellEntity___c_TypeInfo->static_fields;
              v18->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
              sub_B70630(&v18->__9__13_0);
            }
            v4 = (System_Int32_array_array *)System_Array__ConvertAll_string__int_(
                                               v14,
                                               (System_Converter_TInput__TOutput__o *)_9__13_0,
                                               (const MethodInfo_1FC9CB4 *)Method_System_Array_ConvertAll_string__int___);
            if ( v7 )
            {
              v19 = v4;
              if ( v4 )
              {
                v4 = (System_Int32_array_array *)sub_B70754(v4, v7->obj.klass->_1.element_class);
                if ( !v4 )
                  goto LABEL_34;
              }
              if ( (unsigned int)v8 >= v7->max_length )
                goto LABEL_33;
              *m_Items = v19;
              v4 = (System_Int32_array_array *)sub_B70630(m_Items);
              v6 = this->fields.svals;
              ++v8;
              ++m_Items;
              if ( v6 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
}


System_String_o *__fastcall CommandSpellEntity__getVoiceAssetName(CommandSpellEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_434DF0D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_15409/*"VoiceAssetName"*/);
    byte_434DF0D = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_15409/*"VoiceAssetName"*/,
            (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B7076C(0LL, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_15409/*"VoiceAssetName"*/,
                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B70A60(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall CommandSpellEntity__getVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v4; // s8
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  CommandSpellEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_434DF11 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&StringLiteral_15411/*"VoiceVolume"*/);
    byte_434DF11 = 1;
  }
  script = this->fields.script;
  v4 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15411/*"VoiceVolume"*/,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_15411/*"VoiceVolume"*/,
                                                                                   (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7076C(Item, v5);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0() / 1000.0;
  v8 = (CommandSpellEntity_o *)sub_B70A60(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v8, v9);
}


bool __fastcall CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_434DF0F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&StringLiteral_10844/*"PlayVoiceWait"*/);
    byte_434DF0F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_10844/*"PlayVoiceWait"*/,
                       (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__isUseBattle(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.type - 1) < 2;
}


void __fastcall CommandSpellEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FAA6 & 1) == 0 )
  {
    sub_B70694(&CommandSpellEntity___c_TypeInfo);
    byte_434FAA6 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(CommandSpellEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommandSpellEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall CommandSpellEntity___c___ctor(CommandSpellEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CommandSpellEntity___c___getValues_b__13_0(
        CommandSpellEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  return System_Int32__Parse(input, 0LL);
}