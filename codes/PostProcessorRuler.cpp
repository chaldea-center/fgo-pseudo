void __fastcall PostProcessorRuler___ctor(PostProcessorRuler_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Array_o *v14; // x0
  struct System_Int32_array *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Array_o *v18; // x0
  struct System_Int32_array *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Array_o *v22; // x0
  struct System_Int32_array *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Array_o *v26; // x0
  struct System_Int32_array *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Array_o *v30; // x0
  struct System_Int32_array *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Array_o *v34; // x0
  struct System_Int32_array *v35; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Array_o *v38; // x0
  struct System_Int32_array *v39; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Array_o *v42; // x0
  struct System_Int32_array *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Array_o *v46; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Array_o *v49; // x20
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Int32_array *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  const MethodInfo *v55; // x3
  unsigned int max_length; // w8
  System_Array_o *v57; // x0
  struct System_Int32_array *v58; // x20
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_RuntimeFieldHandle_o v61; // 0:w1.4
  System_RuntimeFieldHandle_o v62; // 0:w1.4
  System_RuntimeFieldHandle_o v63; // 0:w1.4
  System_RuntimeFieldHandle_o v64; // 0:w1.4
  System_RuntimeFieldHandle_o v65; // 0:w1.4
  System_RuntimeFieldHandle_o v66; // 0:w1.4
  System_RuntimeFieldHandle_o v67; // 0:w1.4
  System_RuntimeFieldHandle_o v68; // 0:w1.4
  System_RuntimeFieldHandle_o v69; // 0:w1.4
  System_RuntimeFieldHandle_o v70; // 0:w1.4
  System_RuntimeFieldHandle_o v71; // 0:w1.4

  if ( (byte_4B4295F & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__06F4290E9FBE47067FB3007610883278D1E16936A41BDFE41DCE11B9AAE3676B,
      v3);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__1ED8BBF477075524B2CD372A44DEC8C53A9D1FF92A9BD9623A02FB4107A46665,
      v4);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__3ACF2EF2096C6B462EC79E4FA671815BB2AF869418FC7D07A7DF6CCCB0C7E275,
      v5);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__5F74BEAD322B2229C20441AFA97D8EF15BB4BDB0EE9A5DDF7DBFDC9379B9B4F9,
      v6);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__6F7B48BDF9B07742A2259E00722D7F7A406A4D2907408BCFCFEF21FD1CC38395,
      v7);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__94ED0ED59BC1BD316129504FB4788BCA7FD7D74AE2E779CFC33DC902B635A317,
      v8);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__9720C82395D62B4D89A4F86ECB11B6E9FA2767DE6BACCA9CE2190E019214A4B4,
      v9);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__9CB0A842F7477752CF0ED88779DFAC4F86B01B03E69826CBA999C580ECACA29D,
      v10);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__AE68F3792257FF6FCCB904CBD3739F960550FD677BA4B610C584A1531271CED1,
      v11);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__BC6F102CE3DCBD686D4D19E9E14616D336836856DB492377F49FEE50F035E423,
      v12);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__D5226DFBCE5F9EF51AB2D0514E06039745D500CFC2AA49E5EB2D5333852556B1,
      v13);
    byte_4B4295F = 1;
  }
  v14 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v61.fields.value = Field__PrivateImplementationDetails__9720C82395D62B4D89A4F86ECB11B6E9FA2767DE6BACCA9CE2190E019214A4B4;
  v15 = (struct System_Int32_array *)v14;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v14, v61, 0LL);
  this->fields.num0 = v15;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.num0, (int32_t)v15, v16, v17);
  v18 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v62.fields.value = Field__PrivateImplementationDetails__5F74BEAD322B2229C20441AFA97D8EF15BB4BDB0EE9A5DDF7DBFDC9379B9B4F9;
  v19 = (struct System_Int32_array *)v18;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v18, v62, 0LL);
  this->fields.num1 = v19;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.num1, (int32_t)v19, v20, v21);
  v22 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v63.fields.value = Field__PrivateImplementationDetails__94ED0ED59BC1BD316129504FB4788BCA7FD7D74AE2E779CFC33DC902B635A317;
  v23 = (struct System_Int32_array *)v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v22, v63, 0LL);
  this->fields.num2 = v23;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.num2, (int32_t)v23, v24, v25);
  v26 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v64.fields.value = Field__PrivateImplementationDetails__BC6F102CE3DCBD686D4D19E9E14616D336836856DB492377F49FEE50F035E423;
  v27 = (struct System_Int32_array *)v26;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v26, v64, 0LL);
  this->fields.num3 = v27;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.num3, (int32_t)v27, v28, v29);
  v30 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v65.fields.value = Field__PrivateImplementationDetails__06F4290E9FBE47067FB3007610883278D1E16936A41BDFE41DCE11B9AAE3676B;
  v31 = (struct System_Int32_array *)v30;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v30, v65, 0LL);
  this->fields.num4 = v31;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.num4, (int32_t)v31, v32, v33);
  v34 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v66.fields.value = Field__PrivateImplementationDetails__1ED8BBF477075524B2CD372A44DEC8C53A9D1FF92A9BD9623A02FB4107A46665;
  v35 = (struct System_Int32_array *)v34;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v34, v66, 0LL);
  this->fields.num5 = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.num5, (int32_t)v35, v36, v37);
  v38 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v67.fields.value = Field__PrivateImplementationDetails__9CB0A842F7477752CF0ED88779DFAC4F86B01B03E69826CBA999C580ECACA29D;
  v39 = (struct System_Int32_array *)v38;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v38, v67, 0LL);
  this->fields.num6 = v39;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.num6, (int32_t)v39, v40, v41);
  v42 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v68.fields.value = Field__PrivateImplementationDetails__AE68F3792257FF6FCCB904CBD3739F960550FD677BA4B610C584A1531271CED1;
  v43 = (struct System_Int32_array *)v42;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v42, v68, 0LL);
  this->fields.num7 = v43;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.num7, (int32_t)v43, v44, v45);
  v46 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v69.fields.value = Field__PrivateImplementationDetails__3ACF2EF2096C6B462EC79E4FA671815BB2AF869418FC7D07A7DF6CCCB0C7E275;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v46, v69, 0LL);
  this->fields.num8 = (struct System_Int32_array *)v46;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.num8, (int32_t)v46, v47, v48);
  v49 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v70.fields.value = Field__PrivateImplementationDetails__D5226DFBCE5F9EF51AB2D0514E06039745D500CFC2AA49E5EB2D5333852556B1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v49, v70, 0LL);
  this->fields.num9 = (struct System_Int32_array *)v49;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.num9, (int32_t)v49, v50, v51);
  v52 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, 35LL);
  if ( !v52 )
    sub_1BDBAD4(0LL, v53);
  max_length = v52->max_length;
  if ( max_length <= 0x1B || (v52->m_Items[28] = 1, max_length <= 0x20) )
    sub_1BDBADC(v52, v52, v54);
  v52->m_Items[33] = 1;
  this->fields.comma = v52;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.comma, (int32_t)v52, v54, v55);
  v57 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 35LL);
  v71.fields.value = Field__PrivateImplementationDetails__6F7B48BDF9B07742A2259E00722D7F7A406A4D2907408BCFCFEF21FD1CC38395;
  v58 = (struct System_Int32_array *)v57;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v57, v71, 0LL);
  this->fields.subtract = v58;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.subtract, (int32_t)v58, v59, v60);
  *(_QWORD *)&this->fields.fontSize = 0x100000002LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PostProcessorRuler__CreateNewRenderTextureIfNecessary(
        PostProcessorRuler_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_RenderTexture_o **p_rt; // x20
  UnityEngine_Object_o *rt; // x21
  int32_t rtWidth; // w21
  int32_t rtHeight; // w21
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_o *v9; // x21
  int32_t width; // w21
  int32_t height; // w22
  UnityEngine_RenderTexture_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  UnityEngine_RenderTexture_o *v16; // x0

  if ( (byte_4B42955 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&UnityEngine_RenderTexture_TypeInfo, v3);
    byte_4B42955 = 1;
  }
  p_rt = &this->fields.rt;
  rt = (UnityEngine_Object_o *)this->fields.rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rt, 0LL, 0LL)
    || (rtWidth = this->fields.rtWidth, rtWidth != UnityEngine_Screen__get_width(0LL))
    || (rtHeight = this->fields.rtHeight, rtHeight != UnityEngine_Screen__get_height(0LL)) )
  {
    v8 = (UnityEngine_Object_o *)*p_rt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    {
      v9 = (UnityEngine_Object_o *)*p_rt;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70284200(v9, 0LL);
    }
    width = UnityEngine_Screen__get_width(0LL);
    height = UnityEngine_Screen__get_height(0LL);
    v12 = (UnityEngine_RenderTexture_o *)sub_1BDBAC4(UnityEngine_RenderTexture_TypeInfo);
    UnityEngine_RenderTexture___ctor_70191008(v12, width, height, 0, 0LL);
    *p_rt = v12;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.rt, (int32_t)v12, v13, v14);
    v16 = *p_rt;
    if ( !*p_rt || (UnityEngine_RenderTexture__set_enableRandomWrite(v16, 1, 0LL), (v16 = *p_rt) == 0LL) )
      sub_1BDBAD4(v16, v15);
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)v16, 0, 0LL);
    this->fields.rtWidth = UnityEngine_Screen__get_width(0LL);
    this->fields.rtHeight = UnityEngine_Screen__get_height(0LL);
  }
}


