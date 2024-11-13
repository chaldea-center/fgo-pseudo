void __fastcall DatFileName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x1
  __int64 v97; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v98; // x19
  __int64 v99; // x0
  __int64 v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7

  if ( (byte_4B151A6 & 1) == 0 )
  {
    sub_1BCA7E0(&DatFileName_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_18191/*"clearrandommissionsave.dat"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17320/*"battleuseitemrequestsave.dat"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_23367/*"servantcharactergraphexopen.dat"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24415/*"unconfirmedpayment.dat"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_24726/*"userservantlocksave.dat"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22972/*"questphasehintdialogopensave.dat"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_24915/*"warboardmoviehistorysave.dat"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_17151/*"authsave2.dat"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_21570/*"materialbranchroutesave.dat"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_22738/*"paymentsave.dat"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_23369/*"servantprofilelimitcount.dat"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_24717/*"usercommandcodenewsave.dat"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_22964/*"questfocusstatesave.dat"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_23373/*"serversave.dat"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_24723/*"userservantcollectionsave.dat"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_22905/*"purchasebybankrequestsave.dat"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_17319/*"battleusecontinuerequestsave.dat"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_21571/*"materialgroupclearhistorysave.dat"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_23368/*"servantprofileeventjoin.dat"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_21531/*"masterDataList.dat"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_17150/*"authsave.dat"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_17318/*"battleusecontinueitemrequestsave.dat"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_24722/*"usermissionprogsave_{0}_{1}.dat"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_24206/*"tipsarchivestatesave_{0}.dat"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_24727/*"userservantnewsave.dat"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_24721/*"usermissionprogsave_{0}.dat"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_24716/*"usercommandcodecollectionsave.dat"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_24718/*"userequiplvsave.dat"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_22587/*"otherusernewsave.dat"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_21270/*"lastuseddecknumbersave.dat"*/, v68, v69);
    sub_1BCA7E0(&StringLiteral_24913/*"warboardcontinue.dat"*/, v70, v71);
    sub_1BCA7E0(&StringLiteral_22739/*"payment{0:D20}.dat"*/, v72, v73);
    sub_1BCA7E0(&StringLiteral_19855/*"friendcodesave.dat"*/, v74, v75);
    sub_1BCA7E0(&StringLiteral_21529/*"masterData.dat"*/, v76, v77);
    sub_1BCA7E0(&StringLiteral_22965/*"questhintdialogopensave.dat"*/, v78, v79);
    sub_1BCA7E0(&StringLiteral_24720/*"usermissionnewsave_{0}.dat"*/, v80, v81);
    sub_1BCA7E0(&StringLiteral_21530/*"masterDataCheck.dat"*/, v82, v83);
    sub_1BCA7E0(&StringLiteral_17315/*"battlecommandspellrequestsave.dat"*/, v84, v85);
    sub_1BCA7E0(&StringLiteral_21572/*"materialservantlimitcountsave.dat"*/, v86, v87);
    sub_1BCA7E0(&StringLiteral_24725/*"userservantcommentsave.dat"*/, v88, v89);
    sub_1BCA7E0(&StringLiteral_23573/*"signupsave.dat"*/, v90, v91);
    sub_1BCA7E0(&StringLiteral_24914/*"warboardmessagehistorysave.dat"*/, v92, v93);
    sub_1BCA7E0(&StringLiteral_23292/*"scriptsave.dat"*/, v94, v95);
    sub_1BCA7E0(&StringLiteral_24724/*"userservantcombinevoicesave.dat"*/, v96, v97);
    byte_4B151A6 = 1;
  }
  v98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo,
                                                                   v1,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v98,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v98 )
    sub_1BCAA3C(v99, v100);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    0,
    (Il2CppObject *)StringLiteral_23292/*"scriptsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    1,
    (Il2CppObject *)StringLiteral_22905/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    2,
    (Il2CppObject *)StringLiteral_17319/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    3,
    (Il2CppObject *)StringLiteral_17315/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    4,
    (Il2CppObject *)StringLiteral_24724/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    5,
    (Il2CppObject *)StringLiteral_24727/*"userservantnewsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    6,
    (Il2CppObject *)StringLiteral_24726/*"userservantlocksave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    7,
    (Il2CppObject *)StringLiteral_24723/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    8,
    (Il2CppObject *)StringLiteral_24718/*"userequiplvsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    9,
    (Il2CppObject *)StringLiteral_24717/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    10,
    (Il2CppObject *)StringLiteral_24716/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    11,
    (Il2CppObject *)StringLiteral_24725/*"userservantcommentsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    12,
    (Il2CppObject *)StringLiteral_22587/*"otherusernewsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    13,
    (Il2CppObject *)StringLiteral_21530/*"masterDataCheck.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    14,
    (Il2CppObject *)StringLiteral_21531/*"masterDataList.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    15,
    (Il2CppObject *)StringLiteral_21529/*"masterData.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    16,
    (Il2CppObject *)StringLiteral_17150/*"authsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    17,
    (Il2CppObject *)StringLiteral_17151/*"authsave2.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    18,
    (Il2CppObject *)StringLiteral_23573/*"signupsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    19,
    (Il2CppObject *)StringLiteral_23373/*"serversave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    20,
    (Il2CppObject *)StringLiteral_19855/*"friendcodesave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    21,
    (Il2CppObject *)StringLiteral_22738/*"paymentsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    22,
    (Il2CppObject *)StringLiteral_22739/*"payment{0:D20}.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    23,
    (Il2CppObject *)StringLiteral_24721/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    24,
    (Il2CppObject *)StringLiteral_24722/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    25,
    (Il2CppObject *)StringLiteral_24720/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    26,
    (Il2CppObject *)StringLiteral_21572/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    27,
    (Il2CppObject *)StringLiteral_23369/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    28,
    (Il2CppObject *)StringLiteral_23368/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    29,
    (Il2CppObject *)StringLiteral_17318/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    30,
    (Il2CppObject *)StringLiteral_17320/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    31,
    (Il2CppObject *)StringLiteral_24415/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    32,
    (Il2CppObject *)StringLiteral_23367/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    33,
    (Il2CppObject *)StringLiteral_22965/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    34,
    (Il2CppObject *)StringLiteral_21270/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    35,
    (Il2CppObject *)StringLiteral_21570/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    36,
    (Il2CppObject *)StringLiteral_18191/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    37,
    (Il2CppObject *)StringLiteral_21571/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    38,
    (Il2CppObject *)StringLiteral_24914/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    39,
    (Il2CppObject *)StringLiteral_24915/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    40,
    (Il2CppObject *)StringLiteral_24206/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    41,
    (Il2CppObject *)StringLiteral_24913/*"warboardcontinue.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    42,
    (Il2CppObject *)StringLiteral_22964/*"questfocusstatesave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v98,
    43,
    (Il2CppObject *)StringLiteral_22972/*"questphasehintdialogopensave.dat"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v98;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DatFileName_TypeInfo->static_fields,
    (int64_t)v98,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
}


void __fastcall DatFileName___ctor(DatFileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName(int32_t name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DatFileName_c *v12; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v14; // x0
  Il2CppObject *Item; // x19

  if ( (byte_4B151A1 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B151A1 = 1;
  }
  v12 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method);
    v12 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v12->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v14 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method);
      v14 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v14->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1BCAA3C(filelist, method);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  return AndroidUtil__ConvertFileNameIfNeed((System_String_o *)Item, 0LL);
}


System_String_o *__fastcall DatFileName__getFileNameNotConverted(int32_t name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DatFileName_c *v10; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v12; // x0

  if ( (byte_4B151A5 & 1) == 0 )
  {
    sub_1BCA7E0(&DatFileName_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B151A5 = 1;
  }
  v10 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method);
    v10 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->filelist;
  if ( !filelist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v12 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method);
      v12 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v12->static_fields->filelist;
    if ( filelist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  filelist,
                                  name,
                                  (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_1BCAA3C(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_38395100(int32_t name, int64_t l, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DatFileName_c *v15; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v17; // x0
  Il2CppObject *Item; // x20
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x19
  int64_t v23; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B151A2 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, l, method);
    sub_1BCA7E0(&DatFileName_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9, v10);
    sub_1BCA7E0(&long_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B151A2 = 1;
  }
  v15 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, l);
    v15 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v15->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v17 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, l);
      v17 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v17->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1BCAA3C(filelist, l);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v23 = l;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
  v21 = System_String__Format((System_String_o *)Item, v19, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v20);
  return AndroidUtil__ConvertFileNameIfNeed(v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DatFileName__getFileName_38395452(
        int32_t name,
        int32_t i1,
        int32_t i2,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DatFileName_c *v17; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v19; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v21; // x20
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x19
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B151A3 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, *(_QWORD *)&i1, *(_QWORD *)&i2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B151A3 = 1;
  }
  v17 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, *(_QWORD *)&i1);
    v17 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v17->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v19 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, *(_QWORD *)&i1);
      v19 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v19->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1BCAA3C(filelist, *(_QWORD *)&i1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v27 = i1;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v26 = i2;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v24 = System_String__Format_62415592((System_String_o *)Item, v21, v22, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v23);
  return AndroidUtil__ConvertFileNameIfNeed(v24, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_38395840(
        int32_t name,
        System_String_o *str1,
        System_String_o *str2,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DatFileName_c *v15; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v17; // x0
  Il2CppObject *Item; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x19

  if ( (byte_4B151A4 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, str1, str2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B151A4 = 1;
  }
  v15 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, str1);
    v15 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v15->static_fields->filelist;
  if ( !filelist )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v17 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, str1);
      v17 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v17->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_1BCAA3C(filelist, str1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v19 = System_String__Format_62415592((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v19 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0LL);
  v21 = v19;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v20);
  return AndroidUtil__ConvertFileNameIfNeed(v21, 0LL);
}