void __fastcall FSUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  FSUtility_c *v13; // x8
  struct FSUtility_StaticFields *static_fields; // x0
  System_Int32_array **v15; // x1
  System_Int32_array **v16; // x0
  struct FSUtility_StaticFields *v17; // x8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x0
  struct FSUtility_StaticFields *v25; // x8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_Dictionary_int__float__o *v34; // x19
  struct FSUtility_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x0
  struct FSUtility_StaticFields *v43; // x8
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

  if ( (byte_421545A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v8);
    sub_B0D8A4(&FSUtility_TypeInfo, v9);
    sub_B0D8A4(&int___TypeInfo, v10);
    sub_B0D8A4(&string___TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_6839/*"FullScreen/FSUtilityList"*/, v12);
    byte_421545A = 1;
  }
  FSUtility_TypeInfo->static_fields->RATIO_VISTA = 2.0;
  v13 = FSUtility_TypeInfo;
  FSUtility_TypeInfo->static_fields->RATIO_SCOPE = 2.3333;
  static_fields = v13->static_fields;
  v15 = (System_Int32_array **)StringLiteral_6839/*"FullScreen/FSUtilityList"*/;
  static_fields->FS_UTILITY_LIST_PATH = (struct System_String_o *)StringLiteral_6839/*"FullScreen/FSUtilityList"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->FS_UTILITY_LIST_PATH, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  v17 = FSUtility_TypeInfo->static_fields;
  v17->legacyBacks = (struct System_Int32_array *)v16;
  sub_B0D840((BattleServantConfConponent_o *)&v17->legacyBacks, v16, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)sub_B0D8BC(string___TypeInfo, 0LL);
  v25 = FSUtility_TypeInfo->static_fields;
  v25->fullScreenImages = (struct System_String_array *)v24;
  sub_B0D840((BattleServantConfConponent_o *)&v25->fullScreenImages, v24, v26, v27, v28, v29, v30, v31);
  v34 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_int__float__TypeInfo,
                                                                 v32,
                                                                 v33);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v34,
    (const MethodInfo_2E934C0 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  v35 = FSUtility_TypeInfo->static_fields;
  v35->trimBackRatioY = v34;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v35->trimBackRatioY,
    (System_Int32_array **)v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Int32_array **)sub_B0D8BC(string___TypeInfo, 0LL);
  v43 = FSUtility_TypeInfo->static_fields;
  v43->legacyMovies = (struct System_String_array *)v42;
  sub_B0D840((BattleServantConfConponent_o *)&v43->legacyMovies, v42, v44, v45, v46, v47, v48, v49);
  v50 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  v51 = FSUtility_TypeInfo->static_fields;
  v51->fullScreenNpChrs = (struct System_Int32_array *)v50;
  sub_B0D840((BattleServantConfConponent_o *)&v51->fullScreenNpChrs, v50, v52, v53, v54, v55, v56, v57);
  v58 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  v59 = FSUtility_TypeInfo->static_fields;
  v59->fullScreenNpSeqIds = (struct System_Int32_array *)v58;
  sub_B0D840((BattleServantConfConponent_o *)&v59->fullScreenNpSeqIds, v58, v60, v61, v62, v63, v64, v65);
}


void __fastcall FSUtility___ctor(FSUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4215459 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FSUtility___ctor__, method);
    byte_4215459 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_FSUtility___ctor__);
}


float __fastcall FSUtility__CalculateNotchWidth(const MethodInfo *method)
{
  __int64 v1; // x1
  float left; // s8
  int32_t width; // w19
  float right; // s0
  float v5; // s8
  ManagerConfig_c *v6; // x0
  int HEIGHT; // s9
  UnityEngine_Rect_o safeArea; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215458 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, v1);
    byte_4215458 = 1;
  }
  safeArea = UnityEngine_Screen__get_safeArea(0LL);
  left = UnityEngine_Rect__get_left(safeArea, (const MethodInfo *)&safeArea);
  width = UnityEngine_Screen__get_width(0LL);
  right = UnityEngine_Rect__get_right(v10, (const MethodInfo *)&safeArea);
  v5 = UnityEngine_Mathf__Max(left, (float)width - right, 0LL);
  v6 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v6 = ManagerConfig_TypeInfo;
  }
  HEIGHT = v6->static_fields->HEIGHT;
  return v5 * (float)((float)HEIGHT / (float)UnityEngine_Screen__get_height(0LL));
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall FSUtility__GetAddOffset(
        FSOffset_o *refOffset,
        bool calcNotch,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Vector2_o zero; // kr00_8
  float x; // s8
  float y; // s9
  FSUtility_c *v9; // x0
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  float offsetXRatio; // s10
  float OffsetX; // s0
  float v14; // s0
  float v15; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4215457 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, calcNotch);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4215457 = 1;
  }
  zero = UnityEngine_Vector2__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  v9 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista((const MethodInfo *)v9) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)refOffset, 0LL, 0LL);
    if ( v10 )
    {
      if ( !refOffset )
        sub_B0D97C(v10);
      if ( LOBYTE(refOffset->fields.enableAddOffsetXFouseScopeRatio) )
      {
        offsetXRatio = refOffset->fields.offsetXRatio;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        OffsetX = FSUtility__GetOffsetX(offsetXRatio, calcNotch, v11);
        if ( !LODWORD(refOffset->fields.subMarginX) )
          OffsetX = -OffsetX;
        x = zero.fields.x + OffsetX;
      }
      if ( LOBYTE(refOffset->fields.addBottomY) )
        y = zero.fields.y + *(float *)&refOffset->fields.checkForceObi;
    }
  }
  v14 = x;
  v15 = y;
  result.fields.y = v15;
  result.fields.x = v14;
  return result;
}


float __fastcall FSUtility__GetBackFSOffsetY(System_String_o *fileName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  float v8; // s8
  FSUtility_c *v9; // x0
  FSUtility_c *v10; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  v2 = fileName;
  if ( (byte_421544F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v3);
    sub_B0D8A4(&FSUtility_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_2663/*"Back/back"*/, v5);
    fileName = (System_String_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_421544F = 1;
  }
  result = -1;
  if ( !v2 )
    goto LABEL_16;
  v7 = System_String__Replace_43857140(
         v2,
         (System_String_o *)StringLiteral_2663/*"Back/back"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  v8 = 0.0;
  if ( System_Int32__TryParse(v7, &result, 0LL) )
  {
    v9 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v9 = FSUtility_TypeInfo;
    }
    fileName = (System_String_o *)v9->static_fields->trimBackRatioY;
    if ( !fileName )
      goto LABEL_16;
    if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
           (System_Collections_Generic_Dictionary_int__float__o *)fileName,
           result,
           (const MethodInfo_2E942DC *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
    {
      v10 = FSUtility_TypeInfo;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v10 = FSUtility_TypeInfo;
      }
      fileName = (System_String_o *)v10->static_fields->trimBackRatioY;
      if ( fileName )
        return System_Collections_Generic_Dictionary_int__float___get_Item(
                 (System_Collections_Generic_Dictionary_int__float__o *)fileName,
                 result,
                 (const MethodInfo_2E93FAC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_16:
      sub_B0D97C(fileName);
    }
  }
  return v8;
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
  FSUtility_c *v5; // x0
  FSUtility_c *v6; // x0

  if ( (byte_4215456 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    byte_4215456 = 1;
  }
  if ( calcNotch )
  {
    v5 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    subMarginX = FSUtility__GetNotchSubMarginX(subMarginX, (const MethodInfo *)v5);
  }
  v6 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetCalcOffsetX(subMarginX, (const MethodInfo *)v6);
}


float __fastcall FSUtility__GetNotchSubMarginX(float subMarginX, const MethodInfo *method)
{
  __int64 v2; // x1
  FSUtility_c *v4; // x0
  float v5; // s0

  if ( (byte_4215454 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, v2);
    byte_4215454 = 1;
  }
  v4 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = FSUtility__CalculateNotchWidth((const MethodInfo *)v4);
  if ( v5 > 0.0 )
    return (float)(v5 / 68.0) * subMarginX;
  return subMarginX;
}


float __fastcall FSUtility__GetOffsetX(float subMarginX, bool calcNotch, const MethodInfo *method)
{
  FSUtility_c *v5; // x0
  FSUtility_c *v7; // x0
  FSUtility_c *v8; // x0

  if ( (byte_4215455 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    byte_4215455 = 1;
  }
  v5 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista((const MethodInfo *)v5) )
    return 0.0;
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


void __fastcall FSUtility__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4215447 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v2);
    byte_4215447 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B0D97C(v4);
    FSUtility__InitializeLocal((FSUtility_o *)Instance, v5);
  }
}


void __fastcall FSUtility__InitializeLocal(FSUtility_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *FSUtilityList; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4215448 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215448 = 1;
  }
  FSUtilityList = (UnityEngine_Object_o *)this->fields.FSUtilityList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(FSUtilityList, 0LL, 0LL);
  if ( !v4 )
    FSUtility__ReadFSUtilityList((FSUtility_o *)v4, this->fields.FSUtilityList, v5);
}


bool __fastcall FSUtility__IsBusySetAssetData(const MethodInfo *method)
{
  __int64 v1; // x1
  FSUtility_c *v2; // x0

  if ( (byte_4215446 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, v1);
    byte_4215446 = 1;
  }
  v2 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v2 = FSUtility_TypeInfo;
  }
  return v2->static_fields->isBusySetAssetData;
}


bool __fastcall FSUtility__IsFullScreenBack(System_String_o *fileName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  v2 = fileName;
  if ( (byte_421544D & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_2663/*"Back/back"*/, v3);
    fileName = (System_String_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_421544D = 1;
  }
  result = -1;
  if ( !v2 )
    sub_B0D97C(fileName);
  v5 = System_String__Replace_43857140(
         v2,
         (System_String_o *)StringLiteral_2663/*"Back/back"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  if ( System_Int32__TryParse(v5, &result, 0LL) )
  {
    v7 = result;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    return FSUtility__IsFullScreenBack_26036884(v7, v6);
  }
  else
  {
    return 0;
  }
}


bool __fastcall FSUtility__IsFullScreenBack_26036884(int32_t id, const MethodInfo *method)
{
  il2cpp_array_size_t v3; // w21
  FSUtility_c *v4; // x0
  struct System_Int32_array *legacyBacks; // x8
  struct System_Int32_array *v6; // x8
  int32_t v7; // w8
  __int64 v9; // x0

  if ( (byte_421544E & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    byte_421544E = 1;
  }
  v3 = 0;
  v4 = FSUtility_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = FSUtility_TypeInfo;
    }
    legacyBacks = v4->static_fields->legacyBacks;
    if ( !legacyBacks )
LABEL_17:
      sub_B0D97C(v4);
    if ( (signed int)v3 >= (signed int)legacyBacks->max_length )
      return 1;
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = FSUtility_TypeInfo;
    }
    v6 = v4->static_fields->legacyBacks;
    if ( !v6 )
      goto LABEL_17;
    if ( v3 >= v6->max_length )
    {
      v9 = sub_B0D9A8(v4);
      sub_B0D948(v9, 0LL);
    }
    v7 = v6->m_Items[++v3];
    if ( v7 == id )
      return 0;
  }
}


bool __fastcall FSUtility__IsFullScreenImage(System_String_o *imageName, const MethodInfo *method)
{
  unsigned __int64 v3; // x20
  FSUtility_c *v4; // x0
  struct System_String_array *fullScreenImages; // x8
  __int64 v8; // x0

  if ( (byte_421544C & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    byte_421544C = 1;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v4 = FSUtility_TypeInfo;
    }
    fullScreenImages = v4->static_fields->fullScreenImages;
    if ( !fullScreenImages )
LABEL_16:
      sub_B0D97C(v4);
    if ( (__int64)v3 >= (int)fullScreenImages->max_length )
      return 0;
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      fullScreenImages = FSUtility_TypeInfo->static_fields->fullScreenImages;
      if ( !fullScreenImages )
        goto LABEL_16;
    }
    if ( v3 >= fullScreenImages->max_length )
    {
      v8 = sub_B0D9A8(v4);
      sub_B0D948(v8, 0LL);
    }
    if ( System_String__op_Equality(fullScreenImages->m_Items[v3++], imageName, 0LL) )
      return 1;
  }
}


bool __fastcall FSUtility__IsFullScreenMovie(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 Item_37056304; // x0
  __int64 v8; // x19
  System_String_o *Value; // x19
  unsigned __int64 v10; // x20
  struct System_String_array *legacyMovies; // x8
  struct System_String_array *legacyAspectMovies; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x21
  __int64 v17; // x0

  if ( (byte_4215451 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&FSUtility_TypeInfo, v3);
    sub_B0D8A4(&System_Text_RegularExpressions_Regex_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_880/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/, v5);
    sub_B0D8A4(&StringLiteral_21069/*"name"*/, v6);
    byte_4215451 = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  Item_37056304 = (__int64)System_Text_RegularExpressions_Regex__Match(
                             fileName,
                             (System_String_o *)StringLiteral_880/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/,
                             0LL);
  if ( !Item_37056304 )
    goto LABEL_35;
  v8 = Item_37056304;
  if ( !System_Text_RegularExpressions_Group__get_Success((System_Text_RegularExpressions_Group_o *)Item_37056304, 0LL) )
    return 0;
  Item_37056304 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 392LL))(
                    v8,
                    *(_QWORD *)(*(_QWORD *)v8 + 400LL));
  if ( !Item_37056304 )
    goto LABEL_35;
  Item_37056304 = (__int64)System_Text_RegularExpressions_GroupCollection__get_Item_37056304(
                             (System_Text_RegularExpressions_GroupCollection_o *)Item_37056304,
                             (System_String_o *)StringLiteral_21069/*"name"*/,
                             0LL);
  if ( !Item_37056304 )
    goto LABEL_35;
  Value = System_Text_RegularExpressions_Capture__get_Value(
            (System_Text_RegularExpressions_Capture_o *)Item_37056304,
            0LL);
  v10 = 0LL;
  while ( 1 )
  {
    Item_37056304 = (__int64)FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      Item_37056304 = (__int64)FSUtility_TypeInfo;
    }
    legacyMovies = *(struct System_String_array **)(*(_QWORD *)(Item_37056304 + 184) + 48LL);
    if ( !legacyMovies )
      goto LABEL_35;
    if ( (__int64)v10 >= (int)legacyMovies->max_length )
      break;
    if ( (*(_BYTE *)(Item_37056304 + 307) & 4) != 0 && !*(_DWORD *)(Item_37056304 + 224) )
    {
      j_il2cpp_runtime_class_init_0(Item_37056304);
      legacyMovies = FSUtility_TypeInfo->static_fields->legacyMovies;
      if ( !legacyMovies )
        goto LABEL_35;
    }
    if ( v10 >= legacyMovies->max_length )
      goto LABEL_36;
    if ( System_String__op_Equality(legacyMovies->m_Items[v10++], Value, 0LL) )
      return 0;
  }
  Item_37056304 = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Item_37056304 = (__int64)BalanceConfig_TypeInfo;
  }
  legacyAspectMovies = *(struct System_String_array **)(*(_QWORD *)(Item_37056304 + 184) + 800LL);
  if ( !legacyAspectMovies )
    return 1;
  if ( (*(_BYTE *)(Item_37056304 + 307) & 4) != 0 && !*(_DWORD *)(Item_37056304 + 224) )
  {
    j_il2cpp_runtime_class_init_0(Item_37056304);
    legacyAspectMovies = BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
    if ( !legacyAspectMovies )
LABEL_35:
      sub_B0D97C(Item_37056304);
  }
  v15 = *(_QWORD *)&legacyAspectMovies->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( v16 < (unsigned int)v15 )
    {
      Item_37056304 = System_String__op_Equality(legacyAspectMovies->m_Items[v16], Value, 0LL);
      if ( (Item_37056304 & 1) != 0 )
        return 0;
      LODWORD(v15) = legacyAspectMovies->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        return 1;
    }