void __fastcall PostProcessorRuler__CreateRulerUnitInfoHorizontal(
        PostProcessorRuler_o *this,
        System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__o *unitInfos,
        float horizontalStep,
        int32_t lengthY,
        const MethodInfo *method)
{
  int32_t LimitMaxX; // w8
  float v10; // s9
  float v11; // s10
  int v12; // w28
  float v13; // s12
  System_Math_c *v14; // x0
  int32_t v15; // w8
  int32_t LimitMinY; // w10
  struct PostProcessorRuler_RulerUnitInfo_array *items; // x9
  _QWORD *v18; // x11
  __int64 size; // x12
  int32_t v20; // w10
  char *v21; // x9
  const MethodInfo_378398C *v22; // x2
  int32_t v23; // w8
  int32_t v24; // w10
  struct PostProcessorRuler_RulerUnitInfo_array *v25; // x9
  _QWORD *v26; // x11
  __int64 v27; // x12
  int32_t v28; // w10
  char *v29; // x9
  const MethodInfo_378398C *v30; // x2
  PostProcessorRuler_RulerUnitInfo_o v31; // [xsp+8h] [xbp-A8h] BYREF

  if ( (byte_4B4295B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__Add__, unitInfos);
    byte_4B4295B = 1;
  }
  LimitMaxX = this->fields.screenRect.fields.LimitMaxX;
  v10 = (float)(this->fields.screenRect.fields.LimitMinX + (LimitMaxX - this->fields.screenRect.fields.LimitMinX) / 2);
  v11 = v10 + horizontalStep;
  if ( (float)(v10 + horizontalStep) < (float)LimitMaxX )
  {
    v12 = this->fields.screenRect.fields.LimitMaxY - this->fields.screenRect.fields.LimitMinY - 36;
    v13 = horizontalStep;
    do
    {
      if ( !byte_4B3E910 )
      {
        sub_1BDB878(&System_Math_TypeInfo, unitInfos);
        byte_4B3E910 = 1;
      }
      v14 = System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v15 = vcvtms_s32_f32(v13 + v10);
      if ( floorf(v13 + v10) == INFINITY )
        v15 = 0x80000000;
      if ( !unitInfos
        || (LimitMinY = this->fields.screenRect.fields.LimitMinY,
            items = unitInfos->fields._items,
            v18 = Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__Add__,
            ++unitInfos->fields._version,
            !items) )
      {
LABEL_29:
        sub_1BDBAD4(v14, unitInfos);
      }
      size = unitInfos->fields._size;
      v20 = v12 + LimitMinY;
      if ( (unsigned int)size >= items->max_length )
      {
        v22 = *(const MethodInfo_378398C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL);
        v31.fields.PositionX = v15;
        v31.fields.PositionY = v20;
        v31.fields.LengthX = 1;
        v31.fields.LengthY = lengthY;
        *(_QWORD *)&v31.fields.StepX = 0x100000000LL;
        System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo___AddWithResize(unitInfos, &v31, v22);
      }
      else
      {
        v21 = (char *)items + 24 * size;
        unitInfos->fields._size = size + 1;
        *((_DWORD *)v21 + 8) = v15;
        *((_DWORD *)v21 + 9) = v20;
        *((_DWORD *)v21 + 10) = 1;
        *((_DWORD *)v21 + 11) = lengthY;
        *((_QWORD *)v21 + 6) = 0x100000000LL;
      }
      if ( !byte_4B3E910 )
      {
        sub_1BDB878(&System_Math_TypeInfo, unitInfos);
        byte_4B3E910 = 1;
      }
      v14 = System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v23 = vcvtms_s32_f32(v10 - v13);
      if ( floorf(v10 - v13) == INFINITY )
        v23 = 0x80000000;
      if ( v23 > this->fields.screenRect.fields.LimitMinX + 36 )
      {
        v24 = this->fields.screenRect.fields.LimitMinY;
        v25 = unitInfos->fields._items;
        v26 = Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__Add__;
        ++unitInfos->fields._version;
        if ( !v25 )
          goto LABEL_29;
        v27 = unitInfos->fields._size;
        v28 = v12 + v24;
        if ( (unsigned int)v27 >= v25->max_length )
        {
          v30 = *(const MethodInfo_378398C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL);
          v31.fields.PositionX = v23;
          v31.fields.PositionY = v28;
          v31.fields.LengthX = 1;
          v31.fields.LengthY = lengthY;
          *(_QWORD *)&v31.fields.StepX = 0x100000000LL;
          System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo___AddWithResize(unitInfos, &v31, v30);
        }
        else
        {
          v29 = (char *)v25 + 24 * v27;
          unitInfos->fields._size = v27 + 1;
          *((_DWORD *)v29 + 8) = v23;
          *((_DWORD *)v29 + 9) = v28;
          *((_DWORD *)v29 + 10) = 1;
          *((_DWORD *)v29 + 11) = lengthY;
          *((_QWORD *)v29 + 6) = 0x100000000LL;
        }
      }
      v11 = v11 + horizontalStep;
      v13 = v13 + horizontalStep;
    }
    while ( v11 < (float)this->fields.screenRect.fields.LimitMaxX );
  }
}


void __fastcall PostProcessorRuler__CreateRulerUnitInfoVertical(
        PostProcessorRuler_o *this,
        System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__o *unitInfos,
        float verticalStep,
        int32_t lengthX,
        const MethodInfo *method)
{
  int32_t height; // w0
  __int64 v10; // x1
  int32_t LimitMinY; // w8
  float v12; // s9
  float v13; // s10
  int32_t LimitMinX; // w29
  System_Math_c *v15; // x0
  int32_t v16; // w8
  struct PostProcessorRuler_RulerUnitInfo_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x12
  char *v20; // x9
  const MethodInfo_378398C *v21; // x2
  PostProcessorRuler_RulerUnitInfo_o v22; // [xsp+8h] [xbp-98h] BYREF

  if ( (byte_4B4295C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__Add__, unitInfos);
    byte_4B4295C = 1;
  }
  height = UnityEngine_Screen__get_height(0LL);
  LimitMinY = this->fields.screenRect.fields.LimitMinY;
  v12 = (float)LimitMinY;
  v13 = (float)(height - LimitMinY - 36);
  if ( (float)LimitMinY < v13 )
  {
    do
    {
      LimitMinX = this->fields.screenRect.fields.LimitMinX;
      if ( !byte_4B3E910 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v10);
        byte_4B3E910 = 1;
      }
      v15 = System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v16 = vcvtms_s32_f32(v12);
      if ( floorf(v12) == INFINITY )
        v16 = 0x80000000;
      if ( !unitInfos
        || (items = unitInfos->fields._items,
            v18 = Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__Add__,
            ++unitInfos->fields._version,
            !items) )
      {
        sub_1BDBAD4(v15, v10);
      }
      size = unitInfos->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v21 = *(const MethodInfo_378398C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL);
        v22.fields.PositionX = LimitMinX + 36;
        v22.fields.PositionY = v16;
        v22.fields.LengthX = lengthX;
        *(_QWORD *)&v22.fields.LengthY = 0xFFFFFFFF00000001LL;
        v22.fields.StepY = 0;
        System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo___AddWithResize(unitInfos, &v22, v21);
      }
      else
      {
        v20 = (char *)items + 24 * size;
        unitInfos->fields._size = size + 1;
        *((_DWORD *)v20 + 8) = LimitMinX + 36;
        *((_DWORD *)v20 + 9) = v16;
        *((_DWORD *)v20 + 10) = lengthX;
        *(_QWORD *)(v20 + 44) = 0xFFFFFFFF00000001LL;
        *((_DWORD *)v20 + 13) = 0;
      }
      v12 = v12 + verticalStep;
    }
    while ( v12 < v13 );
  }
}


int32_t __fastcall PostProcessorRuler__GCD(PostProcessorRuler_o *this, int32_t a, int32_t b, const MethodInfo *method)
{
  int32_t result; // w0

  if ( !b )
    return a;
  do
  {
    result = b;
    b = a % b;
    a = result;
  }
  while ( b );
  return result;
}


void __fastcall PostProcessorRuler__GetAspectRatio(
        PostProcessorRuler_o *this,
        int32_t width,
        int32_t height,
        int32_t *aspectWidth,
        int32_t *aspectHeight,
        const MethodInfo *method)
{
  int32_t v6; // w8
  int32_t v7; // w9
  int32_t v8; // w10

  v6 = width;
  if ( height )
  {
    v7 = width;
    v8 = height;
    do
    {
      v6 = v8;
      v8 = v7 % v8;
      v7 = v6;
    }
    while ( v8 );
  }
  *aspectWidth = width / v6;
  *aspectHeight = height / v6;
}


// local variable allocation has failed, the output may be wrong!
PostProcessorRuler_CharInfo_array *__fastcall PostProcessorRuler__GetCharInfos(
        PostProcessorRuler_o *this,
        System_String_o *txt,
        int32_t fontSize,
        int32_t spacing,
        int32_t offsetX,
        int32_t offsetY,
        const MethodInfo *method)
{
  unsigned int v8; // w19
  __int64 v12; // x1
  PostProcessorRuler_o *v13; // x20
  PostProcessorRuler_CharInfo_array *v14; // x21
  int v15; // w8
  unsigned __int64 v16; // x22
  struct System_Int32_array **p_num1; // x25
  unsigned __int64 v18; // x24
  int v19; // w23
  uint16_t Chars; // w0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 CharOffset; // x0
  System_String_o *v24; // x0
  PostProcessorRuler_o *v25; // x0
  const MethodInfo *v26; // x2
  unsigned __int64 max_length; // x8
  uint16_t v29; // [xsp+Ch] [xbp-44h] BYREF

  v8 = offsetX;
  if ( (byte_4B4295D & 1) == 0 )
  {
    sub_1BDB878(&PostProcessorRuler_CharInfo___TypeInfo, txt);
    this = (PostProcessorRuler_o *)sub_1BDB878(&char_TypeInfo, v12);
    byte_4B4295D = 1;
  }
  v29 = 0;
  if ( !txt
    || (this = (PostProcessorRuler_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer, _QWORD, _QWORD, _QWORD, _QWORD, const MethodInfo *))txt->klass->vtable._3_ToString.method)(
                                         txt,
                                         txt->klass->vtable._4_CompareTo.methodPtr,
                                         *(_QWORD *)&fontSize,
                                         *(_QWORD *)&spacing,
                                         *(_QWORD *)&offsetX,
                                         *(_QWORD *)&offsetY,
                                         method)) == 0LL
    || (v13 = this,
        (this = (PostProcessorRuler_o *)sub_1BDB920(
                                          PostProcessorRuler_CharInfo___TypeInfo,
                                          (unsigned int)this->fields.m_CachedPtr)) == 0LL) )
  {
    sub_1BDBAD4(this, txt);
  }
  v14 = (PostProcessorRuler_CharInfo_array *)this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
  {
    v15 = spacing + 5;
    v16 = 0LL;
    p_num1 = &this->fields.num1;
    v18 = (unsigned int)offsetY | ((unsigned __int64)(unsigned int)fontSize << 32);
    v19 = fontSize * v15;
    do
    {
      Chars = System_String__get_Chars((System_String_o *)v13, v16, 0LL);
      v29 = Chars;
      if ( Chars == 45 )
      {
        CharOffset = 385LL;
      }
      else if ( Chars == 46 )
      {
        CharOffset = 350LL;
      }
      else
      {
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v24 = System_Char__ToString((uint16_t)&v29, 0LL);
        v25 = (PostProcessorRuler_o *)System_Int32__Parse(v24, 0LL);
        CharOffset = PostProcessorRuler__GetCharOffset(v25, (int32_t)v25, v26);
      }
      max_length = v14->max_length;
      if ( v16 >= max_length )
        sub_1BDBADC(CharOffset, v21, v22);
      ++v16;
      *(p_num1 - 1) = (struct System_Int32_array *)((unsigned int)CharOffset | ((unsigned __int64)v8 << 32));
      *p_num1 = (struct System_Int32_array *)v18;
      p_num1 += 2;
      v8 += v19;
    }
    while ( (__int64)v16 < (int)max_length );
  }
  return v14;
}


int32_t __fastcall PostProcessorRuler__GetCharInfosWidth(
        PostProcessorRuler_o *this,
        System_String_o *txt,
        int32_t fontSize,
        int32_t spacing,
        const MethodInfo *method)
{
  if ( !txt )
    sub_1BDBAD4(this, 0LL);
  return (5 * txt->fields._stringLength + (txt->fields._stringLength - 1) * spacing) * fontSize;
}


int32_t __fastcall PostProcessorRuler__GetCharOffset(PostProcessorRuler_o *this, int32_t num, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  __int64 v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x19
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  __int64 v13; // x0
  System_Exception_o *v14; // x20
  __int64 v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF
  __int64 v17; // [xsp+10h] [xbp-10h]
  __int64 v18; // [xsp+18h] [xbp-8h]

  if ( (unsigned int)num >= 0xC )
  {
    v17 = v4;
    v18 = v3;
    v16 = num;
    v6 = sub_1BDB88C(&int_TypeInfo);
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(v6, &v16, v7, v8, v9);
    v11 = (System_String_o *)sub_1BDB88C(&StringLiteral_648/*"'{0}' is out of range. Only 0 - 9, comma and substract are allowed."*/);
    v12 = System_String__Format(v11, v10, 0LL);
    v13 = sub_1BDB88C(&System_Exception_TypeInfo);
    v14 = (System_Exception_o *)sub_1BDBAC4(v13);
    System_Exception___ctor_64325028(v14, v12, 0LL);
    v15 = sub_1BDB88C(&Method_PostProcessorRuler_GetCharOffset__);
    sub_1BDB9A0(v14, v15);
  }
  return 35 * num;
}


