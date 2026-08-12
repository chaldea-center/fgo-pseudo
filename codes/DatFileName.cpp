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

  if ( (byte_596F67D & 1) == 0 )
  {
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
    sub_2213A60(&StringLiteral_18802/*"clearrandommissionsave.dat"*/);
    sub_2213A60(&StringLiteral_17852/*"battleuseitemrequestsave.dat"*/);
    sub_2213A60(&StringLiteral_24531/*"servantcharactergraphexopen.dat"*/);
    sub_2213A60(&StringLiteral_25612/*"unconfirmedpayment.dat"*/);
    sub_2213A60(&StringLiteral_25960/*"userservantlocksave.dat"*/);
    sub_2213A60(&StringLiteral_24097/*"questphasehintdialogopensave.dat"*/);
    sub_2213A60(&StringLiteral_26153/*"warboardmoviehistorysave.dat"*/);
    sub_2213A60(&StringLiteral_17667/*"authsave2.dat"*/);
    sub_2213A60(&StringLiteral_22582/*"materialbranchroutesave.dat"*/);
    sub_2213A60(&StringLiteral_23835/*"paymentsave.dat"*/);
    sub_2213A60(&StringLiteral_24533/*"servantprofilelimitcount.dat"*/);
    sub_2213A60(&StringLiteral_25951/*"usercommandcodenewsave.dat"*/);
    sub_2213A60(&StringLiteral_24089/*"questfocusstatesave.dat"*/);
    sub_2213A60(&StringLiteral_24537/*"serversave.dat"*/);
    sub_2213A60(&StringLiteral_25957/*"userservantcollectionsave.dat"*/);
    sub_2213A60(&StringLiteral_24023/*"purchasebybankrequestsave.dat"*/);
    sub_2213A60(&StringLiteral_17851/*"battleusecontinuerequestsave.dat"*/);
    sub_2213A60(&StringLiteral_22583/*"materialgroupclearhistorysave.dat"*/);
    sub_2213A60(&StringLiteral_24532/*"servantprofileeventjoin.dat"*/);
    sub_2213A60(&StringLiteral_22542/*"masterDataList.dat"*/);
    sub_2213A60(&StringLiteral_17666/*"authsave.dat"*/);
    sub_2213A60(&StringLiteral_17850/*"battleusecontinueitemrequestsave.dat"*/);
    sub_2213A60(&StringLiteral_25956/*"usermissionprogsave_{0}_{1}.dat"*/);
    sub_2213A60(&StringLiteral_25392/*"tipsarchivestatesave_{0}.dat"*/);
    sub_2213A60(&StringLiteral_25961/*"userservantnewsave.dat"*/);
    sub_2213A60(&StringLiteral_25955/*"usermissionprogsave_{0}.dat"*/);
    sub_2213A60(&StringLiteral_25950/*"usercommandcodecollectionsave.dat"*/);
    sub_2213A60(&StringLiteral_25952/*"userequiplvsave.dat"*/);
    sub_2213A60(&StringLiteral_23638/*"otherusernewsave.dat"*/);
    sub_2213A60(&StringLiteral_22239/*"lastuseddecknumbersave.dat"*/);
    sub_2213A60(&StringLiteral_26151/*"warboardcontinue.dat"*/);
    sub_2213A60(&StringLiteral_23836/*"payment{0:D20}.dat"*/);
    sub_2213A60(&StringLiteral_20619/*"friendcodesave.dat"*/);
    sub_2213A60(&StringLiteral_22540/*"masterData.dat"*/);
    sub_2213A60(&StringLiteral_24090/*"questhintdialogopensave.dat"*/);
    sub_2213A60(&StringLiteral_25954/*"usermissionnewsave_{0}.dat"*/);
    sub_2213A60(&StringLiteral_22541/*"masterDataCheck.dat"*/);
    sub_2213A60(&StringLiteral_17847/*"battlecommandspellrequestsave.dat"*/);
    sub_2213A60(&StringLiteral_22584/*"materialservantlimitcountsave.dat"*/);
    sub_2213A60(&StringLiteral_25959/*"userservantcommentsave.dat"*/);
    sub_2213A60(&StringLiteral_24740/*"signupsave.dat"*/);
    sub_2213A60(&StringLiteral_26152/*"warboardmessagehistorysave.dat"*/);
    sub_2213A60(&StringLiteral_24432/*"scriptsave.dat"*/);
    sub_2213A60(&StringLiteral_25958/*"userservantcombinevoicesave.dat"*/);
    byte_596F67D = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v1 )
    sub_2213CDC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_24432/*"scriptsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_24023/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_17851/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_17847/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_25958/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_25961/*"userservantnewsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_25960/*"userservantlocksave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_25957/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_25952/*"userequiplvsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_25951/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_25950/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_25959/*"userservantcommentsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23638/*"otherusernewsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_22541/*"masterDataCheck.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_22542/*"masterDataList.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_22540/*"masterData.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_17666/*"authsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_17667/*"authsave2.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_24740/*"signupsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_24537/*"serversave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_20619/*"friendcodesave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_23835/*"paymentsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_23836/*"payment{0:D20}.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_25955/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_25956/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_25954/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_22584/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_24533/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_24532/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_17850/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_17852/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_25612/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_24531/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_24090/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_22239/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_22582/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_18802/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_22583/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_26152/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_26153/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_25392/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_26151/*"warboardcontinue.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_24089/*"questfocusstatesave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_24097/*"questphasehintdialogopensave.dat"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v1;
  sub_2213A04(
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

  if ( (byte_596F678 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F678 = 1;
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
         (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_2213CDC(filelist, method);
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

  if ( (byte_596F67C & 1) == 0 )
  {
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F67C = 1;
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
         (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
                                  (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_2213CDC(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DatFileName__getFileName_47383004(int32_t name, int64_t l, const MethodInfo *method)
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

  if ( (byte_596F679 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F679 = 1;
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
         (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_2213CDC(filelist, l);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v15 = l;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v15);
  v13 = System_String__Format((System_String_o *)Item, v10, 0);
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v11, v12);
  return AndroidUtil__ConvertFileNameIfNeed(v13, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DatFileName__getFileName_47383344(int32_t name, int32_t i1, int32_t i2, const MethodInfo *method)
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

  if ( (byte_596F67A & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F67A = 1;
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
         (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_2213CDC(filelist, *(_QWORD *)&i1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v19 = i1;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
  v18 = i2;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v18);
  v16 = System_String__Format_75697880((System_String_o *)Item, v12, v13, 0);
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v14, v15);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0);
}


System_String_o *DatFileName__getFileName_47383720(
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

  if ( (byte_596F67B & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F67B = 1;
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
         (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_2213CDC(filelist, str1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v12 = System_String__Format_75697880((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0);
  else
    v12 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0);
  v15 = v12;
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v13, v14);
  return AndroidUtil__ConvertFileNameIfNeed(v15, 0);
}