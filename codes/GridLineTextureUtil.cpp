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
  int v14; // w10
  int32_t v15; // w8
  il2cpp_array_size_t v16; // w10
  unsigned int v17; // w11
  __int64 v18; // x12
  il2cpp_array_size_t v19; // w13
  il2cpp_array_size_t v20; // w14
  Il2CppObject v21; // q0
  Il2CppObject *v22; // x16
  int32_t v23; // w23
  il2cpp_array_size_t v24; // w25
  __int64 v25; // x26
  il2cpp_array_size_t v26; // w27
  int v27; // s0
  int v28; // s1
  int v29; // s2
  int v30; // s3
  Il2CppObject *v31; // x8
  __int64 v32; // x0

  v14 = panelUnitSizeX * hIndex;
  if ( (unsigned int)sliceIndex >= 9 )
  {
    if ( panelUnitSizeX >= 1 )
    {
      v23 = 0;
      v24 = v14 + panelUnitSizeY * vIndex * resultTextureWidth;
      while ( panelUnitSizeY < 1 )
      {
LABEL_20:
        ++v23;
        ++v24;
        if ( v23 >= panelUnitSizeX )
          return;
      }
      v25 = 0LL;
      v26 = v24;
      while ( 1 )
      {
        *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_black(0LL);
        if ( !resultColors )
          break;
        if ( v26 >= resultColors->max_length )
          goto LABEL_22;
        ++v25;
        v31 = &resultColors->obj + (int)v26;
        v26 += resultTextureWidth;
        LODWORD(v31[2].klass) = v27;
        HIDWORD(v31[2].klass) = v28;
        LODWORD(v31[2].monitor) = v29;
        HIDWORD(v31[2].monitor) = v30;
        if ( v25 >= panelUnitSizeY )
          goto LABEL_20;
      }
LABEL_23:
      sub_B52A5C(resultColors, *(_QWORD *)&resultTextureWidth);
    }
  }
  else if ( panelUnitSizeX >= 1 )
  {
    v15 = 0;
    v16 = v14 + panelUnitSizeY * vIndex * resultTextureWidth;
    v17 = (unsigned __int8)sliceIndex % 3u * panelUnitSizeX
        + panelUnitSizeY * baseTextureWidth * ((unsigned __int8)sliceIndex / 3u);
    while ( panelUnitSizeY < 1 )
    {
LABEL_11:
      ++v15;
      ++v16;
      ++v17;
      if ( v15 >= panelUnitSizeX )
        return;
    }
    if ( baseColors )
    {
      v18 = 0LL;
      v19 = v17;
      v20 = v16;
      while ( v19 < baseColors->max_length )
      {
        if ( !resultColors )
          goto LABEL_23;
        if ( v20 >= resultColors->max_length )
          break;
        v21 = *(Il2CppObject *)&baseColors->m_Items[v19].fields.g;
        ++v18;
        v22 = &resultColors->obj + (int)v20;
        v20 += resultTextureWidth;
        v19 += baseTextureWidth;
        v22[2] = v21;
        if ( v18 >= panelUnitSizeY )
          goto LABEL_11;
      }
LABEL_22:
      v32 = sub_B52A88(resultColors);
      sub_B52A28(v32, 0LL);
    }
    goto LABEL_23;
  }
}


