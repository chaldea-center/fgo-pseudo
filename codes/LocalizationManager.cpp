void LocalizationManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v1; // x19
  struct LocalizationManager_StaticFields *static_fields; // x0
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_Func_object__bool__o *v9; // x19
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Func_object__object__o *v16; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct NguiLocalizationManager_StaticFields *v23; // x0

  if ( (byte_5937D57 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_21FFC50(&System_Func_string__string__TypeInfo);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&Method_LocalizationManager_ContainsKey__);
    sub_21FFC50(&Method_LocalizationManager_Get__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D57 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  static_fields = LocalizationManager_TypeInfo->static_fields;
  static_fields->lookup = (struct System_Collections_Generic_Dictionary_string__string__o *)v1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->lookup, (int32_t)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(v9, 0, Method_LocalizationManager_ContainsKey__, 0);
  if ( !byte_5937DE5 )
  {
    sub_21FFC50(&NguiLocalizationManager_TypeInfo);
    byte_5937DE5 = 1;
  }
  NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc = (struct System_Func_string__bool__o *)v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)NguiLocalizationManager_TypeInfo->static_fields,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_string__string__TypeInfo);
  System_Func_object__object____ctor(v16, 0, Method_LocalizationManager_Get__, 0);
  if ( !byte_5937DE6 )
  {
    sub_21FFC50(&NguiLocalizationManager_TypeInfo);
    byte_5937DE6 = 1;
  }
  v23 = NguiLocalizationManager_TypeInfo->static_fields;
  v23->getFunc = (struct System_Func_string__string__o *)v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->getFunc, (int32_t)v16, v17, v18, v19, v20, v21, v22);
}


void LocalizationManager___ctor(LocalizationManager_o *this, const MethodInfo *method)
{
  if ( (byte_5937D92 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_LocalizationManager___ctor__);
    byte_5937D92 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_LocalizationManager___ctor__);
}


System_String_o *LocalizationManager__ChineseNumber(int32_t n, const MethodInfo *method)
{
  int32_t v3; // w19
  LocalizationManager_c *v4; // x0
  void *lowNumberString; // x0
  System_Text_StringBuilder_o *v7; // x20
  unsigned int v8; // w22
  LocalizationManager_c *v9; // x0
  struct LocalizationManager_StaticFields *static_fields; // x9
  struct System_String_o *hiNumberString; // x8
  int32_t v12; // w21
  int v13; // w10
  LocalizationManager_c *v14; // x0
  System_String_o *v15; // x0

  if ( (byte_5937D8E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    byte_5937D8E = 1;
  }
  v3 = n % 10;
  if ( n < 10 )
  {
    v4 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v4 = LocalizationManager_TypeInfo;
    }
    lowNumberString = v4->static_fields->lowNumberString;
    if ( lowNumberString )
      return System_String__Substring_75489544((System_String_o *)lowNumberString, v3, 1, 0);
LABEL_39:
    sub_21FFECC(lowNumberString, method);
  }
  v7 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75515192(v7, 10, 0);
  if ( (unsigned int)n >= 0x64 )
  {
    v8 = n / 0x64u - 10 * ((429496730 * (unsigned __int64)(n / 0x64u)) >> 32);
    if ( v8 >= 2 )
    {
      v9 = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        v9 = LocalizationManager_TypeInfo;
      }
      lowNumberString = v9->static_fields->lowNumberString;
      if ( !lowNumberString )
        goto LABEL_39;
      lowNumberString = System_String__Substring_75489544((System_String_o *)lowNumberString, v8, 1, 0);
      if ( !v7 )
        goto LABEL_39;
      System_Text_StringBuilder__Append_75521760(v7, (System_String_o *)lowNumberString, 0);
    }
    lowNumberString = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    if ( !v7 )
      goto LABEL_39;
    System_Text_StringBuilder__Append_75521760(v7, LocalizationManager_TypeInfo->static_fields->hi2NumberString, 0);
  }
  lowNumberString = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    lowNumberString = LocalizationManager_TypeInfo;
  }
  static_fields = (struct LocalizationManager_StaticFields *)*((_QWORD *)lowNumberString + 23);
  hiNumberString = static_fields->hiNumberString;
  if ( !hiNumberString )
    goto LABEL_39;
  v12 = n / 0xAu - 10 * ((429496730 * (unsigned __int64)(n / 0xAu)) >> 32);
  v13 = *((_DWORD *)lowNumberString + 57);
  if ( v12 >= hiNumberString->fields._stringLength )
  {
    if ( !v13 )
    {
      j_il2cpp_runtime_class_init_0(lowNumberString, method);
      static_fields = LocalizationManager_TypeInfo->static_fields;
    }
    lowNumberString = static_fields->lowNumberString;
    if ( !static_fields->lowNumberString )
      goto LABEL_39;
    lowNumberString = System_String__Substring_75489544((System_String_o *)lowNumberString, v12, 1, 0);
    if ( !v7 )
      goto LABEL_39;
    System_Text_StringBuilder__Append_75521760(v7, (System_String_o *)lowNumberString, 0);
    lowNumberString = LocalizationManager_TypeInfo->static_fields->hiNumberString;
    if ( !lowNumberString )
      goto LABEL_39;
    lowNumberString = System_String__Substring_75489544((System_String_o *)lowNumberString, 0, 1, 0);
  }
  else
  {
    if ( !v13 )
    {
      j_il2cpp_runtime_class_init_0(lowNumberString, method);
      hiNumberString = LocalizationManager_TypeInfo->static_fields->hiNumberString;
      if ( !hiNumberString )
        goto LABEL_39;
    }
    lowNumberString = System_String__Substring_75489544(hiNumberString, v12, 1, 0);
    if ( !v7 )
      goto LABEL_39;
  }
  System_Text_StringBuilder__Append_75521760(v7, (System_String_o *)lowNumberString, 0);
  if ( v3 >= 1 )
  {
    v14 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v14 = LocalizationManager_TypeInfo;
    }
    lowNumberString = v14->static_fields->lowNumberString;
    if ( !lowNumberString )
      goto LABEL_39;
    v15 = System_String__Substring_75489544((System_String_o *)lowNumberString, v3, 1, 0);
    System_Text_StringBuilder__Append_75521760(v7, v15, 0);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                              v7,
                              v7->klass->vtable._3_ToString.method);
}


bool LocalizationManager__ContainsKey(System_String_o *key, const MethodInfo *method)
{
  LocalizationManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_5937D64 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D64 = 1;
  }
  v3 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v3 = LocalizationManager_TypeInfo;
  }
  lookup = (System_Collections_Generic_Dictionary_object__object__o *)v3->static_fields->lookup;
  if ( !lookup )
    sub_21FFECC(0, method);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           lookup,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
}


System_String_o *LocalizationManager__ConvertNumberToRomaNumber(int32_t number, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *v5; // x19
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D91 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11629/*"ROMAN_NUMBER_{0}"*/);
    byte_5937D91 = 1;
  }
  v7 = number;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_11629/*"ROMAN_NUMBER_{0}"*/, v3, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
  return LocalizationManager__Get(v5, v4);
}


System_String_o *LocalizationManager__Get(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  LocalizationManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_5937D62 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D62 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  if ( !LocalizationManager__ContainsKey(key, method) )
    return key;
  v4 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
    v4 = LocalizationManager_TypeInfo;
  }
  lookup = (System_Collections_Generic_Dictionary_object__object__o *)v4->static_fields->lookup;
  if ( !lookup )
    sub_21FFECC(0, v3);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              lookup,
                              (Il2CppObject *)key,
                              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


System_String_o *LocalizationManager__GetAttackIconInfo(int32_t atk, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D87 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2142/*"ATTACK_ICON_INFO"*/);
    byte_5937D87 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2142/*"ATTACK_ICON_INFO"*/, method);
  v6 = atk;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetAttackInfo(int32_t atk, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D86 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2143/*"ATTACK_INFO"*/);
    byte_5937D86 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2143/*"ATTACK_INFO"*/, method);
  v6 = atk;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetBeforeTime(int64_t at, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  unsigned __int64 v4; // x8
  int v5; // w9
  System_String_o *v7; // x19
  __int64 v8; // x0
  unsigned __int64 v9; // kr00_8
  unsigned __int64 v10; // x20
  __int64 *v11; // x8
  Il2CppObject *v12; // x0
  unsigned __int64 v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5937D66 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13917/*"TIME_BEFORE_MINUTES"*/);
    sub_21FFC50(&StringLiteral_13915/*"TIME_BEFORE_DAYS"*/);
    sub_21FFC50(&StringLiteral_13916/*"TIME_BEFORE_HOURS"*/);
    sub_21FFC50(&StringLiteral_13918/*"TIME_BEFORE_OVER_YEARS"*/);
    byte_5937D66 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v4 = NetworkManager__getTime(0) - at;
  if ( (__int64)v4 <= 59 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13917/*"TIME_BEFORE_MINUTES"*/, v3);
    LODWORD(v13) = 0;
    v8 = qword_594C070;
    goto LABEL_26;
  }
  if ( v4 <= 0xE0F )
  {
    v9 = v4;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13917/*"TIME_BEFORE_MINUTES"*/, v3);
    v13 = v9 / 0x3C;
    goto LABEL_25;
  }
  if ( v4 >> 7 <= 0x2A2 )
  {
    v10 = v4 / 0xE10;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
    v11 = &StringLiteral_13916/*"TIME_BEFORE_HOURS"*/;
    goto LABEL_24;
  }
  v5 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v4 <= 0x1E1337F )
  {
    v10 = v4 / 0x15180;
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
    v11 = &StringLiteral_13915/*"TIME_BEFORE_DAYS"*/;
LABEL_24:
    v7 = LocalizationManager__Get((System_String_o *)*v11, v3);
    v13 = v10;
LABEL_25:
    v8 = qword_594C090;
LABEL_26:
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(v8, &v13);
    return System_String__Format(v7, v12, 0);
  }
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
  return LocalizationManager__Get((System_String_o *)StringLiteral_13918/*"TIME_BEFORE_OVER_YEARS"*/, v3);
}


