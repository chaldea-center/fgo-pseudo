void FSUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct FSUtility_StaticFields *static_fields; // x0
  int32_t v4; // w1
  __int64 v5; // x0
  struct FSUtility_StaticFields *v6; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  struct FSUtility_StaticFields *v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_int__float__o *v13; // x19
  struct FSUtility_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  struct FSUtility_StaticFields *v18; // x8
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  struct FSUtility_StaticFields *v22; // x8
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C3939C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_6892/*"FullScreen/FSUtilityList"*/);
    byte_4C3939C = 1;
  }
  static_fields = FSUtility_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RATIO_VISTA = 0x4015555540000000LL;
  v4 = StringLiteral_6892/*"FullScreen/FSUtilityList"*/;
  static_fields->FS_UTILITY_LIST_PATH = (struct System_String_o *)StringLiteral_6892/*"FullScreen/FSUtilityList"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->FS_UTILITY_LIST_PATH, v4, v1, v2);
  v5 = sub_1C32CC8(int___TypeInfo, 0);
  v6 = FSUtility_TypeInfo->static_fields;
  v6->legacyBacks = (struct System_Int32_array *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->legacyBacks, v5, v7, v8);
  v9 = sub_1C32CC8(string___TypeInfo, 0);
  v10 = FSUtility_TypeInfo->static_fields;
  v10->fullScreenImages = (struct System_String_array *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->fullScreenImages, v9, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v13,
    (const MethodInfo_340DA88 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  v14 = FSUtility_TypeInfo->static_fields;
  v14->trimBackRatioY = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->trimBackRatioY, (int32_t)v13, v15, v16);
  v17 = sub_1C32CC8(string___TypeInfo, 0);
  v18 = FSUtility_TypeInfo->static_fields;
  v18->legacyMovies = (struct System_String_array *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&v18->legacyMovies, v17, v19, v20);
  v21 = sub_1C32CC8(int___TypeInfo, 0);
  v22 = FSUtility_TypeInfo->static_fields;
  v22->notFullScreenNpChrs = (struct System_Int32_array *)v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&v22->notFullScreenNpChrs, v21, v23, v24);
}


void FSUtility___ctor(FSUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4C3939B & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_FSUtility___ctor__);
    byte_4C3939B = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_FSUtility___ctor__);
}


float FSUtility__CalculateNotchWidth(const MethodInfo *method)
{
  float m_XMin; // s8
  float m_Width; // s9
  int32_t width; // w8
  ManagerConfig_c *v4; // x0
  float v5; // s9
  int HEIGHT; // s10
  UnityEngine_Rect_o safeArea; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3939A & 1) == 0 )
  {
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C3939A = 1;
  }
  safeArea = UnityEngine_Screen__get_safeArea(0);
  m_XMin = safeArea.fields.m_XMin;
  m_Width = safeArea.fields.m_Width;
  width = UnityEngine_Screen__get_width(0);
  v4 = ManagerConfig_TypeInfo;
  v5 = (float)width - (float)(m_Width + m_XMin);
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( m_XMin <= v5 )
    m_XMin = v5;
  HEIGHT = v4->static_fields->HEIGHT;
  return m_XMin * (float)((float)HEIGHT / (float)UnityEngine_Screen__get_height(0));
}


UnityEngine_Vector2_o FSUtility__GetAddOffset(FSOffset_o *refOffset, bool calcNotch, const MethodInfo *method)
{
  FSUtility_c *v5; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float y; // s8
  float x; // s9
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  float subMarginX; // s10
  float OffsetX; // s0
  float v13; // s0
  float v14; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C39399 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39399 = 1;
  }
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  v5 = FSUtility_TypeInfo;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista((const MethodInfo *)v5) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)refOffset, 0, 0);
    if ( v9 )
    {
      if ( !refOffset )
        sub_1C32E7C(v9);
      if ( refOffset->fields.enableAddOffsetX )
      {
        subMarginX = refOffset->fields.subMarginX;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        OffsetX = FSUtility__GetOffsetX(subMarginX, calcNotch, v10);
        if ( !refOffset->fields.addDirectionX )
          OffsetX = -OffsetX;
        x = x + OffsetX;
      }
      if ( refOffset->fields.enableAddBottomY )
        y = y + refOffset->fields.addBottomY;
    }
  }
  v13 = x;
  v14 = y;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


float FSUtility__GetBackFSOffsetY(System_String_o *fileName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_String_o *v3; // x0
  float v4; // s8
  FSUtility_c *v5; // x0
  FSUtility_c *v6; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  v2 = fileName;
  if ( (byte_4C39391 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&StringLiteral_3030/*"Back/back"*/);
    fileName = (System_String_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39391 = 1;
  }
  result = -1;
  if ( !v2 )
    goto LABEL_14;
  v3 = System_String__Replace_63565092(v2, (System_String_o *)StringLiteral_3030/*"Back/back"*/, (System_String_o *)StringLiteral_1/*""*/, 0);
  v4 = 0.0;
  if ( System_Int32__TryParse(v3, &result, 0) )
  {
    v5 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v5 = FSUtility_TypeInfo;
    }
    fileName = (System_String_o *)v5->static_fields->trimBackRatioY;
    if ( !fileName )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
           (System_Collections_Generic_Dictionary_int__float__o *)fileName,
           result,
           (const MethodInfo_340E64C *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
    {
      v6 = FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v6 = FSUtility_TypeInfo;
      }
      fileName = (System_String_o *)v6->static_fields->trimBackRatioY;
      if ( fileName )
        return System_Collections_Generic_Dictionary_int__float___get_Item(
                 (System_Collections_Generic_Dictionary_int__float__o *)fileName,
                 result,
                 (const MethodInfo_340E3B8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_14:
      sub_1C32E7C(fileName);
    }
  }
  return v4;
}


