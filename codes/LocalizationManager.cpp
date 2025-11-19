void LocalizationManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v1; // x19
  struct LocalizationManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  System_Func_object__bool__o *v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Func_object__object__o *v8; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct NguiLocalizationManager_StaticFields *v11; // x0

  if ( (byte_4CB59B7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C6BA08(&System_Func_string__string__TypeInfo);
    sub_1C6BA08(&System_Func_string__bool__TypeInfo);
    sub_1C6BA08(&Method_LocalizationManager_ContainsKey__);
    sub_1C6BA08(&Method_LocalizationManager_Get__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59B7 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  static_fields = LocalizationManager_TypeInfo->static_fields;
  static_fields->lookup = (struct System_Collections_Generic_Dictionary_string__string__o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->lookup, (int32_t)v1, v3, v4);
  v5 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(v5, 0, Method_LocalizationManager_ContainsKey__, 0);
  if ( !byte_4CB5A3E )
  {
    sub_1C6BA08(&NguiLocalizationManager_TypeInfo);
    byte_4CB5A3E = 1;
  }
  NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc = (struct System_Func_string__bool__o *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)NguiLocalizationManager_TypeInfo->static_fields, (int32_t)v5, v6, v7);
  v8 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_string__string__TypeInfo);
  System_Func_object__object____ctor(v8, 0, Method_LocalizationManager_Get__, 0);
  if ( !byte_4CB5A3F )
  {
    sub_1C6BA08(&NguiLocalizationManager_TypeInfo);
    byte_4CB5A3F = 1;
  }
  v11 = NguiLocalizationManager_TypeInfo->static_fields;
  v11->getFunc = (struct System_Func_string__string__o *)v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->getFunc, (int32_t)v8, v9, v10);
}


void LocalizationManager___ctor(LocalizationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CB59F2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_LocalizationManager___ctor__);
    byte_4CB59F2 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A4F89C *)Method_SingletonMonoBehaviour_LocalizationManager___ctor__);
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

  if ( (byte_4CB59EE & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    byte_4CB59EE = 1;
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
      return System_String__Substring_64012732((System_String_o *)lowNumberString, v3, 1, 0);
LABEL_38:
    sub_1C6BC60(lowNumberString, method);
  }
  v7 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64044104(v7, 10, 0);
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
      lowNumberString = System_String__Substring_64012732((System_String_o *)lowNumberString, v8, 1, 0);
      if ( !v7 )
        goto LABEL_38;
      System_Text_StringBuilder__Append_64050752(v7, (System_String_o *)lowNumberString, 0);
    }
    lowNumberString = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !v7 )
      goto LABEL_38;
    System_Text_StringBuilder__Append_64050752(v7, LocalizationManager_TypeInfo->static_fields->hi2NumberString, 0);
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
    lowNumberString = System_String__Substring_64012732((System_String_o *)lowNumberString, v13, 1, 0);
    if ( !v7 )
      goto LABEL_38;
    System_Text_StringBuilder__Append_64050752(v7, (System_String_o *)lowNumberString, 0);
    lowNumberString = LocalizationManager_TypeInfo->static_fields->hiNumberString;
    if ( !lowNumberString )
      goto LABEL_38;
    lowNumberString = System_String__Substring_64012732((System_String_o *)lowNumberString, 0, 1, 0);
  }
  else
  {
    lowNumberString = static_fields->hiNumberString;
    if ( !lowNumberString )
      goto LABEL_38;
    lowNumberString = System_String__Substring_64012732((System_String_o *)lowNumberString, v13, 1, 0);
    if ( !v7 )
      goto LABEL_38;
  }
  System_Text_StringBuilder__Append_64050752(v7, (System_String_o *)lowNumberString, 0);
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
    v15 = System_String__Substring_64012732((System_String_o *)lowNumberString, v3, 1, 0);
    System_Text_StringBuilder__Append_64050752(v7, v15, 0);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                              v7,
                              v7->klass->vtable._3_ToString.method);
}


bool LocalizationManager__ContainsKey(System_String_o *key, const MethodInfo *method)
{
  LocalizationManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_4CB59C4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59C4 = 1;
  }
  v3 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = LocalizationManager_TypeInfo;
  }
  lookup = (System_Collections_Generic_Dictionary_object__object__o *)v3->static_fields->lookup;
  if ( !lookup )
    sub_1C6BC60(0, method);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           lookup,
           (Il2CppObject *)key,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
}


System_String_o *LocalizationManager__ConvertNumberToRomaNumber(int32_t number, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *v5; // x19
  int32_t v7; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB59F1 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11160/*"ROMAN_NUMBER_{0}"*/);
    byte_4CB59F1 = 1;
  }
  v7 = number;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_11160/*"ROMAN_NUMBER_{0}"*/, v3, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v5, v4);
}


System_String_o *LocalizationManager__Get(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  LocalizationManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_4CB59C2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59C2 = 1;
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
    sub_1C6BC60(0, v3);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              lookup,
                              (Il2CppObject *)key,
                              (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


System_String_o *LocalizationManager__GetAttackIconInfo(int32_t atk, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB59E7 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2038/*"ATTACK_ICON_INFO"*/);
    byte_4CB59E7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2038/*"ATTACK_ICON_INFO"*/, method);
  v6 = atk;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetAttackInfo(int32_t atk, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB59E6 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2039/*"ATTACK_INFO"*/);
    byte_4CB59E6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2039/*"ATTACK_INFO"*/, method);
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

  if ( (byte_4CB59C6 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_13394/*"TIME_BEFORE_MINUTES"*/);
    sub_1C6BA08(&StringLiteral_13392/*"TIME_BEFORE_DAYS"*/);
    sub_1C6BA08(&StringLiteral_13393/*"TIME_BEFORE_HOURS"*/);
    sub_1C6BA08(&StringLiteral_13395/*"TIME_BEFORE_OVER_YEARS"*/);
    byte_4CB59C6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = NetworkManager__getTime(0) - at;
  if ( v4 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13394/*"TIME_BEFORE_MINUTES"*/, v3);
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
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13394/*"TIME_BEFORE_MINUTES"*/, v3);
      v12 = v8;
    }
    else
    {
      if ( v4 <= 86399 )
      {
        v9 = v4 / 0xE10uLL;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = (System_String_o *)StringLiteral_13393/*"TIME_BEFORE_HOURS"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v4 > 31535999 )
          return LocalizationManager__Get((System_String_o *)StringLiteral_13395/*"TIME_BEFORE_OVER_YEARS"*/, v3);
        v10 = (System_String_o *)StringLiteral_13392/*"TIME_BEFORE_DAYS"*/;
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

  if ( (byte_4CB59E3 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3850/*"COST_ICON_INFO"*/);
    byte_4CB59E3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3850/*"COST_ICON_INFO"*/, method);
  v6 = cost;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetCostInfo(int32_t cost, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB59E2 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3851/*"COST_INFO"*/);
    byte_4CB59E2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3851/*"COST_INFO"*/, method);
  v6 = cost;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetCountInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB59D8 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3852/*"COUNT_INFO"*/);
    byte_4CB59D8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3852/*"COUNT_INFO"*/, method);
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

  if ( (byte_4CB59D1 & 1) == 0 )
  {
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_25198/*"{0:D}/{1:D2}/{2:D2}"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB59D1 = 1;
  }
  if ( time < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41600872(time, 0).fields._dateData;
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
  return System_String__Format_64008168((System_String_o *)StringLiteral_25198/*"{0:D}/{1:D2}/{2:D2}"*/, v4, v6, v8, 0);
}


