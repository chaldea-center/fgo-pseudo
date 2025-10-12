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

  if ( (byte_4C370B7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C32C20(&System_Func_string__string__TypeInfo);
    sub_1C32C20(&System_Func_string__bool__TypeInfo);
    sub_1C32C20(&Method_LocalizationManager_ContainsKey__);
    sub_1C32C20(&Method_LocalizationManager_Get__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370B7 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  static_fields = LocalizationManager_TypeInfo->static_fields;
  static_fields->lookup = (struct System_Collections_Generic_Dictionary_string__string__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->lookup, (int32_t)v1, v3, v4);
  v5 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(v5, 0, Method_LocalizationManager_ContainsKey__, 0);
  if ( !byte_4C37147 )
  {
    sub_1C32C20(&NguiLocalizationManager_TypeInfo);
    byte_4C37147 = 1;
  }
  NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc = (struct System_Func_string__bool__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)NguiLocalizationManager_TypeInfo->static_fields, (int32_t)v5, v6, v7);
  v8 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_string__string__TypeInfo);
  System_Func_object__object____ctor(v8, 0, Method_LocalizationManager_Get__, 0);
  if ( !byte_4C37148 )
  {
    sub_1C32C20(&NguiLocalizationManager_TypeInfo);
    byte_4C37148 = 1;
  }
  v11 = NguiLocalizationManager_TypeInfo->static_fields;
  v11->getFunc = (struct System_Func_string__string__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11->getFunc, (int32_t)v8, v9, v10);
}


void LocalizationManager___ctor(LocalizationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C370F2 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_LocalizationManager___ctor__);
    byte_4C370F2 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_LocalizationManager___ctor__);
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

  if ( (byte_4C370EE & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    byte_4C370EE = 1;
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
      return System_String__Substring_63564468((System_String_o *)lowNumberString, v3, 1, 0);
LABEL_38:
    sub_1C32E7C(lowNumberString);
  }
  v7 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63596960(v7, 10, 0);
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
      lowNumberString = System_String__Substring_63564468((System_String_o *)lowNumberString, v8, 1, 0);
      if ( !v7 )
        goto LABEL_38;
      System_Text_StringBuilder__Append_63603608(v7, (System_String_o *)lowNumberString, 0);
    }
    lowNumberString = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !v7 )
      goto LABEL_38;
    System_Text_StringBuilder__Append_63603608(v7, LocalizationManager_TypeInfo->static_fields->hi2NumberString, 0);
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
    lowNumberString = System_String__Substring_63564468((System_String_o *)lowNumberString, v13, 1, 0);
    if ( !v7 )
      goto LABEL_38;
    System_Text_StringBuilder__Append_63603608(v7, (System_String_o *)lowNumberString, 0);
    lowNumberString = LocalizationManager_TypeInfo->static_fields->hiNumberString;
    if ( !lowNumberString )
      goto LABEL_38;
    lowNumberString = System_String__Substring_63564468((System_String_o *)lowNumberString, 0, 1, 0);
  }
  else
  {
    lowNumberString = static_fields->hiNumberString;
    if ( !lowNumberString )
      goto LABEL_38;
    lowNumberString = System_String__Substring_63564468((System_String_o *)lowNumberString, v13, 1, 0);
    if ( !v7 )
      goto LABEL_38;
  }
  System_Text_StringBuilder__Append_63603608(v7, (System_String_o *)lowNumberString, 0);
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
    v15 = System_String__Substring_63564468((System_String_o *)lowNumberString, v3, 1, 0);
    System_Text_StringBuilder__Append_63603608(v7, v15, 0);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                              v7,
                              v7->klass->vtable._3_ToString.method);
}


bool LocalizationManager__ContainsKey(System_String_o *key, const MethodInfo *method)
{
  LocalizationManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_4C370C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370C4 = 1;
  }
  v3 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = LocalizationManager_TypeInfo;
  }
  lookup = (System_Collections_Generic_Dictionary_object__object__o *)v3->static_fields->lookup;
  if ( !lookup )
    sub_1C32E7C(0);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           lookup,
           (Il2CppObject *)key,
           (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
}


System_String_o *LocalizationManager__ConvertNumberToRomaNumber(int32_t number, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  const MethodInfo *v10; // x1
  System_String_o *v11; // x19
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C370F1 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11161/*"ROMAN_NUMBER_{0}"*/);
    byte_4C370F1 = 1;
  }
  v13 = number;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v2, v3, v4, v5, v6, v7);
  v11 = System_String__Format((System_String_o *)StringLiteral_11161/*"ROMAN_NUMBER_{0}"*/, v9, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v11, v10);
}


System_String_o *LocalizationManager__Get(System_String_o *key, const MethodInfo *method)
{
  LocalizationManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_4C370C2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370C2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(key, method) )
    return key;
  v3 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = LocalizationManager_TypeInfo;
  }
  lookup = (System_Collections_Generic_Dictionary_object__object__o *)v3->static_fields->lookup;
  if ( !lookup )
    sub_1C32E7C(0);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              lookup,
                              (Il2CppObject *)key,
                              (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


System_String_o *LocalizationManager__GetAttackIconInfo(int32_t atk, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370E7 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2045/*"ATTACK_ICON_INFO"*/);
    byte_4C370E7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2045/*"ATTACK_ICON_INFO"*/, method);
  v12 = atk;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetAttackInfo(int32_t atk, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370E6 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2046/*"ATTACK_INFO"*/);
    byte_4C370E6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2046/*"ATTACK_INFO"*/, method);
  v12 = atk;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetBeforeTime(int64_t at, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int64_t v4; // x19
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  System_String_o *v12; // x19
  void *v13; // x0
  unsigned __int64 v14; // x21
  unsigned __int64 v15; // x20
  System_String_o *v16; // x0
  Il2CppObject *v17; // x0
  unsigned __int64 v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C370C6 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13390/*"TIME_BEFORE_MINUTES"*/);
    sub_1C32C20(&StringLiteral_13388/*"TIME_BEFORE_DAYS"*/);
    sub_1C32C20(&StringLiteral_13389/*"TIME_BEFORE_HOURS"*/);
    sub_1C32C20(&StringLiteral_13391/*"TIME_BEFORE_OVER_YEARS"*/);
    byte_4C370C6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = NetworkManager__getTime(0) - at;
  if ( v4 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13390/*"TIME_BEFORE_MINUTES"*/, v3);
    v13 = int_TypeInfo;
    LODWORD(v18) = 0;
  }
  else
  {
    if ( v4 <= 3599 )
    {
      v14 = v4 / 0x3CuLL;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13390/*"TIME_BEFORE_MINUTES"*/, v3);
      v18 = v14;
    }
    else
    {
      if ( v4 <= 86399 )
      {
        v15 = v4 / 0xE10uLL;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = (System_String_o *)StringLiteral_13389/*"TIME_BEFORE_HOURS"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v4 > 31535999 )
          return LocalizationManager__Get((System_String_o *)StringLiteral_13391/*"TIME_BEFORE_OVER_YEARS"*/, v3);
        v16 = (System_String_o *)StringLiteral_13388/*"TIME_BEFORE_DAYS"*/;
        v15 = v4 / 0x15180uLL;
      }
      v12 = LocalizationManager__Get(v16, v3);
      v18 = v15;
    }
    v13 = long_TypeInfo;
  }
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(v13, &v18, v6, v7, v8, v9, v10, v11);
  return System_String__Format(v12, v17, 0);
}


System_String_o *LocalizationManager__GetCostIconInfo(int32_t cost, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370E3 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3858/*"COST_ICON_INFO"*/);
    byte_4C370E3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3858/*"COST_ICON_INFO"*/, method);
  v12 = cost;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetCostInfo(int32_t cost, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370E2 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3859/*"COST_INFO"*/);
    byte_4C370E2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3859/*"COST_INFO"*/, method);
  v12 = cost;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetCountInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370D8 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3860/*"COUNT_INFO"*/);
    byte_4C370D8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3860/*"COUNT_INFO"*/, method);
  v12 = count;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetDate(int64_t time, const MethodInfo *method)
{
  System_DateTime_o v3; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x19
  System_DateTime_o v11; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x20
  System_DateTime_o v19; // x0
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  int32_t Day; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+8h] [xbp-38h] BYREF
  int32_t Year; // [xsp+Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C370D1 & 1) == 0 )
  {
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_25083/*"{0:D}/{1:D2}/{2:D2}"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C370D1 = 1;
  }
  if ( time < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41267996(time, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v3, 0);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Year, v4, v5, v6, v7, v8, v9);
  v11.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v11, 0);
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Month, v12, v13, v14, v15, v16, v17);
  v19.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v19, 0);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Day, v20, v21, v22, v23, v24, v25);
  return System_String__Format_63559904((System_String_o *)StringLiteral_25083/*"{0:D}/{1:D2}/{2:D2}"*/, v10, v18, v26, 0);
}


