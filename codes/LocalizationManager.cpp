void LocalizationManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v1; // x19
  struct LocalizationManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  System_Func_object__bool__o *v9; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Func_object__object__o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct NguiLocalizationManager_StaticFields *v23; // x0

  if ( (byte_4CEDD9A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C7BAE8(&System_Func_string__string__TypeInfo);
    sub_1C7BAE8(&System_Func_string__bool__TypeInfo);
    sub_1C7BAE8(&Method_LocalizationManager_ContainsKey__);
    sub_1C7BAE8(&Method_LocalizationManager_Get__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDD9A = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  static_fields = LocalizationManager_TypeInfo->static_fields;
  static_fields->lookup = (struct System_Collections_Generic_Dictionary_string__string__o *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->lookup, (int32_t)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(v9, 0, Method_LocalizationManager_ContainsKey__, 0);
  if ( !byte_4CEDE21 )
  {
    sub_1C7BAE8(&NguiLocalizationManager_TypeInfo);
    byte_4CEDE21 = 1;
  }
  NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc = (struct System_Func_string__bool__o *)v9;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)NguiLocalizationManager_TypeInfo->static_fields,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_string__string__TypeInfo);
  System_Func_object__object____ctor(v16, 0, Method_LocalizationManager_Get__, 0);
  if ( !byte_4CEDE22 )
  {
    sub_1C7BAE8(&NguiLocalizationManager_TypeInfo);
    byte_4CEDE22 = 1;
  }
  v23 = NguiLocalizationManager_TypeInfo->static_fields;
  v23->getFunc = (struct System_Func_string__string__o *)v16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->getFunc, (int32_t)v16, v17, v18, v19, v20, v21, v22);
}


void LocalizationManager___ctor(LocalizationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CEDDD5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_LocalizationManager___ctor__);
    byte_4CEDDD5 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_LocalizationManager___ctor__);
}


System_String_o *LocalizationManager__ChineseNumber(int32_t n, const MethodInfo *method)
{
  int32_t v3; // w19
  LocalizationManager_c *v4; // x0
  void *lowNumberString; // x0
  System_Text_StringBuilder_o *v7; // x20
  unsigned int v8; // w22
  LocalizationManager_c *v9; // x0
  struct LocalizationManager_StaticFields *static_fields; // x8
  struct System_String_o *hiNumberString; // x9
  int32_t stringLength; // w22
  int32_t v13; // w21
  LocalizationManager_c *v14; // x0
  System_String_o *v15; // x0

  if ( (byte_4CEDDD1 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    byte_4CEDDD1 = 1;
  }
  v3 = n % 10;
  if ( n < 10 )
  {
    v4 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = LocalizationManager_TypeInfo;
    }
    lowNumberString = v4->static_fields->lowNumberString;
    if ( lowNumberString )
      return System_String__Substring_64222852((System_String_o *)lowNumberString, v3, 1, 0);
LABEL_38:
    sub_1C7BD40(lowNumberString, method);
  }
  v7 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64254224(v7, 10, 0);
  if ( n >= 100 )
  {
    v8 = n / 0x64u % 0xA;
    if ( v8 >= 2 )
    {
      v9 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = LocalizationManager_TypeInfo;
      }
      lowNumberString = v9->static_fields->lowNumberString;
      if ( !lowNumberString )
        goto LABEL_38;
      lowNumberString = System_String__Substring_64222852((System_String_o *)lowNumberString, v8, 1, 0);
      if ( !v7 )
        goto LABEL_38;
      System_Text_StringBuilder__Append_64260872(v7, (System_String_o *)lowNumberString, 0);
    }
    lowNumberString = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !v7 )
      goto LABEL_38;
    System_Text_StringBuilder__Append_64260872(v7, LocalizationManager_TypeInfo->static_fields->hi2NumberString, 0);
  }
  lowNumberString = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    lowNumberString = LocalizationManager_TypeInfo;
  }
  static_fields = (struct LocalizationManager_StaticFields *)*((_QWORD *)lowNumberString + 23);
  hiNumberString = static_fields->hiNumberString;
  if ( !hiNumberString )
    goto LABEL_38;
  stringLength = hiNumberString->fields._stringLength;
  v13 = n / 0xAu % 0xA;
  if ( !*((_DWORD *)lowNumberString + 56) )
  {
    j_il2cpp_runtime_class_init_0(lowNumberString);
    static_fields = LocalizationManager_TypeInfo->static_fields;
  }
  if ( v13 >= stringLength )
  {
    lowNumberString = static_fields->lowNumberString;
    if ( !static_fields->lowNumberString )
      goto LABEL_38;
    lowNumberString = System_String__Substring_64222852((System_String_o *)lowNumberString, v13, 1, 0);
    if ( !v7 )
      goto LABEL_38;
    System_Text_StringBuilder__Append_64260872(v7, (System_String_o *)lowNumberString, 0);
    lowNumberString = LocalizationManager_TypeInfo->static_fields->hiNumberString;
    if ( !lowNumberString )
      goto LABEL_38;
    lowNumberString = System_String__Substring_64222852((System_String_o *)lowNumberString, 0, 1, 0);
  }
  else
  {
    lowNumberString = static_fields->hiNumberString;
    if ( !lowNumberString )
      goto LABEL_38;
    lowNumberString = System_String__Substring_64222852((System_String_o *)lowNumberString, v13, 1, 0);
    if ( !v7 )
      goto LABEL_38;
  }
  System_Text_StringBuilder__Append_64260872(v7, (System_String_o *)lowNumberString, 0);
  if ( v3 >= 1 )
  {
    v14 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager_TypeInfo;
    }
    lowNumberString = v14->static_fields->lowNumberString;
    if ( !lowNumberString )
      goto LABEL_38;
    v15 = System_String__Substring_64222852((System_String_o *)lowNumberString, v3, 1, 0);
    System_Text_StringBuilder__Append_64260872(v7, v15, 0);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                              v7,
                              v7->klass->vtable._3_ToString.method);
}


bool LocalizationManager__ContainsKey(System_String_o *key, const MethodInfo *method)
{
  LocalizationManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_4CEDDA7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDDA7 = 1;
  }
  v3 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = LocalizationManager_TypeInfo;
  }
  lookup = (System_Collections_Generic_Dictionary_object__object__o *)v3->static_fields->lookup;
  if ( !lookup )
    sub_1C7BD40(0, method);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           lookup,
           (Il2CppObject *)key,
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
}


System_String_o *LocalizationManager__ConvertNumberToRomaNumber(int32_t number, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *v5; // x19
  int32_t v7; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEDDD4 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11209/*"ROMAN_NUMBER_{0}"*/);
    byte_4CEDDD4 = 1;
  }
  v7 = number;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_11209/*"ROMAN_NUMBER_{0}"*/, v3, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v5, v4);
}


System_String_o *LocalizationManager__Get(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  LocalizationManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_4CEDDA5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDDA5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(key, method) )
    return key;
  v4 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager_TypeInfo;
  }
  lookup = (System_Collections_Generic_Dictionary_object__object__o *)v4->static_fields->lookup;
  if ( !lookup )
    sub_1C7BD40(0, v3);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              lookup,
                              (Il2CppObject *)key,
                              (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


System_String_o *LocalizationManager__GetAttackIconInfo(int32_t atk, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDCA & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2043/*"ATTACK_ICON_INFO"*/);
    byte_4CEDDCA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2043/*"ATTACK_ICON_INFO"*/, method);
  v6 = atk;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetAttackInfo(int32_t atk, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDC9 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2044/*"ATTACK_INFO"*/);
    byte_4CEDDC9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2044/*"ATTACK_INFO"*/, method);
  v6 = atk;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetBeforeTime(int64_t at, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int64_t v4; // x19
  System_String_o *v6; // x19
  void *v7; // x0
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x20
  System_String_o *v10; // x0
  Il2CppObject *v11; // x0
  unsigned __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEDDA9 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13448/*"TIME_BEFORE_MINUTES"*/);
    sub_1C7BAE8(&StringLiteral_13446/*"TIME_BEFORE_DAYS"*/);
    sub_1C7BAE8(&StringLiteral_13447/*"TIME_BEFORE_HOURS"*/);
    sub_1C7BAE8(&StringLiteral_13449/*"TIME_BEFORE_OVER_YEARS"*/);
    byte_4CEDDA9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = NetworkManager__getTime(0) - at;
  if ( v4 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13448/*"TIME_BEFORE_MINUTES"*/, v3);
    v7 = int_TypeInfo;
    LODWORD(v12) = 0;
  }
  else
  {
    if ( v4 <= 3599 )
    {
      v8 = v4 / 0x3CuLL;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13448/*"TIME_BEFORE_MINUTES"*/, v3);
      v12 = v8;
    }
    else
    {
      if ( v4 <= 86399 )
      {
        v9 = v4 / 0xE10uLL;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = (System_String_o *)StringLiteral_13447/*"TIME_BEFORE_HOURS"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v4 > 31535999 )
          return LocalizationManager__Get((System_String_o *)StringLiteral_13449/*"TIME_BEFORE_OVER_YEARS"*/, v3);
        v10 = (System_String_o *)StringLiteral_13446/*"TIME_BEFORE_DAYS"*/;
        v9 = v4 / 0x15180uLL;
      }
      v6 = LocalizationManager__Get(v10, v3);
      v12 = v9;
    }
    v7 = long_TypeInfo;
  }
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(v7, &v12);
  return System_String__Format(v6, v11, 0);
}


System_String_o *LocalizationManager__GetCostIconInfo(int32_t cost, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDC6 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3864/*"COST_ICON_INFO"*/);
    byte_4CEDDC6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3864/*"COST_ICON_INFO"*/, method);
  v6 = cost;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetCostInfo(int32_t cost, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDC5 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3865/*"COST_INFO"*/);
    byte_4CEDDC5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3865/*"COST_INFO"*/, method);
  v6 = cost;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetCountInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDBB & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3866/*"COUNT_INFO"*/);
    byte_4CEDDBB = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3866/*"COUNT_INFO"*/, method);
  v6 = count;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetDate(int64_t time, const MethodInfo *method)
{
  System_DateTime_o v3; // x0
  Il2CppObject *v4; // x19
  System_DateTime_o v5; // x0
  Il2CppObject *v6; // x20
  System_DateTime_o v7; // x0
  Il2CppObject *v8; // x0
  int32_t Day; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+8h] [xbp-38h] BYREF
  int32_t Year; // [xsp+Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CEDDB4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_DateTime_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25344/*"{0:D}/{1:D2}/{2:D2}"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDDB4 = 1;
  }
  if ( time < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41943532(time, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v3, 0);
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Year);
  v5.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v5, 0);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Month);
  v7.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v7, 0);
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Day);
  return System_String__Format_64218288((System_String_o *)StringLiteral_25344/*"{0:D}/{1:D2}/{2:D2}"*/, v4, v6, v8, 0);
}


