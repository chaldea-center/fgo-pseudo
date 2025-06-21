void __fastcall FSUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct FSUtility_StaticFields *static_fields; // x0
  int32_t v10; // w1
  __int64 v11; // x0
  struct FSUtility_StaticFields *v12; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  struct FSUtility_StaticFields *v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_Dictionary_int__float__o *v19; // x19
  struct FSUtility_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x0
  struct FSUtility_StaticFields *v24; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  struct FSUtility_StaticFields *v28; // x8
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4B1DE84 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v1);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v4);
    sub_1BCAFF8(&FSUtility_TypeInfo, v5);
    sub_1BCAFF8(&int___TypeInfo, v6);
    sub_1BCAFF8(&string___TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_6840/*"FullScreen/FSUtilityList"*/, v8);
    byte_4B1DE84 = 1;
  }
  static_fields = FSUtility_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RATIO_VISTA = 0x4015555540000000LL;
  v10 = StringLiteral_6840/*"FullScreen/FSUtilityList"*/;
  static_fields->FS_UTILITY_LIST_PATH = (struct System_String_o *)StringLiteral_6840/*"FullScreen/FSUtilityList"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->FS_UTILITY_LIST_PATH, v10, v2, v3);
  v11 = sub_1BCB0A0(int___TypeInfo, 0LL);
  v12 = FSUtility_TypeInfo->static_fields;
  v12->legacyBacks = (struct System_Int32_array *)v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v12->legacyBacks, v11, v13, v14);
  v15 = sub_1BCB0A0(string___TypeInfo, 0LL);
  v16 = FSUtility_TypeInfo->static_fields;
  v16->fullScreenImages = (struct System_String_array *)v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v16->fullScreenImages, v15, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v19,
    (const MethodInfo_3326768 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  v20 = FSUtility_TypeInfo->static_fields;
  v20->trimBackRatioY = v19;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v20->trimBackRatioY, (int32_t)v19, v21, v22);
  v23 = sub_1BCB0A0(string___TypeInfo, 0LL);
  v24 = FSUtility_TypeInfo->static_fields;
  v24->legacyMovies = (struct System_String_array *)v23;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v24->legacyMovies, v23, v25, v26);
  v27 = sub_1BCB0A0(int___TypeInfo, 0LL);
  v28 = FSUtility_TypeInfo->static_fields;
  v28->notFullScreenNpChrs = (struct System_Int32_array *)v27;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v28->notFullScreenNpChrs, v27, v29, v30);
}


void __fastcall FSUtility___ctor(FSUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4B1DE83 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_FSUtility___ctor__, method);
    byte_4B1DE83 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8EF0 *)Method_SingletonMonoBehaviour_FSUtility___ctor__);
}


float __fastcall FSUtility__CalculateNotchWidth(const MethodInfo *method)
{
  __int64 v1; // x1
  float m_XMin; // s8
  float m_Width; // s9
  int32_t width; // w8
  ManagerConfig_c *v5; // x0
  float v6; // s9
  int HEIGHT; // s10
  UnityEngine_Rect_o safeArea; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1DE82 & 1) == 0 )
  {
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v1);
    byte_4B1DE82 = 1;
  }
  safeArea = UnityEngine_Screen__get_safeArea(0LL);
  m_XMin = safeArea.fields.m_XMin;
  m_Width = safeArea.fields.m_Width;
  width = UnityEngine_Screen__get_width(0LL);
  v5 = ManagerConfig_TypeInfo;
  v6 = (float)width - (float)(m_Width + m_XMin);
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( m_XMin <= v6 )
    m_XMin = v6;
  HEIGHT = v5->static_fields->HEIGHT;
  return m_XMin * (float)((float)HEIGHT / (float)UnityEngine_Screen__get_height(0LL));
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall FSUtility__GetAddOffset(
        FSOffset_o *refOffset,
        bool calcNotch,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FSUtility_c *v6; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float y; // s8
  float x; // s9
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  float subMarginX; // s10
  float OffsetX; // s0
  float v14; // s0
  float v15; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B1DE81 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, calcNotch);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B1DE81 = 1;
  }
  if ( !byte_4B1608A )
  {
    sub_1BCAFF8(&UnityEngine_Vector2_TypeInfo, calcNotch);
    byte_4B1608A = 1;
  }
  v6 = FSUtility_TypeInfo;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista((const MethodInfo *)v6) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)refOffset, 0LL, 0LL);
    if ( v10 )
    {
      if ( !refOffset )
        sub_1BCB254(v10, v11);
      if ( refOffset->fields.enableAddOffsetX )
      {
        subMarginX = refOffset->fields.subMarginX;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        OffsetX = FSUtility__GetOffsetX(subMarginX, calcNotch, v11);
        if ( !refOffset->fields.addDirectionX )
          OffsetX = -OffsetX;
        x = x + OffsetX;
      }
      if ( refOffset->fields.enableAddBottomY )
        y = y + refOffset->fields.addBottomY;
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
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  v2 = fileName;
  if ( (byte_4B1DE79 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v3);
    sub_1BCAFF8(&FSUtility_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_3011/*"Back/back"*/, v5);
    fileName = (System_String_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v6);
    byte_4B1DE79 = 1;
  }
  result = -1;
  if ( !v2 )
    goto LABEL_14;
  v7 = System_String__Replace_62496972(
         v2,
         (System_String_o *)StringLiteral_3011/*"Back/back"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  v8 = 0.0;
  if ( System_Int32__TryParse(v7, &result, 0LL) )
  {
    v9 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v9 = FSUtility_TypeInfo;
    }
    fileName = (System_String_o *)v9->static_fields->trimBackRatioY;
    if ( !fileName )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
           (System_Collections_Generic_Dictionary_int__float__o *)fileName,
           result,
           (const MethodInfo_332732C *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
    {
      v10 = FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v10 = FSUtility_TypeInfo;
      }
      fileName = (System_String_o *)v10->static_fields->trimBackRatioY;
      if ( fileName )
        return System_Collections_Generic_Dictionary_int__float___get_Item(
                 (System_Collections_Generic_Dictionary_int__float__o *)fileName,
                 result,
                 (const MethodInfo_3327098 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_14:
      sub_1BCB254(fileName, method);
    }
  }
  return v8;
}


float __fastcall FSUtility__GetCalcOffsetX(float subMarginX, const MethodInfo *method)
{
  int32_t width; // w19
  float v4; // s0
  bool v5; // nf
  float v6; // s0

  width = UnityEngine_Screen__get_width(0LL);
  v4 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  v5 = v4 < 1.7778;
  v6 = (float)((float)(fminf(v4, 2.3333) + -1.7778) * 576.0) * 0.5;
  if ( v5 )
    v6 = 0.0;
  return v6 - subMarginX;
}


float __fastcall FSUtility__GetForceOffsetX(float subMarginX, bool calcNotch, const MethodInfo *method)
{
  FSUtility_c *v5; // x0
  FSUtility_c *v6; // x0

  if ( (byte_4B1DE80 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, method);
    byte_4B1DE80 = 1;
  }
  if ( calcNotch )
  {
    v5 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    subMarginX = FSUtility__GetNotchSubMarginX(subMarginX, (const MethodInfo *)v5);
  }
  v6 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetCalcOffsetX(subMarginX, (const MethodInfo *)v6);
}


float __fastcall FSUtility__GetNotchSubMarginX(float subMarginX, const MethodInfo *method)
{
  __int64 v2; // x1
  FSUtility_c *v4; // x0
  float v5; // s0

  if ( (byte_4B1DE7E & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, v2);
    byte_4B1DE7E = 1;
  }
  v4 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B1DE7F & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, method);
    byte_4B1DE7F = 1;
  }
  v5 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista((const MethodInfo *)v5) )
    return 0.0;
  if ( calcNotch )
  {
    v7 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    subMarginX = FSUtility__GetNotchSubMarginX(subMarginX, (const MethodInfo *)v7);
  }
  v8 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetCalcOffsetX(subMarginX, (const MethodInfo *)v8);
}


void __fastcall FSUtility__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B1DE71 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v2);
    byte_4B1DE71 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1BCB254(v4, v5);
    FSUtility__InitializeLocal((FSUtility_o *)Instance, v5);
  }
}


void __fastcall FSUtility__InitializeLocal(FSUtility_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *FSUtilityList; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B1DE72 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1DE72 = 1;
  }
  FSUtilityList = (UnityEngine_Object_o *)this->fields.FSUtilityList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(FSUtilityList, 0LL, 0LL);
  if ( !v4 )
    FSUtility__ReadFSUtilityList((FSUtility_o *)v4, this->fields.FSUtilityList, v5);
}


bool __fastcall FSUtility__IsBusySetAssetData(const MethodInfo *method)
{
  __int64 v1; // x1
  FSUtility_c *v2; // x0

  if ( (byte_4B1DE70 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, v1);
    byte_4B1DE70 = 1;
  }
  v2 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
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
  if ( (byte_4B1DE77 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_3011/*"Back/back"*/, v3);
    fileName = (System_String_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v4);
    byte_4B1DE77 = 1;
  }
  result = -1;
  if ( !v2 )
    sub_1BCB254(fileName, method);
  v5 = System_String__Replace_62496972(
         v2,
         (System_String_o *)StringLiteral_3011/*"Back/back"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  if ( System_Int32__TryParse(v5, &result, 0LL) )
  {
    v7 = result;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    return FSUtility__IsFullScreenBack_43265804(v7, v6);
  }
  else
  {
    return 0;
  }
}


bool __fastcall FSUtility__IsFullScreenBack_43265804(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  FSUtility_c *v4; // x0
  signed int v5; // w8
  signed int v6; // w21
  struct System_Int32_array *legacyBacks; // x8
  signed int max_length; // w22
  struct System_Int32_array *v9; // x8
  bool v10; // zf

  if ( (byte_4B1DE78 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, method);
    byte_4B1DE78 = 1;
  }
  v4 = FSUtility_TypeInfo;
  v5 = 0;
  do
  {
    v6 = v5;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = FSUtility_TypeInfo;
    }
    legacyBacks = v4->static_fields->legacyBacks;
    if ( !legacyBacks )
      goto LABEL_15;
    max_length = legacyBacks->max_length;
    if ( v6 >= max_length )
      return v6 >= max_length;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = FSUtility_TypeInfo;
    }
    v9 = v4->static_fields->legacyBacks;
    if ( !v9 )
LABEL_15:
      sub_1BCB254(v4, method);
    if ( v6 >= v9->max_length )
      sub_1BCB25C(v4, method, v2);
    v10 = v9->m_Items[v6 + 1] == id;
    v5 = v6 + 1;
  }
  while ( !v10 );
  return v6 >= max_length;
}


bool __fastcall FSUtility__IsFullScreenImage(System_String_o *imageName, const MethodInfo *method)
{
  __int64 v2; // x2
  signed __int64 v4; // x8
  FSUtility_c *v5; // x0
  signed __int64 v6; // x21
  struct System_String_array *fullScreenImages; // x8
  signed __int64 max_length; // x22
  bool v9; // w0

  if ( (byte_4B1DE76 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, method);
    byte_4B1DE76 = 1;
  }
  v4 = 0LL;
  do
  {
    v5 = FSUtility_TypeInfo;
    v6 = v4;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v5 = FSUtility_TypeInfo;
    }
    fullScreenImages = v5->static_fields->fullScreenImages;
    if ( !fullScreenImages )
      goto LABEL_13;
    max_length = (int)fullScreenImages->max_length;
    if ( v6 >= max_length )
      return v6 < max_length;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      fullScreenImages = FSUtility_TypeInfo->static_fields->fullScreenImages;
      if ( !fullScreenImages )
LABEL_13:
        sub_1BCB254(v5, method);
    }
    if ( v6 >= (unsigned __int64)fullScreenImages->max_length )
      sub_1BCB25C(v5, method, v2);
    v9 = System_String__op_Equality(fullScreenImages->m_Items[v6], imageName, 0LL);
    v4 = v6 + 1;
  }
  while ( !v9 );
  return v6 < max_length;
}


bool __fastcall FSUtility__IsFullScreenMovie(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 Item_68945856; // x0
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x2
  System_String_o *Value; // x19
  unsigned __int64 v12; // x20
  struct System_String_array *legacyMovies; // x8
  char v15; // w8
  struct System_String_array *legacyAspectMovies; // x20
  __int64 v18; // x8
  bool v19; // w21
  unsigned __int64 v20; // x22

  if ( (byte_4B1DE7B & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&FSUtility_TypeInfo, v3);
    sub_1BCAFF8(&System_Text_RegularExpressions_Regex_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_1040/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/, v5);
    sub_1BCAFF8(&StringLiteral_21950/*"name"*/, v6);
    byte_4B1DE7B = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  Item_68945856 = (__int64)System_Text_RegularExpressions_Regex__Match(
                             fileName,
                             (System_String_o *)StringLiteral_1040/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/,
                             0LL);
  if ( !Item_68945856 )
    goto LABEL_32;
  v9 = Item_68945856;
  if ( !System_Text_RegularExpressions_Group__get_Success((System_Text_RegularExpressions_Group_o *)Item_68945856, 0LL) )
  {
LABEL_18:
    v15 = 0;
    return v15 & 1;
  }
  Item_68945856 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 392LL))(
                    v9,
                    *(_QWORD *)(*(_QWORD *)v9 + 400LL));
  if ( !Item_68945856 )
    goto LABEL_32;
  Item_68945856 = (__int64)System_Text_RegularExpressions_GroupCollection__get_Item_68945856(
                             (System_Text_RegularExpressions_GroupCollection_o *)Item_68945856,
                             (System_String_o *)StringLiteral_21950/*"name"*/,
                             0LL);
  if ( !Item_68945856 )
    goto LABEL_32;
  Value = System_Text_RegularExpressions_Capture__get_Value(
            (System_Text_RegularExpressions_Capture_o *)Item_68945856,
            0LL);
  v12 = 0LL;
  while ( 1 )
  {
    Item_68945856 = (__int64)FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      Item_68945856 = (__int64)FSUtility_TypeInfo;
    }
    legacyMovies = *(struct System_String_array **)(*(_QWORD *)(Item_68945856 + 184) + 48LL);
    if ( !legacyMovies )
      goto LABEL_32;
    if ( (__int64)v12 >= (int)legacyMovies->max_length )
      break;
    if ( !*(_DWORD *)(Item_68945856 + 224) )
    {
      j_il2cpp_runtime_class_init_0(Item_68945856);
      legacyMovies = FSUtility_TypeInfo->static_fields->legacyMovies;
      if ( !legacyMovies )
        goto LABEL_32;
    }
    if ( v12 >= legacyMovies->max_length )
      goto LABEL_33;
    if ( System_String__op_Equality(legacyMovies->m_Items[v12++], Value, 0LL) )
      goto LABEL_18;
  }
  Item_68945856 = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Item_68945856 = (__int64)BalanceConfig_TypeInfo;
  }
  legacyAspectMovies = *(struct System_String_array **)(*(_QWORD *)(Item_68945856 + 184) + 888LL);
  if ( !legacyAspectMovies )
  {
    v15 = 1;
    return v15 & 1;
  }
  if ( !*(_DWORD *)(Item_68945856 + 224) )
  {
    j_il2cpp_runtime_class_init_0(Item_68945856);
    legacyAspectMovies = BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
    if ( !legacyAspectMovies )
LABEL_32:
      sub_1BCB254(Item_68945856, v8);
  }
  v18 = *(_QWORD *)&legacyAspectMovies->max_length;
  v19 = (int)v18 > 0;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    while ( v20 < (unsigned int)v18 )
    {
      Item_68945856 = System_String__op_Equality(legacyAspectMovies->m_Items[v20], Value, 0LL);
      if ( (Item_68945856 & 1) == 0 )
      {
        LODWORD(v18) = legacyAspectMovies->max_length;
        v19 = (__int64)++v20 < (int)v18;
        if ( (__int64)v20 < (int)v18 )
          continue;
      }
      goto LABEL_30;
    }
