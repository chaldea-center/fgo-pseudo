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

  if ( (byte_596FEC4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_2213A60(&System_Func_string__string__TypeInfo);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&Method_LocalizationManager_ContainsKey__);
    sub_2213A60(&Method_LocalizationManager_Get__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FEC4 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  static_fields = LocalizationManager_TypeInfo->static_fields;
  static_fields->lookup = (struct System_Collections_Generic_Dictionary_string__string__o *)v1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->lookup, (int32_t)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(v9, 0, Method_LocalizationManager_ContainsKey__, 0);
  if ( !byte_596FF53 )
  {
    sub_2213A60(&NguiLocalizationManager_TypeInfo);
    byte_596FF53 = 1;
  }
  NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc = (struct System_Func_string__bool__o *)v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)NguiLocalizationManager_TypeInfo->static_fields,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Func_object__object__o *)sub_2213CCC(System_Func_string__string__TypeInfo);
  System_Func_object__object____ctor(v16, 0, Method_LocalizationManager_Get__, 0);
  if ( !byte_596FF54 )
  {
    sub_2213A60(&NguiLocalizationManager_TypeInfo);
    byte_596FF54 = 1;
  }
  v23 = NguiLocalizationManager_TypeInfo->static_fields;
  v23->getFunc = (struct System_Func_string__string__o *)v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->getFunc, (int32_t)v16, v17, v18, v19, v20, v21, v22);
}


void LocalizationManager___ctor(LocalizationManager_o *this, const MethodInfo *method)
{
  if ( (byte_596FF00 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_LocalizationManager___ctor__);
    byte_596FF00 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_LocalizationManager___ctor__);
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

  if ( (byte_596FEFC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    byte_596FEFC = 1;
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
      return System_String__Substring_75702848((System_String_o *)lowNumberString, v3, 1, 0);
LABEL_39:
    sub_2213CDC(lowNumberString, method);
  }
  v7 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75728496(v7, 10, 0);
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
      lowNumberString = System_String__Substring_75702848((System_String_o *)lowNumberString, v8, 1, 0);
      if ( !v7 )
        goto LABEL_39;
      System_Text_StringBuilder__Append_75735064(v7, (System_String_o *)lowNumberString, 0);
    }
    lowNumberString = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    if ( !v7 )
      goto LABEL_39;
    System_Text_StringBuilder__Append_75735064(v7, LocalizationManager_TypeInfo->static_fields->hi2NumberString, 0);
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
    lowNumberString = System_String__Substring_75702848((System_String_o *)lowNumberString, v12, 1, 0);
    if ( !v7 )
      goto LABEL_39;
    System_Text_StringBuilder__Append_75735064(v7, (System_String_o *)lowNumberString, 0);
    lowNumberString = LocalizationManager_TypeInfo->static_fields->hiNumberString;
    if ( !lowNumberString )
      goto LABEL_39;
    lowNumberString = System_String__Substring_75702848((System_String_o *)lowNumberString, 0, 1, 0);
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
    lowNumberString = System_String__Substring_75702848(hiNumberString, v12, 1, 0);
    if ( !v7 )
      goto LABEL_39;
  }
  System_Text_StringBuilder__Append_75735064(v7, (System_String_o *)lowNumberString, 0);
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
    v15 = System_String__Substring_75702848((System_String_o *)lowNumberString, v3, 1, 0);
    System_Text_StringBuilder__Append_75735064(v7, v15, 0);
  }
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
           v7,
           v7->klass->vtable._3_ToString.method);
}


bool LocalizationManager__ContainsKey(System_String_o *key, const MethodInfo *method)
{
  LocalizationManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_596FED1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FED1 = 1;
  }
  v3 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v3 = LocalizationManager_TypeInfo;
  }
  lookup = (System_Collections_Generic_Dictionary_object__object__o *)v3->static_fields->lookup;
  if ( !lookup )
    sub_2213CDC(0, method);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           lookup,
           (Il2CppObject *)key,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
}


System_String_o *LocalizationManager__ConvertNumberToRomaNumber(int32_t number, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *v5; // x19
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEFF & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11649/*"ROMAN_NUMBER_{0}"*/);
    byte_596FEFF = 1;
  }
  v7 = number;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_11649/*"ROMAN_NUMBER_{0}"*/, v3, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
  return LocalizationManager__Get(v5, v4);
}


System_String_o *LocalizationManager__Get(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  LocalizationManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_596FECF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FECF = 1;
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
    sub_2213CDC(0, v3);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              lookup,
                              (Il2CppObject *)key,
                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


System_String_o *LocalizationManager__GetAttackIconInfo(int32_t atk, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEF5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2143/*"ATTACK_ICON_INFO"*/);
    byte_596FEF5 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2143/*"ATTACK_ICON_INFO"*/, method);
  v6 = atk;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetAttackInfo(int32_t atk, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEF4 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2144/*"ATTACK_INFO"*/);
    byte_596FEF4 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2144/*"ATTACK_INFO"*/, method);
  v6 = atk;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
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

  if ( (byte_596FED4 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_13947/*"TIME_BEFORE_MINUTES"*/);
    sub_2213A60(&StringLiteral_13945/*"TIME_BEFORE_DAYS"*/);
    sub_2213A60(&StringLiteral_13946/*"TIME_BEFORE_HOURS"*/);
    sub_2213A60(&StringLiteral_13948/*"TIME_BEFORE_OVER_YEARS"*/);
    byte_596FED4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v4 = NetworkManager__getTime(0) - at;
  if ( (__int64)v4 <= 59 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13947/*"TIME_BEFORE_MINUTES"*/, v3);
    LODWORD(v13) = 0;
    v8 = qword_5984348;
    goto LABEL_26;
  }
  if ( v4 <= 0xE0F )
  {
    v9 = v4;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13947/*"TIME_BEFORE_MINUTES"*/, v3);
    v13 = v9 / 0x3C;
    goto LABEL_25;
  }
  if ( v4 >> 7 <= 0x2A2 )
  {
    v10 = v4 / 0xE10;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
    v11 = &StringLiteral_13946/*"TIME_BEFORE_HOURS"*/;
    goto LABEL_24;
  }
  v5 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v4 <= 0x1E1337F )
  {
    v10 = v4 / 0x15180;
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
    v11 = &StringLiteral_13945/*"TIME_BEFORE_DAYS"*/;
LABEL_24:
    v7 = LocalizationManager__Get((System_String_o *)*v11, v3);
    v13 = v10;
LABEL_25:
    v8 = qword_5984368;
LABEL_26:
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(v8, &v13);
    return System_String__Format(v7, v12, 0);
  }
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
  return LocalizationManager__Get((System_String_o *)StringLiteral_13948/*"TIME_BEFORE_OVER_YEARS"*/, v3);
}


System_String_o *LocalizationManager__GetCostIconInfo(int32_t cost, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEF1 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_4002/*"COST_ICON_INFO"*/);
    byte_596FEF1 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_4002/*"COST_ICON_INFO"*/, method);
  v6 = cost;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetCostInfo(int32_t cost, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEF0 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_4003/*"COST_INFO"*/);
    byte_596FEF0 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_4003/*"COST_INFO"*/, method);
  v6 = cost;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetCountInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEE6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_4004/*"COUNT_INFO"*/);
    byte_596FEE6 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_4004/*"COUNT_INFO"*/, method);
  v6 = count;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetDate(int64_t time, const MethodInfo *method)
{
  System_DateTime_o v3; // x1
  Il2CppObject *v4; // x19
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  int32_t Day; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Month; // [xsp+8h] [xbp-38h] BYREF
  int32_t Year; // [xsp+Ch] [xbp-34h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596FEDF & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_26470/*"{0:D}/{1:D2}/{2:D2}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FEDF = 1;
  }
  dateData = 0;
  if ( time < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  dateData = NetworkManager__getServerDateTime_48347596(time, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v3.fields._dateData);
  Year = System_DateTime__get_Year((System_DateTime_o)&dateData, 0);
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Year);
  Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Month);
  Day = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Day);
  return System_String__Format_75697948((System_String_o *)StringLiteral_26470/*"{0:D}/{1:D2}/{2:D2}"*/, v4, v5, v6, 0);
}