System_String_o *LocalizationManager__GetDateTime(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x19
  System_DateTime_o v4; // x0
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x20
  System_DateTime_o v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x20
  System_DateTime_o v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x20
  System_DateTime_o v35; // x0
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x20
  System_DateTime_o v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x6
  __int64 v51; // x7
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x20
  __int64 v56; // x0
  int32_t Minute; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-40h] BYREF
  int32_t Day; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+18h] [xbp-38h] BYREF
  int32_t Year; // [xsp+1Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4C370D3 & 1) == 0 )
  {
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_25084/*"{0:D}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_4C370D3 = 1;
  }
  if ( time >= 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_41267996(time, 0).fields._dateData;
    v3 = sub_1C32CC8(object___TypeInfo, 5);
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v4.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v4, 0);
    v11 = j_il2cpp_value_box_0(int_TypeInfo, &Year, v5, v6, v7, v8, v9, v10);
    if ( !v3 )
      sub_1C32E7C(v11);
    v14 = v11;
    if ( !v11 || (v11 = sub_1C32D5C(v11, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v3 + 24) )
        goto LABEL_27;
      *(_QWORD *)(v3 + 32) = v14;
      sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), v14, v12, v13);
      v15.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v15, 0);
      v11 = j_il2cpp_value_box_0(int_TypeInfo, &Month, v16, v17, v18, v19, v20, v21);
      v24 = v11;
      if ( !v11 || (v11 = sub_1C32D5C(v11, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v3 + 24) <= 1u )
          goto LABEL_27;
        *(_QWORD *)(v3 + 40) = v24;
        sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 40), v24, v22, v23);
        v25.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v25, 0);
        v11 = j_il2cpp_value_box_0(int_TypeInfo, &Day, v26, v27, v28, v29, v30, v31);
        v34 = v11;
        if ( !v11 || (v11 = sub_1C32D5C(v11, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v3 + 24) <= 2u )
            goto LABEL_27;
          *(_QWORD *)(v3 + 48) = v34;
          sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 48), v34, v32, v33);
          v35.fields._dateData = (uint64_t)&dateData;
          Hour = System_DateTime__get_Hour(v35, 0);
          v11 = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v36, v37, v38, v39, v40, v41);
          v44 = v11;
          if ( !v11 || (v11 = sub_1C32D5C(v11, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v3 + 24) <= 3u )
              goto LABEL_27;
            *(_QWORD *)(v3 + 56) = v44;
            sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 56), v44, v42, v43);
            v45.fields._dateData = (uint64_t)&dateData;
            Minute = System_DateTime__get_Minute(v45, 0);
            v11 = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v46, v47, v48, v49, v50, v51);
            v54 = v11;
            if ( !v11 || (v11 = sub_1C32D5C(v11, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v3 + 24) > 4u )
              {
                *(_QWORD *)(v3 + 64) = v54;
                sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 64), v54, v52, v53);
                return System_String__Format_63559972(
                         (System_String_o *)StringLiteral_25084/*"{0:D}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/,
                         (System_Object_array *)v3,
                         0);
              }
LABEL_27:
              sub_1C32E84(v11);
            }
          }
        }
      }
    }
    v56 = sub_1C32EA0(v11);
    sub_1C32D48(v56, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *LocalizationManager__GetDateTimeDayOfWeek(int64_t time, const MethodInfo *method)
{
  System_IFormatProvider_o *CultureInfo_64729664; // x20
  __int64 v4; // x19
  System_DateTime_o v5; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x21
  System_DateTime_o v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x21
  System_DateTime_o v26; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x21
  System_DateTime_o v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x20
  System_DateTime_o v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x20
  System_DateTime_o v50; // x0
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x20
  __int64 v61; // x0
  int32_t Minute; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-48h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Month; // [xsp+10h] [xbp-40h] BYREF
  int32_t Year; // [xsp+14h] [xbp-3Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C370D4 & 1) == 0 )
  {
    sub_1C32C20(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_25085/*"{0:D}/{1:D2}/{2:D2}({3}) {4:D2}:{5:D2}"*/);
    sub_1C32C20(&StringLiteral_21040/*"ja-JP"*/);
    sub_1C32C20(&StringLiteral_18497/*"ddd"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C370D4 = 1;
  }
  if ( time >= 1 )
  {
    if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
    CultureInfo_64729664 = (System_IFormatProvider_o *)System_Globalization_CultureInfo__GetCultureInfo_64729664(
                                                         (System_String_o *)StringLiteral_21040/*"ja-JP"*/,
                                                         0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_41267996(time, 0).fields._dateData;
    v4 = sub_1C32CC8(object___TypeInfo, 6);
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v5.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v5, 0);
    v12 = j_il2cpp_value_box_0(int_TypeInfo, &Year, v6, v7, v8, v9, v10, v11);
    if ( !v4 )
      sub_1C32E7C(v12);
    v15 = v12;
    if ( !v12 || (v12 = sub_1C32D5C(v12, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_32;
      *(_QWORD *)(v4 + 32) = v15;
      sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 32), v15, v13, v14);
      v16.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v16, 0);
      v12 = j_il2cpp_value_box_0(int_TypeInfo, &Month, v17, v18, v19, v20, v21, v22);
      v25 = v12;
      if ( !v12 || (v12 = sub_1C32D5C(v12, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v4 + 24) <= 1u )
          goto LABEL_32;
        *(_QWORD *)(v4 + 40) = v25;
        sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 40), v25, v23, v24);
        v26.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v26, 0);
        v12 = j_il2cpp_value_box_0(int_TypeInfo, &Day, v27, v28, v29, v30, v31, v32);
        v35 = v12;
        if ( !v12 || (v12 = sub_1C32D5C(v12, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v4 + 24) <= 2u )
            goto LABEL_32;
          *(_QWORD *)(v4 + 48) = v35;
          sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 48), v35, v33, v34);
          v36.fields._dateData = (uint64_t)&dateData;
          v12 = (__int64)System_DateTime__ToString_64918556(
                           v36,
                           (System_String_o *)StringLiteral_18497/*"ddd"*/,
                           CultureInfo_64729664,
                           0);
          v39 = v12;
          if ( !v12 || (v12 = sub_1C32D5C(v12, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v4 + 24) <= 3u )
              goto LABEL_32;
            *(_QWORD *)(v4 + 56) = v39;
            sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 56), v39, v37, v38);
            v40.fields._dateData = (uint64_t)&dateData;
            Hour = System_DateTime__get_Hour(v40, 0);
            v12 = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v41, v42, v43, v44, v45, v46);
            v49 = v12;
            if ( !v12 || (v12 = sub_1C32D5C(v12, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v4 + 24) <= 4u )
                goto LABEL_32;
              *(_QWORD *)(v4 + 64) = v49;
              sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 64), v49, v47, v48);
              v50.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v50, 0);
              v12 = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v51, v52, v53, v54, v55, v56);
              v59 = v12;
              if ( !v12 || (v12 = sub_1C32D5C(v12, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v4 + 24) > 5u )
                {
                  *(_QWORD *)(v4 + 72) = v59;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 72), v59, v57, v58);
                  return System_String__Format_63559972(
                           (System_String_o *)StringLiteral_25085/*"{0:D}/{1:D2}/{2:D2}({3}) {4:D2}:{5:D2}"*/,
                           (System_Object_array *)v4,
                           0);
                }
LABEL_32:
                sub_1C32E84(v12);
              }
            }
          }
        }
      }
    }
    v61 = sub_1C32EA0(v12);
    sub_1C32D48(v61, 0);
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
  System_String_o *NumberFormat_41175184; // x1
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
  if ( (byte_4C370E9 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_803/*"+"*/);
    sub_1C32C20(&StringLiteral_5649/*"EVENT_POINT_RATE_INFO"*/);
    sub_1C32C20(&StringLiteral_5647/*"EVENT_POINT_NONE_INFO"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_5644/*"EVENT_POINT_MAX_INFO"*/);
    sub_1C32C20(&StringLiteral_5636/*"EVENT_POINT_ADD_INFO"*/);
    sub_1C32C20(&StringLiteral_5637/*"EVENT_POINT_ADD_RATE_INFO"*/);
    byte_4C370E9 = 1;
  }
  v29 = 0;
  if ( ratePoint >= 3000 && isMax )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_5644/*"EVENT_POINT_MAX_INFO"*/;
    return LocalizationManager__Get((System_String_o *)*v9, *(const MethodInfo **)&ratePoint);
  }
  if ( addPoint < 0 )
    v11 = &StringLiteral_1/*""*/;
  else
    v11 = &StringLiteral_803/*"+"*/;
  v12 = (System_String_o *)*v11;
  v14 = System_Int32__ToString((int32_t)&v30, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat_41175184 = LocalizationManager__GetNumberFormat_41175184(v14, v13);
  if ( unit )
    v16 = unit;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  v17 = System_String__Concat_63556792(v12, NumberFormat_41175184, v16, 0);
  if ( ratePoint < 0 )
    v18 = &StringLiteral_1/*""*/;
  else
    v18 = &StringLiteral_803/*"+"*/;
  v19 = (System_String_o *)*v18;
  v20 = (Il2CppObject *)v17;
  v29 = ratePoint / 10;
  v22 = System_Int32__ToString((int32_t)&v29, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__GetNumberFormat_41175184(v22, v21);
  v24 = (Il2CppObject *)System_String__Concat_63518544(v19, v23, 0);
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( ratePoint && v30 )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5637/*"EVENT_POINT_ADD_RATE_INFO"*/, *(const MethodInfo **)&ratePoint);
    return System_String__Format_63559836(v26, v20, v24, 0);
  }
  else
  {
    if ( v30 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5636/*"EVENT_POINT_ADD_INFO"*/, *(const MethodInfo **)&ratePoint);
      v28 = v20;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !ratePoint )
      {
        v9 = &StringLiteral_5647/*"EVENT_POINT_NONE_INFO"*/;
        return LocalizationManager__Get((System_String_o *)*v9, *(const MethodInfo **)&ratePoint);
      }
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5649/*"EVENT_POINT_RATE_INFO"*/, *(const MethodInfo **)&ratePoint);
      v28 = v24;
    }
    return System_String__Format(v27, v28, 0);
  }
}


