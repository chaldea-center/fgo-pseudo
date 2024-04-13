void __fastcall FSUtility___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  FSUtility_c *v23; // x8
  struct FSUtility_StaticFields *static_fields; // x0
  System_Int32_array **v25; // x1
  System_Int32_array **v26; // x0
  struct FSUtility_StaticFields *v27; // x8
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x0
  struct FSUtility_StaticFields *v35; // x8
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_Dictionary_int__float__o *v42; // x19
  struct FSUtility_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x0
  struct FSUtility_StaticFields *v51; // x8
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x0
  struct FSUtility_StaticFields *v59; // x8
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x0
  struct FSUtility_StaticFields *v67; // x8
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_42E8CB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&FSUtility_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&string___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6902/*"FullScreen/FSUtilityList"*/, v20, v21, v22);
    byte_42E8CB1 = 1;
  }
  FSUtility_TypeInfo->static_fields->RATIO_VISTA = 2.0;
  v23 = FSUtility_TypeInfo;
  FSUtility_TypeInfo->static_fields->RATIO_SCOPE = 2.3333;
  static_fields = v23->static_fields;
  v25 = (System_Int32_array **)StringLiteral_6902/*"FullScreen/FSUtilityList"*/;
  static_fields->FS_UTILITY_LIST_PATH = (struct System_String_o *)StringLiteral_6902/*"FullScreen/FSUtilityList"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->FS_UTILITY_LIST_PATH, v25, v2, v3, v4, v5, v6, v7);
  v26 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  v27 = FSUtility_TypeInfo->static_fields;
  v27->legacyBacks = (struct System_Int32_array *)v26;
  sub_B5D560((BattleServantConfConponent_o *)&v27->legacyBacks, v26, v28, v29, v30, v31, v32, v33);
  v34 = (System_Int32_array **)sub_B5D5DC(string___TypeInfo, 0LL);
  v35 = FSUtility_TypeInfo->static_fields;
  v35->fullScreenImages = (struct System_String_array *)v34;
  sub_B5D560((BattleServantConfConponent_o *)&v35->fullScreenImages, v34, v36, v37, v38, v39, v40, v41);
  v42 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v42,
    (const MethodInfo_2F3515C *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  v43 = FSUtility_TypeInfo->static_fields;
  v43->trimBackRatioY = v42;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v43->trimBackRatioY,
    (System_Int32_array **)v42,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (System_Int32_array **)sub_B5D5DC(string___TypeInfo, 0LL);
  v51 = FSUtility_TypeInfo->static_fields;
  v51->legacyMovies = (struct System_String_array *)v50;
  sub_B5D560((BattleServantConfConponent_o *)&v51->legacyMovies, v50, v52, v53, v54, v55, v56, v57);
  v58 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  v59 = FSUtility_TypeInfo->static_fields;
  v59->fullScreenNpChrs = (struct System_Int32_array *)v58;
  sub_B5D560((BattleServantConfConponent_o *)&v59->fullScreenNpChrs, v58, v60, v61, v62, v63, v64, v65);
  v66 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  v67 = FSUtility_TypeInfo->static_fields;
  v67->fullScreenNpSeqIds = (struct System_Int32_array *)v66;
  sub_B5D560((BattleServantConfConponent_o *)&v67->fullScreenNpSeqIds, v66, v68, v69, v70, v71, v72, v73);
}


void __fastcall FSUtility___ctor(FSUtility_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8CB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FSUtility___ctor__, (_DWORD)method, v2, v3);
    byte_42E8CB0 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_FSUtility___ctor__);
}


float __fastcall FSUtility__CalculateNotchWidth(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  float left; // s8
  int32_t width; // w19
  float right; // s0
  float v7; // s8
  ManagerConfig_c *v8; // x0
  int HEIGHT; // s9
  UnityEngine_Rect_o safeArea; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E8CAF & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, v1, v2, v3);
    byte_42E8CAF = 1;
  }
  safeArea = UnityEngine_Screen__get_safeArea(0LL);
  left = UnityEngine_Rect__get_left(safeArea, (const MethodInfo *)&safeArea);
  width = UnityEngine_Screen__get_width(0LL);
  right = UnityEngine_Rect__get_right(v12, (const MethodInfo *)&safeArea);
  v7 = UnityEngine_Mathf__Max(left, (float)width - right, 0LL);
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  HEIGHT = v8->static_fields->HEIGHT;
  return v7 * (float)((float)HEIGHT / (float)UnityEngine_Screen__get_height(0LL));
}


UnityEngine_Vector2_o __fastcall FSUtility__GetAddOffset(
        FSOffset_o *refOffset,
        bool calcNotch,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Vector2_o zero; // kr00_8
  float x; // s8
  float y; // s9
  FSUtility_c *v12; // x0
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  float offsetXRatio; // s10
  float OffsetX; // s0
  float v17; // s0
  float v18; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42E8CAE & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, calcNotch, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8CAE = 1;
  }
  zero = UnityEngine_Vector2__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  v12 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista((const MethodInfo *)v12) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)refOffset, 0LL, 0LL);
    if ( v13 )
    {
      if ( !refOffset )
        sub_B5D69C(v13, v14);
      if ( LOBYTE(refOffset->fields.enableAddOffsetXFouseScopeRatio) )
      {
        offsetXRatio = refOffset->fields.offsetXRatio;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        OffsetX = FSUtility__GetOffsetX(offsetXRatio, calcNotch, v14);
        if ( !LODWORD(refOffset->fields.subMarginX) )
          OffsetX = -OffsetX;
        x = zero.fields.x + OffsetX;
      }
      if ( LOBYTE(refOffset->fields.addBottomY) )
        y = zero.fields.y + *(float *)&refOffset->fields.checkForceObi;
    }
  }
  v17 = x;
  v18 = y;
  result.fields.y = v18;
  result.fields.x = v17;
  return result;
}


float __fastcall FSUtility__GetBackFSOffsetY(System_String_o *fileName, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *v17; // x0
  float v18; // s8
  FSUtility_c *v19; // x0
  FSUtility_c *v20; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  v4 = fileName;
  if ( (byte_42E8CA6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v5, v6, v7);
    sub_B5D5C4(&FSUtility_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2706/*"Back/back"*/, v11, v12, v13);
    fileName = (System_String_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E8CA6 = 1;
  }
  result = -1;
  if ( !v4 )
    goto LABEL_16;
  v17 = System_String__Replace_44585024(
          v4,
          (System_String_o *)StringLiteral_2706/*"Back/back"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v18 = 0.0;
  if ( System_Int32__TryParse(v17, &result, 0LL) )
  {
    v19 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v19 = FSUtility_TypeInfo;
    }
    fileName = (System_String_o *)v19->static_fields->trimBackRatioY;
    if ( !fileName )
      goto LABEL_16;
    if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
           (System_Collections_Generic_Dictionary_int__float__o *)fileName,
           result,
           (const MethodInfo_2F35F78 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
    {
      v20 = FSUtility_TypeInfo;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v20 = FSUtility_TypeInfo;
      }
      fileName = (System_String_o *)v20->static_fields->trimBackRatioY;
      if ( fileName )
        return System_Collections_Generic_Dictionary_int__float___get_Item(
                 (System_Collections_Generic_Dictionary_int__float__o *)fileName,
                 result,
                 (const MethodInfo_2F35C48 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_16:
      sub_B5D69C(fileName, method);
    }
  }
  return v18;
}


float __fastcall FSUtility__GetCalcOffsetX(float subMarginX, const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w0

  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  return (float)((float)((float)(UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL) + -1.7778)
                       * 576.0)
               * 0.5)
       - subMarginX;
}


float __fastcall FSUtility__GetForceOffsetX(float subMarginX, bool calcNotch, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  FSUtility_c *v7; // x0
  FSUtility_c *v8; // x0

  if ( (byte_42E8CAD & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E8CAD = 1;
  }
  if ( calcNotch )
  {
    v7 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    subMarginX = FSUtility__GetNotchSubMarginX(subMarginX, (const MethodInfo *)v7);
  }
  v8 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetCalcOffsetX(subMarginX, (const MethodInfo *)v8);
}


float __fastcall FSUtility__GetNotchSubMarginX(float subMarginX, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  FSUtility_c *v6; // x0
  float v7; // s0

  if ( (byte_42E8CAB & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, v2, v3, v4);
    byte_42E8CAB = 1;
  }
  v6 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v7 = FSUtility__CalculateNotchWidth((const MethodInfo *)v6);
  if ( v7 > 0.0 )
    return (float)(v7 / 68.0) * subMarginX;
  return subMarginX;
}


float __fastcall FSUtility__GetOffsetX(float subMarginX, bool calcNotch, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  FSUtility_c *v7; // x0
  FSUtility_c *v9; // x0
  FSUtility_c *v10; // x0

  if ( (byte_42E8CAC & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E8CAC = 1;
  }
  v7 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista((const MethodInfo *)v7) )
    return 0.0;
  if ( calcNotch )
  {
    v9 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    subMarginX = FSUtility__GetNotchSubMarginX(subMarginX, (const MethodInfo *)v9);
  }
  v10 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetCalcOffsetX(subMarginX, (const MethodInfo *)v10);
}


void __fastcall FSUtility__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42E8C9E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v4, v5, v6);
    byte_42E8C9E = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B5D69C(v8, v9);
    FSUtility__InitializeLocal((FSUtility_o *)Instance, v9);
  }
}


void __fastcall FSUtility__InitializeLocal(FSUtility_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *FSUtilityList; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E8C9F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C9F = 1;
  }
  FSUtilityList = (UnityEngine_Object_o *)this->fields.FSUtilityList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(FSUtilityList, 0LL, 0LL);
  if ( !v6 )
    FSUtility__ReadFSUtilityList((FSUtility_o *)v6, this->fields.FSUtilityList, v7);
}


bool __fastcall FSUtility__IsBusySetAssetData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  FSUtility_c *v4; // x0

  if ( (byte_42E8C9D & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, v1, v2, v3);
    byte_42E8C9D = 1;
  }
  v4 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v4 = FSUtility_TypeInfo;
  }
  return v4->static_fields->isBusySetAssetData;
}


bool __fastcall FSUtility__IsFullScreenBack(System_String_o *fileName, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x0
  const MethodInfo *v12; // x1
  int32_t v13; // w19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  v4 = fileName;
  if ( (byte_42E8CA4 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2706/*"Back/back"*/, v5, v6, v7);
    fileName = (System_String_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E8CA4 = 1;
  }
  result = -1;
  if ( !v4 )
    sub_B5D69C(fileName, method);
  v11 = System_String__Replace_44585024(
          v4,
          (System_String_o *)StringLiteral_2706/*"Back/back"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  if ( System_Int32__TryParse(v11, &result, 0LL) )
  {
    v13 = result;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    return FSUtility__IsFullScreenBack_25608064(v13, v12);
  }
  else
  {
    return 0;
  }
}


bool __fastcall FSUtility__IsFullScreenBack_25608064(int32_t id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  il2cpp_array_size_t v5; // w21
  FSUtility_c *v6; // x0
  struct System_Int32_array *legacyBacks; // x8
  struct System_Int32_array *v8; // x8
  int32_t v9; // w8
  __int64 v11; // x0

  if ( (byte_42E8CA5 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8CA5 = 1;
  }
  v5 = 0;
  v6 = FSUtility_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FSUtility_TypeInfo;
    }
    legacyBacks = v6->static_fields->legacyBacks;
    if ( !legacyBacks )
LABEL_17:
      sub_B5D69C(v6, method);
    if ( (signed int)v5 >= (signed int)legacyBacks->max_length )
      return 1;
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FSUtility_TypeInfo;
    }
    v8 = v6->static_fields->legacyBacks;
    if ( !v8 )
      goto LABEL_17;
    if ( v5 >= v8->max_length )
    {
      v11 = sub_B5D6C8(v6);
      sub_B5D668(v11, 0LL);
    }
    v9 = v8->m_Items[++v5];
    if ( v9 == id )
      return 0;
  }
}


bool __fastcall FSUtility__IsFullScreenImage(System_String_o *imageName, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  unsigned __int64 v5; // x20
  FSUtility_c *v6; // x0
  struct System_String_array *fullScreenImages; // x8
  __int64 v10; // x0

  if ( (byte_42E8CA3 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8CA3 = 1;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v6 = FSUtility_TypeInfo;
    }
    fullScreenImages = v6->static_fields->fullScreenImages;
    if ( !fullScreenImages )
LABEL_16:
      sub_B5D69C(v6, method);
    if ( (__int64)v5 >= (int)fullScreenImages->max_length )
      return 0;
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      fullScreenImages = FSUtility_TypeInfo->static_fields->fullScreenImages;
      if ( !fullScreenImages )
        goto LABEL_16;
    }
    if ( v5 >= fullScreenImages->max_length )
    {
      v10 = sub_B5D6C8(v6);
      sub_B5D668(v10, 0LL);
    }
    if ( System_String__op_Equality(fullScreenImages->m_Items[v5++], imageName, 0LL) )
      return 1;
  }
}


bool __fastcall FSUtility__IsFullScreenMovie(System_String_o *fileName, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 Item_38133928; // x0
  __int64 v18; // x1
  __int64 v19; // x19
  System_String_o *Value; // x19
  unsigned __int64 v21; // x20
  struct System_String_array *legacyMovies; // x8
  struct System_String_array *legacyAspectMovies; // x20
  __int64 v26; // x8
  unsigned __int64 v27; // x21
  __int64 v28; // x0

  if ( (byte_42E8CA8 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FSUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Text_RegularExpressions_Regex_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_886/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21277/*"name"*/, v14, v15, v16);
    byte_42E8CA8 = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  Item_38133928 = (__int64)System_Text_RegularExpressions_Regex__Match(
                             fileName,
                             (System_String_o *)StringLiteral_886/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/,
                             0LL);
  if ( !Item_38133928 )
    goto LABEL_35;
  v19 = Item_38133928;
  if ( !System_Text_RegularExpressions_Group__get_Success((System_Text_RegularExpressions_Group_o *)Item_38133928, 0LL) )
    return 0;
  Item_38133928 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 392LL))(
                    v19,
                    *(_QWORD *)(*(_QWORD *)v19 + 400LL));
  if ( !Item_38133928 )
    goto LABEL_35;
  Item_38133928 = (__int64)System_Text_RegularExpressions_GroupCollection__get_Item_38133928(
                             (System_Text_RegularExpressions_GroupCollection_o *)Item_38133928,
                             (System_String_o *)StringLiteral_21277/*"name"*/,
                             0LL);
  if ( !Item_38133928 )
    goto LABEL_35;
  Value = System_Text_RegularExpressions_Capture__get_Value(
            (System_Text_RegularExpressions_Capture_o *)Item_38133928,
            0LL);
  v21 = 0LL;
  while ( 1 )
  {
    Item_38133928 = (__int64)FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      Item_38133928 = (__int64)FSUtility_TypeInfo;
    }
    legacyMovies = *(struct System_String_array **)(*(_QWORD *)(Item_38133928 + 184) + 48LL);
    if ( !legacyMovies )
      goto LABEL_35;
    if ( (__int64)v21 >= (int)legacyMovies->max_length )
      break;
    if ( (*(_BYTE *)(Item_38133928 + 307) & 4) != 0 && !*(_DWORD *)(Item_38133928 + 224) )
    {
      j_il2cpp_runtime_class_init_0(Item_38133928);
      legacyMovies = FSUtility_TypeInfo->static_fields->legacyMovies;
      if ( !legacyMovies )
        goto LABEL_35;
    }
    if ( v21 >= legacyMovies->max_length )
      goto LABEL_36;
    if ( System_String__op_Equality(legacyMovies->m_Items[v21++], Value, 0LL) )
      return 0;
  }
  Item_38133928 = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Item_38133928 = (__int64)BalanceConfig_TypeInfo;
  }
  legacyAspectMovies = *(struct System_String_array **)(*(_QWORD *)(Item_38133928 + 184) + 800LL);
  if ( !legacyAspectMovies )
    return 1;
  if ( (*(_BYTE *)(Item_38133928 + 307) & 4) != 0 && !*(_DWORD *)(Item_38133928 + 224) )
  {
    j_il2cpp_runtime_class_init_0(Item_38133928);
    legacyAspectMovies = BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
    if ( !legacyAspectMovies )
LABEL_35:
      sub_B5D69C(Item_38133928, v18);
  }
  v26 = *(_QWORD *)&legacyAspectMovies->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    while ( v27 < (unsigned int)v26 )
    {
      Item_38133928 = System_String__op_Equality(legacyAspectMovies->m_Items[v27], Value, 0LL);
      if ( (Item_38133928 & 1) != 0 )
        return 0;
      LODWORD(v26) = legacyAspectMovies->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        return 1;
    }
