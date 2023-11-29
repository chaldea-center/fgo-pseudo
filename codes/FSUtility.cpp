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
  __int64 v16; // x2
  System_Int32_array **v17; // x0
  struct FSUtility_StaticFields *v18; // x8
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x2
  System_Int32_array **v26; // x0
  struct FSUtility_StaticFields *v27; // x8
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_Dictionary_int__float__o *v38; // x19
  struct FSUtility_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x2
  System_Int32_array **v47; // x0
  struct FSUtility_StaticFields *v48; // x8
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x2
  System_Int32_array **v56; // x0
  struct FSUtility_StaticFields *v57; // x8
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x2
  System_Int32_array **v65; // x0
  struct FSUtility_StaticFields *v66; // x8
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7

  if ( (byte_40F9F8E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v8);
    sub_B16FFC(&FSUtility_TypeInfo, v9);
    sub_B16FFC(&int___TypeInfo, v10);
    sub_B16FFC(&string___TypeInfo, v11);
    sub_B16FFC(&StringLiteral_6791, v12);
    byte_40F9F8E = 1;
  }
  FSUtility_TypeInfo->static_fields->RATIO_VISTA = 2.0;
  v13 = FSUtility_TypeInfo;
  FSUtility_TypeInfo->static_fields->RATIO_SCOPE = 2.3333;
  static_fields = v13->static_fields;
  v15 = (System_Int32_array **)StringLiteral_6791;
  static_fields->FS_UTILITY_LIST_PATH = (struct System_String_o *)StringLiteral_6791;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->FS_UTILITY_LIST_PATH, v15, v2, v3, v4, v5, v6, v7);
  v17 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v16);
  v18 = FSUtility_TypeInfo->static_fields;
  v18->legacyBacks = (struct System_Int32_array *)v17;
  sub_B16F98((BattleServantConfConponent_o *)&v18->legacyBacks, v17, v19, v20, v21, v22, v23, v24);
  v26 = (System_Int32_array **)sub_B17014(string___TypeInfo, 0LL, v25);
  v27 = FSUtility_TypeInfo->static_fields;
  v27->fullScreenImages = (struct System_String_array *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&v27->fullScreenImages, v26, v28, v29, v30, v31, v32, v33);
  v38 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__float__TypeInfo,
                                                                 v34,
                                                                 v35,
                                                                 v36,
                                                                 v37);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v38,
    (const MethodInfo_2DEC454 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  v39 = FSUtility_TypeInfo->static_fields;
  v39->trimBackRatioY = v38;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v39->trimBackRatioY,
    (System_Int32_array **)v38,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v47 = (System_Int32_array **)sub_B17014(string___TypeInfo, 0LL, v46);
  v48 = FSUtility_TypeInfo->static_fields;
  v48->legacyMovies = (struct System_String_array *)v47;
  sub_B16F98((BattleServantConfConponent_o *)&v48->legacyMovies, v47, v49, v50, v51, v52, v53, v54);
  v56 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v55);
  v57 = FSUtility_TypeInfo->static_fields;
  v57->fullScreenNpChrs = (struct System_Int32_array *)v56;
  sub_B16F98((BattleServantConfConponent_o *)&v57->fullScreenNpChrs, v56, v58, v59, v60, v61, v62, v63);
  v65 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v64);
  v66 = FSUtility_TypeInfo->static_fields;
  v66->fullScreenNpSeqIds = (struct System_Int32_array *)v65;
  sub_B16F98((BattleServantConfConponent_o *)&v66->fullScreenNpSeqIds, v65, v67, v68, v69, v70, v71, v72);
}


