void DatFileName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593751E & 1) == 0 )
  {
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
    sub_21FFC50(&StringLiteral_18764/*"clearrandommissionsave.dat"*/);
    sub_21FFC50(&StringLiteral_17814/*"battleuseitemrequestsave.dat"*/);
    sub_21FFC50(&StringLiteral_24483/*"servantcharactergraphexopen.dat"*/);
    sub_21FFC50(&StringLiteral_25564/*"unconfirmedpayment.dat"*/);
    sub_21FFC50(&StringLiteral_25912/*"userservantlocksave.dat"*/);
    sub_21FFC50(&StringLiteral_24050/*"questphasehintdialogopensave.dat"*/);
    sub_21FFC50(&StringLiteral_26103/*"warboardmoviehistorysave.dat"*/);
    sub_21FFC50(&StringLiteral_17630/*"authsave2.dat"*/);
    sub_21FFC50(&StringLiteral_22538/*"materialbranchroutesave.dat"*/);
    sub_21FFC50(&StringLiteral_23788/*"paymentsave.dat"*/);
    sub_21FFC50(&StringLiteral_24485/*"servantprofilelimitcount.dat"*/);
    sub_21FFC50(&StringLiteral_25903/*"usercommandcodenewsave.dat"*/);
    sub_21FFC50(&StringLiteral_24042/*"questfocusstatesave.dat"*/);
    sub_21FFC50(&StringLiteral_24489/*"serversave.dat"*/);
    sub_21FFC50(&StringLiteral_25909/*"userservantcollectionsave.dat"*/);
    sub_21FFC50(&StringLiteral_23976/*"purchasebybankrequestsave.dat"*/);
    sub_21FFC50(&StringLiteral_17813/*"battleusecontinuerequestsave.dat"*/);
    sub_21FFC50(&StringLiteral_22539/*"materialgroupclearhistorysave.dat"*/);
    sub_21FFC50(&StringLiteral_24484/*"servantprofileeventjoin.dat"*/);
    sub_21FFC50(&StringLiteral_22498/*"masterDataList.dat"*/);
    sub_21FFC50(&StringLiteral_17629/*"authsave.dat"*/);
    sub_21FFC50(&StringLiteral_17812/*"battleusecontinueitemrequestsave.dat"*/);
    sub_21FFC50(&StringLiteral_25908/*"usermissionprogsave_{0}_{1}.dat"*/);
    sub_21FFC50(&StringLiteral_25344/*"tipsarchivestatesave_{0}.dat"*/);
    sub_21FFC50(&StringLiteral_25913/*"userservantnewsave.dat"*/);
    sub_21FFC50(&StringLiteral_25907/*"usermissionprogsave_{0}.dat"*/);
    sub_21FFC50(&StringLiteral_25902/*"usercommandcodecollectionsave.dat"*/);
    sub_21FFC50(&StringLiteral_25904/*"userequiplvsave.dat"*/);
    sub_21FFC50(&StringLiteral_23591/*"otherusernewsave.dat"*/);
    sub_21FFC50(&StringLiteral_22196/*"lastuseddecknumbersave.dat"*/);
    sub_21FFC50(&StringLiteral_26101/*"warboardcontinue.dat"*/);
    sub_21FFC50(&StringLiteral_23789/*"payment{0:D20}.dat"*/);
    sub_21FFC50(&StringLiteral_20578/*"friendcodesave.dat"*/);
    sub_21FFC50(&StringLiteral_22496/*"masterData.dat"*/);
    sub_21FFC50(&StringLiteral_24043/*"questhintdialogopensave.dat"*/);
    sub_21FFC50(&StringLiteral_25906/*"usermissionnewsave_{0}.dat"*/);
    sub_21FFC50(&StringLiteral_22497/*"masterDataCheck.dat"*/);
    sub_21FFC50(&StringLiteral_17809/*"battlecommandspellrequestsave.dat"*/);
    sub_21FFC50(&StringLiteral_22540/*"materialservantlimitcountsave.dat"*/);
    sub_21FFC50(&StringLiteral_25911/*"userservantcommentsave.dat"*/);
    sub_21FFC50(&StringLiteral_24692/*"signupsave.dat"*/);
    sub_21FFC50(&StringLiteral_26102/*"warboardmessagehistorysave.dat"*/);
    sub_21FFC50(&StringLiteral_24384/*"scriptsave.dat"*/);
    sub_21FFC50(&StringLiteral_25910/*"userservantcombinevoicesave.dat"*/);
    byte_593751E = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3F88244 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v1 )
    sub_21FFECC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_24384/*"scriptsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23976/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_17813/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_17809/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_25910/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_25913/*"userservantnewsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_25912/*"userservantlocksave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_25909/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_25904/*"userequiplvsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_25903/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_25902/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_25911/*"userservantcommentsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23591/*"otherusernewsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22497/*"masterDataCheck.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_22498/*"masterDataList.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_22496/*"masterData.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_17629/*"authsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_17630/*"authsave2.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_24692/*"signupsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_24489/*"serversave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_20578/*"friendcodesave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_23788/*"paymentsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_23789/*"payment{0:D20}.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_25907/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_25908/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_25906/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22540/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24485/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24484/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_17812/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_17814/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_25564/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_24483/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_24043/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_22196/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_22538/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_18764/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22539/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_26102/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_26103/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_25344/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_26101/*"warboardcontinue.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_24042/*"questfocusstatesave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_24050/*"questphasehintdialogopensave.dat"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)DatFileName_TypeInfo->static_fields,
    (int32_t)v1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void DatFileName___ctor(DatFileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DatFileName__getFileName(int32_t name, const MethodInfo *method)
{
  __int64 v2; // x2
  DatFileName_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v6; // x2
  DatFileName_c *v7; // x0
  Il2CppObject *Item; // x19

  if ( (byte_5937519 & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937519 = 1;
  }
  v4 = DatFileName_TypeInfo;
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method, v2);
    v4 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_3F88DEC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v7 = DatFileName_TypeInfo;
    if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method, v6);
      v7 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_21FFECC(filelist, method);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method, v6);
  return AndroidUtil__ConvertFileNameIfNeed((System_String_o *)Item, 0);
}


System_String_o *DatFileName__getFileNameNotConverted(int32_t name, const MethodInfo *method)
{
  __int64 v2; // x2
  DatFileName_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v6; // x2
  DatFileName_c *v7; // x0

  if ( (byte_593751D & 1) == 0 )
  {
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593751D = 1;
  }
  v4 = DatFileName_TypeInfo;
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method, v2);
    v4 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->filelist;
  if ( !filelist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_3F88DEC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v7 = DatFileName_TypeInfo;
    if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method, v6);
      v7 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->filelist;
    if ( filelist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  filelist,
                                  name,
                                  (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_21FFECC(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DatFileName__getFileName_47352460(int32_t name, int64_t l, const MethodInfo *method)
{
  DatFileName_c *v5; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v7; // x2
  DatFileName_c *v8; // x0
  Il2CppObject *Item; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x19
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593751A & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593751A = 1;
  }
  v5 = DatFileName_TypeInfo;
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, l, method);
    v5 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_3F88DEC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v8 = DatFileName_TypeInfo;
    if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, l, v7);
      v8 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_21FFECC(filelist, l);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v15 = l;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v15);
  v13 = System_String__Format((System_String_o *)Item, v10, 0);
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v11, v12);
  return AndroidUtil__ConvertFileNameIfNeed(v13, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DatFileName__getFileName_47352800(int32_t name, int32_t i1, int32_t i2, const MethodInfo *method)
{
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v9; // x2
  DatFileName_c *v10; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x19
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593751B & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593751B = 1;
  }
  v7 = DatFileName_TypeInfo;
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, *(_QWORD *)&i1, *(_QWORD *)&i2);
    v7 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_3F88DEC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v10 = DatFileName_TypeInfo;
    if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, *(_QWORD *)&i1, v9);
      v10 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_21FFECC(filelist, *(_QWORD *)&i1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v19 = i1;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v19);
  v18 = i2;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v18);
  v16 = System_String__Format_75484576((System_String_o *)Item, v12, v13, 0);
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v14, v15);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0);
}


System_String_o *DatFileName__getFileName_47353176(
        int32_t name,
        System_String_o *str1,
        System_String_o *str2,
        const MethodInfo *method)
{
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v9; // x2
  DatFileName_c *v10; // x0
  Il2CppObject *Item; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x19

  if ( (byte_593751C & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593751C = 1;
  }
  v7 = DatFileName_TypeInfo;
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, str1, str2);
    v7 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->filelist;
  if ( !filelist )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_3F88DEC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v10 = DatFileName_TypeInfo;
    if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, str1, v9);
      v10 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_21FFECC(filelist, str1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v12 = System_String__Format_75484576((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0);
  else
    v12 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0);
  v15 = v12;
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v13, v14);
  return AndroidUtil__ConvertFileNameIfNeed(v15, 0);
}