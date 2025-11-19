void AssetDataListInfo___ctor(AssetDataListInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB524B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB524B = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.masterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.dateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dateVersion, v6, v7, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields.buildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.buildVersion, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.dataList = (struct System_Collections_Generic_List_AssetData__o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dataList, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0);
}