System_String_o *LocalizationManager__GetDateTime(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x19
  System_DateTime_o v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x20
  System_DateTime_o v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x20
  System_DateTime_o v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x20
  System_DateTime_o v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x20
  System_DateTime_o v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x20
  __int64 v27; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4CB59D3 & 1) == 0 )
  {
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_25199/*"{0:D}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_4CB59D3 = 1;
  }
  if ( time >= 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_41600872(time, 0).fields._dateData;
    v3 = sub_1C6BAB0(object___TypeInfo, 5);
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v4.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v4, 0);
    v5 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
    if ( !v3 )
      sub_1C6BC60(v5, v6);
    v9 = v5;
    if ( !v5 || (v5 = sub_1C6BB44(v5, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v3 + 24) )
        goto LABEL_27;
      *(_QWORD *)(v3 + 32) = v9;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), v9, v7, v8);
      v10.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v10, 0);
      v5 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
      v13 = v5;
      if ( !v5 || (v5 = sub_1C6BB44(v5, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v3 + 24) <= 1u )
          goto LABEL_27;
        *(_QWORD *)(v3 + 40) = v13;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 40), v13, v11, v12);
        v14.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v14, 0);
        v5 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
        v17 = v5;
        if ( !v5 || (v5 = sub_1C6BB44(v5, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v3 + 24) <= 2u )
            goto LABEL_27;
          *(_QWORD *)(v3 + 48) = v17;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 48), v17, v15, v16);
          v18.fields._dateData = (uint64_t)&dateData;
          Hour = System_DateTime__get_Hour(v18, 0);
          v5 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
          v21 = v5;
          if ( !v5 || (v5 = sub_1C6BB44(v5, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v3 + 24) <= 3u )
              goto LABEL_27;
            *(_QWORD *)(v3 + 56) = v21;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 56), v21, v19, v20);
            v22.fields._dateData = (uint64_t)&dateData;
            Minute = System_DateTime__get_Minute(v22, 0);
            v5 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
            v25 = v5;
            if ( !v5 || (v5 = sub_1C6BB44(v5, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v3 + 24) > 4u )
              {
                *(_QWORD *)(v3 + 64) = v25;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 64), v25, v23, v24);
                return System_String__Format_64008236(
                         (System_String_o *)StringLiteral_25199/*"{0:D}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/,
                         (System_Object_array *)v3,
                         0);
              }
LABEL_27:
              sub_1C6BC68(v5);
            }
          }
        }
      }
    }
    v27 = sub_1C6BC84(v5);
    sub_1C6BB30(v27, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *LocalizationManager__GetDateTimeDayOfWeek(int64_t time, const MethodInfo *method)
{
  System_IFormatProvider_o *CultureInfo_65176300; // x20
  __int64 v4; // x19
  System_DateTime_o v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x21
  System_DateTime_o v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *v14; // x21
  System_DateTime_o v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x21
  System_DateTime_o v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *v22; // x20
  System_DateTime_o v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_o *v26; // x20
  System_DateTime_o v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *v30; // x20
  __int64 v32; // x0
  int32_t Minute; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-48h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Month; // [xsp+10h] [xbp-40h] BYREF
  int32_t Year; // [xsp+14h] [xbp-3Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CB59D4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&StringLiteral_25200/*"{0:D}/{1:D2}/{2:D2}({3}) {4:D2}:{5:D2}"*/);
    sub_1C6BA08(&StringLiteral_21120/*"ja-JP"*/);
    sub_1C6BA08(&StringLiteral_18528/*"ddd"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB59D4 = 1;
  }
  if ( time >= 1 )
  {
    if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
    CultureInfo_65176300 = (System_IFormatProvider_o *)System_Globalization_CultureInfo__GetCultureInfo_65176300(
                                                         (System_String_o *)StringLiteral_21120/*"ja-JP"*/,
                                                         0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_41600872(time, 0).fields._dateData;
    v4 = sub_1C6BAB0(object___TypeInfo, 6);
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v5.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v5, 0);
    v6 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &Year);
    if ( !v4 )
      sub_1C6BC60(v6, v7);
    v10 = v6;
    if ( !v6 || (v6 = (System_String_o *)sub_1C6BB44(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_32;
      *(_QWORD *)(v4 + 32) = v10;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)v10, v8, v9);
      v11.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v11, 0);
      v6 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &Month);
      v14 = v6;
      if ( !v6 || (v6 = (System_String_o *)sub_1C6BB44(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v4 + 24) <= 1u )
          goto LABEL_32;
        *(_QWORD *)(v4 + 40) = v14;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 40), (int32_t)v14, v12, v13);
        v15.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v15, 0);
        v6 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &Day);
        v18 = v6;
        if ( !v6 || (v6 = (System_String_o *)sub_1C6BB44(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v4 + 24) <= 2u )
            goto LABEL_32;
          *(_QWORD *)(v4 + 48) = v18;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 48), (int32_t)v18, v16, v17);
          v19.fields._dateData = (uint64_t)&dateData;
          v6 = System_DateTime__ToString_65365192(v19, (System_String_o *)StringLiteral_18528/*"ddd"*/, CultureInfo_65176300, 0);
          v22 = v6;
          if ( !v6 || (v6 = (System_String_o *)sub_1C6BB44(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v4 + 24) <= 3u )
              goto LABEL_32;
            *(_QWORD *)(v4 + 56) = v22;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 56), (int32_t)v22, v20, v21);
            v23.fields._dateData = (uint64_t)&dateData;
            Hour = System_DateTime__get_Hour(v23, 0);
            v6 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &Hour);
            v26 = v6;
            if ( !v6 || (v6 = (System_String_o *)sub_1C6BB44(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v4 + 24) <= 4u )
                goto LABEL_32;
              *(_QWORD *)(v4 + 64) = v26;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 64), (int32_t)v26, v24, v25);
              v27.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v27, 0);
              v6 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &Minute);
              v30 = v6;
              if ( !v6 || (v6 = (System_String_o *)sub_1C6BB44(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v4 + 24) > 5u )
                {
                  *(_QWORD *)(v4 + 72) = v30;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 72), (int32_t)v30, v28, v29);
                  return System_String__Format_64008236(
                           (System_String_o *)StringLiteral_25200/*"{0:D}/{1:D2}/{2:D2}({3}) {4:D2}:{5:D2}"*/,
                           (System_Object_array *)v4,
                           0);
                }