System_String_o *LocalizationManager__GetDateTime(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x20
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x20
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x20
  __int64 v44; // x0
  int32_t Minute; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-38h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Month; // [xsp+10h] [xbp-30h] BYREF
  int32_t Year; // [xsp+14h] [xbp-2Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596FEE1 & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_26471/*"{0:D}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/);
    byte_596FEE1 = 1;
  }
  dateData = 0;
  if ( time >= 1 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    dateData = NetworkManager__getServerDateTime_48347596(time, 0).fields._dateData;
    v4 = sub_2213B20(object___TypeInfo, 5);
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v3);
    Year = System_DateTime__get_Year((System_DateTime_o)&dateData, 0);
    v5 = j_il2cpp_value_box_0(qword_5984348, &Year);
    if ( !v4 )
      sub_2213CDC(v5, v6);
    v13 = v5;
    if ( !v5 || (v5 = sub_2213BB4(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_27;
      *(_QWORD *)(v4 + 32) = v13;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), v13, v7, v8, v9, v10, v11, v12);
      Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
      v5 = j_il2cpp_value_box_0(qword_5984348, &Month);
      v21 = v5;
      if ( !v5 || (v5 = sub_2213BB4(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_27;
        *(_QWORD *)(v4 + 40) = v21;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 40), v21, v15, v16, v17, v18, v19, v20);
        Day = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
        v5 = j_il2cpp_value_box_0(qword_5984348, &Day);
        v28 = v5;
        if ( !v5 || (v5 = sub_2213BB4(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v4 + 24) <= 2u )
            goto LABEL_27;
          *(_QWORD *)(v4 + 48) = v28;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 48), v28, v22, v23, v24, v25, v26, v27);
          Hour = System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
          v5 = j_il2cpp_value_box_0(qword_5984348, &Hour);
          v35 = v5;
          if ( !v5 || (v5 = sub_2213BB4(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v4 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_27;
            *(_QWORD *)(v4 + 56) = v35;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 56), v35, v29, v30, v31, v32, v33, v34);
            Minute = System_DateTime__get_Minute((System_DateTime_o)&dateData, 0);
            v5 = j_il2cpp_value_box_0(qword_5984348, &Minute);
            v42 = v5;
            if ( !v5 || (v5 = sub_2213BB4(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v4 + 24) > 4u )
              {
                *(_QWORD *)(v4 + 64) = v42;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 64), v42, v36, v37, v38, v39, v40, v41);
                return System_String__Format_75698016(
                         (System_String_o *)StringLiteral_26471/*"{0:D}/{1:D2}/{2:D2} {3:D2}:{4:D2}"*/,
                         (System_Object_array *)v4,
                         0);
              }
LABEL_27:
              sub_2213CE4(v5);
            }
          }
        }
      }
    }
    v44 = sub_2213D00(v5, v14);
    sub_2213BA0(v44, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *LocalizationManager__GetDateTimeDayOfWeek(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x1
  System_IFormatProvider_o *CultureInfo_76764288; // x20
  __int64 v5; // x1
  __int64 v6; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x21
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x20
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x20
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x20
  __int64 v53; // x0
  int32_t Minute; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-48h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Month; // [xsp+10h] [xbp-40h] BYREF
  int32_t Year; // [xsp+14h] [xbp-3Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596FEE2 & 1) == 0 )
  {
    sub_2213A60(&System_Globalization_CultureInfo_TypeInfo);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_26472/*"{0:D}/{1:D2}/{2:D2}({3}) {4:D2}:{5:D2}"*/);
    sub_2213A60(&StringLiteral_22091/*"ja-JP"*/);
    sub_2213A60(&StringLiteral_19334/*"ddd"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FEE2 = 1;
  }
  dateData = 0;
  if ( time >= 1 )
  {
    if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, method);
    CultureInfo_76764288 = (System_IFormatProvider_o *)System_Globalization_CultureInfo__GetCultureInfo_76764288(
                                                         (System_String_o *)StringLiteral_22091/*"ja-JP"*/,
                                                         0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
    dateData = NetworkManager__getServerDateTime_48347596(time, 0).fields._dateData;
    v6 = sub_2213B20(object___TypeInfo, 6);
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v5);
    Year = System_DateTime__get_Year((System_DateTime_o)&dateData, 0);
    v7 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &Year);
    if ( !v6 )
      sub_2213CDC(v7, v8);
    v15 = v7;
    if ( !v7 || (v7 = (System_String_o *)sub_2213BB4(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v6 + 24) )
        goto LABEL_32;
      *(_QWORD *)(v6 + 32) = v15;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)v15, v9, v10, v11, v12, v13, v14);
      Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
      v7 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &Month);
      v23 = v7;
      if ( !v7 || (v7 = (System_String_o *)sub_2213BB4(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v6 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_32;
        *(_QWORD *)(v6 + 40) = v23;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)v23, v17, v18, v19, v20, v21, v22);
        Day = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
        v7 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &Day);
        v30 = v7;
        if ( !v7 || (v7 = (System_String_o *)sub_2213BB4(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v6 + 24) <= 2u )
            goto LABEL_32;
          *(_QWORD *)(v6 + 48) = v30;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 48), (int32_t)v30, v24, v25, v26, v27, v28, v29);
          v7 = System_DateTime__ToString_77027988(
                 (System_DateTime_o)&dateData,
                 (System_String_o *)StringLiteral_19334/*"ddd"*/,
                 CultureInfo_76764288,
                 0);
          v37 = v7;
          if ( !v7 || (v7 = (System_String_o *)sub_2213BB4(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v6 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_32;
            *(_QWORD *)(v6 + 56) = v37;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 56), (int32_t)v37, v31, v32, v33, v34, v35, v36);
            Hour = System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
            v7 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &Hour);
            v44 = v7;
            if ( !v7 || (v7 = (System_String_o *)sub_2213BB4(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v6 + 24) <= 4u )
                goto LABEL_32;
              *(_QWORD *)(v6 + 64) = v44;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 64), (int32_t)v44, v38, v39, v40, v41, v42, v43);
              Minute = System_DateTime__get_Minute((System_DateTime_o)&dateData, 0);
              v7 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &Minute);
              v51 = v7;
              if ( !v7 || (v7 = (System_String_o *)sub_2213BB4(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v6 + 24) > 5u )
                {
                  *(_QWORD *)(v6 + 72) = v51;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 72), (int32_t)v51, v45, v46, v47, v48, v49, v50);
                  return System_String__Format_75698016(
                           (System_String_o *)StringLiteral_26472/*"{0:D}/{1:D2}/{2:D2}({3}) {4:D2}:{5:D2}"*/,
                           (System_Object_array *)v6,
                           0);
                }