void __fastcall FSUtility___ctor(FSUtility_o *this, const MethodInfo *method)
{
  if ( (byte_40F9F8D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_FSUtility___ctor__, method);
    byte_40F9F8D = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_FSUtility___ctor__);
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

  if ( (byte_40F9F8C & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, v1);
    byte_40F9F8C = 1;
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
  const MethodInfo *v10; // x1
  float offsetXRatio; // s10
  float OffsetX; // s0
  float v13; // s0
  float v14; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_40F9F8B & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, calcNotch);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F9F8B = 1;
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)refOffset, 0LL, 0LL) )
    {
      if ( !refOffset )
        sub_B170D4();
      if ( LOBYTE(refOffset->fields.enableAddOffsetXFouseScopeRatio) )
      {
        offsetXRatio = refOffset->fields.offsetXRatio;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        OffsetX = FSUtility__GetOffsetX(offsetXRatio, calcNotch, v10);
        if ( !LODWORD(refOffset->fields.subMarginX) )
          OffsetX = -OffsetX;
        x = zero.fields.x + OffsetX;
      }
      if ( LOBYTE(refOffset->fields.addBottomY) )
        y = zero.fields.y + *(float *)&refOffset->fields.checkForceObi;
    }
  }
  v13 = x;
  v14 = y;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


