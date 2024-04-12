void __fastcall DatFileName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42B1A10 & 1) == 0 )
  {
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
    sub_B52984(&StringLiteral_17591/*"clearrandommissionsave.dat"*/);
    sub_B52984(&StringLiteral_16795/*"battleuseitemrequestsave.dat"*/);
    sub_B52984(&StringLiteral_22169/*"servantcharactergraphexopen.dat"*/);
    sub_B52984(&StringLiteral_23080/*"unconfirmedpayment.dat"*/);
    sub_B52984(&StringLiteral_23276/*"userservantlocksave.dat"*/);
    sub_B52984(&StringLiteral_23442/*"warboardmoviehistorysave.dat"*/);
    sub_B52984(&StringLiteral_16647/*"authsave2.dat"*/);
    sub_B52984(&StringLiteral_20584/*"materialbranchroutesave.dat"*/);
    sub_B52984(&StringLiteral_21620/*"paymentsave.dat"*/);
    sub_B52984(&StringLiteral_22171/*"servantprofilelimitcount.dat"*/);
    sub_B52984(&StringLiteral_23267/*"usercommandcodenewsave.dat"*/);
    sub_B52984(&StringLiteral_21820/*"questfocusstatesave.dat"*/);
    sub_B52984(&StringLiteral_22177/*"serversave.dat"*/);
    sub_B52984(&StringLiteral_23273/*"userservantcollectionsave.dat"*/);
    sub_B52984(&StringLiteral_21767/*"purchasebybankrequestsave.dat"*/);
    sub_B52984(&StringLiteral_16794/*"battleusecontinuerequestsave.dat"*/);
    sub_B52984(&StringLiteral_20585/*"materialgroupclearhistorysave.dat"*/);
    sub_B52984(&StringLiteral_22170/*"servantprofileeventjoin.dat"*/);
    sub_B52984(&StringLiteral_20547/*"masterDataList.dat"*/);
    sub_B52984(&StringLiteral_16646/*"authsave.dat"*/);
    sub_B52984(&StringLiteral_16793/*"battleusecontinueitemrequestsave.dat"*/);
    sub_B52984(&StringLiteral_23272/*"usermissionprogsave_{0}_{1}.dat"*/);
    sub_B52984(&StringLiteral_22892/*"tipsarchivestatesave_{0}.dat"*/);
    sub_B52984(&StringLiteral_23277/*"userservantnewsave.dat"*/);
    sub_B52984(&StringLiteral_23271/*"usermissionprogsave_{0}.dat"*/);
    sub_B52984(&StringLiteral_23266/*"usercommandcodecollectionsave.dat"*/);
    sub_B52984(&StringLiteral_23268/*"userequiplvsave.dat"*/);
    sub_B52984(&StringLiteral_21498/*"otherusernewsave.dat"*/);
    sub_B52984(&StringLiteral_20339/*"lastuseddecknumbersave.dat"*/);
    sub_B52984(&StringLiteral_23440/*"warboardcontinue.dat"*/);
    sub_B52984(&StringLiteral_21621/*"payment{0:D20}.dat"*/);
    sub_B52984(&StringLiteral_19053/*"friendcodesave.dat"*/);
    sub_B52984(&StringLiteral_20545/*"masterData.dat"*/);
    sub_B52984(&StringLiteral_21821/*"questhintdialogopensave.dat"*/);
    sub_B52984(&StringLiteral_23270/*"usermissionnewsave_{0}.dat"*/);
    sub_B52984(&StringLiteral_20546/*"masterDataCheck.dat"*/);
    sub_B52984(&StringLiteral_16792/*"battlecommandspellrequestsave.dat"*/);
    sub_B52984(&StringLiteral_20586/*"materialservantlimitcountsave.dat"*/);
    sub_B52984(&StringLiteral_23275/*"userservantcommentsave.dat"*/);
    sub_B52984(&StringLiteral_22316/*"signupsave.dat"*/);
    sub_B52984(&StringLiteral_23441/*"warboardmessagehistorysave.dat"*/);
    sub_B52984(&StringLiteral_22110/*"scriptsave.dat"*/);
    sub_B52984(&StringLiteral_23274/*"userservantcombinevoicesave.dat"*/);
    byte_42B1A10 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B52A54(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F3E9EC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v1 )
    sub_B52A5C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    (System_String_o *)StringLiteral_22110/*"scriptsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)StringLiteral_21767/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)StringLiteral_16794/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)StringLiteral_16792/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)StringLiteral_23274/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    5,
    (System_String_o *)StringLiteral_23277/*"userservantnewsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    6,
    (System_String_o *)StringLiteral_23276/*"userservantlocksave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    7,
    (System_String_o *)StringLiteral_23273/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    8,
    (System_String_o *)StringLiteral_23268/*"userequiplvsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    (System_String_o *)StringLiteral_23267/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    (System_String_o *)StringLiteral_23266/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    11,
    (System_String_o *)StringLiteral_23275/*"userservantcommentsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    12,
    (System_String_o *)StringLiteral_21498/*"otherusernewsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    13,
    (System_String_o *)StringLiteral_20546/*"masterDataCheck.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    14,
    (System_String_o *)StringLiteral_20547/*"masterDataList.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    15,
    (System_String_o *)StringLiteral_20545/*"masterData.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    16,
    (System_String_o *)StringLiteral_16646/*"authsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    17,
    (System_String_o *)StringLiteral_16647/*"authsave2.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    18,
    (System_String_o *)StringLiteral_22316/*"signupsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    19,
    (System_String_o *)StringLiteral_22177/*"serversave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)StringLiteral_19053/*"friendcodesave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    21,
    (System_String_o *)StringLiteral_21620/*"paymentsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    22,
    (System_String_o *)StringLiteral_21621/*"payment{0:D20}.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    23,
    (System_String_o *)StringLiteral_23271/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    24,
    (System_String_o *)StringLiteral_23272/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    25,
    (System_String_o *)StringLiteral_23270/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    26,
    (System_String_o *)StringLiteral_20586/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    27,
    (System_String_o *)StringLiteral_22171/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    28,
    (System_String_o *)StringLiteral_22170/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    29,
    (System_String_o *)StringLiteral_16793/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    (System_String_o *)StringLiteral_16795/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    31,
    (System_String_o *)StringLiteral_23080/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    32,
    (System_String_o *)StringLiteral_22169/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    33,
    (System_String_o *)StringLiteral_21821/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    34,
    (System_String_o *)StringLiteral_20339/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    35,
    (System_String_o *)StringLiteral_20584/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    36,
    (System_String_o *)StringLiteral_17591/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    37,
    (System_String_o *)StringLiteral_20585/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    38,
    (System_String_o *)StringLiteral_23441/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    39,
    (System_String_o *)StringLiteral_23442/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)StringLiteral_22892/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)StringLiteral_23440/*"warboardcontinue.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)StringLiteral_21820/*"questfocusstatesave.dat"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  static_fields = (BattleServantConfConponent_o *)DatFileName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v5, v6, v7, v8, v9, v10);
}


void __fastcall DatFileName___ctor(DatFileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName(int32_t name, const MethodInfo *method)
{
  DatFileName_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v5; // x0
  System_String_o *Item; // x19

  if ( (byte_42B1A0B & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1A0B = 1;
  }
  v3 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v3 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->filelist;
  if ( !filelist )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
          filelist,
          name,
          (const MethodInfo_2F3F814 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    Item = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_14;
  }
  v5 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v5 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->filelist;
  if ( !filelist )
LABEL_18:
    sub_B52A5C(filelist, method);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(Item, 0LL);
}


System_String_o *__fastcall DatFileName__getFileNameNotConverted(int32_t name, const MethodInfo *method)
{
  DatFileName_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v5; // x0

  if ( (byte_42B1A0F & 1) == 0 )
  {
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1A0F = 1;
  }
  v3 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v3 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->filelist;
  if ( !filelist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         filelist,
         name,
         (const MethodInfo_2F3F814 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v5 = DatFileName_TypeInfo;
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v5 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->filelist;
    if ( filelist )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               filelist,
               name,
               (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
    sub_B52A5C(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_28055972(int32_t name, int64_t l, const MethodInfo *method)
{
  DatFileName_c *v5; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v7; // x0
  System_String_o *Item; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x19
  int64_t v12; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B1A0C & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1A0C = 1;
  }
  v5 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v5 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->filelist;
  if ( !filelist )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
          filelist,
          name,
          (const MethodInfo_2F3F814 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    Item = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_14;
  }
  v7 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v7 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v7->static_fields->filelist;
  if ( !filelist )
LABEL_18:
    sub_B52A5C(filelist, l);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  v12 = l;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v12);
  v10 = System_String__Format(Item, v9, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DatFileName__getFileName_28056352(
        int32_t name,
        int32_t i1,
        int32_t i2,
        const MethodInfo *method)
{
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v9; // x0
  System_String_o *Item; // x21
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x19
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B1A0D & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1A0D = 1;
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
          (const MethodInfo_2F3F814 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
    sub_B52A5C(filelist, *(_QWORD *)&i1);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  v16 = i1;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v15 = i2;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13 = System_String__Format_44563852(Item, v11, v12, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v13, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_28056768(
        int32_t name,
        System_String_o *str1,
        System_String_o *str2,
        const MethodInfo *method)
{
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  DatFileName_c *v9; // x0
  System_String_o *Item; // x0
  System_String_o *v11; // x0
  System_String_o *v12; // x19

  if ( (byte_42B1A0E & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1A0E = 1;
  }
  v7 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v7 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v7->static_fields->filelist;
  if ( !filelist )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         filelist,
         name,
         (const MethodInfo_2F3F814 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v9 = DatFileName_TypeInfo;
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v9 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v9->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               filelist,
               name,
               (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_14;
    }
LABEL_21:
    sub_B52A5C(filelist, str1);
  }
  Item = (System_String_o *)StringLiteral_1/*""*/;
LABEL_14:
  if ( str2 )
    v11 = System_String__Format_44563852(Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v11 = System_String__Format(Item, (Il2CppObject *)str1, 0LL);
  v12 = v11;
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v12, 0LL);
}