LABEL_32:
                sub_2213CE4(v7);
              }
            }
          }
        }
      }
    }
    v53 = sub_2213D00(v7, v16);
    sub_2213BA0(v53, 0);
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
  System_String_o *NumberFormat_48247712; // x1
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
  if ( (byte_596FEF7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_861/*"+"*/);
    sub_2213A60(&StringLiteral_5881/*"EVENT_POINT_RATE_INFO"*/);
    sub_2213A60(&StringLiteral_5879/*"EVENT_POINT_NONE_INFO"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_5876/*"EVENT_POINT_MAX_INFO"*/);
    sub_2213A60(&StringLiteral_5868/*"EVENT_POINT_ADD_INFO"*/);
    sub_2213A60(&StringLiteral_5869/*"EVENT_POINT_ADD_RATE_INFO"*/);
    byte_596FEF7 = 1;
  }
  v28 = 0;
  if ( ratePoint >= 3000 && isMax )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&ratePoint);
    return LocalizationManager__Get((System_String_o *)StringLiteral_5876/*"EVENT_POINT_MAX_INFO"*/, *(const MethodInfo **)&ratePoint);
  }
  if ( addPoint >= 0 )
    v10 = (System_String_o **)&StringLiteral_861/*"+"*/;
  else
    v10 = (System_String_o **)&StringLiteral_1/*""*/;
  v11 = *v10;
  v13 = System_Int32__ToString((int32_t)&v29, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  NumberFormat_48247712 = LocalizationManager__GetNumberFormat_48247712(v13, v12);
  if ( unit )
    v15 = unit;
  else
    v15 = (System_String_o *)StringLiteral_1/*""*/;
  v16 = (Il2CppObject *)System_String__Concat_75694928(v11, NumberFormat_48247712, v15, 0);
  if ( ratePoint >= 0 )
    v17 = (System_String_o **)&StringLiteral_861/*"+"*/;
  else
    v17 = (System_String_o **)&StringLiteral_1/*""*/;
  v18 = *v17;
  v28 = ratePoint / 10;
  v20 = System_Int32__ToString((int32_t)&v28, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  v21 = LocalizationManager__GetNumberFormat_48247712(v20, v19);
  v23 = (Il2CppObject *)System_String__Concat_75651716(v18, v21, 0);
  v24 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( ratePoint && v29 )
  {
    if ( !v24 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5869/*"EVENT_POINT_ADD_RATE_INFO"*/, v22);
    return System_String__Format_75697880(v25, v16, v23, 0);
  }
  if ( v29 )
  {
    if ( !v24 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5868/*"EVENT_POINT_ADD_INFO"*/, v22);
    v27 = v16;
    return System_String__Format(v26, v27, 0);
  }
  if ( ratePoint )
  {
    if ( !v24 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5881/*"EVENT_POINT_RATE_INFO"*/, v22);
    v27 = v23;
    return System_String__Format(v26, v27, 0);
  }
  if ( !v24 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  return LocalizationManager__Get((System_String_o *)StringLiteral_5879/*"EVENT_POINT_NONE_INFO"*/, v22);
}


System_String_o *LocalizationManager__GetHaveUnitInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEE5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7496/*"HAVE_UNIT_INFO"*/);
    byte_596FEE5 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7496/*"HAVE_UNIT_INFO"*/, method);
  v6 = count;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetHpIconInfo(int32_t hp, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEF3 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7553/*"HP_ICON_INFO"*/);
    byte_596FEF3 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7553/*"HP_ICON_INFO"*/, method);
  v6 = hp;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetHpInfo(int32_t hp, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEF2 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7554/*"HP_INFO"*/);
    byte_596FEF2 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7554/*"HP_INFO"*/, method);
  v6 = hp;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetIdIconInfo(int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEEC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7745/*"ID_ICON_INFO"*/);
    byte_596FEEC = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_7745/*"ID_ICON_INFO"*/, method);
  v6 = id;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetIfExists(System_String_array *keys, const MethodInfo *method)
{
  System_String_array *v2; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v4; // x22
  System_String_o *v5; // x20

  v2 = keys;
  if ( (byte_596FED3 & 1) == 0 )
  {
    keys = (System_String_array *)sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FED3 = 1;
  }
  if ( !v2 )
    sub_2213CDC(keys, method);
  max_length = v2->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= (unsigned int)max_length )
      sub_2213CE4(keys);
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

  if ( (byte_596FECB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FECB = 1;
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

  if ( (byte_596FECC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FECC = 1;
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

  if ( (byte_596FECA & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FECA = 1;
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

  if ( (byte_596FEE3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26451/*"{0:D2}h{1:D2}m{2:D2}s"*/);
    byte_596FEE3 = 1;
  }
  v3 = time % 60;
  v4 = time / 60 % 60;
  v11 = time / 3600;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v11);
  v10 = v4;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v10);
  v9 = v3;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v9);
  return System_String__Format_75697948((System_String_o *)StringLiteral_26451/*"{0:D2}h{1:D2}m{2:D2}s"*/, v5, v6, v7, 0);
}


System_String_o *LocalizationManager__GetLevelIconInfo(int32_t lv, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_596FEEE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8610/*"LEVEL_ICON_INFO"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FEEE = 1;
  }
  if ( lv < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8610/*"LEVEL_ICON_INFO"*/, method);
  v6 = lv;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetLevelInfo(int32_t lv, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEED & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8611/*"LEVEL_INFO"*/);
    byte_596FEED = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8611/*"LEVEL_INFO"*/, method);
  v6 = lv;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
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
  if ( (byte_596FEF8 & 1) == 0 )
  {
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    levelList = (System_Int32_array *)sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596FEF8 = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  max_length = v2->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75728496(v4, 4 * max_length, 0);
  if ( (int)max_length < 1 )
  {
    if ( v4 )
      return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
               v4,
               v4->klass->vtable._3_ToString.method);
LABEL_18:
    sub_2213CDC(levelList, method);
  }
  v5 = 0;
  v6 = 32;
  do
  {
    if ( v5 )
    {
      if ( !v4 )
        goto LABEL_18;
      levelList = (System_Int32_array *)System_Text_StringBuilder__Append_75735064(
                                          v4,
                                          (System_String_o *)StringLiteral_1123/*"/"*/,
                                          0);
    }
    if ( v5 >= LODWORD(v2->max_length) )
      sub_2213CE4(levelList);
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
    levelList = (System_Int32_array *)System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)method, 0);
    ++v5;
    v6 += 4;
  }
  while ( (unsigned int)max_length != v5 );
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
           v4,
           v4->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetLevelList_48251096(SkillInfo_array *skillInfoList, const MethodInfo *method)
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
  if ( (byte_596FEF9 & 1) == 0 )
  {
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_16544/*"[FCF050]"*/);
    sub_2213A60(&StringLiteral_16614/*"[ff730f]"*/);
    sub_2213A60(&StringLiteral_16447/*"[-]"*/);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    skillInfoList = (SkillInfo_array *)sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596FEF9 = 1;
  }
  if ( !v2 )
    goto LABEL_32;
  max_length = v2->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75728496(v4, 15 * max_length, 0);
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    v6 = (unsigned int)max_length;
    do
    {
      if ( v5 >= LODWORD(v2->max_length) )
        sub_2213CE4(skillInfoList);
      v7 = (int *)v2->m_Items[v5];
      if ( v5 )
      {
        if ( !v4 )
          goto LABEL_32;
        skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_75735064(
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
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_75735064(
                                               v4,
                                               (System_String_o *)skillInfoList,
                                               0);
          v13 = (System_String_o **)&StringLiteral_16447/*"[-]"*/;
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
          v12 = &StringLiteral_16614/*"[ff730f]"*/;
          if ( !v4 )
            goto LABEL_32;
        }
        else
        {
          v11 = (int)skillInfoList;
          if ( (_DWORD)skillInfoList != 1 )
            goto LABEL_22;
          v12 = &StringLiteral_16544/*"[FCF050]"*/;
          if ( !v4 )
            goto LABEL_32;
        }
        System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)*v12, 0);
        v14 = System_Int32__ToString(v8, 0);
        System_Text_StringBuilder__Append_75735064(v4, v14, 0);
        v13 = (System_String_o **)&StringLiteral_16447/*"[-]"*/;
      }
      else
      {
        v13 = (System_String_o **)&StringLiteral_923/*"-"*/;
        if ( !v4 )
          goto LABEL_32;
      }
LABEL_27:
      skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_75735064(v4, *v13, 0);
LABEL_28:
      ++v5;
    }
    while ( v6 != v5 );
  }
  if ( !v4 )
LABEL_32:
    sub_2213CDC(skillInfoList, method);
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
           v4,
           v4->klass->vtable._3_ToString.method);
}


