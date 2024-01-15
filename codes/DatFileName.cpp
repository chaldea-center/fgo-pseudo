void __fastcall DatFileName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v49; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v50; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_40FB3FE & 1) == 0 )
  {
    sub_B16FFC(&DatFileName_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo, v7);
    sub_B16FFC(&StringLiteral_17400/*"clearrandommissionsave.dat"*/, v8);
    sub_B16FFC(&StringLiteral_16616/*"battleuseitemrequestsave.dat"*/, v9);
    sub_B16FFC(&StringLiteral_21892/*"servantcharactergraphexopen.dat"*/, v10);
    sub_B16FFC(&StringLiteral_22797/*"unconfirmedpayment.dat"*/, v11);
    sub_B16FFC(&StringLiteral_22992/*"userservantlocksave.dat"*/, v12);
    sub_B16FFC(&StringLiteral_23155/*"warboardmoviehistorysave.dat"*/, v13);
    sub_B16FFC(&StringLiteral_16470/*"authsave2.dat"*/, v14);
    sub_B16FFC(&StringLiteral_20346/*"materialbranchroutesave.dat"*/, v15);
    sub_B16FFC(&StringLiteral_21356/*"paymentsave.dat"*/, v16);
    sub_B16FFC(&StringLiteral_21894/*"servantprofilelimitcount.dat"*/, v17);
    sub_B16FFC(&StringLiteral_22983/*"usercommandcodenewsave.dat"*/, v18);
    sub_B16FFC(&StringLiteral_21900/*"serversave.dat"*/, v19);
    sub_B16FFC(&StringLiteral_22989/*"userservantcollectionsave.dat"*/, v20);
    sub_B16FFC(&StringLiteral_21498/*"purchasebybankrequestsave.dat"*/, v21);
    sub_B16FFC(&StringLiteral_16615/*"battleusecontinuerequestsave.dat"*/, v22);
    sub_B16FFC(&StringLiteral_20347/*"materialgroupclearhistorysave.dat"*/, v23);
    sub_B16FFC(&StringLiteral_21893/*"servantprofileeventjoin.dat"*/, v24);
    sub_B16FFC(&StringLiteral_20309/*"masterDataList.dat"*/, v25);
    sub_B16FFC(&StringLiteral_16469/*"authsave.dat"*/, v26);
    sub_B16FFC(&StringLiteral_16614/*"battleusecontinueitemrequestsave.dat"*/, v27);
    sub_B16FFC(&StringLiteral_22988/*"usermissionprogsave_{0}_{1}.dat"*/, v28);
    sub_B16FFC(&StringLiteral_22609/*"tipsarchivestatesave_{0}.dat"*/, v29);
    sub_B16FFC(&StringLiteral_22993/*"userservantnewsave.dat"*/, v30);
    sub_B16FFC(&StringLiteral_22987/*"usermissionprogsave_{0}.dat"*/, v31);
    sub_B16FFC(&StringLiteral_22982/*"usercommandcodecollectionsave.dat"*/, v32);
    sub_B16FFC(&StringLiteral_22984/*"userequiplvsave.dat"*/, v33);
    sub_B16FFC(&StringLiteral_21238/*"otherusernewsave.dat"*/, v34);
    sub_B16FFC(&StringLiteral_20103/*"lastuseddecknumbersave.dat"*/, v35);
    sub_B16FFC(&StringLiteral_23153/*"warboardcontinue.dat"*/, v36);
    sub_B16FFC(&StringLiteral_21357/*"payment{0:D20}.dat"*/, v37);
    sub_B16FFC(&StringLiteral_18839/*"friendcodesave.dat"*/, v38);
    sub_B16FFC(&StringLiteral_20307/*"masterData.dat"*/, v39);
    sub_B16FFC(&StringLiteral_21550/*"questhintdialogopensave.dat"*/, v40);
    sub_B16FFC(&StringLiteral_22986/*"usermissionnewsave_{0}.dat"*/, v41);
    sub_B16FFC(&StringLiteral_20308/*"masterDataCheck.dat"*/, v42);
    sub_B16FFC(&StringLiteral_16613/*"battlecommandspellrequestsave.dat"*/, v43);
    sub_B16FFC(&StringLiteral_20348/*"materialservantlimitcountsave.dat"*/, v44);
    sub_B16FFC(&StringLiteral_22991/*"userservantcommentsave.dat"*/, v45);
    sub_B16FFC(&StringLiteral_22037/*"signupsave.dat"*/, v46);
    sub_B16FFC(&StringLiteral_23154/*"warboardmessagehistorysave.dat"*/, v47);
    sub_B16FFC(&StringLiteral_21833/*"scriptsave.dat"*/, v48);
    sub_B16FFC(&StringLiteral_22990/*"userservantcombinevoicesave.dat"*/, v49);
    byte_40FB3FE = 1;
  }
  v50 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo,
                                                                           v1,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v50,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v50 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    0,
    (System_String_o *)StringLiteral_21833/*"scriptsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    1,
    (System_String_o *)StringLiteral_21498/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    2,
    (System_String_o *)StringLiteral_16615/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    3,
    (System_String_o *)StringLiteral_16613/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    4,
    (System_String_o *)StringLiteral_22990/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    5,
    (System_String_o *)StringLiteral_22993/*"userservantnewsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    6,
    (System_String_o *)StringLiteral_22992/*"userservantlocksave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    7,
    (System_String_o *)StringLiteral_22989/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    8,
    (System_String_o *)StringLiteral_22984/*"userequiplvsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    9,
    (System_String_o *)StringLiteral_22983/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    10,
    (System_String_o *)StringLiteral_22982/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    11,
    (System_String_o *)StringLiteral_22991/*"userservantcommentsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    12,
    (System_String_o *)StringLiteral_21238/*"otherusernewsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    13,
    (System_String_o *)StringLiteral_20308/*"masterDataCheck.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    14,
    (System_String_o *)StringLiteral_20309/*"masterDataList.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    15,
    (System_String_o *)StringLiteral_20307/*"masterData.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    16,
    (System_String_o *)StringLiteral_16469/*"authsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    17,
    (System_String_o *)StringLiteral_16470/*"authsave2.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    18,
    (System_String_o *)StringLiteral_22037/*"signupsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    19,
    (System_String_o *)StringLiteral_21900/*"serversave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    20,
    (System_String_o *)StringLiteral_18839/*"friendcodesave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    21,
    (System_String_o *)StringLiteral_21356/*"paymentsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    22,
    (System_String_o *)StringLiteral_21357/*"payment{0:D20}.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    23,
    (System_String_o *)StringLiteral_22987/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    24,
    (System_String_o *)StringLiteral_22988/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    25,
    (System_String_o *)StringLiteral_22986/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    26,
    (System_String_o *)StringLiteral_20348/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    27,
    (System_String_o *)StringLiteral_21894/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    28,
    (System_String_o *)StringLiteral_21893/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    29,
    (System_String_o *)StringLiteral_16614/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    30,
    (System_String_o *)StringLiteral_16616/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    31,
    (System_String_o *)StringLiteral_22797/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    32,
    (System_String_o *)StringLiteral_21892/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    33,
    (System_String_o *)StringLiteral_21550/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    34,
    (System_String_o *)StringLiteral_20103/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    35,
    (System_String_o *)StringLiteral_20346/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    36,
    (System_String_o *)StringLiteral_17400/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    37,
    (System_String_o *)StringLiteral_20347/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    38,
    (System_String_o *)StringLiteral_23154/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    39,
    (System_String_o *)StringLiteral_23155/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    40,
    (System_String_o *)StringLiteral_22609/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v50,
    41,
    (System_String_o *)StringLiteral_23153/*"warboardcontinue.dat"*/,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  static_fields = (BattleServantConfConponent_o *)DatFileName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v50;
  sub_B16F98(static_fields, (System_Int32_array **)v50, v52, v53, v54, v55, v56, v57);
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v10; // x0
  System_String_o *Item; // x19

  if ( (byte_40FB3F9 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, method);
    sub_B16FFC(&DatFileName_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FB3F9 = 1;
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
          (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
  v10 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v9->static_fields->filelist;
  if ( !v10 )
LABEL_18:
    sub_B170D4();
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           v10,
           name,
           (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v9; // x0

  if ( (byte_40FB3FD & 1) == 0 )
  {
    sub_B16FFC(&DatFileName_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40FB3FD = 1;
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
         (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v8 = DatFileName_TypeInfo;
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v8 = DatFileName_TypeInfo;
    }
    v9 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v8->static_fields->filelist;
    if ( v9 )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               v9,
               name,
               (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
    sub_B170D4();
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_27470680(int32_t name, int64_t l, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DatFileName_c *v10; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v12; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v13; // x0
  System_String_o *Item; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x19
  int64_t v18; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB3FA & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, l);
    sub_B16FFC(&DatFileName_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40FB3FA = 1;
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
          (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
  v13 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v12->static_fields->filelist;
  if ( !v13 )
LABEL_18:
    sub_B170D4();
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           v13,
           name,
           (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  v18 = l;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
  v16 = System_String__Format(Item, v15, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DatFileName__getFileName_27471060(
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v15; // x0
  System_String_o *Item; // x21
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x19
  int32_t v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FB3FB & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, *(_QWORD *)&i1);
    sub_B16FFC(&DatFileName_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40FB3FB = 1;
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
          (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
  v15 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v14->static_fields->filelist;
  if ( !v15 )
LABEL_18:
    sub_B170D4();
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           v15,
           name,
           (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  v22 = i1;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v21 = i2;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v19 = System_String__Format_43739268(Item, v17, v18, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v19, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_27471476(
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v14; // x0
  System_String_o *Item; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x19

  if ( (byte_40FB3FC & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, str1);
    sub_B16FFC(&DatFileName_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40FB3FC = 1;
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
         (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v13 = DatFileName_TypeInfo;
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v13 = DatFileName_TypeInfo;
    }
    v14 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v13->static_fields->filelist;
    if ( v14 )
    {
      Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               v14,
               name,
               (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_14;
    }
LABEL_21:
    sub_B170D4();
  }
  Item = (System_String_o *)StringLiteral_1/*""*/;
LABEL_14:
  if ( str2 )
    v16 = System_String__Format_43739268(Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v16 = System_String__Format(Item, (Il2CppObject *)str1, 0LL);
  v17 = v16;
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v17, 0LL);
}