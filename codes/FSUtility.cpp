void __fastcall FSUtility___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  FSUtility_c *v7; // x8
  struct FSUtility_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x0
  struct FSUtility_StaticFields *v11; // x8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x0
  struct FSUtility_StaticFields *v19; // x8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_Dictionary_int__float__o *v26; // x19
  struct FSUtility_StaticFields *v27; // x0
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

  if ( (byte_42B038E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_6866/*"FullScreen/FSUtilityList"*/);
    byte_42B038E = 1;
  }
  FSUtility_TypeInfo->static_fields->RATIO_VISTA = 2.0;
  v7 = FSUtility_TypeInfo;
  FSUtility_TypeInfo->static_fields->RATIO_SCOPE = 2.3333;
  static_fields = v7->static_fields;
  v9 = (System_Int32_array **)StringLiteral_6866/*"FullScreen/FSUtilityList"*/;
  static_fields->FS_UTILITY_LIST_PATH = (struct System_String_o *)StringLiteral_6866/*"FullScreen/FSUtilityList"*/;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->FS_UTILITY_LIST_PATH, v9, v1, v2, v3, v4, v5, v6);
  v10 = (System_Int32_array **)sub_B5299C(int___TypeInfo, 0LL);
  v11 = FSUtility_TypeInfo->static_fields;
  v11->legacyBacks = (struct System_Int32_array *)v10;
  sub_B52920((BattleServantConfConponent_o *)&v11->legacyBacks, v10, v12, v13, v14, v15, v16, v17);
  v18 = (System_Int32_array **)sub_B5299C(string___TypeInfo, 0LL);
  v19 = FSUtility_TypeInfo->static_fields;
  v19->fullScreenImages = (struct System_String_array *)v18;
  sub_B52920((BattleServantConfConponent_o *)&v19->fullScreenImages, v18, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v26,
    (const MethodInfo_2F2ADA0 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  v27 = FSUtility_TypeInfo->static_fields;
  v27->trimBackRatioY = v26;
  sub_B52920(
    (BattleServantConfConponent_o *)&v27->trimBackRatioY,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Int32_array **)sub_B5299C(string___TypeInfo, 0LL);
  v35 = FSUtility_TypeInfo->static_fields;
  v35->legacyMovies = (struct System_String_array *)v34;
  sub_B52920((BattleServantConfConponent_o *)&v35->legacyMovies, v34, v36, v37, v38, v39, v40, v41);
  v42 = (System_Int32_array **)sub_B5299C(int___TypeInfo, 0LL);
  v43 = FSUtility_TypeInfo->static_fields;
  v43->fullScreenNpChrs = (struct System_Int32_array *)v42;
  sub_B52920((BattleServantConfConponent_o *)&v43->fullScreenNpChrs, v42, v44, v45, v46, v47, v48, v49);
  v50 = (System_Int32_array **)sub_B5299C(int___TypeInfo, 0LL);
  v51 = FSUtility_TypeInfo->static_fields;
  v51->fullScreenNpSeqIds = (struct System_Int32_array *)v50;
  sub_B52920((BattleServantConfConponent_o *)&v51->fullScreenNpSeqIds, v50, v52, v53, v54, v55, v56, v57);
}


void __fastcall FSUtility___ctor(FSUtility_o *this, const MethodInfo *method)
{
  if ( (byte_42B038D & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_FSUtility___ctor__);
    byte_42B038D = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_FSUtility___ctor__);
}


float __fastcall FSUtility__CalculateNotchWidth(const MethodInfo *method)
{
  float left; // s8
  int32_t width; // w19
  float right; // s0
  float v4; // s8
  ManagerConfig_c *v5; // x0
  int HEIGHT; // s9
  UnityEngine_Rect_o safeArea; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B038C & 1) == 0 )
  {
    sub_B52984(&ManagerConfig_TypeInfo);
    byte_42B038C = 1;
  }
  safeArea = UnityEngine_Screen__get_safeArea(0LL);
  left = UnityEngine_Rect__get_left(safeArea, (const MethodInfo *)&safeArea);
  width = UnityEngine_Screen__get_width(0LL);
  right = UnityEngine_Rect__get_right(v9, (const MethodInfo *)&safeArea);
  v4 = UnityEngine_Mathf__Max(left, (float)width - right, 0LL);
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  HEIGHT = v5->static_fields->HEIGHT;
  return v4 * (float)((float)HEIGHT / (float)UnityEngine_Screen__get_height(0LL));
}