UnityEngine_Vector2Int_o __fastcall PostProcessorRuler__GetMousePositionInt(
        PostProcessorRuler_o *this,
        const MethodInfo *method)
{
  float x; // s9
  float y; // s8
  __int64 v4; // x1
  float width; // s0
  float v6; // s9
  __int64 v7; // x1
  int32_t height; // w19
  float v9; // s9
  float v10; // s0
  unsigned __int64 v11; // x9
  __int64 v12; // x8
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4

  mousePosition = UnityEngine_Input__get_mousePosition(0LL);
  x = mousePosition.fields.x;
  y = mousePosition.fields.y;
  width = (float)UnityEngine_Screen__get_width(0LL);
  if ( x <= width )
    width = x;
  if ( x < 0.0 )
    v6 = 0.0;
  else
    v6 = width;
  if ( !byte_4B3E910 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v4);
    byte_4B3E910 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  height = UnityEngine_Screen__get_height(0LL);
  if ( !byte_4B3E910 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v7);
    byte_4B3E910 = 1;
  }
  v9 = floorf(v6);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( y <= (float)height )
    v10 = y;
  else
    v10 = (float)height;
  if ( y < 0.0 )
    v10 = 0.0;
  v11 = (unsigned __int64)vcvtms_s32_f32(v10) << 32;
  v12 = (unsigned int)(int)v9;
  if ( floorf(v10) == INFINITY )
    v11 = 0x8000000000000000LL;
  if ( v9 == INFINITY )
    v12 = 0x80000000LL;
  return (UnityEngine_Vector2Int_o)(v11 | v12);
}


PostProcessorRuler_RulerUnitInfo_array *__fastcall PostProcessorRuler__GetRulerUnitInfos(
        PostProcessorRuler_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t LimitMinX; // w24
  int32_t LimitMaxY; // w22
  int32_t LimitMinY; // w23
  int v9; // w25
  int v10; // w26
  System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  int32_t v15; // w10
  struct PostProcessorRuler_RulerUnitInfo_array *items; // x9
  _QWORD *v17; // x11
  __int64 size; // x12
  float v19; // s8
  int32_t v20; // w10
  char *v21; // x9
  const MethodInfo_378398C *v22; // x2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  PostProcessorRuler_RulerUnitInfo_o v29; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B4295A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__ToArray__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__TypeInfo, v5);
    byte_4B4295A = 1;
  }
  LimitMinX = this->fields.screenRect.fields.LimitMinX;
  LimitMinY = this->fields.screenRect.fields.LimitMinY;
  LimitMaxY = this->fields.screenRect.fields.LimitMaxY;
  v9 = this->fields.screenRect.fields.LimitMaxX - LimitMinX;
  if ( v9 >= 0 )
    v10 = this->fields.screenRect.fields.LimitMaxX - LimitMinX;
  else
    v10 = v9 + 1;
  v11 = (System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__o *)sub_1BDBAC4(System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__TypeInfo);
  System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo____ctor(
    v11,
    (const MethodInfo_378308C *)Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo___ctor__);
  if ( !v11
    || (v15 = this->fields.screenRect.fields.LimitMinY,
        items = v11->fields._items,
        v17 = Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__Add__,
        ++v11->fields._version,
        !items) )
  {
    sub_1BDBAD4(v12, v13);
  }
  size = v11->fields._size;
  v19 = (float)v9 * 0.00097656;
  v20 = LimitMaxY - LimitMinY + v15 - 36;
  if ( (unsigned int)size >= items->max_length )
  {
    v22 = *(const MethodInfo_378398C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL);
    v29.fields.PositionX = LimitMinX + (v10 >> 1);
    v29.fields.PositionY = v20;
    *(_OWORD *)&v29.fields.LengthX = xmmword_BEAA80;
    System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo___AddWithResize(v11, &v29, v22);
  }
  else
  {
    v21 = (char *)items + 24 * size;
    v11->fields._size = size + 1;
    *((_DWORD *)v21 + 8) = LimitMinX + (v10 >> 1);
    *((_DWORD *)v21 + 9) = v20;
    *(_OWORD *)(v21 + 40) = xmmword_BEAA80;
  }
  PostProcessorRuler__CreateRulerUnitInfoVertical(this, v11, v19 * 100.0, 36, v14);
  PostProcessorRuler__CreateRulerUnitInfoHorizontal(
    this,
    v11,
    (float)((float)(this->fields.screenRect.fields.LimitMaxX16x9 - this->fields.screenRect.fields.LimitMinX16x9)
          * 0.00097656)
  * 100.0,
    36,
    v23);
  PostProcessorRuler__CreateRulerUnitInfoVertical(this, v11, v19 * 50.0, 18, v24);
  PostProcessorRuler__CreateRulerUnitInfoHorizontal(
    this,
    v11,
    (float)((float)(this->fields.screenRect.fields.LimitMaxX16x9 - this->fields.screenRect.fields.LimitMinX16x9)
          * 0.00097656)
  * 50.0,
    18,
    v25);
  PostProcessorRuler__CreateRulerUnitInfoVertical(this, v11, v19 * 10.0, 9, v26);
  PostProcessorRuler__CreateRulerUnitInfoHorizontal(
    this,
    v11,
    (float)((float)(this->fields.screenRect.fields.LimitMaxX16x9 - this->fields.screenRect.fields.LimitMinX16x9)
          * 0.00097656)
  * 10.0,
    9,
    v27);
  return System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo___ToArray(
           v11,
           (const MethodInfo_3785884 *)Method_System_Collections_Generic_List_PostProcessorRuler_RulerUnitInfo__ToArray__);
}


PostProcessorRuler_ScreenRectInfo_o *__fastcall PostProcessorRuler__GetScreenRectInfo(
        PostProcessorRuler_ScreenRectInfo_o *retstr,
        PostProcessorRuler_o *this,
        const MethodInfo *method)
{
  int32_t width; // w20
  int32_t height; // w21
  int32_t v7; // w22
  int32_t v8; // w24
  __int64 v9; // x1
  float v10; // s9
  float v11; // s9
  unsigned int v12; // w9
  signed int v13; // w28
  __int64 v14; // x1
  float v15; // s9
  float v16; // s11
  unsigned int v17; // w9
  float v18; // s10
  int v19; // w24
  __int64 v20; // x1
  float v21; // s11
  float v22; // s9
  float v23; // s10
  unsigned int v24; // w8
  int32_t v25; // w27
  int32_t v26; // w22
  __int64 v27; // x1
  float v28; // s8
  float v29; // s8
  unsigned int v30; // w9
  __int64 v31; // x1
  float v32; // s8
  System_Math_c *v33; // x0
  float v34; // s8
  int32_t v35; // w23
  int32_t v36; // w24
  int32_t v37; // w8
  int v38; // w9
  int v39; // w28
  __int64 v40; // x1
  float v41; // s10
  int v42; // w29
  int v43; // w23
  float v44; // s10
  unsigned int v45; // w9
  int32_t v46; // w0
  __int64 v47; // x1
  float v48; // s1
  float v49; // s8
  float v50; // s9
  unsigned int v51; // w9
  __int64 v52; // x1
  float v53; // s8
  float v54; // s8
  unsigned int v55; // w9
  int32_t v56; // w23
  PostProcessorRuler_ScreenRectInfo_o *result; // x0
  __int64 v58; // x1
  float v59; // s8
  float v60; // s8
  unsigned int v61; // w9
  int32_t v62; // w8

  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v7 = UnityEngine_Screen__get_width(0LL);
  v8 = UnityEngine_Screen__get_height(0LL);
  v10 = (float)UnityEngine_Screen__get_height(0LL);
  if ( !byte_4B3E910 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v9);
    byte_4B3E910 = 1;
  }
  v11 = v10 * 1.7778;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = vcvtms_s32_f32(v11);
  if ( floorf(v11) == INFINITY )
    v13 = 0x80000000;
  else
    v13 = v12;
  v15 = (float)UnityEngine_Screen__get_width(0LL) * 0.0625;
  if ( !byte_4B3E910 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v14);
    byte_4B3E910 = 1;
  }
  v16 = v15 * 9.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = vcvtms_s32_f32(v16);
  v18 = (float)v8;
  if ( floorf(v16) == INFINITY )
    v19 = 0x80000000;
  else
    v19 = v17;
  v21 = (float)(UnityEngine_Screen__get_width(0LL) - v13);
  if ( !byte_4B3E910 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v20);
    byte_4B3E910 = 1;
  }
  v22 = (float)v7 / v18;
  v23 = v21 * 0.5;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v24 = vcvtms_s32_f32(v23);
  if ( floorf(v23) == INFINITY )
    v25 = 0x80000000;
  else
    v25 = v24;
  if ( v22 >= 1.7778 )
  {
    v26 = v25 + v13;
  }
  else
  {
    v26 = UnityEngine_Screen__get_width(0LL);
    v25 = 0;
  }
  if ( this->fields.useAspectRatio21x9 )
  {
    if ( v22 <= 2.3333 )
    {
      v35 = UnityEngine_Screen__get_width(0LL);
      v36 = UnityEngine_Screen__get_height(0LL);
      if ( v36 )
      {
        v37 = v35;
        v38 = v36;
        do
        {
          v39 = v38;
          v38 = v37 % v38;
          v37 = v39;
        }
        while ( v38 );
      }
      else
      {
        v39 = v35;
      }
      v41 = (float)UnityEngine_Screen__get_height(0LL);
      if ( !byte_4B3E910 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v40);
        byte_4B3E910 = 1;
      }
      v42 = v35 / v39;
      v43 = v36 / v39;
      v44 = v22 * v41;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v45 = vcvtms_s32_f32(v44);
      if ( floorf(v44) == INFINITY )
        v13 = 0x80000000;
      else
        v13 = v45;
      v46 = UnityEngine_Screen__get_width(0LL);
      v48 = (float)v42;
      if ( v22 < 1.7778 )
        v48 = 16.0;
      v49 = (float)v46 / v48;
      if ( v22 >= 1.7778 )
        v50 = (float)v43;
      else
        v50 = 9.0;
      if ( !byte_4B3E910 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v47);
        byte_4B3E910 = 1;
      }
      v33 = System_Math_TypeInfo;
      v34 = v50 * v49;
    }
    else
    {
      v28 = (float)UnityEngine_Screen__get_height(0LL);
      if ( !byte_4B3E910 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v27);
        byte_4B3E910 = 1;
      }
      v29 = v28 * 2.3333;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v30 = vcvtms_s32_f32(v29);
      if ( floorf(v29) == INFINITY )
        v13 = 0x80000000;
      else
        v13 = v30;
      v32 = (float)UnityEngine_Screen__get_width(0LL) / 21.0;
      if ( !byte_4B3E910 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v31);
        byte_4B3E910 = 1;
      }
      v33 = System_Math_TypeInfo;
      v34 = v32 * 9.0;
    }
    if ( !v33->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v33);
    v51 = vcvtms_s32_f32(v34);
    if ( floorf(v34) == INFINITY )
      v19 = 0x80000000;
    else
      v19 = v51;
  }
  if ( UnityEngine_Screen__get_width(0LL) <= v13 )
  {
    v56 = 0;
  }
  else
  {
    v53 = (float)(UnityEngine_Screen__get_width(0LL) - v13);
    if ( !byte_4B3E910 )
    {
      sub_1BDB878(&System_Math_TypeInfo, v52);
      byte_4B3E910 = 1;
    }
    v54 = v53 * 0.5;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v55 = vcvtms_s32_f32(v54);
    if ( floorf(v54) == INFINITY )
      v56 = 0x80000000;
    else
      v56 = v55;
    width = v56 + v13;
  }
  result = (PostProcessorRuler_ScreenRectInfo_o *)UnityEngine_Screen__get_height(0LL);
  if ( (int)result <= v19 )
  {
    v62 = 0;
  }
  else
  {
    v59 = (float)(UnityEngine_Screen__get_height(0LL) - v19);
    if ( !byte_4B3E910 )
    {
      sub_1BDB878(&System_Math_TypeInfo, v58);
      byte_4B3E910 = 1;
    }
    result = (PostProcessorRuler_ScreenRectInfo_o *)System_Math_TypeInfo;
    v60 = v59 * 0.5;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v61 = vcvtms_s32_f32(v60);
    if ( floorf(v60) == INFINITY )
      v62 = 0x80000000;
    else
      v62 = v61;
    height = v62 + v19;
  }
  retstr->fields.LimitMinX = v56;
  retstr->fields.LimitMaxX = width;
  retstr->fields.LimitMinY = v62;
  retstr->fields.LimitMaxY = height;
  retstr->fields.LimitMinX16x9 = v25;
  retstr->fields.LimitMaxX16x9 = v26;
  return result;
}