float FSUtility__GetCalcOffsetX(float subMarginX, const MethodInfo *method)
{
  int32_t width; // w19
  float v4; // s0
  bool v5; // nf
  float v6; // s0

  width = UnityEngine_Screen__get_width(0);
  v4 = (float)width / (float)UnityEngine_Screen__get_height(0);
  v5 = v4 < 1.7778;
  v6 = (float)((float)(fminf(v4, 2.3333) + -1.7778) * 576.0) * 0.5;
  if ( v5 )
    v6 = 0.0;
  return v6 - subMarginX;
}


float FSUtility__GetForceOffsetX(float subMarginX, bool calcNotch, const MethodInfo *method)
{
  FSUtility_c *v5; // x0
  FSUtility_c *v6; // x0

  if ( (byte_4C39398 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C39398 = 1;
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


float FSUtility__GetNotchSubMarginX(float subMarginX, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  float v4; // s0

  if ( (byte_4C39396 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C39396 = 1;
  }
  v3 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v4 = FSUtility__CalculateNotchWidth((const MethodInfo *)v3);
  if ( v4 > 0.0 )
    return (float)(v4 / 68.0) * subMarginX;
  return subMarginX;
}


float FSUtility__GetOffsetX(float subMarginX, bool calcNotch, const MethodInfo *method)
{
  FSUtility_c *v5; // x0
  FSUtility_c *v7; // x0
  FSUtility_c *v8; // x0

  if ( (byte_4C39397 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C39397 = 1;
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


void FSUtility__Initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C39389 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
    byte_4C39389 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C32E7C(v2);
    FSUtility__InitializeLocal((FSUtility_o *)Instance, v3);
  }
}


void FSUtility__InitializeLocal(FSUtility_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *FSUtilityList; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3938A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3938A = 1;
  }
  FSUtilityList = (UnityEngine_Object_o *)this->fields.FSUtilityList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(FSUtilityList, 0, 0);
  if ( !v4 )
    FSUtility__ReadFSUtilityList((FSUtility_o *)v4, this->fields.FSUtilityList, v5);
}


bool FSUtility__IsBusySetAssetData(const MethodInfo *method)
{
  FSUtility_c *v1; // x0

  if ( (byte_4C39388 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C39388 = 1;
  }
  v1 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v1 = FSUtility_TypeInfo;
  }
  return v1->static_fields->isBusySetAssetData;
}


bool FSUtility__IsFullScreenBack(System_String_o *fileName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_String_o *v3; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  v2 = fileName;
  if ( (byte_4C3938F & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&StringLiteral_3030/*"Back/back"*/);
    fileName = (System_String_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3938F = 1;
  }
  result = -1;
  if ( !v2 )
    sub_1C32E7C(fileName);
  v3 = System_String__Replace_63565092(v2, (System_String_o *)StringLiteral_3030/*"Back/back"*/, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( System_Int32__TryParse(v3, &result, 0) )
  {
    v5 = result;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    return FSUtility__IsFullScreenBack_44036140(v5, v4);
  }
  else
  {
    return 0;
  }
}


bool FSUtility__IsFullScreenBack_44036140(int32_t id, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  int v4; // w8
  signed int v5; // w21
  struct System_Int32_array *legacyBacks; // x8
  int max_length; // w22
  struct System_Int32_array *v8; // x8
  bool v9; // zf

  if ( (byte_4C39390 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C39390 = 1;
  }
  v3 = FSUtility_TypeInfo;
  v4 = 0;
  do
  {
    v5 = v4;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = FSUtility_TypeInfo;
    }
    legacyBacks = v3->static_fields->legacyBacks;
    if ( !legacyBacks )
      goto LABEL_15;
    max_length = legacyBacks->max_length;
    if ( v5 >= max_length )
      return v5 >= max_length;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = FSUtility_TypeInfo;
    }
    v8 = v3->static_fields->legacyBacks;
    if ( !v8 )
LABEL_15:
      sub_1C32E7C(v3);
    if ( (unsigned int)v5 >= LODWORD(v8->max_length) )
      sub_1C32E84(v3);
    v9 = v8->m_Items[v5] == id;
    v4 = v5 + 1;
  }
  while ( !v9 );
  return v5 >= max_length;
}


bool FSUtility__IsFullScreenImage(System_String_o *imageName, const MethodInfo *method)
{
  signed __int64 v3; // x8
  FSUtility_c *v4; // x0
  signed __int64 v5; // x21
  struct System_String_array *fullScreenImages; // x8
  signed __int64 max_length_low; // x22
  bool v8; // w0

  if ( (byte_4C3938E & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C3938E = 1;
  }
  v3 = 0;
  do
  {
    v4 = FSUtility_TypeInfo;
    v5 = v3;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v4 = FSUtility_TypeInfo;
    }
    fullScreenImages = v4->static_fields->fullScreenImages;
    if ( !fullScreenImages )
      goto LABEL_13;
    max_length_low = SLODWORD(fullScreenImages->max_length);
    if ( v5 >= max_length_low )
      return v5 < max_length_low;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      fullScreenImages = FSUtility_TypeInfo->static_fields->fullScreenImages;
      if ( !fullScreenImages )
LABEL_13:
        sub_1C32E7C(v4);
    }
    if ( v5 >= (unsigned __int64)LODWORD(fullScreenImages->max_length) )
      sub_1C32E84(v4);
    v8 = System_String__op_Equality(fullScreenImages->m_Items[v5], imageName, 0);
    v3 = v5 + 1;
  }
  while ( !v8 );
  return v5 < max_length_low;
}


bool FSUtility__IsFullScreenMovie(System_String_o *fileName, const MethodInfo *method)
{
  __int64 Item_70037084; // x0
  __int64 v4; // x19
  System_String_o *Value; // x19
  unsigned __int64 v6; // x20
  struct System_String_array *legacyMovies; // x8
  char v9; // w8
  struct System_String_array *legacyAspectMovies; // x20
  il2cpp_array_size_t max_length; // x8
  bool v13; // w21
  unsigned __int64 v14; // x22

  if ( (byte_4C39393 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C32C20(&StringLiteral_1049/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/);
    sub_1C32C20(&StringLiteral_22147/*"name"*/);
    byte_4C39393 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  Item_70037084 = (__int64)System_Text_RegularExpressions_Regex__Match(
                             fileName,
                             (System_String_o *)StringLiteral_1049/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/,
                             0);
  if ( !Item_70037084 )
    goto LABEL_32;
  v4 = Item_70037084;
  if ( !System_Text_RegularExpressions_Group__get_Success((System_Text_RegularExpressions_Group_o *)Item_70037084, 0) )
  {
LABEL_18:
    v9 = 0;
    return v9 & 1;
  }
  Item_70037084 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 392LL))(
                    v4,
                    *(_QWORD *)(*(_QWORD *)v4 + 400LL));
  if ( !Item_70037084 )
    goto LABEL_32;
  Item_70037084 = (__int64)System_Text_RegularExpressions_GroupCollection__get_Item_70037084(
                             (System_Text_RegularExpressions_GroupCollection_o *)Item_70037084,
                             (System_String_o *)StringLiteral_22147/*"name"*/,
                             0);
  if ( !Item_70037084 )
    goto LABEL_32;
  Value = System_Text_RegularExpressions_Capture__get_Value(
            (System_Text_RegularExpressions_Capture_o *)Item_70037084,
            0);
  v6 = 0;
  while ( 1 )
  {
    Item_70037084 = (__int64)FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      Item_70037084 = (__int64)FSUtility_TypeInfo;
    }
    legacyMovies = *(struct System_String_array **)(*(_QWORD *)(Item_70037084 + 184) + 48LL);
    if ( !legacyMovies )
      goto LABEL_32;
    if ( (__int64)v6 >= SLODWORD(legacyMovies->max_length) )
      break;
    if ( !*(_DWORD *)(Item_70037084 + 224) )
    {
      j_il2cpp_runtime_class_init_0(Item_70037084);
      legacyMovies = FSUtility_TypeInfo->static_fields->legacyMovies;
      if ( !legacyMovies )
        goto LABEL_32;
    }
    if ( v6 >= LODWORD(legacyMovies->max_length) )
      goto LABEL_33;
    if ( System_String__op_Equality(legacyMovies->m_Items[v6++], Value, 0) )
      goto LABEL_18;
  }
  Item_70037084 = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Item_70037084 = (__int64)BalanceConfig_TypeInfo;
  }
  legacyAspectMovies = *(struct System_String_array **)(*(_QWORD *)(Item_70037084 + 184) + 888LL);
  if ( !legacyAspectMovies )
  {
    v9 = 1;
    return v9 & 1;
  }
  if ( !*(_DWORD *)(Item_70037084 + 224) )
  {
    j_il2cpp_runtime_class_init_0(Item_70037084);
    legacyAspectMovies = BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
    if ( !legacyAspectMovies )
LABEL_32:
      sub_1C32E7C(Item_70037084);
  }
  max_length = legacyAspectMovies->max_length;
  v13 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( v14 < (unsigned int)max_length )
    {
      Item_70037084 = System_String__op_Equality(legacyAspectMovies->m_Items[v14], Value, 0);
      if ( (Item_70037084 & 1) == 0 )
      {
        LODWORD(max_length) = legacyAspectMovies->max_length;
        v13 = (__int64)++v14 < (int)max_length;
        if ( (__int64)v14 < (int)max_length )
          continue;
      }
      goto LABEL_30;
    }
LABEL_33:
    sub_1C32E84(Item_70037084);
  }
LABEL_30:
  v9 = !v13;
  return v9 & 1;
}


bool FSUtility__IsFullScreenNP(int32_t chrId, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  int v4; // w8
  signed int v5; // w21
  struct System_Int32_array *notFullScreenNpChrs; // x8
  int max_length; // w22
  struct System_Int32_array *v8; // x8
  bool v9; // zf

  if ( (byte_4C39392 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C39392 = 1;
  }
  v3 = FSUtility_TypeInfo;
  v4 = 0;
  do
  {
    v5 = v4;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = FSUtility_TypeInfo;
    }
    notFullScreenNpChrs = v3->static_fields->notFullScreenNpChrs;
    if ( !notFullScreenNpChrs )
      goto LABEL_15;
    max_length = notFullScreenNpChrs->max_length;
    if ( v5 >= max_length )
      return v5 >= max_length;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = FSUtility_TypeInfo;
    }
    v8 = v3->static_fields->notFullScreenNpChrs;
    if ( !v8 )
LABEL_15:
      sub_1C32E7C(v3);
    if ( (unsigned int)v5 >= LODWORD(v8->max_length) )
      sub_1C32E84(v3);
    v9 = v8->m_Items[v5] == chrId;
    v4 = v5 + 1;
  }
  while ( !v9 );
  return v5 >= max_length;
}


