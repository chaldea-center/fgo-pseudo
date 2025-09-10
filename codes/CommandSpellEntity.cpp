void CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C270C6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C270C6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C270C4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18416/*"cutinAdditionalTime"*/);
    byte_4C270C4 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18416/*"cutinAdditionalTime"*/, 0.0, 0);
}


bool CommandSpellEntity__IsIgnoreBattlePointUp(
        CommandSpellEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4C270C5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C2D490(&StringLiteral_7542/*"IgnoreBattlePointUp"*/);
    byte_4C270C5 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7542/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
  {
    v6 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v6,
                         (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C270C2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&StringLiteral_15360/*"VoiceVolume"*/);
    byte_4C270C2 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15360/*"VoiceVolume"*/,
                       (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C270BE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_7332/*"HideInDetailWindow"*/);
    byte_4C270BE = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7332/*"HideInDetailWindow"*/, &param, v2);
  return param > 0;
}


bool CommandSpellEntity__checkScript(
        CommandSpellEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x8
  CommandSpellEntity_o *v13; // x0
  int32_t v14; // w1
  const MethodInfo *v15; // x2

  if ( (byte_4C270BC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&long_TypeInfo);
    byte_4C270BC = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C2D6EC(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
        LOBYTE(script) = 1;
        *param = v12;
      }
      else
      {
        sub_1C2D9AC(Item);
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


bool CommandSpellEntity__checkUseTreasure(CommandSpellEntity_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C270BD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&StringLiteral_17942/*"checkUseTreasure"*/);
    byte_4C270BD = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_17942/*"checkUseTreasure"*/,
            (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0);
}


DataVals_array *CommandSpellEntity__getDataValsList(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_array *v7; // x8
  __int64 v8; // x19
  __int64 v9; // x24
  __int64 v10; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v12; // x26
  System_String_o *v13; // x22
  DataVals_o *v14; // x21
  const MethodInfo *v15; // x3
  DataVals_o *v16; // x20
  const MethodInfo *v17; // x3
  __int64 v19; // x0

  if ( (byte_4C270BB & 1) == 0 )
  {
    sub_1C2D490(&DataVals___TypeInfo);
    sub_1C2D490(&DataVals_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C270BB = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v8 = sub_1C2D538(DataVals___TypeInfo, 1);
    v16 = (DataVals_o *)sub_1C2D6DC(DataVals_TypeInfo);
    DataVals___ctor(v16, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v8 )
    {
      if ( v16 )
      {
        v4 = sub_1C2D5CC(v16, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v4 )
        {
LABEL_21:
          v19 = sub_1C2D710(v4);
          sub_1C2D5B8(v19, 0);
        }
      }
      if ( !*(_DWORD *)(v8 + 24) )
LABEL_20:
        sub_1C2D6F4(v4, v5, v6);
      *(_QWORD *)(v8 + 32) = v16;
      sub_1C2D434((CGThumbnailListItem_o *)(v8 + 32), (int32_t)v16, v6, v17);
      return (DataVals_array *)v8;
    }
LABEL_13:
    sub_1C2D6EC(v4, v5);
  }
  v4 = sub_1C2D538(DataVals___TypeInfo, LODWORD(svals->max_length));
  v7 = this->fields.svals;
  if ( !v7 )
    goto LABEL_13;
  v8 = v4;
  v9 = 4;
  v10 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v7->max_length);
    v12 = v9 - 4;
    if ( v9 - 4 >= (int)max_length_low )
      return (DataVals_array *)v8;
    if ( v12 >= max_length_low )
      goto LABEL_20;
    v13 = (System_String_o *)*((_QWORD *)&v7->obj.klass + v9);
    v14 = (DataVals_o *)sub_1C2D6DC(DataVals_TypeInfo);
    DataVals___ctor(v14, v13, 0);
    if ( v8 )
    {
      if ( v14 )
      {
        v4 = sub_1C2D5CC(v14, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v12 >= *(unsigned int *)(v8 + 24) )
        goto LABEL_20;
      *(_QWORD *)(v8 + 8 * v9) = v14;
      sub_1C2D434((CGThumbnailListItem_o *)(v8 + v10), (int32_t)v14, v6, v15);
      v7 = this->fields.svals;
      ++v9;
      v10 += 8;
      if ( v7 )
        continue;
    }
    goto LABEL_13;
  }
}


System_String_o *CommandSpellEntity__getName(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


System_String_o *CommandSpellEntity__getPlayVoiceNo(CommandSpellEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C270C0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_10670/*"PlayVoiceNo"*/);
    byte_4C270C0 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10670/*"PlayVoiceNo"*/,
            (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_1C2D6EC(0, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10670/*"PlayVoiceNo"*/,
                                  (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C2D9AC(result);
      return 0;
    }
  }
  return result;
}


System_Int32_array_array *CommandSpellEntity__getValues(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  System_String_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_array *v7; // x8
  __int64 v8; // x20
  __int64 v9; // x25
  CGThumbnailListItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v12; // x0
  CommandSpellEntity___c_c *v13; // x8
  System_Object_array *v14; // x22
  System_Converter_object__int__o *_9__13_0; // x23
  Il2CppObject *v16; // x24
  struct CommandSpellEntity___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3

  if ( (byte_4C270BA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_ConvertAll_string__int___);
    sub_1C2D490(&System_Converter_string__int__TypeInfo);
    sub_1C2D490(&int_____TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_CommandSpellEntity___c__getValues_b__13_0__);
    sub_1C2D490(&CommandSpellEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C270BA = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v8 = sub_1C2D538(int_____TypeInfo, 1);
    v4 = (System_String_o *)sub_1C2D538(int___TypeInfo, 5);
    if ( v8 )
    {
      if ( !*(_DWORD *)(v8 + 24) )
LABEL_26:
        sub_1C2D6F4(v4, v5, v6);
      *(_QWORD *)(v8 + 32) = v4;
      sub_1C2D434((CGThumbnailListItem_o *)(v8 + 32), (int32_t)v4, v6, v21);
      return (System_Int32_array_array *)v8;
    }
LABEL_25:
    sub_1C2D6EC(v4, v5);
  }
  v4 = (System_String_o *)sub_1C2D538(int_____TypeInfo, LODWORD(svals->max_length));
  v7 = this->fields.svals;
  if ( !v7 )
    goto LABEL_25;
  v8 = (__int64)v4;
  v9 = 0;
  p_monitor = (CGThumbnailListItem_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (int)v9 >= max_length )
      return (System_Int32_array_array *)v8;
    if ( (unsigned int)v9 >= max_length )
      goto LABEL_26;
    v4 = v7->m_Items[v9];
    if ( v4 )
    {
      v4 = System_String__Replace_63504412(
             v4,
             (System_String_o *)StringLiteral_15801/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      if ( v4 )
      {
        v4 = System_String__Replace_63504412(
               v4,
               (System_String_o *)StringLiteral_16055/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( v4 )
        {
          v12 = System_String__Split(v4, 0x2Cu, 0, 0);
          v13 = CommandSpellEntity___c_TypeInfo;
          v14 = (System_Object_array *)v12;
          if ( !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo);
            v13 = CommandSpellEntity___c_TypeInfo;
          }
          _9__13_0 = (System_Converter_object__int__o *)v13->static_fields->__9__13_0;
          if ( !_9__13_0 )
          {
            if ( !v13->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v13);
              v13 = CommandSpellEntity___c_TypeInfo;
            }
            v16 = (Il2CppObject *)v13->static_fields->__9;
            _9__13_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__13_0, v16, Method_CommandSpellEntity___c__getValues_b__13_0__, 0);
            static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
            static_fields->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
            sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v18, v19);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v14,
                                    (System_Converter_TInput__TOutput__o *)_9__13_0,
                                    (const MethodInfo_31D1FD4 *)Method_System_Array_ConvertAll_string__int___);
          if ( v8 )
          {
            if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 24) )
              goto LABEL_26;
            p_monitor->klass = (CGThumbnailListItem_c *)v4;
            sub_1C2D434(p_monitor, (int32_t)v4, v6, v20);
            v7 = this->fields.svals;
            ++v9;
            p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
            if ( v7 )
              continue;
          }
        }
      }
    }
    goto LABEL_25;
  }
}