System_String_o *LocalizationManager__GetDateTime(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x19
  System_DateTime_o v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x20
  System_DateTime_o v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x20
  System_DateTime_o v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x20
  System_DateTime_o v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  __int64 v37; // x20
  System_DateTime_o v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x20
  __int64 v47; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4CEDDB6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_DateTime_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_25345/*"{0:D}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_4CEDDB6 = 1;
  }
  if ( time >= 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_41943532(time, 0).fields._dateData;
    v3 = sub_1C7BB90(object___TypeInfo, 5);
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v4.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v4, 0);
    v5 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
    if ( !v3 )
      sub_1C7BD40(v5, v6);
    v13 = v5;
    if ( !v5 || (v5 = sub_1C7BC24(v5, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v3 + 24) )
        goto LABEL_27;
      *(_QWORD *)(v3 + 32) = v13;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), v13, v7, v8, v9, v10, v11, v12);
      v14.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v14, 0);
      v5 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
      v21 = v5;
      if ( !v5 || (v5 = sub_1C7BC24(v5, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v3 + 24) <= 1u )
          goto LABEL_27;
        *(_QWORD *)(v3 + 40) = v21;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 40), v21, v15, v16, v17, v18, v19, v20);
        v22.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v22, 0);
        v5 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
        v29 = v5;
        if ( !v5 || (v5 = sub_1C7BC24(v5, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v3 + 24) <= 2u )
            goto LABEL_27;
          *(_QWORD *)(v3 + 48) = v29;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 48), v29, v23, v24, v25, v26, v27, v28);
          v30.fields._dateData = (uint64_t)&dateData;
          Hour = System_DateTime__get_Hour(v30, 0);
          v5 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
          v37 = v5;
          if ( !v5 || (v5 = sub_1C7BC24(v5, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v3 + 24) <= 3u )
              goto LABEL_27;
            *(_QWORD *)(v3 + 56) = v37;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 56), v37, v31, v32, v33, v34, v35, v36);
            v38.fields._dateData = (uint64_t)&dateData;
            Minute = System_DateTime__get_Minute(v38, 0);
            v5 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
            v45 = v5;
            if ( !v5 || (v5 = sub_1C7BC24(v5, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v3 + 24) > 4u )
              {
                *(_QWORD *)(v3 + 64) = v45;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 64), v45, v39, v40, v41, v42, v43, v44);
                return System_String__Format_64218356(
                         (System_String_o *)StringLiteral_25345/*"{0:D}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/,
                         (System_Object_array *)v3,
                         0);
              }
LABEL_27:
              sub_1C7BD48(v5);
            }
          }
        }
      }
    }
    v47 = sub_1C7BD64(v5);
    sub_1C7BC10(v47, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *LocalizationManager__GetDateTimeDayOfWeek(int64_t time, const MethodInfo *method)
{
  System_IFormatProvider_o *CultureInfo_65386420; // x20
  __int64 v4; // x19
  System_DateTime_o v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_String_o *v14; // x21
  System_DateTime_o v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *v22; // x21
  System_DateTime_o v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *v30; // x21
  System_DateTime_o v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_String_o *v38; // x20
  System_DateTime_o v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_String_o *v46; // x20
  System_DateTime_o v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_String_o *v54; // x20
  __int64 v56; // x0
  int32_t Minute; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-48h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Month; // [xsp+10h] [xbp-40h] BYREF
  int32_t Year; // [xsp+14h] [xbp-3Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEDDB7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C7BAE8(&System_DateTime_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&StringLiteral_25346/*"{0:D}/{1:D2}/{2:D2}({3}) {4:D2}:{5:D2}"*/);
    sub_1C7BAE8(&StringLiteral_21236/*"ja-JP"*/);
    sub_1C7BAE8(&StringLiteral_18606/*"ddd"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDDB7 = 1;
  }
  if ( time >= 1 )
  {
    if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
    CultureInfo_65386420 = (System_IFormatProvider_o *)System_Globalization_CultureInfo__GetCultureInfo_65386420(
                                                         (System_String_o *)StringLiteral_21236/*"ja-JP"*/,
                                                         0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_41943532(time, 0).fields._dateData;
    v4 = sub_1C7BB90(object___TypeInfo, 6);
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v5.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v5, 0);
    v6 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &Year);
    if ( !v4 )
      sub_1C7BD40(v6, v7);
    v14 = v6;
    if ( !v6 || (v6 = (System_String_o *)sub_1C7BC24(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_32;
      *(_QWORD *)(v4 + 32) = v14;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)v14, v8, v9, v10, v11, v12, v13);
      v15.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v15, 0);
      v6 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &Month);
      v22 = v6;
      if ( !v6 || (v6 = (System_String_o *)sub_1C7BC24(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v4 + 24) <= 1u )
          goto LABEL_32;
        *(_QWORD *)(v4 + 40) = v22;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)v22, v16, v17, v18, v19, v20, v21);
        v23.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v23, 0);
        v6 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &Day);
        v30 = v6;
        if ( !v6 || (v6 = (System_String_o *)sub_1C7BC24(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v4 + 24) <= 2u )
            goto LABEL_32;
          *(_QWORD *)(v4 + 48) = v30;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 48), (int32_t)v30, v24, v25, v26, v27, v28, v29);
          v31.fields._dateData = (uint64_t)&dateData;
          v6 = System_DateTime__ToString_65575320(v31, (System_String_o *)StringLiteral_18606/*"ddd"*/, CultureInfo_65386420, 0);
          v38 = v6;
          if ( !v6 || (v6 = (System_String_o *)sub_1C7BC24(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v4 + 24) <= 3u )
              goto LABEL_32;
            *(_QWORD *)(v4 + 56) = v38;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 56), (int32_t)v38, v32, v33, v34, v35, v36, v37);
            v39.fields._dateData = (uint64_t)&dateData;
            Hour = System_DateTime__get_Hour(v39, 0);
            v6 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &Hour);
            v46 = v6;
            if ( !v6 || (v6 = (System_String_o *)sub_1C7BC24(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v4 + 24) <= 4u )
                goto LABEL_32;
              *(_QWORD *)(v4 + 64) = v46;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 64), (int32_t)v46, v40, v41, v42, v43, v44, v45);
              v47.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v47, 0);
              v6 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &Minute);
              v54 = v6;
              if ( !v6 || (v6 = (System_String_o *)sub_1C7BC24(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v4 + 24) > 5u )
                {
                  *(_QWORD *)(v4 + 72) = v54;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 72), (int32_t)v54, v48, v49, v50, v51, v52, v53);
                  return System_String__Format_64218356(
                           (System_String_o *)StringLiteral_25346/*"{0:D}/{1:D2}/{2:D2}({3}) {4:D2}:{5:D2}"*/,
                           (System_Object_array *)v4,
                           0);
                }
LABEL_32:
                sub_1C7BD48(v6);
              }
            }
          }
        }
      }
    }
    v56 = sub_1C7BD64(v6);
    sub_1C7BC10(v56, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *LocalizationManager__GetEventPointInfo(
        int32_t addPoint,
        int32_t ratePoint,
        System_String_o *unit,
        bool isMax,
        const MethodInfo *method)
{
  __int64 *v9; // x8
  __int64 *v11; // x8
  System_String_o *v12; // x21
  const MethodInfo *v13; // x1
  System_String_o *v14; // x22
  System_String_o *NumberFormat_41846716; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x0
  __int64 *v18; // x9
  System_String_o *v19; // x21
  Il2CppObject *v20; // x20
  const MethodInfo *v21; // x1
  System_String_o *v22; // x22
  System_String_o *v23; // x0
  Il2CppObject *v24; // x21
  uint32_t cctor_finished; // w9
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  Il2CppObject *v28; // x1
  int v29; // [xsp+8h] [xbp-48h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF

  v30 = addPoint;
  if ( (byte_4CEDDCC & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_801/*"+"*/);
    sub_1C7BAE8(&StringLiteral_5658/*"EVENT_POINT_RATE_INFO"*/);
    sub_1C7BAE8(&StringLiteral_5656/*"EVENT_POINT_NONE_INFO"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_5653/*"EVENT_POINT_MAX_INFO"*/);
    sub_1C7BAE8(&StringLiteral_5645/*"EVENT_POINT_ADD_INFO"*/);
    sub_1C7BAE8(&StringLiteral_5646/*"EVENT_POINT_ADD_RATE_INFO"*/);
    byte_4CEDDCC = 1;
  }
  v29 = 0;
  if ( ratePoint >= 3000 && isMax )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_5653/*"EVENT_POINT_MAX_INFO"*/;
    return LocalizationManager__Get((System_String_o *)*v9, *(const MethodInfo **)&ratePoint);
  }
  if ( addPoint < 0 )
    v11 = &StringLiteral_1/*""*/;
  else
    v11 = &StringLiteral_801/*"+"*/;
  v12 = (System_String_o *)*v11;
  v14 = System_Int32__ToString((int32_t)&v30, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat_41846716 = LocalizationManager__GetNumberFormat_41846716(v14, v13);
  if ( unit )
    v16 = unit;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  v17 = System_String__Concat_64215176(v12, NumberFormat_41846716, v16, 0);
  if ( ratePoint < 0 )
    v18 = &StringLiteral_1/*""*/;
  else
    v18 = &StringLiteral_801/*"+"*/;
  v19 = (System_String_o *)*v18;
  v20 = (Il2CppObject *)v17;
  v29 = ratePoint / 10;
  v22 = System_Int32__ToString((int32_t)&v29, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__GetNumberFormat_41846716(v22, v21);
  v24 = (Il2CppObject *)System_String__Concat_64176912(v19, v23, 0);
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( ratePoint && v30 )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5646/*"EVENT_POINT_ADD_RATE_INFO"*/, *(const MethodInfo **)&ratePoint);
    return System_String__Format_64218220(v26, v20, v24, 0);
  }
  else
  {
    if ( v30 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5645/*"EVENT_POINT_ADD_INFO"*/, *(const MethodInfo **)&ratePoint);
      v28 = v20;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !ratePoint )
      {
        v9 = &StringLiteral_5656/*"EVENT_POINT_NONE_INFO"*/;
        return LocalizationManager__Get((System_String_o *)*v9, *(const MethodInfo **)&ratePoint);
      }
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5658/*"EVENT_POINT_RATE_INFO"*/, *(const MethodInfo **)&ratePoint);
      v28 = v24;
    }
    return System_String__Format(v27, v28, 0);
  }
}


System_String_o *LocalizationManager__GetHaveUnitInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDBA & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7213/*"HAVE_UNIT_INFO"*/);
    byte_4CEDDBA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7213/*"HAVE_UNIT_INFO"*/, method);
  v6 = count;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetHpIconInfo(int32_t hp, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDC8 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7269/*"HP_ICON_INFO"*/);
    byte_4CEDDC8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7269/*"HP_ICON_INFO"*/, method);
  v6 = hp;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetHpInfo(int32_t hp, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDC7 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7270/*"HP_INFO"*/);
    byte_4CEDDC7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7270/*"HP_INFO"*/, method);
  v6 = hp;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetIdIconInfo(int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDC1 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7444/*"ID_ICON_INFO"*/);
    byte_4CEDDC1 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7444/*"ID_ICON_INFO"*/, method);
  v6 = id;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetIfExists(System_String_array *keys, const MethodInfo *method)
{
  System_String_array *v2; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v4; // x22
  System_String_o *v5; // x20

  v2 = keys;
  if ( (byte_4CEDDA8 & 1) == 0 )
  {
    keys = (System_String_array *)sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDDA8 = 1;
  }
  if ( !v2 )
    sub_1C7BD40(keys, method);
  max_length = v2->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= (unsigned int)max_length )
      sub_1C7BD48(keys);
    v5 = v2->m_Items[v4];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    keys = (System_String_array *)LocalizationManager__ContainsKey(v5, method);
    if ( ((unsigned __int8)keys & 1) != 0 )
      break;
    LODWORD(max_length) = v2->max_length;
    if ( (__int64)++v4 >= (int)max_length )
      return 0;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v5, method);
}