LABEL_33:
    sub_1BCB25C(Item_68945856, v8, v10);
  }
LABEL_30:
  v15 = !v19;
  return v15 & 1;
}


bool __fastcall FSUtility__IsFullScreenNP(int32_t chrId, const MethodInfo *method)
{
  __int64 v2; // x2
  FSUtility_c *v4; // x0
  signed int v5; // w8
  signed int v6; // w21
  struct System_Int32_array *notFullScreenNpChrs; // x8
  signed int max_length; // w22
  struct System_Int32_array *v9; // x8
  bool v10; // zf

  if ( (byte_4B1DE7A & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, method);
    byte_4B1DE7A = 1;
  }
  v4 = FSUtility_TypeInfo;
  v5 = 0;
  do
  {
    v6 = v5;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = FSUtility_TypeInfo;
    }
    notFullScreenNpChrs = v4->static_fields->notFullScreenNpChrs;
    if ( !notFullScreenNpChrs )
      goto LABEL_15;
    max_length = notFullScreenNpChrs->max_length;
    if ( v6 >= max_length )
      return v6 >= max_length;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = FSUtility_TypeInfo;
    }
    v9 = v4->static_fields->notFullScreenNpChrs;
    if ( !v9 )
LABEL_15:
      sub_1BCB254(v4, method);
    if ( v6 >= v9->max_length )
      sub_1BCB25C(v4, method, v2);
    v10 = v9->m_Items[v6 + 1] == chrId;
    v5 = v6 + 1;
  }
  while ( !v10 );
  return v6 >= max_length;
}


