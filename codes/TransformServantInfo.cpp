void __fastcall TransformServantInfo___ctor(TransformServantInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1D903 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B1D903 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.svtId = 0LL;
  v3 = (int)StringLiteral_1/*""*/;
  this->fields.titleText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.titleText, v3, v4, v5);
}


void __fastcall TransformServantInfo___ctor_42657972(
        TransformServantInfo_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        System_String_o *titleText,
        const MethodInfo *method)
{
  TransformServantInfo_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.titleText = titleText;
  v8 = (TransformServantInfo_o *)((char *)v8 + 24);
  LODWORD(v8[-1].fields.titleText) = svtId;
  HIDWORD(v8[-1].fields.titleText) = dispLimitCount;
  sub_1BCAF9C((CGThumbnailListItem_o *)v8, (int32_t)titleText, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TransformServantInfo__GetDispLimitCount(
        TransformServantInfo_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t result; // w0
  bool v6; // vf
  int32_t svtId; // w20

  if ( (byte_4B1D904 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    byte_4B1D904 = 1;
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
      return ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
    }
  }
  return result;
}