System_String_o *LocalizationManager__GetCostIconInfo(int32_t cost, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D83 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3997/*"COST_ICON_INFO"*/);
    byte_5937D83 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3997/*"COST_ICON_INFO"*/, method);
  v6 = cost;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetCostInfo(int32_t cost, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D82 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3998/*"COST_INFO"*/);
    byte_5937D82 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3998/*"COST_INFO"*/, method);
  v6 = cost;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetCountInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D78 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3999/*"COUNT_INFO"*/);
    byte_5937D78 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3999/*"COUNT_INFO"*/, method);
  v6 = count;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetDate(int64_t time, const MethodInfo *method)
{
  System_DateTime_o v3; // x1
  System_DateTime_o v4; // x0
  Il2CppObject *v5; // x19
  System_DateTime_o v6; // x0
  Il2CppObject *v7; // x20
  System_DateTime_o v8; // x0
  Il2CppObject *v9; // x0
  int32_t Day; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+8h] [xbp-38h] BYREF
  int32_t Year; // [xsp+Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5937D71 & 1) == 0 )
  {
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26419/*"{0:D}/{1:D2}/{2:D2}"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937D71 = 1;
  }
  dateData = 0;
  if ( time < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  dateData = NetworkManager__getServerDateTime_48311712(time, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v3.fields._dateData);
  v4.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v4, 0);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Year);
  v6.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v6, 0);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Month);
  v8.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v8, 0);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Day);
  return System_String__Format_75484644((System_String_o *)StringLiteral_26419/*"{0:D}/{1:D2}/{2:D2}"*/, v5, v7, v9, 0);
}


System_String_o *LocalizationManager__GetDateTime(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x19
  System_DateTime_o v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x20
  __int64 v15; // x1
  System_DateTime_o v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x20
  System_DateTime_o v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x20
  System_DateTime_o v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x20
  System_DateTime_o v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x20
  __int64 v49; // x0
  int32_t Minute; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-38h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Month; // [xsp+10h] [xbp-30h] BYREF
  int32_t Year; // [xsp+14h] [xbp-2Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5937D73 & 1) == 0 )
  {
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_26420/*"{0:D}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_5937D73 = 1;
  }
  dateData = 0;
  if ( time >= 1 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    dateData = NetworkManager__getServerDateTime_48311712(time, 0).fields._dateData;
    v4 = sub_21FFD10(object___TypeInfo, 5);
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v3);
    v5.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v5, 0);
    v6 = j_il2cpp_value_box_0(qword_594C070, &Year);
    if ( !v4 )
      sub_21FFECC(v6, v7);
    v14 = v6;
    if ( !v6 || (v6 = sub_21FFDA4(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_27;
      *(_QWORD *)(v4 + 32) = v14;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 32), v14, v8, v9, v10, v11, v12, v13);
      v16.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v16, 0);
      v6 = j_il2cpp_value_box_0(qword_594C070, &Month);
      v23 = v6;
      if ( !v6 || (v6 = sub_21FFDA4(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_27;
        *(_QWORD *)(v4 + 40) = v23;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 40), v23, v17, v18, v19, v20, v21, v22);
        v24.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v24, 0);
        v6 = j_il2cpp_value_box_0(qword_594C070, &Day);
        v31 = v6;
        if ( !v6 || (v6 = sub_21FFDA4(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v4 + 24) <= 2u )
            goto LABEL_27;
          *(_QWORD *)(v4 + 48) = v31;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 48), v31, v25, v26, v27, v28, v29, v30);
          v32.fields._dateData = (uint64_t)&dateData;
          Hour = System_DateTime__get_Hour(v32, 0);
          v6 = j_il2cpp_value_box_0(qword_594C070, &Hour);
          v39 = v6;
          if ( !v6 || (v6 = sub_21FFDA4(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v4 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_27;
            *(_QWORD *)(v4 + 56) = v39;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 56), v39, v33, v34, v35, v36, v37, v38);
            v40.fields._dateData = (uint64_t)&dateData;
            Minute = System_DateTime__get_Minute(v40, 0);
            v6 = j_il2cpp_value_box_0(qword_594C070, &Minute);
            v47 = v6;
            if ( !v6 || (v6 = sub_21FFDA4(v6, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v4 + 24) > 4u )
              {
                *(_QWORD *)(v4 + 64) = v47;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 64), v47, v41, v42, v43, v44, v45, v46);
                return System_String__Format_75484712(
                         (System_String_o *)StringLiteral_26420/*"{0:D}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/,
                         (System_Object_array *)v4,
                         0);
              }
LABEL_27:
              sub_21FFED4(v6);
            }
          }
        }
      }
    }
    v49 = sub_21FFEF0(v6, v15);
    sub_21FFD90(v49, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *LocalizationManager__GetDateTimeDayOfWeek(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x1
  System_IFormatProvider_o *CultureInfo_76550984; // x20
  __int64 v5; // x1
  __int64 v6; // x19
  System_DateTime_o v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x21
  __int64 v17; // x1
  System_DateTime_o v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x21
  System_DateTime_o v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x21
  System_DateTime_o v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x20
  System_DateTime_o v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x20
  System_DateTime_o v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x20
  __int64 v59; // x0
  int32_t Minute; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-48h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Month; // [xsp+10h] [xbp-40h] BYREF
  int32_t Year; // [xsp+14h] [xbp-3Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5937D74 & 1) == 0 )
  {
    sub_21FFC50(&System_Globalization_CultureInfo_TypeInfo);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_26421/*"{0:D}/{1:D2}/{2:D2}({3}) {4:D2}:{5:D2}"*/);
    sub_21FFC50(&StringLiteral_22048/*"ja-JP"*/);
    sub_21FFC50(&StringLiteral_19293/*"ddd"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937D74 = 1;
  }
  dateData = 0;
  if ( time >= 1 )
  {
    if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, method);
    CultureInfo_76550984 = (System_IFormatProvider_o *)System_Globalization_CultureInfo__GetCultureInfo_76550984(
                                                         (System_String_o *)StringLiteral_22048/*"ja-JP"*/,
                                                         0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
    dateData = NetworkManager__getServerDateTime_48311712(time, 0).fields._dateData;
    v6 = sub_21FFD10(object___TypeInfo, 6);
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v5);
    v7.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v7, 0);
    v8 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &Year);
    if ( !v6 )
      sub_21FFECC(v8, v9);
    v16 = v8;
    if ( !v8 || (v8 = (System_String_o *)sub_21FFDA4(v8, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v6 + 24) )
        goto LABEL_32;
      *(_QWORD *)(v6 + 32) = v16;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      v18.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v18, 0);
      v8 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &Month);
      v25 = v8;
      if ( !v8 || (v8 = (System_String_o *)sub_21FFDA4(v8, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v6 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_32;
        *(_QWORD *)(v6 + 40) = v25;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)v25, v19, v20, v21, v22, v23, v24);
        v26.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v26, 0);
        v8 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &Day);
        v33 = v8;
        if ( !v8 || (v8 = (System_String_o *)sub_21FFDA4(v8, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v6 + 24) <= 2u )
            goto LABEL_32;
          *(_QWORD *)(v6 + 48) = v33;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 48), (int32_t)v33, v27, v28, v29, v30, v31, v32);
          v34.fields._dateData = (uint64_t)&dateData;
          v8 = System_DateTime__ToString_76814684(v34, (System_String_o *)StringLiteral_19293/*"ddd"*/, CultureInfo_76550984, 0);
          v41 = v8;
          if ( !v8 || (v8 = (System_String_o *)sub_21FFDA4(v8, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v6 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_32;
            *(_QWORD *)(v6 + 56) = v41;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 56), (int32_t)v41, v35, v36, v37, v38, v39, v40);
            v42.fields._dateData = (uint64_t)&dateData;
            Hour = System_DateTime__get_Hour(v42, 0);
            v8 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &Hour);
            v49 = v8;
            if ( !v8 || (v8 = (System_String_o *)sub_21FFDA4(v8, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v6 + 24) <= 4u )
                goto LABEL_32;
              *(_QWORD *)(v6 + 64) = v49;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 64), (int32_t)v49, v43, v44, v45, v46, v47, v48);
              v50.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v50, 0);
              v8 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &Minute);
              v57 = v8;
              if ( !v8 || (v8 = (System_String_o *)sub_21FFDA4(v8, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v6 + 24) > 5u )
                {
                  *(_QWORD *)(v6 + 72) = v57;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 72), (int32_t)v57, v51, v52, v53, v54, v55, v56);
                  return System_String__Format_75484712(
                           (System_String_o *)StringLiteral_26421/*"{0:D}/{1:D2}/{2:D2}({3}) {4:D2}:{5:D2}"*/,
                           (System_Object_array *)v6,
                           0);
                }