UnityEngine_Vector2_o __fastcall FSUtility__GetAddOffset(
        FSOffset_o *refOffset,
        bool calcNotch,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o zero; // kr00_8
  float x; // s8
  float y; // s9
  FSUtility_c *v8; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  float offsetXRatio; // s10
  float OffsetX; // s0
  float v13; // s0
  float v14; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42B038B & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B038B = 1;
  }
  zero = UnityEngine_Vector2__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  v8 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista((const MethodInfo *)v8) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)refOffset, 0LL, 0LL);
    if ( v9 )
    {
      if ( !refOffset )
        sub_B52A5C(v9, v10);
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
  System_String_o *v2; // x19
  System_String_o *v3; // x0
  float v4; // s8
  FSUtility_c *v5; // x0
  FSUtility_c *v6; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  v2 = fileName;
  if ( (byte_42B0383 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&StringLiteral_2684/*"Back/back"*/);
    fileName = (System_String_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0383 = 1;
  }
  result = -1;
  if ( !v2 )
    goto LABEL_16;
  v3 = System_String__Replace_44575552(
         v2,
         (System_String_o *)StringLiteral_2684/*"Back/back"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  v4 = 0.0;
  if ( System_Int32__TryParse(v3, &result, 0LL) )
  {
    v5 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v5 = FSUtility_TypeInfo;
    }
    fileName = (System_String_o *)v5->static_fields->trimBackRatioY;
    if ( !fileName )
      goto LABEL_16;
    if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
           (System_Collections_Generic_Dictionary_int__float__o *)fileName,
           result,
           (const MethodInfo_2F2BBBC *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
    {
      v6 = FSUtility_TypeInfo;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v6 = FSUtility_TypeInfo;
      }
      fileName = (System_String_o *)v6->static_fields->trimBackRatioY;
      if ( fileName )
        return System_Collections_Generic_Dictionary_int__float___get_Item(
                 (System_Collections_Generic_Dictionary_int__float__o *)fileName,
                 result,
                 (const MethodInfo_2F2B88C *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_16:
      sub_B52A5C(fileName, method);
    }
  }
  return v4;
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

  if ( (byte_42B038A & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B038A = 1;
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
  FSUtility_c *v3; // x0
  float v4; // s0

  if ( (byte_42B0388 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B0388 = 1;
  }
  v3 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v4 = FSUtility__CalculateNotchWidth((const MethodInfo *)v3);
  if ( v4 > 0.0 )
    return (float)(v4 / 68.0) * subMarginX;
  return subMarginX;
}


float __fastcall FSUtility__GetOffsetX(float subMarginX, bool calcNotch, const MethodInfo *method)
{
  FSUtility_c *v5; // x0
  FSUtility_c *v7; // x0
  FSUtility_c *v8; // x0

  if ( (byte_42B0389 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B0389 = 1;
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
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_42B037B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
    byte_42B037B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_B52A5C(v2, v3);
    FSUtility__InitializeLocal((FSUtility_o *)Instance, v3);
  }
}


void __fastcall FSUtility__InitializeLocal(FSUtility_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *FSUtilityList; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_42B037C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B037C = 1;
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
  FSUtility_c *v1; // x0

  if ( (byte_42B037A & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B037A = 1;
  }
  v1 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v1 = FSUtility_TypeInfo;
  }
  return v1->static_fields->isBusySetAssetData;
}


bool __fastcall FSUtility__IsFullScreenBack(System_String_o *fileName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_String_o *v3; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  v2 = fileName;
  if ( (byte_42B0381 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&StringLiteral_2684/*"Back/back"*/);
    fileName = (System_String_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0381 = 1;
  }
  result = -1;
  if ( !v2 )
    sub_B52A5C(fileName, method);
  v3 = System_String__Replace_44575552(
         v2,
         (System_String_o *)StringLiteral_2684/*"Back/back"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  if ( System_Int32__TryParse(v3, &result, 0LL) )
  {
    v5 = result;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    return FSUtility__IsFullScreenBack_25476904(v5, v4);
  }
  else
  {
    return 0;
  }
}


bool __fastcall FSUtility__IsFullScreenBack_25476904(int32_t id, const MethodInfo *method)
{
  il2cpp_array_size_t v3; // w21
  FSUtility_c *v4; // x0
  struct System_Int32_array *legacyBacks; // x8
  struct System_Int32_array *v6; // x8
  int32_t v7; // w8
  __int64 v9; // x0

  if ( (byte_42B0382 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B0382 = 1;
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
      sub_B52A5C(v4, method);
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
      v9 = sub_B52A88(v4);
      sub_B52A28(v9, 0LL);
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

  if ( (byte_42B0380 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B0380 = 1;
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
      sub_B52A5C(v4, method);
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
      v8 = sub_B52A88(v4);
      sub_B52A28(v8, 0LL);
    }
    if ( System_String__op_Equality(fullScreenImages->m_Items[v3++], imageName, 0LL) )
      return 1;
  }
}


bool __fastcall FSUtility__IsFullScreenMovie(System_String_o *fileName, const MethodInfo *method)
{
  __int64 Item_38040092; // x0
  __int64 v4; // x1
  __int64 v5; // x19
  System_String_o *Value; // x19
  unsigned __int64 v7; // x20
  struct System_String_array *legacyMovies; // x8
  struct System_String_array *legacyAspectMovies; // x20
  __int64 v12; // x8
  unsigned __int64 v13; // x21
  __int64 v14; // x0

  if ( (byte_42B0385 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B52984(&StringLiteral_887/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/);
    sub_B52984(&StringLiteral_21171/*"name"*/);
    byte_42B0385 = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  Item_38040092 = (__int64)System_Text_RegularExpressions_Regex__Match(
                             fileName,
                             (System_String_o *)StringLiteral_887/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/,
                             0LL);
  if ( !Item_38040092 )
    goto LABEL_35;
  v5 = Item_38040092;
  if ( !System_Text_RegularExpressions_Group__get_Success((System_Text_RegularExpressions_Group_o *)Item_38040092, 0LL) )
    return 0;
  Item_38040092 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 392LL))(
                    v5,
                    *(_QWORD *)(*(_QWORD *)v5 + 400LL));
  if ( !Item_38040092 )
    goto LABEL_35;
  Item_38040092 = (__int64)System_Text_RegularExpressions_GroupCollection__get_Item_38040092(
                             (System_Text_RegularExpressions_GroupCollection_o *)Item_38040092,
                             (System_String_o *)StringLiteral_21171/*"name"*/,
                             0LL);
  if ( !Item_38040092 )
    goto LABEL_35;
  Value = System_Text_RegularExpressions_Capture__get_Value(
            (System_Text_RegularExpressions_Capture_o *)Item_38040092,
            0LL);
  v7 = 0LL;
  while ( 1 )
  {
    Item_38040092 = (__int64)FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      Item_38040092 = (__int64)FSUtility_TypeInfo;
    }
    legacyMovies = *(struct System_String_array **)(*(_QWORD *)(Item_38040092 + 184) + 48LL);
    if ( !legacyMovies )
      goto LABEL_35;
    if ( (__int64)v7 >= (int)legacyMovies->max_length )
      break;
    if ( (*(_BYTE *)(Item_38040092 + 307) & 4) != 0 && !*(_DWORD *)(Item_38040092 + 224) )
    {
      j_il2cpp_runtime_class_init_0(Item_38040092);
      legacyMovies = FSUtility_TypeInfo->static_fields->legacyMovies;
      if ( !legacyMovies )
        goto LABEL_35;
    }
    if ( v7 >= legacyMovies->max_length )
      goto LABEL_36;
    if ( System_String__op_Equality(legacyMovies->m_Items[v7++], Value, 0LL) )
      return 0;
  }
  Item_38040092 = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Item_38040092 = (__int64)BalanceConfig_TypeInfo;
  }
  legacyAspectMovies = *(struct System_String_array **)(*(_QWORD *)(Item_38040092 + 184) + 800LL);
  if ( !legacyAspectMovies )
    return 1;
  if ( (*(_BYTE *)(Item_38040092 + 307) & 4) != 0 && !*(_DWORD *)(Item_38040092 + 224) )
  {
    j_il2cpp_runtime_class_init_0(Item_38040092);
    legacyAspectMovies = BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
    if ( !legacyAspectMovies )
LABEL_35:
      sub_B52A5C(Item_38040092, v4);
  }
  v12 = *(_QWORD *)&legacyAspectMovies->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( v13 < (unsigned int)v12 )
    {
      Item_38040092 = System_String__op_Equality(legacyAspectMovies->m_Items[v13], Value, 0LL);
      if ( (Item_38040092 & 1) != 0 )
        return 0;
      LODWORD(v12) = legacyAspectMovies->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        return 1;
    }
