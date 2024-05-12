void __fastcall TransformServantInfo___ctor(TransformServantInfo_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438D616 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D616 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.svtId = 0LL;
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.titleText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.titleText, v3, v4, v5, v6, v7, v8, v9);
}


void __fastcall TransformServantInfo___ctor_29453348(
        TransformServantInfo_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        System_String_o *titleText,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v8 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)titleText;
  v8 = (BattleServantConfConponent_o *)((char *)v8 + 24);
  *(_DWORD *)&v8[-1].fields.isOpenAfter = svtId;
  v8[-1].fields.adjustHeight = dispLimitCount;
  sub_B77560(v8, (System_Int32_array **)titleText, v9, v10, v11, v12, v13, v14);
}


int32_t __fastcall TransformServantInfo__GetDispLimitCount(
        TransformServantInfo_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t result; // w0
  bool v6; // vf
  int32_t svtId; // w20

  if ( (byte_438D617 & 1) == 0 )
  {
    sub_B775C4(&ImageLimitCount_TypeInfo);
    byte_438D617 = 1;
  }
  result = this->fields.dispLimitCount;
  if ( result <= 10 )
  {
    v6 = __OFSUB__(result--, 1);
    if ( result < 0 != v6 )
    {
      svtId = this->fields.svtId;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      return ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
    }
  }
  return result;
}