System_String_o *LocalizationManager__GetKinsokuLastString(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4CEDDA1 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDDA1 = 1;
  }
  v1 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v1 = LocalizationManager_TypeInfo;
  }
  return v1->static_fields->kinsokuLastString;
}


System_String_o *LocalizationManager__GetKinsokuSeparationString(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4CEDDA2 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDDA2 = 1;
  }
  v1 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v1 = LocalizationManager_TypeInfo;
  }
  return v1->static_fields->kinsokuSeparationString;
}


System_String_o *LocalizationManager__GetKinsokuTopString(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4CEDDA0 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDDA0 = 1;
  }
  v1 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v1 = LocalizationManager_TypeInfo;
  }
  return v1->static_fields->kinsokuTopString;
}


System_String_o *LocalizationManager__GetLapTime(int64_t time, const MethodInfo *method)
{
  int64_t v3; // x23
  int64_t v4; // x20
  Il2CppObject *v5; // x19
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x0
  int64_t v9; // [xsp+8h] [xbp-48h] BYREF
  int64_t v10; // [xsp+10h] [xbp-40h] BYREF
  int64_t v11; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEDDB8 & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25325/*"{0:D2}h{1:D2}m{2:D2}s"*/);
    byte_4CEDDB8 = 1;
  }
  v3 = time % 60;
  v4 = time / 60 % 60;
  v11 = time / 3600;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
  v10 = v4;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v10);
  v9 = v3;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v9);
  return System_String__Format_64218288((System_String_o *)StringLiteral_25325/*"{0:D2}h{1:D2}m{2:D2}s"*/, v5, v6, v7, 0);
}


System_String_o *LocalizationManager__GetLevelIconInfo(int32_t lv, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDC3 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8285/*"LEVEL_ICON_INFO"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDDC3 = 1;
  }
  if ( lv < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8285/*"LEVEL_ICON_INFO"*/, method);
  v6 = lv;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetLevelInfo(int32_t lv, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDC2 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8286/*"LEVEL_INFO"*/);
    byte_4CEDDC2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8286/*"LEVEL_INFO"*/, method);
  v6 = lv;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetLevelList(System_Int32_array *levelList, const MethodInfo *method)
{
  System_Int32_array *v2; // x19
  il2cpp_array_size_t max_length; // x21
  System_Text_StringBuilder_o *v4; // x20
  unsigned __int64 v5; // x22
  __int64 v6; // x25
  int *m_Items; // x21

  v2 = levelList;
  if ( (byte_4CEDDCD & 1) == 0 )
  {
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_859/*"-"*/);
    levelList = (System_Int32_array *)sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEDDCD = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  max_length = v2->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64254224(v4, 4 * max_length, 0);
  if ( (int)max_length < 1 )
  {
    if ( v4 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                                  v4,
                                  v4->klass->vtable._3_ToString.method);
LABEL_18:
    sub_1C7BD40(levelList, method);
  }
  v5 = 0;
  v6 = (unsigned int)max_length;
  m_Items = v2->m_Items;
  do
  {
    if ( v5 )
    {
      if ( !v4 )
        goto LABEL_18;
      levelList = (System_Int32_array *)System_Text_StringBuilder__Append_64260872(
                                          v4,
                                          (System_String_o *)StringLiteral_1042/*"/"*/,
                                          0);
    }
    if ( v5 >= LODWORD(v2->max_length) )
      sub_1C7BD48(levelList);
    if ( *m_Items <= 0 )
    {
      method = (const MethodInfo *)StringLiteral_859/*"-"*/;
      if ( !v4 )
        goto LABEL_18;
    }
    else
    {
      levelList = (System_Int32_array *)System_Int32__ToString((int32_t)m_Items, 0);
      method = (const MethodInfo *)levelList;
      if ( !v4 )
        goto LABEL_18;
    }
    levelList = (System_Int32_array *)System_Text_StringBuilder__Append_64260872(v4, (System_String_o *)method, 0);
    ++v5;
    ++m_Items;
  }
  while ( v6 != v5 );
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                              v4,
                              v4->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetLevelList_41850208(SkillInfo_array *skillInfoList, const MethodInfo *method)
{
  SkillInfo_array *v2; // x19
  il2cpp_array_size_t max_length; // x21
  System_Text_StringBuilder_o *v4; // x20
  unsigned __int64 v5; // x24
  __int64 v6; // x27
  int *v7; // x23
  int32_t v8; // w21
  int32_t v9; // w22
  int32_t v10; // w23
  int v11; // w22
  __int64 *v12; // x8
  System_String_o **v13; // x8
  System_String_o *v14; // x0

  v2 = skillInfoList;
  if ( (byte_4CEDDCE & 1) == 0 )
  {
    sub_1C7BAE8(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15978/*"[FCF050]"*/);
    sub_1C7BAE8(&StringLiteral_16038/*"[ff730f]"*/);
    sub_1C7BAE8(&StringLiteral_15881/*"[-]"*/);
    sub_1C7BAE8(&StringLiteral_859/*"-"*/);
    skillInfoList = (SkillInfo_array *)sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEDDCE = 1;
  }
  if ( !v2 )
    goto LABEL_32;
  max_length = v2->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64254224(v4, 15 * max_length, 0);
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    v6 = (unsigned int)max_length;
    do
    {
      if ( v5 >= LODWORD(v2->max_length) )
        sub_1C7BD48(skillInfoList);
      v7 = (int *)v2->m_Items[v5];
      if ( v5 )
      {
        if ( !v4 )
          goto LABEL_32;
        skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_64260872(
                                             v4,
                                             (System_String_o *)StringLiteral_1042/*"/"*/,
                                             0);
      }
      if ( v7 && (v8 = (_DWORD)v7 + 20, v7[5] >= 1) )
      {
        v9 = v7[12];
        if ( v9 < 1 )
        {
          v11 = 0;
LABEL_22:
          skillInfoList = (SkillInfo_array *)System_Int32__ToString(v8, 0);
          if ( !v4 )
            goto LABEL_32;
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_64260872(
                                               v4,
                                               (System_String_o *)skillInfoList,
                                               0);
          v13 = (System_String_o **)&StringLiteral_15881/*"[-]"*/;
          if ( v11 < 1 )
            goto LABEL_28;
          goto LABEL_27;
        }
        v10 = v7[13];
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        skillInfoList = (SkillInfo_array *)ServantSkillStrengthStatus__GetStrengthenedCnt(v9, v10, 0);
        if ( (_DWORD)skillInfoList == 2 )
        {
          v12 = &StringLiteral_16038/*"[ff730f]"*/;
          if ( !v4 )
            goto LABEL_32;
        }
        else
        {
          v11 = (int)skillInfoList;
          if ( (_DWORD)skillInfoList != 1 )
            goto LABEL_22;
          v12 = &StringLiteral_15978/*"[FCF050]"*/;
          if ( !v4 )
            goto LABEL_32;
        }
        System_Text_StringBuilder__Append_64260872(v4, (System_String_o *)*v12, 0);
        v14 = System_Int32__ToString(v8, 0);
        System_Text_StringBuilder__Append_64260872(v4, v14, 0);
        v13 = (System_String_o **)&StringLiteral_15881/*"[-]"*/;
      }
      else
      {
        v13 = (System_String_o **)&StringLiteral_859/*"-"*/;
        if ( !v4 )
          goto LABEL_32;
      }
LABEL_27:
      skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_64260872(v4, *v13, 0);
LABEL_28:
      ++v5;
    }
    while ( v6 != v5 );
  }
  if ( !v4 )
LABEL_32:
    sub_1C7BD40(skillInfoList, method);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                              v4,
                              v4->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetNoEntryName(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4CEDD9F & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDD9F = 1;
  }
  v1 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v1 = LocalizationManager_TypeInfo;
  }
  return v1->static_fields->noEntryNameText;
}


UnityEngine_Color_o LocalizationManager__GetNormalEffectColor(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0
  float *static_fields; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEDDA3 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDDA3 = 1;
  }
  v1 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v1 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v1->static_fields;
  v3 = static_fields[20];
  v4 = static_fields[21];
  v5 = static_fields[22];
  v6 = static_fields[23];
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
  return result;
}


System_String_o *LocalizationManager__GetNumberFormat(int32_t data, const MethodInfo *method)
{
  int32_t v3; // [xsp+Ch] [xbp-14h] BYREF

  v3 = data;
  if ( (byte_4CEDDBC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9258/*"N0"*/);
    byte_4CEDDBC = 1;
  }
  return System_Int32__ToString_65685416((int32_t)&v3, (System_String_o *)StringLiteral_9258/*"N0"*/, 0);
}


System_String_o *LocalizationManager__GetNumberFormatLong(int64_t data, const MethodInfo *method)
{
  int64_t v3; // [xsp+8h] [xbp-18h] BYREF

  v3 = data;
  if ( (byte_4CEDDBD & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9258/*"N0"*/);
    byte_4CEDDBD = 1;
  }
  return System_Int64__ToString_65690592((int64_t)&v3, (System_String_o *)StringLiteral_9258/*"N0"*/, 0);
}


