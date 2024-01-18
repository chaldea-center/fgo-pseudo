void __fastcall CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188133 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4188133 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188132 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17847/*"cutinAdditionalTime"*/, method);
    byte_4188132 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17847/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


bool __fastcall CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4188130 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&StringLiteral_15221/*"VoiceVolume"*/, v3);
    byte_4188130 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_15221/*"VoiceVolume"*/,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418812C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7164/*"HideInDetailWindow"*/, method);
    byte_418812C = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7164/*"HideInDetailWindow"*/, &param, v2);
  return param > 0;
}


bool __fastcall CommandSpellEntity__checkScript(
        CommandSpellEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v12; // x8
  CommandSpellEntity_o *v13; // x0
  int32_t v14; // w1
  const MethodInfo *v15; // x2

  if ( (byte_418812A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_418812A = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B2C434(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *param = v12;
      }
      else
      {
        v13 = (CommandSpellEntity_o *)sub_B2C728(Item);
        LOBYTE(script) = CommandSpellEntity__checkUseTreasure(v13, v14, v15);
      }
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandSpellEntity__checkUseTreasure(
        CommandSpellEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_418812B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type);
    sub_B2C35C(&StringLiteral_17408/*"checkUseTreasure"*/, v5);
    byte_418812B = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_17408/*"checkUseTreasure"*/,
            (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


DataVals_array *__fastcall CommandSpellEntity__getDataValsList(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_array *svals; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_String_array *v8; // x8
  DataVals_array *v9; // x19
  __int64 v10; // x23
  __int64 v11; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x26
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  DataVals_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_4188129 & 1) == 0 )
  {
    sub_B2C35C(&DataVals___TypeInfo, method);
    sub_B2C35C(&DataVals_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188129 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v9 = (DataVals_array *)sub_B2C374(DataVals___TypeInfo, 1LL);
    v22 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
    DataVals___ctor(v22, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v9 )
    {
      if ( v22 )
      {
        v6 = sub_B2C41C(v22, v9->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v31 = sub_B2C454(v6);
          sub_B2C400(v31, 0LL);
        }
      }
      if ( !v9->max_length )
      {
LABEL_20:
        v30 = sub_B2C460(v6);
        sub_B2C400(v30, 0LL);
      }
      v9->m_Items[0] = v22;
      sub_B2C2F8((BattleServantConfConponent_o *)v9->m_Items, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
      return v9;
    }
LABEL_13:
    sub_B2C434(v6, v7);
  }
  v6 = sub_B2C374(DataVals___TypeInfo, svals->max_length);
  v8 = this->fields.svals;
  if ( !v8 )
    goto LABEL_13;
  v9 = (DataVals_array *)v6;
  v10 = 4LL;
  v11 = 32LL;
  while ( 1 )
  {
    max_length = v8->max_length;
    v13 = v10 - 4;
    if ( v10 - 4 >= (int)max_length )
      return v9;
    if ( v13 >= max_length )
      goto LABEL_20;
    v14 = (System_String_o *)*((_QWORD *)&v8->obj.klass + v10);
    v15 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
    DataVals___ctor(v15, v14, 0LL);
    if ( v9 )
    {
      if ( v15 )
      {
        v6 = sub_B2C41C(v15, v9->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v13 >= v9->max_length )
        goto LABEL_20;
      *((_QWORD *)&v9->obj.klass + v10) = v15;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)v9 + v11),
        (System_Int32_array **)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      v8 = this->fields.svals;
      ++v10;
      v11 += 8LL;
      if ( v8 )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_418812E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&string_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_10696/*"PlayVoiceNo"*/, v5);
    byte_418812E = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_10696/*"PlayVoiceNo"*/,
            (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B2C434(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_10696/*"PlayVoiceNo"*/,
                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B2C728(result);
      return 0LL;
    }
  }
  return result;
}


System_Int32_array_array *__fastcall CommandSpellEntity__getValues(
        CommandSpellEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_String_array *svals; // x8
  System_String_o *v14; // x0
  System_String_o *v15; // x1
  struct System_String_array *v16; // x8
  System_Int32_array_array *v17; // x20
  __int64 v18; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v21; // x22
  System_String_array *v22; // x0
  CommandSpellEntity___c_c *v23; // x8
  System_String_array *v24; // x22
  struct CommandSpellEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__13_0; // x23
  Il2CppObject *v27; // x24
  struct CommandSpellEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x19
  __int64 v50; // x0
  __int64 v51; // x0

  if ( (byte_4188128 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_ConvertAll_string__int___, method);
    sub_B2C35C(&char___TypeInfo, v3);
    sub_B2C35C(&Method_System_Converter_string__int___ctor__, v4);
    sub_B2C35C(&System_Converter_string__int__TypeInfo, v5);
    sub_B2C35C(&int_____TypeInfo, v6);
    sub_B2C35C(&int___TypeInfo, v7);
    sub_B2C35C(&Method_CommandSpellEntity___c__getValues_b__13_0__, v8);
    sub_B2C35C(&CommandSpellEntity___c_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v12);
    byte_4188128 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v17 = (System_Int32_array_array *)sub_B2C374(int_____TypeInfo, 1LL);
    v14 = (System_String_o *)sub_B2C374(int___TypeInfo, 5LL);
    if ( v17 )
    {
      v48 = (System_Int32_array **)v14;
      if ( v14 )
      {
        v14 = (System_String_o *)sub_B2C41C(v14, v17->obj.klass->_1.element_class);
        if ( !v14 )
        {
LABEL_34:
          v51 = sub_B2C454(v14);
          sub_B2C400(v51, 0LL);
        }
      }
      if ( !v17->max_length )
      {
LABEL_33:
        v50 = sub_B2C460(v14);
        sub_B2C400(v50, 0LL);
      }
      v17->m_Items[0] = (System_Int32_array *)v48;
      sub_B2C2F8((BattleServantConfConponent_o *)v17->m_Items, v48, v42, v43, v44, v45, v46, v47);
      return v17;
    }
LABEL_26:
    sub_B2C434(v14, v15);
  }
  v14 = (System_String_o *)sub_B2C374(int_____TypeInfo, svals->max_length);
  v16 = this->fields.svals;
  if ( !v16 )
    goto LABEL_26;
  v17 = (System_Int32_array_array *)v14;
  v18 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v14[1].monitor;
  while ( 1 )
  {
    max_length = v16->max_length;
    if ( (int)v18 >= max_length )
      return v17;
    if ( (unsigned int)v18 >= max_length )
      goto LABEL_33;
    v14 = v16->m_Items[v18];
    if ( v14 )
    {
      v14 = System_String__Replace_44312768(
              v14,
              (System_String_o *)StringLiteral_15634/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v14 )
      {
        v21 = System_String__Replace_44312768(
                v14,
                (System_String_o *)StringLiteral_15870/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v14 = (System_String_o *)sub_B2C374(char___TypeInfo, 1LL);
        if ( v14 )
        {
          v15 = v14;
          if ( !LODWORD(v14[1].klass) )
            goto LABEL_33;
          LOWORD(v14[1].monitor) = 44;
          if ( v21 )
          {
            v22 = System_String__Split(v21, (System_Char_array *)v14, 0LL);
            v23 = CommandSpellEntity___c_TypeInfo;
            v24 = v22;
            if ( (BYTE3(CommandSpellEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo);
              v23 = CommandSpellEntity___c_TypeInfo;
            }
            static_fields = v23->static_fields;
            _9__13_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__13_0;
            if ( !_9__13_0 )
            {
              if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v23);
                static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
              }
              v27 = (Il2CppObject *)static_fields->__9;
              _9__13_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_string__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__13_0,
                v27,
                Method_CommandSpellEntity___c__getValues_b__13_0__,
                (const MethodInfo_24E026C *)Method_System_Converter_string__int___ctor__);
              v28 = CommandSpellEntity___c_TypeInfo->static_fields;
              v28->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v28->__9__13_0,
                (System_Int32_array **)_9__13_0,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
            }
            v14 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                       v24,
                                       (System_Converter_TInput__TOutput__o *)_9__13_0,
                                       (const MethodInfo_1FFB1FC *)Method_System_Array_ConvertAll_string__int___);
            if ( v17 )
            {
              v41 = (System_Int32_array **)v14;
              if ( v14 )
              {
                v14 = (System_String_o *)sub_B2C41C(v14, v17->obj.klass->_1.element_class);
                if ( !v14 )
                  goto LABEL_34;
              }
              if ( (unsigned int)v18 >= v17->max_length )
                goto LABEL_33;
              p_monitor->klass = (BattleServantConfConponent_c *)v41;
              sub_B2C2F8(p_monitor, v41, v35, v36, v37, v38, v39, v40);
              v16 = this->fields.svals;
              ++v18;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v16 )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_418812D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&string_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_15220/*"VoiceAssetName"*/, v5);
    byte_418812D = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_15220/*"VoiceAssetName"*/,
            (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B2C434(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_15220/*"VoiceAssetName"*/,
                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B2C728(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall CommandSpellEntity__getVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v7; // s8
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  CommandSpellEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4188131 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_15221/*"VoiceVolume"*/, v5);
    byte_4188131 = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15221/*"VoiceVolume"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_15221/*"VoiceVolume"*/,
                                                                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  v11 = (CommandSpellEntity_o *)sub_B2C728(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v11, v12);
}


bool __fastcall CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_418812F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&StringLiteral_10697/*"PlayVoiceWait"*/, v3);
    byte_418812F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_10697/*"PlayVoiceWait"*/,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__isUseBattle(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.type - 1) < 2;
}


void __fastcall CommandSpellEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CommandSpellEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4184F45 & 1) == 0 )
  {
    sub_B2C35C(&CommandSpellEntity___c_TypeInfo, v1);
    byte_4184F45 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CommandSpellEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandSpellEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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