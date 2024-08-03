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
  __int64 v48; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v49; // x19
  __int64 v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3

  if ( (byte_49FB414 & 1) == 0 )
  {
    sub_1B640C8(&DatFileName_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_17939/*"clearrandommissionsave.dat"*/, v6);
    sub_1B640C8(&StringLiteral_17080/*"battleuseitemrequestsave.dat"*/, v7);
    sub_1B640C8(&StringLiteral_23027/*"servantcharactergraphexopen.dat"*/, v8);
    sub_1B640C8(&StringLiteral_24064/*"unconfirmedpayment.dat"*/, v9);
    sub_1B640C8(&StringLiteral_24373/*"userservantlocksave.dat"*/, v10);
    sub_1B640C8(&StringLiteral_24562/*"warboardmoviehistorysave.dat"*/, v11);
    sub_1B640C8(&StringLiteral_16911/*"authsave2.dat"*/, v12);
    sub_1B640C8(&StringLiteral_21254/*"materialbranchroutesave.dat"*/, v13);
    sub_1B640C8(&StringLiteral_22405/*"paymentsave.dat"*/, v14);
    sub_1B640C8(&StringLiteral_23029/*"servantprofilelimitcount.dat"*/, v15);
    sub_1B640C8(&StringLiteral_24364/*"usercommandcodenewsave.dat"*/, v16);
    sub_1B640C8(&StringLiteral_22628/*"questfocusstatesave.dat"*/, v17);
    sub_1B640C8(&StringLiteral_23033/*"serversave.dat"*/, v18);
    sub_1B640C8(&StringLiteral_24370/*"userservantcollectionsave.dat"*/, v19);
    sub_1B640C8(&StringLiteral_22570/*"purchasebybankrequestsave.dat"*/, v20);
    sub_1B640C8(&StringLiteral_17079/*"battleusecontinuerequestsave.dat"*/, v21);
    sub_1B640C8(&StringLiteral_21255/*"materialgroupclearhistorysave.dat"*/, v22);
    sub_1B640C8(&StringLiteral_23028/*"servantprofileeventjoin.dat"*/, v23);
    sub_1B640C8(&StringLiteral_21215/*"masterDataList.dat"*/, v24);
    sub_1B640C8(&StringLiteral_16910/*"authsave.dat"*/, v25);
    sub_1B640C8(&StringLiteral_17078/*"battleusecontinueitemrequestsave.dat"*/, v26);
    sub_1B640C8(&StringLiteral_24369/*"usermissionprogsave_{0}_{1}.dat"*/, v27);
    sub_1B640C8(&StringLiteral_23857/*"tipsarchivestatesave_{0}.dat"*/, v28);
    sub_1B640C8(&StringLiteral_24374/*"userservantnewsave.dat"*/, v29);
    sub_1B640C8(&StringLiteral_24368/*"usermissionprogsave_{0}.dat"*/, v30);
    sub_1B640C8(&StringLiteral_24363/*"usercommandcodecollectionsave.dat"*/, v31);
    sub_1B640C8(&StringLiteral_24365/*"userequiplvsave.dat"*/, v32);
    sub_1B640C8(&StringLiteral_22259/*"otherusernewsave.dat"*/, v33);
    sub_1B640C8(&StringLiteral_20962/*"lastuseddecknumbersave.dat"*/, v34);
    sub_1B640C8(&StringLiteral_24560/*"warboardcontinue.dat"*/, v35);
    sub_1B640C8(&StringLiteral_22406/*"payment{0:D20}.dat"*/, v36);
    sub_1B640C8(&StringLiteral_19574/*"friendcodesave.dat"*/, v37);
    sub_1B640C8(&StringLiteral_21213/*"masterData.dat"*/, v38);
    sub_1B640C8(&StringLiteral_22629/*"questhintdialogopensave.dat"*/, v39);
    sub_1B640C8(&StringLiteral_24367/*"usermissionnewsave_{0}.dat"*/, v40);
    sub_1B640C8(&StringLiteral_21214/*"masterDataCheck.dat"*/, v41);
    sub_1B640C8(&StringLiteral_17075/*"battlecommandspellrequestsave.dat"*/, v42);
    sub_1B640C8(&StringLiteral_21256/*"materialservantlimitcountsave.dat"*/, v43);
    sub_1B640C8(&StringLiteral_24372/*"userservantcommentsave.dat"*/, v44);
    sub_1B640C8(&StringLiteral_23227/*"signupsave.dat"*/, v45);
    sub_1B640C8(&StringLiteral_24561/*"warboardmessagehistorysave.dat"*/, v46);
    sub_1B640C8(&StringLiteral_22952/*"scriptsave.dat"*/, v47);
    sub_1B640C8(&StringLiteral_24371/*"userservantcombinevoicesave.dat"*/, v48);
    byte_49FB414 = 1;
  }
  v49 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo,
                                                                   v1,
                                                                   v2);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v49,
    (const MethodInfo_3151E6C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v49 )
    sub_1B64324(v50);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    0,
    (Il2CppObject *)StringLiteral_22952/*"scriptsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    1,
    (Il2CppObject *)StringLiteral_22570/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    2,
    (Il2CppObject *)StringLiteral_17079/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    3,
    (Il2CppObject *)StringLiteral_17075/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    4,
    (Il2CppObject *)StringLiteral_24371/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    5,
    (Il2CppObject *)StringLiteral_24374/*"userservantnewsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    6,
    (Il2CppObject *)StringLiteral_24373/*"userservantlocksave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    7,
    (Il2CppObject *)StringLiteral_24370/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    8,
    (Il2CppObject *)StringLiteral_24365/*"userequiplvsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    9,
    (Il2CppObject *)StringLiteral_24364/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    10,
    (Il2CppObject *)StringLiteral_24363/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    11,
    (Il2CppObject *)StringLiteral_24372/*"userservantcommentsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    12,
    (Il2CppObject *)StringLiteral_22259/*"otherusernewsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    13,
    (Il2CppObject *)StringLiteral_21214/*"masterDataCheck.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    14,
    (Il2CppObject *)StringLiteral_21215/*"masterDataList.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    15,
    (Il2CppObject *)StringLiteral_21213/*"masterData.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    16,
    (Il2CppObject *)StringLiteral_16910/*"authsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    17,
    (Il2CppObject *)StringLiteral_16911/*"authsave2.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    18,
    (Il2CppObject *)StringLiteral_23227/*"signupsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    19,
    (Il2CppObject *)StringLiteral_23033/*"serversave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    20,
    (Il2CppObject *)StringLiteral_19574/*"friendcodesave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    21,
    (Il2CppObject *)StringLiteral_22405/*"paymentsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    22,
    (Il2CppObject *)StringLiteral_22406/*"payment{0:D20}.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    23,
    (Il2CppObject *)StringLiteral_24368/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    24,
    (Il2CppObject *)StringLiteral_24369/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    25,
    (Il2CppObject *)StringLiteral_24367/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    26,
    (Il2CppObject *)StringLiteral_21256/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    27,
    (Il2CppObject *)StringLiteral_23029/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    28,
    (Il2CppObject *)StringLiteral_23028/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    29,
    (Il2CppObject *)StringLiteral_17078/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    30,
    (Il2CppObject *)StringLiteral_17080/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    31,
    (Il2CppObject *)StringLiteral_24064/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    32,
    (Il2CppObject *)StringLiteral_23027/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    33,
    (Il2CppObject *)StringLiteral_22629/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    34,
    (Il2CppObject *)StringLiteral_20962/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    35,
    (Il2CppObject *)StringLiteral_21254/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    36,
    (Il2CppObject *)StringLiteral_17939/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    37,
    (Il2CppObject *)StringLiteral_21255/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    38,
    (Il2CppObject *)StringLiteral_24561/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    39,
    (Il2CppObject *)StringLiteral_24562/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    40,
    (Il2CppObject *)StringLiteral_23857/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    41,
    (Il2CppObject *)StringLiteral_24560/*"warboardcontinue.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    42,
    (Il2CppObject *)StringLiteral_22628/*"questfocusstatesave.dat"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v49;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)DatFileName_TypeInfo->static_fields, (int32_t)v49, v51, v52);
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

  if ( (byte_49FB40F & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, method);
    sub_1B640C8(&DatFileName_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FB40F = 1;
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
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1B64324(filelist);
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

  if ( (byte_49FB413 & 1) == 0 )
  {
    sub_1B640C8(&DatFileName_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FB413 = 1;
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
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
                                  (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_1B64324(filelist);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_37369944(int32_t name, int64_t l, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DatFileName_c *v10; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v12; // x0
  Il2CppObject *Item; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x19
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FB410 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, l);
    sub_1B640C8(&DatFileName_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49FB410 = 1;
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
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v12 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v12 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v12->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1B64324(filelist);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v17 = l;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
  v15 = System_String__Format((System_String_o *)Item, v14, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DatFileName__getFileName_37370296(
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
  DatFileName_c *v14; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x19
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB411 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, *(_QWORD *)&i1);
    sub_1B640C8(&DatFileName_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49FB411 = 1;
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
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v14 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v14 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v14->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1B64324(filelist);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v21 = i1;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v20 = i2;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v18 = System_String__Format_61389768((System_String_o *)Item, v16, v17, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v18, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_37370684(
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

  if ( (byte_49FB412 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, str1);
    sub_1B640C8(&DatFileName_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49FB412 = 1;
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
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_1B64324(filelist);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v15 = System_String__Format_61389768((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v15 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0LL);
  v16 = v15;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0LL);
}