System_String_o *LocalizationManager__GetNumberFormat_41846716(System_String_o *data, const MethodInfo *method)
{
  int32_t stringLength; // w22
  int32_t v4; // w20
  int32_t v5; // w1
  int v6; // w23
  System_Text_StringBuilder_o *v7; // x21
  System_Text_StringBuilder_o *appended; // x0
  __int64 v9; // x1
  int v10; // w23
  uint16_t Chars; // w1

  if ( (byte_4CEDDBE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDDBE = 1;
  }
  if ( !data )
    return (System_String_o *)StringLiteral_1/*""*/;
  stringLength = data->fields._stringLength;
  if ( !stringLength )
    return (System_String_o *)StringLiteral_1/*""*/;
  v4 = stringLength + 1;
  while ( 1 )
  {
    v5 = v4 - 2;
    if ( v4 - 2 < 0 )
      break;
    --v4;
    if ( (unsigned __int16)(System_String__get_Chars(data, v5, 0) - 48) > 9u )
      goto LABEL_11;
  }
  v4 = 0;
LABEL_11:
  v6 = stringLength - v4;
  if ( stringLength <= v4 )
    return data;
  v7 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64254224(v7, 32, 0);
  if ( v4 >= 1 )
  {
    if ( !v7 )
LABEL_26:
      sub_1C7BD40(appended, v9);
    appended = System_Text_StringBuilder__Append_64261188(v7, data, 0, v4, 0);
  }
  if ( v6 % 3 )
    v10 = v6 % 3;
  else
    v10 = 3;
  do
  {
    if ( v10 <= 0 )
    {
      if ( !v7 )
        goto LABEL_26;
      System_Text_StringBuilder__Append_64263200(v7, 0x2Cu, 0);
      Chars = System_String__get_Chars(data, v4, 0);
      v10 = 3;
    }
    else
    {
      appended = (System_Text_StringBuilder_o *)System_String__get_Chars(data, v4, 0);
      if ( !v7 )
        goto LABEL_26;
      Chars = (unsigned __int16)appended;
    }
    appended = System_Text_StringBuilder__Append_64263200(v7, Chars, 0);
    ++v4;
    --v10;
  }
  while ( stringLength != v4 );
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                              v7,
                              v7->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetPeriod(
        int64_t startedAt,
        int64_t endedAt,
        bool isDispStartTime,
        bool isDispEndTime,
        const MethodInfo *method)
{
  System_String_o *v9; // x23
  System_String_o *DateTime; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x21
  System_String_o *Date; // x0

  if ( (byte_4CEDDB3 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_328/*" ~ "*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDDB3 = 1;
  }
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( startedAt <= 0 && endedAt < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isDispStartTime )
    DateTime = LocalizationManager__GetDateTime(startedAt, (const MethodInfo *)endedAt);
  else
    DateTime = LocalizationManager__GetDate(startedAt, (const MethodInfo *)endedAt);
  v12 = System_String__Concat_64176912(v9, DateTime, 0);
  v14 = System_String__Concat_64176912(v12, (System_String_o *)StringLiteral_328/*" ~ "*/, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isDispEndTime )
    Date = LocalizationManager__GetDateTime(endedAt, v13);
  else
    Date = LocalizationManager__GetDate(endedAt, v13);
  return System_String__Concat_64176912(v14, Date, 0);
}


System_String_o *LocalizationManager__GetPrice2Info(int32_t price, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4CEDDC0 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10504/*"PRICE2_INFO"*/);
    byte_4CEDDC0 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10504/*"PRICE2_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(price, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetPriceInfo(int32_t price, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4CEDDBF & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10505/*"PRICE_INFO"*/);
    byte_4CEDDBF = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10505/*"PRICE_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(price, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetRarityInfo(int32_t rare, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDC4 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16072/*"[{0}]"*/);
    byte_4CEDDC4 = 1;
  }
  v5 = rare;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_16072/*"[{0}]"*/, v3, 0);
}


bool LocalizationManager__GetRestIsLastHours(int64_t at, const MethodInfo *method)
{
  int64_t v3; // x8

  if ( (byte_4CEDDB2 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEDDB2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v3 = at - NetworkManager__getTime(0);
  if ( v3 < 3600 )
    return v3 >= 0;
  else
    return v3 < 86400;
}


System_String_o *LocalizationManager__GetRestTime(int64_t at, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int64_t v4; // x19
  __int64 *v5; // x8
  System_String_o *v7; // x0
  _QWORD *v8; // x8
  System_String_o *v9; // x19
  unsigned __int64 v10; // x20
  __int64 *v11; // x8
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  Il2CppObject *v14; // x0
  unsigned __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEDDAA & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13473/*"TIME_REST_DAYS"*/);
    sub_1C7BAE8(&StringLiteral_13476/*"TIME_REST_HOURS"*/);
    sub_1C7BAE8(&StringLiteral_13477/*"TIME_REST_MINUTES"*/);
    sub_1C7BAE8(&StringLiteral_13496/*"TIME_REST_TIMEOVER"*/);
    sub_1C7BAE8(&StringLiteral_13479/*"TIME_REST_OVER_YEARS"*/);
    byte_4CEDDAA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = at - NetworkManager__getTime(0);
  if ( v4 < 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = &StringLiteral_13496/*"TIME_REST_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v5, v3);
  }
  if ( v4 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13477/*"TIME_REST_MINUTES"*/, v3);
    v8 = &int_TypeInfo;
    v9 = v7;
    LODWORD(v15) = 0;
    goto LABEL_28;
  }
  if ( v4 <= 3599 )
  {
    v10 = v4 / 0x3CuLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_13477/*"TIME_REST_MINUTES"*/;
  }
  else
  {
    if ( v4 > 86399 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v4 > 31535999 )
      {
        v5 = &StringLiteral_13479/*"TIME_REST_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v5, v3);
      }
      v12 = (System_String_o *)StringLiteral_13473/*"TIME_REST_DAYS"*/;
      v10 = v4 / 0x15180uLL;
      goto LABEL_27;
    }
    v10 = v4 / 0xE10uLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_13476/*"TIME_REST_HOURS"*/;
  }
  v12 = (System_String_o *)*v11;
LABEL_27:
  v13 = LocalizationManager__Get(v12, v3);
  v8 = &long_TypeInfo;
  v9 = v13;
  v15 = v10;
LABEL_28:
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(*v8, &v15);
  return System_String__Format(v9, v14, 0);
}


System_String_o *LocalizationManager__GetRestTime2(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  __int64 v5; // x19
  __int64 *v6; // x8
  System_String_o *v8; // x0
  _QWORD *v9; // x8
  System_String_o *v10; // x19
  unsigned __int64 v11; // x20
  __int64 *v12; // x8
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  Il2CppObject *v15; // x0
  unsigned __int64 v16; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_4CEDDAB & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13457/*"TIME_REST2_MINUTES"*/);
    sub_1C7BAE8(&StringLiteral_13459/*"TIME_REST2_OVER_YEARS"*/);
    sub_1C7BAE8(&StringLiteral_13456/*"TIME_REST2_HOURS"*/);
    sub_1C7BAE8(&StringLiteral_13455/*"TIME_REST2_DAYS"*/);
    sub_1C7BAE8(&StringLiteral_13460/*"TIME_REST2_TIMEOVER"*/);
    byte_4CEDDAB = 1;
  }
  if ( Time < 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
  }
  v5 = at - Time;
  if ( v5 < 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_13460/*"TIME_REST2_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
  }
  if ( v5 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13457/*"TIME_REST2_MINUTES"*/, (const MethodInfo *)nowTime);
    v9 = &int_TypeInfo;
    v10 = v8;
    LODWORD(v16) = 0;
    goto LABEL_30;
  }
  if ( v5 <= 3599 )
  {
    v11 = v5 / 0x3CuLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_13457/*"TIME_REST2_MINUTES"*/;
  }
  else
  {
    if ( v5 > 86399 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v5 > 31535999 )
      {
        v6 = &StringLiteral_13459/*"TIME_REST2_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
      }
      v13 = (System_String_o *)StringLiteral_13455/*"TIME_REST2_DAYS"*/;
      v11 = v5 / 0x15180uLL;
      goto LABEL_29;
    }
    v11 = v5 / 0xE10uLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_13456/*"TIME_REST2_HOURS"*/;
  }
  v13 = (System_String_o *)*v12;
LABEL_29:
  v14 = LocalizationManager__Get(v13, (const MethodInfo *)nowTime);
  v9 = &long_TypeInfo;
  v10 = v14;
  v16 = v11;
LABEL_30:
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(*v9, &v16);
  return System_String__Format(v10, v15, 0);
}


System_String_o *LocalizationManager__GetRestTime3(int64_t at, const MethodInfo *method)
{
  int64_t Time; // x0
  System_DateTime_o v4; // x20
  System_DateTime_o v5; // x19
  System_DateTime_o v6; // x0
  System_DateTime_o v7; // x1
  System_TimeSpan_o v8; // x0
  int32_t Hours; // w19
  System_TimeSpan_o v10; // x0
  Il2CppObject *v11; // x19
  System_TimeSpan_o v12; // x0
  Il2CppObject *v13; // x20
  System_TimeSpan_o v14; // x0
  Il2CppObject *v15; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-40h] BYREF
  int v19; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t ticks; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEDDAC & 1) == 0 )
  {
    sub_1C7BAE8(&System_DateTime_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&System_TimeSpan_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25323/*"{0:D2}:{1:D2}:{2:D2}"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDDAC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( at - NetworkManager__getTime(0) < 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4.fields._dateData = NetworkManager__getDateTime_41943204(Time, 0).fields._dateData;
  v5.fields._dateData = NetworkManager__getDateTime_41943204(at, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v6.fields._dateData = v5.fields._dateData;
  v7.fields._dateData = v4.fields._dateData;
  ticks = System_DateTime__op_Subtraction_65577916(v6, v7, 0).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v8.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v8, 0);
  v10.fields._ticks = (int64_t)&ticks;
  v19 = Hours + 24 * System_TimeSpan__get_Days(v10, 0);
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v12.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v12, 0);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v14.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v14, 0);
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  return System_String__Format_64218288((System_String_o *)StringLiteral_25323/*"{0:D2}:{1:D2}:{2:D2}"*/, v11, v13, v15, 0);
}


System_String_o *LocalizationManager__GetRestTime4(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  int64_t v5; // x8
  unsigned int v6; // w10
  __int64 v7; // x21
  __int64 v8; // x20
  Il2CppObject *v9; // x19
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x0
  __int64 v13; // [xsp+0h] [xbp-40h] BYREF
  __int64 v14; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v15; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CEDDAD & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25323/*"{0:D2}:{1:D2}:{2:D2}"*/);
    sub_1C7BAE8(&StringLiteral_1450/*"99:99:99"*/);
    byte_4CEDDAD = 1;
  }
  if ( nowTime < 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  v5 = at - nowTime;
  if ( at - nowTime < 0 )
    return 0;
  if ( v5 >= 360000 )
    return (System_String_o *)StringLiteral_1450/*"99:99:99"*/;
  v6 = ((unsigned __int64)(-2004318071LL * ((int)((0x44444444800LL * (unsigned __int64)(unsigned int)v5) >> 32) >> 16)) >> 32)
     + (__int16)((unsigned int)v5 / 0x3C);
  v7 = (unsigned int)v5 % 0x3C;
  v8 = (__int16)((unsigned int)v5 / 0x3C - 60 * ((v6 >> 5) + (v6 >> 31)));
  v15 = (unsigned int)v5 / 0xE10uLL;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
  v14 = v8;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  v13 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
  return System_String__Format_64218288((System_String_o *)StringLiteral_25323/*"{0:D2}:{1:D2}:{2:D2}"*/, v9, v10, v11, 0);
}


System_String_o *LocalizationManager__GetRestTime5(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  __int64 v5; // x19
  __int64 *v6; // x8
  System_String_o *v8; // x0
  _QWORD *v9; // x8
  System_String_o *v10; // x19
  unsigned __int64 v11; // x20
  __int64 *v12; // x8
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  Il2CppObject *v15; // x0
  unsigned __int64 v16; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_4CEDDAE & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13462/*"TIME_REST5_HOURS"*/);
    sub_1C7BAE8(&StringLiteral_13465/*"TIME_REST5_TIMEOVER"*/);
    sub_1C7BAE8(&StringLiteral_13464/*"TIME_REST5_OVER_YEARS"*/);
    sub_1C7BAE8(&StringLiteral_13461/*"TIME_REST5_DAYS"*/);
    sub_1C7BAE8(&StringLiteral_13463/*"TIME_REST5_MINUTES"*/);
    byte_4CEDDAE = 1;
  }
  if ( Time < 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
  }
  v5 = at - Time;
  if ( v5 < 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_13465/*"TIME_REST5_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
  }
  if ( v5 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13463/*"TIME_REST5_MINUTES"*/, (const MethodInfo *)nowTime);
    v9 = &int_TypeInfo;
    v10 = v8;
    LODWORD(v16) = 0;
    goto LABEL_30;
  }
  if ( v5 <= 3599 )
  {
    v11 = v5 / 0x3CuLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_13463/*"TIME_REST5_MINUTES"*/;
  }
  else
  {
    if ( v5 > 86399 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v5 > 31535999 )
      {
        v6 = &StringLiteral_13464/*"TIME_REST5_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
      }
      v13 = (System_String_o *)StringLiteral_13461/*"TIME_REST5_DAYS"*/;
      v11 = v5 / 0x15180uLL;
      goto LABEL_29;
    }
    v11 = v5 / 0xE10uLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_13462/*"TIME_REST5_HOURS"*/;
  }
  v13 = (System_String_o *)*v12;