bool __fastcall FSUtility__IsOverScope(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t width; // w19
  int32_t height; // w0
  FSUtility_c *v4; // x8
  int v5; // w20

  if ( (byte_4B1DE7D & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, v1);
    byte_4B1DE7D = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v4 = FSUtility_TypeInfo;
  v5 = height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v4 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)v5) > v4->static_fields->RATIO_SCOPE;
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
  int32_t height; // w0
  FSUtility_c *v4; // x8
  int v5; // w20

  if ( (byte_4B1DE7C & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, v1);
    byte_4B1DE7C = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v4 = FSUtility_TypeInfo;
  v5 = height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v4 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)v5) <= v4->static_fields->RATIO_VISTA;
}


void __fastcall FSUtility__LoadAssetData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *v13; // x20
  FSUtility_c *v14; // x0
  struct FSUtility_StaticFields *static_fields; // x8
  System_String_o *FS_UTILITY_LIST_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4B1DE73 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    sub_1BCAFF8(&FSUtility_TypeInfo, v2);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v5);
    sub_1BCAFF8(&Method_FSUtility___c__DisplayClass14_0__LoadAssetData_b__0__, v6);
    sub_1BCAFF8(&FSUtility___c__DisplayClass14_0_TypeInfo, v7);
    byte_4B1DE73 = 1;
  }
  v8 = sub_1BCB244(FSUtility___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !v8 )
    sub_1BCB254(Instance, v10);
  *(_QWORD *)(v8 + 16) = Instance;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)Instance, v11, v12);
  v13 = *(UnityEngine_Object_o **)(v8 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v13, 0LL, 0LL) )
  {
    v14 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v14 = FSUtility_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->isBusySetAssetData = 1;
    FS_UTILITY_LIST_PATH = static_fields->FS_UTILITY_LIST_PATH;
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v17,
      (Il2CppObject *)v8,
      Method_FSUtility___c__DisplayClass14_0__LoadAssetData_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(FS_UTILITY_LIST_PATH, v17, 1, 0LL);
  }
}