PostProcessorRuler_CharInfo_array *__fastcall PostProcessorRuler__MergeArrays_PostProcessorRuler_CharInfo_(
        PostProcessorRuler_CharInfo_array_array *arrays,
        const MethodInfo_30C3E78 *method)
{
  long double inited; // q0
  const MethodInfo_30C3E78_RGCTXs *rgctx_data; // x8
  __int64 _3_PostProcessorRuler___c__47_T; // x0
  Il2CppClass *v7; // x0
  System_Func_object__object__o *v8; // x21
  Il2CppClass *v9; // x0
  const MethodInfo_30C3E78_RGCTXs *v10; // x8
  __int64 v11; // x0
  __int64 _2_System_Func_T____IEnumerable_T; // x8
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  long double v16; // q0
  Il2CppClass *v17; // x0
  Il2CppClass *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2BF64();
    rgctx_data = method->rgctx_data;
  }
  _3_PostProcessorRuler___c__47_T = (__int64)rgctx_data->_3_PostProcessorRuler___c__47_T_;
  if ( (*(_BYTE *)(_3_PostProcessorRuler___c__47_T + 309) & 1) == 0 )
    _3_PostProcessorRuler___c__47_T = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(_3_PostProcessorRuler___c__47_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_3_PostProcessorRuler___c__47_T);
  v7 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
  if ( (BYTE5(v7->vtable[0].methodPtr) & 1) == 0 )
    v7 = (Il2CppClass *)sub_1C2BF08(inited);
  v8 = (System_Func_object__object__o *)*((_QWORD *)v7->static_fields + 1);
  if ( !v8 )
  {
    v9 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
    if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
      v9 = (Il2CppClass *)sub_1C2BF08(inited);
    if ( !v9->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = method->rgctx_data;
    v11 = (__int64)v10->_3_PostProcessorRuler___c__47_T_;
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    {
      v11 = sub_1C2BF08(inited);
      v10 = method->rgctx_data;
    }
    _2_System_Func_T____IEnumerable_T = (__int64)v10->_2_System_Func_T____IEnumerable_T__;
    v13 = **(Il2CppObject ***)(v11 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T____IEnumerable_T + 309) & 1) == 0 )
      _2_System_Func_T____IEnumerable_T = sub_1C2BF08(inited);
    v8 = (System_Func_object__object__o *)sub_1BDBAC4(_2_System_Func_T____IEnumerable_T);
    System_Func_object__object____ctor(
      v8,
      v13,
      (intptr_t)method->rgctx_data->_4_PostProcessorRuler___c__47_T___MergeArrays_b__47_0,
      (const MethodInfo_3572E64 *)method->rgctx_data->_5_System_Func_T____IEnumerable_T____ctor);
    v17 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C2BF08(v16);
    *((_QWORD *)v17->static_fields + 1) = v8;
    v18 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C2BF08(v16);
    sub_1BDB81C((CGThumbnailListItem_o *)((char *)v18->static_fields + 8), (int32_t)v8, v14, v15);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__PostProcessorRuler_CharInfo_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)arrays,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v8,
                                                               (const MethodInfo_306AA78 *)method->rgctx_data->_6_System_Linq_Enumerable_SelectMany_T____T_);
  return System_Linq_Enumerable__ToArray_PostProcessorRuler_CharInfo_(
           v19,
           (const MethodInfo_3070BEC *)method->rgctx_data->_9_System_Linq_Enumerable_ToArray_T_);
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *__fastcall PostProcessorRuler__MergeArrays___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *arrays,
        const MethodInfo_30C3D28 *method)
{
  long double inited; // q0
  const MethodInfo_30C3D28_RGCTXs *rgctx_data; // x8
  __int64 _3_PostProcessorRuler___c__47_T; // x0
  Il2CppClass *v7; // x0
  __int64 v8; // x21
  Il2CppClass *v9; // x0
  const MethodInfo_30C3D28_RGCTXs *v10; // x8
  __int64 v11; // x0
  __int64 _2_System_Func_T____IEnumerable_T; // x8
  __int64 v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  long double v16; // q0
  Il2CppClass *v17; // x0
  Il2CppClass *v18; // x0
  __int64 v19; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2BF64();
    rgctx_data = method->rgctx_data;
  }
  _3_PostProcessorRuler___c__47_T = (__int64)rgctx_data->_3_PostProcessorRuler___c__47_T_;
  if ( (*(_BYTE *)(_3_PostProcessorRuler___c__47_T + 309) & 1) == 0 )
    _3_PostProcessorRuler___c__47_T = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(_3_PostProcessorRuler___c__47_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_3_PostProcessorRuler___c__47_T);
  v7 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
  if ( (BYTE5(v7->vtable[0].methodPtr) & 1) == 0 )
    v7 = (Il2CppClass *)sub_1C2BF08(inited);
  v8 = *((_QWORD *)v7->static_fields + 1);
  if ( !v8 )
  {
    v9 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
    if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
      v9 = (Il2CppClass *)sub_1C2BF08(inited);
    if ( !v9->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = method->rgctx_data;
    v11 = (__int64)v10->_3_PostProcessorRuler___c__47_T_;
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    {
      v11 = sub_1C2BF08(inited);
      v10 = method->rgctx_data;
    }
    _2_System_Func_T____IEnumerable_T = (__int64)v10->_2_System_Func_T____IEnumerable_T__;
    v13 = **(_QWORD **)(v11 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T____IEnumerable_T + 309) & 1) == 0 )
      _2_System_Func_T____IEnumerable_T = sub_1C2BF08(inited);
    v8 = sub_1BDBAC4(_2_System_Func_T____IEnumerable_T);
    ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_5_System_Func_T____IEnumerable_T____ctor->methodPointer)(
      v8,
      v13,
      method->rgctx_data->_4_PostProcessorRuler___c__47_T___MergeArrays_b__47_0);
    v17 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C2BF08(v16);
    *((_QWORD *)v17->static_fields + 1) = v8;
    v18 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C2BF08(v16);
    sub_1BDB81C((CGThumbnailListItem_o *)((char *)v18->static_fields + 8), v8, v14, v15);
  }
  v19 = ((__int64 (__fastcall *)(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *, __int64))method->rgctx_data->_6_System_Linq_Enumerable_SelectMany_T____T_->methodPointer)(
          arrays,
          v8);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)((__int64 (__fastcall *)(__int64))method->rgctx_data->_9_System_Linq_Enumerable_ToArray_T_->methodPointer)(v19);
}


System_Int32_array *__fastcall PostProcessorRuler__MergeArrays_int_(
        System_Int32_array_array *arrays,
        const MethodInfo_30C3BE4 *method)
{
  long double inited; // q0
  const MethodInfo_30C3BE4_RGCTXs *rgctx_data; // x8
  __int64 _3_PostProcessorRuler___c__47_T; // x0
  Il2CppClass *v7; // x0
  System_Func_object__object__o *v8; // x21
  Il2CppClass *v9; // x0
  const MethodInfo_30C3BE4_RGCTXs *v10; // x8
  __int64 v11; // x0
  __int64 _2_System_Func_T____IEnumerable_T; // x8
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  long double v16; // q0
  Il2CppClass *v17; // x0
  Il2CppClass *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2BF64();
    rgctx_data = method->rgctx_data;
  }
  _3_PostProcessorRuler___c__47_T = (__int64)rgctx_data->_3_PostProcessorRuler___c__47_T_;
  if ( (*(_BYTE *)(_3_PostProcessorRuler___c__47_T + 309) & 1) == 0 )
    _3_PostProcessorRuler___c__47_T = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(_3_PostProcessorRuler___c__47_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_3_PostProcessorRuler___c__47_T);
  v7 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
  if ( (BYTE5(v7->vtable[0].methodPtr) & 1) == 0 )
    v7 = (Il2CppClass *)sub_1C2BF08(inited);
  v8 = (System_Func_object__object__o *)*((_QWORD *)v7->static_fields + 1);
  if ( !v8 )
  {
    v9 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
    if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
      v9 = (Il2CppClass *)sub_1C2BF08(inited);
    if ( !v9->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = method->rgctx_data;
    v11 = (__int64)v10->_3_PostProcessorRuler___c__47_T_;
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    {
      v11 = sub_1C2BF08(inited);
      v10 = method->rgctx_data;
    }
    _2_System_Func_T____IEnumerable_T = (__int64)v10->_2_System_Func_T____IEnumerable_T__;
    v13 = **(Il2CppObject ***)(v11 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T____IEnumerable_T + 309) & 1) == 0 )
      _2_System_Func_T____IEnumerable_T = sub_1C2BF08(inited);
    v8 = (System_Func_object__object__o *)sub_1BDBAC4(_2_System_Func_T____IEnumerable_T);
    System_Func_object__object____ctor(
      v8,
      v13,
      (intptr_t)method->rgctx_data->_4_PostProcessorRuler___c__47_T___MergeArrays_b__47_0,
      (const MethodInfo_3572E64 *)method->rgctx_data->_5_System_Func_T____IEnumerable_T____ctor);
    v17 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C2BF08(v16);
    *((_QWORD *)v17->static_fields + 1) = v8;
    v18 = method->rgctx_data->_3_PostProcessorRuler___c__47_T_;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C2BF08(v16);
    sub_1BDB81C((CGThumbnailListItem_o *)((char *)v18->static_fields + 8), (int32_t)v8, v14, v15);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)arrays,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v8,
                                                               (const MethodInfo_306A998 *)method->rgctx_data->_6_System_Linq_Enumerable_SelectMany_T____T_);
  return System_Linq_Enumerable__ToArray_int_(
           v19,
           (const MethodInfo_3070610 *)method->rgctx_data->_9_System_Linq_Enumerable_ToArray_T_);
}


void __fastcall PostProcessorRuler__OnDisable(PostProcessorRuler_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_rt; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_RenderTexture_o *rt; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B4295E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4295E = 1;
  }
  rt = this->fields.rt;
  p_rt = (CGThumbnailListItem_o *)&this->fields.rt;
  v4 = (UnityEngine_Object_o *)rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(v4, 0LL);
  p_rt->klass = 0LL;
  sub_1BDB81C(p_rt, 0, v6, v7);
}


void __fastcall PostProcessorRuler__OnRenderImage(
        PostProcessorRuler_o *this,
        UnityEngine_RenderTexture_o *source,
        UnityEngine_RenderTexture_o *destination,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *rt; // x22
  UnityEngine_Texture_o *v9; // x22
  UnityEngine_Material_o *alphaBlend; // x21

  if ( (byte_4B42952 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Graphics_TypeInfo, source);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B42952 = 1;
  }
  rt = (UnityEngine_Object_o *)this->fields.rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rt, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Texture_o *)this->fields.rt;
    alphaBlend = this->fields.alphaBlend;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_70129700(v9, source, alphaBlend, 0LL);
  }
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source, destination, 0LL);
}


