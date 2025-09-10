void DatFileName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C261B8 & 1) == 0 )
  {
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
    sub_1C2D490(&StringLiteral_18002/*"clearrandommissionsave.dat"*/);
    sub_1C2D490(&StringLiteral_17112/*"battleuseitemrequestsave.dat"*/);
    sub_1C2D490(&StringLiteral_23271/*"servantcharactergraphexopen.dat"*/);
    sub_1C2D490(&StringLiteral_24273/*"unconfirmedpayment.dat"*/);
    sub_1C2D490(&StringLiteral_24583/*"userservantlocksave.dat"*/);
    sub_1C2D490(&StringLiteral_22884/*"questphasehintdialogopensave.dat"*/);
    sub_1C2D490(&StringLiteral_24758/*"warboardmoviehistorysave.dat"*/);
    sub_1C2D490(&StringLiteral_16946/*"authsave2.dat"*/);
    sub_1C2D490(&StringLiteral_21470/*"materialbranchroutesave.dat"*/);
    sub_1C2D490(&StringLiteral_22648/*"paymentsave.dat"*/);
    sub_1C2D490(&StringLiteral_23273/*"servantprofilelimitcount.dat"*/);
    sub_1C2D490(&StringLiteral_24574/*"usercommandcodenewsave.dat"*/);
    sub_1C2D490(&StringLiteral_22876/*"questfocusstatesave.dat"*/);
    sub_1C2D490(&StringLiteral_23277/*"serversave.dat"*/);
    sub_1C2D490(&StringLiteral_24580/*"userservantcollectionsave.dat"*/);
    sub_1C2D490(&StringLiteral_22812/*"purchasebybankrequestsave.dat"*/);
    sub_1C2D490(&StringLiteral_17111/*"battleusecontinuerequestsave.dat"*/);
    sub_1C2D490(&StringLiteral_21471/*"materialgroupclearhistorysave.dat"*/);
    sub_1C2D490(&StringLiteral_23272/*"servantprofileeventjoin.dat"*/);
    sub_1C2D490(&StringLiteral_21431/*"masterDataList.dat"*/);
    sub_1C2D490(&StringLiteral_16945/*"authsave.dat"*/);
    sub_1C2D490(&StringLiteral_17110/*"battleusecontinueitemrequestsave.dat"*/);
    sub_1C2D490(&StringLiteral_24579/*"usermissionprogsave_{0}_{1}.dat"*/);
    sub_1C2D490(&StringLiteral_24075/*"tipsarchivestatesave_{0}.dat"*/);
    sub_1C2D490(&StringLiteral_24584/*"userservantnewsave.dat"*/);
    sub_1C2D490(&StringLiteral_24578/*"usermissionprogsave_{0}.dat"*/);
    sub_1C2D490(&StringLiteral_24573/*"usercommandcodecollectionsave.dat"*/);
    sub_1C2D490(&StringLiteral_24575/*"userequiplvsave.dat"*/);
    sub_1C2D490(&StringLiteral_22481/*"otherusernewsave.dat"*/);
    sub_1C2D490(&StringLiteral_21160/*"lastuseddecknumbersave.dat"*/);
    sub_1C2D490(&StringLiteral_24756/*"warboardcontinue.dat"*/);
    sub_1C2D490(&StringLiteral_22649/*"payment{0:D20}.dat"*/);
    sub_1C2D490(&StringLiteral_19674/*"friendcodesave.dat"*/);
    sub_1C2D490(&StringLiteral_21429/*"masterData.dat"*/);
    sub_1C2D490(&StringLiteral_22877/*"questhintdialogopensave.dat"*/);
    sub_1C2D490(&StringLiteral_24577/*"usermissionnewsave_{0}.dat"*/);
    sub_1C2D490(&StringLiteral_21430/*"masterDataCheck.dat"*/);
    sub_1C2D490(&StringLiteral_17107/*"battlecommandspellrequestsave.dat"*/);
    sub_1C2D490(&StringLiteral_21472/*"materialservantlimitcountsave.dat"*/);
    sub_1C2D490(&StringLiteral_24582/*"userservantcommentsave.dat"*/);
    sub_1C2D490(&StringLiteral_23478/*"signupsave.dat"*/);
    sub_1C2D490(&StringLiteral_24757/*"warboardmessagehistorysave.dat"*/);
    sub_1C2D490(&StringLiteral_23194/*"scriptsave.dat"*/);
    sub_1C2D490(&StringLiteral_24581/*"userservantcombinevoicesave.dat"*/);
    byte_4C261B8 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3413944 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v1 )
    sub_1C2D6EC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_23194/*"scriptsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_22812/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_17111/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_17107/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_24581/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_24584/*"userservantnewsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_24583/*"userservantlocksave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_24580/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_24575/*"userequiplvsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_24574/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_24573/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_24582/*"userservantcommentsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_22481/*"otherusernewsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_21430/*"masterDataCheck.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_21431/*"masterDataList.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_21429/*"masterData.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_16945/*"authsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_16946/*"authsave2.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23478/*"signupsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_23277/*"serversave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_19674/*"friendcodesave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_22648/*"paymentsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_22649/*"payment{0:D20}.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_24578/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_24579/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_24577/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_21472/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_23273/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_23272/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_17110/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_17112/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_24273/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_23271/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_22877/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_21160/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_21470/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_18002/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_21471/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_24757/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_24758/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_24075/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_24756/*"warboardcontinue.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_22876/*"questfocusstatesave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_22884/*"questphasehintdialogopensave.dat"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)DatFileName_TypeInfo->static_fields, (int32_t)v1, v4, v5);
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

  if ( (byte_4C261B3 & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C261B3 = 1;
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
         (const MethodInfo_341450C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3414278 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C2D6EC(filelist, method);
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

  if ( (byte_4C261B7 & 1) == 0 )
  {
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C261B7 = 1;
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
         (const MethodInfo_341450C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
                                  (const MethodInfo_3414278 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_1C2D6EC(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DatFileName__getFileName_40198988(int32_t name, int64_t l, const MethodInfo *method)
{
  DatFileName_c *v5; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  DatFileName_c *v10; // x0
  Il2CppObject *Item; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x19
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C261B4 & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C261B4 = 1;
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
         (const MethodInfo_341450C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v10 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v10 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_3414278 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C2D6EC(filelist, l);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v15 = l;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15, v7, v8, v9);
  v13 = System_String__Format((System_String_o *)Item, v12, 0);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v13, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DatFileName__getFileName_40199340(int32_t name, int32_t i1, int32_t i2, const MethodInfo *method)
{
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  DatFileName_c *v12; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x19
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C261B5 & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C261B5 = 1;
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
         (const MethodInfo_341450C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3414278 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C2D6EC(filelist, *(_QWORD *)&i1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v22 = i1;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v9, v10, v11);
  v21 = i2;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v15, v16, v17);
  v19 = System_String__Format_63499156((System_String_o *)Item, v14, v18, 0);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v19, 0);
}


System_String_o *DatFileName__getFileName_40199728(
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

  if ( (byte_4C261B6 & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C261B6 = 1;
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
         (const MethodInfo_341450C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_3414278 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_1C2D6EC(filelist, str1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v11 = System_String__Format_63499156((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0);
  else
    v11 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0);
  v12 = v11;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v12, 0);
}