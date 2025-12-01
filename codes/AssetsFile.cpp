void AssetsFile___cctor(const MethodInfo *method)
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

  if ( (byte_4CC6191 & 1) == 0 )
  {
    sub_1C713B0(&AssetsFile_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_AssetsFile_Path__string__TypeInfo);
    sub_1C713B0(&StringLiteral_12763/*"Servants"*/);
    sub_1C713B0(&StringLiteral_3143/*"Bg"*/);
    byte_4CC6191 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Generic_Dictionary_AssetsFile_Path__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3494CFC *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string___ctor__);
  if ( !v1 )
    sub_1C71608(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_12763/*"Servants"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_3143/*"Bg"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
  AssetsFile_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_AssetsFile_Path__string__o *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)AssetsFile_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
}


void AssetsFile___ctor(AssetsFile_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}