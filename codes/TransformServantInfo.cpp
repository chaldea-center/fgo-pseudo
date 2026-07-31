void TransformServantInfo___ctor(TransformServantInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5939C24 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939C24 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (int)StringLiteral_1/*""*/;
  this->fields.titleText = (struct System_String_o *)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.svtId = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.titleText, v3, v4, v5, v6, v7, v8, v9);
}


void TransformServantInfo___ctor_50562184(
        TransformServantInfo_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        System_String_o *titleText,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.titleText = titleText;
  this->fields.svtId = svtId;
  this->fields.dispLimitCount = dispLimitCount;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.titleText,
    (int32_t)titleText,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
int32_t TransformServantInfo__GetDispLimitCount(
        TransformServantInfo_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t result; // w0
  bool v6; // vf
  int32_t svtId; // w20

  if ( (byte_5939C25 & 1) == 0 )
  {
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    byte_5939C25 = 1;
  }
  result = this->fields.dispLimitCount;
  if ( result <= 10 )
  {
    v6 = __OFSUB__(result--, 1);
    if ( result < 0 != v6 )
    {
      svtId = this->fields.svtId;
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
      return ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
    }
  }
  return result;
}