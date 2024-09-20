void __fastcall CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF7B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5AF7B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF79 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18416/*"cutinAdditionalTime"*/);
    byte_4A5AF79 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18416/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


bool __fastcall CommandSpellEntity__IsIgnoreBattlePointUp(
        CommandSpellEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4A5AF7A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1B885B0(&StringLiteral_7458/*"IgnoreBattlePointUp"*/);
    byte_4A5AF7A = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7458/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
  {
    v6 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v6,
                         (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool __fastcall CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5AF77 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_15376/*"VoiceVolume"*/);
    byte_4A5AF77 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15376/*"VoiceVolume"*/,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5AF73 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7245/*"HideInDetailWindow"*/);
    byte_4A5AF73 = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7245/*"HideInDetailWindow"*/, &param, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x8
  CommandSpellEntity_o *v13; // x0
  int32_t v14; // w1
  const MethodInfo *v15; // x2

  if ( (byte_4A5AF71 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5AF71 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B8880C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
        LOBYTE(script) = 1;
        *param = v12;
      }
      else
      {
        sub_1B88ACC(Item);
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


bool __fastcall CommandSpellEntity__checkUseTreasure(
        CommandSpellEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5AF72 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_17949/*"checkUseTreasure"*/);
    byte_4A5AF72 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_17949/*"checkUseTreasure"*/,
            (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


DataVals_array *__fastcall CommandSpellEntity__getDataValsList(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  DataVals_array *v7; // x19
  __int64 v8; // x24
  __int64 v9; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x26
  System_String_o *v12; // x22
  DataVals_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  DataVals_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v20; // x0

  if ( (byte_4A5AF70 & 1) == 0 )
  {
    sub_1B885B0(&DataVals___TypeInfo);
    sub_1B885B0(&DataVals_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AF70 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = (DataVals_array *)sub_1B88658(DataVals___TypeInfo, 1LL);
    v16 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
    DataVals___ctor(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v7 )
    {
      if ( v16 )
      {
        v4 = sub_1B886EC(v16, v7->obj.klass->_1.element_class);
        if ( !v4 )
        {
LABEL_21:
          v20 = sub_1B88830(v4);
          sub_1B886D8(v20, 0LL);
        }
      }
      if ( !v7->max_length )
LABEL_20:
        sub_1B88814(v4, v5);
      v7->m_Items[0] = v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v7->m_Items, (int32_t)v16, v17, v18);
      return v7;
    }
LABEL_13:
    sub_1B8880C(v4, v5);
  }
  v4 = sub_1B88658(DataVals___TypeInfo, svals->max_length);
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
    v13 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
    DataVals___ctor(v13, v12, 0LL);
    if ( v7 )
    {
      if ( v13 )
      {
        v4 = sub_1B886EC(v13, v7->obj.klass->_1.element_class);
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v11 >= v7->max_length )
        goto LABEL_20;
      *((_QWORD *)&v7->obj.klass + v8) = v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v7 + v9), (int32_t)v13, v14, v15);
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

  if ( (byte_4A5AF75 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_10671/*"PlayVoiceNo"*/);
    byte_4A5AF75 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10671/*"PlayVoiceNo"*/,
            (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B8880C(0LL, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10671/*"PlayVoiceNo"*/,
                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B88ACC(result);
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
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  __int64 v7; // x20
  __int64 v8; // x25
  ServantStatusBattleListViewItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v11; // x0
  CommandSpellEntity___c_c *v12; // x8
  System_Object_array *v13; // x22
  System_Converter_object__int__o *_9__13_0; // x23
  Il2CppObject *v15; // x24
  struct CommandSpellEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5AF6F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_ConvertAll_string__int___);
    sub_1B885B0(&System_Converter_string__int__TypeInfo);
    sub_1B885B0(&int_____TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_CommandSpellEntity___c__getValues_b__13_0__);
    sub_1B885B0(&CommandSpellEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5AF6F = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = sub_1B88658(int_____TypeInfo, 1LL);
    v4 = (System_String_o *)sub_1B88658(int___TypeInfo, 5LL);
    if ( v7 )
    {
      if ( !*(_DWORD *)(v7 + 24) )
LABEL_26:
        sub_1B88814(v4, v5);
      *(_QWORD *)(v7 + 32) = v4;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v4, v21, v22);
      return (System_Int32_array_array *)v7;
    }
LABEL_25:
    sub_1B8880C(v4, v5);
  }
  v4 = (System_String_o *)sub_1B88658(int_____TypeInfo, svals->max_length);
  v6 = this->fields.svals;
  if ( !v6 )
    goto LABEL_25;
  v7 = (__int64)v4;
  v8 = 0LL;
  p_monitor = (ServantStatusBattleListViewItem_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v8 >= max_length )
      return (System_Int32_array_array *)v7;
    if ( (unsigned int)v8 >= max_length )
      goto LABEL_26;
    v4 = v6->m_Items[v8];
    if ( v4 )
    {
      v4 = System_String__Replace_61726660(
             v4,
             (System_String_o *)StringLiteral_15812/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      if ( v4 )
      {
        v4 = System_String__Replace_61726660(
               v4,
               (System_String_o *)StringLiteral_16069/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
        if ( v4 )
        {
          v11 = System_String__Split(v4, 0x2Cu, 0, 0LL);
          v12 = CommandSpellEntity___c_TypeInfo;
          v13 = (System_Object_array *)v11;
          if ( !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo);
            v12 = CommandSpellEntity___c_TypeInfo;
          }
          _9__13_0 = (System_Converter_object__int__o *)v12->static_fields->__9__13_0;
          if ( !_9__13_0 )
          {
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              v12 = CommandSpellEntity___c_TypeInfo;
            }
            v15 = (Il2CppObject *)v12->static_fields->__9;
            _9__13_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__13_0, v15, Method_CommandSpellEntity___c__getValues_b__13_0__, 0LL);
            static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
            static_fields->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v17, v18);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v13,
                                    (System_Converter_TInput__TOutput__o *)_9__13_0,
                                    (const MethodInfo_2F76E10 *)Method_System_Array_ConvertAll_string__int___);
          if ( v7 )
          {
            if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 24) )
              goto LABEL_26;
            p_monitor->klass = (ServantStatusBattleListViewItem_c *)v4;
            sub_1B88554(p_monitor, (int32_t)v4, v19, v20);
            v6 = this->fields.svals;
            ++v8;
            p_monitor = (ServantStatusBattleListViewItem_o *)((char *)p_monitor + 8);
            if ( v6 )
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
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5AF74 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_15374/*"VoiceAssetName"*/);
    byte_4A5AF74 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15374/*"VoiceAssetName"*/,
            (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B8880C(0LL, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15374/*"VoiceAssetName"*/,
                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B88ACC(result);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  CommandSpellEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A5AF78 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_15376/*"VoiceVolume"*/);
    byte_4A5AF78 = 1;
  }
  script = this->fields.script;
  v4 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15376/*"VoiceVolume"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15376/*"VoiceVolume"*/,
                                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(Item, v5);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v7, v8) / 1000.0;
  sub_1B88ACC(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v10, v11);
}


bool __fastcall CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5AF76 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_10672/*"PlayVoiceWait"*/);
    byte_4A5AF76 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10672/*"PlayVoiceWait"*/,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__isUseBattle(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.type - 1) < 2;
}


void __fastcall CommandSpellEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AF7C & 1) == 0 )
  {
    sub_1B885B0(&CommandSpellEntity___c_TypeInfo);
    byte_4A5AF7C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CommandSpellEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CommandSpellEntity___c_TypeInfo->static_fields->__9 = (struct CommandSpellEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)CommandSpellEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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