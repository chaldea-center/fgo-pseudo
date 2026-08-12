void CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970623 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970623 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970621 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19256/*"cutinAdditionalTime"*/);
    byte_5970621 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_19256/*"cutinAdditionalTime"*/, 0.0, 0);
}


bool CommandSpellEntity__IsIgnoreBattlePointUp(
        CommandSpellEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_5970622 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&StringLiteral_7875/*"IgnoreBattlePointUp"*/);
    byte_5970622 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7875/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
  {
    v6 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v6,
                         (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_597061F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_15974/*"VoiceVolume"*/);
    byte_597061F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15974/*"VoiceVolume"*/,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597061B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7645/*"HideInDetailWindow"*/);
    byte_597061B = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7645/*"HideInDetailWindow"*/, &param, v2);
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
  CommandSpellEntity_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2

  if ( (byte_5970619 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5970619 = 1;
  }
  script = this->fields.script;
  *param = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_2213CDC(Item, v8);
      }
      if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
      {
        *param = *(_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v10, v11);
        LOBYTE(script) = 1;
      }
      else
      {
        sub_221405C(Item, qword_5984368, v10, v11);
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

  if ( (byte_597061A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_18739/*"checkUseTreasure"*/);
    byte_597061A = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_18739/*"checkUseTreasure"*/,
            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0);
}


DataVals_array *CommandSpellEntity__getDataValsList(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  __int64 v7; // x19
  __int64 v8; // x24
  __int64 v9; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v11; // x26
  System_String_o *v12; // x22
  DataVals_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  DataVals_o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v29; // x0

  if ( (byte_5970618 & 1) == 0 )
  {
    sub_2213A60(&DataVals___TypeInfo);
    sub_2213A60(&DataVals_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970618 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = sub_2213B20(DataVals___TypeInfo, 1);
    v21 = (DataVals_o *)sub_2213CCC(DataVals_TypeInfo);
    DataVals___ctor(v21, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v7 )
    {
      if ( v21 )
      {
        v4 = sub_2213BB4(v21, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v4 )
        {
LABEL_21:
          v29 = sub_2213D00(v4, v20);
          sub_2213BA0(v29, 0);
        }
      }
      if ( !*(_DWORD *)(v7 + 24) )
LABEL_20:
        sub_2213CE4(v4);
      *(_QWORD *)(v7 + 32) = v21;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v21, v22, v23, v24, v25, v26, v27);
      return (DataVals_array *)v7;
    }
LABEL_13:
    sub_2213CDC(v4, v5);
  }
  v4 = sub_2213B20(DataVals___TypeInfo, LODWORD(svals->max_length));
  v6 = this->fields.svals;
  if ( !v6 )
    goto LABEL_13;
  v7 = v4;
  v8 = 4;
  v9 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v6->max_length);
    v11 = v8 - 4;
    if ( v8 - 4 >= (int)max_length_low )
      return (DataVals_array *)v7;
    if ( v11 >= max_length_low )
      goto LABEL_20;
    v12 = (System_String_o *)*((_QWORD *)&v6->obj.klass + v8);
    v13 = (DataVals_o *)sub_2213CCC(DataVals_TypeInfo);
    DataVals___ctor(v13, v12, 0);
    if ( v7 )
    {
      if ( v13 )
      {
        v4 = sub_2213BB4(v13, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v11 >= *(unsigned int *)(v7 + 24) )
        goto LABEL_20;
      *(_QWORD *)(v7 + 8 * v8) = v13;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + v9), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      v6 = this->fields.svals;
      ++v8;
      v9 += 8;
      if ( v6 )
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
  __int64 v6; // x2
  __int64 v7; // x3

  if ( (byte_597061D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_11131/*"PlayVoiceNo"*/);
    byte_597061D = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_11131/*"PlayVoiceNo"*/,
            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_2213CDC(0, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_11131/*"PlayVoiceNo"*/,
                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != (System_String_c *)qword_5984390 )
    {
      sub_221405C(result, qword_5984390, v6, v7);
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
  struct System_String_array *v6; // x8
  System_String_o **v7; // x23
  System_String_o **v8; // x26
  System_String_o **v9; // x27
  const MethodInfo_39A6884 **v10; // x29
  void **p_monitor; // x25
  __int64 v12; // x20
  unsigned int v13; // w24
  unsigned int max_length; // w9
  System_String_array *v15; // x0
  __int64 v16; // x1
  CommandSpellEntity___c_c *v17; // x8
  System_Object_array *v18; // x21
  struct CommandSpellEntity___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__13_0; // x22
  System_String_o **v21; // x25
  CommandSpellEntity_o *v22; // x26
  const MethodInfo_39A6884 **v23; // x19
  System_String_o **v24; // x29
  System_String_o **v25; // x27
  Il2CppObject *v26; // x23
  struct CommandSpellEntity___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  void **v48; // [xsp+8h] [xbp-68h]

  if ( (byte_5970617 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_ConvertAll_string__int___);
    sub_2213A60(&System_Converter_string__int__TypeInfo);
    sub_2213A60(&int_____TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_CommandSpellEntity___c__getValues_b__13_0__);
    sub_2213A60(&CommandSpellEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_5970617 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v12 = sub_2213B20(int_____TypeInfo, 1);
    v4 = (System_String_o *)sub_2213B20(int___TypeInfo, 5);
    if ( v12 )
    {
      if ( !*(_DWORD *)(v12 + 24) )
LABEL_25:
        sub_2213CE4(v4);
      *(_QWORD *)(v12 + 32) = v4;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)v4, v41, v42, v43, v44, v45, v46);
      return (System_Int32_array_array *)v12;
    }
LABEL_20:
    sub_2213CDC(v4, v5);
  }
  v4 = (System_String_o *)sub_2213B20(int_____TypeInfo, LODWORD(svals->max_length));
  v6 = this->fields.svals;
  if ( !v6 )
    goto LABEL_20;
  v7 = (System_String_o **)&StringLiteral_16427/*"["*/;
  v8 = (System_String_o **)&StringLiteral_1/*""*/;
  v9 = (System_String_o **)&StringLiteral_16691/*"]"*/;
  v10 = (const MethodInfo_39A6884 **)&Method_System_Array_ConvertAll_string__int___;
  p_monitor = &v4[1].monitor;
  v12 = (__int64)v4;
  v13 = 0;
  v48 = &v4[1].monitor;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Int32_array_array *)v12;
    if ( v13 >= max_length )
      goto LABEL_25;
    v4 = v6->m_Items[v13];
    if ( v4 )
    {
      v4 = System_String__Replace_75703400(v4, *v7, *v8, 0);
      if ( v4 )
      {
        v4 = System_String__Replace_75703400(v4, *v9, *v8, 0);
        if ( v4 )
        {
          v15 = System_String__Split(v4, 0x2Cu, 0, 0);
          v17 = CommandSpellEntity___c_TypeInfo;
          v18 = (System_Object_array *)v15;
          if ( !*(&CommandSpellEntity___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo, v16);
            v17 = CommandSpellEntity___c_TypeInfo;
          }
          static_fields = v17->static_fields;
          _9__13_0 = (System_Converter_object__int__o *)static_fields->__9__13_0;
          if ( !_9__13_0 )
          {
            v21 = v8;
            v22 = this;
            v23 = v10;
            v24 = v9;
            v25 = v7;
            if ( !*(&v17->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v17, v16);
              static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
            }
            v26 = (Il2CppObject *)static_fields->__9;
            _9__13_0 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__13_0, v26, Method_CommandSpellEntity___c__getValues_b__13_0__, 0);
            v27 = CommandSpellEntity___c_TypeInfo->static_fields;
            v27->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v27->__9__13_0,
              (int32_t)_9__13_0,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            v7 = v25;
            v9 = v24;
            v10 = v23;
            this = v22;
            v8 = v21;
            p_monitor = v48;
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v18,
                                    (System_Converter_TInput__TOutput__o *)_9__13_0,
                                    *v10);
          if ( v12 )
          {
            if ( v13 >= *(_DWORD *)(v12 + 24) )
              goto LABEL_25;
            v40 = (int)v13++;
            *(_QWORD *)(v12 + 8 * v40 + 32) = v4;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&p_monitor[v40], (int32_t)v4, v34, v35, v36, v37, v38, v39);
            v6 = this->fields.svals;
            if ( v6 )
              continue;
          }
        }
      }
    }
    goto LABEL_20;
  }
}


