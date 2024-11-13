void __fastcall GridLineTextureUtil___ctor(GridLineTextureUtil_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GridLineTextureUtil__ApplyTextureColor(
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
  int v10; // w10
  int v11; // w8
  il2cpp_array_size_t v12; // w10
  unsigned int v13; // w11
  __int64 v14; // x12
  il2cpp_array_size_t v15; // w13
  il2cpp_array_size_t v16; // w14
  Il2CppObject v17; // q0
  Il2CppObject *v18; // x15
  int v19; // w8
  il2cpp_array_size_t v20; // w10
  __int64 v21; // x11
  il2cpp_array_size_t v22; // w12
  Il2CppObject *v23; // x13

  v10 = panelUnitSizeX * hIndex;
  if ( (unsigned int)sliceIndex >= 9 )
  {
    if ( panelUnitSizeX >= 1 )
    {
      v19 = 0;
      v20 = v10 + panelUnitSizeY * vIndex * resultTextureWidth;
      while ( panelUnitSizeY < 1 )
      {
LABEL_18:
        ++v19;
        ++v20;
        if ( v19 == panelUnitSizeX )
          return;
      }
      v21 = (unsigned int)panelUnitSizeY;
      v22 = v20;
      if ( resultColors )
      {
        while ( v22 < resultColors->max_length )
        {
          v23 = &resultColors->obj + (int)v22;
          --v21;
          v22 += resultTextureWidth;
          v23[2] = (Il2CppObject)xmmword_BD3A10;
          if ( !v21 )
            goto LABEL_18;
        }
LABEL_20:
        sub_1BCAA44(resultColors, resultTextureWidth);
      }
LABEL_21:
      sub_1BCAA3C(resultColors, *(_QWORD *)&resultTextureWidth);
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
      while ( v15 < baseColors->max_length )
      {
        if ( !resultColors )
          goto LABEL_21;
        if ( v16 >= resultColors->max_length )
          break;
        v17 = *(Il2CppObject *)&baseColors->m_Items[v15].fields.g;
        v18 = &resultColors->obj + (int)v16;
        v16 += resultTextureWidth;
        --v14;
        v15 += baseTextureWidth;
        v18[2] = v17;
        if ( !v14 )
          goto LABEL_10;
      }
      goto LABEL_20;
    }
    goto LABEL_21;
  }
}


UnityEngine_Texture2D_o *__fastcall GridLineTextureUtil__CreateWholeGridTexture(
        System_Int32_array *excludePanelUniqueIds,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *gridTexture,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  float x; // s0
  float y; // s1
  int32_t v11; // w22
  int32_t v12; // w23
  int32_t v13; // w24
  int32_t v14; // w25
  UnityEngine_Texture2D_o *v15; // x21
  UnityEngine_Color_array *v16; // x25
  UnityEngine_Color_array *Pixels_70044996; // x27
  const MethodInfo *v18; // x4
  int32_t HorizontalPanelNum_k__BackingField; // w8
  int32_t VerticalPanelNum_k__BackingField; // w9
  int32_t v21; // w26
  int32_t v22; // w28
  int32_t v23; // w29
  int32_t sliceIndex; // w0
  const MethodInfo *v26; // [xsp+8h] [xbp-68h]

  v6 = excludePanelUniqueIds;
  if ( (byte_4B12E15 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, positionCalculator, gridTexture);
    excludePanelUniqueIds = (System_Int32_array *)sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v7, v8);
    byte_4B12E15 = 1;
  }
  if ( !positionCalculator )
    goto LABEL_23;
  x = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  y = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v11 = x == INFINITY ? 0x80000000 : (int)x;
  v12 = y == INFINITY ? 0x80000000 : (int)y;
  v13 = (positionCalculator->fields._HorizontalPanelNum_k__BackingField + 1) * v11;
  v14 = (positionCalculator->fields._VerticalPanelNum_k__BackingField + 1) * v12;
  v15 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, positionCalculator, gridTexture, method);
  UnityEngine_Texture2D___ctor_70042608(v15, v13, v14, 0LL);
  if ( !gridTexture )
    goto LABEL_23;
  if ( ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))gridTexture->klass->vtable._4_get_width.method)(
         gridTexture,
         gridTexture->klass->vtable._5_set_width.methodPtr) >= 3 * v11
    && ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))gridTexture->klass->vtable._6_get_height.method)(
         gridTexture,
         gridTexture->klass->vtable._7_set_height.methodPtr) >= 3 * v12 )
  {
    v16 = (UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, (unsigned int)(v14 * v13));
    Pixels_70044996 = UnityEngine_Texture2D__GetPixels_70044996(gridTexture, 0LL);
    excludePanelUniqueIds = (System_Int32_array *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))gridTexture->klass->vtable._4_get_width.method)(
                                                    gridTexture,
                                                    gridTexture->klass->vtable._5_set_width.methodPtr);
    HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
    if ( HorizontalPanelNum_k__BackingField + 1 >= 1 )
    {
      VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
      v21 = (int)excludePanelUniqueIds;
      v22 = 0;
      do
      {
        if ( VerticalPanelNum_k__BackingField + 1 >= 1 )
        {
          v23 = 0;
          do
          {
            sliceIndex = GridLineTextureUtil__GetSliceIndex(v22, v23, v6, positionCalculator, v18);
            GridLineTextureUtil__ApplyTextureColor(v16, v13, Pixels_70044996, v21, v22, v23, v11, v12, sliceIndex, v26);
            VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
            ++v23;
          }
          while ( v23 < VerticalPanelNum_k__BackingField + 1 );
          HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        }
        ++v22;
      }
      while ( v22 < HorizontalPanelNum_k__BackingField + 1 );
    }
    if ( v15 )
    {
      UnityEngine_Texture2D__SetPixels_70043500(v15, v16, 0LL);
      UnityEngine_Texture2D__Apply_70044272(v15, 0LL);
      return v15;
    }