LABEL_32:
                sub_21FFED4(v8);
              }
            }
          }
        }
      }
    }
    v59 = sub_21FFEF0(v8, v17);
    sub_21FFD90(v59, 0);
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
  System_String_o **v10; // x8
  System_String_o *v11; // x21
  const MethodInfo *v12; // x1
  System_String_o *v13; // x22
  System_String_o *NumberFormat_48211828; // x1
  System_String_o *v15; // x2
  Il2CppObject *v16; // x20
  System_String_o **v17; // x10
  System_String_o *v18; // x21
  const MethodInfo *v19; // x1
  System_String_o *v20; // x22
  System_String_o *v21; // x0
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x21
  int v24; // w9
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  Il2CppObject *v27; // x1
  int v28; // [xsp+8h] [xbp-48h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF

  v29 = addPoint;
  if ( (byte_5937D89 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_861/*"+"*/);
    sub_21FFC50(&StringLiteral_5869/*"EVENT_POINT_RATE_INFO"*/);
    sub_21FFC50(&StringLiteral_5867/*"EVENT_POINT_NONE_INFO"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_5864/*"EVENT_POINT_MAX_INFO"*/);
    sub_21FFC50(&StringLiteral_5856/*"EVENT_POINT_ADD_INFO"*/);
    sub_21FFC50(&StringLiteral_5857/*"EVENT_POINT_ADD_RATE_INFO"*/);
    byte_5937D89 = 1;
  }
  v28 = 0;
  if ( ratePoint >= 3000 && isMax )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&ratePoint);
    return LocalizationManager__Get((System_String_o *)StringLiteral_5864/*"EVENT_POINT_MAX_INFO"*/, *(const MethodInfo **)&ratePoint);
  }
  if ( addPoint >= 0 )
    v10 = (System_String_o **)&StringLiteral_861/*"+"*/;
  else
    v10 = (System_String_o **)&StringLiteral_1/*""*/;
  v11 = *v10;
  v13 = System_Int32__ToString((int32_t)&v29, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  NumberFormat_48211828 = LocalizationManager__GetNumberFormat_48211828(v13, v12);
  if ( unit )
    v15 = unit;
  else
    v15 = (System_String_o *)StringLiteral_1/*""*/;
  v16 = (Il2CppObject *)System_String__Concat_75481624(v11, NumberFormat_48211828, v15, 0);
  if ( ratePoint >= 0 )
    v17 = (System_String_o **)&StringLiteral_861/*"+"*/;
  else
    v17 = (System_String_o **)&StringLiteral_1/*""*/;
  v18 = *v17;
  v28 = ratePoint / 10;
  v20 = System_Int32__ToString((int32_t)&v28, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  v21 = LocalizationManager__GetNumberFormat_48211828(v20, v19);
  v23 = (Il2CppObject *)System_String__Concat_75438412(v18, v21, 0);
  v24 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( ratePoint && v29 )
  {
    if ( !v24 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5857/*"EVENT_POINT_ADD_RATE_INFO"*/, v22);
    return System_String__Format_75484576(v25, v16, v23, 0);
  }
  if ( v29 )
  {
    if ( !v24 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5856/*"EVENT_POINT_ADD_INFO"*/, v22);
    v27 = v16;
    return System_String__Format(v26, v27, 0);
  }
  if ( ratePoint )
  {
    if ( !v24 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5869/*"EVENT_POINT_RATE_INFO"*/, v22);
    v27 = v23;
    return System_String__Format(v26, v27, 0);
  }
  if ( !v24 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  return LocalizationManager__Get((System_String_o *)StringLiteral_5867/*"EVENT_POINT_NONE_INFO"*/, v22);
}


System_String_o *LocalizationManager__GetHaveUnitInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D77 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7484/*"HAVE_UNIT_INFO"*/);
    byte_5937D77 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7484/*"HAVE_UNIT_INFO"*/, method);
  v6 = count;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetHpIconInfo(int32_t hp, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D85 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7541/*"HP_ICON_INFO"*/);
    byte_5937D85 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7541/*"HP_ICON_INFO"*/, method);
  v6 = hp;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetHpInfo(int32_t hp, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D84 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7542/*"HP_INFO"*/);
    byte_5937D84 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7542/*"HP_INFO"*/, method);
  v6 = hp;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetIdIconInfo(int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D7E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7733/*"ID_ICON_INFO"*/);
    byte_5937D7E = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7733/*"ID_ICON_INFO"*/, method);
  v6 = id;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetIfExists(System_String_array *keys, const MethodInfo *method)
{
  System_String_array *v2; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v4; // x22
  System_String_o *v5; // x20

  v2 = keys;
  if ( (byte_5937D65 & 1) == 0 )
  {
    keys = (System_String_array *)sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D65 = 1;
  }
  if ( !v2 )
    sub_21FFECC(keys, method);
  max_length = v2->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= (unsigned int)max_length )
      sub_21FFED4(keys);
    v5 = v2->m_Items[v4];
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    keys = (System_String_array *)LocalizationManager__ContainsKey(v5, method);
    if ( ((unsigned __int8)keys & 1) != 0 )
      break;
    LODWORD(max_length) = v2->max_length;
    if ( (__int64)++v4 >= (int)max_length )
      return 0;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get(v5, method);
}


System_String_o *LocalizationManager__GetKinsokuLastString(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0

  if ( (byte_5937D5E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D5E = 1;
  }
  v2 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    v2 = LocalizationManager_TypeInfo;
  }
  return v2->static_fields->kinsokuLastString;
}


System_String_o *LocalizationManager__GetKinsokuSeparationString(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0

  if ( (byte_5937D5F & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D5F = 1;
  }
  v2 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    v2 = LocalizationManager_TypeInfo;
  }
  return v2->static_fields->kinsokuSeparationString;
}


System_String_o *LocalizationManager__GetKinsokuTopString(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0

  if ( (byte_5937D5D & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D5D = 1;
  }
  v2 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    v2 = LocalizationManager_TypeInfo;
  }
  return v2->static_fields->kinsokuTopString;
}


System_String_o *LocalizationManager__GetLapTime(int64_t time, const MethodInfo *method)
{
  int64_t v3; // x22
  int64_t v4; // x20
  Il2CppObject *v5; // x19
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x0
  int64_t v9; // [xsp+8h] [xbp-48h] BYREF
  int64_t v10; // [xsp+10h] [xbp-40h] BYREF
  int64_t v11; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5937D75 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26400/*"{0:D2}h{1:D2}m{2:D2}s"*/);
    byte_5937D75 = 1;
  }
  v3 = time % 60;
  v4 = time / 60 % 60;
  v11 = time / 3600;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v11);
  v10 = v4;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v10);
  v9 = v3;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v9);
  return System_String__Format_75484644((System_String_o *)StringLiteral_26400/*"{0:D2}h{1:D2}m{2:D2}s"*/, v5, v6, v7, 0);
}


System_String_o *LocalizationManager__GetLevelIconInfo(int32_t lv, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5937D80 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8597/*"LEVEL_ICON_INFO"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937D80 = 1;
  }
  if ( lv < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8597/*"LEVEL_ICON_INFO"*/, method);
  v6 = lv;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetLevelInfo(int32_t lv, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D7F & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8598/*"LEVEL_INFO"*/);
    byte_5937D7F = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8598/*"LEVEL_INFO"*/, method);
  v6 = lv;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetLevelList(System_Int32_array *levelList, const MethodInfo *method)
{
  System_Int32_array *v2; // x19
  il2cpp_array_size_t max_length; // x24
  System_Text_StringBuilder_o *v4; // x20
  unsigned __int64 v5; // x21
  int v6; // w25

  v2 = levelList;
  if ( (byte_5937D8A & 1) == 0 )
  {
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    levelList = (System_Int32_array *)sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5937D8A = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  max_length = v2->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75515192(v4, 4 * max_length, 0);
  if ( (int)max_length < 1 )
  {
    if ( v4 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                                  v4,
                                  v4->klass->vtable._3_ToString.method);
LABEL_18:
    sub_21FFECC(levelList, method);
  }
  v5 = 0;
  v6 = 32;
  do
  {
    if ( v5 )
    {
      if ( !v4 )
        goto LABEL_18;
      levelList = (System_Int32_array *)System_Text_StringBuilder__Append_75521760(
                                          v4,
                                          (System_String_o *)StringLiteral_1123/*"/"*/,
                                          0);
    }
    if ( v5 >= LODWORD(v2->max_length) )
      sub_21FFED4(levelList);
    if ( v2->m_Items[v5] <= 0 )
    {
      method = (const MethodInfo *)StringLiteral_923/*"-"*/;
      if ( !v4 )
        goto LABEL_18;
    }
    else
    {
      levelList = (System_Int32_array *)System_Int32__ToString((int)v2 + v6, 0);
      method = (const MethodInfo *)levelList;
      if ( !v4 )
        goto LABEL_18;
    }
    levelList = (System_Int32_array *)System_Text_StringBuilder__Append_75521760(v4, (System_String_o *)method, 0);
    ++v5;
    v6 += 4;
  }
  while ( (unsigned int)max_length != v5 );
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                              v4,
                              v4->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetLevelList_48215212(SkillInfo_array *skillInfoList, const MethodInfo *method)
{
  SkillInfo_array *v2; // x19
  il2cpp_array_size_t max_length; // x21
  System_Text_StringBuilder_o *v4; // x20
  unsigned __int64 v5; // x24
  __int64 v6; // x29
  int *v7; // x23
  int32_t v8; // w21
  int32_t v9; // w22
  int32_t v10; // w23
  int v11; // w22
  __int64 *v12; // x8
  System_String_o **v13; // x8
  System_String_o *v14; // x0

  v2 = skillInfoList;
  if ( (byte_5937D8B & 1) == 0 )
  {
    sub_21FFC50(&ServantSkillStrengthStatus_TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_16512/*"[FCF050]"*/);
    sub_21FFC50(&StringLiteral_16582/*"[ff730f]"*/);
    sub_21FFC50(&StringLiteral_16415/*"[-]"*/);
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    skillInfoList = (SkillInfo_array *)sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5937D8B = 1;
  }
  if ( !v2 )
    goto LABEL_32;
  max_length = v2->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75515192(v4, 15 * max_length, 0);
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    v6 = (unsigned int)max_length;
    do
    {
      if ( v5 >= LODWORD(v2->max_length) )
        sub_21FFED4(skillInfoList);
      v7 = (int *)v2->m_Items[v5];
      if ( v5 )
      {
        if ( !v4 )
          goto LABEL_32;
        skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_75521760(
                                             v4,
                                             (System_String_o *)StringLiteral_1123/*"/"*/,
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
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_75521760(
                                               v4,
                                               (System_String_o *)skillInfoList,
                                               0);
          v13 = (System_String_o **)&StringLiteral_16415/*"[-]"*/;
          if ( v11 < 1 )
            goto LABEL_28;
          goto LABEL_27;
        }
        v10 = v7[13];
        if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, method);
        skillInfoList = (SkillInfo_array *)ServantSkillStrengthStatus__GetStrengthenedCnt(v9, v10, 0);
        if ( (_DWORD)skillInfoList == 2 )
        {
          v12 = &StringLiteral_16582/*"[ff730f]"*/;
          if ( !v4 )
            goto LABEL_32;
        }
        else
        {
          v11 = (int)skillInfoList;
          if ( (_DWORD)skillInfoList != 1 )
            goto LABEL_22;
          v12 = &StringLiteral_16512/*"[FCF050]"*/;
          if ( !v4 )
            goto LABEL_32;
        }
        System_Text_StringBuilder__Append_75521760(v4, (System_String_o *)*v12, 0);
        v14 = System_Int32__ToString(v8, 0);
        System_Text_StringBuilder__Append_75521760(v4, v14, 0);
        v13 = (System_String_o **)&StringLiteral_16415/*"[-]"*/;
      }
      else
      {
        v13 = (System_String_o **)&StringLiteral_923/*"-"*/;
        if ( !v4 )
          goto LABEL_32;
      }
LABEL_27:
      skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_75521760(v4, *v13, 0);
LABEL_28:
      ++v5;
    }
    while ( v6 != v5 );
  }
  if ( !v4 )
LABEL_32:
    sub_21FFECC(skillInfoList, method);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                              v4,
                              v4->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetNoEntryName(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0

  if ( (byte_5937D5C & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D5C = 1;
  }
  v2 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    v2 = LocalizationManager_TypeInfo;
  }
  return v2->static_fields->noEntryNameText;
}


UnityEngine_Color_o LocalizationManager__GetNormalEffectColor(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0
  float *static_fields; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5937D60 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D60 = 1;
  }
  v2 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    v2 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v2->static_fields;
  v4 = static_fields[20];
  v5 = static_fields[21];
  v6 = static_fields[22];
  v7 = static_fields[23];
  result.fields.a = v7;
  result.fields.b = v6;
  result.fields.g = v5;
  result.fields.r = v4;
  return result;
}


