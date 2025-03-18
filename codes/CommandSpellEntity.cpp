void __fastcall CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C21D64 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C21D64 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C21D62 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18773/*"event/location"*/, method);
    byte_4C21D62 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18773/*"event/location"*/, 0.0, 0LL);
}


bool __fastcall CommandSpellEntity__IsIgnoreBattlePointUp(
        CommandSpellEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_4C21D63 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_int___, battlePointIds);
    sub_1C3B764(&Method_System_Linq_Enumerable_Intersect_int___, v5);
    sub_1C3B764(&StringLiteral_7628/*"Invalid attempt to call {0} when the stream non-writable."*/, v6);
    byte_4C21D63 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7628/*"Invalid attempt to call {0} when the stream non-writable."*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
  {
    v8 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_3015284 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v8,
                         (const MethodInfo_2FFB6D0 *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool __fastcall CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C21D60 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C3B764(&StringLiteral_15682/*"[{0}]"*/, v3);
    byte_4C21D60 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15682/*"[{0}]"*/,
                       (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C21D5C & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_7415/*"Indices allocated != Indices requested"*/, method);
    byte_4C21D5C = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7415/*"Indices allocated != Indices requested"*/, &param, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x8
  CommandSpellEntity_o *v15; // x0
  int32_t v16; // w1
  const MethodInfo *v17; // x2

  if ( (byte_4C21D5A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C3B764(&long_TypeInfo, v8);
    byte_4C21D5A = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1C3B9C0(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v14 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
        LOBYTE(script) = 1;
        *param = v14;
      }
      else
      {
        sub_1C3BC80(Item);
        LOBYTE(script) = CommandSpellEntity__checkUseTreasure(v15, v16, v17);
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

  if ( (byte_4C21D5B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type);
    sub_1C3B764(&StringLiteral_18296/*"dispChangeSkillIds"*/, v5);
    byte_4C21D5B = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_18296/*"dispChangeSkillIds"*/,
            (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
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
  __int64 v10; // x24
  __int64 v11; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x26
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  DataVals_o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v30; // x0

  if ( (byte_4C21D59 & 1) == 0 )
  {
    sub_1C3B764(&DataVals___TypeInfo, method);
    sub_1C3B764(&DataVals_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C21D59 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v9 = (DataVals_array *)sub_1C3B80C(DataVals___TypeInfo, 1LL);
    v22 = (DataVals_o *)sub_1C3B9B0(DataVals_TypeInfo);
    DataVals___ctor(v22, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v9 )
    {
      if ( v22 )
      {
        v6 = sub_1C3B8A0(v22, v9->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v30 = sub_1C3B9E4(v6);
          sub_1C3B88C(v30, 0LL);
        }
      }
      if ( !v9->max_length )
LABEL_20:
        sub_1C3B9C8(v6, v7);
      v9->m_Items[0] = v22;
      sub_1C3B708((PartyOrganizationUtility_o *)v9->m_Items, (int64_t)v22, v23, v24, v25, v26, v27, v28);
      return v9;
    }
LABEL_13:
    sub_1C3B9C0(v6, v7);
  }
  v6 = sub_1C3B80C(DataVals___TypeInfo, svals->max_length);
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
    v15 = (DataVals_o *)sub_1C3B9B0(DataVals_TypeInfo);
    DataVals___ctor(v15, v14, 0LL);
    if ( v9 )
    {
      if ( v15 )
      {
        v6 = sub_1C3B8A0(v15, v9->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v13 >= v9->max_length )
        goto LABEL_20;
      *((_QWORD *)&v9->obj.klass + v10) = v15;
      sub_1C3B708((PartyOrganizationUtility_o *)((char *)v9 + v11), (int64_t)v15, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4C21D5E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1C3B764(&string_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_10895/*"RSA_KEYX"*/, v5);
    byte_4C21D5E = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10895/*"RSA_KEYX"*/,
            (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1C3B9C0(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10895/*"RSA_KEYX"*/,
                                  (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C3BC80(result);
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
  struct System_String_array *svals; // x8
  System_String_o *v12; // x0
  __int64 v13; // x1
  struct System_String_array *v14; // x8
  __int64 v15; // x20
  __int64 v16; // x25
  PartyOrganizationUtility_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v19; // x0
  CommandSpellEntity___c_c *v20; // x8
  System_Object_array *v21; // x22
  System_Converter_object__int__o *_9__13_0; // x23
  Il2CppObject *v23; // x24
  struct CommandSpellEntity___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4C21D58 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_ConvertAll_string__int___, method);
    sub_1C3B764(&System_Converter_string__int__TypeInfo, v3);
    sub_1C3B764(&int_____TypeInfo, v4);
    sub_1C3B764(&int___TypeInfo, v5);
    sub_1C3B764(&Method_CommandSpellEntity___c__getValues_b__13_0__, v6);
    sub_1C3B764(&CommandSpellEntity___c_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_16127/*"__field-group"*/, v8);
    sub_1C3B764(&StringLiteral_1/*""*/, v9);
    sub_1C3B764(&StringLiteral_16386/*"align-items"*/, v10);
    byte_4C21D58 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v15 = sub_1C3B80C(int_____TypeInfo, 1LL);
    v12 = (System_String_o *)sub_1C3B80C(int___TypeInfo, 5LL);
    if ( v15 )
    {
      if ( !*(_DWORD *)(v15 + 24) )
LABEL_26:
        sub_1C3B9C8(v12, v13);
      *(_QWORD *)(v15 + 32) = v12;
      sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)v12, v37, v38, v39, v40, v41, v42);
      return (System_Int32_array_array *)v15;
    }
LABEL_25:
    sub_1C3B9C0(v12, v13);
  }
  v12 = (System_String_o *)sub_1C3B80C(int_____TypeInfo, svals->max_length);
  v14 = this->fields.svals;
  if ( !v14 )
    goto LABEL_25;
  v15 = (__int64)v12;
  v16 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&v12[1].monitor;
  while ( 1 )
  {
    max_length = v14->max_length;
    if ( (int)v16 >= max_length )
      return (System_Int32_array_array *)v15;
    if ( (unsigned int)v16 >= max_length )
      goto LABEL_26;
    v12 = v14->m_Items[v16];
    if ( v12 )
    {
      v12 = System_String__Replace_63388240(
              v12,
              (System_String_o *)StringLiteral_16127/*"__field-group"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v12 )
      {
        v12 = System_String__Replace_63388240(
                v12,
                (System_String_o *)StringLiteral_16386/*"align-items"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v12 )
        {
          v19 = System_String__Split(v12, 0x2Cu, 0, 0LL);
          v20 = CommandSpellEntity___c_TypeInfo;
          v21 = (System_Object_array *)v19;
          if ( !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo);
            v20 = CommandSpellEntity___c_TypeInfo;
          }
          _9__13_0 = (System_Converter_object__int__o *)v20->static_fields->__9__13_0;
          if ( !_9__13_0 )
          {
            if ( !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              v20 = CommandSpellEntity___c_TypeInfo;
            }
            v23 = (Il2CppObject *)v20->static_fields->__9;
            _9__13_0 = (System_Converter_object__int__o *)sub_1C3B9B0(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__13_0, v23, Method_CommandSpellEntity___c__getValues_b__13_0__, 0LL);
            static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
            static_fields->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
              (int64_t)_9__13_0,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
          }
          v12 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v21,
                                     (System_Converter_TInput__TOutput__o *)_9__13_0,
                                     (const MethodInfo_30EAEBC *)Method_System_Array_ConvertAll_string__int___);
          if ( v15 )
          {
            if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 24) )
              goto LABEL_26;
            p_monitor->klass = (PartyOrganizationUtility_c *)v12;
            sub_1C3B708(p_monitor, (int64_t)v12, v31, v32, v33, v34, v35, v36);
            v14 = this->fields.svals;
            ++v16;
            p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
            if ( v14 )
              continue;
          }
        }
      }
    }
    goto LABEL_25;
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

  if ( (byte_4C21D5D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1C3B764(&string_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_15680/*"[{0:D4}] {1}"*/, v5);
    byte_4C21D5D = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15680/*"[{0:D4}] {1}"*/,
            (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1C3B9C0(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15680/*"[{0:D4}] {1}"*/,
                                  (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C3BC80(result);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  CommandSpellEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4C21D61 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1C3B764(&long_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_15682/*"[{0}]"*/, v5);
    byte_4C21D61 = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15682/*"[{0}]"*/,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15682/*"[{0}]"*/,
                                                                            (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C3B9C0(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) / 1000.0;
  sub_1C3BC80(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v13, v14);
}


bool __fastcall CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C21D5F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C3B764(&StringLiteral_10896/*"RTrim"*/, v3);
    byte_4C21D5F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10896/*"RTrim"*/,
                       (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C21D65 & 1) == 0 )
  {
    sub_1C3B764(&CommandSpellEntity___c_TypeInfo, v1);
    byte_4C21D65 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(CommandSpellEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommandSpellEntity___c_TypeInfo->static_fields->__9 = (struct CommandSpellEntity___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)CommandSpellEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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