LABEL_36:
    v28 = sub_B5D6C8(Item_38133928);
    sub_B5D668(v28, 0LL);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FSUtility__IsFullScreenNP(int32_t chrId, int32_t seqId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  unsigned int v9; // w22
  _BYTE *v10; // x0
  __int64 v11; // x8
  __int64 v12; // x8
  int v13; // w8
  unsigned int v14; // w22
  __int64 v15; // x8
  __int64 v16; // x8
  int v17; // w8
  unsigned int v18; // w22
  __int64 v19; // x8
  __int64 v20; // x8
  int v21; // w8
  unsigned int v22; // w20
  __int64 v23; // x8
  __int64 v24; // x8
  int v25; // w8
  __int64 v27; // x0

  if ( (byte_42E8CA7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, seqId, (_DWORD)method, v3);
    sub_B5D5C4(&FSUtility_TypeInfo, v6, v7, v8);
    byte_42E8CA7 = 1;
  }
  v9 = 0;
  v10 = FSUtility_TypeInfo;
  while ( 1 )
  {
    if ( (v10[307] & 4) != 0 && !*((_DWORD *)v10 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = FSUtility_TypeInfo;
    }
    v11 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 56LL);
    if ( !v11 )
      goto LABEL_64;
    if ( (signed int)v9 >= *(_DWORD *)(v11 + 24) )
      break;
    if ( (v10[307] & 4) != 0 && !*((_DWORD *)v10 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = FSUtility_TypeInfo;
    }
    v12 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 56LL);
    if ( !v12 )
      goto LABEL_64;
    if ( v9 >= *(_DWORD *)(v12 + 24) )
    {
LABEL_65:
      v27 = sub_B5D6C8(v10);
      sub_B5D668(v27, 0LL);
    }
    v13 = *(_DWORD *)(v12 + 4LL * (int)v9++ + 32);
    if ( v13 == chrId )
      return 1;
  }
  v14 = 0;
  while ( 1 )
  {
    if ( (v10[307] & 4) != 0 && !*((_DWORD *)v10 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = FSUtility_TypeInfo;
    }
    v15 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 64LL);
    if ( !v15 )
      goto LABEL_64;
    if ( (signed int)v14 >= *(_DWORD *)(v15 + 24) )
      break;
    if ( (v10[307] & 4) != 0 && !*((_DWORD *)v10 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = FSUtility_TypeInfo;
    }
    v16 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 64LL);
    if ( !v16 )
      goto LABEL_64;
    if ( v14 >= *(_DWORD *)(v16 + 24) )
      goto LABEL_65;
    v17 = *(_DWORD *)(v16 + 4LL * (int)v14++ + 32);
    if ( v17 == seqId )
      return 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( *(_QWORD *)(*((_QWORD *)v10 + 23) + 808LL) )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( (v10[307] & 4) != 0 && !*((_DWORD *)v10 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BalanceConfig_TypeInfo;
      }
      v19 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 808LL);
      if ( !v19 )
        break;
      if ( (signed int)v18 >= *(_DWORD *)(v19 + 24) )
        goto LABEL_46;
      if ( (v10[307] & 4) != 0 && !*((_DWORD *)v10 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BalanceConfig_TypeInfo;
      }
      v20 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 808LL);
      if ( !v20 )
        break;
      if ( v18 >= *(_DWORD *)(v20 + 24) )
        goto LABEL_65;
      v21 = *(_DWORD *)(v20 + 4LL * (int)v18++ + 32);
      if ( v21 == chrId )
        return 1;
    }
LABEL_64:
    sub_B5D69C(v10, *(_QWORD *)&seqId);
  }