LABEL_36:
    v17 = sub_B0D9A8(Item_37056304);
    sub_B0D948(v17, 0LL);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FSUtility__IsFullScreenNP(int32_t chrId, int32_t seqId, const MethodInfo *method)
{
  __int64 v5; // x1
  unsigned int v6; // w22
  _BYTE *v7; // x0
  __int64 v8; // x8
  __int64 v9; // x8
  int v10; // w8
  unsigned int v11; // w22
  __int64 v12; // x8
  __int64 v13; // x8
  int v14; // w8
  unsigned int v15; // w22
  __int64 v16; // x8
  __int64 v17; // x8
  int v18; // w8
  unsigned int v19; // w20
  __int64 v20; // x8
  __int64 v21; // x8
  int v22; // w8
  __int64 v24; // x0

  if ( (byte_4215450 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&seqId);
    sub_B0D8A4(&FSUtility_TypeInfo, v5);
    byte_4215450 = 1;
  }
  v6 = 0;
  v7 = FSUtility_TypeInfo;
  while ( 1 )
  {
    if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FSUtility_TypeInfo;
    }
    v8 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 56LL);
    if ( !v8 )
      goto LABEL_64;
    if ( (signed int)v6 >= *(_DWORD *)(v8 + 24) )
      break;
    if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FSUtility_TypeInfo;
    }
    v9 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 56LL);
    if ( !v9 )
      goto LABEL_64;
    if ( v6 >= *(_DWORD *)(v9 + 24) )
    {
LABEL_65:
      v24 = sub_B0D9A8(v7);
      sub_B0D948(v24, 0LL);
    }
    v10 = *(_DWORD *)(v9 + 4LL * (int)v6++ + 32);
    if ( v10 == chrId )
      return 1;
  }
  v11 = 0;
  while ( 1 )
  {
    if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FSUtility_TypeInfo;
    }
    v12 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 64LL);
    if ( !v12 )
      goto LABEL_64;
    if ( (signed int)v11 >= *(_DWORD *)(v12 + 24) )
      break;
    if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FSUtility_TypeInfo;
    }
    v13 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 64LL);
    if ( !v13 )
      goto LABEL_64;
    if ( v11 >= *(_DWORD *)(v13 + 24) )
      goto LABEL_65;
    v14 = *(_DWORD *)(v13 + 4LL * (int)v11++ + 32);
    if ( v14 == seqId )
      return 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( *(_QWORD *)(*((_QWORD *)v7 + 23) + 808LL) )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      v16 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 808LL);
      if ( !v16 )
        break;
      if ( (signed int)v15 >= *(_DWORD *)(v16 + 24) )
        goto LABEL_46;
      if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      v17 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 808LL);
      if ( !v17 )
        break;
      if ( v15 >= *(_DWORD *)(v17 + 24) )
        goto LABEL_65;
      v18 = *(_DWORD *)(v17 + 4LL * (int)v15++ + 32);
      if ( v18 == chrId )
        return 1;
    }