System_String_o *LocalizationManager__GetHaveUnitInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370D7 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7197/*"HAVE_UNIT_INFO"*/);
    byte_4C370D7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7197/*"HAVE_UNIT_INFO"*/, method);
  v12 = count;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetHpIconInfo(int32_t hp, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370E5 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7252/*"HP_ICON_INFO"*/);
    byte_4C370E5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7252/*"HP_ICON_INFO"*/, method);
  v12 = hp;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetHpInfo(int32_t hp, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370E4 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7253/*"HP_INFO"*/);
    byte_4C370E4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7253/*"HP_INFO"*/, method);
  v12 = hp;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetIdIconInfo(int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370DE & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7427/*"ID_ICON_INFO"*/);
    byte_4C370DE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7427/*"ID_ICON_INFO"*/, method);
  v12 = id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetIfExists(System_String_array *keys, const MethodInfo *method)
{
  System_String_array *v2; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v4; // x22
  System_String_o *v5; // x20

  v2 = keys;
  if ( (byte_4C370C5 & 1) == 0 )
  {
    keys = (System_String_array *)sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370C5 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(keys);
  max_length = v2->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= (unsigned int)max_length )
      sub_1C32E84(keys);
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

  if ( (byte_4C370BE & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370BE = 1;
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

  if ( (byte_4C370BF & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370BF = 1;
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

  if ( (byte_4C370BD & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370BD = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int64_t v9; // x23
  int64_t v10; // x20
  Il2CppObject *v11; // x19
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  int64_t v27; // [xsp+8h] [xbp-48h] BYREF
  int64_t v28; // [xsp+10h] [xbp-40h] BYREF
  int64_t v29; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C370D5 & 1) == 0 )
  {
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&StringLiteral_25065/*"{0:D2}h{1:D2}m{2:D2}s"*/);
    byte_4C370D5 = 1;
  }
  v9 = time % 60;
  v10 = time / 60 % 60;
  v29 = time / 3600;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29, v2, v3, v4, v5, v6, v7);
  v28 = v10;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v28, v12, v13, v14, v15, v16, v17);
  v27 = v9;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v27, v19, v20, v21, v22, v23, v24);
  return System_String__Format_63559904((System_String_o *)StringLiteral_25065/*"{0:D2}h{1:D2}m{2:D2}s"*/, v11, v18, v25, 0);
}


System_String_o *LocalizationManager__GetLevelIconInfo(int32_t lv, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370E0 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8261/*"LEVEL_ICON_INFO"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C370E0 = 1;
  }
  if ( lv < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8261/*"LEVEL_ICON_INFO"*/, method);
  v12 = lv;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetLevelInfo(int32_t lv, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370DF & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8262/*"LEVEL_INFO"*/);
    byte_4C370DF = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8262/*"LEVEL_INFO"*/, method);
  v12 = lv;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetLevelList(System_Int32_array *levelList, const MethodInfo *method)
{
  System_Int32_array *v2; // x19
  il2cpp_array_size_t max_length; // x21
  System_Text_StringBuilder_o *v4; // x20
  unsigned __int64 v5; // x22
  __int64 v6; // x25
  int *m_Items; // x21
  System_String_o *v8; // x1

  v2 = levelList;
  if ( (byte_4C370EA & 1) == 0 )
  {
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_861/*"-"*/);
    levelList = (System_Int32_array *)sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C370EA = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  max_length = v2->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63596960(v4, 4 * max_length, 0);
  if ( (int)max_length < 1 )
  {
    if ( v4 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                                  v4,
                                  v4->klass->vtable._3_ToString.method);
LABEL_18:
    sub_1C32E7C(levelList);
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
      levelList = (System_Int32_array *)System_Text_StringBuilder__Append_63603608(
                                          v4,
                                          (System_String_o *)StringLiteral_1048/*"/"*/,
                                          0);
    }
    if ( v5 >= LODWORD(v2->max_length) )
      sub_1C32E84(levelList);
    if ( *m_Items <= 0 )
    {
      v8 = (System_String_o *)StringLiteral_861/*"-"*/;
      if ( !v4 )
        goto LABEL_18;
    }
    else
    {
      levelList = (System_Int32_array *)System_Int32__ToString((int32_t)m_Items, 0);
      v8 = (System_String_o *)levelList;
      if ( !v4 )
        goto LABEL_18;
    }
    levelList = (System_Int32_array *)System_Text_StringBuilder__Append_63603608(v4, v8, 0);
    ++v5;
    ++m_Items;
  }
  while ( v6 != v5 );
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                              v4,
                              v4->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetLevelList_41178676(SkillInfo_array *skillInfoList, const MethodInfo *method)
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
  if ( (byte_4C370EB & 1) == 0 )
  {
    sub_1C32C20(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_15920/*"[FCF050]"*/);
    sub_1C32C20(&StringLiteral_15980/*"[ff730f]"*/);
    sub_1C32C20(&StringLiteral_15821/*"[-]"*/);
    sub_1C32C20(&StringLiteral_861/*"-"*/);
    skillInfoList = (SkillInfo_array *)sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C370EB = 1;
  }
  if ( !v2 )
    goto LABEL_32;
  max_length = v2->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63596960(v4, 15 * max_length, 0);
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    v6 = (unsigned int)max_length;
    do
    {
      if ( v5 >= LODWORD(v2->max_length) )
        sub_1C32E84(skillInfoList);
      v7 = (int *)v2->m_Items[v5];
      if ( v5 )
      {
        if ( !v4 )
          goto LABEL_32;
        skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_63603608(
                                             v4,
                                             (System_String_o *)StringLiteral_1048/*"/"*/,
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
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_63603608(
                                               v4,
                                               (System_String_o *)skillInfoList,
                                               0);
          v13 = (System_String_o **)&StringLiteral_15821/*"[-]"*/;
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
          v12 = &StringLiteral_15980/*"[ff730f]"*/;
          if ( !v4 )
            goto LABEL_32;
        }
        else
        {
          v11 = (int)skillInfoList;
          if ( (_DWORD)skillInfoList != 1 )
            goto LABEL_22;
          v12 = &StringLiteral_15920/*"[FCF050]"*/;
          if ( !v4 )
            goto LABEL_32;
        }
        System_Text_StringBuilder__Append_63603608(v4, (System_String_o *)*v12, 0);
        v14 = System_Int32__ToString(v8, 0);
        System_Text_StringBuilder__Append_63603608(v4, v14, 0);
        v13 = (System_String_o **)&StringLiteral_15821/*"[-]"*/;
      }
      else
      {
        v13 = (System_String_o **)&StringLiteral_861/*"-"*/;
        if ( !v4 )
          goto LABEL_32;
      }
LABEL_27:
      skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_63603608(v4, *v13, 0);
LABEL_28:
      ++v5;
    }
    while ( v6 != v5 );
  }
  if ( !v4 )