System_String_o *CommandSpellEntity__getVoiceAssetName(CommandSpellEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C270BF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_15358/*"VoiceAssetName"*/);
    byte_4C270BF = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15358/*"VoiceAssetName"*/,
            (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_1C2D6EC(0, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15358/*"VoiceAssetName"*/,
                                  (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C2D9AC(result);
      return 0;
    }
  }
  return result;
}


float CommandSpellEntity__getVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v4; // s8
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  CommandSpellEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C270C3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&StringLiteral_15360/*"VoiceVolume"*/);
    byte_4C270C3 = 1;
  }
  script = this->fields.script;
  v4 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15360/*"VoiceVolume"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15360/*"VoiceVolume"*/,
                                                                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C2D6EC(Item, v5);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v7, v8) / 1000.0;
  sub_1C2D9AC(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v10, v11);
}


bool CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C270C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&StringLiteral_10671/*"PlayVoiceWait"*/);
    byte_4C270C1 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10671/*"PlayVoiceWait"*/,
                       (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool CommandSpellEntity__isUseBattle(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.type - 1) < 2;
}


void CommandSpellEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C270C7 & 1) == 0 )
  {
    sub_1C2D490(&CommandSpellEntity___c_TypeInfo);
    byte_4C270C7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(CommandSpellEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandSpellEntity___c_TypeInfo->static_fields->__9 = (struct CommandSpellEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)CommandSpellEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CommandSpellEntity___c___ctor(CommandSpellEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CommandSpellEntity___c___getValues_b__13_0(
        CommandSpellEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  return System_Int32__Parse(input, 0);
}