void __fastcall CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FA5E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FA5E9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FA5E8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17779, method);
    byte_40FA5E8 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17779, 0.0, 0LL);
}


bool __fastcall CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40FA5E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&StringLiteral_15161, v3);
    byte_40FA5E6 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_15161,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FA5E2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7136, method);
    byte_40FA5E2 = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7136, &param, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v12; // x8
  CommandSpellEntity_o *v13; // x0
  int32_t v14; // w1
  const MethodInfo *v15; // x2

  if ( (byte_40FA5E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40FA5E0 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v10 = this->fields.script;
      if ( !v10
        || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                     (System_Type_o *)key,
                     (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B170D4();
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *param = v12;
      }
      else
      {
        v13 = (CommandSpellEntity_o *)sub_B173C8(Item);
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

  if ( (byte_40FA5E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type);
    sub_B16FFC(&StringLiteral_17342, v5);
    byte_40FA5E1 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_17342,
            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


DataVals_array *__fastcall CommandSpellEntity__getDataValsList(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_String_array *svals; // x8
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct System_String_array *v12; // x8
  DataVals_array *v13; // x19
  __int64 v14; // x23
  __int64 v15; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v17; // x26
  System_String_o *v18; // x22
  DataVals_o *v19; // x21
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  DataVals_o *v29; // x20
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40FA5DF & 1) == 0 )
  {
    sub_B16FFC(&DataVals___TypeInfo, method);
    sub_B16FFC(&DataVals_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FA5DF = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v13 = (DataVals_array *)sub_B17014(DataVals___TypeInfo, 1LL, v2);
    v29 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v25, v26, v27, v28);
    DataVals___ctor(v29, (System_String_o *)StringLiteral_1, 0LL);
    if ( v13 )
    {
      if ( v29 )
      {
        v7 = sub_B170BC(v29, v13->obj.klass->_1.element_class);
        if ( !v7 )
        {
LABEL_21:
          sub_B170F4(v7);
          sub_B170A0();
        }
      }
      if ( !v13->max_length )
      {
LABEL_20:
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      v13->m_Items[0] = v29;
      sub_B16F98((BattleServantConfConponent_o *)v13->m_Items, (System_Int32_array **)v29, v9, v30, v31, v32, v33, v34);
      return v13;
    }
LABEL_13:
    sub_B170D4();
  }
  v7 = sub_B17014(DataVals___TypeInfo, svals->max_length, v2);
  v12 = this->fields.svals;
  if ( !v12 )
    goto LABEL_13;
  v13 = (DataVals_array *)v7;
  v14 = 4LL;
  v15 = 32LL;
  while ( 1 )
  {
    max_length = v12->max_length;
    v17 = v14 - 4;
    if ( v14 - 4 >= (int)max_length )
      return v13;
    if ( v17 >= max_length )
      goto LABEL_20;
    v18 = (System_String_o *)*((_QWORD *)&v12->obj.klass + v14);
    v19 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v8, v9, v10, v11);
    DataVals___ctor(v19, v18, 0LL);
    if ( v13 )
    {
      if ( v19 )
      {
        v7 = sub_B170BC(v19, v13->obj.klass->_1.element_class);
        if ( !v7 )
          goto LABEL_21;
      }
      if ( v17 >= v13->max_length )
        goto LABEL_20;
      *((_QWORD *)&v13->obj.klass + v14) = v19;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)v13 + v15),
        (System_Int32_array **)v19,
        v9,
        v20,
        v21,
        v22,
        v23,
        v24);
      v12 = this->fields.svals;
      ++v14;
      v15 += 8LL;
      if ( v12 )
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

  if ( (byte_40FA5E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&string_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_10662, v5);
    byte_40FA5E4 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_10662,
            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B170D4();
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_10662,
                                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B173C8(result);
      return 0LL;
    }
  }
  return result;
}


System_Int32_array_array *__fastcall CommandSpellEntity__getValues(
        CommandSpellEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_String_array *svals; // x8
  System_Char_array *v15; // x0
  System_Char_array *v16; // x1
  System_String_array **v17; // x2
  struct System_String_array *v18; // x8
  System_Int32_array_array *v19; // x20
  __int64 v20; // x25
  BattleServantConfConponent_o *v21; // x21
  int max_length; // w9
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x22
  __int64 v26; // x2
  System_String_array *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  CommandSpellEntity___c_c *v32; // x8
  System_String_array *v33; // x22
  struct CommandSpellEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__13_0; // x23
  Il2CppObject *v36; // x24
  struct CommandSpellEntity___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x22
  __int64 v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x19

  if ( (byte_40FA5DE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_ConvertAll_string__int___, method);
    sub_B16FFC(&char___TypeInfo, v4);
    sub_B16FFC(&Method_System_Converter_string__int___ctor__, v5);
    sub_B16FFC(&System_Converter_string__int__TypeInfo, v6);
    sub_B16FFC(&int_____TypeInfo, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&Method_CommandSpellEntity___c__getValues_b__13_0__, v9);
    sub_B16FFC(&CommandSpellEntity___c_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_15571, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    sub_B16FFC(&StringLiteral_15807, v13);
    byte_40FA5DE = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v19 = (System_Int32_array_array *)sub_B17014(int_____TypeInfo, 1LL, v2);
    v15 = (System_Char_array *)sub_B17014(int___TypeInfo, 5LL, v50);
    if ( v19 )
    {
      v56 = (System_Int32_array **)v15;
      if ( v15 )
      {
        v15 = (System_Char_array *)sub_B170BC(v15, v19->obj.klass->_1.element_class);
        if ( !v15 )
        {
LABEL_34:
          sub_B170F4(v15);
          sub_B170A0();
        }
      }
      if ( !v19->max_length )
      {
LABEL_33:
        sub_B17100(v15, v16, v17);
        sub_B170A0();
      }
      v19->m_Items[0] = (System_Int32_array *)v56;
      sub_B16F98((BattleServantConfConponent_o *)v19->m_Items, v56, v17, v51, v52, v53, v54, v55);
      return v19;
    }
LABEL_26:
    sub_B170D4();
  }
  v15 = (System_Char_array *)sub_B17014(int_____TypeInfo, svals->max_length, v2);
  v18 = this->fields.svals;
  if ( !v18 )
    goto LABEL_26;
  v19 = (System_Int32_array_array *)v15;
  v20 = 0LL;
  v21 = (BattleServantConfConponent_o *)&v15->m_Items[2];
  while ( 1 )
  {
    max_length = v18->max_length;
    if ( (int)v20 >= max_length )
      return v19;
    if ( (unsigned int)v20 >= max_length )
      goto LABEL_33;
    v23 = v18->m_Items[v20];
    if ( v23 )
    {
      v24 = System_String__Replace_43750968(
              v23,
              (System_String_o *)StringLiteral_15571,
              (System_String_o *)StringLiteral_1,
              0LL);
      if ( v24 )
      {
        v25 = System_String__Replace_43750968(
                v24,
                (System_String_o *)StringLiteral_15807,
                (System_String_o *)StringLiteral_1,
                0LL);
        v15 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v26);
        if ( v15 )
        {
          v16 = v15;
          if ( !v15->max_length )
            goto LABEL_33;
          v15->m_Items[2] = 44;
          if ( v25 )
          {
            v27 = System_String__Split(v25, v15, 0LL);
            v32 = CommandSpellEntity___c_TypeInfo;
            v33 = v27;
            if ( (BYTE3(CommandSpellEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo);
              v32 = CommandSpellEntity___c_TypeInfo;
            }
            static_fields = v32->static_fields;
            _9__13_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__13_0;
            if ( !_9__13_0 )
            {
              if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v32);
                static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
              }
              v36 = (Il2CppObject *)static_fields->__9;
              _9__13_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                                 System_Converter_string__int__TypeInfo,
                                                                                 v28,
                                                                                 v29,
                                                                                 v30,
                                                                                 v31);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__13_0,
                v36,
                Method_CommandSpellEntity___c__getValues_b__13_0__,
                (const MethodInfo_266B524 *)Method_System_Converter_string__int___ctor__);
              v37 = CommandSpellEntity___c_TypeInfo->static_fields;
              v37->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v37->__9__13_0,
                (System_Int32_array **)_9__13_0,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
            }
            v15 = (System_Char_array *)System_Array__ConvertAll_string__int_(
                                         v33,
                                         (System_Converter_TInput__TOutput__o *)_9__13_0,
                                         (const MethodInfo_2043230 *)Method_System_Array_ConvertAll_string__int___);
            if ( v19 )
            {
              v49 = (System_Int32_array **)v15;
              if ( v15 )
              {
                v15 = (System_Char_array *)sub_B170BC(v15, v19->obj.klass->_1.element_class);
                if ( !v15 )
                  goto LABEL_34;
              }
              if ( (unsigned int)v20 >= v19->max_length )
                goto LABEL_33;
              v21->klass = (BattleServantConfConponent_c *)v49;
              sub_B16F98(v21, v49, v17, v44, v45, v46, v47, v48);
              v18 = this->fields.svals;
              ++v20;
              v21 = (BattleServantConfConponent_o *)((char *)v21 + 8);
              if ( v18 )
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

  if ( (byte_40FA5E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&string_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_15160, v5);
    byte_40FA5E3 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_15160,
            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B170D4();
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_15160,
                                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B173C8(result);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  CommandSpellEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FA5E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_15161, v5);
    byte_40FA5E7 = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15161,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  v8 = this->fields.script;
  if ( !v8
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8,
                 (System_Type_o *)StringLiteral_15161,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  v11 = (CommandSpellEntity_o *)sub_B173C8(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v11, v12);
}


bool __fastcall CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40FA5E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&StringLiteral_10663, v3);
    byte_40FA5E5 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_10663,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F713C & 1) == 0 )
  {
    sub_B16FFC(&CommandSpellEntity___c_TypeInfo, v1);
    byte_40F713C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CommandSpellEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommandSpellEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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