LABEL_46:
  if ( (v10[307] & 4) != 0 && !*((_DWORD *)v10 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( *(_QWORD *)(*((_QWORD *)v10 + 23) + 816LL) )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( (v10[307] & 4) != 0 && !*((_DWORD *)v10 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BalanceConfig_TypeInfo;
      }
      v23 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 816LL);
      if ( !v23 )
        goto LABEL_64;
      if ( (signed int)v22 >= *(_DWORD *)(v23 + 24) )
        return 0;
      if ( (v10[307] & 4) != 0 && !*((_DWORD *)v10 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BalanceConfig_TypeInfo;
      }
      v24 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 816LL);
      if ( !v24 )
        goto LABEL_64;
      if ( v22 >= *(_DWORD *)(v24 + 24) )
        goto LABEL_65;
      v25 = *(_DWORD *)(v24 + 4LL * (int)v22++ + 32);
      if ( v25 == seqId )
        return 1;
    }
  }
  return 0;
}


bool __fastcall FSUtility__IsOverScope(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int32_t width; // w19
  int32_t height; // w20
  FSUtility_c *v6; // x8

  if ( (byte_42E8CAA & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, v1, v2, v3);
    byte_42E8CAA = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v6 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v6 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)height) > v6->static_fields->RATIO_SCOPE;
}


