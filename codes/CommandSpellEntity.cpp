void CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42DB4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_int___ctor__);
    byte_4C42DB4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_339EBBC *)Method_DataEntityBase_int___ctor__);
}


int32_t CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42DB2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18424/*"cutinAdditionalTime"*/);
    byte_4C42DB2 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18424/*"cutinAdditionalTime"*/, 0.0, 0);
}


bool CommandSpellEntity__IsIgnoreBattlePointUp(
        CommandSpellEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4C42DB3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C37058(&StringLiteral_7549/*"IgnoreBattlePointUp"*/);
    byte_4C42DB3 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7549/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
  {
    v6 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_3112308 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v6,
                         (const MethodInfo_30F32A0 *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C42DB0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&StringLiteral_15363/*"VoiceVolume"*/);
    byte_4C42DB0 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15363/*"VoiceVolume"*/,
                       (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C42DAC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_7338/*"HideInDetailWindow"*/);
    byte_4C42DAC = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7338/*"HideInDetailWindow"*/, &param, v2);
  return param > 0;
}


bool CommandSpellEntity__checkScript(
        CommandSpellEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x8
  CommandSpellEntity_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2

  if ( (byte_4C42DAA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    byte_4C42DAA = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C372B4(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v11 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
        LOBYTE(script) = 1;
        *param = v11;
      }
      else
      {
        sub_1C37574(Item);
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


bool CommandSpellEntity__checkUseTreasure(CommandSpellEntity_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C42DAB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&StringLiteral_17948/*"checkUseTreasure"*/);
    byte_4C42DAB = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_17948/*"checkUseTreasure"*/,
            (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0);
}


DataVals_array *CommandSpellEntity__getDataValsList(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  struct System_String_array *v5; // x8
  __int64 v6; // x19
  __int64 v7; // x24
  __int64 v8; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v10; // x26
  System_String_o *v11; // x22
  DataVals_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  DataVals_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v19; // x0

  if ( (byte_4C42DA9 & 1) == 0 )
  {
    sub_1C37058(&DataVals___TypeInfo);
    sub_1C37058(&DataVals_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42DA9 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v6 = sub_1C37100(DataVals___TypeInfo, 1);
    v15 = (DataVals_o *)sub_1C372A4(DataVals_TypeInfo);
    DataVals___ctor(v15, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v6 )
    {
      if ( v15 )
      {
        v4 = sub_1C37194(v15, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
        if ( !v4 )
        {
LABEL_21:
          v19 = sub_1C372D8(v4);
          sub_1C37180(v19, 0);
        }
      }
      if ( !*(_DWORD *)(v6 + 24) )
LABEL_20:
        sub_1C372BC(v4);
      *(_QWORD *)(v6 + 32) = v15;
      sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v15, v16, v17);
      return (DataVals_array *)v6;
    }
LABEL_13:
    sub_1C372B4(v4);
  }
  v4 = sub_1C37100(DataVals___TypeInfo, LODWORD(svals->max_length));
  v5 = this->fields.svals;
  if ( !v5 )
    goto LABEL_13;
  v6 = v4;
  v7 = 4;
  v8 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v5->max_length);
    v10 = v7 - 4;
    if ( v7 - 4 >= (int)max_length_low )
      return (DataVals_array *)v6;
    if ( v10 >= max_length_low )
      goto LABEL_20;
    v11 = (System_String_o *)*((_QWORD *)&v5->obj.klass + v7);
    v12 = (DataVals_o *)sub_1C372A4(DataVals_TypeInfo);
    DataVals___ctor(v12, v11, 0);
    if ( v6 )
    {
      if ( v12 )
      {
        v4 = sub_1C37194(v12, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v10 >= *(unsigned int *)(v6 + 24) )
        goto LABEL_20;
      *(_QWORD *)(v6 + 8 * v7) = v12;
      sub_1C36FFC((CGThumbnailListItem_o *)(v6 + v8), (int32_t)v12, v13, v14);
      v5 = this->fields.svals;
      ++v7;
      v8 += 8;
      if ( v5 )
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C42DAE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_10677/*"PlayVoiceNo"*/);
    byte_4C42DAE = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10677/*"PlayVoiceNo"*/,
            (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_1C372B4(0);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10677/*"PlayVoiceNo"*/,
                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C37574(result);
      return 0;
    }
  }
  return result;
}


System_Int32_array_array *CommandSpellEntity__getValues(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  System_String_o *v4; // x0
  struct System_String_array *v5; // x8
  __int64 v6; // x20
  __int64 v7; // x25
  CGThumbnailListItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v10; // x0
  CommandSpellEntity___c_c *v11; // x8
  System_Object_array *v12; // x22
  System_Converter_object__int__o *_9__13_0; // x23
  Il2CppObject *v14; // x24
  struct CommandSpellEntity___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C42DA8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_ConvertAll_string__int___);
    sub_1C37058(&System_Converter_string__int__TypeInfo);
    sub_1C37058(&int_____TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_CommandSpellEntity___c__getValues_b__13_0__);
    sub_1C37058(&CommandSpellEntity___c_TypeInfo);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C42DA8 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v6 = sub_1C37100(int_____TypeInfo, 1);
    v4 = (System_String_o *)sub_1C37100(int___TypeInfo, 5);
    if ( v6 )
    {
      if ( !*(_DWORD *)(v6 + 24) )
LABEL_26:
        sub_1C372BC(v4);
      *(_QWORD *)(v6 + 32) = v4;
      sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v4, v20, v21);
      return (System_Int32_array_array *)v6;
    }
LABEL_25:
    sub_1C372B4(v4);
  }
  v4 = (System_String_o *)sub_1C37100(int_____TypeInfo, LODWORD(svals->max_length));
  v5 = this->fields.svals;
  if ( !v5 )
    goto LABEL_25;
  v6 = (__int64)v4;
  v7 = 0;
  p_monitor = (CGThumbnailListItem_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v5->max_length;
    if ( (int)v7 >= max_length )
      return (System_Int32_array_array *)v6;
    if ( (unsigned int)v7 >= max_length )
      goto LABEL_26;
    v4 = v5->m_Items[v7];
    if ( v4 )
    {
      v4 = System_String__Replace_63608204(
             v4,
             (System_String_o *)StringLiteral_15804/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      if ( v4 )
      {
        v4 = System_String__Replace_63608204(
               v4,
               (System_String_o *)StringLiteral_16058/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( v4 )
        {
          v10 = System_String__Split(v4, 0x2Cu, 0, 0);
          v11 = CommandSpellEntity___c_TypeInfo;
          v12 = (System_Object_array *)v10;
          if ( !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo);
            v11 = CommandSpellEntity___c_TypeInfo;
          }
          _9__13_0 = (System_Converter_object__int__o *)v11->static_fields->__9__13_0;
          if ( !_9__13_0 )
          {
            if ( !v11->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v11);
              v11 = CommandSpellEntity___c_TypeInfo;
            }
            v14 = (Il2CppObject *)v11->static_fields->__9;
            _9__13_0 = (System_Converter_object__int__o *)sub_1C372A4(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__13_0, v14, Method_CommandSpellEntity___c__getValues_b__13_0__, 0);
            static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
            static_fields->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
            sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v16, v17);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v12,
                                    (System_Converter_TInput__TOutput__o *)_9__13_0,
                                    (const MethodInfo_31EB2DC *)Method_System_Array_ConvertAll_string__int___);
          if ( v6 )
          {
            if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 24) )
              goto LABEL_26;
            p_monitor->klass = (CGThumbnailListItem_c *)v4;
            sub_1C36FFC(p_monitor, (int32_t)v4, v18, v19);
            v5 = this->fields.svals;
            ++v7;
            p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
            if ( v5 )
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C42DAD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_15361/*"VoiceAssetName"*/);
    byte_4C42DAD = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15361/*"VoiceAssetName"*/,
            (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_1C372B4(0);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15361/*"VoiceAssetName"*/,
                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C37574(result);
      return 0;
    }
  }
  return result;
}


float CommandSpellEntity__getVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v4; // s8
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  CommandSpellEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4C42DB1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&StringLiteral_15363/*"VoiceVolume"*/);
    byte_4C42DB1 = 1;
  }
  script = this->fields.script;
  v4 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15363/*"VoiceVolume"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15363/*"VoiceVolume"*/,
                                                                            (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C372B4(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7) / 1000.0;
  sub_1C37574(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v9, v10);
}


bool CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C42DAF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&StringLiteral_10678/*"PlayVoiceWait"*/);
    byte_4C42DAF = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10678/*"PlayVoiceWait"*/,
                       (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4C42DB5 & 1) == 0 )
  {
    sub_1C37058(&CommandSpellEntity___c_TypeInfo);
    byte_4C42DB5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(CommandSpellEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandSpellEntity___c_TypeInfo->static_fields->__9 = (struct CommandSpellEntity___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)CommandSpellEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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