System_String_o *LocalizationManager__GetNoEntryName(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0

  if ( (byte_596FEC9 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FEC9 = 1;
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
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FECD & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FECD = 1;
  }
  v2 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    v2 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v2->static_fields;
  result.fields.r = static_fields[20];
  result.fields.g = static_fields[21];
  result.fields.b = static_fields[22];
  result.fields.a = static_fields[23];
  return result;
}


System_String_o *LocalizationManager__GetNumberFormat(int32_t data, const MethodInfo *method)
{
  int32_t v3; // [xsp+Ch] [xbp-14h] BYREF

  v3 = data;
  if ( (byte_596FEE7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_596FEE7 = 1;
  }
  return System_Int32__ToString_77138656((int32_t)&v3, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
}


System_String_o *LocalizationManager__GetNumberFormatLong(int64_t data, const MethodInfo *method)
{
  int64_t v3; // [xsp+8h] [xbp-18h] BYREF

  v3 = data;
  if ( (byte_596FEE8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_596FEE8 = 1;
  }
  return System_Int64__ToString_77143864((int64_t)&v3, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
}


System_String_o *LocalizationManager__GetNumberFormat_48247712(System_String_o *data, const MethodInfo *method)
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

  if ( (byte_596FEE9 & 1) == 0 )
  {
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FEE9 = 1;
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
  v7 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75728496(v7, 32, 0);
  if ( v4 >= 1 )
  {
    if ( !v7 )
LABEL_26:
      sub_2213CDC(appended, v9);
    appended = System_Text_StringBuilder__Append_75735380(v7, data, 0, v4, 0);
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
      System_Text_StringBuilder__Append_75737396(v7, 0x2Cu, 0);
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
    appended = System_Text_StringBuilder__Append_75737396(v7, Chars, 0);
    ++v4;
    --v10;
  }
  while ( v4 < stringLength );
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
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

  if ( (byte_596FEDE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_349/*" ~ "*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FEDE = 1;
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
  v13 = System_String__Concat_75651716(v9, DateTime, 0);
  v15 = System_String__Concat_75651716(v13, (System_String_o *)StringLiteral_349/*" ~ "*/, 0);
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
  return System_String__Concat_75651716(v15, Date, 0);
}


System_String_o *LocalizationManager__GetPrice2Info(int32_t price, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_596FEEB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10901/*"PRICE2_INFO"*/);
    byte_596FEEB = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10901/*"PRICE2_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(price, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetPriceInfo(int32_t price, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_596FEEA & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10902/*"PRICE_INFO"*/);
    byte_596FEEA = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10902/*"PRICE_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(price, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetRarityInfo(int32_t rare, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEEF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16648/*"[{0}]"*/);
    byte_596FEEF = 1;
  }
  v5 = rare;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v5);
  return System_String__Format((System_String_o *)StringLiteral_16648/*"[{0}]"*/, v3, 0);
}


bool LocalizationManager__GetRestIsLastHours(int64_t at, const MethodInfo *method)
{
  if ( (byte_596FEDD & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596FEDD = 1;
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

  if ( (byte_596FED5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_13972/*"TIME_REST_DAYS"*/);
    sub_2213A60(&StringLiteral_13975/*"TIME_REST_HOURS"*/);
    sub_2213A60(&StringLiteral_13976/*"TIME_REST_MINUTES"*/);
    sub_2213A60(&StringLiteral_13995/*"TIME_REST_TIMEOVER"*/);
    sub_2213A60(&StringLiteral_13978/*"TIME_REST_OVER_YEARS"*/);
    byte_596FED5 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  v5 = at - Time;
  if ( at - Time < 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v7 = &StringLiteral_13995/*"TIME_REST_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v7, v4);
  }
  if ( v5 <= 0x3B )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13976/*"TIME_REST_MINUTES"*/, v4);
    LODWORD(v14) = 0;
    v10 = qword_5984348;
  }
  else
  {
    if ( v5 <= 0xE0F )
    {
      v11 = (at - Time) / 0x3CuLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v12 = &StringLiteral_13976/*"TIME_REST_MINUTES"*/;
    }
    else if ( v5 >> 7 <= 0x2A2 )
    {
      v11 = (at - Time) / 0xE10uLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v12 = &StringLiteral_13975/*"TIME_REST_HOURS"*/;
    }
    else
    {
      v6 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v5 > 0x1E1337F )
      {
        if ( !v6 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
        v7 = &StringLiteral_13978/*"TIME_REST_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v7, v4);
      }
      v11 = v5 / 0x15180;
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v12 = &StringLiteral_13972/*"TIME_REST_DAYS"*/;
    }
    v9 = LocalizationManager__Get((System_String_o *)*v12, v4);
    v14 = v11;
    v10 = qword_5984368;
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
  if ( (byte_596FED6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_13956/*"TIME_REST2_MINUTES"*/);
    sub_2213A60(&StringLiteral_13958/*"TIME_REST2_OVER_YEARS"*/);
    sub_2213A60(&StringLiteral_13955/*"TIME_REST2_HOURS"*/);
    sub_2213A60(&StringLiteral_13954/*"TIME_REST2_DAYS"*/);
    sub_2213A60(&StringLiteral_13959/*"TIME_REST2_TIMEOVER"*/);
    byte_596FED6 = 1;
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
    v7 = &StringLiteral_13959/*"TIME_REST2_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v7, (const MethodInfo *)nowTime);
  }
  if ( v5 <= 0x3B )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13956/*"TIME_REST2_MINUTES"*/, (const MethodInfo *)nowTime);
    LODWORD(v14) = 0;
    v10 = qword_5984348;
  }
  else
  {
    if ( v5 <= 0xE0F )
    {
      v11 = (at - Time) / 0x3CuLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13956/*"TIME_REST2_MINUTES"*/;
    }
    else if ( v5 >> 7 <= 0x2A2 )
    {
      v11 = (at - Time) / 0xE10uLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13955/*"TIME_REST2_HOURS"*/;
    }
    else
    {
      v6 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v5 > 0x1E1337F )
      {
        if ( !v6 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
        v7 = &StringLiteral_13958/*"TIME_REST2_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v7, (const MethodInfo *)nowTime);
      }
      v11 = (at - Time) / 0x15180uLL;
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13954/*"TIME_REST2_DAYS"*/;
    }
    v9 = LocalizationManager__Get((System_String_o *)*v12, (const MethodInfo *)nowTime);
    v14 = v11;
    v10 = qword_5984368;
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
  System_TimeSpan_o v8; // x1
  int32_t Hours; // w19
  Il2CppObject *v10; // x19
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x0
  int32_t Seconds; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Minutes; // [xsp+8h] [xbp-38h] BYREF
  int v16; // [xsp+Ch] [xbp-34h] BYREF
  int64_t ticks; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596FED7 & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&System_TimeSpan_TypeInfo);
    sub_2213A60(&StringLiteral_26449/*"{0:D2}:{1:D2}:{2:D2}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FED7 = 1;
  }
  ticks = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( at - NetworkManager__getTime(0) < 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
  Time = NetworkManager__getTime(0);
  v5.fields._dateData = NetworkManager__getDateTime_48347260(Time, 0).fields._dateData;
  v7.fields._dateData = NetworkManager__getDateTime_48347260(at, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v6.fields._dateData);
  ticks = System_DateTime__op_Subtraction_77030584(v7, v5, 0).fields._ticks;
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v8.fields._ticks);
  Hours = System_TimeSpan__get_Hours((System_TimeSpan_o)&ticks, 0);
  v16 = Hours + 24 * System_TimeSpan__get_Days((System_TimeSpan_o)&ticks, 0);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v16);
  Minutes = System_TimeSpan__get_Minutes((System_TimeSpan_o)&ticks, 0);
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Minutes);
  Seconds = System_TimeSpan__get_Seconds((System_TimeSpan_o)&ticks, 0);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Seconds);
  return System_String__Format_75697948((System_String_o *)StringLiteral_26449/*"{0:D2}:{1:D2}:{2:D2}"*/, v10, v11, v12, 0);
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
  if ( (byte_596FED8 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_26449/*"{0:D2}:{1:D2}:{2:D2}"*/);
    sub_2213A60(&StringLiteral_1532/*"99:99:99"*/);
    byte_596FED8 = 1;
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
    return (System_String_o *)StringLiteral_1532/*"99:99:99"*/;
  v6 = (unsigned int)v5 % 0x3C;
  v14 = (unsigned int)v5 / 0xE10uLL;
  v7 = (unsigned __int16)((unsigned int)v5 / 0x3C) % 0x3Cu;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v14);
  v13 = v7;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v13);
  v12 = v6;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v12);
  return System_String__Format_75697948((System_String_o *)StringLiteral_26449/*"{0:D2}:{1:D2}:{2:D2}"*/, v8, v9, v10, 0);
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
  if ( (byte_596FED9 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_13961/*"TIME_REST5_HOURS"*/);
    sub_2213A60(&StringLiteral_13964/*"TIME_REST5_TIMEOVER"*/);
    sub_2213A60(&StringLiteral_13963/*"TIME_REST5_OVER_YEARS"*/);
    sub_2213A60(&StringLiteral_13960/*"TIME_REST5_DAYS"*/);
    sub_2213A60(&StringLiteral_13962/*"TIME_REST5_MINUTES"*/);
    byte_596FED9 = 1;
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
    v7 = &StringLiteral_13964/*"TIME_REST5_TIMEOVER"*/;
    return LocalizationManager__Get((System_String_o *)*v7, (const MethodInfo *)nowTime);
  }
  if ( v5 <= 0x3B )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13962/*"TIME_REST5_MINUTES"*/, (const MethodInfo *)nowTime);
    LODWORD(v14) = 0;
    v10 = qword_5984348;
  }
  else
  {
    if ( v5 <= 0xE0F )
    {
      v11 = (at - Time) / 0x3CuLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13962/*"TIME_REST5_MINUTES"*/;
    }
    else if ( v5 >> 7 <= 0x2A2 )
    {
      v11 = (at - Time) / 0xE10uLL;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13961/*"TIME_REST5_HOURS"*/;
    }
    else
    {
      v6 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v5 > 0x1E1337F )
      {
        if ( !v6 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
        v7 = &StringLiteral_13963/*"TIME_REST5_OVER_YEARS"*/;
        return LocalizationManager__Get((System_String_o *)*v7, (const MethodInfo *)nowTime);
      }
      v11 = (at - Time) / 0x15180uLL;
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
      v12 = &StringLiteral_13960/*"TIME_REST5_DAYS"*/;
    }
    v9 = LocalizationManager__Get((System_String_o *)*v12, (const MethodInfo *)nowTime);
    v14 = v11;
    v10 = qword_5984368;
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
  if ( (byte_596FEDA & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_13970/*"TIME_REST6_TIMEOVER"*/);
    sub_2213A60(&StringLiteral_13967/*"TIME_REST6_HOURS"*/);
    sub_2213A60(&StringLiteral_13969/*"TIME_REST6_OVER_YEARS"*/);
    sub_2213A60(&StringLiteral_13968/*"TIME_REST6_MINUTES"*/);
    sub_2213A60(&StringLiteral_13966/*"TIME_REST6_HEAD"*/);
    sub_2213A60(&StringLiteral_13965/*"TIME_REST6_DAYS"*/);
    byte_596FEDA = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nowTime);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13966/*"TIME_REST6_HEAD"*/, (const MethodInfo *)nowTime);
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
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13968/*"TIME_REST6_MINUTES"*/, v5);
      LODWORD(v28) = 0;
      v13 = qword_5984348;
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
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13967/*"TIME_REST6_HOURS"*/, v5);
          v28 = v9;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v28);
          v20 = System_String__Format(v18, v19, 0);
          v6 = System_String__Concat_75651716(v6, v20, 0);
          v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13968/*"TIME_REST6_MINUTES"*/, v21);
          v13 = qword_5984368;
        }
        else
        {
          if ( v7 > 0x1E1337F )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
            v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13969/*"TIME_REST6_OVER_YEARS"*/, v5);
            return System_String__Concat_75651716(v6, v10, 0);
          }
          v22 = v7;
          v17 = v9 - 24 * ((v9 * (unsigned __int128)0xAAAAAAAAAAAAAABuLL) >> 64);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13965/*"TIME_REST6_DAYS"*/, v5);
          v28 = v22 / 0x15180;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v28);
          v25 = System_String__Format(v23, v24, 0);
          v6 = System_String__Concat_75651716(v6, v25, 0);
          v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13967/*"TIME_REST6_HOURS"*/, v26);
          v13 = qword_5984368;
        }
        v27 = v17;
        v14 = &v27;