System_String_o *LocalizationManager__GetNumberFormat(int32_t data, const MethodInfo *method)
{
  int32_t v3; // [xsp+Ch] [xbp-14h] BYREF

  v3 = data;
  if ( (byte_5937D79 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9604/*"N0"*/);
    byte_5937D79 = 1;
  }
  return System_Int32__ToString_76925352((int32_t)&v3, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
}


System_String_o *LocalizationManager__GetNumberFormatLong(int64_t data, const MethodInfo *method)
{
  int64_t v3; // [xsp+8h] [xbp-18h] BYREF

  v3 = data;
  if ( (byte_5937D7A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9604/*"N0"*/);
    byte_5937D7A = 1;
  }
  return System_Int64__ToString_76930560((int64_t)&v3, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
}


System_String_o *LocalizationManager__GetNumberFormat_48211828(System_String_o *data, const MethodInfo *method)
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

  if ( (byte_5937D7B & 1) == 0 )
  {
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937D7B = 1;
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
  v7 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75515192(v7, 32, 0);
  if ( v4 >= 1 )
  {
    if ( !v7 )
LABEL_26:
      sub_21FFECC(appended, v9);
    appended = System_Text_StringBuilder__Append_75522076(v7, data, 0, v4, 0);
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
      System_Text_StringBuilder__Append_75524092(v7, 0x2Cu, 0);
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
    appended = System_Text_StringBuilder__Append_75524092(v7, Chars, 0);
    ++v4;
    --v10;
  }
  while ( v4 < stringLength );
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
  System_String_o *v9; // x22
  int v11; // w8
  System_String_o *DateTime; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x1
  System_String_o *v15; // x21
  int v16; // w9
  System_String_o *Date; // x0

  if ( (byte_5937D70 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_349/*" ~ "*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937D70 = 1;
  }
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( startedAt <= 0 && endedAt < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v11 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isDispStartTime )
  {
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, endedAt);
    DateTime = LocalizationManager__GetDateTime(startedAt, (const MethodInfo *)endedAt);
  }
  else
  {
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, endedAt);
    DateTime = LocalizationManager__GetDate(startedAt, (const MethodInfo *)endedAt);
  }
  v13 = System_String__Concat_75438412(v9, DateTime, 0);
  v15 = System_String__Concat_75438412(v13, (System_String_o *)StringLiteral_349/*" ~ "*/, 0);
  v16 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isDispEndTime )
  {
    if ( !v16 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
    Date = LocalizationManager__GetDateTime(endedAt, v14);
  }
  else
  {
    if ( !v16 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
    Date = LocalizationManager__GetDate(endedAt, v14);
  }
  return System_String__Concat_75438412(v15, Date, 0);
}


System_String_o *LocalizationManager__GetPrice2Info(int32_t price, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_5937D7D & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10888/*"PRICE2_INFO"*/);
    byte_5937D7D = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10888/*"PRICE2_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(price, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetPriceInfo(int32_t price, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_5937D7C & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10889/*"PRICE_INFO"*/);
    byte_5937D7C = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10889/*"PRICE_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(price, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetRarityInfo(int32_t rare, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D81 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16616/*"[{0}]"*/);
    byte_5937D81 = 1;
  }
  v5 = rare;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v5);
  return System_String__Format((System_String_o *)StringLiteral_16616/*"[{0}]"*/, v3, 0);
}


bool LocalizationManager__GetRestIsLastHours(int64_t at, const MethodInfo *method)
{
  if ( (byte_5937D6F & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5937D6F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return (unsigned __int64)(at - NetworkManager__getTime(0)) >> 7 < 0x2A3;
}


System_String_o *LocalizationManager__GetRestTime(int64_t at, const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v4; // x1
  unsigned __int64 v5; // x8
  int v6; // w9
  __int64 *v7; // x8
  System_String_o *v9; // x19
  __int64 v10; // x0
  unsigned __int64 v11; // x20
  __int64 *v12; // x8
  Il2CppObject *v13; // x0
  unsigned __int64 v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5937D67 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13942/*"TIME_REST_DAYS"*/);
    sub_21FFC50(&StringLiteral_13945/*"TIME_REST_HOURS"*/);
    sub_21FFC50(&StringLiteral_13946/*"TIME_REST_MINUTES"*/);
    sub_21FFC50(&StringLiteral_13965/*"TIME_REST_TIMEOVER"*/);
    sub_21FFC50(&StringLiteral_13948/*"TIME_REST_OVER_YEARS"*/);
    byte_5937D67 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  v5 = at - Time;
  if ( at - Time < 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v7 = &StringLiteral_13965/*"TIME_REST_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v7, v4);
  }
  if ( v5 <= 0x3B )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13946/*"TIME_REST_MINUTES"*/, v4);
    LODWORD(v14) = 0;
    v10 = qword_594C070;
  }
  else
  {
    if ( v5 <= 0xE0F )
    {
      v11 = (at - Time) / 0x3CuLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v12 = &StringLiteral_13946/*"TIME_REST_MINUTES"*/;
    }
    else if ( v5 >> 7 <= 0x2A2 )
    {
      v11 = (at - Time) / 0xE10uLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v12 = &StringLiteral_13945/*"TIME_REST_HOURS"*/;
    }
    else
    {
      v6 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v5 > 0x1E1337F )
      {
        if ( !v6 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
        v7 = &StringLiteral_13948/*"TIME_REST_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v7, v4);
      }
      v11 = v5 / 0x15180;
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v12 = &StringLiteral_13942/*"TIME_REST_DAYS"*/;
    }
    v9 = LocalizationManager__Get((System_String_o *)*v12, v4);
    v14 = v11;
    v10 = qword_594C090;
  }
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(v10, &v14);
  return System_String__Format(v9, v13, 0);
}


System_String_o *LocalizationManager__GetRestTime2(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  unsigned __int64 v5; // x8
  int v6; // w9
  __int64 *v7; // x8
  System_String_o *v9; // x19
  __int64 v10; // x0
  unsigned __int64 v11; // x20
  __int64 *v12; // x8
  Il2CppObject *v13; // x0
  unsigned __int64 v14; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_5937D68 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13926/*"TIME_REST2_MINUTES"*/);
    sub_21FFC50(&StringLiteral_13928/*"TIME_REST2_OVER_YEARS"*/);
    sub_21FFC50(&StringLiteral_13925/*"TIME_REST2_HOURS"*/);
    sub_21FFC50(&StringLiteral_13924/*"TIME_REST2_DAYS"*/);
    sub_21FFC50(&StringLiteral_13929/*"TIME_REST2_TIMEOVER"*/);
    byte_5937D68 = 1;
  }
  if ( Time < 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  v5 = at - Time;
  if ( at - Time < 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
    v7 = &StringLiteral_13929/*"TIME_REST2_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v7, (const MethodInfo *)nowTime);
  }
  if ( v5 <= 0x3B )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13926/*"TIME_REST2_MINUTES"*/, (const MethodInfo *)nowTime);
    LODWORD(v14) = 0;
    v10 = qword_594C070;
  }
  else
  {
    if ( v5 <= 0xE0F )
    {
      v11 = (at - Time) / 0x3CuLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13926/*"TIME_REST2_MINUTES"*/;
    }
    else if ( v5 >> 7 <= 0x2A2 )
    {
      v11 = (at - Time) / 0xE10uLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13925/*"TIME_REST2_HOURS"*/;
    }
    else
    {
      v6 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v5 > 0x1E1337F )
      {
        if ( !v6 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
        v7 = &StringLiteral_13928/*"TIME_REST2_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v7, (const MethodInfo *)nowTime);
      }
      v11 = (at - Time) / 0x15180uLL;
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13924/*"TIME_REST2_DAYS"*/;
    }
    v9 = LocalizationManager__Get((System_String_o *)*v12, (const MethodInfo *)nowTime);
    v14 = v11;
    v10 = qword_594C090;
  }
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(v10, &v14);
  return System_String__Format(v9, v13, 0);
}


System_String_o *LocalizationManager__GetRestTime3(int64_t at, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  System_DateTime_o v5; // x20
  System_DateTime_o v6; // x1
  System_DateTime_o v7; // x19
  System_DateTime_o v8; // x0
  System_DateTime_o v9; // x1
  System_TimeSpan_o v10; // x1
  System_TimeSpan_o v11; // x0
  int32_t Hours; // w19
  System_TimeSpan_o v13; // x0
  Il2CppObject *v14; // x19
  System_TimeSpan_o v15; // x0
  Il2CppObject *v16; // x20
  System_TimeSpan_o v17; // x0
  Il2CppObject *v18; // x0
  int32_t Seconds; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Minutes; // [xsp+8h] [xbp-38h] BYREF
  int v22; // [xsp+Ch] [xbp-34h] BYREF
  int64_t ticks; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5937D69 & 1) == 0 )
  {
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&System_TimeSpan_TypeInfo);
    sub_21FFC50(&StringLiteral_26398/*"{0:D2}:{1:D2}:{2:D2}"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937D69 = 1;
  }
  ticks = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( at - NetworkManager__getTime(0) < 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
  Time = NetworkManager__getTime(0);
  v5.fields._dateData = NetworkManager__getDateTime_48311376(Time, 0).fields._dateData;
  v7.fields._dateData = NetworkManager__getDateTime_48311376(at, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v6.fields._dateData);
  v8.fields._dateData = v7.fields._dateData;
  v9.fields._dateData = v5.fields._dateData;
  ticks = System_DateTime__op_Subtraction_76817280(v8, v9, 0).fields._ticks;
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v10.fields._ticks);
  v11.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v11, 0);
  v13.fields._ticks = (int64_t)&ticks;
  v22 = Hours + 24 * System_TimeSpan__get_Days(v13, 0);
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v22);
  v15.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v15, 0);
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Minutes);
  v17.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v17, 0);
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Seconds);
  return System_String__Format_75484644((System_String_o *)StringLiteral_26398/*"{0:D2}:{1:D2}:{2:D2}"*/, v14, v16, v18, 0);
}


System_String_o *LocalizationManager__GetRestTime4(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  unsigned __int64 v5; // x8
  __int64 v6; // x22
  __int64 v7; // x20
  Il2CppObject *v8; // x19
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  __int64 v12; // [xsp+0h] [xbp-40h] BYREF
  __int64 v13; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v14; // [xsp+18h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_5937D6A & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26398/*"{0:D2}:{1:D2}:{2:D2}"*/);
    sub_21FFC50(&StringLiteral_1531/*"99:99:99"*/);
    byte_5937D6A = 1;
  }
  if ( Time < 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  v5 = at - Time;
  if ( at - Time < 0 )
    return 0;
  if ( v5 >= 0x57E40 )
    return (System_String_o *)StringLiteral_1531/*"99:99:99"*/;
  v6 = (unsigned int)v5 % 0x3C;
  v14 = (unsigned int)v5 / 0xE10uLL;
  v7 = (unsigned __int16)((unsigned int)v5 / 0x3C) % 0x3Cu;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v14);
  v13 = v7;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v13);
  v12 = v6;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v12);
  return System_String__Format_75484644((System_String_o *)StringLiteral_26398/*"{0:D2}:{1:D2}:{2:D2}"*/, v8, v9, v10, 0);
}