UnityEngine_Texture2D_o *__fastcall GridLineTextureUtil__CreateWholeGridTexture(
        System_Int32_array *excludePanelUniqueIds,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *gridTexture,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x20
  int32_t PanelUnitSizeX; // w21
  int32_t PanelUnitSizeY; // w23
  int32_t v9; // w24
  int32_t v10; // w26
  UnityEngine_Texture2D_o *v11; // x22
  UnityEngine_Color_array *v12; // x26
  UnityEngine_Color_array *Pixels_35721976; // x27
  const MethodInfo *v14; // x4
  int32_t HorizontalPanelNum_k__BackingField; // w8
  int32_t VerticalPanelNum_k__BackingField; // w9
  int32_t v17; // w25
  int32_t v18; // w28
  int32_t v19; // w22
  int32_t sliceIndex; // w0
  const MethodInfo *v22; // [xsp+8h] [xbp-68h]
  UnityEngine_Texture2D_o *v23; // [xsp+18h] [xbp-58h]

  v6 = excludePanelUniqueIds;
  if ( (byte_42B1B5D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Color___TypeInfo);
    excludePanelUniqueIds = (System_Int32_array *)sub_B52984(&UnityEngine_Texture2D_TypeInfo);
    byte_42B1B5D = 1;
  }
  if ( !positionCalculator )
    goto LABEL_17;
  PanelUnitSizeX = SubmarinePanelPositionCalculator__get_PanelUnitSizeX(positionCalculator, 0LL);
  PanelUnitSizeY = SubmarinePanelPositionCalculator__get_PanelUnitSizeY(positionCalculator, 0LL);
  v9 = (positionCalculator->fields._HorizontalPanelNum_k__BackingField + 1) * PanelUnitSizeX;
  v10 = (positionCalculator->fields._VerticalPanelNum_k__BackingField + 1) * PanelUnitSizeY;
  v11 = (UnityEngine_Texture2D_o *)sub_B52A54(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_35719720(v11, v9, v10, 0LL);
  if ( !gridTexture )
    goto LABEL_17;
  if ( ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))gridTexture->klass->vtable._4_get_width.method)(
         gridTexture,
         gridTexture->klass->vtable._5_set_width.methodPtr) >= 3 * PanelUnitSizeX
    && ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))gridTexture->klass->vtable._6_get_height.method)(
         gridTexture,
         gridTexture->klass->vtable._7_set_height.methodPtr) >= 3 * PanelUnitSizeY )
  {
    v23 = v11;
    v12 = (UnityEngine_Color_array *)sub_B5299C(UnityEngine_Color___TypeInfo, (unsigned int)(v10 * v9));
    Pixels_35721976 = UnityEngine_Texture2D__GetPixels_35721976(gridTexture, 0LL);
    excludePanelUniqueIds = (System_Int32_array *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))gridTexture->klass->vtable._4_get_width.method)(
                                                    gridTexture,
                                                    gridTexture->klass->vtable._5_set_width.methodPtr);
    HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
    if ( HorizontalPanelNum_k__BackingField + 1 >= 1 )
    {
      VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
      v17 = (int)excludePanelUniqueIds;
      v18 = 0;
      do
      {
        if ( VerticalPanelNum_k__BackingField + 1 >= 1 )
        {
          v19 = 0;
          do
          {
            sliceIndex = GridLineTextureUtil__GetSliceIndex(v18, v19, v6, positionCalculator, v14);
            GridLineTextureUtil__ApplyTextureColor(
              v12,
              v9,
              Pixels_35721976,
              v17,
              v18,
              v19,
              PanelUnitSizeX,
              PanelUnitSizeY,
              sliceIndex,
              v22);
            VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
            ++v19;
          }
          while ( v19 < VerticalPanelNum_k__BackingField + 1 );
          HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        }
        ++v18;
      }
      while ( v18 < HorizontalPanelNum_k__BackingField + 1 );
    }
    v11 = v23;
    if ( v23 )
    {
      UnityEngine_Texture2D__SetPixels_35720632(v23, v12, 0LL);
      UnityEngine_Texture2D__Apply_35721460(v23, 0LL);
      return v11;
    }
LABEL_17:
    sub_B52A5C(excludePanelUniqueIds, positionCalculator);
  }
  return v11;
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
  int32_t VerticalPanelNum_k__BackingField; // w9
  _BOOL4 v10; // w22
  _BOOL4 v11; // w28
  _BOOL4 v12; // w24
  int v13; // w24
  int v14; // w23
  _BOOL4 v15; // w8
  int32_t result; // w0
  int v17; // w8
  int v18; // w9
  int32_t v19; // w10
  int v20; // w11
  bool v21; // zf
  char v22; // w9
  _BOOL4 HasID; // [xsp+4h] [xbp-5Ch]

  v8 = hIndex;
  if ( (byte_42B1B5E & 1) == 0 )
  {
    *(_QWORD *)&hIndex = sub_B52984(&PanelUniqueIDUtil_TypeInfo);
    byte_42B1B5E = 1;
  }
  if ( !positionCalculator )
    sub_B52A5C(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
  v10 = positionCalculator->fields._HorizontalPanelNum_k__BackingField > v8;
  v11 = VerticalPanelNum_k__BackingField > vIndex;
  if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  }
  HasID = PanelUniqueIDUtil__HasID(v8 - 1, vIndex - 1, excludePanelUniqueIds, 0LL);
  if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  }
  v12 = !PanelUniqueIDUtil__HasID(v8 - 1, vIndex, excludePanelUniqueIds, 0LL);
  if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  }
  v13 = v8 > 0 && v11 && v12;
  v14 = (vIndex > 0 && v10) & !PanelUniqueIDUtil__HasID(v8, vIndex - 1, excludePanelUniqueIds, 0LL);
  if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  }
  v15 = PanelUniqueIDUtil__HasID(v8, vIndex, excludePanelUniqueIds, 0LL);
  result = 4;
  if ( (v13 & v14 & 1) == 0 )
  {
    v17 = v10 && v11 && !v15;
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
        v21 = v18 == 0;
        v22 = v13 | v14 | v18;
        if ( v21 )
          v19 = 6;
        if ( v20 )
          result = v19;
        else
          result = 2;
        if ( (v22 & 1) == 0 )
          return ~v17 << 31 >> 31;
      }
    }
  }
  return result;
}