LABEL_27:
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(v13, v14);
        v16 = System_String__Format(v12, v15, 0);
        return System_String__Concat_75651716(v6, v16, 0);
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13968/*"TIME_REST6_MINUTES"*/, v5);
      v28 = v8;
      v13 = qword_5984368;
    }
    v14 = &v28;
    goto LABEL_27;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  return LocalizationManager__Get((System_String_o *)StringLiteral_13970/*"TIME_REST6_TIMEOVER"*/, v5);
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
  if ( (byte_596FEDB & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596FEDB = 1;
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
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
    LODWORD(v16) = 0;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v16);
    v12 = qword_5984348;
    LODWORD(v15) = 0;
  }
  else if ( v7 >= 0x57E40 )
  {
    LODWORD(v17) = 99;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
    LODWORD(v16) = 99;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v16);
    v12 = qword_5984348;
    LODWORD(v15) = 99;
  }
  else
  {
    v8 = (unsigned int)v7 % 0x3C;
    v17 = (unsigned int)v7 / 0xE10uLL;
    v9 = (unsigned __int16)((unsigned int)v7 / 0x3C) % 0x3Cu;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v17);
    v16 = v9;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v16);
    v12 = qword_5984368;
    v15 = v8;
  }
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(v12, &v15);
  return System_String__Format_75697948(format, v10, v11, v13, 0);
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

  if ( (byte_596FEDC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_14003/*"TIME_STR_TIMEOVER"*/);
    sub_2213A60(&StringLiteral_14000/*"TIME_STR_MINUTES"*/);
    sub_2213A60(&StringLiteral_13998/*"TIME_STR_DAYS"*/);
    sub_2213A60(&StringLiteral_14002/*"TIME_STR_OVER_YEARS"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_1248/*"1"*/);
    sub_2213A60(&StringLiteral_13999/*"TIME_STR_HOURS"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596FEDC = 1;
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)numStr, v17, v7, v8, v9, v10, v11, v12);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    v16 = &StringLiteral_14003/*"TIME_STR_TIMEOVER"*/;
    goto LABEL_19;
  }
  if ( v13 <= 0x3B )
  {
    v18 = StringLiteral_1198/*"0"*/;
    *numStr = (System_String_o *)StringLiteral_1198/*"0"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)numStr, v18, v7, v8, v9, v10, v11, v12);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    v16 = &StringLiteral_14000/*"TIME_STR_MINUTES"*/;
    goto LABEL_19;
  }
  v58 = v13 / 0x3C;
  if ( v13 <= 0xE0F )
  {
    v26 = System_Int64__ToString((int64_t)&v58, 0);
    *numStr = v26;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)numStr, (int32_t)v26, v27, v28, v29, v30, v31, v32);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
    v34 = &StringLiteral_14000/*"TIME_STR_MINUTES"*/;
  }
  else
  {
    v57 = v13 / 0xE10;
    if ( v13 >> 7 <= 0x2A2 )
    {
      v35 = System_Int64__ToString((int64_t)&v57, 0);
      *numStr = v35;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)numStr, (int32_t)v35, v36, v37, v38, v39, v40, v41);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      v34 = &StringLiteral_13999/*"TIME_STR_HOURS"*/;
    }
    else
    {
      v56 = v13 / 0x15180;
      if ( v13 > 0x1E1337F )
      {
        v14 = StringLiteral_1248/*"1"*/;
        *numStr = (System_String_o *)StringLiteral_1248/*"1"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)numStr, v14, v7, v8, v9, v10, v11, v12);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
        v16 = &StringLiteral_14002/*"TIME_STR_OVER_YEARS"*/;
LABEL_19:
        v19 = LocalizationManager__Get((System_String_o *)*v16, v15);
        *charStr = v19;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)charStr, (int32_t)v19, v20, v21, v22, v23, v24, v25);
        return;
      }
      v42 = System_Int64__ToString((int64_t)&v56, 0);
      *numStr = v42;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)numStr, (int32_t)v42, v43, v44, v45, v46, v47, v48);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      v34 = &StringLiteral_13998/*"TIME_STR_DAYS"*/;
    }
  }
  v49 = LocalizationManager__Get((System_String_o *)*v34, v33);
  *charStr = v49;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)charStr, (int32_t)v49, v50, v51, v52, v53, v54, v55);
}