LABEL_32:
    sub_1C32E7C(skillInfoList);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                              v4,
                              v4->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetNoEntryName(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4C370BC & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370BC = 1;
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

  if ( (byte_4C370C0 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370C0 = 1;
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
  if ( (byte_4C370D9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C370D9 = 1;
  }
  return System_Int32__ToString_65028652((int32_t)&v3, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
}


System_String_o *LocalizationManager__GetNumberFormatLong(int64_t data, const MethodInfo *method)
{
  int64_t v3; // [xsp+8h] [xbp-18h] BYREF

  v3 = data;
  if ( (byte_4C370DA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C370DA = 1;
  }
  return System_Int64__ToString_65033828((int64_t)&v3, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
}


System_String_o *LocalizationManager__GetNumberFormat_41175184(System_String_o *data, const MethodInfo *method)
{
  int32_t stringLength; // w22
  int32_t v4; // w20
  int32_t v5; // w1
  int v6; // w23
  System_Text_StringBuilder_o *v7; // x21
  System_Text_StringBuilder_o *appended; // x0
  int v9; // w23
  uint16_t Chars; // w1

  if ( (byte_4C370DB & 1) == 0 )
  {
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C370DB = 1;
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
  v7 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63596960(v7, 32, 0);
  if ( v4 >= 1 )
  {
    if ( !v7 )
LABEL_26:
      sub_1C32E7C(appended);
    appended = System_Text_StringBuilder__Append_63603924(v7, data, 0, v4, 0);
  }
  if ( v6 % 3 )
    v9 = v6 % 3;
  else
    v9 = 3;
  do
  {
    if ( v9 <= 0 )
    {
      if ( !v7 )
        goto LABEL_26;
      System_Text_StringBuilder__Append_63605936(v7, 0x2Cu, 0);
      Chars = System_String__get_Chars(data, v4, 0);
      v9 = 3;
    }
    else
    {
      appended = (System_Text_StringBuilder_o *)System_String__get_Chars(data, v4, 0);
      if ( !v7 )
        goto LABEL_26;
      Chars = (unsigned __int16)appended;
    }
    appended = System_Text_StringBuilder__Append_63605936(v7, Chars, 0);
    ++v4;
    --v9;
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

  if ( (byte_4C370D0 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_327/*" ~ "*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C370D0 = 1;
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
  v12 = System_String__Concat_63518544(v9, DateTime, 0);
  v14 = System_String__Concat_63518544(v12, (System_String_o *)StringLiteral_327/*" ~ "*/, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isDispEndTime )
    Date = LocalizationManager__GetDateTime(endedAt, v13);
  else
    Date = LocalizationManager__GetDate(endedAt, v13);
  return System_String__Concat_63518544(v14, Date, 0);
}


System_String_o *LocalizationManager__GetPrice2Info(int32_t price, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4C370DD & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10467/*"PRICE2_INFO"*/);
    byte_4C370DD = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10467/*"PRICE2_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(price, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetPriceInfo(int32_t price, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4C370DC & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10468/*"PRICE_INFO"*/);
    byte_4C370DC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10468/*"PRICE_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(price, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetRarityInfo(int32_t rare, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370E1 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_16014/*"[{0}]"*/);
    byte_4C370E1 = 1;
  }
  v11 = rare;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_16014/*"[{0}]"*/, v9, 0);
}


bool LocalizationManager__GetRestIsLastHours(int64_t at, const MethodInfo *method)
{
  int64_t v3; // x8

  if ( (byte_4C370CF & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C370CF = 1;
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  _QWORD *v14; // x8
  System_String_o *v15; // x19
  unsigned __int64 v16; // x20
  __int64 *v17; // x8
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  Il2CppObject *v20; // x0
  unsigned __int64 v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C370C7 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13415/*"TIME_REST_DAYS"*/);
    sub_1C32C20(&StringLiteral_13418/*"TIME_REST_HOURS"*/);
    sub_1C32C20(&StringLiteral_13419/*"TIME_REST_MINUTES"*/);
    sub_1C32C20(&StringLiteral_13438/*"TIME_REST_TIMEOVER"*/);
    sub_1C32C20(&StringLiteral_13421/*"TIME_REST_OVER_YEARS"*/);
    byte_4C370C7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = at - NetworkManager__getTime(0);
  if ( v4 < 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = &StringLiteral_13438/*"TIME_REST_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v5, v3);
  }
  if ( v4 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13419/*"TIME_REST_MINUTES"*/, v3);
    v14 = &int_TypeInfo;
    v15 = v7;
    LODWORD(v21) = 0;
    goto LABEL_28;
  }
  if ( v4 <= 3599 )
  {
    v16 = v4 / 0x3CuLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_13419/*"TIME_REST_MINUTES"*/;
  }
  else
  {
    if ( v4 > 86399 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v4 > 31535999 )
      {
        v5 = &StringLiteral_13421/*"TIME_REST_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v5, v3);
      }
      v18 = (System_String_o *)StringLiteral_13415/*"TIME_REST_DAYS"*/;
      v16 = v4 / 0x15180uLL;
      goto LABEL_27;
    }
    v16 = v4 / 0xE10uLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = &StringLiteral_13418/*"TIME_REST_HOURS"*/;
  }
  v18 = (System_String_o *)*v17;
LABEL_27:
  v19 = LocalizationManager__Get(v18, v3);
  v14 = &long_TypeInfo;
  v15 = v19;
  v21 = v16;
LABEL_28:
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(*v14, &v21, v8, v9, v10, v11, v12, v13);
  return System_String__Format(v15, v20, 0);
}


System_String_o *LocalizationManager__GetRestTime2(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  __int64 v5; // x19
  __int64 *v6; // x8
  System_String_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  _QWORD *v15; // x8
  System_String_o *v16; // x19
  unsigned __int64 v17; // x20
  __int64 *v18; // x8
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  Il2CppObject *v21; // x0
  unsigned __int64 v22; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_4C370C8 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13399/*"TIME_REST2_MINUTES"*/);
    sub_1C32C20(&StringLiteral_13401/*"TIME_REST2_OVER_YEARS"*/);
    sub_1C32C20(&StringLiteral_13398/*"TIME_REST2_HOURS"*/);
    sub_1C32C20(&StringLiteral_13397/*"TIME_REST2_DAYS"*/);
    sub_1C32C20(&StringLiteral_13402/*"TIME_REST2_TIMEOVER"*/);
    byte_4C370C8 = 1;
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
    v6 = &StringLiteral_13402/*"TIME_REST2_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
  }
  if ( v5 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13399/*"TIME_REST2_MINUTES"*/, (const MethodInfo *)nowTime);
    v15 = &int_TypeInfo;
    v16 = v8;
    LODWORD(v22) = 0;
    goto LABEL_30;
  }
  if ( v5 <= 3599 )
  {
    v17 = v5 / 0x3CuLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = &StringLiteral_13399/*"TIME_REST2_MINUTES"*/;
  }
  else
  {
    if ( v5 > 86399 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v5 > 31535999 )
      {
        v6 = &StringLiteral_13401/*"TIME_REST2_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
      }
      v19 = (System_String_o *)StringLiteral_13397/*"TIME_REST2_DAYS"*/;
      v17 = v5 / 0x15180uLL;
      goto LABEL_29;
    }
    v17 = v5 / 0xE10uLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = &StringLiteral_13398/*"TIME_REST2_HOURS"*/;
  }
  v19 = (System_String_o *)*v18;
LABEL_29:
  v20 = LocalizationManager__Get(v19, (const MethodInfo *)nowTime);
  v15 = &long_TypeInfo;
  v16 = v20;
  v22 = v17;
LABEL_30:
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(*v15, &v22, v9, v10, v11, v12, v13, v14);
  return System_String__Format(v16, v21, 0);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x19
  System_TimeSpan_o v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x20
  System_TimeSpan_o v26; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-40h] BYREF
  int v37; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t ticks; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C370C9 & 1) == 0 )
  {
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&System_TimeSpan_TypeInfo);
    sub_1C32C20(&StringLiteral_25063/*"{0:D2}:{1:D2}:{2:D2}"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C370C9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( at - NetworkManager__getTime(0) < 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4.fields._dateData = NetworkManager__getDateTime_41267668(Time, 0).fields._dateData;
  v5.fields._dateData = NetworkManager__getDateTime_41267668(at, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v6.fields._dateData = v5.fields._dateData;
  v7.fields._dateData = v4.fields._dateData;
  ticks = System_DateTime__op_Subtraction_64921152(v6, v7, 0).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v8.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v8, 0);
  v10.fields._ticks = (int64_t)&ticks;
  v37 = Hours + 24 * System_TimeSpan__get_Days(v10, 0);
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v11, v12, v13, v14, v15, v16);
  v18.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v18, 0);
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v19, v20, v21, v22, v23, v24);
  v26.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v26, 0);
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v27, v28, v29, v30, v31, v32);
  return System_String__Format_63559904((System_String_o *)StringLiteral_25063/*"{0:D2}:{1:D2}:{2:D2}"*/, v17, v25, v33, 0);
}


System_String_o *LocalizationManager__GetRestTime4(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int64_t v10; // x8
  unsigned int v11; // w10
  __int64 v12; // x21
  __int64 v13; // x20
  Il2CppObject *v14; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  __int64 v30; // [xsp+0h] [xbp-40h] BYREF
  __int64 v31; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v32; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C370CA & 1) == 0 )
  {
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_25063/*"{0:D2}:{1:D2}:{2:D2}"*/);
    sub_1C32C20(&StringLiteral_1456/*"99:99:99"*/);
    byte_4C370CA = 1;
  }
  if ( nowTime < 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  v10 = at - nowTime;
  if ( at - nowTime < 0 )
    return 0;
  if ( v10 >= 360000 )
    return (System_String_o *)StringLiteral_1456/*"99:99:99"*/;
  v11 = ((unsigned __int64)(-2004318071LL * ((int)((0x44444444800LL * (unsigned __int64)(unsigned int)v10) >> 32) >> 16)) >> 32)
      + (__int16)((unsigned int)v10 / 0x3C);
  v12 = (unsigned int)v10 % 0x3C;
  v13 = (__int16)((unsigned int)v10 / 0x3C - 60 * ((v11 >> 5) + (v11 >> 31)));
  v32 = (unsigned int)v10 / 0xE10uLL;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32, method, v3, v4, v5, v6, v7);
  v31 = v13;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31, v15, v16, v17, v18, v19, v20);
  v30 = v12;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v30, v22, v23, v24, v25, v26, v27);
  return System_String__Format_63559904((System_String_o *)StringLiteral_25063/*"{0:D2}:{1:D2}:{2:D2}"*/, v14, v21, v28, 0);
}


System_String_o *LocalizationManager__GetRestTime5(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  __int64 v5; // x19
  __int64 *v6; // x8
  System_String_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  _QWORD *v15; // x8
  System_String_o *v16; // x19
  unsigned __int64 v17; // x20
  __int64 *v18; // x8
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  Il2CppObject *v21; // x0
  unsigned __int64 v22; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_4C370CB & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13404/*"TIME_REST5_HOURS"*/);
    sub_1C32C20(&StringLiteral_13407/*"TIME_REST5_TIMEOVER"*/);
    sub_1C32C20(&StringLiteral_13406/*"TIME_REST5_OVER_YEARS"*/);
    sub_1C32C20(&StringLiteral_13403/*"TIME_REST5_DAYS"*/);
    sub_1C32C20(&StringLiteral_13405/*"TIME_REST5_MINUTES"*/);
    byte_4C370CB = 1;
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
    v6 = &StringLiteral_13407/*"TIME_REST5_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
  }
  if ( v5 <= 59 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13405/*"TIME_REST5_MINUTES"*/, (const MethodInfo *)nowTime);
    v15 = &int_TypeInfo;
    v16 = v8;
    LODWORD(v22) = 0;
    goto LABEL_30;
  }
  if ( v5 <= 3599 )
  {
    v17 = v5 / 0x3CuLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = &StringLiteral_13405/*"TIME_REST5_MINUTES"*/;
  }
  else
  {
    if ( v5 > 86399 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v5 > 31535999 )
      {
        v6 = &StringLiteral_13406/*"TIME_REST5_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v6, (const MethodInfo *)nowTime);
      }
      v19 = (System_String_o *)StringLiteral_13403/*"TIME_REST5_DAYS"*/;
      v17 = v5 / 0x15180uLL;
      goto LABEL_29;
    }
    v17 = v5 / 0xE10uLL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = &StringLiteral_13404/*"TIME_REST5_HOURS"*/;
  }
  v19 = (System_String_o *)*v18;