LABEL_32:
                sub_1C6BC68(v6);
              }
            }
          }
        }
      }
    }
    v32 = sub_1C6BC84(v6);
    sub_1C6BB30(v32, 0);
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
  System_String_o *NumberFormat_41508576; // x1
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
  if ( (byte_4CB59E9 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_800/*"+"*/);
    sub_1C6BA08(&StringLiteral_5640/*"EVENT_POINT_RATE_INFO"*/);
    sub_1C6BA08(&StringLiteral_5638/*"EVENT_POINT_NONE_INFO"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_5635/*"EVENT_POINT_MAX_INFO"*/);
    sub_1C6BA08(&StringLiteral_5627/*"EVENT_POINT_ADD_INFO"*/);
    sub_1C6BA08(&StringLiteral_5628/*"EVENT_POINT_ADD_RATE_INFO"*/);
    byte_4CB59E9 = 1;
  }
  v29 = 0;
  if ( ratePoint >= 3000 && isMax )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_5635/*"EVENT_POINT_MAX_INFO"*/;
    return LocalizationManager__Get((System_String_o *)*v9, *(const MethodInfo **)&ratePoint);
  }
  if ( addPoint < 0 )
    v11 = &StringLiteral_1/*""*/;
  else
    v11 = &StringLiteral_800/*"+"*/;
  v12 = (System_String_o *)*v11;
  v14 = System_Int32__ToString((int32_t)&v30, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat_41508576 = LocalizationManager__GetNumberFormat_41508576(v14, v13);
  if ( unit )
    v16 = unit;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  v17 = System_String__Concat_64005056(v12, NumberFormat_41508576, v16, 0);
  if ( ratePoint < 0 )
    v18 = &StringLiteral_1/*""*/;
  else
    v18 = &StringLiteral_800/*"+"*/;
  v19 = (System_String_o *)*v18;
  v20 = (Il2CppObject *)v17;
  v29 = ratePoint / 10;
  v22 = System_Int32__ToString((int32_t)&v29, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__GetNumberFormat_41508576(v22, v21);
  v24 = (Il2CppObject *)System_String__Concat_63966792(v19, v23, 0);
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( ratePoint && v30 )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5628/*"EVENT_POINT_ADD_RATE_INFO"*/, *(const MethodInfo **)&ratePoint);
    return System_String__Format_64008100(v26, v20, v24, 0);
  }
  else
  {
    if ( v30 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5627/*"EVENT_POINT_ADD_INFO"*/, *(const MethodInfo **)&ratePoint);
      v28 = v20;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !ratePoint )
      {
        v9 = &StringLiteral_5638/*"EVENT_POINT_NONE_INFO"*/;
        return LocalizationManager__Get((System_String_o *)*v9, *(const MethodInfo **)&ratePoint);
      }
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5640/*"EVENT_POINT_RATE_INFO"*/, *(const MethodInfo **)&ratePoint);
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

  if ( (byte_4CB59D7 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_7191/*"HAVE_UNIT_INFO"*/);
    byte_4CB59D7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7191/*"HAVE_UNIT_INFO"*/, method);
  v6 = count;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetHpIconInfo(int32_t hp, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB59E5 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_7246/*"HP_ICON_INFO"*/);
    byte_4CB59E5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7246/*"HP_ICON_INFO"*/, method);
  v6 = hp;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetHpInfo(int32_t hp, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB59E4 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_7247/*"HP_INFO"*/);
    byte_4CB59E4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7247/*"HP_INFO"*/, method);
  v6 = hp;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetIdIconInfo(int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB59DE & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_7421/*"ID_ICON_INFO"*/);
    byte_4CB59DE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7421/*"ID_ICON_INFO"*/, method);
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
  if ( (byte_4CB59C5 & 1) == 0 )
  {
    keys = (System_String_array *)sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59C5 = 1;
  }
  if ( !v2 )
    sub_1C6BC60(keys, method);
  max_length = v2->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= (unsigned int)max_length )
      sub_1C6BC68(keys);
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

  if ( (byte_4CB59BE & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59BE = 1;
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

  if ( (byte_4CB59BF & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59BF = 1;
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

  if ( (byte_4CB59BD & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59BD = 1;
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

  if ( (byte_4CB59D5 & 1) == 0 )
  {
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&StringLiteral_25180/*"{0:D2}h{1:D2}m{2:D2}s"*/);
    byte_4CB59D5 = 1;
  }
  v3 = time % 60;
  v4 = time / 60 % 60;
  v11 = time / 3600;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
  v10 = v4;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v10);
  v9 = v3;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v9);
  return System_String__Format_64008168((System_String_o *)StringLiteral_25180/*"{0:D2}h{1:D2}m{2:D2}s"*/, v5, v6, v7, 0);
}


System_String_o *LocalizationManager__GetLevelIconInfo(int32_t lv, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB59E0 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_8259/*"LEVEL_ICON_INFO"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB59E0 = 1;
  }
  if ( lv < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8259/*"LEVEL_ICON_INFO"*/, method);
  v6 = lv;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetLevelInfo(int32_t lv, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB59DF & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_8260/*"LEVEL_INFO"*/);
    byte_4CB59DF = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8260/*"LEVEL_INFO"*/, method);
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
  if ( (byte_4CB59EA & 1) == 0 )
  {
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_858/*"-"*/);
    levelList = (System_Int32_array *)sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    byte_4CB59EA = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  max_length = v2->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64044104(v4, 4 * max_length, 0);
  if ( (int)max_length < 1 )
  {
    if ( v4 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                                  v4,
                                  v4->klass->vtable._3_ToString.method);
LABEL_18:
    sub_1C6BC60(levelList, method);
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
      levelList = (System_Int32_array *)System_Text_StringBuilder__Append_64050752(
                                          v4,
                                          (System_String_o *)StringLiteral_1041/*"/"*/,
                                          0);
    }
    if ( v5 >= LODWORD(v2->max_length) )
      sub_1C6BC68(levelList);
    if ( *m_Items <= 0 )
    {
      method = (const MethodInfo *)StringLiteral_858/*"-"*/;
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
    levelList = (System_Int32_array *)System_Text_StringBuilder__Append_64050752(v4, (System_String_o *)method, 0);
    ++v5;
    ++m_Items;
  }
  while ( v6 != v5 );
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                              v4,
                              v4->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetLevelList_41512068(SkillInfo_array *skillInfoList, const MethodInfo *method)
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
  if ( (byte_4CB59EB & 1) == 0 )
  {
    sub_1C6BA08(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_15915/*"[FCF050]"*/);
    sub_1C6BA08(&StringLiteral_15975/*"[ff730f]"*/);
    sub_1C6BA08(&StringLiteral_15820/*"[-]"*/);
    sub_1C6BA08(&StringLiteral_858/*"-"*/);
    skillInfoList = (SkillInfo_array *)sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    byte_4CB59EB = 1;
  }
  if ( !v2 )
    goto LABEL_32;
  max_length = v2->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64044104(v4, 15 * max_length, 0);
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    v6 = (unsigned int)max_length;
    do
    {
      if ( v5 >= LODWORD(v2->max_length) )
        sub_1C6BC68(skillInfoList);
      v7 = (int *)v2->m_Items[v5];
      if ( v5 )
      {
        if ( !v4 )
          goto LABEL_32;
        skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_64050752(
                                             v4,
                                             (System_String_o *)StringLiteral_1041/*"/"*/,
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
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_64050752(
                                               v4,
                                               (System_String_o *)skillInfoList,
                                               0);
          v13 = (System_String_o **)&StringLiteral_15820/*"[-]"*/;
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
          v12 = &StringLiteral_15975/*"[ff730f]"*/;
          if ( !v4 )
            goto LABEL_32;
        }
        else
        {
          v11 = (int)skillInfoList;
          if ( (_DWORD)skillInfoList != 1 )
            goto LABEL_22;
          v12 = &StringLiteral_15915/*"[FCF050]"*/;
          if ( !v4 )
            goto LABEL_32;
        }
        System_Text_StringBuilder__Append_64050752(v4, (System_String_o *)*v12, 0);
        v14 = System_Int32__ToString(v8, 0);
        System_Text_StringBuilder__Append_64050752(v4, v14, 0);
        v13 = (System_String_o **)&StringLiteral_15820/*"[-]"*/;
      }
      else
      {
        v13 = (System_String_o **)&StringLiteral_858/*"-"*/;
        if ( !v4 )
          goto LABEL_32;
      }
LABEL_27:
      skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_64050752(v4, *v13, 0);
LABEL_28:
      ++v5;
    }
    while ( v6 != v5 );
  }
  if ( !v4 )
