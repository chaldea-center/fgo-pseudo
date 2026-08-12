void BMSymbol___ctor(BMSymbol_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BMSymbol__MarkAsChanged(BMSymbol_o *this, const MethodInfo *method)
{
  this->fields.mIsValid = 0;
}


bool BMSymbol__Validate(BMSymbol_o *this, UIAtlas_o *atlas, const MethodInfo *method)
{
  __int64 v6; // x1
  _BOOL8 v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UISpriteData_o *Sprite; // x1
  struct UISpriteData_o **p_mSprite; // x21
  __int64 v16; // x1
  UnityEngine_Object_o *texture; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w21
  int32_t v25; // w0
  const MethodInfo *v26; // x2
  struct UISpriteData_o *mSprite; // x8
  int32_t paddingLeft; // w9
  int32_t paddingTop; // w10
  __int64 v30; // d0
  UnityEngine_Rect_o rect; // [xsp+0h] [xbp-40h]
  UnityEngine_Rect_o v32; // 0:kr00_16.16

  if ( (byte_59750AE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750AE = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, atlas);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)atlas, 0, 0) )
    return 0;
  if ( !this->fields.mIsValid )
  {
    if ( System_String__IsNullOrEmpty(this->fields.spriteName, 0) )
      return 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)atlas, 0, 0);
    Sprite = 0;
    if ( v7 )
    {
      if ( !atlas )
        goto LABEL_25;
      Sprite = UIAtlas__GetSprite(atlas, this->fields.spriteName, 0);
    }
    this->fields.mSprite = Sprite;
    p_mSprite = &this->fields.mSprite;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, (int32_t)Sprite, v8, v9, v10, v11, v12, v13);
    if ( !this->fields.mSprite )
      return this->fields.mSprite != 0;
    if ( atlas )
    {
      texture = (UnityEngine_Object_o *)UIAtlas__get_texture(atlas, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      v7 = UnityEngine_Object__op_Equality(texture, 0, 0);
      if ( v7 )
      {
        *p_mSprite = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, 0, v18, v19, v20, v21, v22, v23);
        return this->fields.mSprite != 0;
      }
      if ( *p_mSprite )
      {
        rect = (UnityEngine_Rect_o)vcvtq_f32_s32(*(int32x4_t *)&(*p_mSprite)->fields.x);
        this->fields.mUV = rect;
        if ( texture )
        {
          v24 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))texture->klass[1]._1.image)(
                  texture,
                  texture->klass[1]._1.gc_desc);
          v25 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))texture->klass[1]._1.byval_arg.data)(
                  texture,
                  *(_QWORD *)&texture->klass[1]._1.byval_arg.bits);
          v32 = NGUIMath__ConvertToTexCoords(rect, v24, v25, v26);
          mSprite = this->fields.mSprite;
          this->fields.mUV = v32;
          if ( mSprite )
          {
            paddingLeft = mSprite->fields.paddingLeft;
            paddingTop = mSprite->fields.paddingTop;
            this->fields.mOffsetX = paddingLeft;
            this->fields.mOffsetY = paddingTop;
            v30 = *(_QWORD *)&mSprite->fields.width;
            *(_QWORD *)&this->fields.mWidth = v30;
            this->fields.mAdvance = v30 + paddingLeft + mSprite->fields.paddingRight;
            this->fields.mIsValid = 1;
            return this->fields.mSprite != 0;
          }
        }
      }
    }
LABEL_25:
    sub_2213CDC(v7, Sprite);
  }
  return this->fields.mSprite != 0;
}


int32_t BMSymbol__get_advance(BMSymbol_o *this, const MethodInfo *method)
{
  return this->fields.mAdvance;
}


int32_t BMSymbol__get_height(BMSymbol_o *this, const MethodInfo *method)
{
  return this->fields.mHeight;
}


int32_t BMSymbol__get_length(BMSymbol_o *this, const MethodInfo *method)
{
  int32_t mLength; // w8
  struct System_String_o *sequence; // x8

  mLength = this->fields.mLength;
  if ( !mLength )
  {
    sequence = this->fields.sequence;
    if ( !sequence )
      sub_2213CDC(this, method);
    mLength = sequence->fields._stringLength;
    this->fields.mLength = mLength;
  }
  return mLength;
}


int32_t BMSymbol__get_offsetX(BMSymbol_o *this, const MethodInfo *method)
{
  return this->fields.mOffsetX;
}


int32_t BMSymbol__get_offsetY(BMSymbol_o *this, const MethodInfo *method)
{
  return this->fields.mOffsetY;
}


UnityEngine_Rect_o BMSymbol__get_uvRect(BMSymbol_o *this, const MethodInfo *method)
{
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.m_XMin = this->fields.mUV.fields.m_XMin;
  result.fields.m_YMin = this->fields.mUV.fields.m_YMin;
  result.fields.m_Width = this->fields.mUV.fields.m_Width;
  result.fields.m_Height = this->fields.mUV.fields.m_Height;
  return result;
}


int32_t BMSymbol__get_width(BMSymbol_o *this, const MethodInfo *method)
{
  return this->fields.mWidth;
}