LABEL_29:
  v20 = LocalizationManager__Get(v19, (const MethodInfo *)nowTime);
  v15 = &long_TypeInfo;
  v16 = v20;
  v22 = v17;
LABEL_30:
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(*v15, &v22, v9, v10, v11, v12, v13, v14);
  return System_String__Format(v16, v21, 0);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  System_Int64_c **v19; // x8
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  System_Int64_c *v22; // x0
  unsigned __int64 *v23; // x1
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x20
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  const MethodInfo *v35; // x1
  unsigned __int64 v36; // x22
  unsigned __int64 v37; // x21
  System_String_o *v38; // x20
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  const MethodInfo *v47; // x1
  unsigned __int64 v48; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v49; // [xsp+8h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_4C370CC & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13413/*"TIME_REST6_TIMEOVER"*/);
    sub_1C32C20(&StringLiteral_13410/*"TIME_REST6_HOURS"*/);
    sub_1C32C20(&StringLiteral_13412/*"TIME_REST6_OVER_YEARS"*/);
    sub_1C32C20(&StringLiteral_13411/*"TIME_REST6_MINUTES"*/);
    sub_1C32C20(&StringLiteral_13409/*"TIME_REST6_HEAD"*/);
    sub_1C32C20(&StringLiteral_13408/*"TIME_REST6_DAYS"*/);
    byte_4C370CC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13409/*"TIME_REST6_HEAD"*/, (const MethodInfo *)nowTime);
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
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13411/*"TIME_REST6_MINUTES"*/, v5);
      v19 = (System_Int64_c **)&int_TypeInfo;
      v20 = v12;
      LODWORD(v49) = 0;
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
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13410/*"TIME_REST6_HOURS"*/, v5);
          v49 = v9;
          v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v49, v27, v28, v29, v30, v31, v32);
          v34 = System_String__Format(v26, v33, 0);
          v6 = System_String__Concat_63518544(v6, v34, 0);
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13411/*"TIME_REST6_MINUTES"*/, v35);
          v22 = long_TypeInfo;
          v48 = v8 % 0x3C;
        }
        else
        {
          if ( v7 > 31535999 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13412/*"TIME_REST6_OVER_YEARS"*/, v5);
            return System_String__Concat_63518544(v6, v10, 0);
          }
          v36 = v7 / 0x15180uLL;
          v37 = v9 % 0x18;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_13408/*"TIME_REST6_DAYS"*/, v5);
          v49 = v36;
          v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v49, v39, v40, v41, v42, v43, v44);
          v46 = System_String__Format(v38, v45, 0);
          v6 = System_String__Concat_63518544(v6, v46, 0);
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13410/*"TIME_REST6_HOURS"*/, v47);
          v22 = long_TypeInfo;
          v48 = v37;
        }
        v23 = &v48;
LABEL_27:
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(v22, v23, v13, v14, v15, v16, v17, v18);
        v25 = System_String__Format(v20, v24, 0);
        return System_String__Concat_63518544(v6, v25, 0);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13411/*"TIME_REST6_MINUTES"*/, v5);
      v19 = &long_TypeInfo;
      v20 = v21;
      v49 = v8;
    }
    v22 = *v19;
    v23 = &v49;
    goto LABEL_27;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_13413/*"TIME_REST6_TIMEOVER"*/, v5);
}


System_String_o *LocalizationManager__GetRestTimeInFormat(
        int64_t at,
        int64_t nowTime,
        System_String_o *format,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int64_t v11; // x8
  unsigned int v12; // w10
  __int64 v13; // x22
  __int64 v14; // x21
  Il2CppObject *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x21
  void *v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x0
  __int64 v44; // [xsp+8h] [xbp-48h] BYREF
  __int64 v45; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v46; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C370CD & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C370CD = 1;
  }
  if ( nowTime < 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  v11 = at - nowTime;
  if ( at - nowTime < 0 )
  {
    LODWORD(v46) = 0;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, format, method, v4, v5, v6, v7);
    LODWORD(v45) = 0;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v30, v31, v32, v33, v34, v35);
    v29 = int_TypeInfo;
    LODWORD(v44) = 0;
  }
  else if ( v11 >= 360000 )
  {
    LODWORD(v46) = 99;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, format, method, v4, v5, v6, v7);
    LODWORD(v45) = 99;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v36, v37, v38, v39, v40, v41);
    v29 = int_TypeInfo;
    LODWORD(v44) = 99;
  }
  else
  {
    v12 = ((unsigned __int64)(-2004318071LL
                            * ((int)((0x44444444800LL * (unsigned __int64)(unsigned int)v11) >> 32) >> 16)) >> 32)
        + (__int16)((unsigned int)v11 / 0x3C);
    v13 = (unsigned int)v11 % 0x3C;
    v14 = (__int16)((unsigned int)v11 / 0x3C - 60 * ((v12 >> 5) + (v12 >> 31)));
    v46 = (unsigned int)v11 / 0xE10uLL;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46, format, method, v4, v5, v6, v7);
    v45 = v14;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v45, v16, v17, v18, v19, v20, v21);
    v29 = long_TypeInfo;
    v44 = v13;
  }
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(v29, &v44, v22, v23, v24, v25, v26, v27);
  return System_String__Format_63559904(format, v15, v28, v42, 0);
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

  if ( (byte_4C370CE & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13446/*"TIME_STR_TIMEOVER"*/);
    sub_1C32C20(&StringLiteral_13443/*"TIME_STR_MINUTES"*/);
    sub_1C32C20(&StringLiteral_13441/*"TIME_STR_DAYS"*/);
    sub_1C32C20(&StringLiteral_13445/*"TIME_STR_OVER_YEARS"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_1172/*"1"*/);
    sub_1C32C20(&StringLiteral_13442/*"TIME_STR_HOURS"*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C370CE = 1;
  }
  v23 = 0;
  v24 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v9 = at - NetworkManager__getTime(0);
  if ( v9 < 0 )
  {
    *numStr = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)numStr, StringLiteral_1/*""*/, v7, v8);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_13446/*"TIME_STR_TIMEOVER"*/;
  }
  else
  {
    if ( v9 <= 59 )
    {
      *numStr = (System_String_o *)StringLiteral_1122/*"0"*/;
      v12 = StringLiteral_1122/*"0"*/;
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
          sub_1C32BC4((CGThumbnailListItem_o *)numStr, (int32_t)v17, v18, v19);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v11 = &StringLiteral_13442/*"TIME_STR_HOURS"*/;
        }
        else
        {
          v23 = v9 / 0x15180uLL;
          if ( (unsigned __int64)v9 <= 0x1E1337F )
          {
            v20 = System_Int64__ToString((int64_t)&v23, 0);
            *numStr = v20;
            sub_1C32BC4((CGThumbnailListItem_o *)numStr, (int32_t)v20, v21, v22);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v11 = &StringLiteral_13441/*"TIME_STR_DAYS"*/;
          }
          else
          {
            *numStr = (System_String_o *)StringLiteral_1172/*"1"*/;
            sub_1C32BC4((CGThumbnailListItem_o *)numStr, StringLiteral_1172/*"1"*/, v7, v8);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v11 = &StringLiteral_13445/*"TIME_STR_OVER_YEARS"*/;
          }
        }
        goto LABEL_21;
      }
      v13 = System_Int64__ToString((int64_t)&v25, 0);
      v12 = (int)v13;
      *numStr = v13;
    }
    sub_1C32BC4((CGThumbnailListItem_o *)numStr, v12, v7, v8);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_13443/*"TIME_STR_MINUTES"*/;
  }
LABEL_21:
  v14 = LocalizationManager__Get((System_String_o *)*v11, v10);
  *charStr = v14;
  sub_1C32BC4((CGThumbnailListItem_o *)charStr, (int32_t)v14, v15, v16);
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

  if ( (byte_4C370C1 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370C1 = 1;
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
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C370E8 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_12364/*"STONE_INFO"*/);
    byte_4C370E8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_12364/*"STONE_INFO"*/, method);
  v12 = n;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format(v3, v10, 0);
}


System_String_o *LocalizationManager__GetTime(int64_t time, const MethodInfo *method)
{
  System_DateTime_o v3; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x19
  System_DateTime_o v11; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x0
  int32_t Minute; // [xsp+8h] [xbp-38h] BYREF
  int32_t Hour; // [xsp+Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C370D2 & 1) == 0 )
  {
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_25062/*"{0:D2}:{1:D2}"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C370D2 = 1;
  }
  if ( time < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41267996(time, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v3, 0);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Hour, v4, v5, v6, v7, v8, v9);
  v11.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v11, 0);
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minute, v12, v13, v14, v15, v16, v17);
  return System_String__Format_63559836((System_String_o *)StringLiteral_25062/*"{0:D2}:{1:D2}"*/, v10, v18, 0);
}