System_String_o *LocalizationManager__GetRestTime5(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  unsigned __int64 v5; // x8
  int v6; // w9
  __int64 *v7; // x8
  System_String_o *v9; // x19
  __int64 v10; // x0
  unsigned __int64 v11; // x20
  __int64 *v12; // x8
  Il2CppObject *v13; // x0
  unsigned __int64 v14; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_5937D6B & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13931/*"TIME_REST5_HOURS"*/);
    sub_21FFC50(&StringLiteral_13934/*"TIME_REST5_TIMEOVER"*/);
    sub_21FFC50(&StringLiteral_13933/*"TIME_REST5_OVER_YEARS"*/);
    sub_21FFC50(&StringLiteral_13930/*"TIME_REST5_DAYS"*/);
    sub_21FFC50(&StringLiteral_13932/*"TIME_REST5_MINUTES"*/);
    byte_5937D6B = 1;
  }
  if ( Time < 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  v5 = at - Time;
  if ( at - Time < 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
    v7 = &StringLiteral_13934/*"TIME_REST5_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v7, (const MethodInfo *)nowTime);
  }
  if ( v5 <= 0x3B )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13932/*"TIME_REST5_MINUTES"*/, (const MethodInfo *)nowTime);
    LODWORD(v14) = 0;
    v10 = qword_594C070;
  }
  else
  {
    if ( v5 <= 0xE0F )
    {
      v11 = (at - Time) / 0x3CuLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13932/*"TIME_REST5_MINUTES"*/;
    }
    else if ( v5 >> 7 <= 0x2A2 )
    {
      v11 = (at - Time) / 0xE10uLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13931/*"TIME_REST5_HOURS"*/;
    }
    else
    {
      v6 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v5 > 0x1E1337F )
      {
        if ( !v6 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
        v7 = &StringLiteral_13933/*"TIME_REST5_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v7, (const MethodInfo *)nowTime);
      }
      v11 = (at - Time) / 0x15180uLL;
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13930/*"TIME_REST5_DAYS"*/;
    }
    v9 = LocalizationManager__Get((System_String_o *)*v12, (const MethodInfo *)nowTime);
    v14 = v11;
    v10 = qword_594C090;
  }
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(v10, &v14);
  return System_String__Format(v9, v13, 0);
}


System_String_o *LocalizationManager__GetRestTime6(int64_t at, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x21
  const MethodInfo *v5; // x1
  System_String_o *v6; // x19
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x23
  System_String_o *v10; // x0
  System_String_o *v12; // x20
  __int64 v13; // x0
  unsigned __int64 *v14; // x1
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  unsigned __int64 v17; // x21
  System_String_o *v18; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  unsigned __int64 v22; // kr00_8
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x1
  unsigned __int64 v27; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v28; // [xsp+8h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_5937D6C & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13940/*"TIME_REST6_TIMEOVER"*/);
    sub_21FFC50(&StringLiteral_13937/*"TIME_REST6_HOURS"*/);
    sub_21FFC50(&StringLiteral_13939/*"TIME_REST6_OVER_YEARS"*/);
    sub_21FFC50(&StringLiteral_13938/*"TIME_REST6_MINUTES"*/);
    sub_21FFC50(&StringLiteral_13936/*"TIME_REST6_HEAD"*/);
    sub_21FFC50(&StringLiteral_13935/*"TIME_REST6_DAYS"*/);
    byte_5937D6C = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13936/*"TIME_REST6_HEAD"*/, (const MethodInfo *)nowTime);
  if ( Time < 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    Time = NetworkManager__getTime(0);
  }
  v7 = at - Time;
  if ( at - Time >= 0 )
  {
    if ( v7 <= 0x3B )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13938/*"TIME_REST6_MINUTES"*/, v5);
      LODWORD(v28) = 0;
      v13 = qword_594C070;
    }
    else
    {
      v8 = v7 / 0x3C;
      if ( v7 > 0xE0F )
      {
        v9 = v7 / 0xE10;
        if ( v7 >> 7 <= 0x2A2 )
        {
          v17 = v8 - 60 * ((unsigned __int64)((v8 * (unsigned __int128)0x888888888888889uLL) >> 64) >> 1);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13937/*"TIME_REST6_HOURS"*/, v5);
          v28 = v9;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v28);
          v20 = System_String__Format(v18, v19, 0);
          v6 = System_String__Concat_75438412(v6, v20, 0);
          v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13938/*"TIME_REST6_MINUTES"*/, v21);
          v13 = qword_594C090;
        }
        else
        {
          if ( v7 > 0x1E1337F )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
            v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13939/*"TIME_REST6_OVER_YEARS"*/, v5);
            return System_String__Concat_75438412(v6, v10, 0);
          }
          v22 = v7;
          v17 = v9 - 24 * ((v9 * (unsigned __int128)0xAAAAAAAAAAAAAABuLL) >> 64);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13935/*"TIME_REST6_DAYS"*/, v5);
          v28 = v22 / 0x15180;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v28);
          v25 = System_String__Format(v23, v24, 0);
          v6 = System_String__Concat_75438412(v6, v25, 0);
          v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13937/*"TIME_REST6_HOURS"*/, v26);
          v13 = qword_594C090;
        }
        v27 = v17;
        v14 = &v27;
LABEL_27:
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(v13, v14);
        v16 = System_String__Format(v12, v15, 0);
        return System_String__Concat_75438412(v6, v16, 0);
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13938/*"TIME_REST6_MINUTES"*/, v5);
      v28 = v8;
      v13 = qword_594C090;
    }
    v14 = &v28;
    goto LABEL_27;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  return LocalizationManager__Get((System_String_o *)StringLiteral_13940/*"TIME_REST6_TIMEOVER"*/, v5);
}


System_String_o *LocalizationManager__GetRestTimeInFormat(
        int64_t at,
        int64_t nowTime,
        System_String_o *format,
        const MethodInfo *method)
{
  int64_t Time; // x21
  unsigned __int64 v7; // x8
  __int64 v8; // x23
  __int64 v9; // x21
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x21
  __int64 v12; // x0
  Il2CppObject *v13; // x0
  __int64 v15; // [xsp+8h] [xbp-48h] BYREF
  __int64 v16; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v17; // [xsp+18h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_5937D6D & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5937D6D = 1;
  }
  if ( Time < 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  v7 = at - Time;
  if ( at - Time < 0 )
  {
    LODWORD(v17) = 0;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
    LODWORD(v16) = 0;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v16);
    v12 = qword_594C070;
    LODWORD(v15) = 0;
  }
  else if ( v7 >= 0x57E40 )
  {
    LODWORD(v17) = 99;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
    LODWORD(v16) = 99;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v16);
    v12 = qword_594C070;
    LODWORD(v15) = 99;
  }
  else
  {
    v8 = (unsigned int)v7 % 0x3C;
    v17 = (unsigned int)v7 / 0xE10uLL;
    v9 = (unsigned __int16)((unsigned int)v7 / 0x3C) % 0x3Cu;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v17);
    v16 = v9;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v16);
    v12 = qword_594C090;
    v15 = v8;
  }
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(v12, &v15);
  return System_String__Format_75484644(format, v10, v11, v13, 0);
}


void LocalizationManager__GetRestTimeWithSeparatedTimeStr(
        int64_t at,
        System_String_o **numStr,
        System_String_o **charStr,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  unsigned __int64 v13; // x8
  int32_t v14; // w1
  const MethodInfo *v15; // x1
  __int64 *v16; // x8
  int32_t v17; // w1
  int32_t v18; // w1
  System_String_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x1
  __int64 *v34; // x8
  System_String_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  unsigned __int64 v56; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v57; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v58; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5937D6E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13973/*"TIME_STR_TIMEOVER"*/);
    sub_21FFC50(&StringLiteral_13970/*"TIME_STR_MINUTES"*/);
    sub_21FFC50(&StringLiteral_13968/*"TIME_STR_DAYS"*/);
    sub_21FFC50(&StringLiteral_13972/*"TIME_STR_OVER_YEARS"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_1248/*"1"*/);
    sub_21FFC50(&StringLiteral_13969/*"TIME_STR_HOURS"*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_5937D6E = 1;
  }
  v57 = 0;
  v58 = 0;
  v56 = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, numStr);
  v13 = at - NetworkManager__getTime(0);
  if ( (v13 & 0x8000000000000000LL) != 0LL )
  {
    v17 = (int)StringLiteral_1/*""*/;
    *numStr = (System_String_o *)StringLiteral_1/*""*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)numStr, v17, v7, v8, v9, v10, v11, v12);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    v16 = &StringLiteral_13973/*"TIME_STR_TIMEOVER"*/;
    goto LABEL_19;
  }
  if ( v13 <= 0x3B )
  {
    v18 = StringLiteral_1198/*"0"*/;
    *numStr = (System_String_o *)StringLiteral_1198/*"0"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)numStr, v18, v7, v8, v9, v10, v11, v12);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    v16 = &StringLiteral_13970/*"TIME_STR_MINUTES"*/;
    goto LABEL_19;
  }
  v58 = v13 / 0x3C;
  if ( v13 <= 0xE0F )
  {
    v26 = System_Int64__ToString((int64_t)&v58, 0);
    *numStr = v26;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)numStr, (int32_t)v26, v27, v28, v29, v30, v31, v32);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
    v34 = &StringLiteral_13970/*"TIME_STR_MINUTES"*/;
  }
  else
  {
    v57 = v13 / 0xE10;
    if ( v13 >> 7 <= 0x2A2 )
    {
      v35 = System_Int64__ToString((int64_t)&v57, 0);
      *numStr = v35;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)numStr, (int32_t)v35, v36, v37, v38, v39, v40, v41);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      v34 = &StringLiteral_13969/*"TIME_STR_HOURS"*/;
    }
    else
    {
      v56 = v13 / 0x15180;
      if ( v13 > 0x1E1337F )
      {
        v14 = StringLiteral_1248/*"1"*/;
        *numStr = (System_String_o *)StringLiteral_1248/*"1"*/;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)numStr, v14, v7, v8, v9, v10, v11, v12);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
        v16 = &StringLiteral_13972/*"TIME_STR_OVER_YEARS"*/;