LABEL_64:
    sub_B0D97C(v7);
  }
LABEL_46:
  if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( *(_QWORD *)(*((_QWORD *)v7 + 23) + 816LL) )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      v20 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 816LL);
      if ( !v20 )
        goto LABEL_64;
      if ( (signed int)v19 >= *(_DWORD *)(v20 + 24) )
        return 0;
      if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      v21 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 816LL);
      if ( !v21 )
        goto LABEL_64;
      if ( v19 >= *(_DWORD *)(v21 + 24) )
        goto LABEL_65;
      v22 = *(_DWORD *)(v21 + 4LL * (int)v19++ + 32);
      if ( v22 == seqId )
        return 1;
    }
  }
  return 0;
}


bool __fastcall FSUtility__IsOverScope(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t width; // w19
  int32_t height; // w20
  FSUtility_c *v4; // x8

  if ( (byte_4215453 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, v1);
    byte_4215453 = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v4 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v4 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)height) > v4->static_fields->RATIO_SCOPE;
}


bool __fastcall FSUtility__IsTablet(const MethodInfo *method)
{
  int32_t width; // w19

  width = UnityEngine_Screen__get_width(0LL);
  return (float)((float)width / (float)UnityEngine_Screen__get_height(0LL)) < 1.7778;
}


bool __fastcall FSUtility__IsUnderVista(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t width; // w19
  int32_t height; // w20
  FSUtility_c *v4; // x8

  if ( (byte_4215452 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, v1);
    byte_4215452 = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v4 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v4 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)height) <= v4->static_fields->RATIO_VISTA;
}


