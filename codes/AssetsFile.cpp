void AssetsFile___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5072 & 1) == 0 )
  {
    sub_1C6BA08(&AssetsFile_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_AssetsFile_Path__string__TypeInfo);
    sub_1C6BA08(&StringLiteral_12757/*"Servants"*/);
    sub_1C6BA08(&StringLiteral_3140/*"Bg"*/);
    byte_4CB5072 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_AssetsFile_Path__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3484F58 *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string___ctor__);
  if ( !v1 )
    sub_1C6BC60(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_12757/*"Servants"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_3140/*"Bg"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AssetsFile_Path__string__Add__);
  AssetsFile_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_AssetsFile_Path__string__o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)AssetsFile_TypeInfo->static_fields, (int32_t)v1, v4, v5);
}


void AssetsFile___ctor(AssetsFile_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}