LABEL_29:
  v14 = LocalizationManager__Get(v13, (const MethodInfo *)nowTime);
  v9 = &long_TypeInfo;
  v10 = v14;
  v16 = v11;
LABEL_30:
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(*v9, &v16);
  return System_String__Format(v10, v15, 0);
}


System_String_o *LocalizationManager__GetRestTime6(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x21
  const MethodInfo *v5; // x1
  System_String_o *v6; // x19
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  unsigned __int64 v9; // x21
  System_String_o *v10; // x0
  System_String_o *v12; // x0
  System_Int64_c **v13; // x8
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  System_Int64_c *v16; // x0
  unsigned __int64 *v17; // x1
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  const MethodInfo *v23; // x1
  unsigned __int64 v24; // x22
  unsigned __int64 v25; // x21
  System_String_o *v26; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  const MethodInfo *v29; // x1
  unsigned __int64 v30; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v31; // [xsp+8h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_4CEDDAF & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13471/*"TIME_REST6_TIMEOVER"*/);
    sub_1C7BAE8(&StringLiteral_13468/*"TIME_REST6_HOURS"*/);
    sub_1C7BAE8(&StringLiteral_13470/*"TIME_REST6_OVER_YEARS"*/);
    sub_1C7BAE8(&StringLiteral_13469/*"TIME_REST6_MINUTES"*/);
    sub_1C7BAE8(&StringLiteral_13467/*"TIME_REST6_HEAD"*/);
    sub_1C7BAE8(&StringLiteral_13466/*"TIME_REST6_DAYS"*/);
    byte_4CEDDAF = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TIME_REST6_HEAD"*/, (const MethodInfo *)nowTime);
  if ( Time < 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
  }
  v7 = at - Time;
  if ( at - Time >= 0 )
  {
    if ( v7 <= 59 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13469/*"TIME_REST6_MINUTES"*/, v5);
      v13 = (System_Int64_c **)&int_TypeInfo;
      v14 = v12;
      LODWORD(v31) = 0;
    }
    else
    {
      v8 = v7 / 0x3CuLL;
      if ( v7 > 3599 )
      {
        v9 = v7 / 0xE10uLL;
        if ( v7 <= 86399 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13468/*"TIME_REST6_HOURS"*/, v5);
          v31 = v9;
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31);
          v22 = System_String__Format(v20, v21, 0);
          v6 = System_String__Concat_64176912(v6, v22, 0);
          v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13469/*"TIME_REST6_MINUTES"*/, v23);
          v16 = long_TypeInfo;
          v30 = v8 % 0x3C;
        }
        else
        {
          if ( v7 > 31535999 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13470/*"TIME_REST6_OVER_YEARS"*/, v5);
            return System_String__Concat_64176912(v6, v10, 0);
          }
          v24 = v7 / 0x15180uLL;
          v25 = v9 % 0x18;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TIME_REST6_DAYS"*/, v5);
          v31 = v24;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31);
          v28 = System_String__Format(v26, v27, 0);
          v6 = System_String__Concat_64176912(v6, v28, 0);
          v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13468/*"TIME_REST6_HOURS"*/, v29);
          v16 = long_TypeInfo;
          v30 = v25;
        }
        v17 = &v30;
LABEL_27:
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(v16, v17);
        v19 = System_String__Format(v14, v18, 0);
        return System_String__Concat_64176912(v6, v19, 0);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13469/*"TIME_REST6_MINUTES"*/, v5);
      v13 = &long_TypeInfo;
      v14 = v15;
      v31 = v8;
    }
    v16 = *v13;
    v17 = &v31;
    goto LABEL_27;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_13471/*"TIME_REST6_TIMEOVER"*/, v5);
}


System_String_o *LocalizationManager__GetRestTimeInFormat(
        int64_t at,
        int64_t nowTime,
        System_String_o *format,
        const MethodInfo *method)
{
  int64_t v7; // x8
  unsigned int v8; // w10
  __int64 v9; // x22
  __int64 v10; // x21
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x21
  void *v13; // x0
  Il2CppObject *v14; // x0
  __int64 v16; // [xsp+8h] [xbp-48h] BYREF
  __int64 v17; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v18; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEDDB0 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEDDB0 = 1;
  }
  if ( nowTime < 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  v7 = at - nowTime;
  if ( at - nowTime < 0 )
  {
    LODWORD(v18) = 0;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    LODWORD(v17) = 0;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v13 = int_TypeInfo;
    LODWORD(v16) = 0;
  }
  else if ( v7 >= 360000 )
  {
    LODWORD(v18) = 99;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    LODWORD(v17) = 99;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v13 = int_TypeInfo;
    LODWORD(v16) = 99;
  }
  else
  {
    v8 = ((unsigned __int64)(-2004318071LL * ((int)((0x44444444800LL * (unsigned __int64)(unsigned int)v7) >> 32) >> 16)) >> 32)
       + (__int16)((unsigned int)v7 / 0x3C);
    v9 = (unsigned int)v7 % 0x3C;
    v10 = (__int16)((unsigned int)v7 / 0x3C - 60 * ((v8 >> 5) + (v8 >> 31)));
    v18 = (unsigned int)v7 / 0xE10uLL;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    v17 = v10;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
    v13 = long_TypeInfo;
    v16 = v9;
  }
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(v13, &v16);
  return System_String__Format_64218288(format, v11, v12, v14, 0);
}


void LocalizationManager__GetRestTimeWithSeparatedTimeStr(
        int64_t at,
        System_String_o **numStr,
        System_String_o **charStr,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int64_t v13; // x8
  const MethodInfo *v14; // x1
  __int64 *v15; // x8
  int32_t v16; // w1
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_String_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_String_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  unsigned __int64 v39; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v40; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v41; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEDDB1 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13504/*"TIME_STR_TIMEOVER"*/);
    sub_1C7BAE8(&StringLiteral_13501/*"TIME_STR_MINUTES"*/);
    sub_1C7BAE8(&StringLiteral_13499/*"TIME_STR_DAYS"*/);
    sub_1C7BAE8(&StringLiteral_13503/*"TIME_STR_OVER_YEARS"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_1166/*"1"*/);
    sub_1C7BAE8(&StringLiteral_13500/*"TIME_STR_HOURS"*/);
    sub_1C7BAE8(&StringLiteral_1116/*"0"*/);
    byte_4CEDDB1 = 1;
  }
  v39 = 0;
  v40 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v13 = at - NetworkManager__getTime(0);
  if ( v13 < 0 )
  {
    *numStr = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)numStr, StringLiteral_1/*""*/, v7, v8, v9, v10, v11, v12);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = &StringLiteral_13504/*"TIME_STR_TIMEOVER"*/;
  }
  else
  {
    if ( v13 <= 59 )
    {
      *numStr = (System_String_o *)StringLiteral_1116/*"0"*/;
      v16 = StringLiteral_1116/*"0"*/;
    }
    else
    {
      v41 = v13 / 0x3CuLL;
      if ( v13 > 3599 )
      {
        v40 = v13 / 0xE10uLL;
        if ( (unsigned __int64)v13 >> 7 <= 0x2A2 )
        {
          v25 = System_Int64__ToString((int64_t)&v40, 0);
          *numStr = v25;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)numStr, (int32_t)v25, v26, v27, v28, v29, v30, v31);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v15 = &StringLiteral_13500/*"TIME_STR_HOURS"*/;
        }
        else
        {
          v39 = v13 / 0x15180uLL;
          if ( (unsigned __int64)v13 <= 0x1E1337F )
          {
            v32 = System_Int64__ToString((int64_t)&v39, 0);
            *numStr = v32;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)numStr, (int32_t)v32, v33, v34, v35, v36, v37, v38);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v15 = &StringLiteral_13499/*"TIME_STR_DAYS"*/;
          }
          else
          {
            *numStr = (System_String_o *)StringLiteral_1166/*"1"*/;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)numStr, StringLiteral_1166/*"1"*/, v7, v8, v9, v10, v11, v12);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v15 = &StringLiteral_13503/*"TIME_STR_OVER_YEARS"*/;
          }
        }
        goto LABEL_21;
      }
      v17 = System_Int64__ToString((int64_t)&v41, 0);
      v16 = (int)v17;
      *numStr = v17;
    }
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)numStr, v16, v7, v8, v9, v10, v11, v12);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = &StringLiteral_13501/*"TIME_STR_MINUTES"*/;
  }
LABEL_21:
  v18 = LocalizationManager__Get((System_String_o *)*v15, v14);
  *charStr = v18;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)charStr, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


UnityEngine_Color_o LocalizationManager__GetSelectEffectColor(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0
  float *static_fields; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEDDA4 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDDA4 = 1;
  }
  v1 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v1 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v1->static_fields;
  v3 = static_fields[24];
  v4 = static_fields[25];
  v5 = static_fields[26];
  v6 = static_fields[27];
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
  return result;
}


System_String_o *LocalizationManager__GetStoneInfo(int32_t n, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDDCB & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12420/*"STONE_INFO"*/);
    byte_4CEDDCB = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_12420/*"STONE_INFO"*/, method);
  v6 = n;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetTime(int64_t time, const MethodInfo *method)
{
  System_DateTime_o v3; // x0
  Il2CppObject *v4; // x19
  System_DateTime_o v5; // x0
  Il2CppObject *v6; // x0
  int32_t Minute; // [xsp+8h] [xbp-38h] BYREF
  int32_t Hour; // [xsp+Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CEDDB5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_DateTime_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25322/*"{0:D2}:{1:D2}"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDDB5 = 1;
  }
  if ( time < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41943532(time, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v3, 0);
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v5.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v5, 0);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  return System_String__Format_64218220((System_String_o *)StringLiteral_25322/*"{0:D2}:{1:D2}"*/, v4, v6, 0);
}