bool __fastcall FSUtility__IsTablet(const MethodInfo *method)
{
  int32_t width; // w19

  width = UnityEngine_Screen__get_width(0LL);
  return (float)((float)width / (float)UnityEngine_Screen__get_height(0LL)) < 1.7778;
}


bool __fastcall FSUtility__IsUnderVista(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int32_t width; // w19
  int32_t height; // w20
  FSUtility_c *v6; // x8

  if ( (byte_42E8CA9 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, v1, v2, v3);
    byte_42E8CA9 = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v6 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v6 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)height) <= v6->static_fields->RATIO_VISTA;
}


void __fastcall FSUtility__LoadAssetData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x19
  System_Int32_array **Instance; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Object_o *v31; // x20
  FSUtility_c *v32; // x0
  System_String_o *FS_UTILITY_LIST_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v34; // x21

  if ( (byte_42E8CA0 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&FSUtility_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&Method_FSUtility___c__DisplayClass15_0__LoadAssetData_b__0__, v16, v17, v18);
    sub_B5D5C4(&FSUtility___c__DisplayClass15_0_TypeInfo, v19, v20, v21);
    byte_42E8CA0 = 1;
  }
  v22 = sub_B5D694(FSUtility___c__DisplayClass15_0_TypeInfo);
  FSUtility___c__DisplayClass15_0___ctor((FSUtility___c__DisplayClass15_0_o *)v22, 0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !v22 )
    sub_B5D69C(Instance, v24);
  *(_QWORD *)(v22 + 16) = Instance;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), Instance, v25, v26, v27, v28, v29, v30);
  v31 = *(UnityEngine_Object_o **)(v22 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v31, 0LL, 0LL) )
  {
    v32 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v32 = FSUtility_TypeInfo;
    }
    v32->static_fields->isBusySetAssetData = 1;
    FS_UTILITY_LIST_PATH = FSUtility_TypeInfo->static_fields->FS_UTILITY_LIST_PATH;
    v34 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v34,
      (Il2CppObject *)v22,
      Method_FSUtility___c__DisplayClass15_0__LoadAssetData_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(FS_UTILITY_LIST_PATH, v34, 1, 0LL);
  }
}


