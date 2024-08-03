void __fastcall CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC22D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FC22D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC22B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18345/*"cutinAdditionalTime"*/, method);
    byte_49FC22B = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18345/*"cutinAdditionalTime"*/, 0.0, 0LL);
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

  if ( (byte_49FC22C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_int___, battlePointIds);
    sub_1B640C8(&Method_System_Linq_Enumerable_Intersect_int___, v5);
    sub_1B640C8(&StringLiteral_7427/*"IgnoreBattlePointUp"*/, v6);
    byte_49FC22C = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7427/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
  {
    v8 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_2E5E45C *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v8,
                         (const MethodInfo_2E46564 *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool __fastcall CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FC229 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&StringLiteral_15306/*"VoiceVolume"*/, v3);
    byte_49FC229 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15306/*"VoiceVolume"*/,
                       (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FC225 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7215/*"HideInDetailWindow"*/, method);
    byte_49FC225 = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7215/*"HideInDetailWindow"*/, &param, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x8
  CommandSpellEntity_o *v14; // x0
  int32_t v15; // w1
  const MethodInfo *v16; // x2

  if ( (byte_49FC223 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    byte_49FC223 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64324(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v13 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12);
        LOBYTE(script) = 1;
        *param = v13;
      }
      else
      {
        sub_1B645E4(Item);
        LOBYTE(script) = CommandSpellEntity__checkUseTreasure(v14, v15, v16);
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

  if ( (byte_49FC224 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type);
    sub_1B640C8(&StringLiteral_17879/*"checkUseTreasure"*/, v5);
    byte_49FC224 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_17879/*"checkUseTreasure"*/,
            (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
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
  __int64 v11; // x24
  __int64 v12; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x26
  System_String_o *v15; // x22
  DataVals_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  DataVals_o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v25; // x0

  if ( (byte_49FC222 & 1) == 0 )
  {
    sub_1B640C8(&DataVals___TypeInfo, method);
    sub_1B640C8(&DataVals_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC222 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v10 = (DataVals_array *)sub_1B64170(DataVals___TypeInfo, 1LL);
    v21 = (DataVals_o *)sub_1B64314(DataVals_TypeInfo, v19, v20);
    DataVals___ctor(v21, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v10 )
    {
      if ( v21 )
      {
        v6 = sub_1B64204(v21, v10->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v25 = sub_1B64348(v6);
          sub_1B641F0(v25, 0LL);
        }
      }
      if ( !v10->max_length )
LABEL_20:
        sub_1B6432C(v6, v7);
      v10->m_Items[0] = v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v10->m_Items, (int32_t)v21, v22, v23);
      return v10;
    }
LABEL_13:
    sub_1B64324(v6);
  }
  v6 = sub_1B64170(DataVals___TypeInfo, svals->max_length);
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
    v16 = (DataVals_o *)sub_1B64314(DataVals_TypeInfo, v7, v8);
    DataVals___ctor(v16, v15, 0LL);
    if ( v10 )
    {
      if ( v16 )
      {
        v6 = sub_1B64204(v16, v10->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v14 >= v10->max_length )
        goto LABEL_20;
      *((_QWORD *)&v10->obj.klass + v11) = v16;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v10 + v12), (int32_t)v16, v17, v18);
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

  if ( (byte_49FC227 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&string_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_10619/*"PlayVoiceNo"*/, v5);
    byte_49FC227 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10619/*"PlayVoiceNo"*/,
            (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B64324(0LL);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10619/*"PlayVoiceNo"*/,
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B645E4(result);
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
  ServantStatusBattleListViewItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  CommandSpellEntity___c_c *v22; // x8
  System_Object_array *v23; // x22
  System_Converter_object__int__o *_9__13_0; // x23
  Il2CppObject *v25; // x24
  struct CommandSpellEntity___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_49FC221 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_ConvertAll_string__int___, method);
    sub_1B640C8(&System_Converter_string__int__TypeInfo, v3);
    sub_1B640C8(&int_____TypeInfo, v4);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&Method_CommandSpellEntity___c__getValues_b__13_0__, v6);
    sub_1B640C8(&CommandSpellEntity___c_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v10);
    byte_49FC221 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v15 = sub_1B64170(int_____TypeInfo, 1LL);
    v12 = (System_String_o *)sub_1B64170(int___TypeInfo, 5LL);
    if ( v15 )
    {
      if ( !*(_DWORD *)(v15 + 24) )
LABEL_26:
        sub_1B6432C(v12, v13);
      *(_QWORD *)(v15 + 32) = v12;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v12, v31, v32);
      return (System_Int32_array_array *)v15;
    }
LABEL_25:
    sub_1B64324(v12);
  }
  v12 = (System_String_o *)sub_1B64170(int_____TypeInfo, svals->max_length);
  v14 = this->fields.svals;
  if ( !v14 )
    goto LABEL_25;
  v15 = (__int64)v12;
  v16 = 0LL;
  p_monitor = (ServantStatusBattleListViewItem_o *)&v12[1].monitor;
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
      v12 = System_String__Replace_61395016(
              v12,
              (System_String_o *)StringLiteral_15744/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v12 )
      {
        v12 = System_String__Replace_61395016(
                v12,
                (System_String_o *)StringLiteral_16000/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v12 )
        {
          v19 = System_String__Split(v12, 0x2Cu, 0, 0LL);
          v22 = CommandSpellEntity___c_TypeInfo;
          v23 = (System_Object_array *)v19;
          if ( !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo);
            v22 = CommandSpellEntity___c_TypeInfo;
          }
          _9__13_0 = (System_Converter_object__int__o *)v22->static_fields->__9__13_0;
          if ( !_9__13_0 )
          {
            if ( !v22->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v22);
              v22 = CommandSpellEntity___c_TypeInfo;
            }
            v25 = (Il2CppObject *)v22->static_fields->__9;
            _9__13_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_string__int__TypeInfo, v20, v21);
            System_Converter_object__int____ctor(_9__13_0, v25, Method_CommandSpellEntity___c__getValues_b__13_0__, 0LL);
            static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
            static_fields->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v27, v28);
          }
          v12 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v23,
                                     (System_Converter_TInput__TOutput__o *)_9__13_0,
                                     (const MethodInfo_2F2E8A0 *)Method_System_Array_ConvertAll_string__int___);
          if ( v15 )
          {
            if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 24) )
              goto LABEL_26;
            p_monitor->klass = (ServantStatusBattleListViewItem_c *)v12;
            sub_1B6406C(p_monitor, (int32_t)v12, v29, v30);
            v14 = this->fields.svals;
            ++v16;
            p_monitor = (ServantStatusBattleListViewItem_o *)((char *)p_monitor + 8);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FC226 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&string_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_15304/*"VoiceAssetName"*/, v5);
    byte_49FC226 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15304/*"VoiceAssetName"*/,
            (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B64324(0LL);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15304/*"VoiceAssetName"*/,
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B645E4(result);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  CommandSpellEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_49FC22A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B640C8(&long_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_15306/*"VoiceVolume"*/, v5);
    byte_49FC22A = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15306/*"VoiceVolume"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15306/*"VoiceVolume"*/,
                                                                            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64324(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10) / 1000.0;
  sub_1B645E4(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v12, v13);
}


bool __fastcall CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FC228 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&StringLiteral_10620/*"PlayVoiceWait"*/, v3);
    byte_49FC228 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10620/*"PlayVoiceWait"*/,
                       (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC22E & 1) == 0 )
  {
    sub_1B640C8(&CommandSpellEntity___c_TypeInfo, v1);
    byte_49FC22E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CommandSpellEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CommandSpellEntity___c_TypeInfo->static_fields->__9 = (struct CommandSpellEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)CommandSpellEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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