System_String_o *LocalizationManager__GetUnitInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4CEDDB9 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_14875/*"UNIT_INFO"*/);
    byte_4CEDDB9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_14875/*"UNIT_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(count, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetUnknownName(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4CEDD9E & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDD9E = 1;
  }
  v1 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v1 = LocalizationManager_TypeInfo;
  }
  return v1->static_fields->unknownNameText;
}


void LocalizationManager__Initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CEDD9C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
    byte_4CEDD9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C7BD40(v2, v3);
    LocalizationManager__InitializeLocal((LocalizationManager_o *)Instance, v3);
  }
}


void LocalizationManager__InitializeLocal(LocalizationManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mainTextData; // x20
  __int64 v4; // x1
  UnityEngine_TextAsset_o *v5; // x0
  LocalizationManager_o *text; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4CEDDD2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDDD2 = 1;
  }
  mainTextData = (UnityEngine_Object_o *)this->fields.mainTextData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mainTextData, 0, 0) )
  {
    v5 = this->fields.mainTextData;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    text = (LocalizationManager_o *)UnityEngine_TextAsset__get_text(v5, 0);
    LocalizationManager__SetTextData(text, (System_String_o *)text, v7);
  }
}


bool LocalizationManager__IsBusySetAssetData(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4CEDD9B & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDD9B = 1;
  }
  v1 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v1 = LocalizationManager_TypeInfo;
  }
  return v1->static_fields->isBusySetAssetData;
}


bool LocalizationManager__IsColorCode(System_String_o *tagText, const MethodInfo *method)
{
  int32_t stringLength; // w21
  System_String_o *v3; // x19
  int32_t v4; // w20
  unsigned int v5; // w8

  if ( tagText )
  {
    stringLength = tagText->fields._stringLength;
    v3 = tagText;
    if ( stringLength == 8 || stringLength == 6 )
    {
      v4 = 0;
      while ( 1 )
      {
        LOWORD(tagText) = System_String__get_Chars(v3, v4, 0);
        if ( (unsigned __int16)((_WORD)tagText - 48) >= 0xAu )
        {
          v5 = (unsigned __int16)tagText - 65;
          LOBYTE(tagText) = 0;
          if ( v5 > 0x25 || ((1LL << v5) & 0x3F0000003FLL) == 0 )
            break;
        }
        if ( stringLength == ++v4 )
        {
          LOBYTE(tagText) = 1;
          return (char)tagText;
        }
      }
    }
    else
    {
      LOBYTE(tagText) = 0;
    }
  }
  return (char)tagText;
}


bool LocalizationManager__IsGreyCode(System_String_o *tagText, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w20
  unsigned int v4; // w8

  if ( tagText )
  {
    v2 = tagText;
    if ( tagText->fields._stringLength == 2 )
    {
      v3 = 0;
      while ( 1 )
      {
        LOWORD(tagText) = System_String__get_Chars(v2, v3, 0);
        if ( (unsigned __int16)((_WORD)tagText - 48) >= 0xAu )
        {
          v4 = (unsigned __int16)tagText - 65;
          LOBYTE(tagText) = 0;
          if ( v4 > 0x25 || ((1LL << v4) & 0x3F0000003FLL) == 0 )
            break;
        }
        if ( ++v3 == 2 )
        {
          LOBYTE(tagText) = 1;
          return (char)tagText;
        }
      }
    }
    else
    {
      LOBYTE(tagText) = 0;
    }
  }
  return (char)tagText;
}


void LocalizationManager__LoadAssetData(const MethodInfo *method)
{
  __int64 v1; // x19
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_Object_o *v10; // x20
  LocalizationManager_c *v11; // x0
  AssetLoader_LoadEndDataHandler_o *v12; // x20

  if ( (byte_4CEDD9D & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
    sub_1C7BAE8(&Method_LocalizationManager___c__DisplayClass16_0__LoadAssetData_b__0__);
    sub_1C7BAE8(&LocalizationManager___c__DisplayClass16_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8508/*"Localization"*/);
    byte_4CEDD9D = 1;
  }
  v1 = sub_1C7BD34(LocalizationManager___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
  if ( !v1 )
    sub_1C7BD40(Instance, v3);
  *(_QWORD *)(v1 + 16) = Instance;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v1 + 16), (int32_t)Instance, v4, v5, v6, v7, v8, v9);
  v10 = *(UnityEngine_Object_o **)(v1 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
  {
    v11 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager_TypeInfo;
    }
    v11->static_fields->isBusySetAssetData = 1;
    v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v12,
      (Il2CppObject *)v1,
      Method_LocalizationManager___c__DisplayClass16_0__LoadAssetData_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_8508/*"Localization"*/, v12, 1, 0);
  }
}


System_String_o *LocalizationManager__ReplaceCommonTag(
        System_String_o *text,
        bool sealLimitCountCheck,
        const MethodInfo *method)
{
  int32_t stringLength; // w28
  int32_t v6; // w25
  System_Text_StringBuilder_o *v7; // x21
  int32_t v8; // w0
  int32_t v9; // w26
  void *Instance; // x0
  int v11; // w24
  __int64 v12; // x1
  int32_t v13; // w3
  System_String_o *v14; // x27
  __int64 v15; // x8
  char *v16; // x27
  int32_t v17; // w26
  Il2CppObject *v18; // x0
  ServantEntity_o *v19; // x25
  Il2CppObject *Master_object; // x27
  int32_t v21; // w1
  System_String_o *unknownNameText; // x1
  unsigned int v23; // w8
  System_String_o **v24; // x8
  bool v26; // [xsp+4h] [xbp-6Ch]
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEDDCF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23517/*"servantName "*/);
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CEDDCF = 1;
  }
  entity = 0;
  if ( !text )
    return text;
  stringLength = text->fields._stringLength;
  if ( !stringLength )
    return (System_String_o *)StringLiteral_1/*""*/;
  v26 = sealLimitCountCheck;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = System_String__IndexOf_64235320(text, (System_String_o *)StringLiteral_15862/*"["*/, v6, 0);
    if ( v8 < 0 )
      break;
    v9 = v8;
    Instance = (void *)System_String__IndexOf_64235320(text, (System_String_o *)StringLiteral_16114/*"]"*/, v8, 0);
    if ( ((unsigned int)Instance & 0x80000000) != 0 )
      break;
    v11 = (int)Instance;
    if ( !v7 )
    {
      v7 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_64254224(v7, stringLength + 32, 0);
    }
    v12 = (unsigned int)(v9 + 1);
    if ( v11 == (_DWORD)v12 )
    {
      if ( !v7 )
        goto LABEL_71;
      v13 = v11 - v6;
LABEL_47:
      System_Text_StringBuilder__Append_64261188(v7, text, v6, v13, 0);
      goto LABEL_63;
    }
    Instance = System_String__Substring_64222852(text, v12, v11 + ~v9, 0);
    if ( !Instance )
      goto LABEL_71;
    v14 = (System_String_o *)Instance;
    Instance = (void *)System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_23517/*"servantName "*/, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v7 )
        goto LABEL_71;
      v13 = v11 - v6 + 1;
      goto LABEL_47;
    }
    if ( v9 > v6 )
    {
      if ( !v7 )
        goto LABEL_71;
      System_Text_StringBuilder__Append_64261188(v7, text, v6, v9 - v6, 0);
    }
    Instance = System_String__Substring(v14, 12, 0);
    if ( !Instance )
      goto LABEL_71;
    Instance = System_String__Split((System_String_o *)Instance, 0x3Au, 0, 0);
    if ( !Instance )
      goto LABEL_71;
    v15 = *((_QWORD *)Instance + 3);
    v16 = (char *)Instance;
    if ( !v15 )
      goto LABEL_48;
    if ( !(_DWORD)v15 )
      goto LABEL_72;
    v17 = System_Int32__Parse(*((System_String_o **)Instance + 4), 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_71;
    v18 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            v17,
            (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( v18 )
    {
      v19 = (ServantEntity_o *)v18;
      if ( *((int *)v16 + 6) >= 3 )
      {
        Instance = (void *)ServantEntity__IsNameTrue((ServantEntity_o *)v18, 0);
        v23 = *((_DWORD *)v16 + 6);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v23 <= 2 )
            goto LABEL_72;
          v24 = (System_String_o **)(v16 + 48);
        }
        else
        {
          if ( v23 <= 1 )
LABEL_72:
            sub_1C7BD48(Instance);
          v24 = (System_String_o **)(v16 + 40);
        }
        if ( !v7 )
LABEL_71:
          sub_1C7BD40(Instance, v12);
        unknownNameText = *v24;
      }
      else
      {
        if ( !v26 )
          goto LABEL_55;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CE827C )
        {
          sub_1C7BAE8(&NetworkManager_TypeInfo);
          byte_4CE827C = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        if ( !Master_object )
          goto LABEL_71;
        if ( UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)Master_object,
               &entity,
               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
               v17,
               0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !entity )
            goto LABEL_71;
          if ( !Instance )
            goto LABEL_71;
          Instance = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                               (ServantLimitImageMaster_o *)Instance,
                               v17,
                               entity->fields.maxLimitCount,
                               0);
          if ( !entity )
            goto LABEL_71;
          if ( (_DWORD)Instance == entity->fields.maxLimitCount )
            v21 = -1;
          else
            v21 = (int)Instance;
        }
        else
        {
LABEL_55:
          v21 = -1;
        }
        Instance = ServantEntity__getName(v19, v21, -1, 0, 0);
        if ( !v7 )
          goto LABEL_71;
        unknownNameText = (System_String_o *)Instance;
      }
    }
    else
    {
LABEL_48:
      Instance = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !v7 )
        goto LABEL_71;
      unknownNameText = LocalizationManager_TypeInfo->static_fields->unknownNameText;
    }
    System_Text_StringBuilder__Append_64260872(v7, unknownNameText, 0);
LABEL_63:
    v6 = v11 + 1;
    if ( v11 + 1 >= stringLength )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                                  v7,
                                  v7->klass->vtable._3_ToString.method);
  }
  if ( v7 )
  {
    if ( stringLength > v6 )
      System_Text_StringBuilder__Append_64261188(v7, text, v6, stringLength - v6, 0);
    return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                                v7,
                                v7->klass->vtable._3_ToString.method);
  }
  return text;
}