UnityEngine_Color_o LocalizationManager__GetSelectEffectColor(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0
  float *static_fields; // x8
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FECE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FECE = 1;
  }
  v2 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    v2 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v2->static_fields;
  result.fields.r = static_fields[24];
  result.fields.g = static_fields[25];
  result.fields.b = static_fields[26];
  result.fields.a = static_fields[27];
  return result;
}


System_String_o *LocalizationManager__GetStoneInfo(int32_t n, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FEF6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12886/*"STONE_INFO"*/);
    byte_596FEF6 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_12886/*"STONE_INFO"*/, method);
  v6 = n;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format(v3, v4, 0);
}


System_String_o *LocalizationManager__GetTextWithSuffix(
        System_String_o *key,
        int32_t suffixNum,
        System_String_o *defaultText,
        bool isGetBaseKey,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *v11; // x22
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_String_o *v15; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *resultText; // [xsp+8h] [xbp-48h] BYREF
  int32_t v17; // [xsp+1Ch] [xbp-34h] BYREF

  v17 = suffixNum;
  if ( (byte_596FED2 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FED2 = 1;
  }
  v15 = 0;
  resultText = 0;
  v8 = System_Int32__ToString((int32_t)&v17, 0);
  v11 = System_String__Concat_75694928(key, (System_String_o *)StringLiteral_16746/*"_"*/, v8, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  if ( LocalizationManager__TryGet(&resultText, v11, (System_String_o *)StringLiteral_1/*""*/, v10) )
    return resultText;
  if ( isGetBaseKey )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    if ( LocalizationManager__TryGet(&v15, key, (System_String_o *)StringLiteral_1/*""*/, v13) )
      return v15;
  }
  return defaultText;
}


System_String_o *LocalizationManager__GetTime(int64_t time, const MethodInfo *method)
{
  System_DateTime_o v3; // x1
  Il2CppObject *v4; // x19
  Il2CppObject *v5; // x0
  int32_t Minute; // [xsp+0h] [xbp-30h] BYREF
  int32_t Hour; // [xsp+4h] [xbp-2Ch] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596FEE0 & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_26448/*"{0:D2}:{1:D2}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FEE0 = 1;
  }
  dateData = 0;
  if ( time < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  dateData = NetworkManager__getServerDateTime_48347596(time, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v3.fields._dateData);
  Hour = System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Hour);
  Minute = System_DateTime__get_Minute((System_DateTime_o)&dateData, 0);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Minute);
  return System_String__Format_75697880((System_String_o *)StringLiteral_26448/*"{0:D2}:{1:D2}"*/, v4, v5, 0);
}


System_String_o *LocalizationManager__GetUnitInfo(int32_t count, const MethodInfo *method)
{
  System_String_o *v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NumberFormat; // x1

  if ( (byte_596FEE4 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_15412/*"UNIT_INFO"*/);
    byte_596FEE4 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"UNIT_INFO"*/, method);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(count, v4);
  return System_String__Format(v3, NumberFormat, 0);
}


