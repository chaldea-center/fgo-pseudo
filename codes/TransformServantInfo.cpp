void TransformServantInfo___ctor(TransformServantInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEFB69 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFB69 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.svtId = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.titleText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.titleText, v3, v4, v5, v6, v7, v8, v9);
}


void TransformServantInfo___ctor_44142352(
        TransformServantInfo_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        System_String_o *titleText,
        const MethodInfo *method)
{
  TransformServantInfo_o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.titleText = titleText;
  v8 = (TransformServantInfo_o *)((char *)v8 + 24);
  LODWORD(v8[-1].fields.titleText) = svtId;
  HIDWORD(v8[-1].fields.titleText) = dispLimitCount;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v8, (int32_t)titleText, v9, v10, v11, v12, v13, v14);
}


int32_t TransformServantInfo__GetDispLimitCount(
        TransformServantInfo_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t result; // w0
  bool v6; // vf
  int32_t svtId; // w20

  if ( (byte_4CEFB6A & 1) == 0 )
  {
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    byte_4CEFB6A = 1;
  }
  result = this->fields.dispLimitCount;
  if ( result <= 10 )
  {
    v6 = __OFSUB__(result--, 1);
    if ( result < 0 != v6 )
    {
      svtId = this->fields.svtId;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      return ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
    }
  }
  return result;
}