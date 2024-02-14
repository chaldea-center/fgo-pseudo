void __fastcall DatFileName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v48; // x19
  __int64 v49; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_421605E & 1) == 0 )
  {
    sub_B0D8A4(&DatFileName_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_17522/*"clearrandommissionsave.dat"*/, v6);
    sub_B0D8A4(&StringLiteral_16729/*"battleuseitemrequestsave.dat"*/, v7);
    sub_B0D8A4(&StringLiteral_22057/*"servantcharactergraphexopen.dat"*/, v8);
    sub_B0D8A4(&StringLiteral_22966/*"unconfirmedpayment.dat"*/, v9);
    sub_B0D8A4(&StringLiteral_23162/*"userservantlocksave.dat"*/, v10);
    sub_B0D8A4(&StringLiteral_23327/*"warboardmoviehistorysave.dat"*/, v11);
    sub_B0D8A4(&StringLiteral_16583/*"authsave2.dat"*/, v12);
    sub_B0D8A4(&StringLiteral_20492/*"materialbranchroutesave.dat"*/, v13);
    sub_B0D8A4(&StringLiteral_21518/*"paymentsave.dat"*/, v14);
    sub_B0D8A4(&StringLiteral_22059/*"servantprofilelimitcount.dat"*/, v15);
    sub_B0D8A4(&StringLiteral_23153/*"usercommandcodenewsave.dat"*/, v16);
    sub_B0D8A4(&StringLiteral_22065/*"serversave.dat"*/, v17);
    sub_B0D8A4(&StringLiteral_23159/*"userservantcollectionsave.dat"*/, v18);
    sub_B0D8A4(&StringLiteral_21660/*"purchasebybankrequestsave.dat"*/, v19);
    sub_B0D8A4(&StringLiteral_16728/*"battleusecontinuerequestsave.dat"*/, v20);
    sub_B0D8A4(&StringLiteral_20493/*"materialgroupclearhistorysave.dat"*/, v21);
    sub_B0D8A4(&StringLiteral_22058/*"servantprofileeventjoin.dat"*/, v22);
    sub_B0D8A4(&StringLiteral_20455/*"masterDataList.dat"*/, v23);
    sub_B0D8A4(&StringLiteral_16582/*"authsave.dat"*/, v24);
    sub_B0D8A4(&StringLiteral_16727/*"battleusecontinueitemrequestsave.dat"*/, v25);
    sub_B0D8A4(&StringLiteral_23158/*"usermissionprogsave_{0}_{1}.dat"*/, v26);
    sub_B0D8A4(&StringLiteral_22778/*"tipsarchivestatesave_{0}.dat"*/, v27);
    sub_B0D8A4(&StringLiteral_23163/*"userservantnewsave.dat"*/, v28);
    sub_B0D8A4(&StringLiteral_23157/*"usermissionprogsave_{0}.dat"*/, v29);
    sub_B0D8A4(&StringLiteral_23152/*"usercommandcodecollectionsave.dat"*/, v30);
    sub_B0D8A4(&StringLiteral_23154/*"userequiplvsave.dat"*/, v31);
    sub_B0D8A4(&StringLiteral_21397/*"otherusernewsave.dat"*/, v32);
    sub_B0D8A4(&StringLiteral_20249/*"lastuseddecknumbersave.dat"*/, v33);
    sub_B0D8A4(&StringLiteral_23325/*"warboardcontinue.dat"*/, v34);
    sub_B0D8A4(&StringLiteral_21519/*"payment{0:D20}.dat"*/, v35);
    sub_B0D8A4(&StringLiteral_18969/*"friendcodesave.dat"*/, v36);
    sub_B0D8A4(&StringLiteral_20453/*"masterData.dat"*/, v37);
    sub_B0D8A4(&StringLiteral_21712/*"questhintdialogopensave.dat"*/, v38);
    sub_B0D8A4(&StringLiteral_23156/*"usermissionnewsave_{0}.dat"*/, v39);
    sub_B0D8A4(&StringLiteral_20454/*"masterDataCheck.dat"*/, v40);
    sub_B0D8A4(&StringLiteral_16726/*"battlecommandspellrequestsave.dat"*/, v41);
    sub_B0D8A4(&StringLiteral_20494/*"materialservantlimitcountsave.dat"*/, v42);
    sub_B0D8A4(&StringLiteral_23161/*"userservantcommentsave.dat"*/, v43);
    sub_B0D8A4(&StringLiteral_22204/*"signupsave.dat"*/, v44);
    sub_B0D8A4(&StringLiteral_23326/*"warboardmessagehistorysave.dat"*/, v45);
    sub_B0D8A4(&StringLiteral_21998/*"scriptsave.dat"*/, v46);
    sub_B0D8A4(&StringLiteral_23160/*"userservantcombinevoicesave.dat"*/, v47);
    byte_421605E = 1;
  }
  v48 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo,
                                                                           v1,
                                                                           v2);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v48,
    (const MethodInfo_2EA610C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v48 )
    sub_B0D97C(v49);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    0,
    (System_String_o *)StringLiteral_21998/*"scriptsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    1,
    (System_String_o *)StringLiteral_21660/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    2,
    (System_String_o *)StringLiteral_16728/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    3,
    (System_String_o *)StringLiteral_16726/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    4,
    (System_String_o *)StringLiteral_23160/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    5,
    (System_String_o *)StringLiteral_23163/*"userservantnewsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    6,
    (System_String_o *)StringLiteral_23162/*"userservantlocksave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    7,
    (System_String_o *)StringLiteral_23159/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    8,
    (System_String_o *)StringLiteral_23154/*"userequiplvsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    9,
    (System_String_o *)StringLiteral_23153/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    10,
    (System_String_o *)StringLiteral_23152/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    11,
    (System_String_o *)StringLiteral_23161/*"userservantcommentsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    12,
    (System_String_o *)StringLiteral_21397/*"otherusernewsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    13,
    (System_String_o *)StringLiteral_20454/*"masterDataCheck.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    14,
    (System_String_o *)StringLiteral_20455/*"masterDataList.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    15,
    (System_String_o *)StringLiteral_20453/*"masterData.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    16,
    (System_String_o *)StringLiteral_16582/*"authsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    17,
    (System_String_o *)StringLiteral_16583/*"authsave2.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    18,
    (System_String_o *)StringLiteral_22204/*"signupsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    19,
    (System_String_o *)StringLiteral_22065/*"serversave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    20,
    (System_String_o *)StringLiteral_18969/*"friendcodesave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    21,
    (System_String_o *)StringLiteral_21518/*"paymentsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    22,
    (System_String_o *)StringLiteral_21519/*"payment{0:D20}.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    23,
    (System_String_o *)StringLiteral_23157/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    24,
    (System_String_o *)StringLiteral_23158/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    25,
    (System_String_o *)StringLiteral_23156/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    26,
    (System_String_o *)StringLiteral_20494/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    27,
    (System_String_o *)StringLiteral_22059/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    28,
    (System_String_o *)StringLiteral_22058/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    29,
    (System_String_o *)StringLiteral_16727/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    30,
    (System_String_o *)StringLiteral_16729/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    31,
    (System_String_o *)StringLiteral_22966/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    32,
    (System_String_o *)StringLiteral_22057/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    33,
    (System_String_o *)StringLiteral_21712/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    34,
    (System_String_o *)StringLiteral_20249/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    35,
    (System_String_o *)StringLiteral_20492/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    36,
    (System_String_o *)StringLiteral_17522/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    37,
    (System_String_o *)StringLiteral_20493/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    38,
    (System_String_o *)StringLiteral_23326/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    39,
    (System_String_o *)StringLiteral_23327/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    40,
    (System_String_o *)StringLiteral_22778/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v48,
    41,
    (System_String_o *)StringLiteral_23325/*"warboardcontinue.dat"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  static_fields = (BattleServantConfConponent_o *)DatFileName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v48;
  sub_B0D840(static_fields, (System_Int32_array **)v48, v51, v52, v53, v54, v55, v56);
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v9; // x0
  System_String_o *Item; // x19

  if ( (byte_4216059 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, method);
    sub_B0D8A4(&DatFileName_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4216059 = 1;
  }
  v7 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v7 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v7->static_fields->filelist;
  if ( !filelist )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
          filelist,
          name,
          (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    Item = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_14;
  }
  v9 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v9 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v9->static_fields->filelist;
  if ( !filelist )
LABEL_18:
    sub_B0D97C(filelist);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(Item, 0LL);
}


System_String_o *__fastcall DatFileName__getFileNameNotConverted(int32_t name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DatFileName_c *v6; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v8; // x0

  if ( (byte_421605D & 1) == 0 )
  {
    sub_B0D8A4(&DatFileName_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_421605D = 1;
  }
  v6 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v6 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v6->static_fields->filelist;
  if ( !filelist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         filelist,
         name,
         (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v8 = DatFileName_TypeInfo;
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v8 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v8->static_fields->filelist;
    if ( filelist )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               filelist,
               name,
               (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
    sub_B0D97C(filelist);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_27229940(int32_t name, int64_t l, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DatFileName_c *v10; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v12; // x0
  System_String_o *Item; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x19
  int64_t v17; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421605A & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, l);
    sub_B0D8A4(&DatFileName_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_421605A = 1;
  }
  v10 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v10 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v10->static_fields->filelist;
  if ( !filelist )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
          filelist,
          name,
          (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    Item = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_14;
  }
  v12 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v12 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v12->static_fields->filelist;
  if ( !filelist )
LABEL_18:
    sub_B0D97C(filelist);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  v17 = l;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
  v15 = System_String__Format(Item, v14, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DatFileName__getFileName_27230320(
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v14; // x0
  System_String_o *Item; // x21
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x19
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421605B & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, *(_QWORD *)&i1);
    sub_B0D8A4(&DatFileName_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_421605B = 1;
  }
  v12 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v12 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v12->static_fields->filelist;
  if ( !filelist )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
          filelist,
          name,
          (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    Item = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_14;
  }
  v14 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v14 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v14->static_fields->filelist;
  if ( !filelist )
LABEL_18:
    sub_B0D97C(filelist);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  v21 = i1;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v20 = i2;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v18 = System_String__Format_43845440(Item, v16, v17, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v18, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_27230736(
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v13; // x0
  System_String_o *Item; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x19

  if ( (byte_421605C & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, str1);
    sub_B0D8A4(&DatFileName_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_421605C = 1;
  }
  v11 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v11 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v11->static_fields->filelist;
  if ( !filelist )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         filelist,
         name,
         (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v13 = DatFileName_TypeInfo;
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v13 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v13->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               filelist,
               name,
               (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_14;
    }
LABEL_21:
    sub_B0D97C(filelist);
  }
  Item = (System_String_o *)StringLiteral_1/*""*/;
LABEL_14:
  if ( str2 )
    v15 = System_String__Format_43845440(Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v15 = System_String__Format(Item, (Il2CppObject *)str1, 0LL);
  v16 = v15;
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0LL);
}