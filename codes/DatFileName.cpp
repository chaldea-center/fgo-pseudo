void DatFileName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4C36890 & 1) == 0 )
  {
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
    sub_1C32C20(&StringLiteral_18006/*"clearrandommissionsave.dat"*/);
    sub_1C32C20(&StringLiteral_17116/*"battleuseitemrequestsave.dat"*/);
    sub_1C32C20(&StringLiteral_23289/*"servantcharactergraphexopen.dat"*/);
    sub_1C32C20(&StringLiteral_24291/*"unconfirmedpayment.dat"*/);
    sub_1C32C20(&StringLiteral_24601/*"userservantlocksave.dat"*/);
    sub_1C32C20(&StringLiteral_22901/*"questphasehintdialogopensave.dat"*/);
    sub_1C32C20(&StringLiteral_24776/*"warboardmoviehistorysave.dat"*/);
    sub_1C32C20(&StringLiteral_16949/*"authsave2.dat"*/);
    sub_1C32C20(&StringLiteral_21483/*"materialbranchroutesave.dat"*/);
    sub_1C32C20(&StringLiteral_22665/*"paymentsave.dat"*/);
    sub_1C32C20(&StringLiteral_23291/*"servantprofilelimitcount.dat"*/);
    sub_1C32C20(&StringLiteral_24592/*"usercommandcodenewsave.dat"*/);
    sub_1C32C20(&StringLiteral_22893/*"questfocusstatesave.dat"*/);
    sub_1C32C20(&StringLiteral_23295/*"serversave.dat"*/);
    sub_1C32C20(&StringLiteral_24598/*"userservantcollectionsave.dat"*/);
    sub_1C32C20(&StringLiteral_22829/*"purchasebybankrequestsave.dat"*/);
    sub_1C32C20(&StringLiteral_17115/*"battleusecontinuerequestsave.dat"*/);
    sub_1C32C20(&StringLiteral_21484/*"materialgroupclearhistorysave.dat"*/);
    sub_1C32C20(&StringLiteral_23290/*"servantprofileeventjoin.dat"*/);
    sub_1C32C20(&StringLiteral_21444/*"masterDataList.dat"*/);
    sub_1C32C20(&StringLiteral_16948/*"authsave.dat"*/);
    sub_1C32C20(&StringLiteral_17114/*"battleusecontinueitemrequestsave.dat"*/);
    sub_1C32C20(&StringLiteral_24597/*"usermissionprogsave_{0}_{1}.dat"*/);
    sub_1C32C20(&StringLiteral_24093/*"tipsarchivestatesave_{0}.dat"*/);
    sub_1C32C20(&StringLiteral_24602/*"userservantnewsave.dat"*/);
    sub_1C32C20(&StringLiteral_24596/*"usermissionprogsave_{0}.dat"*/);
    sub_1C32C20(&StringLiteral_24591/*"usercommandcodecollectionsave.dat"*/);
    sub_1C32C20(&StringLiteral_24593/*"userequiplvsave.dat"*/);
    sub_1C32C20(&StringLiteral_22498/*"otherusernewsave.dat"*/);
    sub_1C32C20(&StringLiteral_21172/*"lastuseddecknumbersave.dat"*/);
    sub_1C32C20(&StringLiteral_24774/*"warboardcontinue.dat"*/);
    sub_1C32C20(&StringLiteral_22666/*"payment{0:D20}.dat"*/);
    sub_1C32C20(&StringLiteral_19686/*"friendcodesave.dat"*/);
    sub_1C32C20(&StringLiteral_21442/*"masterData.dat"*/);
    sub_1C32C20(&StringLiteral_22894/*"questhintdialogopensave.dat"*/);
    sub_1C32C20(&StringLiteral_24595/*"usermissionnewsave_{0}.dat"*/);
    sub_1C32C20(&StringLiteral_21443/*"masterDataCheck.dat"*/);
    sub_1C32C20(&StringLiteral_17111/*"battlecommandspellrequestsave.dat"*/);
    sub_1C32C20(&StringLiteral_21485/*"materialservantlimitcountsave.dat"*/);
    sub_1C32C20(&StringLiteral_24600/*"userservantcommentsave.dat"*/);
    sub_1C32C20(&StringLiteral_23496/*"signupsave.dat"*/);
    sub_1C32C20(&StringLiteral_24775/*"warboardmessagehistorysave.dat"*/);
    sub_1C32C20(&StringLiteral_23212/*"scriptsave.dat"*/);
    sub_1C32C20(&StringLiteral_24599/*"userservantcombinevoicesave.dat"*/);
    byte_4C36890 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34223E4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v1 )
    sub_1C32E7C(v2);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_23212/*"scriptsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22829/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_17115/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_17111/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_24599/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_24602/*"userservantnewsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_24601/*"userservantlocksave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_24598/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_24593/*"userequiplvsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_24592/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_24591/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_24600/*"userservantcommentsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22498/*"otherusernewsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_21443/*"masterDataCheck.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_21444/*"masterDataList.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_21442/*"masterData.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_16948/*"authsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_16949/*"authsave2.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23496/*"signupsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_23295/*"serversave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_19686/*"friendcodesave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22665/*"paymentsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22666/*"payment{0:D20}.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_24596/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_24597/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_24595/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_21485/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_23291/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_23290/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_17114/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_17116/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_24291/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_23289/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_22894/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_21172/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_21483/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_18006/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_21484/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_24775/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_24776/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_24093/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_24774/*"warboardcontinue.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_22893/*"questfocusstatesave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_22901/*"questphasehintdialogopensave.dat"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)DatFileName_TypeInfo->static_fields, (int32_t)v1, v3, v4);
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

  if ( (byte_4C3688B & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3688B = 1;
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
         (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C32E7C(filelist);
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

  if ( (byte_4C3688F & 1) == 0 )
  {
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3688F = 1;
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
         (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
                                  (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_1C32E7C(filelist);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DatFileName__getFileName_40321216(int32_t name, int64_t l, const MethodInfo *method)
{
  DatFileName_c *v5; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  DatFileName_c *v13; // x0
  Il2CppObject *Item; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x19
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3688C & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3688C = 1;
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
         (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C32E7C(filelist);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v18 = l;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18, v7, v8, v9, v10, v11, v12);
  v16 = System_String__Format((System_String_o *)Item, v15, 0);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0);
}


System_String_o *DatFileName__getFileName_40321568(int32_t name, int32_t i1, int32_t i2, const MethodInfo *method)
{
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  DatFileName_c *v15; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v17; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  System_String_o *v25; // x19
  int32_t v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3688D & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3688D = 1;
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
         (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C32E7C(filelist);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v28 = i1;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v9, v10, v11, v12, v13, v14);
  v27 = i2;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v18, v19, v20, v21, v22, v23);
  v25 = System_String__Format_63559836((System_String_o *)Item, v17, v24, 0);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v25, 0);
}


System_String_o *DatFileName__getFileName_40321956(
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

  if ( (byte_4C3688E & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3688E = 1;
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
         (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_1C32E7C(filelist);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v11 = System_String__Format_63559836((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0);
  else
    v11 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0);
  v12 = v11;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v12, 0);
}