System_String_o *LocalizationManager__GetUnitInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4C370D6 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_14812/*"UNIT_INFO"*/);
    byte_4C370D6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_14812/*"UNIT_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(count, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetUnknownName(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4C370BB & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370BB = 1;
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

  if ( (byte_4C370B9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
    byte_4C370B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C32E7C(v2);
    LocalizationManager__InitializeLocal((LocalizationManager_o *)Instance, v3);
  }
}


void LocalizationManager__InitializeLocal(LocalizationManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mainTextData; // x20
  UnityEngine_TextAsset_o *v4; // x0
  LocalizationManager_o *text; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C370EF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C370EF = 1;
  }
  mainTextData = (UnityEngine_Object_o *)this->fields.mainTextData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mainTextData, 0, 0) )
  {
    v4 = this->fields.mainTextData;
    if ( !v4 )
      sub_1C32E7C(0);
    text = (LocalizationManager_o *)UnityEngine_TextAsset__get_text(v4, 0);
    LocalizationManager__SetTextData(text, (System_String_o *)text, v6);
  }
}


bool LocalizationManager__IsBusySetAssetData(const MethodInfo *method)
{
  LocalizationManager_c *v1; // x0

  if ( (byte_4C370B8 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370B8 = 1;
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  UnityEngine_Object_o *v5; // x20
  LocalizationManager_c *v6; // x0
  AssetLoader_LoadEndDataHandler_o *v7; // x20

  if ( (byte_4C370BA & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
    sub_1C32C20(&Method_LocalizationManager___c__DisplayClass16_0__LoadAssetData_b__0__);
    sub_1C32C20(&LocalizationManager___c__DisplayClass16_0_TypeInfo);
    sub_1C32C20(&StringLiteral_8483/*"Localization"*/);
    byte_4C370BA = 1;
  }
  v1 = sub_1C32E6C(LocalizationManager___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
  if ( !v1 )
    sub_1C32E7C(Instance);
  *(_QWORD *)(v1 + 16) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 16), (int32_t)Instance, v3, v4);
  v5 = *(UnityEngine_Object_o **)(v1 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    v6 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = LocalizationManager_TypeInfo;
    }
    v6->static_fields->isBusySetAssetData = 1;
    v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v7,
      (Il2CppObject *)v1,
      Method_LocalizationManager___c__DisplayClass16_0__LoadAssetData_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_8483/*"Localization"*/, v7, 1, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x27
  __int64 v14; // x8
  char *v15; // x27
  int32_t v16; // w26
  Il2CppObject *v17; // x0
  ServantEntity_o *v18; // x25
  Il2CppObject *Master_object; // x27
  int32_t v20; // w1
  System_String_o *unknownNameText; // x1
  unsigned int v22; // w8
  System_String_o **v23; // x8
  bool v25; // [xsp+4h] [xbp-6Ch]
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C370EC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_23281/*"servantName "*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C370EC = 1;
  }
  entity = 0;
  if ( !text )
    return text;
  stringLength = text->fields._stringLength;
  if ( !stringLength )
    return (System_String_o *)StringLiteral_1/*""*/;
  v25 = sealLimitCountCheck;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = System_String__IndexOf_63576936(text, (System_String_o *)StringLiteral_15802/*"["*/, v6, 0);
    if ( v8 < 0 )
      break;
    v9 = v8;
    Instance = (void *)System_String__IndexOf_63576936(text, (System_String_o *)StringLiteral_16056/*"]"*/, v8, 0);
    if ( ((unsigned int)Instance & 0x80000000) != 0 )
      break;
    v11 = (int)Instance;
    if ( !v7 )
    {
      v7 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_63596960(v7, stringLength + 32, 0);
    }
    if ( v11 == v9 + 1 )
    {
      if ( !v7 )
        goto LABEL_71;
      v12 = v11 - v6;
LABEL_47:
      System_Text_StringBuilder__Append_63603924(v7, text, v6, v12, 0);
      goto LABEL_63;
    }
    Instance = System_String__Substring_63564468(text, v9 + 1, v11 + ~v9, 0);
    if ( !Instance )
      goto LABEL_71;
    v13 = (System_String_o *)Instance;
    Instance = (void *)System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_23281/*"servantName "*/, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v7 )
        goto LABEL_71;
      v12 = v11 - v6 + 1;
      goto LABEL_47;
    }
    if ( v9 > v6 )
    {
      if ( !v7 )
        goto LABEL_71;
      System_Text_StringBuilder__Append_63603924(v7, text, v6, v9 - v6, 0);
    }
    Instance = System_String__Substring(v13, 12, 0);
    if ( !Instance )
      goto LABEL_71;
    Instance = System_String__Split((System_String_o *)Instance, 0x3Au, 0, 0);
    if ( !Instance )
      goto LABEL_71;
    v14 = *((_QWORD *)Instance + 3);
    v15 = (char *)Instance;
    if ( !v14 )
      goto LABEL_48;
    if ( !(_DWORD)v14 )
      goto LABEL_72;
    v16 = System_Int32__Parse(*((System_String_o **)Instance + 4), 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_71;
    v17 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            v16,
            (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( v17 )
    {
      v18 = (ServantEntity_o *)v17;
      if ( *((int *)v15 + 6) >= 3 )
      {
        Instance = (void *)ServantEntity__IsNameTrue((ServantEntity_o *)v17, 0);
        v22 = *((_DWORD *)v15 + 6);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v22 <= 2 )
            goto LABEL_72;
          v23 = (System_String_o **)(v15 + 48);
        }
        else
        {
          if ( v22 <= 1 )
LABEL_72:
            sub_1C32E84(Instance);
          v23 = (System_String_o **)(v15 + 40);
        }
        if ( !v7 )
LABEL_71:
          sub_1C32E7C(Instance);
        unknownNameText = *v23;
      }
      else
      {
        if ( !v25 )
          goto LABEL_55;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
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
               v16,
               0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !entity )
            goto LABEL_71;
          if ( !Instance )
            goto LABEL_71;
          Instance = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                               (ServantLimitImageMaster_o *)Instance,
                               v16,
                               entity->fields.maxLimitCount,
                               0);
          if ( !entity )
            goto LABEL_71;
          if ( (_DWORD)Instance == entity->fields.maxLimitCount )
            v20 = -1;
          else
            v20 = (int)Instance;
        }
        else
        {
LABEL_55:
          v20 = -1;
        }
        Instance = ServantEntity__getName(v18, v20, -1, 0, 0);
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
    System_Text_StringBuilder__Append_63603608(v7, unknownNameText, 0);
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
      System_Text_StringBuilder__Append_63603924(v7, text, v6, stringLength - v6, 0);
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
  int32_t v15; // w3
  System_Text_StringBuilder_o *v16; // x0
  System_String_o *v17; // x1
  int32_t v18; // w2
  int v19; // w27
  System_String_o *v20; // x25
  System_String_c *klass; // x8
  System_String_o *monitor; // x1
  System_String_o *v23; // x25
  System_String_o *v24; // x26
  const MethodInfo *v25; // x1
  __int64 *v26; // x8
  System_String_o *v27; // x26
  const MethodInfo *v28; // x1
  System_String_o *v29; // x26
  System_String_o *v30; // x0
  bool v32; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C370ED & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_370/*"#"*/);
    sub_1C32C20(&StringLiteral_22343/*"o"*/);
    sub_1C32C20(&StringLiteral_15821/*"[-]"*/);
    sub_1C32C20(&StringLiteral_20088/*"i"*/);
    sub_1C32C20(&StringLiteral_19720/*"g"*/);
    sub_1C32C20(&StringLiteral_861/*"-"*/);
    sub_1C32C20(&StringLiteral_16967/*"b"*/);
    sub_1C32C20(&StringLiteral_1110/*"/sub"*/);
    sub_1C32C20(&StringLiteral_1107/*"/o"*/);
    sub_1C32C20(&StringLiteral_1114/*"/u"*/);
    sub_1C32C20(&StringLiteral_479/*"%"*/);
    sub_1C32C20(&StringLiteral_16083/*"^"*/);
    sub_1C32C20(&StringLiteral_1094/*"/b"*/);
    sub_1C32C20(&StringLiteral_501/*"&"*/);
    sub_1C32C20(&StringLiteral_23841/*"sup"*/);
    sub_1C32C20(&StringLiteral_25255/*"~"*/);
    sub_1C32C20(&StringLiteral_22915/*"r"*/);
    sub_1C32C20(&StringLiteral_21238/*"line"*/);
    sub_1C32C20(&StringLiteral_1111/*"/sup"*/);
    sub_1C32C20(&StringLiteral_1109/*"/s"*/);
    sub_1C32C20(&StringLiteral_20282/*"image"*/);
    sub_1C32C20(&StringLiteral_1102/*"/g"*/);
    sub_1C32C20(&StringLiteral_23756/*"sub"*/);
    sub_1C32C20(&StringLiteral_24255/*"u"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_23171/*"s"*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C370ED = 1;
  }
  if ( !text )
    return text;
  stringLength = text->fields._stringLength;
  if ( !stringLength )
    return (System_String_o *)StringLiteral_1/*""*/;
  v32 = isUseColorTag;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = System_String__IndexOf_63576936(text, (System_String_o *)StringLiteral_15802/*"["*/, v6, 0);
    if ( v8 < 0 )
      break;
    v9 = v8;
    if ( v8 + 1 >= stringLength )
      break;
    v10 = System_String__IndexOf_63576936(text, (System_String_o *)StringLiteral_16056/*"]"*/, v8 + 1, 0);
    if ( v10 < 0 )
      break;
    v11 = v10;
    do
    {
      v12 = v9 + 1;
      v13 = v9;
      appended = (System_String_o *)System_String__IndexOf_63576936(
                                      text,
                                      (System_String_o *)StringLiteral_15802/*"["*/,
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
      v7 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_63596960(v7, stringLength + 32, 0);
    }
    if ( v11 != v12 )
    {
      if ( v13 > v6 )
      {
        if ( !v7 )
          goto LABEL_110;
        System_Text_StringBuilder__Append_63603924(v7, text, v6, v13 - v6, 0);
      }
      v19 = v11 - v13;
      appended = System_String__Substring_63564468(text, v12, v11 - v13 - 1, 0);
      if ( !appended )
        goto LABEL_110;
      v20 = appended;
      appended = (System_String_o *)System_String__StartsWith(appended, (System_String_o *)StringLiteral_370/*"#"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
      {
        if ( v19 - 2 < 1 )
          goto LABEL_19;
        appended = System_String__Substring_63564468(text, v13 + 2, v19 - 2, 0);
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
        appended = (System_String_o *)System_Text_StringBuilder__Append_63603608(v7, monitor, 0);
        goto LABEL_19;
      }
      appended = (System_String_o *)System_String__StartsWith(v20, (System_String_o *)StringLiteral_501/*"&"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v20, (System_String_o *)StringLiteral_16083/*"^"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v20, (System_String_o *)StringLiteral_25255/*"~"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v20, (System_String_o *)StringLiteral_479/*"%"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__StartsWith(v20, (System_String_o *)StringLiteral_21238/*"line"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_19;
      appended = (System_String_o *)System_String__Split(v20, 0x20u, 0, 0);
      if ( !appended )
        goto LABEL_110;
      v23 = appended;
      if ( !LODWORD(appended[1].klass) )
        goto LABEL_111;
      v24 = (System_String_o *)appended[1].monitor;
      appended = (System_String_o *)PrivateImplementationDetails___ComputeStringHash(v24, 0);
      if ( (unsigned int)appended > 0xB35135FA )
      {
        if ( (unsigned int)appended > 0xE70C2DE5 )
        {
          if ( (unsigned int)appended > 0xEC0C35C4 )
          {
            switch ( (_DWORD)appended )
            {
              case 0xF00C3C10:
                v26 = &StringLiteral_24255/*"u"*/;
                goto LABEL_87;
              case 0xF60C4582:
                v26 = &StringLiteral_23171/*"s"*/;
                goto LABEL_87;
              case 0xF70C4715:
                v26 = &StringLiteral_22915/*"r"*/;
                goto LABEL_87;
            }
          }
          else
          {
            if ( (_DWORD)appended == -368299362 )
            {
              v26 = &StringLiteral_22343/*"o"*/;
              goto LABEL_87;
            }
            if ( (_DWORD)appended == -334744124 )
            {
              v26 = &StringLiteral_20088/*"i"*/;
              goto LABEL_87;
            }
          }
        }
        else if ( (unsigned int)appended > 0xDC4E3915 )
        {
          if ( (_DWORD)appended == -502520314 )
          {
            v26 = &StringLiteral_19720/*"g"*/;
            goto LABEL_87;
          }
          if ( (_DWORD)appended == -418632219 )
          {
            v26 = &StringLiteral_16967/*"b"*/;
            goto LABEL_87;
          }
        }
        else
        {
          if ( (_DWORD)appended == -900850497 )
          {
            v26 = &StringLiteral_23841/*"sup"*/;
            goto LABEL_87;
          }
          if ( (_DWORD)appended == -598853355 )
          {
            v26 = &StringLiteral_23756/*"sub"*/;
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
              v26 = &StringLiteral_20282/*"image"*/;
              goto LABEL_87;
            case 0x6AD20EBB:
              v26 = &StringLiteral_1102/*"/g"*/;
              goto LABEL_87;
            case 0x6DD21374:
              v26 = &StringLiteral_1094/*"/b"*/;
              goto LABEL_87;
          }
        }
        else
        {
          if ( (_DWORD)appended == 1657930275 )
          {
            v26 = &StringLiteral_1107/*"/o"*/;
            goto LABEL_87;
          }
          if ( (_DWORD)appended == 1766857154 )
          {
            v26 = &StringLiteral_1111/*"/sup"*/;
            goto LABEL_87;
          }
        }
      }
      else if ( (unsigned int)appended > 0x574FFD6C )
      {
        if ( (_DWORD)appended == 1557264561 )
        {
          v26 = &StringLiteral_1114/*"/u"*/;
          goto LABEL_87;
        }
        if ( (_DWORD)appended == 1590819799 )
        {
          v26 = &StringLiteral_1109/*"/s"*/;
          goto LABEL_87;
        }
      }
      else if ( (_DWORD)appended == 671913016 )
      {
        appended = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)StringLiteral_861/*"-"*/, 0);
        if ( ((unsigned __int8)appended & 1) != 0 )
        {
          if ( !v32 )
            goto LABEL_19;
          if ( !v7 )
            goto LABEL_110;
          monitor = (System_String_o *)StringLiteral_15821/*"[-]"*/;
          goto LABEL_33;
        }
      }
      else if ( (_DWORD)appended == 1464860012 )
      {
        v26 = &StringLiteral_1110/*"/sub"*/;
LABEL_87:
        appended = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)*v26, 0);
        if ( ((unsigned __int8)appended & 1) != 0 )
          goto LABEL_19;
      }
      if ( LODWORD(v23[1].klass) == 1 )
      {
        v27 = (System_String_o *)v23[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        appended = (System_String_o *)LocalizationManager__IsGreyCode(v27, v25);
        if ( ((unsigned __int8)appended & 1) != 0 )
          goto LABEL_19;
        if ( !LODWORD(v23[1].klass) )
          goto LABEL_111;
        v29 = (System_String_o *)v23[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        appended = (System_String_o *)LocalizationManager__IsColorCode(v29, v28);
        if ( ((unsigned __int8)appended & 1) != 0 )
        {
          if ( v32 )
          {
            if ( !v7 )
              goto LABEL_110;
            appended = (System_String_o *)System_Text_StringBuilder__Append_63605936(v7, 0x5Bu, 0);
            if ( !LODWORD(v23[1].klass) )
LABEL_111:
              sub_1C32E84(appended);
            appended = (System_String_o *)v23[1].monitor;
            if ( !appended )
              goto LABEL_110;
            v30 = System_String__Substring_63564468(appended, 0, 6, 0);
            System_Text_StringBuilder__Append_63603608(v7, v30, 0);
            appended = (System_String_o *)System_Text_StringBuilder__Append_63605936(v7, 0x5Du, 0);
          }
          goto LABEL_19;
        }
      }
      if ( !v7 )
        goto LABEL_110;
      v15 = v19 + 1;
      v16 = v7;
      v17 = text;
      v18 = v13;
      goto LABEL_18;
    }
    if ( !v7 )
      goto LABEL_110;
    v15 = v11 - v6;
    v16 = v7;
    v17 = text;
    v18 = v6;
LABEL_18:
    appended = (System_String_o *)System_Text_StringBuilder__Append_63603924(v16, v17, v18, v15, 0);
LABEL_19:
    v6 = v11 + 1;
    if ( v11 + 1 >= stringLength )
    {
      if ( !v7 )
LABEL_110:
        sub_1C32E7C(appended);
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                                  v7,
                                  v7->klass->vtable._3_ToString.method);
    }
  }
  if ( !v7 )
    return text;
  if ( stringLength > v6 )
    System_Text_StringBuilder__Append_63603924(v7, text, v6, stringLength - v6, 0);
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
  System_String_array *v8; // x0
  int32_t stringLength; // w21
  System_String_array *v10; // x20
  System_Text_StringBuilder_o *v11; // x19
  int max_length; // w8
  unsigned int v13; // w22
  Il2CppClass **v14; // x8
  System_String_o *v15; // x21
  System_String_o *v16; // x1
  System_Text_StringBuilder_o *v17; // x0
  System_String_o *v18; // x19
  LocalizationManager_c *v19; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x21
  Il2CppObject *v22; // x0
  LocalizationManager_c *v23; // x0
  Il2CppObject *Item; // x0
  struct LocalizationManager_StaticFields *static_fields; // x8
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  struct LocalizationManager_StaticFields *v29; // x8
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  struct LocalizationManager_StaticFields *v33; // x8
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x0
  struct LocalizationManager_StaticFields *v37; // x8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct LocalizationManager_StaticFields *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  LocalizationManager_c *v43; // x0
  struct LocalizationManager_StaticFields *v44; // x8
  int32_t v45; // w1
  LocalizationManager_c *v46; // x0
  Il2CppObject *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x0
  struct LocalizationManager_StaticFields *v51; // x8
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x0
  struct LocalizationManager_StaticFields *v55; // x8
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  LocalizationManager_c *v58; // x0
  bool v59; // w0
  LocalizationManager_c *v60; // x8
  uint32_t cctor_finished; // w9
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v70; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C370F0 & 1) == 0 )
  {
    sub_1C32C20(&char___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_1C32C20(&StringLiteral_8209/*"KINSOKU_SEPARATION_STR"*/);
    sub_1C32C20(&StringLiteral_1051/*"//"*/);
    sub_1C32C20(&StringLiteral_9288/*"NORMAL_EFFECT_COLOR"*/);
    sub_1C32C20(&StringLiteral_8210/*"KINSOKU_TOP_STR"*/);
    sub_1C32C20(&StringLiteral_8192/*"KANNSUUJI_100"*/);
    sub_1C32C20(&StringLiteral_11524/*"SELECT_EFFECT_COLOR"*/);
    sub_1C32C20(&StringLiteral_8191/*"KANNSUUJI_10"*/);
    sub_1C32C20(&StringLiteral_9324/*"NO_ENTRY_NAME"*/);
    sub_1C32C20(&StringLiteral_8208/*"KINSOKU_LAST_STR"*/);
    sub_1C32C20(&StringLiteral_14822/*"UNKNOWN_NAME"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_8190/*"KANNSUUJI_1"*/);
    byte_4C370F0 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v4 = (System_Array_o *)sub_1C32CC8(char___TypeInfo, 5);
  v5.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v6 = (System_Char_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v4, v5, 0);
  if ( !text_data )
    goto LABEL_63;
  v8 = System_String__Split_63567736(text_data, v6, 1, 0);
  stringLength = text_data->fields._stringLength;
  v10 = v8;
  v11 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63596960(v11, stringLength, 0);
  if ( !v10 )
    goto LABEL_63;
  max_length = v10->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C32E84(appended);
      v14 = &v10->obj.klass + (int)v13;
      v15 = (System_String_o *)v14[4];
      if ( !v15 )
        goto LABEL_63;
      appended = (System_String_o *)System_String__IndexOf_63576920(
                                      (System_String_o *)v14[4],
                                      (System_String_o *)StringLiteral_1051/*"//"*/,
                                      0);
      if ( ((unsigned int)appended & 0x80000000) != 0 )
        break;
      if ( (_DWORD)appended )
      {
        appended = System_String__Substring_63564468(v15, 0, (int)appended - 1, 0);
        if ( !v11 )
          goto LABEL_63;
        v16 = appended;
        v17 = v11;
LABEL_15:
        appended = (System_String_o *)System_Text_StringBuilder__Append_63603608(v17, v16, 0);
        if ( !appended )
          goto LABEL_63;
        appended = (System_String_o *)System_Text_StringBuilder__Append_63605936(
                                        (System_Text_StringBuilder_o *)appended,
                                        0xAu,
                                        0);
      }
      max_length = v10->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_18;
    }
    if ( !v11 )
      goto LABEL_63;
    v17 = v11;
    v16 = v15;
    goto LABEL_15;
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_63;
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v11->klass->vtable._3_ToString.methodPtr)(
                             v11,
                             v11->klass->vtable._3_ToString.method);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  appended = (System_String_o *)JsonManager__getDictionary(v18, 0);
  if ( !appended )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v69,
    (System_Collections_Generic_Dictionary_object__object__o *)appended,
    (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v70 = v69;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v70,
            (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
  {
    v19 = LocalizationManager_TypeInfo;
    current = v70.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager_TypeInfo;
    }
    if ( !current.fields.value )
      sub_1C32E7C(v19);
    lookup = (System_Collections_Generic_Dictionary_object__object__o *)v19->static_fields->lookup;
    v22 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
                            current.fields.value,
                            current.fields.value->klass->vtable[3].method);
    if ( !lookup )
      sub_1C32E7C(v22);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      lookup,
      current.fields.key,
      v22,
      (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v70,
    (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  v23 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v23->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)appended,
           (Il2CppObject *)StringLiteral_14822/*"UNKNOWN_NAME"*/,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  static_fields = LocalizationManager_TypeInfo->static_fields;
  static_fields->unknownNameText = (struct System_String_o *)Item;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->unknownNameText, (int32_t)Item, v26, v27);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v28 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_9324/*"NO_ENTRY_NAME"*/,
          (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v29 = LocalizationManager_TypeInfo->static_fields;
  v29->noEntryNameText = (struct System_String_o *)v28;
  sub_1C32BC4((CGThumbnailListItem_o *)&v29->noEntryNameText, (int32_t)v28, v30, v31);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v32 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_8210/*"KINSOKU_TOP_STR"*/,
          (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v33 = LocalizationManager_TypeInfo->static_fields;
  v33->kinsokuTopString = (struct System_String_o *)v32;
  sub_1C32BC4((CGThumbnailListItem_o *)&v33->kinsokuTopString, (int32_t)v32, v34, v35);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v36 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_8208/*"KINSOKU_LAST_STR"*/,
          (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v37 = LocalizationManager_TypeInfo->static_fields;
  v37->kinsokuLastString = (struct System_String_o *)v36;
  sub_1C32BC4((CGThumbnailListItem_o *)&v37->kinsokuLastString, (int32_t)v36, v38, v39);
  v40 = LocalizationManager_TypeInfo->static_fields;
  appended = (System_String_o *)v40->lookup;
  if ( !appended )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)appended,
    (Il2CppObject *)StringLiteral_8209/*"KINSOKU_SEPARATION_STR"*/,
    (Il2CppObject **)&v40->kinsokuSeparationString,
    (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
  v43 = LocalizationManager_TypeInfo;
  v44 = LocalizationManager_TypeInfo->static_fields;
  if ( !v44->kinsokuSeparationString )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v44 = LocalizationManager_TypeInfo->static_fields;
    }
    v45 = StringLiteral_1/*""*/;
    v44->kinsokuSeparationString = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)&v44->kinsokuSeparationString, v45, v41, v42);
    v43 = LocalizationManager_TypeInfo;
  }
  if ( !v43->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v43);
    v43 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v43->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)appended,
         (Il2CppObject *)StringLiteral_8190/*"KANNSUUJI_1"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v46 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v46 = LocalizationManager_TypeInfo;
    }
    appended = (System_String_o *)v46->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v47 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8190/*"KANNSUUJI_1"*/,
            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    LocalizationManager_TypeInfo->static_fields->lowNumberString = (struct System_String_o *)v47;
    sub_1C32BC4((CGThumbnailListItem_o *)LocalizationManager_TypeInfo->static_fields, (int32_t)v47, v48, v49);
    appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v50 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8191/*"KANNSUUJI_10"*/,
            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v51 = LocalizationManager_TypeInfo->static_fields;
    v51->hiNumberString = (struct System_String_o *)v50;
    sub_1C32BC4((CGThumbnailListItem_o *)&v51->hiNumberString, (int32_t)v50, v52, v53);
    appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v54 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8192/*"KANNSUUJI_100"*/,
            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v55 = LocalizationManager_TypeInfo->static_fields;
    v55->hi2NumberString = (struct System_String_o *)v54;
    sub_1C32BC4((CGThumbnailListItem_o *)&v55->hi2NumberString, (int32_t)v54, v56, v57);
  }
  v58 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v58 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v58->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v59 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_9288/*"NORMAL_EFFECT_COLOR"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  v60 = LocalizationManager_TypeInfo;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( v59 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = LocalizationManager_TypeInfo;
    }
    appended = (System_String_o *)v60->static_fields->lookup;
    if ( appended )
    {
      v62 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)appended,
              (Il2CppObject *)StringLiteral_9288/*"NORMAL_EFFECT_COLOR"*/,
              (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_ColorUtility__TryParseHtmlString(
        (System_String_o *)v62,
        &LocalizationManager_TypeInfo->static_fields->normalEffectColor,
        0);
      appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
      if ( appended )
      {
        v63 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)appended,
                (Il2CppObject *)StringLiteral_11524/*"SELECT_EFFECT_COLOR"*/,
                (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)v63,
          &LocalizationManager_TypeInfo->static_fields->selectEffectColor,
          0);
        return;
      }
    }