LABEL_32:
    sub_1C6BC60(skillInfoList, method);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                              v4,
                              v4->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetNoEntryName(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4CB59BC & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59BC = 1;
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

  if ( (byte_4CB59C0 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59C0 = 1;
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
  if ( (byte_4CB59D9 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    byte_4CB59D9 = 1;
  }
  return System_Int32__ToString_65475288((int32_t)&v3, (System_String_o *)StringLiteral_9229/*"N0"*/, 0);
}


System_String_o *LocalizationManager__GetNumberFormatLong(int64_t data, const MethodInfo *method)
{
  int64_t v3; // [xsp+8h] [xbp-18h] BYREF

  v3 = data;
  if ( (byte_4CB59DA & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    byte_4CB59DA = 1;
  }
  return System_Int64__ToString_65480464((int64_t)&v3, (System_String_o *)StringLiteral_9229/*"N0"*/, 0);
}


System_String_o *LocalizationManager__GetNumberFormat_41508576(System_String_o *data, const MethodInfo *method)
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

  if ( (byte_4CB59DB & 1) == 0 )
  {
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB59DB = 1;
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
  v7 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64044104(v7, 32, 0);
  if ( v4 >= 1 )
  {
    if ( !v7 )
LABEL_26:
      sub_1C6BC60(appended, v9);
    appended = System_Text_StringBuilder__Append_64051068(v7, data, 0, v4, 0);
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
      System_Text_StringBuilder__Append_64053080(v7, 0x2Cu, 0);
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
    appended = System_Text_StringBuilder__Append_64053080(v7, Chars, 0);
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

  if ( (byte_4CB59D0 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_327/*" ~ "*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB59D0 = 1;
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
  v12 = System_String__Concat_63966792(v9, DateTime, 0);
  v14 = System_String__Concat_63966792(v12, (System_String_o *)StringLiteral_327/*" ~ "*/, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isDispEndTime )
    Date = LocalizationManager__GetDateTime(endedAt, v13);
  else
    Date = LocalizationManager__GetDate(endedAt, v13);
  return System_String__Concat_63966792(v14, Date, 0);
}


System_String_o *LocalizationManager__GetPrice2Info(int32_t price, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4CB59DD & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_10466/*"PRICE2_INFO"*/);
    byte_4CB59DD = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10466/*"PRICE2_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(price, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetPriceInfo(int32_t price, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4CB59DC & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_10467/*"PRICE_INFO"*/);
    byte_4CB59DC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10467/*"PRICE_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(price, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetRarityInfo(int32_t rare, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB59E1 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_16009/*"[{0}]"*/);
    byte_4CB59E1 = 1;
  }
  v5 = rare;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_16009/*"[{0}]"*/, v3, 0);
}


bool LocalizationManager__GetRestIsLastHours(int64_t at, const MethodInfo *method)
{
  int64_t v3; // x8

  if ( (byte_4CB59CF & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB59CF = 1;
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

  if ( (byte_4CB59C7 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_13419/*"TIME_REST_DAYS"*/);
    sub_1C6BA08(&StringLiteral_13422/*"TIME_REST_HOURS"*/);
    sub_1C6BA08(&StringLiteral_13423/*"TIME_REST_MINUTES"*/);
    sub_1C6BA08(&StringLiteral_13442/*"TIME_REST_TIMEOVER"*/);
    sub_1C6BA08(&StringLiteral_13425/*"TIME_REST_OVER_YEARS"*/);
    byte_4CB59C7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = at - NetworkManager__getTime(0);
  if ( v4 < 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = &StringLiteral_13442/*"TIME_REST_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v5, v3);
  }
  if ( v4 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13423/*"TIME_REST_MINUTES"*/, v3);
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
    v11 = &StringLiteral_13423/*"TIME_REST_MINUTES"*/;
  }
  else
  {
    if ( v4 > 86399 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v4 > 31535999 )
      {
        v5 = &StringLiteral_13425/*"TIME_REST_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v5, v3);
      }
      v12 = (System_String_o *)StringLiteral_13419/*"TIME_REST_DAYS"*/;
      v10 = v4 / 0x15180uLL;
      goto LABEL_27;
    }
    v10 = v4 / 0xE10uLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_13422/*"TIME_REST_HOURS"*/;
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
  if ( (byte_4CB59C8 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_13403/*"TIME_REST2_MINUTES"*/);
    sub_1C6BA08(&StringLiteral_13405/*"TIME_REST2_OVER_YEARS"*/);
    sub_1C6BA08(&StringLiteral_13402/*"TIME_REST2_HOURS"*/);
    sub_1C6BA08(&StringLiteral_13401/*"TIME_REST2_DAYS"*/);
    sub_1C6BA08(&StringLiteral_13406/*"TIME_REST2_TIMEOVER"*/);
    byte_4CB59C8 = 1;
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
    v6 = &StringLiteral_13406/*"TIME_REST2_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
  }
  if ( v5 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13403/*"TIME_REST2_MINUTES"*/, (const MethodInfo *)nowTime);
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
    v12 = &StringLiteral_13403/*"TIME_REST2_MINUTES"*/;
  }
  else
  {
    if ( v5 > 86399 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v5 > 31535999 )
      {
        v6 = &StringLiteral_13405/*"TIME_REST2_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
      }
      v13 = (System_String_o *)StringLiteral_13401/*"TIME_REST2_DAYS"*/;
      v11 = v5 / 0x15180uLL;
      goto LABEL_29;
    }
    v11 = v5 / 0xE10uLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_13402/*"TIME_REST2_HOURS"*/;
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

  if ( (byte_4CB59C9 & 1) == 0 )
  {
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&System_TimeSpan_TypeInfo);
    sub_1C6BA08(&StringLiteral_25178/*"{0:D2}:{1:D2}:{2:D2}"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB59C9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( at - NetworkManager__getTime(0) < 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4.fields._dateData = NetworkManager__getDateTime_41600544(Time, 0).fields._dateData;
  v5.fields._dateData = NetworkManager__getDateTime_41600544(at, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v6.fields._dateData = v5.fields._dateData;
  v7.fields._dateData = v4.fields._dateData;
  ticks = System_DateTime__op_Subtraction_65367788(v6, v7, 0).fields._ticks;
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
  return System_String__Format_64008168((System_String_o *)StringLiteral_25178/*"{0:D2}:{1:D2}:{2:D2}"*/, v11, v13, v15, 0);
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

  if ( (byte_4CB59CA & 1) == 0 )
  {
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_25178/*"{0:D2}:{1:D2}:{2:D2}"*/);
    sub_1C6BA08(&StringLiteral_1448/*"99:99:99"*/);
    byte_4CB59CA = 1;
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
    return (System_String_o *)StringLiteral_1448/*"99:99:99"*/;
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
  return System_String__Format_64008168((System_String_o *)StringLiteral_25178/*"{0:D2}:{1:D2}:{2:D2}"*/, v9, v10, v11, 0);
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
  if ( (byte_4CB59CB & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_13408/*"TIME_REST5_HOURS"*/);
    sub_1C6BA08(&StringLiteral_13411/*"TIME_REST5_TIMEOVER"*/);
    sub_1C6BA08(&StringLiteral_13410/*"TIME_REST5_OVER_YEARS"*/);
    sub_1C6BA08(&StringLiteral_13407/*"TIME_REST5_DAYS"*/);
    sub_1C6BA08(&StringLiteral_13409/*"TIME_REST5_MINUTES"*/);
    byte_4CB59CB = 1;
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
    v6 = &StringLiteral_13411/*"TIME_REST5_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
  }
  if ( v5 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13409/*"TIME_REST5_MINUTES"*/, (const MethodInfo *)nowTime);
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
    v12 = &StringLiteral_13409/*"TIME_REST5_MINUTES"*/;
  }
  else
  {
    if ( v5 > 86399 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v5 > 31535999 )
      {
        v6 = &StringLiteral_13410/*"TIME_REST5_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
      }
      v13 = (System_String_o *)StringLiteral_13407/*"TIME_REST5_DAYS"*/;
      v11 = v5 / 0x15180uLL;
      goto LABEL_29;
    }
    v11 = v5 / 0xE10uLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_13408/*"TIME_REST5_HOURS"*/;
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
  if ( (byte_4CB59CC & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_13417/*"TIME_REST6_TIMEOVER"*/);
    sub_1C6BA08(&StringLiteral_13414/*"TIME_REST6_HOURS"*/);
    sub_1C6BA08(&StringLiteral_13416/*"TIME_REST6_OVER_YEARS"*/);
    sub_1C6BA08(&StringLiteral_13415/*"TIME_REST6_MINUTES"*/);
    sub_1C6BA08(&StringLiteral_13413/*"TIME_REST6_HEAD"*/);
    sub_1C6BA08(&StringLiteral_13412/*"TIME_REST6_DAYS"*/);
    byte_4CB59CC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13413/*"TIME_REST6_HEAD"*/, (const MethodInfo *)nowTime);
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
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TIME_REST6_MINUTES"*/, v5);
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
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13414/*"TIME_REST6_HOURS"*/, v5);
          v31 = v9;
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31);
          v22 = System_String__Format(v20, v21, 0);
          v6 = System_String__Concat_63966792(v6, v22, 0);
          v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TIME_REST6_MINUTES"*/, v23);
          v16 = long_TypeInfo;
          v30 = v8 % 0x3C;
        }
        else
        {
          if ( v7 > 31535999 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13416/*"TIME_REST6_OVER_YEARS"*/, v5);
            return System_String__Concat_63966792(v6, v10, 0);
          }
          v24 = v7 / 0x15180uLL;
          v25 = v9 % 0x18;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13412/*"TIME_REST6_DAYS"*/, v5);
          v31 = v24;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31);
          v28 = System_String__Format(v26, v27, 0);
          v6 = System_String__Concat_63966792(v6, v28, 0);
          v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13414/*"TIME_REST6_HOURS"*/, v29);
          v16 = long_TypeInfo;
          v30 = v25;
        }
        v17 = &v30;