float __fastcall FSUtility__GetBackFSOffsetY(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  float v8; // s8
  FSUtility_c *v9; // x0
  System_Collections_Generic_Dictionary_int__float__o *trimBackRatioY; // x0
  FSUtility_c *v11; // x0
  System_Collections_Generic_Dictionary_int__float__o *v12; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9F83 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v3);
    sub_B16FFC(&FSUtility_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_2641, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40F9F83 = 1;
  }
  result = -1;
  if ( !fileName )
    goto LABEL_16;
  v7 = System_String__Replace_43750968(
         fileName,
         (System_String_o *)StringLiteral_2641,
         (System_String_o *)StringLiteral_1,
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
    trimBackRatioY = v9->static_fields->trimBackRatioY;
    if ( !trimBackRatioY )
      goto LABEL_16;
    if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
           trimBackRatioY,
           result,
           (const MethodInfo_2DED270 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
    {
      v11 = FSUtility_TypeInfo;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v11 = FSUtility_TypeInfo;
      }
      v12 = v11->static_fields->trimBackRatioY;
      if ( v12 )
        return System_Collections_Generic_Dictionary_int__float___get_Item(
                 v12,
                 result,
                 (const MethodInfo_2DECF40 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_16:
      sub_B170D4();
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

  if ( (byte_40F9F8A & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40F9F8A = 1;
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

  if ( (byte_40F9F88 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, v2);
    byte_40F9F88 = 1;
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

  if ( (byte_40F9F89 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40F9F89 = 1;
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
  WebViewManager_o *Instance; // x19
  const MethodInfo *v4; // x1

  if ( (byte_40F9F7B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v2);
    byte_40F9F7B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    FSUtility__InitializeLocal((FSUtility_o *)Instance, v4);
  }
}


void __fastcall FSUtility__InitializeLocal(FSUtility_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *FSUtilityList; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40F9F7C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9F7C = 1;
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

  if ( (byte_40F9F7A & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, v1);
    byte_40F9F7A = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9F81 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2641, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F9F81 = 1;
  }
  result = -1;
  if ( !fileName )
    sub_B170D4();
  v5 = System_String__Replace_43750968(
         fileName,
         (System_String_o *)StringLiteral_2641,
         (System_String_o *)StringLiteral_1,
         0LL);
  if ( System_Int32__TryParse(v5, &result, 0LL) )
  {
    v7 = result;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    return FSUtility__IsFullScreenBack_25153244(v7, v6);
  }
  else
  {
    return 0;
  }
}


bool __fastcall FSUtility__IsFullScreenBack_25153244(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t v4; // w21
  FSUtility_c *v5; // x0
  struct System_Int32_array *legacyBacks; // x8
  struct System_Int32_array *v7; // x8
  int32_t v8; // w8

  if ( (byte_40F9F82 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40F9F82 = 1;
  }
  v4 = 0;
  v5 = FSUtility_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = FSUtility_TypeInfo;
    }
    legacyBacks = v5->static_fields->legacyBacks;
    if ( !legacyBacks )
LABEL_17:
      sub_B170D4();
    if ( (signed int)v4 >= (signed int)legacyBacks->max_length )
      return 1;
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = FSUtility_TypeInfo;
    }
    v7 = v5->static_fields->legacyBacks;
    if ( !v7 )
      goto LABEL_17;
    if ( v4 >= v7->max_length )
    {
      sub_B17100(v5, method, v2);
      sub_B170A0();
    }
    v8 = v7->m_Items[++v4];
    if ( v8 == id )
      return 0;
  }
}


bool __fastcall FSUtility__IsFullScreenImage(System_String_o *imageName, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned __int64 v4; // x20
  FSUtility_c *v5; // x0
  struct System_String_array *fullScreenImages; // x8

  if ( (byte_40F9F80 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40F9F80 = 1;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v5 = FSUtility_TypeInfo;
    }
    fullScreenImages = v5->static_fields->fullScreenImages;
    if ( !fullScreenImages )
LABEL_16:
      sub_B170D4();
    if ( (__int64)v4 >= (int)fullScreenImages->max_length )
      return 0;
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      fullScreenImages = FSUtility_TypeInfo->static_fields->fullScreenImages;
      if ( !fullScreenImages )
        goto LABEL_16;
    }
    if ( v4 >= fullScreenImages->max_length )
    {
      sub_B17100(v5, method, v2);
      sub_B170A0();
    }
    if ( System_String__op_Equality(fullScreenImages->m_Items[v4++], imageName, 0LL) )
      return 1;
  }
}


bool __fastcall FSUtility__IsFullScreenMovie(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Text_RegularExpressions_Group_o *v7; // x0
  System_Text_RegularExpressions_Group_o *v8; // x19
  System_Text_RegularExpressions_GroupCollection_o *v9; // x0
  System_Text_RegularExpressions_Capture_o *Item_36906384; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *Value; // x19
  unsigned __int64 v14; // x20
  void *v15; // x0
  struct System_String_array *legacyMovies; // x8
  struct System_String_array *legacyAspectMovies; // x20
  __int64 v20; // x8
  unsigned __int64 v21; // x21

  if ( (byte_40F9F85 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&FSUtility_TypeInfo, v3);
    sub_B16FFC(&System_Text_RegularExpressions_Regex_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_872, v5);
    sub_B16FFC(&StringLiteral_20914, v6);
    byte_40F9F85 = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v7 = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match(
                                                   fileName,
                                                   (System_String_o *)StringLiteral_872,
                                                   0LL);
  if ( !v7 )
    goto LABEL_35;
  v8 = v7;
  if ( !System_Text_RegularExpressions_Group__get_Success(v7, 0LL) )
    return 0;
  v9 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v8->klass[1]._1.namespaze)(
                                                             v8,
                                                             v8->klass[1]._1.byval_arg.data);
  if ( !v9 )
    goto LABEL_35;
  Item_36906384 = (System_Text_RegularExpressions_Capture_o *)System_Text_RegularExpressions_GroupCollection__get_Item_36906384(
                                                                v9,
                                                                (System_String_o *)StringLiteral_20914,
                                                                0LL);
  if ( !Item_36906384 )
    goto LABEL_35;
  Value = System_Text_RegularExpressions_Capture__get_Value(Item_36906384, 0LL);
  v14 = 0LL;
  while ( 1 )
  {
    v15 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v15 = FSUtility_TypeInfo;
    }
    legacyMovies = *(struct System_String_array **)(*((_QWORD *)v15 + 23) + 48LL);
    if ( !legacyMovies )
      goto LABEL_35;
    if ( (__int64)v14 >= (int)legacyMovies->max_length )
      break;
    if ( (*((_BYTE *)v15 + 307) & 4) != 0 && !*((_DWORD *)v15 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v15);
      legacyMovies = FSUtility_TypeInfo->static_fields->legacyMovies;
      if ( !legacyMovies )
        goto LABEL_35;
    }
    if ( v14 >= legacyMovies->max_length )
      goto LABEL_36;
    if ( System_String__op_Equality(legacyMovies->m_Items[v14++], Value, 0LL) )
      return 0;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  legacyAspectMovies = *(struct System_String_array **)(*((_QWORD *)v15 + 23) + 792LL);
  if ( !legacyAspectMovies )
    return 1;
  if ( (*((_BYTE *)v15 + 307) & 4) != 0 && !*((_DWORD *)v15 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v15);
    legacyAspectMovies = BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
    if ( !legacyAspectMovies )
LABEL_35:
      sub_B170D4();
  }
  v20 = *(_QWORD *)&legacyAspectMovies->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    while ( v21 < (unsigned int)v20 )
    {
      v15 = (void *)System_String__op_Equality(legacyAspectMovies->m_Items[v21], Value, 0LL);
      if ( ((unsigned __int8)v15 & 1) != 0 )
        return 0;
      LODWORD(v20) = legacyAspectMovies->max_length;
      if ( (__int64)++v21 >= (int)v20 )
        return 1;
    }
LABEL_36:
    sub_B17100(v15, v11, v12);
    sub_B170A0();
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

  if ( (byte_40F9F84 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&seqId);
    sub_B16FFC(&FSUtility_TypeInfo, v5);
    byte_40F9F84 = 1;
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
      sub_B17100(v7, *(_QWORD *)&seqId, method);
      sub_B170A0();
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
  if ( *(_QWORD *)(*((_QWORD *)v7 + 23) + 800LL) )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      v16 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 800LL);
      if ( !v16 )
        break;
      if ( (signed int)v15 >= *(_DWORD *)(v16 + 24) )
        goto LABEL_46;
      if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      v17 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 800LL);
      if ( !v17 )
        break;
      if ( v15 >= *(_DWORD *)(v17 + 24) )
        goto LABEL_65;
      v18 = *(_DWORD *)(v17 + 4LL * (int)v15++ + 32);
      if ( v18 == chrId )
        return 1;
    }
LABEL_64:
    sub_B170D4();
  }
LABEL_46:
  if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( *(_QWORD *)(*((_QWORD *)v7 + 23) + 808LL) )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      v20 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 808LL);
      if ( !v20 )
        goto LABEL_64;
      if ( (signed int)v19 >= *(_DWORD *)(v20 + 24) )
        return 0;
      if ( (v7[307] & 4) != 0 && !*((_DWORD *)v7 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      v21 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 808LL);
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

  if ( (byte_40F9F87 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, v1);
    byte_40F9F87 = 1;
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

  if ( (byte_40F9F86 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, v1);
    byte_40F9F86 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_Int32_array **Instance; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  FSUtility_c *v24; // x0
  System_String_o *FS_UTILITY_LIST_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21

  if ( (byte_40F9F7D & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    sub_B16FFC(&FSUtility_TypeInfo, v5);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v8);
    sub_B16FFC(&Method_FSUtility___c__DisplayClass15_0__LoadAssetData_b__0__, v9);
    sub_B16FFC(&FSUtility___c__DisplayClass15_0_TypeInfo, v10);
    byte_40F9F7D = 1;
  }
  v11 = sub_B170CC(FSUtility___c__DisplayClass15_0_TypeInfo, v1, v2, v3, v4);
  FSUtility___c__DisplayClass15_0___ctor((FSUtility___c__DisplayClass15_0_o *)v11, 0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = Instance;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), Instance, v13, v14, v15, v16, v17, v18);
  v19 = *(UnityEngine_Object_o **)(v11 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v19, 0LL, 0LL) )
  {
    v24 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v24 = FSUtility_TypeInfo;
    }
    v24->static_fields->isBusySetAssetData = 1;
    FS_UTILITY_LIST_PATH = FSUtility_TypeInfo->static_fields->FS_UTILITY_LIST_PATH;
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21, v22, v23);
    AssetLoader_LoadEndDataHandler___ctor(
      v26,
      (Il2CppObject *)v11,
      Method_FSUtility___c__DisplayClass15_0__LoadAssetData_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(FS_UTILITY_LIST_PATH, v26, 1, 0LL);
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
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct FSUtilityList_trimBackRatioYChild_array *trimBackRatioY; // x20
  int max_length; // w8
  unsigned int v39; // w22
  FSUtility_c *v40; // x0
  FSUtilityList_trimBackRatioYChild_o *v41; // x24
  System_Collections_Generic_Dictionary_int__float__o *v42; // x0
  FSUtility_c *v43; // x0
  System_Int32_array **fullScreenNpChrs; // x20
  struct FSUtility_StaticFields *v45; // x0
  System_Int32_array **fullScreenNpSeqIds; // x1
  struct FSUtility_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_40F9F7E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__Add__, fsUtilityList);
    sub_B16FFC(&FSUtility_TypeInfo, v9);
    byte_40F9F7E = 1;
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
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&v14->legacyMovies, legacyMovies, v15, v16, v17, v18, v19, v20);
  fullScreenImages = (System_Int32_array **)fsUtilityList->fields.fullScreenImages;
  v22 = FSUtility_TypeInfo->static_fields;
  v22->fullScreenImages = (struct System_String_array *)fullScreenImages;
  sub_B16F98((BattleServantConfConponent_o *)&v22->fullScreenImages, fullScreenImages, v23, v24, v25, v26, v27, v28);
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
        sub_B17100(v29, v30, v31);
        sub_B170A0();
      }
      v40 = FSUtility_TypeInfo;
      v41 = trimBackRatioY->m_Items[v39];
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v40 = FSUtility_TypeInfo;
      }
      if ( !v41 )
        break;
      v42 = v40->static_fields->trimBackRatioY;
      if ( !v42 )
        break;
      System_Collections_Generic_Dictionary_int__float___Add(
        v42,
        v41->fields.id,
        v41->fields.offsetY,
        (const MethodInfo_2DED000 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      max_length = trimBackRatioY->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_17;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_17:
  v43 = FSUtility_TypeInfo;
  fullScreenNpChrs = (System_Int32_array **)fsUtilityList->fields.fullScreenNpChrs;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v43 = FSUtility_TypeInfo;
  }
  v45 = v43->static_fields;
  v45->fullScreenNpChrs = (struct System_Int32_array *)fullScreenNpChrs;
  sub_B16F98((BattleServantConfConponent_o *)&v45->fullScreenNpChrs, fullScreenNpChrs, v31, v32, v33, v34, v35, v36);
  fullScreenNpSeqIds = (System_Int32_array **)fsUtilityList->fields.fullScreenNpSeqIds;
  v47 = FSUtility_TypeInfo->static_fields;
  v47->fullScreenNpSeqIds = (struct System_Int32_array *)fullScreenNpSeqIds;
  sub_B16F98((BattleServantConfConponent_o *)&v47->fullScreenNpSeqIds, fullScreenNpSeqIds, v48, v49, v50, v51, v52, v53);
}