void __fastcall PostProcessorRuler__PopulateMousePositionCharInfos(
        PostProcessorRuler_o *this,
        UnityEngine_Vector2Int_o mousePositionInt,
        PostProcessorRuler_CharInfo_array **numInfos,
        const MethodInfo *method)
{
  int32_t m_X; // w21
  int32_t m_Y; // w24
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t width; // w0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int v15; // w10
  float v16; // s9
  float v17; // s0
  int v18; // w9
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x22
  float v23; // s0
  int v24; // w8
  Il2CppObject *v25; // x0
  char *CharInfos; // x0
  __int64 v27; // x1
  System_String_o *v28; // x22
  int v29; // w26
  int v30; // w25
  int v31; // w26
  __int64 v32; // x2
  const MethodInfo *v33; // x3
  char *v34; // x21
  PostProcessorRuler_CharInfo_array *v35; // x1
  const MethodInfo *v36; // x6
  const MethodInfo *v37; // x3
  PostProcessorRuler_CharInfo_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int v41; // [xsp+18h] [xbp-48h] BYREF
  int v42; // [xsp+1Ch] [xbp-44h] BYREF

  m_X = mousePositionInt.fields.m_X;
  m_Y = mousePositionInt.fields.m_Y;
  if ( (byte_4B42957 & 1) == 0 )
  {
    sub_1BDB878(&PostProcessorRuler_CharInfo_____TypeInfo, mousePositionInt);
    sub_1BDB878(&int_TypeInfo, v8);
    sub_1BDB878(&Method_PostProcessorRuler_MergeArrays_PostProcessorRuler_CharInfo___, v9);
    sub_1BDB878(&StringLiteral_25237/*"{0}.{1}"*/, v10);
    byte_4B42957 = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  if ( width >= 0 )
    v15 = width;
  else
    v15 = width + 1;
  v16 = 1024.0 / (float)(this->fields.screenRect.fields.LimitMaxX16x9 - this->fields.screenRect.fields.LimitMinX16x9);
  v17 = v16 * (float)(m_X - (v15 >> 1));
  v18 = (int)v17;
  if ( v17 == INFINITY )
    v18 = 0x80000000;
  v42 = v18;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v12, v13, v14);
  v23 = v16 * (float)m_Y;
  v24 = (int)v23;
  if ( v23 == INFINITY )
    v24 = 0x80000000;
  v41 = v24;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v19, v20, v21);
  CharInfos = (char *)System_String__Format_62613552((System_String_o *)StringLiteral_25237/*"{0}.{1}"*/, v22, v25, 0LL);
  if ( !CharInfos
    || ((v28 = (System_String_o *)CharInfos,
         v29 = (5 * *((_DWORD *)CharInfos + 4) + (*((_DWORD *)CharInfos + 4) - 1) * this->fields.space)
             * this->fields.fontSize,
         v30 = m_X + 4,
         m_X + 4 + v29 <= UnityEngine_Screen__get_width(0LL))
      ? (v31 = 0)
      : (v31 = -8 - v29),
        (CharInfos = (char *)sub_1BDB920(PostProcessorRuler_CharInfo_____TypeInfo, 2LL)) == 0LL) )
  {
    sub_1BDBAD4(CharInfos, v27);
  }
  v34 = CharInfos;
  if ( !*((_DWORD *)CharInfos + 6)
    || (v35 = *numInfos,
        *((_QWORD *)CharInfos + 4) = *numInfos,
        sub_1BDB81C((CGThumbnailListItem_o *)(CharInfos + 32), (int32_t)v35, v32, v33),
        CharInfos = (char *)PostProcessorRuler__GetCharInfos(
                              this,
                              v28,
                              this->fields.fontSize,
                              this->fields.space,
                              v30 + v31,
                              m_Y + 4,
                              v36),
        *((_DWORD *)v34 + 6) <= 1u) )
  {
    sub_1BDBADC(CharInfos, v27, v32);
  }
  *((_QWORD *)v34 + 5) = CharInfos;
  sub_1BDB81C((CGThumbnailListItem_o *)(v34 + 40), (int32_t)CharInfos, v32, v37);
  v38 = PostProcessorRuler__MergeArrays_PostProcessorRuler_CharInfo_(
          (PostProcessorRuler_CharInfo_array_array *)v34,
          (const MethodInfo_30C3E78 *)Method_PostProcessorRuler_MergeArrays_PostProcessorRuler_CharInfo___);
  *numInfos = v38;
  sub_1BDB81C((CGThumbnailListItem_o *)numInfos, (int32_t)v38, v39, v40);
}


void __fastcall PostProcessorRuler__PopulateUnitHeightCharInfos(
        PostProcessorRuler_o *this,
        PostProcessorRuler_CharInfo_array **numInfos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float v6; // s8
  float LimitMinY; // s9
  int v8; // w26
  float v9; // s10
  PostProcessorRuler_CharInfo_array *CharInfos; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  PostProcessorRuler_CharInfo_array *v14; // x22
  PostProcessorRuler_CharInfo_array *v15; // x1
  System_String_o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x6
  int32_t fontSize; // w23
  int32_t space; // w24
  int32_t LimitMinX; // w27
  System_String_o *v22; // x25
  unsigned int v23; // w8
  int32_t v24; // w5
  const MethodInfo *v25; // x3
  PostProcessorRuler_CharInfo_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int v29; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B42959 & 1) == 0 )
  {
    sub_1BDB878(&PostProcessorRuler_CharInfo_____TypeInfo, numInfos);
    sub_1BDB878(&Method_PostProcessorRuler_MergeArrays_PostProcessorRuler_CharInfo___, v5);
    byte_4B42959 = 1;
  }
  v29 = 0;
  v6 = (float)this->fields.screenRect.fields.LimitMaxY + -36.0;
  LimitMinY = (float)this->fields.screenRect.fields.LimitMinY;
  if ( v6 > LimitMinY )
  {
    v8 = 0;
    v9 = (float)((float)(this->fields.screenRect.fields.LimitMaxX - this->fields.screenRect.fields.LimitMinX)
               * 0.00097656)
       * 100.0;
    do
    {
      CharInfos = (PostProcessorRuler_CharInfo_array *)sub_1BDB920(PostProcessorRuler_CharInfo_____TypeInfo, 2LL);
      if ( !CharInfos )
        sub_1BDBAD4(0LL, v11);
      v14 = CharInfos;
      if ( !CharInfos->max_length )
        goto LABEL_17;
      v15 = *numInfos;
      *(_QWORD *)&CharInfos->m_Items[0].fields.OffsetX = *numInfos;
      sub_1BDB81C((CGThumbnailListItem_o *)&CharInfos->m_Items[0].fields.OffsetX, (int32_t)v15, v12, v13);
      v29 = v8;
      v16 = System_Int32__ToString((int32_t)&v29, 0LL);
      fontSize = this->fields.fontSize;
      space = this->fields.space;
      LimitMinX = this->fields.screenRect.fields.LimitMinX;
      v22 = v16;
      if ( !byte_4B3E910 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v17);
        byte_4B3E910 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v23 = vcvtms_s32_f32(LimitMinY) + 4;
      v24 = floorf(LimitMinY) == INFINITY ? -2147483644 : v23;
      CharInfos = PostProcessorRuler__GetCharInfos(this, v22, fontSize, space, LimitMinX + 4, v24, v18);
      if ( v14->max_length <= 1 )
LABEL_17:
        sub_1BDBADC(CharInfos, v11, v12);
      *(_QWORD *)&v14->m_Items[0].fields.FontSize = CharInfos;
      ++v8;
      sub_1BDB81C((CGThumbnailListItem_o *)&v14->m_Items[0].fields.FontSize, (int32_t)CharInfos, v12, v25);
      v26 = PostProcessorRuler__MergeArrays_PostProcessorRuler_CharInfo_(
              (PostProcessorRuler_CharInfo_array_array *)v14,
              (const MethodInfo_30C3E78 *)Method_PostProcessorRuler_MergeArrays_PostProcessorRuler_CharInfo___);
      *numInfos = v26;
      sub_1BDB81C((CGThumbnailListItem_o *)numInfos, (int32_t)v26, v27, v28);
      LimitMinY = v9 + LimitMinY;
    }
    while ( LimitMinY < v6 );
  }
}