LABEL_27:
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(v16, v17);
        v19 = System_String__Format(v14, v18, 0);
        return System_String__Concat_63966792(v6, v19, 0);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TIME_REST6_MINUTES"*/, v5);
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
  return LocalizationManager__Get((System_String_o *)StringLiteral_13417/*"TIME_REST6_TIMEOVER"*/, v5);
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

  if ( (byte_4CB59CD & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB59CD = 1;
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
  return System_String__Format_64008168(format, v11, v12, v14, 0);
}


void LocalizationManager__GetRestTimeWithSeparatedTimeStr(
        int64_t at,
        System_String_o **numStr,
        System_String_o **charStr,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int64_t v9; // x8
  const MethodInfo *v10; // x1
  __int64 *v11; // x8
  int32_t v12; // w1
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  unsigned __int64 v23; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v24; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v25; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CB59CE & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_13450/*"TIME_STR_TIMEOVER"*/);
    sub_1C6BA08(&StringLiteral_13447/*"TIME_STR_MINUTES"*/);
    sub_1C6BA08(&StringLiteral_13445/*"TIME_STR_DAYS"*/);
    sub_1C6BA08(&StringLiteral_13449/*"TIME_STR_OVER_YEARS"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_1165/*"1"*/);
    sub_1C6BA08(&StringLiteral_13446/*"TIME_STR_HOURS"*/);
    sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    byte_4CB59CE = 1;
  }
  v23 = 0;
  v24 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v9 = at - NetworkManager__getTime(0);
  if ( v9 < 0 )
  {
    *numStr = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)numStr, StringLiteral_1/*""*/, v7, v8);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_13450/*"TIME_STR_TIMEOVER"*/;
  }
  else
  {
    if ( v9 <= 59 )
    {
      *numStr = (System_String_o *)StringLiteral_1115/*"0"*/;
      v12 = StringLiteral_1115/*"0"*/;
    }
    else
    {
      v25 = v9 / 0x3CuLL;
      if ( v9 > 3599 )
      {
        v24 = v9 / 0xE10uLL;
        if ( (unsigned __int64)v9 >> 7 <= 0x2A2 )
        {
          v17 = System_Int64__ToString((int64_t)&v24, 0);
          *numStr = v17;
          sub_1C6B9AC((CGThumbnailListItem_o *)numStr, (int32_t)v17, v18, v19);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v11 = &StringLiteral_13446/*"TIME_STR_HOURS"*/;
        }
        else
        {
          v23 = v9 / 0x15180uLL;
          if ( (unsigned __int64)v9 <= 0x1E1337F )
          {
            v20 = System_Int64__ToString((int64_t)&v23, 0);
            *numStr = v20;
            sub_1C6B9AC((CGThumbnailListItem_o *)numStr, (int32_t)v20, v21, v22);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v11 = &StringLiteral_13445/*"TIME_STR_DAYS"*/;
          }
          else
          {
            *numStr = (System_String_o *)StringLiteral_1165/*"1"*/;
            sub_1C6B9AC((CGThumbnailListItem_o *)numStr, StringLiteral_1165/*"1"*/, v7, v8);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v11 = &StringLiteral_13449/*"TIME_STR_OVER_YEARS"*/;
          }
        }
        goto LABEL_21;
      }
      v13 = System_Int64__ToString((int64_t)&v25, 0);
      v12 = (int)v13;
      *numStr = v13;
    }
    sub_1C6B9AC((CGThumbnailListItem_o *)numStr, v12, v7, v8);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_13447/*"TIME_STR_MINUTES"*/;
  }