bool FSUtility__IsOverScope(const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w0
  FSUtility_c *v3; // x8
  int v4; // w20

  if ( (byte_4C39395 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C39395 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  v3 = FSUtility_TypeInfo;
  v4 = height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v3 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)v4) > v3->static_fields->RATIO_SCOPE;
}


bool FSUtility__IsTablet(const MethodInfo *method)
{
  int32_t width; // w19

  width = UnityEngine_Screen__get_width(0);
  return (float)((float)width / (float)UnityEngine_Screen__get_height(0)) < 1.7778;
}


bool FSUtility__IsUnderVista(const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w0
  FSUtility_c *v3; // x8
  int v4; // w20

  if ( (byte_4C39394 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C39394 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  v3 = FSUtility_TypeInfo;
  v4 = height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v3 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)v4) <= v3->static_fields->RATIO_VISTA;
}


void FSUtility__LoadAssetData(const MethodInfo *method)
{
  __int64 v1; // x19
  Il2CppObject *Instance; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  UnityEngine_Object_o *v5; // x20
  FSUtility_c *v6; // x0
  struct FSUtility_StaticFields *static_fields; // x8
  System_String_o *FS_UTILITY_LIST_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_4C3938B & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
    sub_1C32C20(&Method_FSUtility___c__DisplayClass14_0__LoadAssetData_b__0__);
    sub_1C32C20(&FSUtility___c__DisplayClass14_0_TypeInfo);
    byte_4C3938B = 1;
  }
  v1 = sub_1C32E6C(FSUtility___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !v1 )
    sub_1C32E7C(Instance);
  *(_QWORD *)(v1 + 16) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 16), (int32_t)Instance, v3, v4);
  v5 = *(UnityEngine_Object_o **)(v1 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    v6 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v6 = FSUtility_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->isBusySetAssetData = 1;
    FS_UTILITY_LIST_PATH = static_fields->FS_UTILITY_LIST_PATH;
    v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v9,
      (Il2CppObject *)v1,
      Method_FSUtility___c__DisplayClass14_0__LoadAssetData_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(FS_UTILITY_LIST_PATH, v9, 1, 0);
  }
}