void __fastcall FSUtility__LoadAssetData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  System_Int32_array **Instance; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  FSUtility_c *v20; // x0
  System_String_o *FS_UTILITY_LIST_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21

  if ( (byte_4215449 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, v1);
    sub_B0D8A4(&FSUtility_TypeInfo, v3);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v6);
    sub_B0D8A4(&Method_FSUtility___c__DisplayClass15_0__LoadAssetData_b__0__, v7);
    sub_B0D8A4(&FSUtility___c__DisplayClass15_0_TypeInfo, v8);
    byte_4215449 = 1;
  }
  v9 = sub_B0D974(FSUtility___c__DisplayClass15_0_TypeInfo, v1, v2);
  FSUtility___c__DisplayClass15_0___ctor((FSUtility___c__DisplayClass15_0_o *)v9, 0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !v9 )
    sub_B0D97C(Instance);
  *(_QWORD *)(v9 + 16) = Instance;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), Instance, v11, v12, v13, v14, v15, v16);
  v17 = *(UnityEngine_Object_o **)(v9 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v17, 0LL, 0LL) )
  {
    v20 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v20 = FSUtility_TypeInfo;
    }
    v20->static_fields->isBusySetAssetData = 1;
    FS_UTILITY_LIST_PATH = FSUtility_TypeInfo->static_fields->FS_UTILITY_LIST_PATH;
    v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19);
    AssetLoader_LoadEndDataHandler___ctor(
      v22,
      (Il2CppObject *)v9,
      Method_FSUtility___c__DisplayClass15_0__LoadAssetData_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(FS_UTILITY_LIST_PATH, v22, 1, 0LL);
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
  __int64 v9; // x1
  System_Int32_array **legacyBacks; // x20
  FSUtility_c *v11; // x0
  struct FSUtility_StaticFields *static_fields; // x0
  System_Int32_array **legacyMovies; // x1
  struct FSUtility_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **fullScreenImages; // x1
  struct FSUtility_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct FSUtilityList_trimBackRatioYChild_array *trimBackRatioY; // x20
  int max_length; // w8
  unsigned int v37; // w22
  FSUtilityList_trimBackRatioYChild_o *v38; // x24
  FSUtility_c *v39; // x0
  System_Int32_array **fullScreenNpChrs; // x20
  struct FSUtility_StaticFields *v41; // x0
  System_Int32_array **fullScreenNpSeqIds; // x1
  struct FSUtility_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0

  if ( (byte_421544A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__float__Add__, fsUtilityList);
    this = (FSUtility_o *)sub_B0D8A4(&FSUtility_TypeInfo, v9);
    byte_421544A = 1;
  }
  if ( !fsUtilityList )
    goto LABEL_21;
  legacyBacks = (System_Int32_array **)fsUtilityList->fields.legacyBacks;
  v11 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v11 = FSUtility_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->legacyBacks = (struct System_Int32_array *)legacyBacks;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->legacyBacks,
    legacyBacks,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  legacyMovies = (System_Int32_array **)fsUtilityList->fields.legacyMovies;
  v14 = FSUtility_TypeInfo->static_fields;
  v14->legacyMovies = (struct System_String_array *)legacyMovies;
  sub_B0D840((BattleServantConfConponent_o *)&v14->legacyMovies, legacyMovies, v15, v16, v17, v18, v19, v20);
  fullScreenImages = (System_Int32_array **)fsUtilityList->fields.fullScreenImages;
  v22 = FSUtility_TypeInfo->static_fields;
  v22->fullScreenImages = (struct System_String_array *)fullScreenImages;
  sub_B0D840((BattleServantConfConponent_o *)&v22->fullScreenImages, fullScreenImages, v23, v24, v25, v26, v27, v28);
  trimBackRatioY = fsUtilityList->fields.trimBackRatioY;
  if ( !trimBackRatioY )
    goto LABEL_21;
  max_length = trimBackRatioY->max_length;
  if ( max_length >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= max_length )
      {
        v50 = sub_B0D9A8(this);
        sub_B0D948(v50, 0LL);
      }
      this = (FSUtility_o *)FSUtility_TypeInfo;
      v38 = trimBackRatioY->m_Items[v37];
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (FSUtility_o *)FSUtility_TypeInfo;
      }
      if ( !v38 )
        break;
      this = (FSUtility_o *)this[5].fields.FSUtilityList->fields.trimBackRatioY;
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_int__float___Add(
        (System_Collections_Generic_Dictionary_int__float__o *)this,
        v38->fields.id,
        v38->fields.offsetY,
        (const MethodInfo_2E9406C *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      max_length = trimBackRatioY->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_17;
    }
LABEL_21:
    sub_B0D97C(this);
  }