LABEL_63:
    sub_1C32E7C(appended);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v60 = LocalizationManager_TypeInfo;
  }
  __asm { FMOV            V0.4S, #1.0 }
  v60->static_fields->selectEffectColor = _Q0;
  v60->static_fields->normalEffectColor = _Q0;
}


bool LocalizationManager__TryGet(
        System_String_o **resultText,
        System_String_o *key,
        System_String_o *defaultText,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool v9; // w22
  LocalizationManager_c *v10; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_4C370C3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370C3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__ContainsKey(key, (const MethodInfo *)key);
  if ( v9 )
  {
    v10 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager_TypeInfo;
    }
    lookup = (System_Collections_Generic_Dictionary_object__object__o *)v10->static_fields->lookup;
    if ( !lookup )
      sub_1C32E7C(0);
    defaultText = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       lookup,
                                       (Il2CppObject *)key,
                                       (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  *resultText = defaultText;
  sub_1C32BC4((CGThumbnailListItem_o *)resultText, (int32_t)defaultText, v7, v8);
  return v9;
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
  if ( (byte_4C370F3 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_TextAsset___);
    this = (LocalizationManager___c__DisplayClass16_0_o *)sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C370F3 = 1;
  }
  if ( !assetData
    || (this = (LocalizationManager___c__DisplayClass16_0_o *)AssetData__GetObject_object_(
                                                                assetData,
                                                                (const MethodInfo_30BE658 *)Method_AssetData_GetObject_TextAsset___)) == 0
    || (this = (LocalizationManager___c__DisplayClass16_0_o *)UnityEngine_TextAsset__get_text(
                                                                (UnityEngine_TextAsset_o *)this,
                                                                0),
        !v4->fields.ins) )
  {
    sub_1C32E7C(this);
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