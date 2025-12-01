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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UISpriteData_o *Sprite; // x1
  struct UISpriteData_o **p_mSprite; // x21
  UnityEngine_Object_o *texture; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int *v22; // x8
  float v23; // s11
  float v24; // s10
  float v25; // s9
  float v26; // s8
  int32_t v27; // w21
  int32_t v28; // w0
  const MethodInfo *v29; // x2
  struct UISpriteData_o *mSprite; // x8
  int32_t paddingLeft; // w9
  __int64 v32; // d0
  int32_t paddingRight; // w8
  UnityEngine_Rect_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCBBA1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBBA1 = 1;
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, (int32_t)Sprite, v7, v8, v9, v10, v11, v12);
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
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, 0, v16, v17, v18, v19, v20, v21);
        return this->fields.mSprite != 0;
      }
      v22 = (int *)*p_mSprite;
      if ( *p_mSprite )
      {
        v23 = (float)v22[6];
        v24 = (float)v22[7];
        v25 = (float)v22[8];
        v26 = (float)v22[9];
        this->fields.mUV.fields.m_XMin = v23;
        this->fields.mUV.fields.m_YMin = v24;
        this->fields.mUV.fields.m_Width = v25;
        this->fields.mUV.fields.m_Height = v26;
        if ( texture )
        {
          v27 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))texture->klass[1]._1.image)(
                  texture,
                  texture->klass[1]._1.gc_desc);
          v28 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))texture->klass[1]._1.byval_arg.data)(
                  texture,
                  *(_QWORD *)&texture->klass[1]._1.byval_arg.bits);
          v34.fields.m_XMin = v23;
          v34.fields.m_YMin = v24;
          v34.fields.m_Width = v25;
          v34.fields.m_Height = v26;
          v35 = NGUIMath__ConvertToTexCoords(v34, v27, v28, v29);
          mSprite = this->fields.mSprite;
          this->fields.mUV = v35;
          if ( mSprite )
          {
            paddingLeft = mSprite->fields.paddingLeft;
            this->fields.mOffsetX = paddingLeft;
            this->fields.mOffsetY = mSprite->fields.paddingTop;
            v32 = *(_QWORD *)&mSprite->fields.width;
            *(_QWORD *)&this->fields.mWidth = v32;
            paddingRight = mSprite->fields.paddingRight;
            this->fields.mIsValid = 1;
            this->fields.mAdvance = v32 + paddingLeft + paddingRight;
            return this->fields.mSprite != 0;
          }
        }
      }
    }
LABEL_25:
    sub_1C71608(v6, Sprite);
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
      sub_1C71608(this, method);
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