System_String_o *LocalizationManager__GetUnknownName(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0

  if ( (byte_596FEC8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FEC8 = 1;
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

  if ( (byte_596FEC6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
    byte_596FEC6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v3 )
  {
    if ( !Instance )
      sub_2213CDC(v3, v4);
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

  if ( (byte_596FEFD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FEFD = 1;
  }
  mainTextData = (UnityEngine_Object_o *)this->fields.mainTextData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(mainTextData, 0, 0) )
  {
    v5 = this->fields.mainTextData;
    if ( !v5 )
      sub_2213CDC(0, v4);
    text = (LocalizationManager_o *)UnityEngine_TextAsset__get_text(v5, 0);
    LocalizationManager__SetTextData(text, (System_String_o *)text, v7);
  }
}


bool LocalizationManager__IsBusySetAssetData(const MethodInfo *method)
{
  __int64 v1; // x1
  LocalizationManager_c *v2; // x0

  if ( (byte_596FEC5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FEC5 = 1;
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

  if ( (byte_596FEC7 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
    sub_2213A60(&Method_LocalizationManager___c__DisplayClass16_0__LoadAssetData_b__0__);
    sub_2213A60(&LocalizationManager___c__DisplayClass16_0_TypeInfo);
    sub_2213A60(&StringLiteral_8846/*"Localization"*/);
    byte_596FEC7 = 1;
  }
  v1 = sub_2213CCC(LocalizationManager___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_LocalizationManager__get_Instance__);
  if ( !v1 )
    sub_2213CDC(Instance, v3);
  *(_QWORD *)(v1 + 16) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v1 + 16), (int32_t)Instance, v4, v5, v6, v7, v8, v9);
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
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(v15);
    AssetLoader_LoadEndDataHandler___ctor(
      v16,
      (Il2CppObject *)v1,
      Method_LocalizationManager___c__DisplayClass16_0__LoadAssetData_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_8846/*"Localization"*/, v16, 1, 0, 0);
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

  if ( (byte_596FEFA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_24523/*"servantName "*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_596FEFA = 1;
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
    v8 = System_String__IndexOf_75715212(text, (System_String_o *)StringLiteral_16427/*"["*/, v6, 0);
    if ( v8 < 0 )
      break;
    v9 = v8;
    Instance = (void *)System_String__IndexOf_75715212(text, (System_String_o *)StringLiteral_16691/*"]"*/, v8, 0);
    if ( ((unsigned int)Instance & 0x80000000) != 0 )
      break;
    v11 = (int)Instance;
    if ( !v7 )
    {
      v7 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_75728496(v7, stringLength + 32, 0);
    }
    v12 = (unsigned int)(v9 + 1);
    if ( v11 == (_DWORD)v12 )
    {
      if ( !v7 )
        goto LABEL_71;
      v13 = v11 - v6;
LABEL_47:
      System_Text_StringBuilder__Append_75735380(v7, text, v6, v13, 0);
      goto LABEL_63;
    }
    Instance = System_String__Substring_75702848(text, v12, v11 + ~v9, 0);
    if ( !Instance )
      goto LABEL_71;
    v14 = (System_String_o *)Instance;
    Instance = (void *)System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_24523/*"servantName "*/, 0);
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
      System_Text_StringBuilder__Append_75735380(v7, text, v6, v9 - v6, 0);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_71;
    v18 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            v17,
            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
            sub_2213CE4(Instance);
          v25 = (System_String_o **)(v16 + 40);
        }
        if ( !v7 )
LABEL_71:
          sub_2213CDC(Instance, v12);
        unknownNameText = *v25;
      }
      else
      {
        if ( !sealLimitCountCheck )
          goto LABEL_55;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
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
          Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    System_Text_StringBuilder__Append_75735064(v7, unknownNameText, 0);
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
      System_Text_StringBuilder__Append_75735380(v7, text, v6, stringLength - v6, 0);
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

  if ( (byte_596FEFB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_395/*"#"*/);
    sub_2213A60(&StringLiteral_23479/*"o"*/);
    sub_2213A60(&StringLiteral_16447/*"[-]"*/);
    sub_2213A60(&StringLiteral_21053/*"i"*/);
    sub_2213A60(&StringLiteral_20653/*"g"*/);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_17686/*"b"*/);
    sub_2213A60(&StringLiteral_1186/*"/sub"*/);
    sub_2213A60(&StringLiteral_1183/*"/o"*/);
    sub_2213A60(&StringLiteral_1190/*"/u"*/);
    sub_2213A60(&StringLiteral_506/*"%"*/);
    sub_2213A60(&StringLiteral_16722/*"^"*/);
    sub_2213A60(&StringLiteral_1170/*"/b"*/);
    sub_2213A60(&StringLiteral_528/*"&"*/);
    sub_2213A60(&StringLiteral_25112/*"sup"*/);
    sub_2213A60(&StringLiteral_26661/*"~"*/);
    sub_2213A60(&StringLiteral_24111/*"r"*/);
    sub_2213A60(&StringLiteral_22314/*"line"*/);
    sub_2213A60(&StringLiteral_1187/*"/sup"*/);
    sub_2213A60(&StringLiteral_1185/*"/s"*/);
    sub_2213A60(&StringLiteral_21266/*"image"*/);
    sub_2213A60(&StringLiteral_1178/*"/g"*/);
    sub_2213A60(&StringLiteral_25021/*"sub"*/);
    sub_2213A60(&StringLiteral_25574/*"u"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_24383/*"s"*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_596FEFB = 1;
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
    v8 = System_String__IndexOf_75715212(text, (System_String_o *)StringLiteral_16427/*"["*/, v6, 0);
    if ( v8 < 0 )
      break;
    v9 = v8;
    if ( v8 + 1 >= stringLength )
      break;
    v10 = System_String__IndexOf_75715212(text, (System_String_o *)StringLiteral_16691/*"]"*/, v8 + 1, 0);
    if ( v10 < 0 )
      break;
    v11 = v10;
    do
    {
      v12 = v9 + 1;
      v13 = v9;
      appended = (System_String_o *)System_String__IndexOf_75715212(
                                      text,
                                      (System_String_o *)StringLiteral_16427/*"["*/,
                                      v9 + 1,
                                      0);
      v9 = (int)appended;
    }
    while ( (unsigned int)appended <= v11 );
    if ( v12 >= stringLength )
      break;
    if ( !v7 )
    {
      v7 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_75728496(v7, stringLength + 32, 0);
    }
    if ( v11 != v12 )
    {
      if ( v13 > v6 )
      {
        if ( !v7 )
          goto LABEL_109;
        System_Text_StringBuilder__Append_75735380(v7, text, v6, v13 - v6, 0);
      }
      v20 = v11 - v13;
      appended = System_String__Substring_75702848(text, v12, v11 - v13 - 1, 0);
      if ( !appended )
        goto LABEL_109;
      v21 = appended;
      appended = (System_String_o *)System_String__StartsWith(appended, (System_String_o *)StringLiteral_395/*"#"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
      {
        if ( (int)(v20 - 2) < 1 )
          goto LABEL_18;
        appended = System_String__Substring_75702848(text, v13 + 2, v20 - 2, 0);
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
        appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(v7, monitor, 0);
        goto LABEL_18;
      }
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_528/*"&"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_18;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_16722/*"^"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_18;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_26661/*"~"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_18;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_506/*"%"*/, 0);
      if ( ((unsigned __int8)appended & 1) != 0 )
        goto LABEL_18;
      appended = (System_String_o *)System_String__StartsWith(v21, (System_String_o *)StringLiteral_22314/*"line"*/, 0);
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
                v26 = &StringLiteral_25574/*"u"*/;
                goto LABEL_86;
              case 0xF60C4582:
                v26 = &StringLiteral_24383/*"s"*/;
                goto LABEL_86;
              case 0xF70C4715:
                v26 = &StringLiteral_24111/*"r"*/;
                goto LABEL_86;
            }
          }
          else
          {
            if ( (_DWORD)appended == -368299362 )
            {
              v26 = &StringLiteral_23479/*"o"*/;
              goto LABEL_86;
            }
            if ( (_DWORD)appended == -334744124 )
            {
              v26 = &StringLiteral_21053/*"i"*/;
              goto LABEL_86;
            }
          }
        }
        else if ( (unsigned int)appended > 0xDC4E3915 )
        {
          if ( (_DWORD)appended == -502520314 )
          {
            v26 = &StringLiteral_20653/*"g"*/;
            goto LABEL_86;
          }
          if ( (_DWORD)appended == -418632219 )
          {
            v26 = &StringLiteral_17686/*"b"*/;
            goto LABEL_86;
          }
        }
        else
        {
          if ( (_DWORD)appended == -900850497 )
          {
            v26 = &StringLiteral_25112/*"sup"*/;
            goto LABEL_86;
          }
          if ( (_DWORD)appended == -598853355 )
          {
            v26 = &StringLiteral_25021/*"sub"*/;
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
              v26 = &StringLiteral_21266/*"image"*/;
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
          monitor = (System_String_o *)StringLiteral_16447/*"[-]"*/;
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
            appended = (System_String_o *)System_Text_StringBuilder__Append_75737396(v7, 0x5Bu, 0);
            if ( !LODWORD(v24[1].klass) )
LABEL_110:
              sub_2213CE4(appended);
            appended = (System_String_o *)v24[1].monitor;
            if ( !appended )
              goto LABEL_109;
            v29 = System_String__Substring_75702848(appended, 0, 6, 0);
            System_Text_StringBuilder__Append_75735064(v7, v29, 0);
            appended = (System_String_o *)System_Text_StringBuilder__Append_75737396(v7, 0x5Du, 0);
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
    appended = (System_String_o *)System_Text_StringBuilder__Append_75735380(v17, v18, v19, v16, 0);
LABEL_18:
    v6 = v11 + 1;
    if ( (int)(v11 + 1) >= stringLength )
    {
      if ( !v7 )
LABEL_109:
        sub_2213CDC(appended, v15);
      return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
               v7,
               v7->klass->vtable._3_ToString.method);
    }
  }
  if ( !v7 )
    return text;
  if ( stringLength > v6 )
    System_Text_StringBuilder__Append_75735380(v7, text, v6, stringLength - v6, 0);
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
           v7,
           v7->klass->vtable._3_ToString.method);
}


void LocalizationManager__SetTextData(
        LocalizationManager_o *this,
        System_String_o *text_data,
        const MethodInfo *method)
{
  System_Array_o *v4; // x20
  System_String_o *appended; // x0
  __int64 v6; // x1
  System_String_array *v7; // x0
  int32_t stringLength; // w21
  System_String_array *v9; // x20
  System_Text_StringBuilder_o *v10; // x19
  int max_length; // w8
  unsigned int v12; // w23
  Il2CppClass **v13; // x8
  System_String_o *v14; // x21
  System_String_o *v15; // x1
  System_Text_StringBuilder_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x19
  __int64 v19; // x1
  LocalizationManager_c *v20; // x0
  Il2CppObject *key; // x19
  Il2CppObject *value; // x20
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x21
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  LocalizationManager_c *v26; // x0
  Il2CppObject *Item; // x0
  struct LocalizationManager_StaticFields *static_fields; // x8
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject *v35; // x0
  struct LocalizationManager_StaticFields *v36; // x8
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  Il2CppObject *v43; // x0
  struct LocalizationManager_StaticFields *v44; // x8
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *v51; // x0
  struct LocalizationManager_StaticFields *v52; // x8
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct LocalizationManager_StaticFields *v59; // x8
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  LocalizationManager_c *v66; // x0
  struct LocalizationManager_StaticFields *v67; // x8
  int32_t v68; // w1
  LocalizationManager_c *v69; // x0
  Il2CppObject *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  Il2CppObject *v77; // x0
  struct LocalizationManager_StaticFields *v78; // x8
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  Il2CppObject *v85; // x0
  struct LocalizationManager_StaticFields *v86; // x8
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  LocalizationManager_c *v93; // x0
  bool v94; // w8
  LocalizationManager_c *v95; // x0
  int v96; // w9
  Il2CppObject *v97; // x0
  Il2CppObject *v98; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v104; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v105; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_596FEFE & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_2213A60(&StringLiteral_8557/*"KINSOKU_SEPARATION_STR"*/);
    sub_2213A60(&StringLiteral_1126/*"//"*/);
    sub_2213A60(&StringLiteral_9674/*"NORMAL_EFFECT_COLOR"*/);
    sub_2213A60(&StringLiteral_8558/*"KINSOKU_TOP_STR"*/);
    sub_2213A60(&StringLiteral_8540/*"KANNSUUJI_100"*/);
    sub_2213A60(&StringLiteral_12033/*"SELECT_EFFECT_COLOR"*/);
    sub_2213A60(&StringLiteral_8539/*"KANNSUUJI_10"*/);
    sub_2213A60(&StringLiteral_9710/*"NO_ENTRY_NAME"*/);
    sub_2213A60(&StringLiteral_8556/*"KINSOKU_LAST_STR"*/);
    sub_2213A60(&StringLiteral_15422/*"UNKNOWN_NAME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_8538/*"KANNSUUJI_1"*/);
    byte_596FEFE = 1;
  }
  memset(&v105, 0, sizeof(v105));
  v4 = (System_Array_o *)sub_2213B20(char___TypeInfo, 5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v4,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54,
    0);
  if ( !text_data )
    goto LABEL_63;
  v7 = System_String__Split_75706100(text_data, (System_Char_array *)v4, 1, 0);
  stringLength = text_data->fields._stringLength;
  v9 = v7;
  v10 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75728496(v10, stringLength, 0);
  if ( !v9 )
    goto LABEL_63;
  max_length = v9->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_2213CE4(appended);
      v13 = &v9->obj.klass + (int)v12;
      v14 = (System_String_o *)v13[4];
      if ( !v14 )
        goto LABEL_63;
      appended = (System_String_o *)System_String__IndexOf_75715196(
                                      (System_String_o *)v13[4],
                                      (System_String_o *)StringLiteral_1126/*"//"*/,
                                      0);
      if ( ((unsigned int)appended & 0x80000000) != 0 )
        break;
      if ( (_DWORD)appended )
      {
        appended = System_String__Substring_75702848(v14, 0, (int)appended - 1, 0);
        if ( !v10 )
          goto LABEL_63;
        v15 = appended;
        v16 = v10;
LABEL_15:
        appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(v16, v15, 0);
        if ( !appended )
          goto LABEL_63;
        appended = (System_String_o *)System_Text_StringBuilder__Append_75737396(
                                        (System_Text_StringBuilder_o *)appended,
                                        0xAu,
                                        0);
      }
      max_length = v9->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_18;
    }
    if ( !v10 )
      goto LABEL_63;
    v16 = v10;
    v15 = v14;
    goto LABEL_15;
  }