void __fastcall FSUtility__ReadFSUtilityList(
        FSUtility_o *this,
        FSUtilityList_o *fsUtilityList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **legacyBacks; // x20
  FSUtility_c *v13; // x0
  struct FSUtility_StaticFields *static_fields; // x0
  System_Int32_array **legacyMovies; // x1
  struct FSUtility_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **fullScreenImages; // x1
  struct FSUtility_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct FSUtilityList_trimBackRatioYChild_array *trimBackRatioY; // x20
  int max_length; // w8
  unsigned int v39; // w22
  FSUtilityList_trimBackRatioYChild_o *v40; // x24
  FSUtility_c *v41; // x0
  System_Int32_array **fullScreenNpChrs; // x20
  struct FSUtility_StaticFields *v43; // x0
  System_Int32_array **fullScreenNpSeqIds; // x1
  struct FSUtility_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0

  if ( (byte_42E8CA1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__float__Add__,
      (_DWORD)fsUtilityList,
      (_DWORD)method,
      v3);
    this = (FSUtility_o *)sub_B5D5C4(&FSUtility_TypeInfo, v9, v10, v11);
    byte_42E8CA1 = 1;
  }
  if ( !fsUtilityList )
    goto LABEL_21;
  legacyBacks = (System_Int32_array **)fsUtilityList->fields.legacyBacks;
  v13 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v13 = FSUtility_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->legacyBacks = (struct System_Int32_array *)legacyBacks;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->legacyBacks,
    legacyBacks,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  legacyMovies = (System_Int32_array **)fsUtilityList->fields.legacyMovies;
  v16 = FSUtility_TypeInfo->static_fields;
  v16->legacyMovies = (struct System_String_array *)legacyMovies;
  sub_B5D560((BattleServantConfConponent_o *)&v16->legacyMovies, legacyMovies, v17, v18, v19, v20, v21, v22);
  fullScreenImages = (System_Int32_array **)fsUtilityList->fields.fullScreenImages;
  v24 = FSUtility_TypeInfo->static_fields;
  v24->fullScreenImages = (struct System_String_array *)fullScreenImages;
  sub_B5D560((BattleServantConfConponent_o *)&v24->fullScreenImages, fullScreenImages, v25, v26, v27, v28, v29, v30);
  trimBackRatioY = fsUtilityList->fields.trimBackRatioY;
  if ( !trimBackRatioY )
    goto LABEL_21;
  max_length = trimBackRatioY->max_length;
  if ( max_length >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= max_length )
      {
        v52 = sub_B5D6C8(this);
        sub_B5D668(v52, 0LL);
      }
      this = (FSUtility_o *)FSUtility_TypeInfo;
      v40 = trimBackRatioY->m_Items[v39];
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (FSUtility_o *)FSUtility_TypeInfo;
      }
      if ( !v40 )
        break;
      this = (FSUtility_o *)this[5].fields.FSUtilityList->fields.trimBackRatioY;
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_int__float___Add(
        (System_Collections_Generic_Dictionary_int__float__o *)this,
        v40->fields.id,
        v40->fields.offsetY,
        (const MethodInfo_2F35D08 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      max_length = trimBackRatioY->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_17;
    }
LABEL_21:
    sub_B5D69C(this, fsUtilityList);
  }