LABEL_36:
    v14 = sub_B52A88(Item_38040092);
    sub_B52A28(v14, 0LL);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FSUtility__IsFullScreenNP(int32_t chrId, int32_t seqId, const MethodInfo *method)
{
  unsigned int v5; // w22
  _BYTE *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x8
  int v9; // w8
  unsigned int v10; // w22
  __int64 v11; // x8
  __int64 v12; // x8
  int v13; // w8
  unsigned int v14; // w22
  __int64 v15; // x8
  __int64 v16; // x8
  int v17; // w8
  unsigned int v18; // w20
  __int64 v19; // x8
  __int64 v20; // x8
  int v21; // w8
  __int64 v23; // x0

  if ( (byte_42B0384 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B0384 = 1;
  }
  v5 = 0;
  v6 = FSUtility_TypeInfo;
  while ( 1 )
  {
    if ( (v6[307] & 4) != 0 && !*((_DWORD *)v6 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FSUtility_TypeInfo;
    }
    v7 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 56LL);
    if ( !v7 )
      goto LABEL_64;
    if ( (signed int)v5 >= *(_DWORD *)(v7 + 24) )
      break;
    if ( (v6[307] & 4) != 0 && !*((_DWORD *)v6 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FSUtility_TypeInfo;
    }
    v8 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 56LL);
    if ( !v8 )
      goto LABEL_64;
    if ( v5 >= *(_DWORD *)(v8 + 24) )
    {
LABEL_65:
      v23 = sub_B52A88(v6);
      sub_B52A28(v23, 0LL);
    }
    v9 = *(_DWORD *)(v8 + 4LL * (int)v5++ + 32);
    if ( v9 == chrId )
      return 1;
  }
  v10 = 0;
  while ( 1 )
  {
    if ( (v6[307] & 4) != 0 && !*((_DWORD *)v6 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FSUtility_TypeInfo;
    }
    v11 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 64LL);
    if ( !v11 )
      goto LABEL_64;
    if ( (signed int)v10 >= *(_DWORD *)(v11 + 24) )
      break;
    if ( (v6[307] & 4) != 0 && !*((_DWORD *)v6 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FSUtility_TypeInfo;
    }
    v12 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 64LL);
    if ( !v12 )
      goto LABEL_64;
    if ( v10 >= *(_DWORD *)(v12 + 24) )
      goto LABEL_65;
    v13 = *(_DWORD *)(v12 + 4LL * (int)v10++ + 32);
    if ( v13 == seqId )
      return 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( *(_QWORD *)(*((_QWORD *)v6 + 23) + 808LL) )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( (v6[307] & 4) != 0 && !*((_DWORD *)v6 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BalanceConfig_TypeInfo;
      }
      v15 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 808LL);
      if ( !v15 )
        break;
      if ( (signed int)v14 >= *(_DWORD *)(v15 + 24) )
        goto LABEL_46;
      if ( (v6[307] & 4) != 0 && !*((_DWORD *)v6 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BalanceConfig_TypeInfo;
      }
      v16 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 808LL);
      if ( !v16 )
        break;
      if ( v14 >= *(_DWORD *)(v16 + 24) )
        goto LABEL_65;
      v17 = *(_DWORD *)(v16 + 4LL * (int)v14++ + 32);
      if ( v17 == chrId )
        return 1;
    }
LABEL_64:
    sub_B52A5C(v6, *(_QWORD *)&seqId);
  }
LABEL_46:
  if ( (v6[307] & 4) != 0 && !*((_DWORD *)v6 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( *(_QWORD *)(*((_QWORD *)v6 + 23) + 816LL) )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( (v6[307] & 4) != 0 && !*((_DWORD *)v6 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BalanceConfig_TypeInfo;
      }
      v19 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 816LL);
      if ( !v19 )
        goto LABEL_64;
      if ( (signed int)v18 >= *(_DWORD *)(v19 + 24) )
        return 0;
      if ( (v6[307] & 4) != 0 && !*((_DWORD *)v6 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BalanceConfig_TypeInfo;
      }
      v20 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 816LL);
      if ( !v20 )
        goto LABEL_64;
      if ( v18 >= *(_DWORD *)(v20 + 24) )
        goto LABEL_65;
      v21 = *(_DWORD *)(v20 + 4LL * (int)v18++ + 32);
      if ( v21 == seqId )
        return 1;
    }
  }
  return 0;
}