LABEL_21:
  v14 = LocalizationManager__Get((System_String_o *)*v11, v10);
  *charStr = v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)charStr, (int32_t)v14, v15, v16);
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

  if ( (byte_4CB59C1 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59C1 = 1;
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

  if ( (byte_4CB59E8 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12367/*"STONE_INFO"*/);
    byte_4CB59E8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_12367/*"STONE_INFO"*/, method);
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

  if ( (byte_4CB59D2 & 1) == 0 )
  {
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_25177/*"{0:D2}:{1:D2}"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB59D2 = 1;
  }
  if ( time < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41600872(time, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v3, 0);
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v5.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v5, 0);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  return System_String__Format_64008100((System_String_o *)StringLiteral_25177/*"{0:D2}:{1:D2}"*/, v4, v6, 0);
}


System_String_o *LocalizationManager__GetUnitInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4CB59D6 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_14814/*"UNIT_INFO"*/);
    byte_4CB59D6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_14814/*"UNIT_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(count, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetUnknownName(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4CB59BB & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59BB = 1;
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

  if ( (byte_4CB59B9 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
    byte_4CB59B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C6BC60(v2, v3);
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

  if ( (byte_4CB59EF & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB59EF = 1;
  }
  mainTextData = (UnityEngine_Object_o *)this->fields.mainTextData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mainTextData, 0, 0) )
  {
    v5 = this->fields.mainTextData;
    if ( !v5 )
      sub_1C6BC60(0, v4);
    text = (LocalizationManager_o *)UnityEngine_TextAsset__get_text(v5, 0);
    LocalizationManager__SetTextData(text, (System_String_o *)text, v7);
  }
}


bool LocalizationManager__IsBusySetAssetData(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4CB59B8 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59B8 = 1;
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
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *v6; // x20
  LocalizationManager_c *v7; // x0
  AssetLoader_LoadEndDataHandler_o *v8; // x20

  if ( (byte_4CB59BA & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
    sub_1C6BA08(&Method_LocalizationManager___c__DisplayClass16_0__LoadAssetData_b__0__);
    sub_1C6BA08(&LocalizationManager___c__DisplayClass16_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_8481/*"Localization"*/);
    byte_4CB59BA = 1;
  }
  v1 = sub_1C6BC54(LocalizationManager___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
  if ( !v1 )
    sub_1C6BC60(Instance, v3);
  *(_QWORD *)(v1 + 16) = Instance;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 16), (int32_t)Instance, v4, v5);
  v6 = *(UnityEngine_Object_o **)(v1 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
  {
    v7 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = LocalizationManager_TypeInfo;
    }
    v7->static_fields->isBusySetAssetData = 1;
    v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v8,
      (Il2CppObject *)v1,
      Method_LocalizationManager___c__DisplayClass16_0__LoadAssetData_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_8481/*"Localization"*/, v8, 1, 0);
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

  if ( (byte_4CB59EC & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_23388/*"servantName "*/);
    sub_1C6BA08(&StringLiteral_15801/*"["*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    byte_4CB59EC = 1;
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
    v8 = System_String__IndexOf_64025200(text, (System_String_o *)StringLiteral_15801/*"["*/, v6, 0);
    if ( v8 < 0 )
      break;
    v9 = v8;
    Instance = (void *)System_String__IndexOf_64025200(text, (System_String_o *)StringLiteral_16051/*"]"*/, v8, 0);
    if ( ((unsigned int)Instance & 0x80000000) != 0 )
      break;
    v11 = (int)Instance;
    if ( !v7 )
    {
      v7 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_64044104(v7, stringLength + 32, 0);
    }
    v12 = (unsigned int)(v9 + 1);
    if ( v11 == (_DWORD)v12 )
    {
      if ( !v7 )
        goto LABEL_71;
      v13 = v11 - v6;
LABEL_47:
      System_Text_StringBuilder__Append_64051068(v7, text, v6, v13, 0);
      goto LABEL_63;
    }
    Instance = System_String__Substring_64012732(text, v12, v11 + ~v9, 0);
    if ( !Instance )
      goto LABEL_71;
    v14 = (System_String_o *)Instance;
    Instance = (void *)System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_23388/*"servantName "*/, 0);
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
      System_Text_StringBuilder__Append_64051068(v7, text, v6, v9 - v6, 0);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_71;
    v18 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            v17,
            (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
            sub_1C6BC68(Instance);
          v24 = (System_String_o **)(v16 + 40);
        }
        if ( !v7 )