System_String_o *CommandSpellEntity__getVoiceAssetName(CommandSpellEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x2
  __int64 v7; // x3

  if ( (byte_597061C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_15971/*"VoiceAssetName"*/);
    byte_597061C = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15971/*"VoiceAssetName"*/,
            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_2213CDC(0, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15971/*"VoiceAssetName"*/,
                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != (System_String_c *)qword_5984390 )
    {
      sub_221405C(result, qword_5984390, v6, v7);
      return 0;
    }
  }
  return result;
}


float CommandSpellEntity__getVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  float v3; // s8
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  CommandSpellEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5970620 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_15974/*"VoiceVolume"*/);
    byte_5970620 = 1;
  }
  v3 = 1.0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15974/*"VoiceVolume"*/,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v3;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15974/*"VoiceVolume"*/,
                                                                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(Item, v5);
  }
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, qword_5984368, v7, v8) / 1000.0;
  sub_221405C(Item, qword_5984368, v7, v8);
  return CommandSpellEntity__GetCutinAdditionalTime(v10, v11);
}


bool CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_597061E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_11132/*"PlayVoiceWait"*/);
    byte_597061E = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_11132/*"PlayVoiceWait"*/,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool CommandSpellEntity__isUseBattle(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.type - 1) < 2;
}


void CommandSpellEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970624 & 1) == 0 )
  {
    sub_2213A60(&CommandSpellEntity___c_TypeInfo);
    byte_5970624 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CommandSpellEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandSpellEntity___c_TypeInfo->static_fields->__9 = (struct CommandSpellEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CommandSpellEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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