bool __fastcall FSUtility__IsOverScope(const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w20
  FSUtility_c *v3; // x8

  if ( (byte_42B0387 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B0387 = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v3 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v3 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)height) > v3->static_fields->RATIO_SCOPE;
}


bool __fastcall FSUtility__IsTablet(const MethodInfo *method)
{
  int32_t width; // w19

  width = UnityEngine_Screen__get_width(0LL);
  return (float)((float)width / (float)UnityEngine_Screen__get_height(0LL)) < 1.7778;
}


bool __fastcall FSUtility__IsUnderVista(const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w20
  FSUtility_c *v3; // x8

  if ( (byte_42B0386 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B0386 = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v3 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v3 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)height) <= v3->static_fields->RATIO_VISTA;
}


void __fastcall FSUtility__LoadAssetData(const MethodInfo *method)
{
  __int64 v1; // x19
  System_Int32_array **Instance; // x0
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *v10; // x20
  FSUtility_c *v11; // x0
  System_String_o *FS_UTILITY_LIST_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  if ( (byte_42B037D & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
    sub_B52984(&Method_FSUtility___c__DisplayClass15_0__LoadAssetData_b__0__);
    sub_B52984(&FSUtility___c__DisplayClass15_0_TypeInfo);
    byte_42B037D = 1;
  }
  v1 = sub_B52A54(FSUtility___c__DisplayClass15_0_TypeInfo);
  FSUtility___c__DisplayClass15_0___ctor((FSUtility___c__DisplayClass15_0_o *)v1, 0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !v1 )
    sub_B52A5C(Instance, v3);
  *(_QWORD *)(v1 + 16) = Instance;
  sub_B52920((BattleServantConfConponent_o *)(v1 + 16), Instance, v4, v5, v6, v7, v8, v9);
  v10 = *(UnityEngine_Object_o **)(v1 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
  {
    v11 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v11 = FSUtility_TypeInfo;
    }
    v11->static_fields->isBusySetAssetData = 1;
    FS_UTILITY_LIST_PATH = FSUtility_TypeInfo->static_fields->FS_UTILITY_LIST_PATH;
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v13,
      (Il2CppObject *)v1,
      Method_FSUtility___c__DisplayClass15_0__LoadAssetData_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(FS_UTILITY_LIST_PATH, v13, 1, 0LL);
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
  System_Int32_array **legacyBacks; // x20
  FSUtility_c *v10; // x0
  struct FSUtility_StaticFields *static_fields; // x0
  System_Int32_array **legacyMovies; // x1
  struct FSUtility_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **fullScreenImages; // x1
  struct FSUtility_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct FSUtilityList_trimBackRatioYChild_array *trimBackRatioY; // x20
  int max_length; // w8
  unsigned int v36; // w22
  FSUtilityList_trimBackRatioYChild_o *v37; // x24
  FSUtility_c *v38; // x0
  System_Int32_array **fullScreenNpChrs; // x20
  struct FSUtility_StaticFields *v40; // x0
  System_Int32_array **fullScreenNpSeqIds; // x1
  struct FSUtility_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0

  if ( (byte_42B037E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__float__Add__);
    this = (FSUtility_o *)sub_B52984(&FSUtility_TypeInfo);
    byte_42B037E = 1;
  }
  if ( !fsUtilityList )
    goto LABEL_21;
  legacyBacks = (System_Int32_array **)fsUtilityList->fields.legacyBacks;
  v10 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v10 = FSUtility_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->legacyBacks = (struct System_Int32_array *)legacyBacks;
  sub_B52920(
    (BattleServantConfConponent_o *)&static_fields->legacyBacks,
    legacyBacks,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  legacyMovies = (System_Int32_array **)fsUtilityList->fields.legacyMovies;
  v13 = FSUtility_TypeInfo->static_fields;
  v13->legacyMovies = (struct System_String_array *)legacyMovies;
  sub_B52920((BattleServantConfConponent_o *)&v13->legacyMovies, legacyMovies, v14, v15, v16, v17, v18, v19);
  fullScreenImages = (System_Int32_array **)fsUtilityList->fields.fullScreenImages;
  v21 = FSUtility_TypeInfo->static_fields;
  v21->fullScreenImages = (struct System_String_array *)fullScreenImages;
  sub_B52920((BattleServantConfConponent_o *)&v21->fullScreenImages, fullScreenImages, v22, v23, v24, v25, v26, v27);
  trimBackRatioY = fsUtilityList->fields.trimBackRatioY;
  if ( !trimBackRatioY )
    goto LABEL_21;
  max_length = trimBackRatioY->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
      {
        v49 = sub_B52A88(this);
        sub_B52A28(v49, 0LL);
      }
      this = (FSUtility_o *)FSUtility_TypeInfo;
      v37 = trimBackRatioY->m_Items[v36];
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (FSUtility_o *)FSUtility_TypeInfo;
      }
      if ( !v37 )
        break;
      this = (FSUtility_o *)this[5].fields.FSUtilityList->fields.trimBackRatioY;
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_int__float___Add(
        (System_Collections_Generic_Dictionary_int__float__o *)this,
        v37->fields.id,
        v37->fields.offsetY,
        (const MethodInfo_2F2B94C *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      max_length = trimBackRatioY->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_17;
    }
LABEL_21:
    sub_B52A5C(this, fsUtilityList);
  }
LABEL_17:
  v38 = FSUtility_TypeInfo;
  fullScreenNpChrs = (System_Int32_array **)fsUtilityList->fields.fullScreenNpChrs;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v38 = FSUtility_TypeInfo;
  }
  v40 = v38->static_fields;
  v40->fullScreenNpChrs = (struct System_Int32_array *)fullScreenNpChrs;
  sub_B52920((BattleServantConfConponent_o *)&v40->fullScreenNpChrs, fullScreenNpChrs, v28, v29, v30, v31, v32, v33);
  fullScreenNpSeqIds = (System_Int32_array **)fsUtilityList->fields.fullScreenNpSeqIds;
  v42 = FSUtility_TypeInfo->static_fields;
  v42->fullScreenNpSeqIds = (struct System_Int32_array *)fullScreenNpSeqIds;
  sub_B52920((BattleServantConfConponent_o *)&v42->fullScreenNpSeqIds, fullScreenNpSeqIds, v43, v44, v45, v46, v47, v48);
}


void __fastcall FSUtility__SetUpBackTextureSize(
        ExUITexture_o *backTexture,
        System_String_o *bgName,
        const MethodInfo *method)
{
  _BOOL8 IsFullScreenBack; // x0
  __int64 v6; // x1
  int32_t v7; // w1

  if ( (byte_42B037F & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B037F = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsFullScreenBack = FSUtility__IsFullScreenBack(bgName, (const MethodInfo *)bgName);
  if ( !backTexture )
    sub_B52A5C(IsFullScreenBack, v6);
  if ( IsFullScreenBack )
    v7 = 576;
  else
    v7 = 756;
  UIWidget__set_height((UIWidget_o *)backTexture, v7, 0LL);
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
  FSUtility_c *v5; // x0

  v4 = this;
  if ( (byte_42ACE09 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_FSUtilityList___);
    this = (FSUtility___c__DisplayClass15_0_o *)sub_B52984(&FSUtility_TypeInfo);
    byte_42ACE09 = 1;
  }
  if ( !assetData
    || (this = (FSUtility___c__DisplayClass15_0_o *)AssetData__GetObject_Texture2D_(
                                                      assetData,
                                                      (const MethodInfo_1A3B800 *)Method_AssetData_GetObject_FSUtilityList___),
        !v4->fields.ins) )
  {
    sub_B52A5C(this, assetData);
  }
  FSUtility__ReadFSUtilityList(v4->fields.ins, (FSUtilityList_o *)this, 0LL);
  v5 = FSUtility_TypeInfo;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v5 = FSUtility_TypeInfo;
  }
  v5->static_fields->isBusySetAssetData = 0;
}