System_String_o *LocalizationManager__ReplaceNameTag(
        System_String_o *text,
        bool isUseColorTag,
        const MethodInfo *method)
{
  int32_t stringLength; // w28
  int32_t v6; // w25
  System_Text_StringBuilder_o *v7; // x21
  int32_t v8; // w0
  int32_t v9; // w27
  int32_t v10; // w0
  int v11; // w23
  int32_t v12; // w26
  int32_t v13; // w24
  System_String_o *appended; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w3
  System_Text_StringBuilder_o *v17; // x0
  System_String_o *v18; // x1
  int32_t v19; // w2
  int v20; // w27
  System_String_o *v21; // x25
  System_String_c *klass; // x8
  System_String_o *monitor; // x1
  System_String_o *v24; // x25
  System_String_o *v25; // x26
  __int64 *v26; // x8
  System_String_o *v27; // x26
  System_String_o *v28; // x26
  System_String_o *v29; // x0
  bool v31; // [xsp+Ch] [xbp-64h]

  if ( (byte_4CEDDD0 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_370/*"#"*/);
    sub_1C7BAE8(&StringLiteral_22554/*"o"*/);
    sub_1C7BAE8(&StringLiteral_15881/*"[-]"*/);
    sub_1C7BAE8(&StringLiteral_20255/*"i"*/);
    sub_1C7BAE8(&StringLiteral_19879/*"g"*/);
    sub_1C7BAE8(&StringLiteral_859/*"-"*/);
    sub_1C7BAE8(&StringLiteral_17049/*"b"*/);
    sub_1C7BAE8(&StringLiteral_1104/*"/sub"*/);
    sub_1C7BAE8(&StringLiteral_1101/*"/o"*/);
    sub_1C7BAE8(&StringLiteral_1108/*"/u"*/);
    sub_1C7BAE8(&StringLiteral_479/*"%"*/);
    sub_1C7BAE8(&StringLiteral_16141/*"^"*/);
    sub_1C7BAE8(&StringLiteral_1088/*"/b"*/);
    sub_1C7BAE8(&StringLiteral_501/*"&"*/);
    sub_1C7BAE8(&StringLiteral_24076/*"sup"*/);
    sub_1C7BAE8(&StringLiteral_25515/*"~"*/);
    sub_1C7BAE8(&StringLiteral_23139/*"r"*/);
    sub_1C7BAE8(&StringLiteral_21438/*"line"*/);
    sub_1C7BAE8(&StringLiteral_1105/*"/sup"*/);
    sub_1C7BAE8(&StringLiteral_1103/*"/s"*/);
    sub_1C7BAE8(&StringLiteral_20453/*"image"*/);
    sub_1C7BAE8(&StringLiteral_1096/*"/g"*/);
    sub_1C7BAE8(&StringLiteral_23986/*"sub"*/);
    sub_1C7BAE8(&StringLiteral_24500/*"u"*/);
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_23399/*"s"*/);
    sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CEDDD0 = 1;
  }
  if ( !text )
    return text;
  stringLength = text->fields._stringLength;
  if ( !stringLength )
    return (System_String_o *)StringLiteral_1/*""*/;
  v31 = isUseColorTag;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = System_String__IndexOf_64235320(text, (System_String_o *)StringLiteral_15862/*"["*/, v6, 0);
    if ( v8 < 0 )
      break;
    v9 = v8;
    if ( v8 + 1 >= stringLength )
      break;
    v10 = System_String__IndexOf_64235320(text, (System_String_o *)StringLiteral_16114/*"]"*/, v8 + 1, 0);
    if ( v10 < 0 )
      break;
    v11 = v10;
    do
    {
      v12 = v9 + 1;
      v13 = v9;
      appended = (System_String_o *)System_String__IndexOf_64235320(
                                      text,
                                      (System_String_o *)StringLiteral_15862/*"["*/,
                                      v9 + 1,
                                      0);
      if ( ((unsigned int)appended & 0x80000000) != 0 )
        break;
      v9 = (int)appended;
    }
    while ( (int)appended <= v11 );
    if ( v12 >= stringLength )
      break;
    if ( !v7 )
    {
      v7 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_64254224(v7, stringLength + 32, 0);
    }
    if ( v11 != v12 )
    {
      if ( v13 > v6 )
      {
        if ( !v7 )
          goto LABEL_110;
        System_Text_StringBuilder__Append_64261188(v7, text, v6, v13 - v6, 0);
      }
      v20 = v11 - v13;
      appended = System_String__Substring_64222852(text, v12, v11 - v13 - 1, 0);
      if ( !appended )
        goto LABEL_110;
      v21 = appended;
      appended = (System_String_o *)System_String__StartsWith(appended, (System_String_o *)StringLiteral_370/*"#"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
      {
        if ( v20 - 2 < 1 )
          goto LABEL_19;
        appended = System_String__Substring_64222852(text, v13 + 2, v20 - 2, 0);
        if ( !appended )
          goto LABEL_110;
        appended = (System_String_o *)System_String__Split(appended, 0x3Au, 0, 0);
        if ( !appended )
          goto LABEL_19;
        klass = appended[1].klass;
        if ( !klass )
          goto LABEL_19;
        if ( !(_DWORD)klass )
          goto LABEL_111;
        if ( !v7 )
          goto LABEL_110;
        monitor = (System_String_o *)appended[1].monitor;
LABEL_33:
        appended = (System_String_o *)System_Text_StringBuilder__Append_64260872(v7, monitor, 0);
        goto LABEL_19;
      }
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_501/*"&"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_16141/*"^"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_25515/*"~"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_479/*"%"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_21438/*"line"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__Split(v21, 0x20u, 0, 0);
      if ( !appended )
        goto LABEL_110;
      v24 = appended;
      if ( !LODWORD(appended[1].klass) )
        goto LABEL_111;
      v25 = (System_String_o *)appended[1].monitor;
      appended = (System_String_o *)PrivateImplementationDetails___ComputeStringHash(v25, 0);
      if ( (unsigned int)appended > 0xB35135FA )
      {
        if ( (unsigned int)appended > 0xE70C2DE5 )
        {
          if ( (unsigned int)appended > 0xEC0C35C4 )
          {
            switch ( (_DWORD)appended )
            {
              case 0xF00C3C10:
                v26 = &StringLiteral_24500/*"u"*/;
                goto LABEL_87;
              case 0xF60C4582:
                v26 = &StringLiteral_23399/*"s"*/;
                goto LABEL_87;
              case 0xF70C4715:
                v26 = &StringLiteral_23139/*"r"*/;
                goto LABEL_87;
            }
          }
          else
          {
            if ( (_DWORD)appended == -368299362 )
            {
              v26 = &StringLiteral_22554/*"o"*/;
              goto LABEL_87;
            }
            if ( (_DWORD)appended == -334744124 )
            {
              v26 = &StringLiteral_20255/*"i"*/;
              goto LABEL_87;
            }
          }
        }
        else if ( (unsigned int)appended > 0xDC4E3915 )
        {
          if ( (_DWORD)appended == -502520314 )
          {
            v26 = &StringLiteral_19879/*"g"*/;
            goto LABEL_87;
          }
          if ( (_DWORD)appended == -418632219 )
          {
            v26 = &StringLiteral_17049/*"b"*/;
            goto LABEL_87;
          }
        }
        else
        {
          if ( (_DWORD)appended == -900850497 )
          {
            v26 = &StringLiteral_24076/*"sup"*/;
            goto LABEL_87;
          }
          if ( (_DWORD)appended == -598853355 )
          {
            v26 = &StringLiteral_23986/*"sub"*/;
            goto LABEL_87;
          }
        }
      }
      else if ( (unsigned int)appended > 0x5ED1FBD7 )
      {
        if ( (unsigned int)appended > 0x695019C2 )
        {
          switch ( (_DWORD)appended )
          {
            case 0xB35135FA:
              v26 = &StringLiteral_20453/*"image"*/;
              goto LABEL_87;
            case 0x6AD20EBB:
              v26 = &StringLiteral_1096/*"/g"*/;
              goto LABEL_87;
            case 0x6DD21374:
              v26 = &StringLiteral_1088/*"/b"*/;
              goto LABEL_87;
          }
        }
        else
        {
          if ( (_DWORD)appended == 1657930275 )
          {
            v26 = &StringLiteral_1101/*"/o"*/;
            goto LABEL_87;
          }
          if ( (_DWORD)appended == 1766857154 )
          {
            v26 = &StringLiteral_1105/*"/sup"*/;
            goto LABEL_87;
          }
        }
      }
      else if ( (unsigned int)appended > 0x574FFD6C )
      {
        if ( (_DWORD)appended == 1557264561 )
        {
          v26 = &StringLiteral_1108/*"/u"*/;
          goto LABEL_87;
        }
        if ( (_DWORD)appended == 1590819799 )
        {
          v26 = &StringLiteral_1103/*"/s"*/;
          goto LABEL_87;
        }
      }
      else if ( (_DWORD)appended == 671913016 )
      {
        appended = (System_String_o *)System_String__op_Equality(v25, (System_String_o *)StringLiteral_859/*"-"*/, 0);
        if ( ((unsigned __int8)appended & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_19;
          if ( !v7 )
            goto LABEL_110;
          monitor = (System_String_o *)StringLiteral_15881/*"[-]"*/;
          goto LABEL_33;
        }
      }
      else if ( (_DWORD)appended == 1464860012 )
      {
        v26 = &StringLiteral_1104/*"/sub"*/;
LABEL_87:
        appended = (System_String_o *)System_String__op_Equality(v25, (System_String_o *)*v26, 0);
        if ( ((unsigned __int8)appended & 1) != 0 )
          goto LABEL_19;
      }
      if ( LODWORD(v24[1].klass) == 1 )
      {
        v27 = (System_String_o *)v24[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        appended = (System_String_o *)LocalizationManager__IsGreyCode(v27, v15);
        if ( ((unsigned __int8)appended & 1) != 0 )
          goto LABEL_19;
        if ( !LODWORD(v24[1].klass) )
          goto LABEL_111;
        v28 = (System_String_o *)v24[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        appended = (System_String_o *)LocalizationManager__IsColorCode(v28, v15);
        if ( ((unsigned __int8)appended & 1) != 0 )
        {
          if ( v31 )
          {
            if ( !v7 )
              goto LABEL_110;
            appended = (System_String_o *)System_Text_StringBuilder__Append_64263200(v7, 0x5Bu, 0);
            if ( !LODWORD(v24[1].klass) )
LABEL_111:
              sub_1C7BD48(appended);
            appended = (System_String_o *)v24[1].monitor;
            if ( !appended )
              goto LABEL_110;
            v29 = System_String__Substring_64222852(appended, 0, 6, 0);
            System_Text_StringBuilder__Append_64260872(v7, v29, 0);
            appended = (System_String_o *)System_Text_StringBuilder__Append_64263200(v7, 0x5Du, 0);
          }
          goto LABEL_19;
        }
      }
      if ( !v7 )
        goto LABEL_110;
      v16 = v20 + 1;
      v17 = v7;
      v18 = text;
      v19 = v13;
      goto LABEL_18;
    }
    if ( !v7 )
      goto LABEL_110;
    v16 = v11 - v6;
    v17 = v7;
    v18 = text;
    v19 = v6;
LABEL_18:
    appended = (System_String_o *)System_Text_StringBuilder__Append_64261188(v17, v18, v19, v16, 0);
LABEL_19:
    v6 = v11 + 1;
    if ( v11 + 1 >= stringLength )
    {
      if ( !v7 )
LABEL_110:
        sub_1C7BD40(appended, v15);
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                                  v7,
                                  v7->klass->vtable._3_ToString.method);
    }
  }
  if ( !v7 )
    return text;
  if ( stringLength > v6 )
    System_Text_StringBuilder__Append_64261188(v7, text, v6, stringLength - v6, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                              v7,
                              v7->klass->vtable._3_ToString.method);
}