void __fastcall FSUtility__ReadFSUtilityList(
        FSUtility_o *this,
        FSUtilityList_o *fsUtilityList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  struct System_Int32_array *legacyBacks; // x20
  FSUtility_c *v7; // x0
  struct FSUtility_StaticFields *static_fields; // x0
  struct System_String_array *legacyMovies; // x1
  struct FSUtility_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_String_array *fullScreenImages; // x1
  struct FSUtility_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  struct FSUtilityList_trimBackRatioYChild_array *trimBackRatioY; // x20
  int max_length; // w8
  unsigned int v21; // w22
  FSUtilityList_trimBackRatioYChild_o *v22; // x24
  FSUtility_c *v23; // x0
  struct System_Int32_array *notFullScreenNpChrs; // x19
  struct FSUtility_StaticFields *v25; // x0

  if ( (byte_4B1DE74 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__float__Add__, fsUtilityList);
    this = (FSUtility_o *)sub_1BCAFF8(&FSUtility_TypeInfo, v5);
    byte_4B1DE74 = 1;
  }
  if ( !fsUtilityList )
    goto LABEL_18;
  legacyBacks = fsUtilityList->fields.legacyBacks;
  v7 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v7 = FSUtility_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->legacyBacks = legacyBacks;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->legacyBacks, (int32_t)legacyBacks, (int32_t)method, v3);
  legacyMovies = fsUtilityList->fields.legacyMovies;
  v10 = FSUtility_TypeInfo->static_fields;
  v10->legacyMovies = legacyMovies;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v10->legacyMovies, (int32_t)legacyMovies, v11, v12);
  fullScreenImages = fsUtilityList->fields.fullScreenImages;
  v14 = FSUtility_TypeInfo->static_fields;
  v14->fullScreenImages = fullScreenImages;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v14->fullScreenImages, (int32_t)fullScreenImages, v15, v16);
  trimBackRatioY = fsUtilityList->fields.trimBackRatioY;
  if ( !trimBackRatioY )
    goto LABEL_18;
  max_length = trimBackRatioY->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1BCB25C(this, fsUtilityList, v17);
      this = (FSUtility_o *)FSUtility_TypeInfo;
      v22 = trimBackRatioY->m_Items[v21];
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (FSUtility_o *)FSUtility_TypeInfo;
      }
      if ( !v22 )
        break;
      this = *(FSUtility_o **)&this[4].fields.m_CancellationTokenSource->fields._disposed;
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_int__float___Add(
        (System_Collections_Generic_Dictionary_int__float__o *)this,
        v22->fields.id,
        v22->fields.offsetY,
        (const MethodInfo_3327134 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      max_length = trimBackRatioY->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_15;
    }
LABEL_18:
    sub_1BCB254(this, fsUtilityList);
  }
