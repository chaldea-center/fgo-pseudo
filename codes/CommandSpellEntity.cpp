void __fastcall CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BAC77 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BAC77 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BAC75 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_18110/*"cutinAdditionalTime"*/, method);
    byte_49BAC75 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18110/*"cutinAdditionalTime"*/, 0.0, 0LL);
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

  if ( (byte_49BAC76 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_int___, battlePointIds);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Intersect_int___, v5);
    sub_1B4CF90(&StringLiteral_7358/*"IgnoreBattlePointUp"*/, v6);
    byte_49BAC76 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7358/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
  {
    v8 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_2F28B34 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v8,
                         (const MethodInfo_2F0EF80 *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool __fastcall CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49BAC73 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&StringLiteral_15075/*"VoiceVolume"*/, v3);
    byte_49BAC73 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15075/*"VoiceVolume"*/,
                       (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49BAC6F & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_7154/*"HideInDetailWindow"*/, method);
    byte_49BAC6F = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7154/*"HideInDetailWindow"*/, &param, v2);
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

  if ( (byte_49BAC6D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B4CF90(&long_TypeInfo, v8);
    byte_49BAC6D = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B4D1EC(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v14 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
        LOBYTE(script) = 1;
        *param = v14;
      }
      else
      {
        sub_1B4D4AC(Item);
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

  if ( (byte_49BAC6E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type);
    sub_1B4CF90(&StringLiteral_17640/*"checkUseTreasure"*/, v5);
    byte_49BAC6E = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_17640/*"checkUseTreasure"*/,
            (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  DataVals_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v22; // x0

  if ( (byte_49BAC6C & 1) == 0 )
  {
    sub_1B4CF90(&DataVals___TypeInfo, method);
    sub_1B4CF90(&DataVals_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49BAC6C = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v9 = (DataVals_array *)sub_1B4D038(DataVals___TypeInfo, 1LL);
    v18 = (DataVals_o *)sub_1B4D1DC(DataVals_TypeInfo);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v9 )
    {
      if ( v18 )
      {
        v6 = sub_1B4D0CC(v18, v9->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v22 = sub_1B4D210(v6);
          sub_1B4D0B8(v22, 0LL);
        }
      }
      if ( !v9->max_length )
LABEL_20:
        sub_1B4D1F4(v6, v7);
      v9->m_Items[0] = v18;
      sub_1B4CF34((CGThumbnailListItem_o *)v9->m_Items, (int32_t)v18, v19, v20);
      return v9;
    }
LABEL_13:
    sub_1B4D1EC(v6, v7);
  }
  v6 = sub_1B4D038(DataVals___TypeInfo, svals->max_length);
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
    v15 = (DataVals_o *)sub_1B4D1DC(DataVals_TypeInfo);
    DataVals___ctor(v15, v14, 0LL);
    if ( v9 )
    {
      if ( v15 )
      {
        v6 = sub_1B4D0CC(v15, v9->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v13 >= v9->max_length )
        goto LABEL_20;
      *((_QWORD *)&v9->obj.klass + v10) = v15;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)v9 + v11), (int32_t)v15, v16, v17);
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

  if ( (byte_49BAC71 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B4CF90(&string_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_10460/*"PlayVoiceNo"*/, v5);
    byte_49BAC71 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10460/*"PlayVoiceNo"*/,
            (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B4D1EC(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10460/*"PlayVoiceNo"*/,
                                  (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B4D4AC(result);
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
  CGThumbnailListItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v19; // x0
  CommandSpellEntity___c_c *v20; // x8
  System_Object_array *v21; // x22
  System_Converter_object__int__o *_9__13_0; // x23
  Il2CppObject *v23; // x24
  struct CommandSpellEntity___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_49BAC6B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_ConvertAll_string__int___, method);
    sub_1B4CF90(&System_Converter_string__int__TypeInfo, v3);
    sub_1B4CF90(&int_____TypeInfo, v4);
    sub_1B4CF90(&int___TypeInfo, v5);
    sub_1B4CF90(&Method_CommandSpellEntity___c__getValues_b__13_0__, v6);
    sub_1B4CF90(&CommandSpellEntity___c_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_15507/*"["*/, v8);
    sub_1B4CF90(&StringLiteral_1/*""*/, v9);
    sub_1B4CF90(&StringLiteral_15763/*"]"*/, v10);
    byte_49BAC6B = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v15 = sub_1B4D038(int_____TypeInfo, 1LL);
    v12 = (System_String_o *)sub_1B4D038(int___TypeInfo, 5LL);
    if ( v15 )
    {
      if ( !*(_DWORD *)(v15 + 24) )
LABEL_26:
        sub_1B4D1F4(v12, v13);
      *(_QWORD *)(v15 + 32) = v12;
      sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v12, v29, v30);
      return (System_Int32_array_array *)v15;
    }
LABEL_25:
    sub_1B4D1EC(v12, v13);
  }
  v12 = (System_String_o *)sub_1B4D038(int_____TypeInfo, svals->max_length);
  v14 = this->fields.svals;
  if ( !v14 )
    goto LABEL_25;
  v15 = (__int64)v12;
  v16 = 0LL;
  p_monitor = (CGThumbnailListItem_o *)&v12[1].monitor;
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
      v12 = System_String__Replace_61140016(
              v12,
              (System_String_o *)StringLiteral_15507/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v12 )
      {
        v12 = System_String__Replace_61140016(
                v12,
                (System_String_o *)StringLiteral_15763/*"]"*/,
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
            _9__13_0 = (System_Converter_object__int__o *)sub_1B4D1DC(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__13_0, v23, Method_CommandSpellEntity___c__getValues_b__13_0__, 0LL);
            static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
            static_fields->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
            sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v25, v26);
          }
          v12 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v21,
                                     (System_Converter_TInput__TOutput__o *)_9__13_0,
                                     (const MethodInfo_2FE0958 *)Method_System_Array_ConvertAll_string__int___);
          if ( v15 )
          {
            if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 24) )
              goto LABEL_26;
            p_monitor->klass = (CGThumbnailListItem_c *)v12;
            sub_1B4CF34(p_monitor, (int32_t)v12, v27, v28);
            v14 = this->fields.svals;
            ++v16;
            p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
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

  if ( (byte_49BAC70 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B4CF90(&string_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_15073/*"VoiceAssetName"*/, v5);
    byte_49BAC70 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15073/*"VoiceAssetName"*/,
            (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B4D1EC(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15073/*"VoiceAssetName"*/,
                                  (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B4D4AC(result);
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

  if ( (byte_49BAC74 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B4CF90(&long_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_15075/*"VoiceVolume"*/, v5);
    byte_49BAC74 = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15075/*"VoiceVolume"*/,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15075/*"VoiceVolume"*/,
                                                                            (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B4D1EC(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) / 1000.0;
  sub_1B4D4AC(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v13, v14);
}


bool __fastcall CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49BAC72 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&StringLiteral_10461/*"PlayVoiceWait"*/, v3);
    byte_49BAC72 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10461/*"PlayVoiceWait"*/,
                       (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BAC78 & 1) == 0 )
  {
    sub_1B4CF90(&CommandSpellEntity___c_TypeInfo, v1);
    byte_49BAC78 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(CommandSpellEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommandSpellEntity___c_TypeInfo->static_fields->__9 = (struct CommandSpellEntity___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)CommandSpellEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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