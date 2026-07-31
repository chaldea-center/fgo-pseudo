void GridLineTextureUtil___ctor(GridLineTextureUtil_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GridLineTextureUtil__ApplyTextureColor(
        UnityEngine_Color_array *resultColors,
        int32_t resultTextureWidth,
        UnityEngine_Color_array *baseColors,
        int32_t baseTextureWidth,
        int32_t hIndex,
        int32_t vIndex,
        int32_t panelUnitSizeX,
        int32_t panelUnitSizeY,
        int32_t sliceIndex,
        const MethodInfo *method)
{
  int v10; // w9
  int v11; // w8
  int v12; // w9
  unsigned int v13; // w10
  __int64 v14; // x12
  unsigned int v15; // w13
  int v16; // w14
  Il2CppObject *v17; // x15
  Il2CppObject v18; // q0
  Il2CppObject *v19; // x15
  int v20; // w8
  int v21; // w9
  __int64 v22; // x11
  int v23; // w12
  Il2CppObject *v24; // x13

  v10 = panelUnitSizeX * hIndex;
  if ( (unsigned int)sliceIndex >= 9 )
  {
    if ( panelUnitSizeX >= 1 )
    {
      v20 = 0;
      v21 = v10 + panelUnitSizeY * vIndex * resultTextureWidth;
      while ( panelUnitSizeY < 1 )
      {
LABEL_18:
        ++v20;
        ++v21;
        if ( v20 == panelUnitSizeX )
          return;
      }
      v22 = (unsigned int)panelUnitSizeY;
      v23 = v21;
      if ( resultColors )
      {
        while ( (unsigned int)v23 < LODWORD(resultColors->max_length) )
        {
          v24 = &resultColors->obj + v23;
          --v22;
          v23 += resultTextureWidth;
          v24[2] = (Il2CppObject)xmmword_E93460;
          if ( !v22 )
            goto LABEL_18;
        }
LABEL_20:
        sub_21FFED4(resultColors);
      }
LABEL_21:
      sub_21FFECC(resultColors, *(_QWORD *)&resultTextureWidth);
    }
  }
  else if ( panelUnitSizeX >= 1 )
  {
    v11 = 0;
    v12 = v10 + panelUnitSizeY * vIndex * resultTextureWidth;
    v13 = (unsigned __int8)sliceIndex % 3u * panelUnitSizeX
        + panelUnitSizeY * baseTextureWidth * ((unsigned __int8)sliceIndex / 3u);
    while ( panelUnitSizeY < 1 )
    {
LABEL_10:
      ++v11;
      ++v12;
      ++v13;
      if ( v11 == panelUnitSizeX )
        return;
    }
    v14 = (unsigned int)panelUnitSizeY;
    v15 = v13;
    v16 = v12;
    if ( baseColors )
    {
      while ( v15 < LODWORD(baseColors->max_length) )
      {
        if ( !resultColors )
          goto LABEL_21;
        if ( (unsigned int)v16 >= LODWORD(resultColors->max_length) )
          break;
        v17 = &baseColors->obj + (int)v15;
        --v14;
        v15 += baseTextureWidth;
        v18 = v17[2];
        v19 = &resultColors->obj + v16;
        v16 += resultTextureWidth;
        v19[2] = v18;
        if ( !v14 )
          goto LABEL_10;
      }
      goto LABEL_20;
    }
    goto LABEL_21;
  }
}


UnityEngine_Texture2D_o *GridLineTextureUtil__CreateWholeGridTexture(
        System_Int32_array *excludePanelUniqueIds,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *gridTexture,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x20
  float x; // s0
  float y; // s1
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w24
  int32_t v12; // w26
  UnityEngine_Texture2D_o *v13; // x21
  UnityEngine_Color_array *v14; // x26
  UnityEngine_Color_array *Pixels_83107924; // x27
  const MethodInfo *v16; // x4
  unsigned int HorizontalPanelNum_k__BackingField; // w8
  unsigned int VerticalPanelNum_k__BackingField; // w9
  int32_t v19; // w25
  int32_t v20; // w28
  int32_t v21; // w29
  int32_t sliceIndex; // w0
  const MethodInfo *v24; // [xsp+8h] [xbp-78h]

  v6 = excludePanelUniqueIds;
  if ( (byte_5934E56 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Color___TypeInfo);
    excludePanelUniqueIds = (System_Int32_array *)sub_21FFC50(&UnityEngine_Texture2D_TypeInfo);
    byte_5934E56 = 1;
  }
  if ( !positionCalculator )
    goto LABEL_23;
  x = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  y = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v9 = x == INFINITY ? 0x80000000 : (int)x;
  v10 = y == INFINITY ? 0x80000000 : (int)y;
  v11 = v9 + v9 * positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v12 = v10 + v10 * positionCalculator->fields._VerticalPanelNum_k__BackingField;
  v13 = (UnityEngine_Texture2D_o *)sub_21FFEBC(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_83105820(v13, v11, v12, 0);
  if ( !gridTexture )
    goto LABEL_23;
  if ( ((int (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))gridTexture->klass->vtable._4_get_width.methodPtr)(
         gridTexture,
         gridTexture->klass->vtable._4_get_width.method) >= 3 * v9
    && ((int (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))gridTexture->klass->vtable._6_get_height.methodPtr)(
         gridTexture,
         gridTexture->klass->vtable._6_get_height.method) >= 3 * v10 )
  {
    v14 = (UnityEngine_Color_array *)sub_21FFD10(UnityEngine_Color___TypeInfo, (unsigned int)(v12 * v11));
    Pixels_83107924 = UnityEngine_Texture2D__GetPixels_83107924(gridTexture, 0);
    excludePanelUniqueIds = (System_Int32_array *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))gridTexture->klass->vtable._4_get_width.methodPtr)(
                                                    gridTexture,
                                                    gridTexture->klass->vtable._4_get_width.method);
    HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
    if ( HorizontalPanelNum_k__BackingField <= 0x7FFFFFFE )
    {
      VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
      v19 = (int)excludePanelUniqueIds;
      v20 = 0;
      do
      {
        if ( VerticalPanelNum_k__BackingField <= 0x7FFFFFFE )
        {
          v21 = 0;
          do
          {
            sliceIndex = GridLineTextureUtil__GetSliceIndex(v20, v21, v6, positionCalculator, v16);
            GridLineTextureUtil__ApplyTextureColor(v14, v11, Pixels_83107924, v19, v20, v21, v9, v10, sliceIndex, v24);
            VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
            ++v21;
          }
          while ( v21 < (int)(VerticalPanelNum_k__BackingField + 1) );
          HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        }
        ++v20;
      }
      while ( v20 < (int)(HorizontalPanelNum_k__BackingField + 1) );
    }
    if ( v13 )
    {
      UnityEngine_Texture2D__SetPixels_83106836(v13, v14, 0);
      UnityEngine_Texture2D__Apply_83107520(v13, 0);
      return v13;
    }
LABEL_23:
    sub_21FFECC(excludePanelUniqueIds, positionCalculator);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
int32_t GridLineTextureUtil__GetSliceIndex(
        int32_t hIndex,
        int32_t vIndex,
        System_Int32_array *excludePanelUniqueIds,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        const MethodInfo *method)
{
  int v8; // w20
  int32_t HorizontalPanelNum_k__BackingField; // w24
  int32_t VerticalPanelNum_k__BackingField; // w28
  _BOOL4 v12; // w25
  _BOOL4 v14; // w26
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  int v18; // w8
  int v19; // w27
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  int HasID; // w23
  __int64 v24; // x1
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  int v27; // w22
  int v28; // w8
  int32_t result; // w0
  int v30; // w9
  int v31; // w10
  int32_t v32; // w11
  int v33; // w10
  char v34; // w9

  v8 = hIndex;
  if ( (byte_5934E57 & 1) == 0 )
  {
    *(_QWORD *)&hIndex = sub_21FFC50(&PanelUniqueIDUtil_TypeInfo);
    byte_5934E57 = 1;
  }
  if ( !positionCalculator )
    sub_21FFECC(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
  v12 = vIndex > 0 && HorizontalPanelNum_k__BackingField > v8;
  v14 = v8 > 0 && VerticalPanelNum_k__BackingField > vIndex;
  if ( !*(&PanelUniqueIDUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex, excludePanelUniqueIds);
  v18 = (v8 > 0)
      & !PanelUniqueIDUtil__HasID(v8 - 1, vIndex - 1, excludePanelUniqueIds, (const MethodInfo *)positionCalculator);
  if ( vIndex > 0 )
    v19 = v18;
  else
    v19 = 0;
  if ( !*(&PanelUniqueIDUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, v15, v16);
  HasID = PanelUniqueIDUtil__HasID(v8 - 1, vIndex, excludePanelUniqueIds, v17);
  if ( !*(&PanelUniqueIDUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, v20, v21);
  v27 = PanelUniqueIDUtil__HasID(v8, vIndex - 1, excludePanelUniqueIds, v22);
  if ( !*(&PanelUniqueIDUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, v24, v25);
  v28 = (VerticalPanelNum_k__BackingField > vIndex) & ~PanelUniqueIDUtil__HasID(v8, vIndex, excludePanelUniqueIds, v26);
  result = 4;
  if ( HorizontalPanelNum_k__BackingField <= v8 )
    v28 = 0;
  if ( (v28 & v19) == 0 )
  {
    v30 = v14 & ~HasID;
    v31 = v12 & ~v27;
    if ( (v30 & v31 & 1) == 0 )
    {
      if ( (v31 & v19) != 0 )
      {
        return 7;
      }
      else if ( (v30 & v19) != 0 )
      {
        return 5;
      }
      else if ( (v28 & v31) != 0 )
      {
        return 3;
      }
      else
      {
        if ( v19 )
          v32 = 8;
        else
          v32 = 6;
        v33 = v28 & v30 | v19 | v31;
        if ( (v28 & v30) != 0 )
          v32 = 1;
        v34 = v33 | v30;
        if ( v33 )
          result = v32;
        else
          result = 2;
        if ( (v34 & 1) == 0 )
          return v28 - 1;
      }
    }
  }
  return result;
}