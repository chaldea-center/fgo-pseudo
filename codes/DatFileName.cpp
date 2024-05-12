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

  if ( (byte_438C87B & 1) == 0 )
  {
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
    sub_B775C4(&StringLiteral_17815/*"clearrandommissionsave.dat"*/);
    sub_B775C4(&StringLiteral_17012/*"battleuseitemrequestsave.dat"*/);
    sub_B775C4(&StringLiteral_22452/*"servantcharactergraphexopen.dat"*/);
    sub_B775C4(&StringLiteral_23368/*"unconfirmedpayment.dat"*/);
    sub_B775C4(&StringLiteral_23566/*"userservantlocksave.dat"*/);
    sub_B775C4(&StringLiteral_23733/*"warboardmoviehistorysave.dat"*/);
    sub_B775C4(&StringLiteral_16859/*"authsave2.dat"*/);
    sub_B775C4(&StringLiteral_20845/*"materialbranchroutesave.dat"*/);
    sub_B775C4(&StringLiteral_21896/*"paymentsave.dat"*/);
    sub_B775C4(&StringLiteral_22454/*"servantprofilelimitcount.dat"*/);
    sub_B775C4(&StringLiteral_23557/*"usercommandcodenewsave.dat"*/);
    sub_B775C4(&StringLiteral_22099/*"questfocusstatesave.dat"*/);
    sub_B775C4(&StringLiteral_22460/*"serversave.dat"*/);
    sub_B775C4(&StringLiteral_23563/*"userservantcollectionsave.dat"*/);
    sub_B775C4(&StringLiteral_22046/*"purchasebybankrequestsave.dat"*/);
    sub_B775C4(&StringLiteral_17011/*"battleusecontinuerequestsave.dat"*/);
    sub_B775C4(&StringLiteral_20846/*"materialgroupclearhistorysave.dat"*/);
    sub_B775C4(&StringLiteral_22453/*"servantprofileeventjoin.dat"*/);
    sub_B775C4(&StringLiteral_20808/*"masterDataList.dat"*/);
    sub_B775C4(&StringLiteral_16858/*"authsave.dat"*/);
    sub_B775C4(&StringLiteral_17010/*"battleusecontinueitemrequestsave.dat"*/);
    sub_B775C4(&StringLiteral_23562/*"usermissionprogsave_{0}_{1}.dat"*/);
    sub_B775C4(&StringLiteral_23179/*"tipsarchivestatesave_{0}.dat"*/);
    sub_B775C4(&StringLiteral_23567/*"userservantnewsave.dat"*/);
    sub_B775C4(&StringLiteral_23561/*"usermissionprogsave_{0}.dat"*/);
    sub_B775C4(&StringLiteral_23556/*"usercommandcodecollectionsave.dat"*/);
    sub_B775C4(&StringLiteral_23558/*"userequiplvsave.dat"*/);
    sub_B775C4(&StringLiteral_21767/*"otherusernewsave.dat"*/);
    sub_B775C4(&StringLiteral_20597/*"lastuseddecknumbersave.dat"*/);
    sub_B775C4(&StringLiteral_23731/*"warboardcontinue.dat"*/);
    sub_B775C4(&StringLiteral_21897/*"payment{0:D20}.dat"*/);
    sub_B775C4(&StringLiteral_19293/*"friendcodesave.dat"*/);
    sub_B775C4(&StringLiteral_20806/*"masterData.dat"*/);
    sub_B775C4(&StringLiteral_22100/*"questhintdialogopensave.dat"*/);
    sub_B775C4(&StringLiteral_23560/*"usermissionnewsave_{0}.dat"*/);
    sub_B775C4(&StringLiteral_20807/*"masterDataCheck.dat"*/);
    sub_B775C4(&StringLiteral_17009/*"battlecommandspellrequestsave.dat"*/);
    sub_B775C4(&StringLiteral_20847/*"materialservantlimitcountsave.dat"*/);
    sub_B775C4(&StringLiteral_23565/*"userservantcommentsave.dat"*/);
    sub_B775C4(&StringLiteral_22602/*"signupsave.dat"*/);
    sub_B775C4(&StringLiteral_23732/*"warboardmessagehistorysave.dat"*/);
    sub_B775C4(&StringLiteral_22393/*"scriptsave.dat"*/);
    sub_B775C4(&StringLiteral_23564/*"userservantcombinevoicesave.dat"*/);
    byte_438C87B = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B77694(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F9F080 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v1 )
    sub_B7769C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    (System_String_o *)StringLiteral_22393/*"scriptsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)StringLiteral_22046/*"purchasebybankrequestsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)StringLiteral_17011/*"battleusecontinuerequestsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)StringLiteral_17009/*"battlecommandspellrequestsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)StringLiteral_23564/*"userservantcombinevoicesave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    5,
    (System_String_o *)StringLiteral_23567/*"userservantnewsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    6,
    (System_String_o *)StringLiteral_23566/*"userservantlocksave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    7,
    (System_String_o *)StringLiteral_23563/*"userservantcollectionsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    8,
    (System_String_o *)StringLiteral_23558/*"userequiplvsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    (System_String_o *)StringLiteral_23557/*"usercommandcodenewsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    (System_String_o *)StringLiteral_23556/*"usercommandcodecollectionsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    11,
    (System_String_o *)StringLiteral_23565/*"userservantcommentsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    12,
    (System_String_o *)StringLiteral_21767/*"otherusernewsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    13,
    (System_String_o *)StringLiteral_20807/*"masterDataCheck.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    14,
    (System_String_o *)StringLiteral_20808/*"masterDataList.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    15,
    (System_String_o *)StringLiteral_20806/*"masterData.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    16,
    (System_String_o *)StringLiteral_16858/*"authsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    17,
    (System_String_o *)StringLiteral_16859/*"authsave2.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    18,
    (System_String_o *)StringLiteral_22602/*"signupsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    19,
    (System_String_o *)StringLiteral_22460/*"serversave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)StringLiteral_19293/*"friendcodesave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    21,
    (System_String_o *)StringLiteral_21896/*"paymentsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    22,
    (System_String_o *)StringLiteral_21897/*"payment{0:D20}.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    23,
    (System_String_o *)StringLiteral_23561/*"usermissionprogsave_{0}.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    24,
    (System_String_o *)StringLiteral_23562/*"usermissionprogsave_{0}_{1}.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    25,
    (System_String_o *)StringLiteral_23560/*"usermissionnewsave_{0}.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    26,
    (System_String_o *)StringLiteral_20847/*"materialservantlimitcountsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    27,
    (System_String_o *)StringLiteral_22454/*"servantprofilelimitcount.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    28,
    (System_String_o *)StringLiteral_22453/*"servantprofileeventjoin.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    29,
    (System_String_o *)StringLiteral_17010/*"battleusecontinueitemrequestsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    (System_String_o *)StringLiteral_17012/*"battleuseitemrequestsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    31,
    (System_String_o *)StringLiteral_23368/*"unconfirmedpayment.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    32,
    (System_String_o *)StringLiteral_22452/*"servantcharactergraphexopen.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    33,
    (System_String_o *)StringLiteral_22100/*"questhintdialogopensave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    34,
    (System_String_o *)StringLiteral_20597/*"lastuseddecknumbersave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    35,
    (System_String_o *)StringLiteral_20845/*"materialbranchroutesave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    36,
    (System_String_o *)StringLiteral_17815/*"clearrandommissionsave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    37,
    (System_String_o *)StringLiteral_20846/*"materialgroupclearhistorysave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    38,
    (System_String_o *)StringLiteral_23732/*"warboardmessagehistorysave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    39,
    (System_String_o *)StringLiteral_23733/*"warboardmoviehistorysave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)StringLiteral_23179/*"tipsarchivestatesave_{0}.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)StringLiteral_23731/*"warboardcontinue.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)StringLiteral_22099/*"questfocusstatesave.dat"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  static_fields = (BattleServantConfConponent_o *)DatFileName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_438C876 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C876 = 1;
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
          (const MethodInfo_2F9FEA8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
    sub_B7769C(filelist, method);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2F9FB70 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
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

  if ( (byte_438C87A & 1) == 0 )
  {
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C87A = 1;
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
         (const MethodInfo_2F9FEA8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_2F9FB70 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
    sub_B7769C(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_28016488(int32_t name, int64_t l, const MethodInfo *method)
{
  DatFileName_c *v5; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  __int64 v7; // x2
  DatFileName_c *v8; // x0
  System_String_o *Item; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x19
  int64_t v13; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C877 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C877 = 1;
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
          (const MethodInfo_2F9FEA8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    Item = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_14;
  }
  v8 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v8 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v8->static_fields->filelist;
  if ( !filelist )
LABEL_18:
    sub_B7769C(filelist, l);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2F9FB70 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  v13 = l;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13, v7);
  v11 = System_String__Format(Item, v10, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DatFileName__getFileName_28016868(
        int32_t name,
        int32_t i1,
        int32_t i2,
        const MethodInfo *method)
{
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  __int64 v9; // x2
  DatFileName_c *v10; // x0
  System_String_o *Item; // x21
  Il2CppObject *v12; // x20
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  System_String_o *v15; // x19
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438C878 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C878 = 1;
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
          (const MethodInfo_2F9FEA8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    Item = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_14;
  }
  v10 = DatFileName_TypeInfo;
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v10 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v10->static_fields->filelist;
  if ( !filelist )
LABEL_18:
    sub_B7769C(filelist, *(_QWORD *)&i1);
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           filelist,
           name,
           (const MethodInfo_2F9FB70 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_14:
  v18 = i1;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v9);
  v17 = i2;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v13);
  v15 = System_String__Format_44897472(Item, v12, v14, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v15, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_28017284(
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

  if ( (byte_438C879 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C879 = 1;
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
         (const MethodInfo_2F9FEA8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_2F9FB70 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_14;
    }
LABEL_21:
    sub_B7769C(filelist, str1);
  }
  Item = (System_String_o *)StringLiteral_1/*""*/;
LABEL_14:
  if ( str2 )
    v11 = System_String__Format_44897472(Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v11 = System_String__Format(Item, (Il2CppObject *)str1, 0LL);
  v12 = v11;
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v12, 0LL);
}