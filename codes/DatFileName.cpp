void __fastcall DatFileName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v49; // x19
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3

  if ( (byte_4B00F30 & 1) == 0 )
  {
    sub_1BC3008(&DatFileName_TypeInfo, v1);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__, v2);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo, v4);
    sub_1BC3008(&StringLiteral_17845/*"clearrandommissionsave.dat"*/, v5);
    sub_1BC3008(&StringLiteral_16967/*"battleuseitemrequestsave.dat"*/, v6);
    sub_1BC3008(&StringLiteral_23061/*"servantcharactergraphexopen.dat"*/, v7);
    sub_1BC3008(&StringLiteral_24056/*"unconfirmedpayment.dat"*/, v8);
    sub_1BC3008(&StringLiteral_24367/*"userservantlocksave.dat"*/, v9);
    sub_1BC3008(&StringLiteral_22679/*"questphasehintdialogopensave.dat"*/, v10);
    sub_1BC3008(&StringLiteral_24542/*"warboardmoviehistorysave.dat"*/, v11);
    sub_1BC3008(&StringLiteral_16801/*"authsave2.dat"*/, v12);
    sub_1BC3008(&StringLiteral_21275/*"materialbranchroutesave.dat"*/, v13);
    sub_1BC3008(&StringLiteral_22442/*"paymentsave.dat"*/, v14);
    sub_1BC3008(&StringLiteral_23063/*"servantprofilelimitcount.dat"*/, v15);
    sub_1BC3008(&StringLiteral_24358/*"usercommandcodenewsave.dat"*/, v16);
    sub_1BC3008(&StringLiteral_22671/*"questfocusstatesave.dat"*/, v17);
    sub_1BC3008(&StringLiteral_23067/*"serversave.dat"*/, v18);
    sub_1BC3008(&StringLiteral_24364/*"userservantcollectionsave.dat"*/, v19);
    sub_1BC3008(&StringLiteral_22607/*"purchasebybankrequestsave.dat"*/, v20);
    sub_1BC3008(&StringLiteral_16966/*"battleusecontinuerequestsave.dat"*/, v21);
    sub_1BC3008(&StringLiteral_21276/*"materialgroupclearhistorysave.dat"*/, v22);
    sub_1BC3008(&StringLiteral_23062/*"servantprofileeventjoin.dat"*/, v23);
    sub_1BC3008(&StringLiteral_21236/*"masterDataList.dat"*/, v24);
    sub_1BC3008(&StringLiteral_16800/*"authsave.dat"*/, v25);
    sub_1BC3008(&StringLiteral_16965/*"battleusecontinueitemrequestsave.dat"*/, v26);
    sub_1BC3008(&StringLiteral_24363/*"usermissionprogsave_{0}_{1}.dat"*/, v27);
    sub_1BC3008(&StringLiteral_23859/*"tipsarchivestatesave_{0}.dat"*/, v28);
    sub_1BC3008(&StringLiteral_24368/*"userservantnewsave.dat"*/, v29);
    sub_1BC3008(&StringLiteral_24362/*"usermissionprogsave_{0}.dat"*/, v30);
    sub_1BC3008(&StringLiteral_24357/*"usercommandcodecollectionsave.dat"*/, v31);
    sub_1BC3008(&StringLiteral_24359/*"userequiplvsave.dat"*/, v32);
    sub_1BC3008(&StringLiteral_22282/*"otherusernewsave.dat"*/, v33);
    sub_1BC3008(&StringLiteral_20966/*"lastuseddecknumbersave.dat"*/, v34);
    sub_1BC3008(&StringLiteral_24540/*"warboardcontinue.dat"*/, v35);
    sub_1BC3008(&StringLiteral_22443/*"payment{0:D20}.dat"*/, v36);
    sub_1BC3008(&StringLiteral_19503/*"friendcodesave.dat"*/, v37);
    sub_1BC3008(&StringLiteral_21234/*"masterData.dat"*/, v38);
    sub_1BC3008(&StringLiteral_22672/*"questhintdialogopensave.dat"*/, v39);
    sub_1BC3008(&StringLiteral_24361/*"usermissionnewsave_{0}.dat"*/, v40);
    sub_1BC3008(&StringLiteral_21235/*"masterDataCheck.dat"*/, v41);
    sub_1BC3008(&StringLiteral_16962/*"battlecommandspellrequestsave.dat"*/, v42);
    sub_1BC3008(&StringLiteral_21277/*"materialservantlimitcountsave.dat"*/, v43);
    sub_1BC3008(&StringLiteral_24366/*"userservantcommentsave.dat"*/, v44);
    sub_1BC3008(&StringLiteral_23268/*"signupsave.dat"*/, v45);
    sub_1BC3008(&StringLiteral_24541/*"warboardmessagehistorysave.dat"*/, v46);
    sub_1BC3008(&StringLiteral_22987/*"scriptsave.dat"*/, v47);
    sub_1BC3008(&StringLiteral_24365/*"userservantcombinevoicesave.dat"*/, v48);
    byte_4B00F30 = 1;
  }
  v49 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v49,
    (const MethodInfo_33393F4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v49 )
    sub_1BC3264(v50, v51);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    0,
    (Il2CppObject *)StringLiteral_22987/*"scriptsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    1,
    (Il2CppObject *)StringLiteral_22607/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    2,
    (Il2CppObject *)StringLiteral_16966/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    3,
    (Il2CppObject *)StringLiteral_16962/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    4,
    (Il2CppObject *)StringLiteral_24365/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    5,
    (Il2CppObject *)StringLiteral_24368/*"userservantnewsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    6,
    (Il2CppObject *)StringLiteral_24367/*"userservantlocksave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    7,
    (Il2CppObject *)StringLiteral_24364/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    8,
    (Il2CppObject *)StringLiteral_24359/*"userequiplvsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    9,
    (Il2CppObject *)StringLiteral_24358/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    10,
    (Il2CppObject *)StringLiteral_24357/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    11,
    (Il2CppObject *)StringLiteral_24366/*"userservantcommentsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    12,
    (Il2CppObject *)StringLiteral_22282/*"otherusernewsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    13,
    (Il2CppObject *)StringLiteral_21235/*"masterDataCheck.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    14,
    (Il2CppObject *)StringLiteral_21236/*"masterDataList.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    15,
    (Il2CppObject *)StringLiteral_21234/*"masterData.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    16,
    (Il2CppObject *)StringLiteral_16800/*"authsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    17,
    (Il2CppObject *)StringLiteral_16801/*"authsave2.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    18,
    (Il2CppObject *)StringLiteral_23268/*"signupsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    19,
    (Il2CppObject *)StringLiteral_23067/*"serversave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    20,
    (Il2CppObject *)StringLiteral_19503/*"friendcodesave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    21,
    (Il2CppObject *)StringLiteral_22442/*"paymentsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    22,
    (Il2CppObject *)StringLiteral_22443/*"payment{0:D20}.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    23,
    (Il2CppObject *)StringLiteral_24362/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    24,
    (Il2CppObject *)StringLiteral_24363/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    25,
    (Il2CppObject *)StringLiteral_24361/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    26,
    (Il2CppObject *)StringLiteral_21277/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    27,
    (Il2CppObject *)StringLiteral_23063/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    28,
    (Il2CppObject *)StringLiteral_23062/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    29,
    (Il2CppObject *)StringLiteral_16965/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    30,
    (Il2CppObject *)StringLiteral_16967/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    31,
    (Il2CppObject *)StringLiteral_24056/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    32,
    (Il2CppObject *)StringLiteral_23061/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    33,
    (Il2CppObject *)StringLiteral_22672/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    34,
    (Il2CppObject *)StringLiteral_20966/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    35,
    (Il2CppObject *)StringLiteral_21275/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    36,
    (Il2CppObject *)StringLiteral_17845/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    37,
    (Il2CppObject *)StringLiteral_21276/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    38,
    (Il2CppObject *)StringLiteral_24541/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    39,
    (Il2CppObject *)StringLiteral_24542/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    40,
    (Il2CppObject *)StringLiteral_23859/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    41,
    (Il2CppObject *)StringLiteral_24540/*"warboardcontinue.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    42,
    (Il2CppObject *)StringLiteral_22671/*"questfocusstatesave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    43,
    (Il2CppObject *)StringLiteral_22679/*"questphasehintdialogopensave.dat"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v49;
  sub_1BC2FAC((CGThumbnailListItem_o *)DatFileName_TypeInfo->static_fields, (int32_t)v49, v52, v53);
}


void __fastcall DatFileName___ctor(DatFileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName(int32_t name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v9; // x0
  Il2CppObject *Item; // x19

  if ( (byte_4B00F2B & 1) == 0 )
  {
    sub_1BC3008(&AndroidUtil_TypeInfo, method);
    sub_1BC3008(&DatFileName_TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v5);
    sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4B00F2B = 1;
  }
  v7 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v7 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_3339FBC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v9 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v9 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v9->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3339D28 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1BC3264(filelist, method);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed((System_String_o *)Item, 0LL);
}


System_String_o *__fastcall DatFileName__getFileNameNotConverted(int32_t name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DatFileName_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v8; // x0

  if ( (byte_4B00F2F & 1) == 0 )
  {
    sub_1BC3008(&DatFileName_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v4);
    sub_1BC3008(&StringLiteral_1/*""*/, v5);
    byte_4B00F2F = 1;
  }
  v6 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v6 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v6->static_fields->filelist;
  if ( !filelist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_3339FBC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v8 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v8 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->filelist;
    if ( filelist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  filelist,
                                  name,
                                  (const MethodInfo_3339D28 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_1BC3264(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_39459480(int32_t name, int64_t l, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DatFileName_c *v10; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  DatFileName_c *v15; // x0
  Il2CppObject *Item; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x19
  int64_t v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B00F2C & 1) == 0 )
  {
    sub_1BC3008(&AndroidUtil_TypeInfo, l);
    sub_1BC3008(&DatFileName_TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v7);
    sub_1BC3008(&long_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_1/*""*/, v9);
    byte_4B00F2C = 1;
  }
  v10 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v10 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_3339FBC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v15 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v15 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v15->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3339D28 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1BC3264(filelist, l);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v20 = l;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20, v12, v13, v14);
  v18 = System_String__Format((System_String_o *)Item, v17, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DatFileName__getFileName_39459832(
        int32_t name,
        int32_t i1,
        int32_t i2,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DatFileName_c *v12; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  DatFileName_c *v17; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x19
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B00F2D & 1) == 0 )
  {
    sub_1BC3008(&AndroidUtil_TypeInfo, *(_QWORD *)&i1);
    sub_1BC3008(&DatFileName_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_1BC3008(&int_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_1/*""*/, v11);
    byte_4B00F2D = 1;
  }
  v12 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v12 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v12->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_3339FBC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v17 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v17 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v17->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3339D28 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1BC3264(filelist, *(_QWORD *)&i1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v27 = i1;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v14, v15, v16);
  v26 = i2;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v20, v21, v22);
  v24 = System_String__Format_62389940((System_String_o *)Item, v19, v23, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v24, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_39460220(
        int32_t name,
        System_String_o *str1,
        System_String_o *str2,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DatFileName_c *v11; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v13; // x0
  Il2CppObject *Item; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x19

  if ( (byte_4B00F2E & 1) == 0 )
  {
    sub_1BC3008(&AndroidUtil_TypeInfo, str1);
    sub_1BC3008(&DatFileName_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_1BC3008(&StringLiteral_1/*""*/, v10);
    byte_4B00F2E = 1;
  }
  v11 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v11 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v11->static_fields->filelist;
  if ( !filelist )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_3339FBC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v13 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v13 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v13->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3339D28 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_1BC3264(filelist, str1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v15 = System_String__Format_62389940((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v15 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0LL);
  v16 = v15;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0LL);
}