void __fastcall PostProcessorRuler__PopulateUnitWidthCharInfos(
        PostProcessorRuler_o *this,
        PostProcessorRuler_CharInfo_array **numInfos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t LimitMaxX16x9; // w24
  int32_t LimitMinX16x9; // w27
  int32_t width; // w0
  int v12; // w22
  PostProcessorRuler_CharInfo_array *CharInfos; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  PostProcessorRuler_CharInfo_array *v17; // x21
  PostProcessorRuler_CharInfo_array *v18; // x1
  int v19; // w23
  const MethodInfo *v20; // x6
  const MethodInfo *v21; // x3
  float v22; // s8
  PostProcessorRuler_CharInfo_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  float v27; // s9
  float v28; // s10
  int i; // w8
  int v30; // w22
  float v31; // s0
  unsigned int v32; // w8
  int32_t v33; // w23
  const MethodInfo *v34; // x3
  PostProcessorRuler_CharInfo_array *v35; // x22
  PostProcessorRuler_CharInfo_array *v36; // x1
  System_String_o *v37; // x0
  const MethodInfo *v38; // x6
  const MethodInfo *v39; // x3
  PostProcessorRuler_CharInfo_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int v43; // s12
  float v44; // s0
  unsigned int v45; // w8
  int32_t v46; // w23
  const MethodInfo *v47; // x3
  PostProcessorRuler_CharInfo_array *v48; // x22
  PostProcessorRuler_CharInfo_array *v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  const MethodInfo *v55; // x6
  const MethodInfo *v56; // x3
  PostProcessorRuler_CharInfo_array *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int v60; // [xsp+8h] [xbp-88h] BYREF
  int v61; // [xsp+Ch] [xbp-84h] BYREF

  if ( (byte_4B42958 & 1) == 0 )
  {
    sub_1BDB878(&PostProcessorRuler_CharInfo_____TypeInfo, numInfos);
    sub_1BDB878(&int_TypeInfo, v5);
    sub_1BDB878(&Method_PostProcessorRuler_MergeArrays_PostProcessorRuler_CharInfo___, v6);
    sub_1BDB878(&StringLiteral_993/*"-{0}"*/, v7);
    sub_1BDB878(&StringLiteral_1142/*"0"*/, v8);
    byte_4B42958 = 1;
  }
  LimitMinX16x9 = this->fields.screenRect.fields.LimitMinX16x9;
  LimitMaxX16x9 = this->fields.screenRect.fields.LimitMaxX16x9;
  width = UnityEngine_Screen__get_width(0LL);
  if ( width >= 0 )
    v12 = width;
  else
    v12 = width + 1;
  CharInfos = (PostProcessorRuler_CharInfo_array *)sub_1BDB920(PostProcessorRuler_CharInfo_____TypeInfo, 2LL);
  if ( !CharInfos )
    goto LABEL_37;
  v17 = CharInfos;
  if ( !CharInfos->max_length
    || (v18 = *numInfos,
        v19 = v12 >> 1,
        *(_QWORD *)&CharInfos->m_Items[0].fields.OffsetX = *numInfos,
        sub_1BDB81C((CGThumbnailListItem_o *)&CharInfos->m_Items[0].fields.OffsetX, (int32_t)v18, v15, v16),
        CharInfos = PostProcessorRuler__GetCharInfos(
                      this,
                      (System_String_o *)StringLiteral_1142/*"0"*/,
                      this->fields.fontSize,
                      this->fields.space,
                      (v12 >> 1) + 3,
                      -7 * this->fields.fontSize + this->fields.screenRect.fields.LimitMaxY - 6,
                      v20),
        v17->max_length <= 1) )
  {
LABEL_36:
    sub_1BDBADC(CharInfos, v14, v15);
  }
  *(_QWORD *)&v17->m_Items[0].fields.FontSize = CharInfos;
  v22 = (float)((float)(LimitMaxX16x9 - LimitMinX16x9) * 0.00097656) * 100.0;
  sub_1BDB81C((CGThumbnailListItem_o *)&v17->m_Items[0].fields.FontSize, (int32_t)CharInfos, v15, v21);
  v23 = PostProcessorRuler__MergeArrays_PostProcessorRuler_CharInfo_(
          (PostProcessorRuler_CharInfo_array_array *)v17,
          (const MethodInfo_30C3E78 *)Method_PostProcessorRuler_MergeArrays_PostProcessorRuler_CharInfo___);
  *numInfos = v23;
  sub_1BDB81C((CGThumbnailListItem_o *)numInfos, (int32_t)v23, v24, v25);
  v27 = (float)v19;
  v28 = v22 + (float)v19;
  if ( v28 < (float)this->fields.screenRect.fields.LimitMaxX )
  {
    for ( i = 0; ; i = v61 )
    {
      v30 = i + 1;
      v61 = i + 1;
      if ( !byte_4B3E910 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v26);
        byte_4B3E910 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v31 = (float)((float)(v22 * (float)v30) + v27) + 4.0;
      v32 = vcvtms_s32_f32(v31);
      v33 = floorf(v31) == INFINITY ? 0x80000000 : v32;
      CharInfos = (PostProcessorRuler_CharInfo_array *)sub_1BDB920(PostProcessorRuler_CharInfo_____TypeInfo, 2LL);
      if ( !CharInfos )
        break;
      v35 = CharInfos;
      if ( !CharInfos->max_length )
        goto LABEL_36;
      v36 = *numInfos;
      *(_QWORD *)&CharInfos->m_Items[0].fields.OffsetX = *numInfos;
      sub_1BDB81C((CGThumbnailListItem_o *)&CharInfos->m_Items[0].fields.OffsetX, (int32_t)v36, v15, v34);
      v37 = System_Int32__ToString((int32_t)&v61, 0LL);
      CharInfos = PostProcessorRuler__GetCharInfos(
                    this,
                    v37,
                    this->fields.fontSize,
                    this->fields.space,
                    v33,
                    -7 * this->fields.fontSize + this->fields.screenRect.fields.LimitMaxY - 6,
                    v38);
      if ( v35->max_length <= 1 )
        goto LABEL_36;
      *(_QWORD *)&v35->m_Items[0].fields.FontSize = CharInfos;
      sub_1BDB81C((CGThumbnailListItem_o *)&v35->m_Items[0].fields.FontSize, (int32_t)CharInfos, v15, v39);
      v40 = PostProcessorRuler__MergeArrays_PostProcessorRuler_CharInfo_(
              (PostProcessorRuler_CharInfo_array_array *)v35,
              (const MethodInfo_30C3E78 *)Method_PostProcessorRuler_MergeArrays_PostProcessorRuler_CharInfo___);
      *numInfos = v40;
      sub_1BDB81C((CGThumbnailListItem_o *)numInfos, (int32_t)v40, v41, v42);
      v43 = v61;
      if ( !byte_4B3E910 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v26);
        byte_4B3E910 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v44 = (float)(v27 - (float)(v22 * (float)v43)) + 4.0;
      v45 = vcvtms_s32_f32(v44);
      if ( floorf(v44) == INFINITY )
        v46 = 0x80000000;
      else
        v46 = v45;
      if ( v46 >= 37 )
      {
        CharInfos = (PostProcessorRuler_CharInfo_array *)sub_1BDB920(PostProcessorRuler_CharInfo_____TypeInfo, 2LL);
        if ( !CharInfos )
          break;
        v48 = CharInfos;
        if ( !CharInfos->max_length )
          goto LABEL_36;
        v49 = *numInfos;
        *(_QWORD *)&CharInfos->m_Items[0].fields.OffsetX = *numInfos;
        sub_1BDB81C((CGThumbnailListItem_o *)&CharInfos->m_Items[0].fields.OffsetX, (int32_t)v49, v15, v47);
        v60 = v61;
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v50, v51, v52);
        v54 = System_String__Format((System_String_o *)StringLiteral_993/*"-{0}"*/, v53, 0LL);
        CharInfos = PostProcessorRuler__GetCharInfos(
                      this,
                      v54,
                      this->fields.fontSize,
                      this->fields.space,
                      v46,
                      -7 * this->fields.fontSize + this->fields.screenRect.fields.LimitMaxY - 6,
                      v55);
        if ( v48->max_length <= 1 )
          goto LABEL_36;
        *(_QWORD *)&v48->m_Items[0].fields.FontSize = CharInfos;
        sub_1BDB81C((CGThumbnailListItem_o *)&v48->m_Items[0].fields.FontSize, (int32_t)CharInfos, v15, v56);
        v57 = PostProcessorRuler__MergeArrays_PostProcessorRuler_CharInfo_(
                (PostProcessorRuler_CharInfo_array_array *)v48,
                (const MethodInfo_30C3E78 *)Method_PostProcessorRuler_MergeArrays_PostProcessorRuler_CharInfo___);
        *numInfos = v57;
        sub_1BDB81C((CGThumbnailListItem_o *)numInfos, (int32_t)v57, v58, v59);
      }
      v28 = v22 + v28;
      if ( v28 >= (float)this->fields.screenRect.fields.LimitMaxX )
        return;
    }
LABEL_37:
    sub_1BDBAD4(CharInfos, v14);
  }
}