void __fastcall FSUtility__SetUpBackTextureSize(
        ExUITexture_o *backTexture,
        System_String_o *bgName,
        const MethodInfo *method)
{
  bool IsFullScreenBack; // w0
  int32_t v6; // w1

  if ( (byte_40F9F7F & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, bgName);
    byte_40F9F7F = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsFullScreenBack = FSUtility__IsFullScreenBack(bgName, (const MethodInfo *)bgName);
  if ( !backTexture )
    sub_B170D4();
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
  __int64 v5; // x1
  UnityEngine_Texture2D_o *Object_Texture2D; // x0
  FSUtility_c *v7; // x0

  if ( (byte_40F68AE & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_FSUtilityList___, assetData);
    sub_B16FFC(&FSUtility_TypeInfo, v5);
    byte_40F68AE = 1;
  }
  if ( !assetData
    || (Object_Texture2D = AssetData__GetObject_Texture2D_(
                             assetData,
                             (const MethodInfo_18AFB5C *)Method_AssetData_GetObject_FSUtilityList___),
        !this->fields.ins) )
  {
    sub_B170D4();
  }
  FSUtility__ReadFSUtilityList(this->fields.ins, (FSUtilityList_o *)Object_Texture2D, 0LL);
  v7 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v7 = FSUtility_TypeInfo;
  }
  v7->static_fields->isBusySetAssetData = 0;
}