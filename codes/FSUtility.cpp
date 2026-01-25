void FSUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct FSUtility_StaticFields *static_fields; // x0
  int32_t v8; // w1
  __int64 v9; // x0
  struct FSUtility_StaticFields *v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  struct FSUtility_StaticFields *v18; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_Dictionary_int__float__o *v25; // x19
  struct FSUtility_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 v33; // x0
  struct FSUtility_StaticFields *v34; // x8
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x0
  struct FSUtility_StaticFields *v42; // x8
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7

  if ( (byte_4CF000C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    sub_1C7BAE8(&FSUtility_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_6906/*"FullScreen/FSUtilityList"*/);
    byte_4CF000C = 1;
  }
  static_fields = FSUtility_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RATIO_VISTA = 0x4015555540000000LL;
  v8 = StringLiteral_6906/*"FullScreen/FSUtilityList"*/;
  static_fields->FS_UTILITY_LIST_PATH = (struct System_String_o *)StringLiteral_6906/*"FullScreen/FSUtilityList"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->FS_UTILITY_LIST_PATH, v8, v1, v2, v3, v4, v5, v6);
  v9 = sub_1C7BB90(int___TypeInfo, 0);
  v10 = FSUtility_TypeInfo->static_fields;
  v10->legacyBacks = (struct System_Int32_array *)v9;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10->legacyBacks, v9, v11, v12, v13, v14, v15, v16);
  v17 = sub_1C7BB90(string___TypeInfo, 0);
  v18 = FSUtility_TypeInfo->static_fields;
  v18->fullScreenImages = (struct System_String_array *)v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v18->fullScreenImages, v17, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v25,
    (const MethodInfo_34A4334 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  v26 = FSUtility_TypeInfo->static_fields;
  v26->trimBackRatioY = v25;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26->trimBackRatioY, (int32_t)v25, v27, v28, v29, v30, v31, v32);
  v33 = sub_1C7BB90(string___TypeInfo, 0);
  v34 = FSUtility_TypeInfo->static_fields;
  v34->legacyMovies = (struct System_String_array *)v33;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v34->legacyMovies, v33, v35, v36, v37, v38, v39, v40);
  v41 = sub_1C7BB90(int___TypeInfo, 0);
  v42 = FSUtility_TypeInfo->static_fields;
  v42->notFullScreenNpChrs = (struct System_Int32_array *)v41;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v42->notFullScreenNpChrs, v41, v43, v44, v45, v46, v47, v48);
}


void FSUtility___ctor(FSUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4CF000B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_FSUtility___ctor__);
    byte_4CF000B = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_FSUtility___ctor__);
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

  if ( (byte_4CF000A & 1) == 0 )
  {
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CF000A = 1;
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

  if ( (byte_4CF0009 & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0009 = 1;
  }
  if ( !byte_4CE7D39 )
  {
    sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
    byte_4CE7D39 = 1;
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
        sub_1C7BD40(v9, v10);
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
  if ( (byte_4CF0001 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_1C7BAE8(&FSUtility_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3031/*"Back/back"*/);
    fileName = (System_String_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF0001 = 1;
  }
  result = -1;
  if ( !v2 )
    goto LABEL_14;
  v3 = System_String__Replace_64223476(v2, (System_String_o *)StringLiteral_3031/*"Back/back"*/, (System_String_o *)StringLiteral_1/*""*/, 0);
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
           (const MethodInfo_34A4EF8 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
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
                 (const MethodInfo_34A4C64 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_14:
      sub_1C7BD40(fileName, method);
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

  if ( (byte_4CF0008 & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CF0008 = 1;
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

  if ( (byte_4CF0006 & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CF0006 = 1;
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

  if ( (byte_4CF0007 & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CF0007 = 1;
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

  if ( (byte_4CEFFF9 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
    byte_4CEFFF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C7BD40(v2, v3);
    FSUtility__InitializeLocal((FSUtility_o *)Instance, v3);
  }
}


void FSUtility__InitializeLocal(FSUtility_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *FSUtilityList; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CEFFFA & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFFFA = 1;
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

  if ( (byte_4CEFFF8 & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CEFFF8 = 1;
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
  if ( (byte_4CEFFFF & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3031/*"Back/back"*/);
    fileName = (System_String_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFFFF = 1;
  }
  result = -1;
  if ( !v2 )
    sub_1C7BD40(fileName, method);
  v3 = System_String__Replace_64223476(v2, (System_String_o *)StringLiteral_3031/*"Back/back"*/, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( System_Int32__TryParse(v3, &result, 0) )
  {
    v5 = result;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    return FSUtility__IsFullScreenBack_44662116(v5, v4);
  }
  else
  {
    return 0;
  }
}


bool FSUtility__IsFullScreenBack_44662116(int32_t id, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  int v4; // w8
  signed int v5; // w21
  struct System_Int32_array *legacyBacks; // x8
  int max_length; // w22
  struct System_Int32_array *v8; // x8
  bool v9; // zf

  if ( (byte_4CF0000 & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CF0000 = 1;
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
      sub_1C7BD40(v3, method);
    if ( (unsigned int)v5 >= LODWORD(v8->max_length) )
      sub_1C7BD48(v3);
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

  if ( (byte_4CEFFFE & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CEFFFE = 1;
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
        sub_1C7BD40(v4, method);
    }
    if ( v5 >= (unsigned __int64)LODWORD(fullScreenImages->max_length) )
      sub_1C7BD48(v4);
    v8 = System_String__op_Equality(fullScreenImages->m_Items[v5], imageName, 0);
    v3 = v5 + 1;
  }
  while ( !v8 );
  return v5 < max_length_low;
}


bool FSUtility__IsFullScreenMovie(System_String_o *fileName, const MethodInfo *method)
{
  __int64 Item_70676236; // x0
  __int64 v4; // x1
  __int64 v5; // x19
  System_String_o *Value; // x19
  unsigned __int64 v7; // x20
  struct System_String_array *legacyMovies; // x8
  char v10; // w8
  struct System_String_array *legacyAspectMovies; // x20
  il2cpp_array_size_t max_length; // x8
  bool v14; // w21
  unsigned __int64 v15; // x22

  if ( (byte_4CF0003 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&FSUtility_TypeInfo);
    sub_1C7BAE8(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1043/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/);
    sub_1C7BAE8(&StringLiteral_22354/*"name"*/);
    byte_4CF0003 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  Item_70676236 = (__int64)System_Text_RegularExpressions_Regex__Match(
                             fileName,
                             (System_String_o *)StringLiteral_1043/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/,
                             0);
  if ( !Item_70676236 )
    goto LABEL_32;
  v5 = Item_70676236;
  if ( !System_Text_RegularExpressions_Group__get_Success((System_Text_RegularExpressions_Group_o *)Item_70676236, 0) )
  {
LABEL_18:
    v10 = 0;
    return v10 & 1;
  }
  Item_70676236 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 392LL))(
                    v5,
                    *(_QWORD *)(*(_QWORD *)v5 + 400LL));
  if ( !Item_70676236 )
    goto LABEL_32;
  Item_70676236 = (__int64)System_Text_RegularExpressions_GroupCollection__get_Item_70676236(
                             (System_Text_RegularExpressions_GroupCollection_o *)Item_70676236,
                             (System_String_o *)StringLiteral_22354/*"name"*/,
                             0);
  if ( !Item_70676236 )
    goto LABEL_32;
  Value = System_Text_RegularExpressions_Capture__get_Value(
            (System_Text_RegularExpressions_Capture_o *)Item_70676236,
            0);
  v7 = 0;
  while ( 1 )
  {
    Item_70676236 = (__int64)FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      Item_70676236 = (__int64)FSUtility_TypeInfo;
    }
    legacyMovies = *(struct System_String_array **)(*(_QWORD *)(Item_70676236 + 184) + 48LL);
    if ( !legacyMovies )
      goto LABEL_32;
    if ( (__int64)v7 >= SLODWORD(legacyMovies->max_length) )
      break;
    if ( !*(_DWORD *)(Item_70676236 + 224) )
    {
      j_il2cpp_runtime_class_init_0(Item_70676236);
      legacyMovies = FSUtility_TypeInfo->static_fields->legacyMovies;
      if ( !legacyMovies )
        goto LABEL_32;
    }
    if ( v7 >= LODWORD(legacyMovies->max_length) )
      goto LABEL_33;
    if ( System_String__op_Equality(legacyMovies->m_Items[v7++], Value, 0) )
      goto LABEL_18;
  }
  Item_70676236 = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Item_70676236 = (__int64)BalanceConfig_TypeInfo;
  }
  legacyAspectMovies = *(struct System_String_array **)(*(_QWORD *)(Item_70676236 + 184) + 904LL);
  if ( !legacyAspectMovies )
  {
    v10 = 1;
    return v10 & 1;
  }
  if ( !*(_DWORD *)(Item_70676236 + 224) )
  {
    j_il2cpp_runtime_class_init_0(Item_70676236);
    legacyAspectMovies = BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
    if ( !legacyAspectMovies )
LABEL_32:
      sub_1C7BD40(Item_70676236, v4);
  }
  max_length = legacyAspectMovies->max_length;
  v14 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < (unsigned int)max_length )
    {
      Item_70676236 = System_String__op_Equality(legacyAspectMovies->m_Items[v15], Value, 0);
      if ( (Item_70676236 & 1) == 0 )
      {
        LODWORD(max_length) = legacyAspectMovies->max_length;
        v14 = (__int64)++v15 < (int)max_length;
        if ( (__int64)v15 < (int)max_length )
          continue;
      }
      goto LABEL_30;
    }
LABEL_33:
    sub_1C7BD48(Item_70676236);
  }
LABEL_30:
  v10 = !v14;
  return v10 & 1;
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

  if ( (byte_4CF0002 & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CF0002 = 1;
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
      sub_1C7BD40(v3, method);
    if ( (unsigned int)v5 >= LODWORD(v8->max_length) )
      sub_1C7BD48(v3);
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

  if ( (byte_4CF0005 & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CF0005 = 1;
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

  if ( (byte_4CF0004 & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CF0004 = 1;
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
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_Object_o *v10; // x20
  FSUtility_c *v11; // x0
  struct FSUtility_StaticFields *static_fields; // x8
  System_String_o *FS_UTILITY_LIST_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_4CEFFFB & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&FSUtility_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
    sub_1C7BAE8(&Method_FSUtility___c__DisplayClass14_0__LoadAssetData_b__0__);
    sub_1C7BAE8(&FSUtility___c__DisplayClass14_0_TypeInfo);
    byte_4CEFFFB = 1;
  }
  v1 = sub_1C7BD34(FSUtility___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !v1 )
    sub_1C7BD40(Instance, v3);
  *(_QWORD *)(v1 + 16) = Instance;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v1 + 16), (int32_t)Instance, v4, v5, v6, v7, v8, v9);
  v10 = *(UnityEngine_Object_o **)(v1 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
  {
    v11 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v11 = FSUtility_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->isBusySetAssetData = 1;
    FS_UTILITY_LIST_PATH = static_fields->FS_UTILITY_LIST_PATH;
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v14,
      (Il2CppObject *)v1,
      Method_FSUtility___c__DisplayClass14_0__LoadAssetData_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(FS_UTILITY_LIST_PATH, v14, 1, 0);
  }
}


void FSUtility__ReadFSUtilityList(FSUtility_o *this, FSUtilityList_o *fsUtilityList, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Int32_array *legacyBacks; // x20
  FSUtility_c *v10; // x0
  struct FSUtility_StaticFields *static_fields; // x0
  struct System_String_array *legacyMovies; // x1
  struct FSUtility_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_String_array *fullScreenImages; // x1
  struct FSUtility_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct FSUtilityList_trimBackRatioYChild_array *trimBackRatioY; // x20
  int max_length; // w8
  unsigned int v36; // w22
  FSUtilityList_trimBackRatioYChild_o *v37; // x24
  FSUtility_c *v38; // x0
  struct System_Int32_array *notFullScreenNpChrs; // x19
  struct FSUtility_StaticFields *v40; // x0

  if ( (byte_4CEFFFC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__float__Add__);
    this = (FSUtility_o *)sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CEFFFC = 1;
  }
  if ( !fsUtilityList )
    goto LABEL_18;
  legacyBacks = fsUtilityList->fields.legacyBacks;
  v10 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v10 = FSUtility_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->legacyBacks = legacyBacks;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->legacyBacks,
    (int32_t)legacyBacks,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  legacyMovies = fsUtilityList->fields.legacyMovies;
  v13 = FSUtility_TypeInfo->static_fields;
  v13->legacyMovies = legacyMovies;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13->legacyMovies, (int32_t)legacyMovies, v14, v15, v16, v17, v18, v19);
  fullScreenImages = fsUtilityList->fields.fullScreenImages;
  v21 = FSUtility_TypeInfo->static_fields;
  v21->fullScreenImages = fullScreenImages;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v21->fullScreenImages,
    (int32_t)fullScreenImages,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  trimBackRatioY = fsUtilityList->fields.trimBackRatioY;
  if ( !trimBackRatioY )
    goto LABEL_18;
  max_length = trimBackRatioY->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
        sub_1C7BD48(this);
      this = (FSUtility_o *)FSUtility_TypeInfo;
      v37 = trimBackRatioY->m_Items[v36];
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (FSUtility_o *)FSUtility_TypeInfo;
      }
      if ( !v37 )
        break;
      this = *(FSUtility_o **)&this[4].fields.m_CancellationTokenSource->fields._disposed;
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_int__float___Add(
        (System_Collections_Generic_Dictionary_int__float__o *)this,
        v37->fields.id,
        v37->fields.offsetY,
        (const MethodInfo_34A4D00 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      max_length = trimBackRatioY->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_15;
    }
LABEL_18:
    sub_1C7BD40(this, fsUtilityList);
  }
LABEL_15:
  v38 = FSUtility_TypeInfo;
  notFullScreenNpChrs = fsUtilityList->fields.notFullScreenNpChrs;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v38 = FSUtility_TypeInfo;
  }
  v40 = v38->static_fields;
  v40->notFullScreenNpChrs = notFullScreenNpChrs;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v40->notFullScreenNpChrs,
    (int32_t)notFullScreenNpChrs,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void FSUtility__SetUpBackTextureSize(ExUITexture_o *backTexture, System_String_o *bgName, const MethodInfo *method)
{
  _BOOL8 IsFullScreenBack; // x0
  __int64 v6; // x1
  int32_t v7; // w1

  if ( (byte_4CEFFFD & 1) == 0 )
  {
    sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CEFFFD = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsFullScreenBack = FSUtility__IsFullScreenBack(bgName, (const MethodInfo *)bgName);
  if ( !backTexture )
    sub_1C7BD40(IsFullScreenBack, v6);
  if ( IsFullScreenBack )
    v7 = 576;
  else
    v7 = 756;
  UIWidget__set_height((UIWidget_o *)backTexture, v7, 0);
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
  if ( (byte_4CF000D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_FSUtilityList___);
    this = (FSUtility___c__DisplayClass14_0_o *)sub_1C7BAE8(&FSUtility_TypeInfo);
    byte_4CF000D = 1;
  }
  if ( !assetData
    || (this = (FSUtility___c__DisplayClass14_0_o *)AssetData__GetObject_object_(
                                                      assetData,
                                                      (const MethodInfo_3151490 *)Method_AssetData_GetObject_FSUtilityList___),
        !v4->fields.ins) )
  {
    sub_1C7BD40(this, assetData);
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