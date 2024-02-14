void __fastcall CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4214878 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_4214878 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4214877 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17903/*"cutinAdditionalTime"*/, method);
    byte_4214877 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17903/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


bool __fastcall CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4214875 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&StringLiteral_15268/*"VoiceVolume"*/, v3);
    byte_4214875 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_15268/*"VoiceVolume"*/,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4214871 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7184/*"HideInDetailWindow"*/, method);
    byte_4214871 = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7184/*"HideInDetailWindow"*/, &param, v2);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v11; // x8
  CommandSpellEntity_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2

  if ( (byte_421486F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    byte_421486F = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B0D97C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v11 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *param = v11;
      }
      else
      {
        v12 = (CommandSpellEntity_o *)sub_B0DC70(Item);
        LOBYTE(script) = CommandSpellEntity__checkUseTreasure(v12, v13, v14);
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

  if ( (byte_4214870 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type);
    sub_B0D8A4(&StringLiteral_17463/*"checkUseTreasure"*/, v5);
    byte_4214870 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_17463/*"checkUseTreasure"*/,
            (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


DataVals_array *__fastcall CommandSpellEntity__getDataValsList(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_array *svals; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_String_array *v9; // x8
  DataVals_array *v10; // x19
  __int64 v11; // x23
  __int64 v12; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x26
  System_String_o *v15; // x22
  DataVals_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  DataVals_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_421486E & 1) == 0 )
  {
    sub_B0D8A4(&DataVals___TypeInfo, method);
    sub_B0D8A4(&DataVals_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_421486E = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v10 = (DataVals_array *)sub_B0D8BC(DataVals___TypeInfo, 1LL);
    v25 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v23, v24);
    DataVals___ctor(v25, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v10 )
    {
      if ( v25 )
      {
        v6 = sub_B0D964(v25, v10->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v34 = sub_B0D99C(v6);
          sub_B0D948(v34, 0LL);
        }
      }
      if ( !v10->max_length )
      {
LABEL_20:
        v33 = sub_B0D9A8(v6);
        sub_B0D948(v33, 0LL);
      }
      v10->m_Items[0] = v25;
      sub_B0D840((BattleServantConfConponent_o *)v10->m_Items, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
      return v10;
    }
LABEL_13:
    sub_B0D97C(v6);
  }
  v6 = sub_B0D8BC(DataVals___TypeInfo, svals->max_length);
  v9 = this->fields.svals;
  if ( !v9 )
    goto LABEL_13;
  v10 = (DataVals_array *)v6;
  v11 = 4LL;
  v12 = 32LL;
  while ( 1 )
  {
    max_length = v9->max_length;
    v14 = v11 - 4;
    if ( v11 - 4 >= (int)max_length )
      return v10;
    if ( v14 >= max_length )
      goto LABEL_20;
    v15 = (System_String_o *)*((_QWORD *)&v9->obj.klass + v11);
    v16 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v7, v8);
    DataVals___ctor(v16, v15, 0LL);
    if ( v10 )
    {
      if ( v16 )
      {
        v6 = sub_B0D964(v16, v10->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v14 >= v10->max_length )
        goto LABEL_20;
      *((_QWORD *)&v10->obj.klass + v11) = v16;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)v10 + v12),
        (System_Int32_array **)v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v9 = this->fields.svals;
      ++v11;
      v12 += 8LL;
      if ( v9 )
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4214873 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&string_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_10721/*"PlayVoiceNo"*/, v5);
    byte_4214873 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_10721/*"PlayVoiceNo"*/,
            (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B0D97C(0LL);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_10721/*"PlayVoiceNo"*/,
                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B0DC70(result);
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
  struct System_String_array *v15; // x8
  System_Int32_array_array *v16; // x20
  __int64 v17; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v20; // x22
  System_String_array *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  CommandSpellEntity___c_c *v24; // x8
  System_String_array *v25; // x22
  struct CommandSpellEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__13_0; // x23
  Il2CppObject *v28; // x24
  struct CommandSpellEntity___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x19
  __int64 v51; // x0
  __int64 v52; // x0

  if ( (byte_421486D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_ConvertAll_string__int___, method);
    sub_B0D8A4(&char___TypeInfo, v3);
    sub_B0D8A4(&Method_System_Converter_string__int___ctor__, v4);
    sub_B0D8A4(&System_Converter_string__int__TypeInfo, v5);
    sub_B0D8A4(&int_____TypeInfo, v6);
    sub_B0D8A4(&int___TypeInfo, v7);
    sub_B0D8A4(&Method_CommandSpellEntity___c__getValues_b__13_0__, v8);
    sub_B0D8A4(&CommandSpellEntity___c_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v12);
    byte_421486D = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v16 = (System_Int32_array_array *)sub_B0D8BC(int_____TypeInfo, 1LL);
    v14 = (System_String_o *)sub_B0D8BC(int___TypeInfo, 5LL);
    if ( v16 )
    {
      v49 = (System_Int32_array **)v14;
      if ( v14 )
      {
        v14 = (System_String_o *)sub_B0D964(v14, v16->obj.klass->_1.element_class);
        if ( !v14 )
        {
LABEL_34:
          v52 = sub_B0D99C(v14);
          sub_B0D948(v52, 0LL);
        }
      }
      if ( !v16->max_length )
      {
LABEL_33:
        v51 = sub_B0D9A8(v14);
        sub_B0D948(v51, 0LL);
      }
      v16->m_Items[0] = (System_Int32_array *)v49;
      sub_B0D840((BattleServantConfConponent_o *)v16->m_Items, v49, v43, v44, v45, v46, v47, v48);
      return v16;
    }
LABEL_26:
    sub_B0D97C(v14);
  }
  v14 = (System_String_o *)sub_B0D8BC(int_____TypeInfo, svals->max_length);
  v15 = this->fields.svals;
  if ( !v15 )
    goto LABEL_26;
  v16 = (System_Int32_array_array *)v14;
  v17 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v14[1].monitor;
  while ( 1 )
  {
    max_length = v15->max_length;
    if ( (int)v17 >= max_length )
      return v16;
    if ( (unsigned int)v17 >= max_length )
      goto LABEL_33;
    v14 = v15->m_Items[v17];
    if ( v14 )
    {
      v14 = System_String__Replace_43857140(
              v14,
              (System_String_o *)StringLiteral_15681/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v14 )
      {
        v20 = System_String__Replace_43857140(
                v14,
                (System_String_o *)StringLiteral_15917/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v14 = (System_String_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( v14 )
        {
          if ( !LODWORD(v14[1].klass) )
            goto LABEL_33;
          LOWORD(v14[1].monitor) = 44;
          if ( v20 )
          {
            v21 = System_String__Split(v20, (System_Char_array *)v14, 0LL);
            v24 = CommandSpellEntity___c_TypeInfo;
            v25 = v21;
            if ( (BYTE3(CommandSpellEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo);
              v24 = CommandSpellEntity___c_TypeInfo;
            }
            static_fields = v24->static_fields;
            _9__13_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__13_0;
            if ( !_9__13_0 )
            {
              if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v24);
                static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
              }
              v28 = (Il2CppObject *)static_fields->__9;
              _9__13_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                                 System_Converter_string__int__TypeInfo,
                                                                                 v22,
                                                                                 v23);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__13_0,
                v28,
                Method_CommandSpellEntity___c__getValues_b__13_0__,
                (const MethodInfo_2665D70 *)Method_System_Converter_string__int___ctor__);
              v29 = CommandSpellEntity___c_TypeInfo->static_fields;
              v29->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v29->__9__13_0,
                (System_Int32_array **)_9__13_0,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35);
            }
            v14 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                       v25,
                                       (System_Converter_TInput__TOutput__o *)_9__13_0,
                                       (const MethodInfo_1F677F0 *)Method_System_Array_ConvertAll_string__int___);
            if ( v16 )
            {
              v42 = (System_Int32_array **)v14;
              if ( v14 )
              {
                v14 = (System_String_o *)sub_B0D964(v14, v16->obj.klass->_1.element_class);
                if ( !v14 )
                  goto LABEL_34;
              }
              if ( (unsigned int)v17 >= v16->max_length )
                goto LABEL_33;
              p_monitor->klass = (BattleServantConfConponent_c *)v42;
              sub_B0D840(p_monitor, v42, v36, v37, v38, v39, v40, v41);
              v15 = this->fields.svals;
              ++v17;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v15 )
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4214872 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&string_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_15266/*"VoiceAssetName"*/, v5);
    byte_4214872 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_15266/*"VoiceAssetName"*/,
            (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B0D97C(0LL);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_15266/*"VoiceAssetName"*/,
                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B0DC70(result);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  CommandSpellEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4214876 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B0D8A4(&long_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_15268/*"VoiceVolume"*/, v5);
    byte_4214876 = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15268/*"VoiceVolume"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_15268/*"VoiceVolume"*/,
                                                                                   (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B0D97C(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  v10 = (CommandSpellEntity_o *)sub_B0DC70(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v10, v11);
}


bool __fastcall CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4214874 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&StringLiteral_10722/*"PlayVoiceWait"*/, v3);
    byte_4214874 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_10722/*"PlayVoiceWait"*/,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__isUseBattle(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.type - 1) < 2;
}


void __fastcall CommandSpellEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct CommandSpellEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4211E82 & 1) == 0 )
  {
    sub_B0D8A4(&CommandSpellEntity___c_TypeInfo, v1);
    byte_4211E82 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CommandSpellEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandSpellEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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