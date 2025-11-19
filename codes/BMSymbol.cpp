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
  _BOOL8 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UISpriteData_o *Sprite; // x1
  struct UISpriteData_o **p_mSprite; // x21
  UnityEngine_Object_o *texture; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int *v14; // x8
  float v15; // s11
  float v16; // s10
  float v17; // s9
  float v18; // s8
  int32_t v19; // w21
  int32_t v20; // w0
  const MethodInfo *v21; // x2
  struct UISpriteData_o *mSprite; // x8
  int32_t paddingLeft; // w9
  __int64 v24; // d0
  int32_t paddingRight; // w8
  UnityEngine_Rect_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CBAA48 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA48 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)atlas, 0, 0) )
    return 0;
  if ( !this->fields.mIsValid )
  {
    if ( System_String__IsNullOrEmpty(this->fields.spriteName, 0) )
      return 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)atlas, 0, 0);
    Sprite = 0;
    if ( v6 )
    {
      if ( !atlas )
        goto LABEL_25;
      Sprite = UIAtlas__GetSprite(atlas, this->fields.spriteName, 0);
    }
    this->fields.mSprite = Sprite;
    p_mSprite = &this->fields.mSprite;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mSprite, (int32_t)Sprite, v7, v8);
    if ( !this->fields.mSprite )
      return this->fields.mSprite != 0;
    if ( atlas )
    {
      texture = (UnityEngine_Object_o *)UIAtlas__get_texture(atlas, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Equality(texture, 0, 0);
      if ( v6 )
      {
        *p_mSprite = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mSprite, 0, v12, v13);
        return this->fields.mSprite != 0;
      }
      v14 = (int *)*p_mSprite;
      if ( *p_mSprite )
      {
        v15 = (float)v14[6];
        v16 = (float)v14[7];
        v17 = (float)v14[8];
        v18 = (float)v14[9];
        this->fields.mUV.fields.m_XMin = v15;
        this->fields.mUV.fields.m_YMin = v16;
        this->fields.mUV.fields.m_Width = v17;
        this->fields.mUV.fields.m_Height = v18;
        if ( texture )
        {
          v19 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))texture->klass[1]._1.image)(
                  texture,
                  texture->klass[1]._1.gc_desc);
          v20 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))texture->klass[1]._1.byval_arg.data)(
                  texture,
                  *(_QWORD *)&texture->klass[1]._1.byval_arg.bits);
          v26.fields.m_XMin = v15;
          v26.fields.m_YMin = v16;
          v26.fields.m_Width = v17;
          v26.fields.m_Height = v18;
          v27 = NGUIMath__ConvertToTexCoords(v26, v19, v20, v21);
          mSprite = this->fields.mSprite;
          this->fields.mUV = v27;
          if ( mSprite )
          {
            paddingLeft = mSprite->fields.paddingLeft;
            this->fields.mOffsetX = paddingLeft;
            this->fields.mOffsetY = mSprite->fields.paddingTop;
            v24 = *(_QWORD *)&mSprite->fields.width;
            *(_QWORD *)&this->fields.mWidth = v24;
            paddingRight = mSprite->fields.paddingRight;
            this->fields.mIsValid = 1;
            this->fields.mAdvance = v24 + paddingLeft + paddingRight;
            return this->fields.mSprite != 0;
          }
        }
      }
    }
LABEL_25:
    sub_1C6BC60(v6, Sprite);
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
      sub_1C6BC60(this, method);
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
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.mUV.fields.m_XMin;
  m_YMin = this->fields.mUV.fields.m_YMin;
  m_Width = this->fields.mUV.fields.m_Width;
  m_Height = this->fields.mUV.fields.m_Height;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


int32_t BMSymbol__get_width(BMSymbol_o *this, const MethodInfo *method)
{
  return this->fields.mWidth;
}