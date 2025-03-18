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
          v23[2] = (Il2CppObject)xmmword_C0E740;
          if ( !v21 )
            goto LABEL_18;
        }
LABEL_20:
        sub_1C3B9C8(resultColors, *(_QWORD *)&resultTextureWidth);
      }
LABEL_21:
      sub_1C3B9C0(resultColors, resultTextureWidth);
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
  float x; // s0
  float y; // s1
  int32_t v10; // w22
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w25
  UnityEngine_Texture2D_o *v14; // x21
  UnityEngine_Color_array *v15; // x25
  UnityEngine_Color_array *Pixels_71013500; // x27
  const MethodInfo *v17; // x4
  int32_t HorizontalPanelNum_k__BackingField; // w8
  int32_t VerticalPanelNum_k__BackingField; // w9
  int32_t v20; // w26
  int32_t v21; // w28
  int32_t v22; // w29
  int32_t sliceIndex; // w0
  const MethodInfo *v25; // [xsp+8h] [xbp-68h]

  v6 = excludePanelUniqueIds;
  if ( (byte_4C1EAD6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Color___TypeInfo, positionCalculator);
    excludePanelUniqueIds = (System_Int32_array *)sub_1C3B764(&UnityEngine_Texture2D_TypeInfo, v7);
    byte_4C1EAD6 = 1;
  }
  if ( !positionCalculator )
    goto LABEL_23;
  x = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  y = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v10 = x == INFINITY ? 0x80000000 : (int)x;
  v11 = y == INFINITY ? 0x80000000 : (int)y;
  v12 = (positionCalculator->fields._HorizontalPanelNum_k__BackingField + 1) * v10;
  v13 = (positionCalculator->fields._VerticalPanelNum_k__BackingField + 1) * v11;
  v14 = (UnityEngine_Texture2D_o *)sub_1C3B9B0(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_71011112(v14, v12, v13, 0LL);
  if ( !gridTexture )
    goto LABEL_23;
  if ( ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))gridTexture->klass->vtable._4_get_width.method)(
         gridTexture,
         gridTexture->klass->vtable._5_set_width.methodPtr) >= 3 * v10
    && ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))gridTexture->klass->vtable._6_get_height.method)(
         gridTexture,
         gridTexture->klass->vtable._7_set_height.methodPtr) >= 3 * v11 )
  {
    v15 = (UnityEngine_Color_array *)sub_1C3B80C(UnityEngine_Color___TypeInfo, (unsigned int)(v13 * v12));
    Pixels_71013500 = UnityEngine_Texture2D__GetPixels_71013500(gridTexture, 0LL);
    excludePanelUniqueIds = (System_Int32_array *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))gridTexture->klass->vtable._4_get_width.method)(
                                                    gridTexture,
                                                    gridTexture->klass->vtable._5_set_width.methodPtr);
    HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
    if ( HorizontalPanelNum_k__BackingField + 1 >= 1 )
    {
      VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
      v20 = (int)excludePanelUniqueIds;
      v21 = 0;
      do
      {
        if ( VerticalPanelNum_k__BackingField + 1 >= 1 )
        {
          v22 = 0;
          do
          {
            sliceIndex = GridLineTextureUtil__GetSliceIndex(v21, v22, v6, positionCalculator, v17);
            GridLineTextureUtil__ApplyTextureColor(v15, v12, Pixels_71013500, v20, v21, v22, v10, v11, sliceIndex, v25);
            VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
            ++v22;
          }
          while ( v22 < VerticalPanelNum_k__BackingField + 1 );
          HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        }
        ++v21;
      }
      while ( v21 < HorizontalPanelNum_k__BackingField + 1 );
    }
    if ( v14 )
    {
      UnityEngine_Texture2D__SetPixels_71012004(v14, v15, 0LL);
      UnityEngine_Texture2D__Apply_71012776(v14, 0LL);
      return v14;
    }
LABEL_23:
    sub_1C3B9C0(excludePanelUniqueIds, positionCalculator);
  }
  return v14;
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
  _BOOL4 HasID; // w22
  _BOOL4 v12; // w24
  int v13; // w24
  int v14; // w23
  _BOOL4 v15; // w8
  int32_t result; // w0
  int v17; // w8
  int v18; // w9
  int v19; // w10
  int v20; // w11
  int32_t v21; // w9

  v8 = hIndex;
  if ( (byte_4C1EAD7 & 1) == 0 )
  {
    *(_QWORD *)&hIndex = sub_1C3B764(&PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex);
    byte_4C1EAD7 = 1;
  }
  if ( !positionCalculator )
    sub_1C3B9C0(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  v9 = positionCalculator->fields._HorizontalPanelNum_k__BackingField > v8;
  v10 = positionCalculator->fields._VerticalPanelNum_k__BackingField > vIndex;
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  HasID = PanelUniqueIDUtil__HasID(v8 - 1, vIndex - 1, excludePanelUniqueIds, 0LL);
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  v12 = !PanelUniqueIDUtil__HasID(v8 - 1, vIndex, excludePanelUniqueIds, 0LL);
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  v13 = v8 > 0 && v10 && v12;
  v14 = (vIndex > 0 && v9) & !PanelUniqueIDUtil__HasID(v8, vIndex - 1, excludePanelUniqueIds, 0LL);
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  v15 = PanelUniqueIDUtil__HasID(v8, vIndex, excludePanelUniqueIds, 0LL);
  result = 4;
  if ( (v13 & v14 & 1) == 0 )
  {
    v17 = v9 && v10 && !v15;
    if ( ((v8 > 0 && vIndex > 0 && !HasID) & (unsigned __int8)v17) == 0 )
    {
      if ( ((v8 > 0 && vIndex > 0 && !HasID) & (unsigned __int8)v14) != 0 )
      {
        return 7;
      }
      else if ( ((v8 > 0 && vIndex > 0 && !HasID) & (unsigned __int8)v13) != 0 )
      {
        return 5;
      }
      else if ( (v14 & v17 & 1) != 0 )
      {
        return 3;
      }
      else
      {
        v18 = (v8 > 0 && vIndex > 0 && !HasID) | v13 & v17;
        if ( (v13 & v17) != 0 )
          v19 = 1;
        else
          v19 = 8;
        v20 = v14 | v18;
        if ( v18 )
          v21 = v19;
        else
          v21 = 6;
        if ( v20 )
          result = v21;
        else
          result = 2;
        if ( (((unsigned __int8)v13 | (unsigned __int8)v20) & 1) == 0 )
          return v17 - 1;
      }
    }
  }
  return result;
}