LABEL_18:
  if ( !v10 )
    goto LABEL_63;
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v10->klass->vtable._3_ToString.methodPtr)(
                             v10,
                             v10->klass->vtable._3_ToString.method);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v17);
  appended = (System_String_o *)JsonManager__getDictionary(v18, 0);
  if ( !appended )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v104,
    (System_Collections_Generic_Dictionary_object__object__o *)appended,
    (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v105 = v104;
  v104.fields._dictionary = 0;
  *(_QWORD *)&v104.fields._version = &v105;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v105,
            (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
  {
    v20 = LocalizationManager_TypeInfo;
    key = v105.fields._current.fields.key;
    value = v105.fields._current.fields.value;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v20 = LocalizationManager_TypeInfo;
    }
    if ( !value )
      sub_2213CDC(v20, v19);
    lookup = (System_Collections_Generic_Dictionary_object__object__o *)v20->static_fields->lookup;
    v24 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method);
    if ( !lookup )
      sub_2213CDC(v24, v25);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      lookup,
      key,
      v24,
      (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v105,
    (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  v26 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v26 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v26->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)appended,
           (Il2CppObject *)StringLiteral_15422/*"UNKNOWN_NAME"*/,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  static_fields = LocalizationManager_TypeInfo->static_fields;
  static_fields->unknownNameText = (struct System_String_o *)Item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->unknownNameText,
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
          (Il2CppObject *)StringLiteral_9710/*"NO_ENTRY_NAME"*/,
          (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v36 = LocalizationManager_TypeInfo->static_fields;
  v36->noEntryNameText = (struct System_String_o *)v35;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->noEntryNameText, (int32_t)v35, v37, v38, v39, v40, v41, v42);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v43 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_8558/*"KINSOKU_TOP_STR"*/,
          (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v44 = LocalizationManager_TypeInfo->static_fields;
  v44->kinsokuTopString = (struct System_String_o *)v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v44->kinsokuTopString, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v51 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_8556/*"KINSOKU_LAST_STR"*/,
          (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v52 = LocalizationManager_TypeInfo->static_fields;
  v52->kinsokuLastString = (struct System_String_o *)v51;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->kinsokuLastString, (int32_t)v51, v53, v54, v55, v56, v57, v58);
  v59 = LocalizationManager_TypeInfo->static_fields;
  appended = (System_String_o *)v59->lookup;
  if ( !appended )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)appended,
    (Il2CppObject *)StringLiteral_8557/*"KINSOKU_SEPARATION_STR"*/,
    (Il2CppObject **)&v59->kinsokuSeparationString,
    (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
  v66 = LocalizationManager_TypeInfo;
  v67 = LocalizationManager_TypeInfo->static_fields;
  if ( !v67->kinsokuSeparationString )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
      v67 = LocalizationManager_TypeInfo->static_fields;
    }
    v68 = (int)StringLiteral_1/*""*/;
    v67->kinsokuSeparationString = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v67->kinsokuSeparationString, v68, v60, v61, v62, v63, v64, v65);
    v66 = LocalizationManager_TypeInfo;
  }
  if ( !*(&v66->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v66, v6);
    v66 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v66->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)appended,
         (Il2CppObject *)StringLiteral_8538/*"KANNSUUJI_1"*/,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v69 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
      v69 = LocalizationManager_TypeInfo;
    }
    appended = (System_String_o *)v69->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v70 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8538/*"KANNSUUJI_1"*/,
            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    LocalizationManager_TypeInfo->static_fields->lowNumberString = (struct System_String_o *)v70;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)LocalizationManager_TypeInfo->static_fields,
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
            (Il2CppObject *)StringLiteral_8539/*"KANNSUUJI_10"*/,
            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v78 = LocalizationManager_TypeInfo->static_fields;
    v78->hiNumberString = (struct System_String_o *)v77;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v78->hiNumberString, (int32_t)v77, v79, v80, v81, v82, v83, v84);
    appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
    if ( !appended )
      goto LABEL_63;
    v85 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)appended,
            (Il2CppObject *)StringLiteral_8540/*"KANNSUUJI_100"*/,
            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v86 = LocalizationManager_TypeInfo->static_fields;
    v86->hi2NumberString = (struct System_String_o *)v85;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v86->hi2NumberString, (int32_t)v85, v87, v88, v89, v90, v91, v92);
  }
  v93 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v93 = LocalizationManager_TypeInfo;
  }
  appended = (System_String_o *)v93->static_fields->lookup;
  if ( !appended )
    goto LABEL_63;
  v94 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)appended,
          (Il2CppObject *)StringLiteral_9674/*"NORMAL_EFFECT_COLOR"*/,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  v95 = LocalizationManager_TypeInfo;
  v96 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v94 )
  {
    if ( !v96 )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
      v95 = LocalizationManager_TypeInfo;
    }
    appended = (System_String_o *)v95->static_fields->lookup;
    if ( appended )
    {
      v97 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)appended,
              (Il2CppObject *)StringLiteral_9674/*"NORMAL_EFFECT_COLOR"*/,
              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_ColorUtility__TryParseHtmlString(
        (System_String_o *)v97,
        &LocalizationManager_TypeInfo->static_fields->normalEffectColor,
        0);
      appended = (System_String_o *)LocalizationManager_TypeInfo->static_fields->lookup;
      if ( appended )
      {
        v98 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)appended,
                (Il2CppObject *)StringLiteral_12033/*"SELECT_EFFECT_COLOR"*/,
                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)v98,
          &LocalizationManager_TypeInfo->static_fields->selectEffectColor,
          0);
        return;
      }
    }
LABEL_63:
    sub_2213CDC(appended, v6);
  }
  if ( !v96 )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  bool v14; // w22
  LocalizationManager_c *v15; // x0
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x0

  if ( (byte_596FED0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FED0 = 1;
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
      sub_2213CDC(0, v7);
    defaultText = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       lookup,
                                       (Il2CppObject *)key,
                                       (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  *resultText = defaultText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)resultText, (int32_t)defaultText, v8, v9, v10, v11, v12, v13);
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
  if ( (byte_596FF01 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_TextAsset___);
    this = (LocalizationManager___c__DisplayClass16_0_o *)sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596FF01 = 1;
  }
  if ( !assetData
    || (this = (LocalizationManager___c__DisplayClass16_0_o *)AssetData__GetObject_object_(
                                                                assetData,
                                                                (const MethodInfo_37D239C *)Method_AssetData_GetObject_TextAsset___)) == 0
    || (this = (LocalizationManager___c__DisplayClass16_0_o *)UnityEngine_TextAsset__get_text(
                                                                (UnityEngine_TextAsset_o *)this,
                                                                0),
        !v4->fields.ins) )
  {
    sub_2213CDC(this, assetData);
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