LABEL_19:
        v19 = LocalizationManager__Get((System_String_o *)*v16, v15);
        *charStr = v19;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)charStr, (int32_t)v19, v20, v21, v22, v23, v24, v25);
        return;
      }
      v42 = System_Int64__ToString((int64_t)&v56, 0);
      *numStr = v42;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)numStr, (int32_t)v42, v43, v44, v45, v46, v47, v48);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      v34 = &StringLiteral_13968/*"TIME_STR_DAYS"*/;
    }
  }
  v49 = LocalizationManager__Get((System_String_o *)*v34, v33);
  *charStr = v49;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)charStr, (int32_t)v49, v50, v51, v52, v53, v54, v55);
}


UnityEngine_Color_o LocalizationManager__GetSelectEffectColor(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0
  float *static_fields; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5937D61 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D61 = 1;
  }
  v2 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    v2 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v2->static_fields;
  v4 = static_fields[24];
  v5 = static_fields[25];
  v6 = static_fields[26];
  v7 = static_fields[27];
  result.fields.a = v7;
  result.fields.b = v6;
  result.fields.g = v5;
  result.fields.r = v4;
  return result;
}


System_String_o *LocalizationManager__GetStoneInfo(int32_t n, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937D88 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12860/*"STONE_INFO"*/);
    byte_5937D88 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_12860/*"STONE_INFO"*/, method);
  v6 = n;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetTime(int64_t time, const MethodInfo *method)
{
  System_DateTime_o v3; // x1
  System_DateTime_o v4; // x0
  Il2CppObject *v5; // x19
  System_DateTime_o v6; // x0
  Il2CppObject *v7; // x0
  int32_t Minute; // [xsp+0h] [xbp-30h] BYREF
  int32_t Hour; // [xsp+4h] [xbp-2Ch] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5937D72 & 1) == 0 )
  {
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26397/*"{0:D2}:{1:D2}"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937D72 = 1;
  }
  dateData = 0;
  if ( time < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  dateData = NetworkManager__getServerDateTime_48311712(time, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v3.fields._dateData);
  v4.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v4, 0);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Hour);
  v6.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v6, 0);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Minute);
  return System_String__Format_75484576((System_String_o *)StringLiteral_26397/*"{0:D2}:{1:D2}"*/, v5, v7, 0);
}


System_String_o *LocalizationManager__GetUnitInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_5937D76 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_15382/*"UNIT_INFO"*/);
    byte_5937D76 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15382/*"UNIT_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(count, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetUnknownName(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0

  if ( (byte_5937D5B & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D5B = 1;
  }
  v2 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    v2 = LocalizationManager_TypeInfo;
  }
  return v2->static_fields->unknownNameText;
}


void LocalizationManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5937D59 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
    byte_5937D59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v3 )
  {
    if ( !Instance )
      sub_21FFECC(v3, v4);
    LocalizationManager__InitializeLocal((LocalizationManager_o *)Instance, v4);
  }
}


void LocalizationManager__InitializeLocal(LocalizationManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mainTextData; // x20
  __int64 v4; // x1
  UnityEngine_TextAsset_o *v5; // x0
  LocalizationManager_o *text; // x0
  const MethodInfo *v7; // x2

  if ( (byte_5937D8F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937D8F = 1;
  }
  mainTextData = (UnityEngine_Object_o *)this->fields.mainTextData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(mainTextData, 0, 0) )
  {
    v5 = this->fields.mainTextData;
    if ( !v5 )
      sub_21FFECC(0, v4);
    text = (LocalizationManager_o *)UnityEngine_TextAsset__get_text(v5, 0);
    LocalizationManager__SetTextData(text, (System_String_o *)text, v7);
  }
}


bool LocalizationManager__IsBusySetAssetData(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0

  if ( (byte_5937D58 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D58 = 1;
  }
  v2 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    v2 = LocalizationManager_TypeInfo;
  }
  return v2->static_fields->isBusySetAssetData;
}


bool LocalizationManager__IsColorCode(System_String_o *tagText, const MethodInfo *method)
{
  int32_t stringLength; // w21
  System_String_o *v3; // x19
  int32_t v4; // w20
  int v5; // w8
  unsigned int v6; // w8

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
          v5 = (unsigned __int16)tagText;
          LOBYTE(tagText) = 0;
          v6 = v5 - 65;
          if ( v6 > 0x25 || ((1LL << v6) & 0x3F0000003FLL) == 0 )
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
  int v4; // w8
  unsigned int v5; // w8

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
          v4 = (unsigned __int16)tagText;
          LOBYTE(tagText) = 0;
          v5 = v4 - 65;
          if ( v5 > 0x25 || ((1LL << v5) & 0x3F0000003FLL) == 0 )
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x1
  LocalizationManager_c *v13; // x0
  struct LocalizationManager_StaticFields *static_fields; // x9
  AssetLoader_LoadEndDataHandler_c *v15; // x0
  AssetLoader_LoadEndDataHandler_o *v16; // x20
  __int64 v17; // x1

  if ( (byte_5937D5A & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
    sub_21FFC50(&Method_LocalizationManager___c__DisplayClass16_0__LoadAssetData_b__0__);
    sub_21FFC50(&LocalizationManager___c__DisplayClass16_0_TypeInfo);
    sub_21FFC50(&StringLiteral_8833/*"Localization"*/);
    byte_5937D5A = 1;
  }
  v1 = sub_21FFEBC(LocalizationManager___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
  if ( !v1 )
    sub_21FFECC(Instance, v3);
  *(_QWORD *)(v1 + 16) = Instance;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v1 + 16), (int32_t)Instance, v4, v5, v6, v7, v8, v9);
  v11 = *(UnityEngine_Object_o **)(v1 + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Equality(v11, 0, 0) )
  {
    v13 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      v13 = LocalizationManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    v15 = AssetLoader_LoadEndDataHandler_TypeInfo;
    static_fields->isBusySetAssetData = 1;
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(v15);
    AssetLoader_LoadEndDataHandler___ctor(
      v16,
      (Il2CppObject *)v1,
      Method_LocalizationManager___c__DisplayClass16_0__LoadAssetData_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_8833/*"Localization"*/, v16, 1, 0, 0);
  }
}


