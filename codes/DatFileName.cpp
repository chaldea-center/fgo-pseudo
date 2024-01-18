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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v47; // x19
  __int64 v48; // x0
  __int64 v49; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_4189037 & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo, v4);
    sub_B2C35C(&StringLiteral_17466/*"clearrandommissionsave.dat"*/, v5);
    sub_B2C35C(&StringLiteral_16680/*"battleuseitemrequestsave.dat"*/, v6);
    sub_B2C35C(&StringLiteral_21984/*"servantcharactergraphexopen.dat"*/, v7);
    sub_B2C35C(&StringLiteral_22890/*"unconfirmedpayment.dat"*/, v8);
    sub_B2C35C(&StringLiteral_23085/*"userservantlocksave.dat"*/, v9);
    sub_B2C35C(&StringLiteral_23249/*"warboardmoviehistorysave.dat"*/, v10);
    sub_B2C35C(&StringLiteral_16534/*"authsave2.dat"*/, v11);
    sub_B2C35C(&StringLiteral_20429/*"materialbranchroutesave.dat"*/, v12);
    sub_B2C35C(&StringLiteral_21448/*"paymentsave.dat"*/, v13);
    sub_B2C35C(&StringLiteral_21986/*"servantprofilelimitcount.dat"*/, v14);
    sub_B2C35C(&StringLiteral_23076/*"usercommandcodenewsave.dat"*/, v15);
    sub_B2C35C(&StringLiteral_21992/*"serversave.dat"*/, v16);
    sub_B2C35C(&StringLiteral_23082/*"userservantcollectionsave.dat"*/, v17);
    sub_B2C35C(&StringLiteral_21590/*"purchasebybankrequestsave.dat"*/, v18);
    sub_B2C35C(&StringLiteral_16679/*"battleusecontinuerequestsave.dat"*/, v19);
    sub_B2C35C(&StringLiteral_20430/*"materialgroupclearhistorysave.dat"*/, v20);
    sub_B2C35C(&StringLiteral_21985/*"servantprofileeventjoin.dat"*/, v21);
    sub_B2C35C(&StringLiteral_20392/*"masterDataList.dat"*/, v22);
    sub_B2C35C(&StringLiteral_16533/*"authsave.dat"*/, v23);
    sub_B2C35C(&StringLiteral_16678/*"battleusecontinueitemrequestsave.dat"*/, v24);
    sub_B2C35C(&StringLiteral_23081/*"usermissionprogsave_{0}_{1}.dat"*/, v25);
    sub_B2C35C(&StringLiteral_22702/*"tipsarchivestatesave_{0}.dat"*/, v26);
    sub_B2C35C(&StringLiteral_23086/*"userservantnewsave.dat"*/, v27);
    sub_B2C35C(&StringLiteral_23080/*"usermissionprogsave_{0}.dat"*/, v28);
    sub_B2C35C(&StringLiteral_23075/*"usercommandcodecollectionsave.dat"*/, v29);
    sub_B2C35C(&StringLiteral_23077/*"userequiplvsave.dat"*/, v30);
    sub_B2C35C(&StringLiteral_21328/*"otherusernewsave.dat"*/, v31);
    sub_B2C35C(&StringLiteral_20186/*"lastuseddecknumbersave.dat"*/, v32);
    sub_B2C35C(&StringLiteral_23247/*"warboardcontinue.dat"*/, v33);
    sub_B2C35C(&StringLiteral_21449/*"payment{0:D20}.dat"*/, v34);
    sub_B2C35C(&StringLiteral_18911/*"friendcodesave.dat"*/, v35);
    sub_B2C35C(&StringLiteral_20390/*"masterData.dat"*/, v36);
    sub_B2C35C(&StringLiteral_21642/*"questhintdialogopensave.dat"*/, v37);
    sub_B2C35C(&StringLiteral_23079/*"usermissionnewsave_{0}.dat"*/, v38);
    sub_B2C35C(&StringLiteral_20391/*"masterDataCheck.dat"*/, v39);
    sub_B2C35C(&StringLiteral_16677/*"battlecommandspellrequestsave.dat"*/, v40);
    sub_B2C35C(&StringLiteral_20431/*"materialservantlimitcountsave.dat"*/, v41);
    sub_B2C35C(&StringLiteral_23084/*"userservantcommentsave.dat"*/, v42);
    sub_B2C35C(&StringLiteral_22129/*"signupsave.dat"*/, v43);
    sub_B2C35C(&StringLiteral_23248/*"warboardmessagehistorysave.dat"*/, v44);
    sub_B2C35C(&StringLiteral_21925/*"scriptsave.dat"*/, v45);
    sub_B2C35C(&StringLiteral_23083/*"userservantcombinevoicesave.dat"*/, v46);
    byte_4189037 = 1;
  }
  v47 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v47,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v47 )
    sub_B2C434(v48, v49);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    0,
    (System_String_o *)StringLiteral_21925/*"scriptsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    1,
    (System_String_o *)StringLiteral_21590/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    2,
    (System_String_o *)StringLiteral_16679/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    3,
    (System_String_o *)StringLiteral_16677/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    4,
    (System_String_o *)StringLiteral_23083/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    5,
    (System_String_o *)StringLiteral_23086/*"userservantnewsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    6,
    (System_String_o *)StringLiteral_23085/*"userservantlocksave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    7,
    (System_String_o *)StringLiteral_23082/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    8,
    (System_String_o *)StringLiteral_23077/*"userequiplvsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    9,
    (System_String_o *)StringLiteral_23076/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    10,
    (System_String_o *)StringLiteral_23075/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    11,
    (System_String_o *)StringLiteral_23084/*"userservantcommentsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    12,
    (System_String_o *)StringLiteral_21328/*"otherusernewsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    13,
    (System_String_o *)StringLiteral_20391/*"masterDataCheck.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    14,
    (System_String_o *)StringLiteral_20392/*"masterDataList.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    15,
    (System_String_o *)StringLiteral_20390/*"masterData.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    16,
    (System_String_o *)StringLiteral_16533/*"authsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    17,
    (System_String_o *)StringLiteral_16534/*"authsave2.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    18,
    (System_String_o *)StringLiteral_22129/*"signupsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    19,
    (System_String_o *)StringLiteral_21992/*"serversave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    20,
    (System_String_o *)StringLiteral_18911/*"friendcodesave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    21,
    (System_String_o *)StringLiteral_21448/*"paymentsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    22,
    (System_String_o *)StringLiteral_21449/*"payment{0:D20}.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    23,
    (System_String_o *)StringLiteral_23080/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    24,
    (System_String_o *)StringLiteral_23081/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    25,
    (System_String_o *)StringLiteral_23079/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    26,
    (System_String_o *)StringLiteral_20431/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    27,
    (System_String_o *)StringLiteral_21986/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    28,
    (System_String_o *)StringLiteral_21985/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    29,
    (System_String_o *)StringLiteral_16678/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    30,
    (System_String_o *)StringLiteral_16680/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    31,
    (System_String_o *)StringLiteral_22890/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    32,
    (System_String_o *)StringLiteral_21984/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    33,
    (System_String_o *)StringLiteral_21642/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    34,
    (System_String_o *)StringLiteral_20186/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    35,
    (System_String_o *)StringLiteral_20429/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    36,
    (System_String_o *)StringLiteral_17466/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    37,
    (System_String_o *)StringLiteral_20430/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    38,
    (System_String_o *)StringLiteral_23248/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    39,
    (System_String_o *)StringLiteral_23249/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    40,
    (System_String_o *)StringLiteral_22702/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v47,
    41,
    (System_String_o *)StringLiteral_23247/*"warboardcontinue.dat"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  static_fields = (BattleServantConfConponent_o *)DatFileName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v47;
  sub_B2C2F8(static_fields, (System_Int32_array **)v47, v51, v52, v53, v54, v55, v56);
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

  if ( (byte_4189032 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&DatFileName_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4189032 = 1;
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
          (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
    sub_B2C434(filelist, method);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
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

  if ( (byte_4189036 & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4189036 = 1;
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
         (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
    sub_B2C434(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_27462036(int32_t name, int64_t l, const MethodInfo *method)
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

  if ( (byte_4189033 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, l);
    sub_B2C35C(&DatFileName_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4189033 = 1;
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
          (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
    sub_B2C434(filelist, l);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  v17 = l;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
  v15 = System_String__Format(Item, v14, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DatFileName__getFileName_27462416(
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

  if ( (byte_4189034 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, *(_QWORD *)&i1);
    sub_B2C35C(&DatFileName_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_4189034 = 1;
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
          (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
    sub_B2C434(filelist, *(_QWORD *)&i1);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  v21 = i1;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v20 = i2;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v18 = System_String__Format_44301068(Item, v16, v17, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v18, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_27462832(
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

  if ( (byte_4189035 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, str1);
    sub_B2C35C(&DatFileName_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4189035 = 1;
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
         (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_14;
    }
LABEL_21:
    sub_B2C434(filelist, str1);
  }
  Item = (System_String_o *)StringLiteral_1/*""*/;
LABEL_14:
  if ( str2 )
    v15 = System_String__Format_44301068(Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v15 = System_String__Format(Item, (Il2CppObject *)str1, 0LL);
  v16 = v15;
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0LL);
}