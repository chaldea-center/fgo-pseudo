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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v48; // x19
  __int64 v49; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3

  if ( (byte_4A1EAC3 & 1) == 0 )
  {
    sub_1B715CC(&DatFileName_TypeInfo, v1);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__, v2);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__, v3);
    sub_1B715CC(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo, v4);
    sub_1B715CC(&StringLiteral_17959/*"clearrandommissionsave.dat"*/, v5);
    sub_1B715CC(&StringLiteral_17098/*"battleuseitemrequestsave.dat"*/, v6);
    sub_1B715CC(&StringLiteral_23066/*"servantcharactergraphexopen.dat"*/, v7);
    sub_1B715CC(&StringLiteral_24104/*"unconfirmedpayment.dat"*/, v8);
    sub_1B715CC(&StringLiteral_24413/*"userservantlocksave.dat"*/, v9);
    sub_1B715CC(&StringLiteral_24602/*"warboardmoviehistorysave.dat"*/, v10);
    sub_1B715CC(&StringLiteral_16930/*"authsave2.dat"*/, v11);
    sub_1B715CC(&StringLiteral_21284/*"materialbranchroutesave.dat"*/, v12);
    sub_1B715CC(&StringLiteral_22440/*"paymentsave.dat"*/, v13);
    sub_1B715CC(&StringLiteral_23068/*"servantprofilelimitcount.dat"*/, v14);
    sub_1B715CC(&StringLiteral_24404/*"usercommandcodenewsave.dat"*/, v15);
    sub_1B715CC(&StringLiteral_22665/*"questfocusstatesave.dat"*/, v16);
    sub_1B715CC(&StringLiteral_23072/*"serversave.dat"*/, v17);
    sub_1B715CC(&StringLiteral_24410/*"userservantcollectionsave.dat"*/, v18);
    sub_1B715CC(&StringLiteral_22606/*"purchasebybankrequestsave.dat"*/, v19);
    sub_1B715CC(&StringLiteral_17097/*"battleusecontinuerequestsave.dat"*/, v20);
    sub_1B715CC(&StringLiteral_21285/*"materialgroupclearhistorysave.dat"*/, v21);
    sub_1B715CC(&StringLiteral_23067/*"servantprofileeventjoin.dat"*/, v22);
    sub_1B715CC(&StringLiteral_21245/*"masterDataList.dat"*/, v23);
    sub_1B715CC(&StringLiteral_16929/*"authsave.dat"*/, v24);
    sub_1B715CC(&StringLiteral_17096/*"battleusecontinueitemrequestsave.dat"*/, v25);
    sub_1B715CC(&StringLiteral_24409/*"usermissionprogsave_{0}_{1}.dat"*/, v26);
    sub_1B715CC(&StringLiteral_23897/*"tipsarchivestatesave_{0}.dat"*/, v27);
    sub_1B715CC(&StringLiteral_24414/*"userservantnewsave.dat"*/, v28);
    sub_1B715CC(&StringLiteral_24408/*"usermissionprogsave_{0}.dat"*/, v29);
    sub_1B715CC(&StringLiteral_24403/*"usercommandcodecollectionsave.dat"*/, v30);
    sub_1B715CC(&StringLiteral_24405/*"userequiplvsave.dat"*/, v31);
    sub_1B715CC(&StringLiteral_22292/*"otherusernewsave.dat"*/, v32);
    sub_1B715CC(&StringLiteral_20992/*"lastuseddecknumbersave.dat"*/, v33);
    sub_1B715CC(&StringLiteral_24600/*"warboardcontinue.dat"*/, v34);
    sub_1B715CC(&StringLiteral_22441/*"payment{0:D20}.dat"*/, v35);
    sub_1B715CC(&StringLiteral_19602/*"friendcodesave.dat"*/, v36);
    sub_1B715CC(&StringLiteral_21243/*"masterData.dat"*/, v37);
    sub_1B715CC(&StringLiteral_22666/*"questhintdialogopensave.dat"*/, v38);
    sub_1B715CC(&StringLiteral_24407/*"usermissionnewsave_{0}.dat"*/, v39);
    sub_1B715CC(&StringLiteral_21244/*"masterDataCheck.dat"*/, v40);
    sub_1B715CC(&StringLiteral_17093/*"battlecommandspellrequestsave.dat"*/, v41);
    sub_1B715CC(&StringLiteral_21286/*"materialservantlimitcountsave.dat"*/, v42);
    sub_1B715CC(&StringLiteral_24412/*"userservantcommentsave.dat"*/, v43);
    sub_1B715CC(&StringLiteral_23267/*"signupsave.dat"*/, v44);
    sub_1B715CC(&StringLiteral_24601/*"warboardmessagehistorysave.dat"*/, v45);
    sub_1B715CC(&StringLiteral_22990/*"scriptsave.dat"*/, v46);
    sub_1B715CC(&StringLiteral_24411/*"userservantcombinevoicesave.dat"*/, v47);
    byte_4A1EAC3 = 1;
  }
  v48 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v48,
    (const MethodInfo_31776B4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v48 )
    sub_1B71828(v49, v50);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    0,
    (Il2CppObject *)StringLiteral_22990/*"scriptsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    1,
    (Il2CppObject *)StringLiteral_22606/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    2,
    (Il2CppObject *)StringLiteral_17097/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    3,
    (Il2CppObject *)StringLiteral_17093/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    4,
    (Il2CppObject *)StringLiteral_24411/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    5,
    (Il2CppObject *)StringLiteral_24414/*"userservantnewsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    6,
    (Il2CppObject *)StringLiteral_24413/*"userservantlocksave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    7,
    (Il2CppObject *)StringLiteral_24410/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    8,
    (Il2CppObject *)StringLiteral_24405/*"userequiplvsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    9,
    (Il2CppObject *)StringLiteral_24404/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    10,
    (Il2CppObject *)StringLiteral_24403/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    11,
    (Il2CppObject *)StringLiteral_24412/*"userservantcommentsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    12,
    (Il2CppObject *)StringLiteral_22292/*"otherusernewsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    13,
    (Il2CppObject *)StringLiteral_21244/*"masterDataCheck.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    14,
    (Il2CppObject *)StringLiteral_21245/*"masterDataList.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    15,
    (Il2CppObject *)StringLiteral_21243/*"masterData.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    16,
    (Il2CppObject *)StringLiteral_16929/*"authsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    17,
    (Il2CppObject *)StringLiteral_16930/*"authsave2.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    18,
    (Il2CppObject *)StringLiteral_23267/*"signupsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    19,
    (Il2CppObject *)StringLiteral_23072/*"serversave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    20,
    (Il2CppObject *)StringLiteral_19602/*"friendcodesave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    21,
    (Il2CppObject *)StringLiteral_22440/*"paymentsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    22,
    (Il2CppObject *)StringLiteral_22441/*"payment{0:D20}.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    23,
    (Il2CppObject *)StringLiteral_24408/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    24,
    (Il2CppObject *)StringLiteral_24409/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    25,
    (Il2CppObject *)StringLiteral_24407/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    26,
    (Il2CppObject *)StringLiteral_21286/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    27,
    (Il2CppObject *)StringLiteral_23068/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    28,
    (Il2CppObject *)StringLiteral_23067/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    29,
    (Il2CppObject *)StringLiteral_17096/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    30,
    (Il2CppObject *)StringLiteral_17098/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    31,
    (Il2CppObject *)StringLiteral_24104/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    32,
    (Il2CppObject *)StringLiteral_23066/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    33,
    (Il2CppObject *)StringLiteral_22666/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    34,
    (Il2CppObject *)StringLiteral_20992/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    35,
    (Il2CppObject *)StringLiteral_21284/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    36,
    (Il2CppObject *)StringLiteral_17959/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    37,
    (Il2CppObject *)StringLiteral_21285/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    38,
    (Il2CppObject *)StringLiteral_24601/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    39,
    (Il2CppObject *)StringLiteral_24602/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    40,
    (Il2CppObject *)StringLiteral_23897/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    41,
    (Il2CppObject *)StringLiteral_24600/*"warboardcontinue.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v48,
    42,
    (Il2CppObject *)StringLiteral_22665/*"questfocusstatesave.dat"*/,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v48;
  sub_1B71570((ServantStatusBattleListViewItem_o *)DatFileName_TypeInfo->static_fields, (int32_t)v48, v51, v52);
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

  if ( (byte_4A1EABE & 1) == 0 )
  {
    sub_1B715CC(&AndroidUtil_TypeInfo, method);
    sub_1B715CC(&DatFileName_TypeInfo, v3);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v5);
    sub_1B715CC(&StringLiteral_1/*""*/, v6);
    byte_4A1EABE = 1;
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
         (const MethodInfo_317827C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3177FE8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1B71828(filelist, method);
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

  if ( (byte_4A1EAC2 & 1) == 0 )
  {
    sub_1B715CC(&DatFileName_TypeInfo, method);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v4);
    sub_1B715CC(&StringLiteral_1/*""*/, v5);
    byte_4A1EAC2 = 1;
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
         (const MethodInfo_317827C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
                                  (const MethodInfo_3177FE8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_1B71828(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_37479516(int32_t name, int64_t l, const MethodInfo *method)
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

  if ( (byte_4A1EABF & 1) == 0 )
  {
    sub_1B715CC(&AndroidUtil_TypeInfo, l);
    sub_1B715CC(&DatFileName_TypeInfo, v5);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v7);
    sub_1B715CC(&long_TypeInfo, v8);
    sub_1B715CC(&StringLiteral_1/*""*/, v9);
    byte_4A1EABF = 1;
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
         (const MethodInfo_317827C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3177FE8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1B71828(filelist, l);
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
System_String_o *__fastcall DatFileName__getFileName_37479868(
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

  if ( (byte_4A1EAC0 & 1) == 0 )
  {
    sub_1B715CC(&AndroidUtil_TypeInfo, *(_QWORD *)&i1);
    sub_1B715CC(&DatFileName_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_1B715CC(&int_TypeInfo, v10);
    sub_1B715CC(&StringLiteral_1/*""*/, v11);
    byte_4A1EAC0 = 1;
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
         (const MethodInfo_317827C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3177FE8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1B71828(filelist, *(_QWORD *)&i1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v27 = i1;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v14, v15, v16);
  v26 = i2;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v20, v21, v22);
  v24 = System_String__Format_61519876((System_String_o *)Item, v19, v23, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v24, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_37480256(
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

  if ( (byte_4A1EAC1 & 1) == 0 )
  {
    sub_1B715CC(&AndroidUtil_TypeInfo, str1);
    sub_1B715CC(&DatFileName_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_1B715CC(&StringLiteral_1/*""*/, v10);
    byte_4A1EAC1 = 1;
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
         (const MethodInfo_317827C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3177FE8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_1B71828(filelist, str1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v15 = System_String__Format_61519876((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v15 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0LL);
  v16 = v15;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0LL);
}