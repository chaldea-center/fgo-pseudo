void __fastcall CommandSpellEntity___ctor(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1600B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B1600B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandSpellEntity__CreatePrimaryKey(CommandSpellEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall CommandSpellEntity__GetCutinAdditionalTime(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16009 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18602/*"cutinAdditionalTime"*/, method, v2);
    byte_4B16009 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18602/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


bool __fastcall CommandSpellEntity__IsIgnoreBattlePointUp(
        CommandSpellEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4B1600A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int___, battlePointIds, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int___, v5, v6);
    sub_1BCA7E0(&StringLiteral_7583/*"IgnoreBattlePointUp"*/, v7, v8);
    byte_4B1600A = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7583/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
  {
    v10 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
            IntArray,
            (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v10,
                         (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool __fastcall CommandSpellEntity__IsVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16007 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&StringLiteral_15543/*"VoiceVolume"*/, v4, v5);
    byte_4B16007 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15543/*"VoiceVolume"*/,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall CommandSpellEntity__checkHideInDetailWindow(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16003 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7370/*"HideInDetailWindow"*/, method, v2);
    byte_4B16003 = 1;
  }
  param = 0;
  CommandSpellEntity__checkScript(this, (System_String_o *)StringLiteral_7370/*"HideInDetailWindow"*/, &param, v3);
  return param > 0;
}


bool __fastcall CommandSpellEntity__checkScript(
        CommandSpellEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x8
  CommandSpellEntity_o *v17; // x0
  int32_t v18; // w1
  const MethodInfo *v19; // x2

  if ( (byte_4B16001 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, param);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B16001 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCAA3C(Item, v12);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v16 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15);
        LOBYTE(script) = 1;
        *param = v16;
      }
      else
      {
        sub_1BCACFC(Item);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandSpellEntity__checkUseTreasure(
        CommandSpellEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16002 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type, method);
    sub_1BCA7E0(&StringLiteral_18130/*"checkUseTreasure"*/, v5, v6);
    byte_4B16002 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_18130/*"checkUseTreasure"*/,
            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


DataVals_array *__fastcall CommandSpellEntity__getDataValsList(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_array *svals; // x8
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  struct System_String_array *v13; // x8
  DataVals_array *v14; // x19
  __int64 v15; // x24
  __int64 v16; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v18; // x26
  System_String_o *v19; // x22
  DataVals_o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  DataVals_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v38; // x0

  if ( (byte_4B16000 & 1) == 0 )
  {
    sub_1BCA7E0(&DataVals___TypeInfo, method, v2);
    sub_1BCA7E0(&DataVals_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B16000 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v14 = (DataVals_array *)sub_1BCA888(DataVals___TypeInfo, 1LL);
    v30 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, v27, v28, v29);
    DataVals___ctor(v30, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v14 )
    {
      if ( v30 )
      {
        v9 = sub_1BCA91C(v30, v14->obj.klass->_1.element_class);
        if ( !v9 )
        {
LABEL_21:
          v38 = sub_1BCAA60(v9);
          sub_1BCA908(v38, 0LL);
        }
      }
      if ( !v14->max_length )
LABEL_20:
        sub_1BCAA44(v9, v10);
      v14->m_Items[0] = v30;
      sub_1BCA784((PartyOrganizationUtility_o *)v14->m_Items, (int64_t)v30, v31, v32, v33, v34, v35, v36);
      return v14;
    }
LABEL_13:
    sub_1BCAA3C(v9, v10);
  }
  v9 = sub_1BCA888(DataVals___TypeInfo, svals->max_length);
  v13 = this->fields.svals;
  if ( !v13 )
    goto LABEL_13;
  v14 = (DataVals_array *)v9;
  v15 = 4LL;
  v16 = 32LL;
  while ( 1 )
  {
    max_length = v13->max_length;
    v18 = v15 - 4;
    if ( v15 - 4 >= (int)max_length )
      return v14;
    if ( v18 >= max_length )
      goto LABEL_20;
    v19 = (System_String_o *)*((_QWORD *)&v13->obj.klass + v15);
    v20 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, v10, v11, v12);
    DataVals___ctor(v20, v19, 0LL);
    if ( v14 )
    {
      if ( v20 )
      {
        v9 = sub_1BCA91C(v20, v14->obj.klass->_1.element_class);
        if ( !v9 )
          goto LABEL_21;
      }
      if ( v18 >= v14->max_length )
        goto LABEL_20;
      *((_QWORD *)&v14->obj.klass + v15) = v20;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v14 + v16), (int64_t)v20, v21, v22, v23, v24, v25, v26);
      v13 = this->fields.svals;
      ++v15;
      v16 += 8LL;
      if ( v13 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *result; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16005 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_10806/*"PlayVoiceNo"*/, v8, v9);
    byte_4B16005 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10806/*"PlayVoiceNo"*/,
            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1BCAA3C(0LL, v11);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10806/*"PlayVoiceNo"*/,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1BCACFC(result);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_String_array *svals; // x8
  System_String_o *v21; // x0
  __int64 v22; // x1
  struct System_String_array *v23; // x8
  __int64 v24; // x20
  __int64 v25; // x25
  PartyOrganizationUtility_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  CommandSpellEntity___c_c *v32; // x8
  System_Object_array *v33; // x22
  System_Converter_object__int__o *_9__13_0; // x23
  Il2CppObject *v35; // x24
  struct CommandSpellEntity___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7

  if ( (byte_4B15FFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_ConvertAll_string__int___, method, v2);
    sub_1BCA7E0(&System_Converter_string__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&int_____TypeInfo, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_CommandSpellEntity___c__getValues_b__13_0__, v10, v11);
    sub_1BCA7E0(&CommandSpellEntity___c_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v18, v19);
    byte_4B15FFF = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v24 = sub_1BCA888(int_____TypeInfo, 1LL);
    v21 = (System_String_o *)sub_1BCA888(int___TypeInfo, 5LL);
    if ( v24 )
    {
      if ( !*(_DWORD *)(v24 + 24) )
LABEL_26:
        sub_1BCAA44(v21, v22);
      *(_QWORD *)(v24 + 32) = v21;
      sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v21, v49, v50, v51, v52, v53, v54);
      return (System_Int32_array_array *)v24;
    }
LABEL_25:
    sub_1BCAA3C(v21, v22);
  }
  v21 = (System_String_o *)sub_1BCA888(int_____TypeInfo, svals->max_length);
  v23 = this->fields.svals;
  if ( !v23 )
    goto LABEL_25;
  v24 = (__int64)v21;
  v25 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&v21[1].monitor;
  while ( 1 )
  {
    max_length = v23->max_length;
    if ( (int)v25 >= max_length )
      return (System_Int32_array_array *)v24;
    if ( (unsigned int)v25 >= max_length )
      goto LABEL_26;
    v21 = v23->m_Items[v25];
    if ( v21 )
    {
      v21 = System_String__Replace_62420848(
              v21,
              (System_String_o *)StringLiteral_15978/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v21 )
      {
        v21 = System_String__Replace_62420848(
                v21,
                (System_String_o *)StringLiteral_16236/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v21 )
        {
          v28 = System_String__Split(v21, 0x2Cu, 0, 0LL);
          v32 = CommandSpellEntity___c_TypeInfo;
          v33 = (System_Object_array *)v28;
          if ( !CommandSpellEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommandSpellEntity___c_TypeInfo, v29);
            v32 = CommandSpellEntity___c_TypeInfo;
          }
          _9__13_0 = (System_Converter_object__int__o *)v32->static_fields->__9__13_0;
          if ( !_9__13_0 )
          {
            if ( !v32->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v32, v29);
              v32 = CommandSpellEntity___c_TypeInfo;
            }
            v35 = (Il2CppObject *)v32->static_fields->__9;
            _9__13_0 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                            System_Converter_string__int__TypeInfo,
                                                            v29,
                                                            v30,
                                                            v31);
            System_Converter_object__int____ctor(_9__13_0, v35, Method_CommandSpellEntity___c__getValues_b__13_0__, 0LL);
            static_fields = CommandSpellEntity___c_TypeInfo->static_fields;
            static_fields->__9__13_0 = (struct System_Converter_string__int__o *)_9__13_0;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
              (int64_t)_9__13_0,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
          }
          v21 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v33,
                                     (System_Converter_TInput__TOutput__o *)_9__13_0,
                                     (const MethodInfo_300B3D8 *)Method_System_Array_ConvertAll_string__int___);
          if ( v24 )
          {
            if ( (unsigned int)v25 >= *(_DWORD *)(v24 + 24) )
              goto LABEL_26;
            p_monitor->klass = (PartyOrganizationUtility_c *)v21;
            sub_1BCA784(p_monitor, (int64_t)v21, v43, v44, v45, v46, v47, v48);
            v23 = this->fields.svals;
            ++v25;
            p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
            if ( v23 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *result; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16004 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_15541/*"VoiceAssetName"*/, v8, v9);
    byte_4B16004 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15541/*"VoiceAssetName"*/,
            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1BCAA3C(0LL, v11);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15541/*"VoiceAssetName"*/,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1BCACFC(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall CommandSpellEntity__getVoiceVolume(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v11; // s8
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  CommandSpellEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4B16008 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_15543/*"VoiceVolume"*/, v8, v9);
    byte_4B16008 = 1;
  }
  script = this->fields.script;
  v11 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15543/*"VoiceVolume"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v11;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15543/*"VoiceVolume"*/,
                                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(Item, v12);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15) / 1000.0;
  sub_1BCACFC(Item);
  return CommandSpellEntity__GetCutinAdditionalTime(v17, v18);
}


bool __fastcall CommandSpellEntity__isPlayVoiceWait(CommandSpellEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16006 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&StringLiteral_10807/*"PlayVoiceWait"*/, v4, v5);
    byte_4B16006 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10807/*"PlayVoiceWait"*/,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1600C & 1) == 0 )
  {
    sub_1BCA7E0(&CommandSpellEntity___c_TypeInfo, v1, v2);
    byte_4B1600C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CommandSpellEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CommandSpellEntity___c_TypeInfo->static_fields->__9 = (struct CommandSpellEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CommandSpellEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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