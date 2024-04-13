void __fastcall CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8C21 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E8C21 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8C20 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18066/*"cutinAdditionalTime"*/, (_DWORD)method, v2, v3);
    byte_42E8C20 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18066/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


bool __fastcall CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E8C1E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15380/*"VoiceVolume"*/, v5, v6, v7);
    byte_42E8C1E = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_15380/*"VoiceVolume"*/,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8C1A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7246/*"HideInDetailWindow"*/, (_DWORD)method, v2, v3);
    byte_42E8C1A = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7246/*"HideInDetailWindow"*/, &param, v3);
  return param > 0;
}


bool __fastcall CommandSpellEntity__checkScript(
        CommandSpellEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v16; // x8
  CommandSpellEntity_o *v17; // x0
  int32_t v18; // w1
  const MethodInfo *v19; // x2

  if ( (byte_42E8C18 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)param,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42E8C18 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B5D69C(Item, v14);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v16 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *param = v16;
      }
      else
      {
        v17 = (CommandSpellEntity_o *)sub_B5D990(Item);
        LOBYTE(script) = CommandSpellEntity__checkUseTreasure(v17, v18, v19);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E8C19 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, type, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17626/*"checkUseTreasure"*/, v6, v7, v8);
    byte_42E8C19 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_17626/*"checkUseTreasure"*/,
            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


DataVals_array *__fastcall CommandSpellEntity__getDataValsList(CommandSpellEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_array *svals; // x8
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_String_array *v14; // x8
  DataVals_array *v15; // x19
  __int64 v16; // x23
  __int64 v17; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v19; // x26
  System_String_o *v20; // x22
  DataVals_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  DataVals_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v36; // x0
  __int64 v37; // x0

  if ( (byte_42E8C17 & 1) == 0 )
  {
    sub_B5D5C4(&DataVals___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataVals_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E8C17 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v15 = (DataVals_array *)sub_B5D5DC(DataVals___TypeInfo, 1LL);
    v28 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
    DataVals___ctor(v28, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v15 )
    {
      if ( v28 )
      {
        v12 = sub_B5D684(v28, v15->obj.klass->_1.element_class);
        if ( !v12 )
        {
LABEL_21:
          v37 = sub_B5D6BC(v12);
          sub_B5D668(v37, 0LL);
        }
      }
      if ( !v15->max_length )
      {
LABEL_20:
        v36 = sub_B5D6C8(v12);
        sub_B5D668(v36, 0LL);
      }
      v15->m_Items[0] = v28;
      sub_B5D560((BattleServantConfConponent_o *)v15->m_Items, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
      return v15;
    }
LABEL_13:
    sub_B5D69C(v12, v13);
  }
  v12 = sub_B5D5DC(DataVals___TypeInfo, svals->max_length);
  v14 = this->fields.svals;
  if ( !v14 )
    goto LABEL_13;
  v15 = (DataVals_array *)v12;
  v16 = 4LL;
  v17 = 32LL;
  while ( 1 )
  {
    max_length = v14->max_length;
    v19 = v16 - 4;
    if ( v16 - 4 >= (int)max_length )
      return v15;
    if ( v19 >= max_length )
      goto LABEL_20;
    v20 = (System_String_o *)*((_QWORD *)&v14->obj.klass + v16);
    v21 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
    DataVals___ctor(v21, v20, 0LL);
    if ( v15 )
    {
      if ( v21 )
      {
        v12 = sub_B5D684(v21, v15->obj.klass->_1.element_class);
        if ( !v12 )
          goto LABEL_21;
      }
      if ( v19 >= v15->max_length )
        goto LABEL_20;
      *((_QWORD *)&v15->obj.klass + v16) = v21;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)v15 + v17),
        (System_Int32_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v14 = this->fields.svals;
      ++v16;
      v17 += 8LL;
      if ( v14 )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *result; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E8C1C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&string_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10822/*"PlayVoiceNo"*/, v11, v12, v13);
    byte_42E8C1C = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_10822/*"PlayVoiceNo"*/,
            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B5D69C(0LL, v15);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_10822/*"PlayVoiceNo"*/,
                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B5D990(result);
      return 0LL;
    }
  }
  return result;
}


System_Int32_array_array *__fastcall CommandSpellEntity__getValues(
        CommandSpellEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct System_String_array *svals; // x8
  System_String_o *v36; // x0
  System_String_o *v37; // x1
  struct System_String_array *v38; // x8
  System_Int32_array_array *v39; // x20
  __int64 v40; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v43; // x22
  System_String_array *v44; // x0
  CommandSpellEntity___c_c *v45; // x8
  System_String_array *v46; // x22
  struct CommandSpellEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__13_0; // x23
  Il2CppObject *v49; // x24
  struct CommandSpellEntity___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x22
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x19
  __int64 v72; // x0
  __int64 v73; // x0

  if ( (byte_42E8C16 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_ConvertAll_string__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&char___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Converter_string__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Converter_string__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int_____TypeInfo, v14, v15, v16);
    sub_B5D5C4(&int___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_CommandSpellEntity___c__getValues_b__13_0__, v20, v21, v22);
    sub_B5D5C4(&CommandSpellEntity___c_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1/*""*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v32, v33, v34);
    byte_42E8C16 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v39 = (System_Int32_array_array *)sub_B5D5DC(int_____TypeInfo, 1LL);
    v36 = (System_String_o *)sub_B5D5DC(int___TypeInfo, 5LL);
    if ( v39 )
    {
      v70 = (System_Int32_array **)v36;
      if ( v36 )
      {
        v36 = (System_String_o *)sub_B5D684(v36, v39->obj.klass->_1.element_class);
        if ( !v36 )
        {
LABEL_34:
          v73 = sub_B5D6BC(v36);
          sub_B5D668(v73, 0LL);
        }
      }
      if ( !v39->max_length )
      {
LABEL_33:
        v72 = sub_B5D6C8(v36);
        sub_B5D668(v72, 0LL);
      }
      v39->m_Items[0] = (System_Int32_array *)v70;
      sub_B5D560((BattleServantConfConponent_o *)v39->m_Items, v70, v64, v65, v66, v67, v68, v69);
      return v39;
    }
LABEL_26:
    sub_B5D69C(v36, v37);
  }
  v36 = (System_String_o *)sub_B5D5DC(int_____TypeInfo, svals->max_length);
  v38 = this->fields.svals;
  if ( !v38 )
    goto LABEL_26;
  v39 = (System_Int32_array_array *)v36;
  v40 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v36[1].monitor;
  while ( 1 )
  {
    max_length = v38->max_length;
    if ( (int)v40 >= max_length )
      return v39;
    if ( (unsigned int)v40 >= max_length )
      goto LABEL_33;
    v36 = v38->m_Items[v40];
    if ( v36 )
    {
      v36 = System_String__Replace_44585024(
              v36,
              (System_String_o *)StringLiteral_15824/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v36 )
      {
        v43 = System_String__Replace_44585024(
                v36,
                (System_String_o *)StringLiteral_16061/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v36 = (System_String_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( v36 )
        {
          v37 = v36;
          if ( !LODWORD(v36[1].klass) )
            goto LABEL_33;
          LOWORD(v36[1].monitor) = 44;
          if ( v43 )
          {
            v44 = System_String__Split(v43, (System_Char_array *)v36, 0LL);
            v45 = CommandSpellEntity___c_TypeInfo;
            v46 = v44;
            if ( (BYTE3(CommandSpellEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo);
              v45 = CommandSpellEntity___c_TypeInfo;
            }
            static_fields = v45->static_fields;
            _9__13_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__13_0;
            if ( !_9__13_0 )
            {
              if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v45);
                static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
              }
              v49 = (Il2CppObject *)static_fields->__9;
              _9__13_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_string__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__13_0,
                v49,
                Method_CommandSpellEntity___c__getValues_b__13_0__,
                (const MethodInfo_23F6FAC *)Method_System_Converter_string__int___ctor__);
              v50 = CommandSpellEntity___c_TypeInfo->static_fields;
              v50->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v50->__9__13_0,
                (System_Int32_array **)_9__13_0,
                v51,
                v52,
                v53,
                v54,
                v55,
                v56);
            }
            v36 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                       v46,
                                       (System_Converter_TInput__TOutput__o *)_9__13_0,
                                       (const MethodInfo_1FBF43C *)Method_System_Array_ConvertAll_string__int___);
            if ( v39 )
            {
              v63 = (System_Int32_array **)v36;
              if ( v36 )
              {
                v36 = (System_String_o *)sub_B5D684(v36, v39->obj.klass->_1.element_class);
                if ( !v36 )
                  goto LABEL_34;
              }
              if ( (unsigned int)v40 >= v39->max_length )
                goto LABEL_33;
              p_monitor->klass = (BattleServantConfConponent_c *)v63;
              sub_B5D560(p_monitor, v63, v57, v58, v59, v60, v61, v62);
              v38 = this->fields.svals;
              ++v40;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v38 )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *result; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E8C1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&string_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15378/*"VoiceAssetName"*/, v11, v12, v13);
    byte_42E8C1B = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_15378/*"VoiceAssetName"*/,
            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_B5D69C(0LL, v15);
    result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                                  (System_Type_o *)StringLiteral_15378/*"VoiceAssetName"*/,
                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_B5D990(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall CommandSpellEntity__getVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v15; // s8
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  CommandSpellEntity_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_42E8C1F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15380/*"VoiceVolume"*/, v11, v12, v13);
    byte_42E8C1F = 1;
  }
  script = this->fields.script;
  v15 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15380/*"VoiceVolume"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v15;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_15380/*"VoiceVolume"*/,
                                                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(Item, v16);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item) / 1000.0;
  v19 = (CommandSpellEntity_o *)sub_B5D990(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v19, v20);
}


bool __fastcall CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E8C1D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10823/*"PlayVoiceWait"*/, v5, v6, v7);
    byte_42E8C1D = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)StringLiteral_10823/*"PlayVoiceWait"*/,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__isUseBattle(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.type - 1) < 2;
}


void __fastcall CommandSpellEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6CF4 & 1) == 0 )
  {
    sub_B5D5C4(&CommandSpellEntity___c_TypeInfo, v1, v2, v3);
    byte_42E6CF4 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CommandSpellEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommandSpellEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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