LABEL_17:
  v41 = FSUtility_TypeInfo;
  fullScreenNpChrs = (System_Int32_array **)fsUtilityList->fields.fullScreenNpChrs;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v41 = FSUtility_TypeInfo;
  }
  v43 = v41->static_fields;
  v43->fullScreenNpChrs = (struct System_Int32_array *)fullScreenNpChrs;
  sub_B5D560((BattleServantConfConponent_o *)&v43->fullScreenNpChrs, fullScreenNpChrs, v31, v32, v33, v34, v35, v36);
  fullScreenNpSeqIds = (System_Int32_array **)fsUtilityList->fields.fullScreenNpSeqIds;
  v45 = FSUtility_TypeInfo->static_fields;
  v45->fullScreenNpSeqIds = (struct System_Int32_array *)fullScreenNpSeqIds;
  sub_B5D560((BattleServantConfConponent_o *)&v45->fullScreenNpSeqIds, fullScreenNpSeqIds, v46, v47, v48, v49, v50, v51);
}


void __fastcall FSUtility__SetUpBackTextureSize(
        ExUITexture_o *backTexture,
        System_String_o *bgName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 IsFullScreenBack; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_42E8CA2 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)bgName, (_DWORD)method, v3);
    byte_42E8CA2 = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsFullScreenBack = FSUtility__IsFullScreenBack(bgName, (const MethodInfo *)bgName);
  if ( !backTexture )
    sub_B5D69C(IsFullScreenBack, v7);
  if ( IsFullScreenBack )
    v8 = 576;
  else
    v8 = 756;
  UIWidget__set_height((UIWidget_o *)backTexture, v8, 0LL);
  UIWidget__set_width((UIWidget_o *)backTexture, 1344, 0LL);
}


void __fastcall FSUtility___c__DisplayClass15_0___ctor(
        FSUtility___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FSUtility___c__DisplayClass15_0___LoadAssetData_b__0(
        FSUtility___c__DisplayClass15_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FSUtility___c__DisplayClass15_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FSUtility_c *v9; // x0

  v5 = this;
  if ( (byte_42E56C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_FSUtilityList___, (_DWORD)assetData, (_DWORD)method, v3);
    this = (FSUtility___c__DisplayClass15_0_o *)sub_B5D5C4(&FSUtility_TypeInfo, v6, v7, v8);
    byte_42E56C0 = 1;
  }
  if ( !assetData
    || (this = (FSUtility___c__DisplayClass15_0_o *)AssetData__GetObject_Texture2D_(
                                                      assetData,
                                                      (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_FSUtilityList___),
        !v5->fields.ins) )
  {
    sub_B5D69C(this, assetData);
  }
  FSUtility__ReadFSUtilityList(v5->fields.ins, (FSUtilityList_o *)this, 0LL);
  v9 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v9 = FSUtility_TypeInfo;
  }
  v9->static_fields->isBusySetAssetData = 0;
}