void __fastcall PostProcessorRuler__ProcessCompute(
        PostProcessorRuler_o *this,
        UnityEngine_Vector2Int_o mousePosition,
        PostProcessorRuler_CharInfo_array *numInfos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  PostProcessorRuler_RulerUnitInfo_array *RulerUnitInfos; // x0
  __int64 v26; // x1
  struct System_Int32_array *mergedArrays; // x21
  PostProcessorRuler_RulerUnitInfo_array *v28; // x24
  __int64 v29; // x0
  __int64 v30; // x1
  UnityEngine_ComputeBuffer_o *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  UnityEngine_ComputeBuffer_o *v34; // x20
  __int64 v35; // x1
  UnityEngine_ComputeShader_o *cs; // x0
  UnityEngine_ComputeShader_o **p_cs; // x22
  __int64 v38; // x1
  int32_t Kernel; // w26
  UnityEngine_ComputeShader_o *v40; // x0
  __int64 v41; // x1
  struct UnityEngine_RenderTexture_o *rt; // x0
  UnityEngine_ComputeShader_o *v43; // x27
  __int64 v44; // x1
  int v45; // w28
  struct UnityEngine_RenderTexture_o *v46; // x0
  float v47; // s0
  unsigned int v48; // w8
  int32_t v49; // w28
  __int64 v50; // x1
  int v51; // w29
  System_Math_c *v52; // x0
  float v53; // s0
  int32_t v54; // w3
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  int32_t v63; // w25
  __int64 v64; // x1
  struct UnityEngine_RenderTexture_o *v65; // x0
  UnityEngine_ComputeShader_o *v66; // x26
  __int64 v67; // x1
  int v68; // w27
  System_Math_c *v69; // x0
  float v70; // s0
  int32_t v71; // w3
  __int64 v72; // x1
  __int64 v73; // x1
  int32_t v74; // w25
  __int64 v75; // x1
  struct UnityEngine_RenderTexture_o *v76; // x0
  UnityEngine_ComputeShader_o *v77; // x26
  __int64 v78; // x1
  int v79; // w27
  System_Math_c *v80; // x0
  float v81; // s0
  int32_t v82; // w2
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  int32_t v86; // w24
  __int64 v87; // x1
  __int64 v88; // x1
  struct UnityEngine_RenderTexture_o *v89; // x0
  UnityEngine_ComputeShader_o *v90; // x25
  __int64 v91; // x1
  int v92; // w26
  System_Math_c *v93; // x0
  float v94; // s0
  int32_t v95; // w2
  __int64 v96; // x1
  __int64 v97; // x1
  int32_t v98; // w24
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x1
  __int64 v105; // x1
  int32_t v106; // w23
  __int64 v107; // x1
  struct UnityEngine_RenderTexture_o *v108; // x0
  UnityEngine_ComputeShader_o *v109; // x24
  __int64 v110; // x1
  int v111; // w25
  System_Math_c *v112; // x0
  float v113; // s0
  int32_t v114; // w2
  __int64 v115; // x1
  __int64 v116; // x1
  int32_t v117; // w23
  __int64 v118; // x1
  struct UnityEngine_RenderTexture_o *v119; // x0
  UnityEngine_ComputeShader_o *v120; // x22
  __int64 v121; // x1
  int v122; // w24
  System_Math_c *v123; // x0
  float v124; // s0
  int32_t v125; // w2
  UnityEngine_ComputeBuffer_c *klass; // x8
  __int64 v127; // x9
  int32_t *p_offset; // x10
  __int64 v129; // x0
  UnityEngine_ComputeBuffer_c *v130; // x8
  __int64 v131; // x9
  int32_t *v132; // x10
  __int64 v133; // x0
  UnityEngine_ComputeBuffer_c *v134; // x8
  __int64 v135; // x9
  int32_t *v136; // x10
  __int64 v137; // x0
  UnityEngine_ComputeBuffer_o *v138; // [xsp+8h] [xbp-78h]

  if ( (byte_4B42956 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_ComputeBuffer_TypeInfo, mousePosition);
    sub_1BDB878(&System_IDisposable_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_9168/*"MouseY"*/, v8);
    sub_1BDB878(&StringLiteral_5412/*"DrawRulerVertical"*/, v9);
    sub_1BDB878(&StringLiteral_11403/*"RulerInfos"*/, v10);
    sub_1BDB878(&StringLiteral_5407/*"DrawMouseLineHorizontal"*/, v11);
    sub_1BDB878(&StringLiteral_9167/*"MouseX"*/, v12);
    sub_1BDB878(&StringLiteral_5410/*"DrawRulerHorizontal"*/, v13);
    sub_1BDB878(&StringLiteral_3961/*"CSMain"*/, v14);
    sub_1BDB878(&StringLiteral_21247/*"limitMaxX"*/, v15);
    sub_1BDB878(&StringLiteral_21248/*"limitMaxY"*/, v16);
    sub_1BDB878(&StringLiteral_11354/*"Result"*/, v17);
    sub_1BDB878(&StringLiteral_5406/*"DrawColor"*/, v18);
    sub_1BDB878(&StringLiteral_9606/*"Numbers"*/, v19);
    sub_1BDB878(&StringLiteral_21250/*"limitMinY"*/, v20);
    sub_1BDB878(&StringLiteral_5408/*"DrawMouseLineVertical"*/, v21);
    sub_1BDB878(&StringLiteral_9605/*"NumberInfos"*/, v22);
    sub_1BDB878(&StringLiteral_21249/*"limitMinX"*/, v23);
    sub_1BDB878(&StringLiteral_5411/*"DrawRulerUnits"*/, v24);
    byte_4B42956 = 1;
  }
  RulerUnitInfos = PostProcessorRuler__GetRulerUnitInfos(this, *(const MethodInfo **)&mousePosition);
  mergedArrays = this->fields.mergedArrays;
  if ( !mergedArrays )
    sub_1BDBAD4(RulerUnitInfos, v26);
  v28 = RulerUnitInfos;
  v138 = (UnityEngine_ComputeBuffer_o *)sub_1BDBAC4(UnityEngine_ComputeBuffer_TypeInfo);
  UnityEngine_ComputeBuffer___ctor(v138, mergedArrays->max_length, 4, 0LL);
  if ( !numInfos )
    sub_1BDBAD4(v29, v30);
  v31 = (UnityEngine_ComputeBuffer_o *)sub_1BDBAC4(UnityEngine_ComputeBuffer_TypeInfo);
  UnityEngine_ComputeBuffer___ctor(v31, numInfos->max_length, 16, 0LL);
  if ( !v28 )
    sub_1BDBAD4(v32, v33);
  v34 = (UnityEngine_ComputeBuffer_o *)sub_1BDBAC4(UnityEngine_ComputeBuffer_TypeInfo);
  UnityEngine_ComputeBuffer___ctor(v34, v28->max_length, 24, 0LL);
  p_cs = &this->fields.cs;
  cs = this->fields.cs;
  if ( !cs )
    sub_1BDBAD4(0LL, v35);
  Kernel = UnityEngine_ComputeShader__FindKernel(cs, (System_String_o *)StringLiteral_3961/*"CSMain"*/, 0LL);
  v40 = this->fields.cs;
  if ( !v40 )
    sub_1BDBAD4(0LL, v38);
  UnityEngine_ComputeShader__SetTexture_70291716(
    v40,
    Kernel,
    (System_String_o *)StringLiteral_11354/*"Result"*/,
    (UnityEngine_Texture_o *)this->fields.rt,
    0LL);
  rt = this->fields.rt;
  if ( !rt )
    sub_1BDBAD4(0LL, v41);
  v43 = this->fields.cs;
  v45 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))rt->klass->vtable._4_get_width.method)(
          rt,
          rt->klass->vtable._5_set_width.methodPtr);
  if ( !byte_4B3EFD1 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v44);
    byte_4B3EFD1 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v46 = this->fields.rt;
  v47 = (float)v45 * 0.125;
  v48 = vcvtps_s32_f32(v47);
  if ( ceilf(v47) == INFINITY )
    v49 = 0x80000000;
  else
    v49 = v48;
  if ( !v46 )
    sub_1BDBAD4(0LL, v44);
  v51 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v46->klass->vtable._6_get_height.method)(
          v46,
          v46->klass->vtable._7_set_height.methodPtr);
  if ( !byte_4B3EFD1 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v50);
    byte_4B3EFD1 = 1;
  }
  v52 = System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v43 )
    sub_1BDBAD4(v52, v50);
  v53 = ceilf((float)v51 * 0.125);
  if ( v53 == INFINITY )
    v54 = 0x80000000;
  else
    v54 = (int)v53;
  UnityEngine_ComputeShader__Dispatch(v43, Kernel, v49, v54, 1, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v55);
  UnityEngine_ComputeShader__SetInt_70291524(
    *p_cs,
    (System_String_o *)StringLiteral_21249/*"limitMinX"*/,
    this->fields.screenRect.fields.LimitMinX,
    0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v56);
  UnityEngine_ComputeShader__SetInt_70291524(
    *p_cs,
    (System_String_o *)StringLiteral_21247/*"limitMaxX"*/,
    this->fields.screenRect.fields.LimitMaxX,
    0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v57);
  UnityEngine_ComputeShader__SetInt_70291524(
    *p_cs,
    (System_String_o *)StringLiteral_21250/*"limitMinY"*/,
    this->fields.screenRect.fields.LimitMinY,
    0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v58);
  UnityEngine_ComputeShader__SetInt_70291524(
    *p_cs,
    (System_String_o *)StringLiteral_21248/*"limitMaxY"*/,
    this->fields.screenRect.fields.LimitMaxY,
    0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v59);
  UnityEngine_ComputeShader__SetInt_70291524(
    *p_cs,
    (System_String_o *)StringLiteral_9167/*"MouseX"*/,
    mousePosition.fields.m_X,
    0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v60);
  UnityEngine_ComputeShader__SetInt_70291524(
    *p_cs,
    (System_String_o *)StringLiteral_9168/*"MouseY"*/,
    mousePosition.fields.m_Y,
    0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v61);
  v63 = UnityEngine_ComputeShader__FindKernel(*p_cs, (System_String_o *)StringLiteral_5412/*"DrawRulerVertical"*/, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v62);
  UnityEngine_ComputeShader__SetTexture_70291716(
    *p_cs,
    v63,
    (System_String_o *)StringLiteral_11354/*"Result"*/,
    (UnityEngine_Texture_o *)this->fields.rt,
    0LL);
  v65 = this->fields.rt;
  if ( !v65 )
    sub_1BDBAD4(0LL, v64);
  v66 = this->fields.cs;
  v68 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v65->klass->vtable._6_get_height.method)(
          v65,
          v65->klass->vtable._7_set_height.methodPtr);
  if ( !byte_4B3EFD1 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v67);
    byte_4B3EFD1 = 1;
  }
  v69 = System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v66 )
    sub_1BDBAD4(v69, v67);
  v70 = ceilf((float)v68 * 0.00097656);
  if ( v70 == INFINITY )
    v71 = 0x80000000;
  else
    v71 = (int)v70;
  UnityEngine_ComputeShader__Dispatch(v66, v63, 1, v71, 1, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v72);
  v74 = UnityEngine_ComputeShader__FindKernel(*p_cs, (System_String_o *)StringLiteral_5410/*"DrawRulerHorizontal"*/, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v73);
  UnityEngine_ComputeShader__SetTexture_70291716(
    *p_cs,
    v74,
    (System_String_o *)StringLiteral_11354/*"Result"*/,
    (UnityEngine_Texture_o *)this->fields.rt,
    0LL);
  v76 = this->fields.rt;
  if ( !v76 )
    sub_1BDBAD4(0LL, v75);
  v77 = this->fields.cs;
  v79 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v76->klass->vtable._4_get_width.method)(
          v76,
          v76->klass->vtable._5_set_width.methodPtr);
  if ( !byte_4B3EFD1 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v78);
    byte_4B3EFD1 = 1;
  }
  v80 = System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v77 )
    sub_1BDBAD4(v80, v78);
  v81 = ceilf((float)v79 * 0.00097656);
  if ( v81 == INFINITY )
    v82 = 0x80000000;
  else
    v82 = (int)v81;
  UnityEngine_ComputeShader__Dispatch(v77, v74, v82, 1, 1, 0LL);
  if ( !v34 )
    sub_1BDBAD4(0LL, v83);
  UnityEngine_ComputeBuffer__SetData(v34, (System_Array_o *)v28, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v84);
  v86 = UnityEngine_ComputeShader__FindKernel(*p_cs, (System_String_o *)StringLiteral_5411/*"DrawRulerUnits"*/, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v85);
  UnityEngine_ComputeShader__SetTexture_70291716(
    *p_cs,
    v86,
    (System_String_o *)StringLiteral_11354/*"Result"*/,
    (UnityEngine_Texture_o *)this->fields.rt,
    0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v87);
  UnityEngine_ComputeShader__SetBuffer_70291824(*p_cs, v86, (System_String_o *)StringLiteral_11403/*"RulerInfos"*/, v34, 0LL);
  v89 = this->fields.rt;
  if ( !v89 )
    sub_1BDBAD4(0LL, v88);
  v90 = this->fields.cs;
  v92 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v89->klass->vtable._4_get_width.method)(
          v89,
          v89->klass->vtable._5_set_width.methodPtr);
  if ( !byte_4B3EFD1 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v91);
    byte_4B3EFD1 = 1;
  }
  v93 = System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v90 )
    sub_1BDBAD4(v93, v91);
  v94 = ceilf((float)v92 * 0.00097656);
  if ( v94 == INFINITY )
    v95 = 0x80000000;
  else
    v95 = (int)v94;
  UnityEngine_ComputeShader__Dispatch(v90, v86, v95, 1, 1, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v96);
  v98 = UnityEngine_ComputeShader__FindKernel(*p_cs, (System_String_o *)StringLiteral_5406/*"DrawColor"*/, 0LL);
  if ( !v138 )
    sub_1BDBAD4(0LL, v97);
  UnityEngine_ComputeBuffer__SetData(v138, (System_Array_o *)this->fields.mergedArrays, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v99);
  UnityEngine_ComputeShader__SetBuffer_70291824(*p_cs, v98, (System_String_o *)StringLiteral_9606/*"Numbers"*/, v138, 0LL);
  if ( !v31 )
    sub_1BDBAD4(0LL, v100);
  UnityEngine_ComputeBuffer__SetData(v31, (System_Array_o *)numInfos, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v101);
  UnityEngine_ComputeShader__SetBuffer_70291824(*p_cs, v98, (System_String_o *)StringLiteral_9605/*"NumberInfos"*/, v31, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v102);
  UnityEngine_ComputeShader__SetTexture_70291716(
    *p_cs,
    v98,
    (System_String_o *)StringLiteral_11354/*"Result"*/,
    (UnityEngine_Texture_o *)this->fields.rt,
    0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v103);
  UnityEngine_ComputeShader__Dispatch(*p_cs, v98, 1, 1, 1, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v104);
  v106 = UnityEngine_ComputeShader__FindKernel(*p_cs, (System_String_o *)StringLiteral_5408/*"DrawMouseLineVertical"*/, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v105);
  UnityEngine_ComputeShader__SetTexture_70291716(
    *p_cs,
    v106,
    (System_String_o *)StringLiteral_11354/*"Result"*/,
    (UnityEngine_Texture_o *)this->fields.rt,
    0LL);
  v108 = this->fields.rt;
  if ( !v108 )
    sub_1BDBAD4(0LL, v107);
  v109 = this->fields.cs;
  v111 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v108->klass->vtable._6_get_height.method)(
           v108,
           v108->klass->vtable._7_set_height.methodPtr);
  if ( !byte_4B3EFD1 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v110);
    byte_4B3EFD1 = 1;
  }
  v112 = System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v109 )
    sub_1BDBAD4(v112, v110);
  v113 = ceilf((float)v111 * 0.00097656);
  if ( v113 == INFINITY )
    v114 = 0x80000000;
  else
    v114 = (int)v113;
  UnityEngine_ComputeShader__Dispatch(v109, v106, v114, 1, 1, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v115);
  v117 = UnityEngine_ComputeShader__FindKernel(*p_cs, (System_String_o *)StringLiteral_5407/*"DrawMouseLineHorizontal"*/, 0LL);
  if ( !*p_cs )
    sub_1BDBAD4(0LL, v116);
  UnityEngine_ComputeShader__SetTexture_70291716(
    *p_cs,
    v117,
    (System_String_o *)StringLiteral_11354/*"Result"*/,
    (UnityEngine_Texture_o *)this->fields.rt,
    0LL);
  v119 = this->fields.rt;
  if ( !v119 )
    sub_1BDBAD4(0LL, v118);
  v120 = this->fields.cs;
  v122 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v119->klass->vtable._4_get_width.method)(
           v119,
           v119->klass->vtable._5_set_width.methodPtr);
  if ( !byte_4B3EFD1 )
  {
    sub_1BDB878(&System_Math_TypeInfo, v121);
    byte_4B3EFD1 = 1;
  }
  v123 = System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v120 )
    sub_1BDBAD4(v123, v121);
  v124 = ceilf((float)v122 * 0.00097656);
  if ( v124 == INFINITY )
    v125 = 0x80000000;
  else
    v125 = (int)v124;
  UnityEngine_ComputeShader__Dispatch(v120, v117, v125, 1, 1, 0LL);
  klass = v34->klass;
  v127 = *(unsigned __int16 *)(&v34->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v34->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v127;
      p_offset += 4;
      if ( !v127 )
        goto LABEL_99;
    }
    v129 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_99:
    v129 = sub_1C2C00C(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_ComputeBuffer_o *, _QWORD))v129)(v34, *(_QWORD *)(v129 + 8));
  v130 = v31->klass;
  v131 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
  {
    v132 = &v130->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v132 - 1) != System_IDisposable_TypeInfo )
    {
      --v131;
      v132 += 4;
      if ( !v131 )
        goto LABEL_105;
    }
    v133 = (__int64)(&v130->vtable._0_Equals.method + 2 * *v132);
  }
  else
  {
LABEL_105:
    v133 = sub_1C2C00C(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_ComputeBuffer_o *, _QWORD))v133)(v31, *(_QWORD *)(v133 + 8));
  v134 = v138->klass;
  v135 = *(unsigned __int16 *)(&v138->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v138->klass->_2.bitflags2 + 3) )
  {
    v136 = &v134->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v136 - 1) != System_IDisposable_TypeInfo )
    {
      --v135;
      v136 += 4;
      if ( !v135 )
        goto LABEL_111;
    }
    v137 = (__int64)(&v134->vtable._0_Equals.method + 2 * *v136);
  }
  else
  {
LABEL_111:
    v137 = sub_1C2C00C(v138, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_ComputeBuffer_o *, _QWORD))v137)(v138, *(_QWORD *)(v137 + 8));
}