LABEL_15:
  v23 = FSUtility_TypeInfo;
  notFullScreenNpChrs = fsUtilityList->fields.notFullScreenNpChrs;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v23 = FSUtility_TypeInfo;
  }
  v25 = v23->static_fields;
  v25->notFullScreenNpChrs = notFullScreenNpChrs;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v25->notFullScreenNpChrs, (int32_t)notFullScreenNpChrs, v17, v18);
}


void __fastcall FSUtility__SetUpBackTextureSize(
        ExUITexture_o *backTexture,
        System_String_o *bgName,
        const MethodInfo *method)
{
  _BOOL8 IsFullScreenBack; // x0
  __int64 v6; // x1
  int32_t v7; // w1

  if ( (byte_4B1DE75 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, bgName);
    byte_4B1DE75 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsFullScreenBack = FSUtility__IsFullScreenBack(bgName, (const MethodInfo *)bgName);
  if ( !backTexture )
    sub_1BCB254(IsFullScreenBack, v6);
  if ( IsFullScreenBack )
    v7 = 576;
  else
    v7 = 756;
  UIWidget__set_height((UIWidget_o *)backTexture, v7, 0LL);
  UIWidget__set_width((UIWidget_o *)backTexture, 1344, 0LL);
}


void __fastcall FSUtility___c__DisplayClass14_0___ctor(
        FSUtility___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FSUtility___c__DisplayClass14_0___LoadAssetData_b__0(
        FSUtility___c__DisplayClass14_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  FSUtility___c__DisplayClass14_0_o *v4; // x19
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  FSUtility_c *v7; // x0

  v4 = this;
  if ( (byte_4B1DE85 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_FSUtilityList___, assetData);
    this = (FSUtility___c__DisplayClass14_0_o *)sub_1BCAFF8(&FSUtility_TypeInfo, v5);
    byte_4B1DE85 = 1;
  }
  if ( !assetData
    || (this = (FSUtility___c__DisplayClass14_0_o *)AssetData__GetObject_object_(
                                                      assetData,
                                                      (const MethodInfo_2FFBEC8 *)Method_AssetData_GetObject_FSUtilityList___),
        !v4->fields.ins) )
  {
    sub_1BCB254(this, assetData);
  }
  FSUtility__ReadFSUtilityList((FSUtility_o *)this, (FSUtilityList_o *)this, v6);
  v7 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v7 = FSUtility_TypeInfo;
  }
  v7->static_fields->isBusySetAssetData = 0;
}