LABEL_71:
          sub_1C6BC60(Instance, v12);
        unknownNameText = *v24;
      }
      else
      {
        if ( !v26 )
          goto LABEL_55;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
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
          Instance = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    System_Text_StringBuilder__Append_64050752(v7, unknownNameText, 0);
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
      System_Text_StringBuilder__Append_64051068(v7, text, v6, stringLength - v6, 0);
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

  if ( (byte_4CB59ED & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_369/*"#"*/);
    sub_1C6BA08(&StringLiteral_22435/*"o"*/);
    sub_1C6BA08(&StringLiteral_15820/*"[-]"*/);
    sub_1C6BA08(&StringLiteral_20155/*"i"*/);
    sub_1C6BA08(&StringLiteral_19786/*"g"*/);
    sub_1C6BA08(&StringLiteral_858/*"-"*/);
    sub_1C6BA08(&StringLiteral_16982/*"b"*/);
    sub_1C6BA08(&StringLiteral_1103/*"/sub"*/);
    sub_1C6BA08(&StringLiteral_1100/*"/o"*/);
    sub_1C6BA08(&StringLiteral_1107/*"/u"*/);
    sub_1C6BA08(&StringLiteral_478/*"%"*/);
    sub_1C6BA08(&StringLiteral_16078/*"^"*/);
    sub_1C6BA08(&StringLiteral_1087/*"/b"*/);
    sub_1C6BA08(&StringLiteral_500/*"&"*/);
    sub_1C6BA08(&StringLiteral_23939/*"sup"*/);
    sub_1C6BA08(&StringLiteral_25370/*"~"*/);
    sub_1C6BA08(&StringLiteral_23012/*"r"*/);
    sub_1C6BA08(&StringLiteral_21323/*"line"*/);
    sub_1C6BA08(&StringLiteral_1104/*"/sup"*/);
    sub_1C6BA08(&StringLiteral_1102/*"/s"*/);
    sub_1C6BA08(&StringLiteral_20350/*"image"*/);
    sub_1C6BA08(&StringLiteral_1095/*"/g"*/);
    sub_1C6BA08(&StringLiteral_23854/*"sub"*/);
    sub_1C6BA08(&StringLiteral_24361/*"u"*/);
    sub_1C6BA08(&StringLiteral_15801/*"["*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_23270/*"s"*/);
    sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    byte_4CB59ED = 1;
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
    v8 = System_String__IndexOf_64025200(text, (System_String_o *)StringLiteral_15801/*"["*/, v6, 0);
    if ( v8 < 0 )
      break;
    v9 = v8;
    if ( v8 + 1 >= stringLength )
      break;
    v10 = System_String__IndexOf_64025200(text, (System_String_o *)StringLiteral_16051/*"]"*/, v8 + 1, 0);
    if ( v10 < 0 )
      break;
    v11 = v10;
    do
    {
      v12 = v9 + 1;
      v13 = v9;
      appended = (System_String_o *)System_String__IndexOf_64025200(
                                      text,
                                      (System_String_o *)StringLiteral_15801/*"["*/,
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
      v7 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_64044104(v7, stringLength + 32, 0);
    }
    if ( v11 != v12 )
    {
      if ( v13 > v6 )
      {
        if ( !v7 )
          goto LABEL_110;
        System_Text_StringBuilder__Append_64051068(v7, text, v6, v13 - v6, 0);
      }
      v20 = v11 - v13;
      appended = System_String__Substring_64012732(text, v12, v11 - v13 - 1, 0);
      if ( !appended )
        goto LABEL_110;
      v21 = appended;
      appended = (System_String_o *)System_String__StartsWith(appended, (System_String_o *)StringLiteral_369/*"#"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
      {
        if ( v20 - 2 < 1 )
          goto LABEL_19;
        appended = System_String__Substring_64012732(text, v13 + 2, v20 - 2, 0);
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
        appended = (System_String_o *)System_Text_StringBuilder__Append_64050752(v7, monitor, 0);
        goto LABEL_19;
      }
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_500/*"&"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_16078/*"^"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_25370/*"~"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_478/*"%"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_21323/*"line"*/, 0);
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
                v26 = &StringLiteral_24361/*"u"*/;
                goto LABEL_87;
              case 0xF60C4582:
                v26 = &StringLiteral_23270/*"s"*/;
                goto LABEL_87;
              case 0xF70C4715:
                v26 = &StringLiteral_23012/*"r"*/;
                goto LABEL_87;
            }
          }
          else
          {
            if ( (_DWORD)appended == -368299362 )
            {
              v26 = &StringLiteral_22435/*"o"*/;
              goto LABEL_87;
            }
            if ( (_DWORD)appended == -334744124 )
            {
              v26 = &StringLiteral_20155/*"i"*/;
              goto LABEL_87;
            }
          }
        }
        else if ( (unsigned int)appended > 0xDC4E3915 )
        {
          if ( (_DWORD)appended == -502520314 )
          {
            v26 = &StringLiteral_19786/*"g"*/;
            goto LABEL_87;
          }
          if ( (_DWORD)appended == -418632219 )
          {
            v26 = &StringLiteral_16982/*"b"*/;
            goto LABEL_87;
          }
        }
        else
        {
          if ( (_DWORD)appended == -900850497 )
          {
            v26 = &StringLiteral_23939/*"sup"*/;
            goto LABEL_87;
          }
          if ( (_DWORD)appended == -598853355 )
          {
            v26 = &StringLiteral_23854/*"sub"*/;
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
              v26 = &StringLiteral_20350/*"image"*/;
              goto LABEL_87;
            case 0x6AD20EBB:
              v26 = &StringLiteral_1095/*"/g"*/;
              goto LABEL_87;
            case 0x6DD21374:
              v26 = &StringLiteral_1087/*"/b"*/;
              goto LABEL_87;
          }
        }
        else
        {
          if ( (_DWORD)appended == 1657930275 )
          {
            v26 = &StringLiteral_1100/*"/o"*/;
            goto LABEL_87;
          }
          if ( (_DWORD)appended == 1766857154 )
          {
            v26 = &StringLiteral_1104/*"/sup"*/;
            goto LABEL_87;
          }
        }
      }
      else if ( (unsigned int)appended > 0x574FFD6C )
      {
        if ( (_DWORD)appended == 1557264561 )
        {
          v26 = &StringLiteral_1107/*"/u"*/;
          goto LABEL_87;
        }
        if ( (_DWORD)appended == 1590819799 )
        {
          v26 = &StringLiteral_1102/*"/s"*/;
          goto LABEL_87;
        }
      }
      else if ( (_DWORD)appended == 671913016 )
      {
        appended = (System_String_o *)System_String__op_Equality(v25, (System_String_o *)StringLiteral_858/*"-"*/, 0);
        if ( ((unsigned __int8)appended & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_19;
          if ( !v7 )
            goto LABEL_110;
          monitor = (System_String_o *)StringLiteral_15820/*"[-]"*/;
          goto LABEL_33;
        }
      }
      else if ( (_DWORD)appended == 1464860012 )
      {
        v26 = &StringLiteral_1103/*"/sub"*/;
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
            appended = (System_String_o *)System_Text_StringBuilder__Append_64053080(v7, 0x5Bu, 0);
            if ( !LODWORD(v24[1].klass) )
LABEL_111:
              sub_1C6BC68(appended);
            appended = (System_String_o *)v24[1].monitor;
            if ( !appended )
              goto LABEL_110;
            v29 = System_String__Substring_64012732(appended, 0, 6, 0);
            System_Text_StringBuilder__Append_64050752(v7, v29, 0);
            appended = (System_String_o *)System_Text_StringBuilder__Append_64053080(v7, 0x5Du, 0);
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
    appended = (System_String_o *)System_Text_StringBuilder__Append_64051068(v17, v18, v19, v16, 0);
LABEL_19:
    v6 = v11 + 1;
    if ( v11 + 1 >= stringLength )
    {
      if ( !v7 )
LABEL_110:
        sub_1C6BC60(appended, v15);
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                                  v7,
                                  v7->klass->vtable._3_ToString.method);
    }
  }
  if ( !v7 )
    return text;
  if ( stringLength > v6 )
    System_Text_StringBuilder__Append_64051068(v7, text, v6, stringLength - v6, 0);
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
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x0
  struct LocalizationManager_StaticFields *v32; // x8
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x0
  struct LocalizationManager_StaticFields *v36; // x8
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x0
  struct LocalizationManager_StaticFields *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct LocalizationManager_StaticFields *v43; // x8
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  LocalizationManager_c *v46; // x0
  struct LocalizationManager_StaticFields *v47; // x8
  int32_t v48; // w1
  LocalizationManager_c *v49; // x0
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x0
  struct LocalizationManager_StaticFields *v54; // x8
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x0
  struct LocalizationManager_StaticFields *v58; // x8
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  LocalizationManager_c *v61; // x0
  bool v62; // w0
  LocalizationManager_c *v63; // x8
  uint32_t cctor_finished; // w9
  Il2CppObject *v65; // x0
  Il2CppObject *v66; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v72; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v73; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4CB59F0 & 1) == 0 )
  {
    sub_1C6BA08(&char___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_1C6BA08(&StringLiteral_8207/*"KINSOKU_SEPARATION_STR"*/);
    sub_1C6BA08(&StringLiteral_1044/*"//"*/);
    sub_1C6BA08(&StringLiteral_9286/*"NORMAL_EFFECT_COLOR"*/);
    sub_1C6BA08(&StringLiteral_8208/*"KINSOKU_TOP_STR"*/);
    sub_1C6BA08(&StringLiteral_8190/*"KANNSUUJI_100"*/);
    sub_1C6BA08(&StringLiteral_11524/*"SELECT_EFFECT_COLOR"*/);
    sub_1C6BA08(&StringLiteral_8189/*"KANNSUUJI_10"*/);
    sub_1C6BA08(&StringLiteral_9322/*"NO_ENTRY_NAME"*/);
    sub_1C6BA08(&StringLiteral_8206/*"KINSOKU_LAST_STR"*/);
    sub_1C6BA08(&StringLiteral_14824/*"UNKNOWN_NAME"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_8188/*"KANNSUUJI_1"*/);
    byte_4CB59F0 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v4 = (System_Array_o *)sub_1C6BAB0(char___TypeInfo, 5);
  v5.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v6 = (System_Char_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v4, v5, 0);
  if ( !text_data )
    goto LABEL_63;
  v9 = System_String__Split_64016000(text_data, v6, 1, 0);
  stringLength = text_data->fields._stringLength;
  v11 = v9;
  v12 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64044104(v12, stringLength, 0);
  if ( !v11 )
    goto LABEL_63;
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C6BC68(appended);
      v15 = &v11->obj.klass + (int)v14;
      v16 = (System_String_o *)v15[4];
      if ( !v16 )
        goto LABEL_63;
      appended = (System_String_o *)System_String__IndexOf_64025184(
                                      (System_String_o *)v15[4],
                                      (System_String_o *)StringLiteral_1044/*"//"*/,
                                      0);
      if ( ((unsigned int)appended & 0x80000000) != 0 )
        break;
      if ( (_DWORD)appended )
      {
        appended = System_String__Substring_64012732(v16, 0, (int)appended - 1, 0);
        if ( !v12 )
          goto LABEL_63;
        v17 = appended;
        v18 = v12;
LABEL_15:
        appended = (System_String_o *)System_Text_StringBuilder__Append_64050752(v18, v17, 0);
        if ( !appended )
          goto LABEL_63;
        appended = (System_String_o *)System_Text_StringBuilder__Append_64053080(
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
    &v72,
    (System_Collections_Generic_Dictionary_object__object__o *)appended,
    (const MethodInfo_34BBD6C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v73 = v72;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v73,
            (const MethodInfo_35B8FF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
  {
    v21 = LocalizationManager_TypeInfo;
    current = v73.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager_TypeInfo;
    }
    if ( !current.fields.value )
      sub_1C6BC60(v21, v20);
    lookup = (System_Collections_Generic_Dictionary_object__object__o *)v21->static_fields->lookup;
    v24 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
                            current.fields.value,
                            current.fields.value->klass->vtable[3].method);
    if ( !lookup )
      sub_1C6BC60(v24, v25);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      lookup,
      current.fields.key,
      v24,
      (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v73,
    (const MethodInfo_35B9114 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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
           (Il2CppObject *)StringLiteral_14824/*"UNKNOWN_NAME"*/,
           (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  static_fields = LocalizationManager_TypeInfo->static_fields;
  static_fields->unknownNameText = (struct System_String_o *)Item;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->unknownNameText, (int32_t)Item, v29, v30);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v31 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_9322/*"NO_ENTRY_NAME"*/,
          (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v32 = LocalizationManager_TypeInfo->static_fields;
  v32->noEntryNameText = (struct System_String_o *)v31;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v32->noEntryNameText, (int32_t)v31, v33, v34);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v35 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_8208/*"KINSOKU_TOP_STR"*/,
          (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v36 = LocalizationManager_TypeInfo->static_fields;
  v36->kinsokuTopString = (struct System_String_o *)v35;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v36->kinsokuTopString, (int32_t)v35, v37, v38);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v39 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_8206/*"KINSOKU_LAST_STR"*/,
          (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v40 = LocalizationManager_TypeInfo->static_fields;
  v40->kinsokuLastString = (struct System_String_o *)v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v40->kinsokuLastString, (int32_t)v39, v41, v42);
  v43 = LocalizationManager_TypeInfo->static_fields;
  appended = (System_String_o *)v43->lookup;
  if ( !appended )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)appended,
    (Il2CppObject *)StringLiteral_8207/*"KINSOKU_SEPARATION_STR"*/,
    (Il2CppObject **)&v43->kinsokuSeparationString,
    (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
  v46 = LocalizationManager_TypeInfo;
  v47 = LocalizationManager_TypeInfo->static_fields;
  if ( !v47->kinsokuSeparationString )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = LocalizationManager_TypeInfo->static_fields;
    }
    v48 = StringLiteral_1/*""*/;
    v47->kinsokuSeparationString = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v47->kinsokuSeparationString, v48, v44, v45);
    v46 = LocalizationManager_TypeInfo;
  }
  if ( !v46->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v46);
    v46 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v46->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)appended,
         (Il2CppObject *)StringLiteral_8188/*"KANNSUUJI_1"*/,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v49 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v49 = LocalizationManager_TypeInfo;
    }
    appended = (System_String_o *)v49->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v50 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8188/*"KANNSUUJI_1"*/,
            (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    LocalizationManager_TypeInfo->static_fields->lowNumberString = (struct System_String_o *)v50;
    sub_1C6B9AC((CGThumbnailListItem_o *)LocalizationManager_TypeInfo->static_fields, (int32_t)v50, v51, v52);
    appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v53 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8189/*"KANNSUUJI_10"*/,
            (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v54 = LocalizationManager_TypeInfo->static_fields;
    v54->hiNumberString = (struct System_String_o *)v53;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v54->hiNumberString, (int32_t)v53, v55, v56);
    appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v57 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8190/*"KANNSUUJI_100"*/,
            (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v58 = LocalizationManager_TypeInfo->static_fields;
    v58->hi2NumberString = (struct System_String_o *)v57;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v58->hi2NumberString, (int32_t)v57, v59, v60);
  }
  v61 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v61->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v62 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_9286/*"NORMAL_EFFECT_COLOR"*/,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  v63 = LocalizationManager_TypeInfo;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( v62 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v63 = LocalizationManager_TypeInfo;
    }
    appended = (System_String_o *)v63->static_fields->lookup;
    if ( appended )
    {
      v65 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)appended,
              (Il2CppObject *)StringLiteral_9286/*"NORMAL_EFFECT_COLOR"*/,
              (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_ColorUtility__TryParseHtmlString(
        (System_String_o *)v65,
        &LocalizationManager_TypeInfo->static_fields->normalEffectColor,
        0);
      appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
      if ( appended )
      {
        v66 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)appended,
                (Il2CppObject *)StringLiteral_11524/*"SELECT_EFFECT_COLOR"*/,
                (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)v66,
          &LocalizationManager_TypeInfo->static_fields->selectEffectColor,
          0);
        return;
      }
    }