void __fastcall PostProcessorRuler__Start(PostProcessorRuler_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Shader_o *v6; // x20
  UnityEngine_Material_o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  __int64 v14; // x20
  struct System_Int32_array *num0; // x1
  const MethodInfo *v16; // x3
  struct System_Int32_array *num1; // x1
  const MethodInfo *v18; // x3
  struct System_Int32_array *num2; // x1
  const MethodInfo *v20; // x3
  struct System_Int32_array *num3; // x1
  const MethodInfo *v22; // x3
  struct System_Int32_array *num4; // x1
  const MethodInfo *v24; // x3
  struct System_Int32_array *num5; // x1
  const MethodInfo *v26; // x3
  struct System_Int32_array *num6; // x1
  const MethodInfo *v28; // x3
  struct System_Int32_array *num7; // x1
  const MethodInfo *v30; // x3
  struct System_Int32_array *num8; // x1
  const MethodInfo *v32; // x3
  struct System_Int32_array *num9; // x1
  const MethodInfo *v34; // x3
  struct System_Int32_array *comma; // x1
  const MethodInfo *v36; // x3
  struct System_Int32_array *subtract; // x1
  struct System_Int32_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4B42953 & 1) == 0 )
  {
    sub_1BDB878(&int_____TypeInfo, method);
    sub_1BDB878(&UnityEngine_Material_TypeInfo, v3);
    sub_1BDB878(&Method_PostProcessorRuler_MergeArrays_int___, v4);
    sub_1BDB878(&StringLiteral_8380/*"Legacy Shaders/Particles/Alpha Blended"*/, v5);
    byte_4B42953 = 1;
  }
  v6 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_8380/*"Legacy Shaders/Particles/Alpha Blended"*/, 0LL);
  v7 = (UnityEngine_Material_o *)sub_1BDBAC4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v7, v6, 0LL);
  this->fields.alphaBlend = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.alphaBlend, (int32_t)v7, v8, v9);
  v10 = sub_1BDB920(int_____TypeInfo, 12LL);
  if ( !v10 )
    sub_1BDBAD4(0LL, v11);
  v14 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_17;
  num0 = this->fields.num0;
  *(_QWORD *)(v10 + 32) = num0;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)num0, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_17;
  num1 = this->fields.num1;
  *(_QWORD *)(v14 + 40) = num1;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 40), (int32_t)num1, v12, v16);
  if ( *(_DWORD *)(v14 + 24) <= 2u )
    goto LABEL_17;
  num2 = this->fields.num2;
  *(_QWORD *)(v14 + 48) = num2;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 48), (int32_t)num2, v12, v18);
  if ( *(_DWORD *)(v14 + 24) <= 3u )
    goto LABEL_17;
  num3 = this->fields.num3;
  *(_QWORD *)(v14 + 56) = num3;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 56), (int32_t)num3, v12, v20);
  if ( *(_DWORD *)(v14 + 24) <= 4u )
    goto LABEL_17;
  num4 = this->fields.num4;
  *(_QWORD *)(v14 + 64) = num4;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 64), (int32_t)num4, v12, v22);
  if ( *(_DWORD *)(v14 + 24) <= 5u )
    goto LABEL_17;
  num5 = this->fields.num5;
  *(_QWORD *)(v14 + 72) = num5;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 72), (int32_t)num5, v12, v24);
  if ( *(_DWORD *)(v14 + 24) <= 6u )
    goto LABEL_17;
  num6 = this->fields.num6;
  *(_QWORD *)(v14 + 80) = num6;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 80), (int32_t)num6, v12, v26);
  if ( *(_DWORD *)(v14 + 24) <= 7u )
    goto LABEL_17;
  num7 = this->fields.num7;
  *(_QWORD *)(v14 + 88) = num7;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 88), (int32_t)num7, v12, v28);
  if ( *(_DWORD *)(v14 + 24) <= 8u )
    goto LABEL_17;
  num8 = this->fields.num8;
  *(_QWORD *)(v14 + 96) = num8;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 96), (int32_t)num8, v12, v30);
  if ( *(_DWORD *)(v14 + 24) <= 9u
    || (num9 = this->fields.num9,
        *(_QWORD *)(v14 + 104) = num9,
        sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 104), (int32_t)num9, v12, v32),
        *(_DWORD *)(v14 + 24) <= 0xAu)
    || (comma = this->fields.comma,
        *(_QWORD *)(v14 + 112) = comma,
        sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 112), (int32_t)comma, v12, v34),
        *(_DWORD *)(v14 + 24) <= 0xBu) )
  {
LABEL_17:
    sub_1BDBADC(v10, v11, v12);
  }
  subtract = this->fields.subtract;
  *(_QWORD *)(v14 + 120) = subtract;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 120), (int32_t)subtract, v12, v36);
  v38 = PostProcessorRuler__MergeArrays_int_(
          (System_Int32_array_array *)v14,
          (const MethodInfo_30C3BE4 *)Method_PostProcessorRuler_MergeArrays_int___);
  this->fields.mergedArrays = v38;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mergedArrays, (int32_t)v38, v39, v40);
}


void __fastcall PostProcessorRuler__Update(PostProcessorRuler_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int height; // w0
  int32_t screenWidth; // s0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  PostProcessorRuler_ScreenRectInfo_o *ScreenRectInfo; // x0
  __int128 v9; // q0
  const MethodInfo *v10; // x1
  UnityEngine_Vector2Int_o MousePositionInt; // x0
  const MethodInfo *v12; // x2
  long double inited; // q0
  _QWORD *v14; // x21
  UnityEngine_Vector2Int_o v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  PostProcessorRuler_ScreenRectInfo_o v22; // [xsp+0h] [xbp-40h] BYREF
  PostProcessorRuler_CharInfo_array *numInfos; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector2Int_o v24; // 0:x1.8
  UnityEngine_Vector2Int_o v25; // 0:x1.8

  if ( (byte_4B42954 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_PostProcessorRuler_CharInfo___, method);
    sub_1BDB878(&CommonUI_TypeInfo, v3);
    byte_4B42954 = 1;
  }
  numInfos = 0LL;
  this->fields.screenWidth = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  screenWidth = this->fields.screenWidth;
  this->fields.screenHeight = height;
  this->fields.aspecRatio = (float)screenWidth / (float)height;
  PostProcessorRuler__CreateNewRenderTextureIfNecessary(this, v6);
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  this->fields.useAspectRatio21x9 = !CommonUI__GetForceObi_16_9(0LL);
  ScreenRectInfo = PostProcessorRuler__GetScreenRectInfo(&v22, this, v7);
  v9 = *(_OWORD *)&v22.fields.LimitMinX;
  *(_QWORD *)&this->fields.screenRect.fields.LimitMinX16x9 = *(_QWORD *)&v22.fields.LimitMinX16x9;
  *(_OWORD *)&this->fields.screenRect.fields.LimitMinX = v9;
  MousePositionInt = PostProcessorRuler__GetMousePositionInt((PostProcessorRuler_o *)ScreenRectInfo, v10);
  v14 = Method_System_Array_Empty_PostProcessorRuler_CharInfo___;
  v15 = MousePositionInt;
  v16 = *((_QWORD *)Method_System_Array_Empty_PostProcessorRuler_CharInfo___ + 7);
  if ( !v16 )
  {
    sub_1C2BF64(Method_System_Array_Empty_PostProcessorRuler_CharInfo___);
    v16 = v14[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(v17 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v17);
  v18 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C2BF08(inited);
  numInfos = **(PostProcessorRuler_CharInfo_array ***)(v18 + 184);
  PostProcessorRuler__PopulateUnitHeightCharInfos(this, &numInfos, v12);
  PostProcessorRuler__PopulateUnitWidthCharInfos(this, &numInfos, v19);
  v24 = v15;
  PostProcessorRuler__PopulateMousePositionCharInfos(this, v24, &numInfos, v20);
  v25 = v15;
  PostProcessorRuler__ProcessCompute(this, v25, numInfos, v21);
}


void __fastcall PostProcessorRuler___c__47_PostProcessorRuler_CharInfo____cctor(const MethodInfo_31FD640 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C2BF08();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C2BF08();
  v4 = (Il2CppObject *)sub_1BDBAC4(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C2BF08();
  System_Object___ctor(v4, 0LL);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C2BF08();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C2BF08();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C2BF08();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C2BF08();
  sub_1BDB81C(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall PostProcessorRuler___c__47_PostProcessorRuler_CharInfo____ctor(
        PostProcessorRuler___c__47_T__o *this,
        const MethodInfo_31FD6FC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall PostProcessorRuler___c__47_PostProcessorRuler_CharInfo____MergeArrays_b__47_0(
        PostProcessorRuler___c__47_T__o *this,
        PostProcessorRuler_CharInfo_array *array,
        const MethodInfo_31FD704 *method)
{
  return (System_Collections_Generic_IEnumerable_T__o *)array;
}


void __fastcall PostProcessorRuler___c__47___Il2CppFullySharedGenericType____cctor(const MethodInfo_31FD53C *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(__int64, _QWORD); // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C2BF08();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C2BF08();
  v4 = sub_1BDBAC4(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_1C2BF08();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_1C2BF08();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v12 = (__int64)method->klass;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C2BF08();
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C2BF08();
  **(_QWORD **)(v13 + 184) = v6;
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C2BF08();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C2BF08();
  sub_1BDB81C(*(CGThumbnailListItem_o **)(v15 + 184), v6, v10, v11);
}


void __fastcall PostProcessorRuler___c__47___Il2CppFullySharedGenericType____ctor(
        PostProcessorRuler___c__47_T__o *this,
        const MethodInfo_31FD630 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall PostProcessorRuler___c__47___Il2CppFullySharedGenericType____MergeArrays_b__47_0(
        PostProcessorRuler___c__47_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        const MethodInfo_31FD638 *method)
{
  return (System_Collections_Generic_IEnumerable_T__o *)array;
}


void __fastcall PostProcessorRuler___c__47_int____cctor(const MethodInfo_31FD470 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C2BF08();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C2BF08();
  v4 = (Il2CppObject *)sub_1BDBAC4(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C2BF08();
  System_Object___ctor(v4, 0LL);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C2BF08();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C2BF08();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C2BF08();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C2BF08();
  sub_1BDB81C(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall PostProcessorRuler___c__47_int____ctor(
        PostProcessorRuler___c__47_T__o *this,
        const MethodInfo_31FD52C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall PostProcessorRuler___c__47_int____MergeArrays_b__47_0(
        PostProcessorRuler___c__47_T__o *this,
        System_Int32_array *array,
        const MethodInfo_31FD534 *method)
{
  return (System_Collections_Generic_IEnumerable_T__o *)array;
}