LABEL_17:
  v39 = FSUtility_TypeInfo;
  fullScreenNpChrs = (System_Int32_array **)fsUtilityList->fields.fullScreenNpChrs;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v39 = FSUtility_TypeInfo;
  }
  v41 = v39->static_fields;
  v41->fullScreenNpChrs = (struct System_Int32_array *)fullScreenNpChrs;
  sub_B0D840((BattleServantConfConponent_o *)&v41->fullScreenNpChrs, fullScreenNpChrs, v29, v30, v31, v32, v33, v34);
  fullScreenNpSeqIds = (System_Int32_array **)fsUtilityList->fields.fullScreenNpSeqIds;
  v43 = FSUtility_TypeInfo->static_fields;
  v43->fullScreenNpSeqIds = (struct System_Int32_array *)fullScreenNpSeqIds;
  sub_B0D840((BattleServantConfConponent_o *)&v43->fullScreenNpSeqIds, fullScreenNpSeqIds, v44, v45, v46, v47, v48, v49);
}


void __fastcall FSUtility__SetUpBackTextureSize(
        ExUITexture_o *backTexture,
        System_String_o *bgName,
        const MethodInfo *method)
{
  _BOOL8 IsFullScreenBack; // x0
  int32_t v6; // w1

  if ( (byte_421544B & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, bgName);
    byte_421544B = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsFullScreenBack = FSUtility__IsFullScreenBack(bgName, (const MethodInfo *)bgName);
  if ( !backTexture )
    sub_B0D97C(IsFullScreenBack);
  if ( IsFullScreenBack )
    v6 = 576;
  else
    v6 = 756;
  UIWidget__set_height((UIWidget_o *)backTexture, v6, 0LL);
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
  FSUtility___c__DisplayClass15_0_o *v4; // x19
  __int64 v5; // x1
  FSUtility_c *v6; // x0

  v4 = this;
  if ( (byte_4210F3D & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_FSUtilityList___, assetData);
    this = (FSUtility___c__DisplayClass15_0_o *)sub_B0D8A4(&FSUtility_TypeInfo, v5);
    byte_4210F3D = 1;
  }
  if ( !assetData
    || (this = (FSUtility___c__DisplayClass15_0_o *)AssetData__GetObject_Texture2D_(
                                                      assetData,
                                                      (const MethodInfo_1700CCC *)Method_AssetData_GetObject_FSUtilityList___),
        !v4->fields.ins) )
  {
    sub_B0D97C(this);
  }
  FSUtility__ReadFSUtilityList(v4->fields.ins, (FSUtilityList_o *)this, 0LL);
  v6 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v6 = FSUtility_TypeInfo;
  }
  v6->static_fields->isBusySetAssetData = 0;
}