void LocalizationManager__SetTextData(
        LocalizationManager_o *this,
        System_String_o *text_data,
        const MethodInfo *method)
{
  System_Array_o *v4; // x0
  System_RuntimeFieldHandle_o v5; // x1
  System_Char_array *v6; // x20
  System_String_o *appended; // x0
  __int64 v8; // x1
  System_String_array *v9; // x0
  int32_t stringLength; // w21
  System_String_array *v11; // x20
  System_Text_StringBuilder_o *v12; // x19
  int max_length; // w8
  unsigned int v14; // w22
  Il2CppClass **v15; // x8
  System_String_o *v16; // x21
  System_String_o *v17; // x1
  System_Text_StringBuilder_o *v18; // x0
  System_String_o *v19; // x19
  __int64 v20; // x1
  LocalizationManager_c *v21; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x21
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  LocalizationManager_c *v26; // x0
  Il2CppObject *Item; // x0
  struct LocalizationManager_StaticFields *static_fields; // x8
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  Il2CppObject *v35; // x0
  struct LocalizationManager_StaticFields *v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  Il2CppObject *v43; // x0
  struct LocalizationManager_StaticFields *v44; // x8
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  Il2CppObject *v51; // x0
  struct LocalizationManager_StaticFields *v52; // x8
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct LocalizationManager_StaticFields *v59; // x8
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  LocalizationManager_c *v66; // x0
  struct LocalizationManager_StaticFields *v67; // x8
  int32_t v68; // w1
  LocalizationManager_c *v69; // x0
  Il2CppObject *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  Il2CppObject *v77; // x0
  struct LocalizationManager_StaticFields *v78; // x8
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  Il2CppObject *v85; // x0
  struct LocalizationManager_StaticFields *v86; // x8
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  LocalizationManager_c *v93; // x0
  bool v94; // w0
  LocalizationManager_c *v95; // x8
  uint32_t cctor_finished; // w9
  Il2CppObject *v97; // x0
  Il2CppObject *v98; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v104; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v105; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4CEDDD3 & 1) == 0 )
  {
    sub_1C7BAE8(&char___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_1C7BAE8(&StringLiteral_8233/*"KINSOKU_SEPARATION_STR"*/);
    sub_1C7BAE8(&StringLiteral_1045/*"//"*/);
    sub_1C7BAE8(&StringLiteral_9315/*"NORMAL_EFFECT_COLOR"*/);
    sub_1C7BAE8(&StringLiteral_8234/*"KINSOKU_TOP_STR"*/);
    sub_1C7BAE8(&StringLiteral_8216/*"KANNSUUJI_100"*/);
    sub_1C7BAE8(&StringLiteral_11575/*"SELECT_EFFECT_COLOR"*/);
    sub_1C7BAE8(&StringLiteral_8215/*"KANNSUUJI_10"*/);
    sub_1C7BAE8(&StringLiteral_9350/*"NO_ENTRY_NAME"*/);
    sub_1C7BAE8(&StringLiteral_8232/*"KINSOKU_LAST_STR"*/);
    sub_1C7BAE8(&StringLiteral_14885/*"UNKNOWN_NAME"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_8214/*"KANNSUUJI_1"*/);
    byte_4CEDDD3 = 1;
  }
  memset(&v105, 0, sizeof(v105));
  v4 = (System_Array_o *)sub_1C7BB90(char___TypeInfo, 5);
  v5.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v6 = (System_Char_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64876136(v4, v5, 0);
  if ( !text_data )
    goto LABEL_63;
  v9 = System_String__Split_64226120(text_data, v6, 1, 0);
  stringLength = text_data->fields._stringLength;
  v11 = v9;
  v12 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64254224(v12, stringLength, 0);
  if ( !v11 )
    goto LABEL_63;
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C7BD48(appended);
      v15 = &v11->obj.klass + (int)v14;
      v16 = (System_String_o *)v15[4];
      if ( !v16 )
        goto LABEL_63;
      appended = (System_String_o *)System_String__IndexOf_64235304(
                                      (System_String_o *)v15[4],
                                      (System_String_o *)StringLiteral_1045/*"//"*/,
                                      0);
      if ( ((unsigned int)appended & 0x80000000) != 0 )
        break;
      if ( (_DWORD)appended )
      {
        appended = System_String__Substring_64222852(v16, 0, (int)appended - 1, 0);
        if ( !v12 )
          goto LABEL_63;
        v17 = appended;
        v18 = v12;
LABEL_15:
        appended = (System_String_o *)System_Text_StringBuilder__Append_64260872(v18, v17, 0);
        if ( !appended )
          goto LABEL_63;
        appended = (System_String_o *)System_Text_StringBuilder__Append_64263200(
                                        (System_Text_StringBuilder_o *)appended,
                                        0xAu,
                                        0);
      }
      max_length = v11->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_18;
    }
    if ( !v12 )
      goto LABEL_63;
    v18 = v12;
    v17 = v16;
    goto LABEL_15;
  }
LABEL_18:
  if ( !v12 )
    goto LABEL_63;
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                             v12,
                             v12->klass->vtable._3_ToString.method);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  appended = (System_String_o *)JsonManager__getDictionary(v19, 0);
  if ( !appended )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v104,
    (System_Collections_Generic_Dictionary_object__object__o *)appended,
    (const MethodInfo_34F28BC *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v105 = v104;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v105,
            (const MethodInfo_35F10F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
  {
    v21 = LocalizationManager_TypeInfo;
    current = v105.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager_TypeInfo;
    }
    if ( !current.fields.value )
      sub_1C7BD40(v21, v20);
    lookup = (System_Collections_Generic_Dictionary_object__object__o *)v21->static_fields->lookup;
    v24 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
                            current.fields.value,
                            current.fields.value->klass->vtable[3].method);
    if ( !lookup )
      sub_1C7BD40(v24, v25);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      lookup,
      current.fields.key,
      v24,
      (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v105,
    (const MethodInfo_35F1210 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  v26 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v26->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)appended,
           (Il2CppObject *)StringLiteral_14885/*"UNKNOWN_NAME"*/,
           (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  static_fields = LocalizationManager_TypeInfo->static_fields;
  static_fields->unknownNameText = (struct System_String_o *)Item;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->unknownNameText,
    (int32_t)Item,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v35 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_9350/*"NO_ENTRY_NAME"*/,
          (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v36 = LocalizationManager_TypeInfo->static_fields;
  v36->noEntryNameText = (struct System_String_o *)v35;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v36->noEntryNameText, (int32_t)v35, v37, v38, v39, v40, v41, v42);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v43 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_8234/*"KINSOKU_TOP_STR"*/,
          (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v44 = LocalizationManager_TypeInfo->static_fields;
  v44->kinsokuTopString = (struct System_String_o *)v43;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v44->kinsokuTopString, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v51 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_8232/*"KINSOKU_LAST_STR"*/,
          (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v52 = LocalizationManager_TypeInfo->static_fields;
  v52->kinsokuLastString = (struct System_String_o *)v51;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v52->kinsokuLastString, (int32_t)v51, v53, v54, v55, v56, v57, v58);
  v59 = LocalizationManager_TypeInfo->static_fields;
  appended = (System_String_o *)v59->lookup;
  if ( !appended )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)appended,
    (Il2CppObject *)StringLiteral_8233/*"KINSOKU_SEPARATION_STR"*/,
    (Il2CppObject **)&v59->kinsokuSeparationString,
    (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
  v66 = LocalizationManager_TypeInfo;
  v67 = LocalizationManager_TypeInfo->static_fields;
  if ( !v67->kinsokuSeparationString )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v67 = LocalizationManager_TypeInfo->static_fields;
    }
    v68 = StringLiteral_1/*""*/;
    v67->kinsokuSeparationString = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v67->kinsokuSeparationString, v68, v60, v61, v62, v63, v64, v65);
    v66 = LocalizationManager_TypeInfo;
  }
  if ( !v66->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v66);
    v66 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v66->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)appended,
         (Il2CppObject *)StringLiteral_8214/*"KANNSUUJI_1"*/,
         (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v69 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v69 = LocalizationManager_TypeInfo;
    }
    appended = (System_String_o *)v69->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v70 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8214/*"KANNSUUJI_1"*/,
            (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    LocalizationManager_TypeInfo->static_fields->lowNumberString = (struct System_String_o *)v70;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)LocalizationManager_TypeInfo->static_fields,
      (int32_t)v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
    appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v77 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8215/*"KANNSUUJI_10"*/,
            (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v78 = LocalizationManager_TypeInfo->static_fields;
    v78->hiNumberString = (struct System_String_o *)v77;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v78->hiNumberString, (int32_t)v77, v79, v80, v81, v82, v83, v84);
    appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v85 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8216/*"KANNSUUJI_100"*/,
            (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v86 = LocalizationManager_TypeInfo->static_fields;
    v86->hi2NumberString = (struct System_String_o *)v85;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v86->hi2NumberString, (int32_t)v85, v87, v88, v89, v90, v91, v92);
  }
  v93 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v93 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v93->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v94 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_9315/*"NORMAL_EFFECT_COLOR"*/,
          (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  v95 = LocalizationManager_TypeInfo;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( v94 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v95 = LocalizationManager_TypeInfo;
    }
    appended = (System_String_o *)v95->static_fields->lookup;
    if ( appended )
    {
      v97 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)appended,
              (Il2CppObject *)StringLiteral_9315/*"NORMAL_EFFECT_COLOR"*/,
              (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_ColorUtility__TryParseHtmlString(
        (System_String_o *)v97,
        &LocalizationManager_TypeInfo->static_fields->normalEffectColor,
        0);
      appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
      if ( appended )
      {
        v98 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)appended,
                (Il2CppObject *)StringLiteral_11575/*"SELECT_EFFECT_COLOR"*/,
                (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)v98,
          &LocalizationManager_TypeInfo->static_fields->selectEffectColor,
          0);
        return;
      }
    }
LABEL_63:
    sub_1C7BD40(appended, v8);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v95 = LocalizationManager_TypeInfo;
  }
  __asm { FMOV            V0.4S, #1.0 }
  v95->static_fields->selectEffectColor = _Q0;
  v95->static_fields->normalEffectColor = _Q0;
}


bool LocalizationManager__TryGet(
        System_String_o **resultText,
        System_String_o *key,
        System_String_o *defaultText,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool v14; // w22
  LocalizationManager_c *v15; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_4CEDDA6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDDA6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__ContainsKey(key, (const MethodInfo *)key);
  if ( v14 )
  {
    v15 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager_TypeInfo;
    }
    lookup = (System_Collections_Generic_Dictionary_object__object__o *)v15->static_fields->lookup;
    if ( !lookup )
      sub_1C7BD40(0, v7);
    defaultText = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       lookup,
                                       (Il2CppObject *)key,
                                       (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  *resultText = defaultText;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)resultText, (int32_t)defaultText, v8, v9, v10, v11, v12, v13);
  return v14;
}


void LocalizationManager___c__DisplayClass16_0___ctor(
        LocalizationManager___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LocalizationManager___c__DisplayClass16_0___LoadAssetData_b__0(
        LocalizationManager___c__DisplayClass16_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  LocalizationManager___c__DisplayClass16_0_o *v4; // x19
  const MethodInfo *v5; // x2
  LocalizationManager_c *v6; // x0

  v4 = this;
  if ( (byte_4CEDDD6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_TextAsset___);
    this = (LocalizationManager___c__DisplayClass16_0_o *)sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEDDD6 = 1;
  }
  if ( !assetData
    || (this = (LocalizationManager___c__DisplayClass16_0_o *)AssetData__GetObject_object_(
                                                                assetData,
                                                                (const MethodInfo_3151490 *)Method_AssetData_GetObject_TextAsset___)) == 0
    || (this = (LocalizationManager___c__DisplayClass16_0_o *)UnityEngine_TextAsset__get_text(
                                                                (UnityEngine_TextAsset_o *)this,
                                                                0),
        !v4->fields.ins) )
  {
    sub_1C7BD40(this, assetData);
  }
  LocalizationManager__SetTextData((LocalizationManager_o *)this, (System_String_o *)this, v5);
  v6 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager_TypeInfo;
  }
  v6->static_fields->isBusySetAssetData = 0;
}