LABEL_63:
    sub_1C6BC60(appended, v8);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v63 = LocalizationManager_TypeInfo;
  }
  __asm { FMOV            V0.4S, #1.0 }
  v63->static_fields->selectEffectColor = _Q0;
  v63->static_fields->normalEffectColor = _Q0;
}


bool LocalizationManager__TryGet(
        System_String_o **resultText,
        System_String_o *key,
        System_String_o *defaultText,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool v10; // w22
  LocalizationManager_c *v11; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_4CB59C3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59C3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__ContainsKey(key, (const MethodInfo *)key);
  if ( v10 )
  {
    v11 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager_TypeInfo;
    }
    lookup = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->lookup;
    if ( !lookup )
      sub_1C6BC60(0, v7);
    defaultText = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       lookup,
                                       (Il2CppObject *)key,
                                       (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  *resultText = defaultText;
  sub_1C6B9AC((CGThumbnailListItem_o *)resultText, (int32_t)defaultText, v8, v9);
  return v10;
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
  if ( (byte_4CB59F3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_TextAsset___);
    this = (LocalizationManager___c__DisplayClass16_0_o *)sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB59F3 = 1;
  }
  if ( !assetData
    || (this = (LocalizationManager___c__DisplayClass16_0_o *)AssetData__GetObject_object_(
                                                                assetData,
                                                                (const MethodInfo_311C2F8 *)Method_AssetData_GetObject_TextAsset___)) == 0
    || (this = (LocalizationManager___c__DisplayClass16_0_o *)UnityEngine_TextAsset__get_text(
                                                                (UnityEngine_TextAsset_o *)this,
                                                                0),
        !v4->fields.ins) )
  {
    sub_1C6BC60(this, assetData);
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