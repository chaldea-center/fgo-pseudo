void DatFileName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B703 & 1) == 0 )
  {
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
    sub_1C94098(&StringLiteral_18100/*"clearrandommissionsave.dat"*/);
    sub_1C94098(&StringLiteral_17200/*"battleuseitemrequestsave.dat"*/);
    sub_1C94098(&StringLiteral_23530/*"servantcharactergraphexopen.dat"*/);
    sub_1C94098(&StringLiteral_24539/*"unconfirmedpayment.dat"*/);
    sub_1C94098(&StringLiteral_24851/*"userservantlocksave.dat"*/);
    sub_1C94098(&StringLiteral_23130/*"questphasehintdialogopensave.dat"*/);
    sub_1C94098(&StringLiteral_25033/*"warboardmoviehistorysave.dat"*/);
    sub_1C94098(&StringLiteral_17030/*"authsave2.dat"*/);
    sub_1C94098(&StringLiteral_21692/*"materialbranchroutesave.dat"*/);
    sub_1C94098(&StringLiteral_22886/*"paymentsave.dat"*/);
    sub_1C94098(&StringLiteral_23532/*"servantprofilelimitcount.dat"*/);
    sub_1C94098(&StringLiteral_24842/*"usercommandcodenewsave.dat"*/);
    sub_1C94098(&StringLiteral_23122/*"questfocusstatesave.dat"*/);
    sub_1C94098(&StringLiteral_23536/*"serversave.dat"*/);
    sub_1C94098(&StringLiteral_24848/*"userservantcollectionsave.dat"*/);
    sub_1C94098(&StringLiteral_23058/*"purchasebybankrequestsave.dat"*/);
    sub_1C94098(&StringLiteral_17199/*"battleusecontinuerequestsave.dat"*/);
    sub_1C94098(&StringLiteral_21693/*"materialgroupclearhistorysave.dat"*/);
    sub_1C94098(&StringLiteral_23531/*"servantprofileeventjoin.dat"*/);
    sub_1C94098(&StringLiteral_21653/*"masterDataList.dat"*/);
    sub_1C94098(&StringLiteral_17029/*"authsave.dat"*/);
    sub_1C94098(&StringLiteral_17198/*"battleusecontinueitemrequestsave.dat"*/);
    sub_1C94098(&StringLiteral_24847/*"usermissionprogsave_{0}_{1}.dat"*/);
    sub_1C94098(&StringLiteral_24336/*"tipsarchivestatesave_{0}.dat"*/);
    sub_1C94098(&StringLiteral_24852/*"userservantnewsave.dat"*/);
    sub_1C94098(&StringLiteral_24846/*"usermissionprogsave_{0}.dat"*/);
    sub_1C94098(&StringLiteral_24841/*"usercommandcodecollectionsave.dat"*/);
    sub_1C94098(&StringLiteral_24843/*"userequiplvsave.dat"*/);
    sub_1C94098(&StringLiteral_22714/*"otherusernewsave.dat"*/);
    sub_1C94098(&StringLiteral_21372/*"lastuseddecknumbersave.dat"*/);
    sub_1C94098(&StringLiteral_25031/*"warboardcontinue.dat"*/);
    sub_1C94098(&StringLiteral_22887/*"payment{0:D20}.dat"*/);
    sub_1C94098(&StringLiteral_19850/*"friendcodesave.dat"*/);
    sub_1C94098(&StringLiteral_21651/*"masterData.dat"*/);
    sub_1C94098(&StringLiteral_23123/*"questhintdialogopensave.dat"*/);
    sub_1C94098(&StringLiteral_24845/*"usermissionnewsave_{0}.dat"*/);
    sub_1C94098(&StringLiteral_21652/*"masterDataCheck.dat"*/);
    sub_1C94098(&StringLiteral_17195/*"battlecommandspellrequestsave.dat"*/);
    sub_1C94098(&StringLiteral_21694/*"materialservantlimitcountsave.dat"*/);
    sub_1C94098(&StringLiteral_24850/*"userservantcommentsave.dat"*/);
    sub_1C94098(&StringLiteral_23727/*"signupsave.dat"*/);
    sub_1C94098(&StringLiteral_25032/*"warboardmessagehistorysave.dat"*/);
    sub_1C94098(&StringLiteral_23449/*"scriptsave.dat"*/);
    sub_1C94098(&StringLiteral_24849/*"userservantcombinevoicesave.dat"*/);
    byte_4D2B703 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34EA2E0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v1 )
    sub_1C942F0(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_23449/*"scriptsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23058/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_17199/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_17195/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_24849/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_24852/*"userservantnewsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_24851/*"userservantlocksave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_24848/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_24843/*"userequiplvsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_24842/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_24841/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_24850/*"userservantcommentsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22714/*"otherusernewsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_21652/*"masterDataCheck.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_21653/*"masterDataList.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_21651/*"masterData.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_17029/*"authsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_17030/*"authsave2.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23727/*"signupsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_23536/*"serversave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_19850/*"friendcodesave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22886/*"paymentsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22887/*"payment{0:D20}.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_24846/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_24847/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_24845/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_21694/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_23532/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_23531/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_17198/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_17200/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_24539/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_23530/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_23123/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_21372/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_21692/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_18100/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_21693/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_25032/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_25033/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_24336/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_25031/*"warboardcontinue.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_23122/*"questfocusstatesave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_23130/*"questphasehintdialogopensave.dat"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v1;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)DatFileName_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
}


void DatFileName___ctor(DatFileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DatFileName__getFileName(int32_t name, const MethodInfo *method)
{
  DatFileName_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v5; // x0
  Il2CppObject *Item; // x19

  if ( (byte_4D2B6FE & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B6FE = 1;
  }
  v3 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v3 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_34EAEA8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v5 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v5 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_34EAC14 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C942F0(filelist, method);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed((System_String_o *)Item, 0);
}


System_String_o *DatFileName__getFileNameNotConverted(int32_t name, const MethodInfo *method)
{
  DatFileName_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v5; // x0

  if ( (byte_4D2B702 & 1) == 0 )
  {
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B702 = 1;
  }
  v3 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v3 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->filelist;
  if ( !filelist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_34EAEA8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v5 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v5 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->filelist;
    if ( filelist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  filelist,
                                  name,
                                  (const MethodInfo_34EAC14 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_1C942F0(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DatFileName__getFileName_41168876(int32_t name, int64_t l, const MethodInfo *method)
{
  DatFileName_c *v5; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v7; // x0
  Il2CppObject *Item; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x19
  int64_t v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2B6FF & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B6FF = 1;
  }
  v5 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v5 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_34EAEA8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v7 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v7 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_34EAC14 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C942F0(filelist, l);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v12 = l;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v12);
  v10 = System_String__Format((System_String_o *)Item, v9, 0);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v10, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DatFileName__getFileName_41169228(int32_t name, int32_t i1, int32_t i2, const MethodInfo *method)
{
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v9; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x19
  int32_t v15; // [xsp+8h] [xbp-38h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2B700 & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B700 = 1;
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
         (const MethodInfo_34EAEA8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_34EAC14 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C942F0(filelist, *(_QWORD *)&i1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v16 = i1;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v15 = i2;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13 = System_String__Format_64459052((System_String_o *)Item, v11, v12, 0);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v13, 0);
}


System_String_o *DatFileName__getFileName_41169616(
        int32_t name,
        System_String_o *str1,
        System_String_o *str2,
        const MethodInfo *method)
{
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v9; // x0
  Il2CppObject *Item; // x0
  System_String_o *v11; // x0
  System_String_o *v12; // x19

  if ( (byte_4D2B701 & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B701 = 1;
  }
  v7 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v7 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->filelist;
  if ( !filelist )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_34EAEA8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_34EAC14 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_1C942F0(filelist, str1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v11 = System_String__Format_64459052((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0);
  else
    v11 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0);
  v12 = v11;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v12, 0);
}