void FSUtility__ReadFSUtilityList(FSUtility_o *this, FSUtilityList_o *fsUtilityList, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Int32_array *legacyBacks; // x20
  FSUtility_c *v6; // x0
  struct FSUtility_StaticFields *static_fields; // x0
  struct System_String_array *legacyMovies; // x1
  struct FSUtility_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_String_array *fullScreenImages; // x1
  struct FSUtility_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct FSUtilityList_trimBackRatioYChild_array *trimBackRatioY; // x20
  int max_length; // w8
  unsigned int v20; // w22
  FSUtilityList_trimBackRatioYChild_o *v21; // x24
  FSUtility_c *v22; // x0
  struct System_Int32_array *notFullScreenNpChrs; // x19
  struct FSUtility_StaticFields *v24; // x0

  if ( (byte_4C3938C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__float__Add__);
    this = (FSUtility_o *)sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C3938C = 1;
  }
  if ( !fsUtilityList )
    goto LABEL_18;
  legacyBacks = fsUtilityList->fields.legacyBacks;
  v6 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v6 = FSUtility_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->legacyBacks = legacyBacks;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->legacyBacks, (int32_t)legacyBacks, (int32_t)method, v3);
  legacyMovies = fsUtilityList->fields.legacyMovies;
  v9 = FSUtility_TypeInfo->static_fields;
  v9->legacyMovies = legacyMovies;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->legacyMovies, (int32_t)legacyMovies, v10, v11);
  fullScreenImages = fsUtilityList->fields.fullScreenImages;
  v13 = FSUtility_TypeInfo->static_fields;
  v13->fullScreenImages = fullScreenImages;
  sub_1C32BC4((CGThumbnailListItem_o *)&v13->fullScreenImages, (int32_t)fullScreenImages, v14, v15);
  trimBackRatioY = fsUtilityList->fields.trimBackRatioY;
  if ( !trimBackRatioY )
    goto LABEL_18;
  max_length = trimBackRatioY->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1C32E84(this);
      this = (FSUtility_o *)FSUtility_TypeInfo;
      v21 = trimBackRatioY->m_Items[v20];
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (FSUtility_o *)FSUtility_TypeInfo;
      }
      if ( !v21 )
        break;
      this = *(FSUtility_o **)&this[4].fields.m_CancellationTokenSource->fields._disposed;
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_int__float___Add(
        (System_Collections_Generic_Dictionary_int__float__o *)this,
        v21->fields.id,
        v21->fields.offsetY,
        (const MethodInfo_340E454 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      max_length = trimBackRatioY->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_15;
    }
LABEL_18:
    sub_1C32E7C(this);
  }
