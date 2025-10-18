void AssetsFile___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4C41D70 & 1) == 0 )
  {
    sub_1C37058(&AssetsFile_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_AssetsFile_Path__string__TypeInfo);
    sub_1C37058(&StringLiteral_12753/*"Servants"*/);
    sub_1C37058(&StringLiteral_3148/*"Bg"*/);
    byte_4C41D70 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_AssetsFile_Path__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_342CC4C *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string___ctor__);
  if ( !v1 )
    sub_1C372B4(v2);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_12753/*"Servants"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_3148/*"Bg"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
  AssetsFile_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_AssetsFile_Path__string__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AssetsFile_TypeInfo->static_fields, (int32_t)v1, v3, v4);
}


void AssetsFile___ctor(AssetsFile_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}