System_String_o *LocalizationManager__ReplaceCommonTag(
        System_String_o *text,
        bool sealLimitCountCheck,
        const MethodInfo *method)
{
  int32_t stringLength; // w27
  int32_t v6; // w24
  System_Text_StringBuilder_o *v7; // x21
  int32_t v8; // w0
  int32_t v9; // w25
  void *Instance; // x0
  int v11; // w23
  __int64 v12; // x1
  int32_t v13; // w3
  System_String_o *v14; // x26
  __int64 v15; // x8
  char *v16; // x26
  int32_t v17; // w25
  Il2CppObject *v18; // x0
  ServantEntity_o *v19; // x24
  Il2CppObject *Master_object; // x26
  __int64 v21; // x1
  int32_t v22; // w1
  System_String_o *unknownNameText; // x1
  __int64 v24; // x8
  System_String_o **v25; // x8
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5937D8C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_24475/*"servantName "*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5937D8C = 1;
  }
  entity = 0;
  if ( !text )
    return text;
  stringLength = text->fields._stringLength;
  if ( !stringLength )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = System_String__IndexOf_75501908(text, (System_String_o *)StringLiteral_16395/*"["*/, v6, 0);
    if ( v8 < 0 )
      break;
    v9 = v8;
    Instance = (void *)System_String__IndexOf_75501908(text, (System_String_o *)StringLiteral_16659/*"]"*/, v8, 0);
    if ( ((unsigned int)Instance & 0x80000000) != 0 )
      break;
    v11 = (int)Instance;
    if ( !v7 )
    {
      v7 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_75515192(v7, stringLength + 32, 0);
    }
    v12 = (unsigned int)(v9 + 1);
    if ( v11 == (_DWORD)v12 )
    {
      if ( !v7 )
        goto LABEL_71;
      v13 = v11 - v6;
LABEL_47:
      System_Text_StringBuilder__Append_75522076(v7, text, v6, v13, 0);
      goto LABEL_63;
    }
    Instance = System_String__Substring_75489544(text, v12, v11 + ~v9, 0);
    if ( !Instance )
      goto LABEL_71;
    v14 = (System_String_o *)Instance;
    Instance = (void *)System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_24475/*"servantName "*/, 0);
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
      System_Text_StringBuilder__Append_75522076(v7, text, v6, v9 - v6, 0);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_71;
    v18 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            v17,
            (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( v18 )
    {
      v19 = (ServantEntity_o *)v18;
      if ( *((int *)v16 + 6) >= 3 )
      {
        Instance = (void *)ServantEntity__IsNameTrue((ServantEntity_o *)v18, 0);
        v24 = *((_QWORD *)v16 + 3);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( (unsigned int)v24 <= 2 )
            goto LABEL_72;
          v25 = (System_String_o **)(v16 + 48);
        }
        else
        {
          if ( (v24 & 0xFFFFFFFE) == 0 )
LABEL_72:
            sub_21FFED4(Instance);
          v25 = (System_String_o **)(v16 + 40);
        }
        if ( !v7 )
LABEL_71:
          sub_21FFECC(Instance, v12);
        unknownNameText = *v25;
      }
      else
      {
        if ( !sealLimitCountCheck )
          goto LABEL_55;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
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
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
          Instance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
            v22 = -1;
          else
            v22 = (int)Instance;
        }
        else
        {
LABEL_55:
          v22 = -1;
        }
        Instance = ServantEntity__getName(v19, v22, -1, 0, 0, 0);
        if ( !v7 )
          goto LABEL_71;
        unknownNameText = (System_String_o *)Instance;
      }
    }
    else
    {
LABEL_48:
      Instance = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      if ( !v7 )
        goto LABEL_71;
      unknownNameText = LocalizationManager_TypeInfo->static_fields->unknownNameText;
    }
    System_Text_StringBuilder__Append_75521760(v7, unknownNameText, 0);
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
      System_Text_StringBuilder__Append_75522076(v7, text, v6, stringLength - v6, 0);
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
  int32_t stringLength; // w27
  int32_t v6; // w24
  System_Text_StringBuilder_o *v7; // x21
  int32_t v8; // w0
  int32_t v9; // w26
  int32_t v10; // w0
  unsigned int v11; // w22
  int32_t v12; // w25
  int32_t v13; // w23
  System_String_o *appended; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w3
  System_Text_StringBuilder_o *v17; // x0
  System_String_o *v18; // x1
  int32_t v19; // w2
  unsigned int v20; // w26
  System_String_o *v21; // x24
  System_String_c *klass; // x8
  System_String_o *monitor; // x1
  System_String_o *v24; // x24
  System_String_o *v25; // x25
  __int64 *v26; // x8
  System_String_o *v27; // x25
  System_String_o *v28; // x25
  System_String_o *v29; // x0

  if ( (byte_5937D8D & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_395/*"#"*/);
    sub_21FFC50(&StringLiteral_23432/*"o"*/);
    sub_21FFC50(&StringLiteral_16415/*"[-]"*/);
    sub_21FFC50(&StringLiteral_21012/*"i"*/);
    sub_21FFC50(&StringLiteral_20612/*"g"*/);
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    sub_21FFC50(&StringLiteral_17649/*"b"*/);
    sub_21FFC50(&StringLiteral_1186/*"/sub"*/);
    sub_21FFC50(&StringLiteral_1183/*"/o"*/);
    sub_21FFC50(&StringLiteral_1190/*"/u"*/);
    sub_21FFC50(&StringLiteral_506/*"%"*/);
    sub_21FFC50(&StringLiteral_16690/*"^"*/);
    sub_21FFC50(&StringLiteral_1170/*"/b"*/);
    sub_21FFC50(&StringLiteral_528/*"&"*/);
    sub_21FFC50(&StringLiteral_25064/*"sup"*/);
    sub_21FFC50(&StringLiteral_26609/*"~"*/);
    sub_21FFC50(&StringLiteral_24064/*"r"*/);
    sub_21FFC50(&StringLiteral_22271/*"line"*/);
    sub_21FFC50(&StringLiteral_1187/*"/sup"*/);
    sub_21FFC50(&StringLiteral_1185/*"/s"*/);
    sub_21FFC50(&StringLiteral_21225/*"image"*/);
    sub_21FFC50(&StringLiteral_1178/*"/g"*/);
    sub_21FFC50(&StringLiteral_24973/*"sub"*/);
    sub_21FFC50(&StringLiteral_25526/*"u"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_24335/*"s"*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5937D8D = 1;
  }
  if ( !text )
    return text;
  stringLength = text->fields._stringLength;
  if ( !stringLength )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = System_String__IndexOf_75501908(text, (System_String_o *)StringLiteral_16395/*"["*/, v6, 0);
    if ( v8 < 0 )
      break;
    v9 = v8;
    if ( v8 + 1 >= stringLength )
      break;
    v10 = System_String__IndexOf_75501908(text, (System_String_o *)StringLiteral_16659/*"]"*/, v8 + 1, 0);
    if ( v10 < 0 )
      break;
    v11 = v10;
    do
    {
      v12 = v9 + 1;
      v13 = v9;
      appended = (System_String_o *)System_String__IndexOf_75501908(
                                      text,
                                      (System_String_o *)StringLiteral_16395/*"["*/,
                                      v9 + 1,
                                      0);
      v9 = (int)appended;
    }
    while ( (unsigned int)appended <= v11 );
    if ( v12 >= stringLength )
      break;
    if ( !v7 )
    {
      v7 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_75515192(v7, stringLength + 32, 0);
    }
    if ( v11 != v12 )
    {
      if ( v13 > v6 )
      {
        if ( !v7 )
          goto LABEL_109;
        System_Text_StringBuilder__Append_75522076(v7, text, v6, v13 - v6, 0);
      }
      v20 = v11 - v13;
      appended = System_String__Substring_75489544(text, v12, v11 - v13 - 1, 0);
      if ( !appended )
        goto LABEL_109;
      v21 = appended;
      appended = (System_String_o *)System_String__StartsWith(appended, (System_String_o *)StringLiteral_395/*"#"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
      {
        if ( (int)(v20 - 2) < 1 )
          goto LABEL_18;
        appended = System_String__Substring_75489544(text, v13 + 2, v20 - 2, 0);
        if ( !appended )
          goto LABEL_109;
        appended = (System_String_o *)System_String__Split(appended, 0x3Au, 0, 0);
        if ( !appended )
          goto LABEL_18;
        klass = appended[1].klass;
        if ( !klass )
          goto LABEL_18;
        if ( !(_DWORD)klass )
          goto LABEL_110;
        if ( !v7 )
          goto LABEL_109;
        monitor = (System_String_o *)appended[1].monitor;
LABEL_32:
        appended = (System_String_o *)System_Text_StringBuilder__Append_75521760(v7, monitor, 0);
        goto LABEL_18;
      }
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_528/*"&"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_18;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_16690/*"^"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_18;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_26609/*"~"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_18;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_506/*"%"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_18;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_22271/*"line"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_18;
      appended = (System_String_o *)System_String__Split(v21, 0x20u, 0, 0);
      if ( !appended )
        goto LABEL_109;
      v24 = appended;
      if ( !LODWORD(appended[1].klass) )
        goto LABEL_110;
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
                v26 = &StringLiteral_25526/*"u"*/;
                goto LABEL_86;
              case 0xF60C4582:
                v26 = &StringLiteral_24335/*"s"*/;
                goto LABEL_86;
              case 0xF70C4715:
                v26 = &StringLiteral_24064/*"r"*/;
                goto LABEL_86;
            }
          }
          else
          {
            if ( (_DWORD)appended == -368299362 )
            {
              v26 = &StringLiteral_23432/*"o"*/;
              goto LABEL_86;
            }
            if ( (_DWORD)appended == -334744124 )
            {
              v26 = &StringLiteral_21012/*"i"*/;
              goto LABEL_86;
            }
          }
        }
        else if ( (unsigned int)appended > 0xDC4E3915 )
        {
          if ( (_DWORD)appended == -502520314 )
          {
            v26 = &StringLiteral_20612/*"g"*/;
            goto LABEL_86;
          }
          if ( (_DWORD)appended == -418632219 )
          {
            v26 = &StringLiteral_17649/*"b"*/;
            goto LABEL_86;
          }
        }
        else
        {
          if ( (_DWORD)appended == -900850497 )
          {
            v26 = &StringLiteral_25064/*"sup"*/;
            goto LABEL_86;
          }
          if ( (_DWORD)appended == -598853355 )
          {
            v26 = &StringLiteral_24973/*"sub"*/;
            goto LABEL_86;
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
              v26 = &StringLiteral_21225/*"image"*/;
              goto LABEL_86;
            case 0x6AD20EBB:
              v26 = &StringLiteral_1178/*"/g"*/;
              goto LABEL_86;
            case 0x6DD21374:
              v26 = &StringLiteral_1170/*"/b"*/;
              goto LABEL_86;
          }
        }
        else
        {
          if ( (_DWORD)appended == 1657930275 )
          {
            v26 = &StringLiteral_1183/*"/o"*/;
            goto LABEL_86;
          }
          if ( (_DWORD)appended == 1766857154 )
          {
            v26 = &StringLiteral_1187/*"/sup"*/;
            goto LABEL_86;
          }
        }
      }
      else if ( (unsigned int)appended > 0x574FFD6C )
      {
        if ( (_DWORD)appended == 1557264561 )
        {
          v26 = &StringLiteral_1190/*"/u"*/;
          goto LABEL_86;
        }
        if ( (_DWORD)appended == 1590819799 )
        {
          v26 = &StringLiteral_1185/*"/s"*/;
          goto LABEL_86;
        }
      }
      else if ( (_DWORD)appended == 671913016 )
      {
        appended = (System_String_o *)System_String__op_Equality(v25, (System_String_o *)StringLiteral_923/*"-"*/, 0);
        if ( ((unsigned __int8)appended & 1) != 0 )
        {
          if ( !isUseColorTag )
            goto LABEL_18;
          if ( !v7 )
            goto LABEL_109;
          monitor = (System_String_o *)StringLiteral_16415/*"[-]"*/;
          goto LABEL_32;
        }
      }
      else if ( (_DWORD)appended == 1464860012 )
      {
        v26 = &StringLiteral_1186/*"/sub"*/;
LABEL_86:
        appended = (System_String_o *)System_String__op_Equality(v25, (System_String_o *)*v26, 0);
        if ( ((unsigned __int8)appended & 1) != 0 )
          goto LABEL_18;
      }
      if ( LODWORD(v24[1].klass) == 1 )
      {
        v27 = (System_String_o *)v24[1].monitor;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
        appended = (System_String_o *)LocalizationManager__IsGreyCode(v27, v15);
        if ( ((unsigned __int8)appended & 1) != 0 )
          goto LABEL_18;
        if ( !LODWORD(v24[1].klass) )
          goto LABEL_110;
        v28 = (System_String_o *)v24[1].monitor;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
        appended = (System_String_o *)LocalizationManager__IsColorCode(v28, v15);
        if ( ((unsigned __int8)appended & 1) != 0 )
        {
          if ( isUseColorTag )
          {
            if ( !v7 )
              goto LABEL_109;
            appended = (System_String_o *)System_Text_StringBuilder__Append_75524092(v7, 0x5Bu, 0);
            if ( !LODWORD(v24[1].klass) )
LABEL_110:
              sub_21FFED4(appended);
            appended = (System_String_o *)v24[1].monitor;
            if ( !appended )
              goto LABEL_109;
            v29 = System_String__Substring_75489544(appended, 0, 6, 0);
            System_Text_StringBuilder__Append_75521760(v7, v29, 0);
            appended = (System_String_o *)System_Text_StringBuilder__Append_75524092(v7, 0x5Du, 0);
          }
          goto LABEL_18;
        }
      }
      if ( !v7 )
        goto LABEL_109;
      v16 = v20 + 1;
      v17 = v7;
      v18 = text;
      v19 = v13;
      goto LABEL_17;
    }
    if ( !v7 )
      goto LABEL_109;
    v16 = v11 - v6;
    v17 = v7;
    v18 = text;
    v19 = v6;
LABEL_17:
    appended = (System_String_o *)System_Text_StringBuilder__Append_75522076(v17, v18, v19, v16, 0);