LABEL_15:
  v22 = FSUtility_TypeInfo;
  notFullScreenNpChrs = fsUtilityList->fields.notFullScreenNpChrs;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v22 = FSUtility_TypeInfo;
  }
  v24 = v22->static_fields;
  v24->notFullScreenNpChrs = notFullScreenNpChrs;
  sub_1C32BC4((CGThumbnailListItem_o *)&v24->notFullScreenNpChrs, (int32_t)notFullScreenNpChrs, v16, v17);
}


void FSUtility__SetUpBackTextureSize(ExUITexture_o *backTexture, System_String_o *bgName, const MethodInfo *method)
{
  _BOOL8 IsFullScreenBack; // x0
  int32_t v6; // w1

  if ( (byte_4C3938D & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C3938D = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsFullScreenBack = FSUtility__IsFullScreenBack(bgName, (const MethodInfo *)bgName);
  if ( !backTexture )
    sub_1C32E7C(IsFullScreenBack);
  if ( IsFullScreenBack )
    v6 = 576;
  else
    v6 = 756;
  UIWidget__set_height((UIWidget_o *)backTexture, v6, 0);
  UIWidget__set_width((UIWidget_o *)backTexture, 1344, 0);
}


void FSUtility___c__DisplayClass14_0___ctor(FSUtility___c__DisplayClass14_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FSUtility___c__DisplayClass14_0___LoadAssetData_b__0(
        FSUtility___c__DisplayClass14_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  FSUtility___c__DisplayClass14_0_o *v4; // x19
  const MethodInfo *v5; // x2
  FSUtility_c *v6; // x0

  v4 = this;
  if ( (byte_4C3939D & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_FSUtilityList___);
    this = (FSUtility___c__DisplayClass14_0_o *)sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C3939D = 1;
  }
  if ( !assetData
    || (this = (FSUtility___c__DisplayClass14_0_o *)AssetData__GetObject_object_(
                                                      assetData,
                                                      (const MethodInfo_30BE658 *)Method_AssetData_GetObject_FSUtilityList___),
        !v4->fields.ins) )
  {
    sub_1C32E7C(this);
  }
  FSUtility__ReadFSUtilityList((FSUtility_o *)this, (FSUtilityList_o *)this, v5);
  v6 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v6 = FSUtility_TypeInfo;
  }
  v6->static_fields->isBusySetAssetData = 0;
}