LABEL_23:
    sub_1BCAA3C(excludePanelUniqueIds, positionCalculator);
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GridLineTextureUtil__GetSliceIndex(
        int32_t hIndex,
        int32_t vIndex,
        System_Int32_array *excludePanelUniqueIds,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        const MethodInfo *method)
{
  int32_t v8; // w21
  _BOOL4 v9; // w27
  _BOOL4 v10; // w28
  __int64 v11; // x1
  _BOOL4 HasID; // w22
  __int64 v13; // x1
  _BOOL4 v14; // w24
  int v15; // w24
  __int64 v16; // x1
  int v17; // w23
  _BOOL4 v18; // w8
  int32_t result; // w0
  int v20; // w8
  int v21; // w9
  int v22; // w10
  int v23; // w11
  int32_t v24; // w9

  v8 = hIndex;
  if ( (byte_4B12E16 & 1) == 0 )
  {
    *(_QWORD *)&hIndex = sub_1BCA7E0(&PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex, excludePanelUniqueIds);
    byte_4B12E16 = 1;
  }
  if ( !positionCalculator )
    sub_1BCAA3C(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  v9 = positionCalculator->fields._HorizontalPanelNum_k__BackingField > v8;
  v10 = positionCalculator->fields._VerticalPanelNum_k__BackingField > vIndex;
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex);
  HasID = PanelUniqueIDUtil__HasID(v8 - 1, vIndex - 1, excludePanelUniqueIds, 0LL);
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, v11);
  v14 = !PanelUniqueIDUtil__HasID(v8 - 1, vIndex, excludePanelUniqueIds, 0LL);
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, v13);
  v15 = v8 > 0 && v10 && v14;
  v17 = (vIndex > 0 && v9) & !PanelUniqueIDUtil__HasID(v8, vIndex - 1, excludePanelUniqueIds, 0LL);
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, v16);
  v18 = PanelUniqueIDUtil__HasID(v8, vIndex, excludePanelUniqueIds, 0LL);
  result = 4;
  if ( (v15 & v17 & 1) == 0 )
  {
    v20 = v9 && v10 && !v18;
    if ( ((v8 > 0 && vIndex > 0 && !HasID) & (unsigned __int8)v20) == 0 )
    {
      if ( ((v8 > 0 && vIndex > 0 && !HasID) & (unsigned __int8)v17) != 0 )
      {
        return 7;
      }
      else if ( ((v8 > 0 && vIndex > 0 && !HasID) & (unsigned __int8)v15) != 0 )
      {
        return 5;
      }
      else if ( (v17 & v20 & 1) != 0 )
      {
        return 3;
      }
      else
      {
        v21 = (v8 > 0 && vIndex > 0 && !HasID) | v15 & v20;
        if ( (v15 & v20) != 0 )
          v22 = 1;
        else
          v22 = 8;
        v23 = v17 | v21;
        if ( v21 )
          v24 = v22;
        else
          v24 = 6;
        if ( v23 )
          result = v24;
        else
          result = 2;
        if ( (((unsigned __int8)v15 | (unsigned __int8)v23) & 1) == 0 )
          return v20 - 1;
      }
    }
  }
  return result;
}