LABEL_18:
    v6 = v11 + 1;
    if ( (int)(v11 + 1) >= stringLength )
    {
      if ( !v7 )
LABEL_109:
        sub_21FFECC(appended, v15);
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                                  v7,
                                  v7->klass->vtable._3_ToString.method);
    }
  }
  if ( !v7 )
    return text;
  if ( stringLength > v6 )
    System_Text_StringBuilder__Append_75522076(v7, text, v6, stringLength - v6, 0);
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
  unsigned int v14; // w23
  Il2CppClass **v15; // x8
  System_String_o *v16; // x21
  System_String_o *v17; // x1
  System_Text_StringBuilder_o *v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x19
  __int64 v21; // x1
  LocalizationManager_c *v22; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x21
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  LocalizationManager_c *v27; // x0
  Il2CppObject *Item; // x0
  struct LocalizationManager_StaticFields *static_fields; // x8
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppObject *v36; // x0
  struct LocalizationManager_StaticFields *v37; // x8
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x0
  struct LocalizationManager_StaticFields *v45; // x8
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  Il2CppObject *v52; // x0
  struct LocalizationManager_StaticFields *v53; // x8
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct LocalizationManager_StaticFields *v60; // x8
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  LocalizationManager_c *v67; // x0
  struct LocalizationManager_StaticFields *v68; // x8
  int32_t v69; // w1
  LocalizationManager_c *v70; // x0
  Il2CppObject *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  Il2CppObject *v78; // x0
  struct LocalizationManager_StaticFields *v79; // x8
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  Il2CppObject *v86; // x0
  struct LocalizationManager_StaticFields *v87; // x8
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  LocalizationManager_c *v94; // x0
  bool v95; // w8
  LocalizationManager_c *v96; // x0
  int v97; // w9
  Il2CppObject *v98; // x0
  Il2CppObject *v99; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v105; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v106; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_5937D90 & 1) == 0 )
  {
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_21FFC50(&StringLiteral_8544/*"KINSOKU_SEPARATION_STR"*/);
    sub_21FFC50(&StringLiteral_1126/*"//"*/);
    sub_21FFC50(&StringLiteral_9661/*"NORMAL_EFFECT_COLOR"*/);
    sub_21FFC50(&StringLiteral_8545/*"KINSOKU_TOP_STR"*/);
    sub_21FFC50(&StringLiteral_8527/*"KANNSUUJI_100"*/);
    sub_21FFC50(&StringLiteral_12010/*"SELECT_EFFECT_COLOR"*/);
    sub_21FFC50(&StringLiteral_8526/*"KANNSUUJI_10"*/);
    sub_21FFC50(&StringLiteral_9697/*"NO_ENTRY_NAME"*/);
    sub_21FFC50(&StringLiteral_8543/*"KINSOKU_LAST_STR"*/);
    sub_21FFC50(&StringLiteral_15392/*"UNKNOWN_NAME"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_8525/*"KANNSUUJI_1"*/);
    byte_5937D90 = 1;
  }
  memset(&v106, 0, sizeof(v106));
  v4 = (System_Array_o *)sub_21FFD10(char___TypeInfo, 5);
  v5.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v6 = (System_Char_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v4, v5, 0);
  if ( !text_data )
    goto LABEL_63;
  v9 = System_String__Split_75492796(text_data, v6, 1, 0);
  stringLength = text_data->fields._stringLength;
  v11 = v9;
  v12 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75515192(v12, stringLength, 0);
  if ( !v11 )
    goto LABEL_63;
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_21FFED4(appended);
      v15 = &v11->obj.klass + (int)v14;
      v16 = (System_String_o *)v15[4];
      if ( !v16 )
        goto LABEL_63;
      appended = (System_String_o *)System_String__IndexOf_75501892(
                                      (System_String_o *)v15[4],
                                      (System_String_o *)StringLiteral_1126/*"//"*/,
                                      0);
      if ( ((unsigned int)appended & 0x80000000) != 0 )
        break;
      if ( (_DWORD)appended )
      {
        appended = System_String__Substring_75489544(v16, 0, (int)appended - 1, 0);
        if ( !v12 )
          goto LABEL_63;
        v17 = appended;
        v18 = v12;
LABEL_15:
        appended = (System_String_o *)System_Text_StringBuilder__Append_75521760(v18, v17, 0);
        if ( !appended )
          goto LABEL_63;
        appended = (System_String_o *)System_Text_StringBuilder__Append_75524092(
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
  v20 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                             v12,
                             v12->klass->vtable._3_ToString.method);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v19);
  appended = (System_String_o *)JsonManager__getDictionary(v20, 0);
  if ( !appended )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v105,
    (System_Collections_Generic_Dictionary_object__object__o *)appended,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v106 = v105;
  v105.fields._dictionary = 0;
  *(_QWORD *)&v105.fields._version = &v106;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v106,
            (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
  {
    v22 = LocalizationManager_TypeInfo;
    current = v106.fields._current;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
      v22 = LocalizationManager_TypeInfo;
    }
    if ( !current.fields.value )
      sub_21FFECC(v22, v21);
    lookup = (System_Collections_Generic_Dictionary_object__object__o *)v22->static_fields->lookup;
    v25 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
                            current.fields.value,
                            current.fields.value->klass->vtable[3].method);
    if ( !lookup )
      sub_21FFECC(v25, v26);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      lookup,
      current.fields.key,
      v25,
      (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v106,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  v27 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v27 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v27->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)appended,
           (Il2CppObject *)StringLiteral_15392/*"UNKNOWN_NAME"*/,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  static_fields = LocalizationManager_TypeInfo->static_fields;
  static_fields->unknownNameText = (struct System_String_o *)Item;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->unknownNameText,
    (int32_t)Item,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v36 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_9697/*"NO_ENTRY_NAME"*/,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v37 = LocalizationManager_TypeInfo->static_fields;
  v37->noEntryNameText = (struct System_String_o *)v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v37->noEntryNameText, (int32_t)v36, v38, v39, v40, v41, v42, v43);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v44 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_8545/*"KINSOKU_TOP_STR"*/,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v45 = LocalizationManager_TypeInfo->static_fields;
  v45->kinsokuTopString = (struct System_String_o *)v44;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->kinsokuTopString, (int32_t)v44, v46, v47, v48, v49, v50, v51);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v52 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_8543/*"KINSOKU_LAST_STR"*/,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v53 = LocalizationManager_TypeInfo->static_fields;
  v53->kinsokuLastString = (struct System_String_o *)v52;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v53->kinsokuLastString, (int32_t)v52, v54, v55, v56, v57, v58, v59);
  v60 = LocalizationManager_TypeInfo->static_fields;
  appended = (System_String_o *)v60->lookup;
  if ( !appended )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)appended,
    (Il2CppObject *)StringLiteral_8544/*"KINSOKU_SEPARATION_STR"*/,
    (Il2CppObject **)&v60->kinsokuSeparationString,
    (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
  v67 = LocalizationManager_TypeInfo;
  v68 = LocalizationManager_TypeInfo->static_fields;
  if ( !v68->kinsokuSeparationString )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
      v68 = LocalizationManager_TypeInfo->static_fields;
    }
    v69 = (int)StringLiteral_1/*""*/;
    v68->kinsokuSeparationString = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v68->kinsokuSeparationString, v69, v61, v62, v63, v64, v65, v66);
    v67 = LocalizationManager_TypeInfo;
  }
  if ( !*(&v67->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v67, v8);
    v67 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v67->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)appended,
         (Il2CppObject *)StringLiteral_8525/*"KANNSUUJI_1"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v70 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
      v70 = LocalizationManager_TypeInfo;
    }
    appended = (System_String_o *)v70->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v71 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8525/*"KANNSUUJI_1"*/,
            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    LocalizationManager_TypeInfo->static_fields->lowNumberString = (struct System_String_o *)v71;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)LocalizationManager_TypeInfo->static_fields,
      (int32_t)v71,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v78 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8526/*"KANNSUUJI_10"*/,
            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v79 = LocalizationManager_TypeInfo->static_fields;
    v79->hiNumberString = (struct System_String_o *)v78;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v79->hiNumberString, (int32_t)v78, v80, v81, v82, v83, v84, v85);
    appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v86 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8527/*"KANNSUUJI_100"*/,
            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v87 = LocalizationManager_TypeInfo->static_fields;
    v87->hi2NumberString = (struct System_String_o *)v86;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v87->hi2NumberString, (int32_t)v86, v88, v89, v90, v91, v92, v93);
  }
  v94 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v94 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v94->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v95 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_9661/*"NORMAL_EFFECT_COLOR"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  v96 = LocalizationManager_TypeInfo;
  v97 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v95 )
  {
    if ( !v97 )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
      v96 = LocalizationManager_TypeInfo;
    }
    appended = (System_String_o *)v96->static_fields->lookup;
    if ( appended )
    {
      v98 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)appended,
              (Il2CppObject *)StringLiteral_9661/*"NORMAL_EFFECT_COLOR"*/,
              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_ColorUtility__TryParseHtmlString(
        (System_String_o *)v98,
        &LocalizationManager_TypeInfo->static_fields->normalEffectColor,
        0);
      appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
      if ( appended )
      {
        v99 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)appended,
                (Il2CppObject *)StringLiteral_12010/*"SELECT_EFFECT_COLOR"*/,
                (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)v99,
          &LocalizationManager_TypeInfo->static_fields->selectEffectColor,
          0);
        return;
      }
    }
LABEL_63:
    sub_21FFECC(appended, v8);
  }
  if ( !v97 )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v96 = LocalizationManager_TypeInfo;
  }
  __asm { FMOV            V0.4S, #1.0 }
  v96->static_fields->selectEffectColor = _Q0;
  v96->static_fields->normalEffectColor = _Q0;
}


bool LocalizationManager__TryGet(
        System_String_o **resultText,
        System_String_o *key,
        System_String_o *defaultText,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  bool v14; // w22
  LocalizationManager_c *v15; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_5937D63 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D63 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, key);
  v14 = LocalizationManager__ContainsKey(key, (const MethodInfo *)key);
  if ( v14 )
  {
    v15 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
      v15 = LocalizationManager_TypeInfo;
    }
    lookup = (System_Collections_Generic_Dictionary_object__object__o *)v15->static_fields->lookup;
    if ( !lookup )
      sub_21FFECC(0, v7);
    defaultText = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       lookup,
                                       (Il2CppObject *)key,
                                       (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  *resultText = defaultText;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)resultText, (int32_t)defaultText, v8, v9, v10, v11, v12, v13);
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
  __int64 v6; // x1
  LocalizationManager_c *v7; // x0

  v4 = this;
  if ( (byte_5937D93 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_TextAsset___);
    this = (LocalizationManager___c__DisplayClass16_0_o *)sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5937D93 = 1;
  }
  if ( !assetData
    || (this = (LocalizationManager___c__DisplayClass16_0_o *)AssetData__GetObject_object_(
                                                                assetData,
                                                                (const MethodInfo_379EFEC *)Method_AssetData_GetObject_TextAsset___)) == 0
    || (this = (LocalizationManager___c__DisplayClass16_0_o *)UnityEngine_TextAsset__get_text(
                                                                (UnityEngine_TextAsset_o *)this,
                                                                0),
        !v4->fields.ins) )
  {
    sub_21FFECC(this, assetData);
  }
  LocalizationManager__SetTextData((LocalizationManager_o *)this, (System_String_o *)this, v5);
  v7 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v7 = LocalizationManager_TypeInfo;
  }
  v7->static_fields->isBusySetAssetData = 0;
}