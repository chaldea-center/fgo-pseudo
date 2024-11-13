void __fastcall FSUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct FSUtility_StaticFields *static_fields; // x0
  int64_t v19; // x1
  int64_t v20; // x0
  struct FSUtility_StaticFields *v21; // x8
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x0
  struct FSUtility_StaticFields *v29; // x8
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_Dictionary_int__float__o *v39; // x19
  struct FSUtility_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x0
  struct FSUtility_StaticFields *v48; // x8
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x0
  struct FSUtility_StaticFields *v56; // x8
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7

  if ( (byte_4B1798F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v8, v9);
    sub_1BCA7E0(&FSUtility_TypeInfo, v10, v11);
    sub_1BCA7E0(&int___TypeInfo, v12, v13);
    sub_1BCA7E0(&string___TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_6983/*"FullScreen/FSUtilityList"*/, v16, v17);
    byte_4B1798F = 1;
  }
  static_fields = FSUtility_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RATIO_VISTA = 0x4015555540000000LL;
  v19 = StringLiteral_6983/*"FullScreen/FSUtilityList"*/;
  static_fields->FS_UTILITY_LIST_PATH = (struct System_String_o *)StringLiteral_6983/*"FullScreen/FSUtilityList"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->FS_UTILITY_LIST_PATH, v19, v2, v3, v4, v5, v6, v7);
  v20 = sub_1BCA888(int___TypeInfo, 0LL);
  v21 = FSUtility_TypeInfo->static_fields;
  v21->legacyBacks = (struct System_Int32_array *)v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&v21->legacyBacks, v20, v22, v23, v24, v25, v26, v27);
  v28 = sub_1BCA888(string___TypeInfo, 0LL);
  v29 = FSUtility_TypeInfo->static_fields;
  v29->fullScreenImages = (struct System_String_array *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v29->fullScreenImages, v28, v30, v31, v32, v33, v34, v35);
  v39 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__float__TypeInfo,
                                                                 v36,
                                                                 v37,
                                                                 v38);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v39,
    (const MethodInfo_320B378 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  v40 = FSUtility_TypeInfo->static_fields;
  v40->trimBackRatioY = v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&v40->trimBackRatioY, (int64_t)v39, v41, v42, v43, v44, v45, v46);
  v47 = sub_1BCA888(string___TypeInfo, 0LL);
  v48 = FSUtility_TypeInfo->static_fields;
  v48->legacyMovies = (struct System_String_array *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v48->legacyMovies, v47, v49, v50, v51, v52, v53, v54);
  v55 = sub_1BCA888(int___TypeInfo, 0LL);
  v56 = FSUtility_TypeInfo->static_fields;
  v56->notFullScreenNpChrs = (struct System_Int32_array *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&v56->notFullScreenNpChrs, v55, v57, v58, v59, v60, v61, v62);
}


void __fastcall FSUtility___ctor(FSUtility_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1798E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FSUtility___ctor__, method, v2);
    byte_4B1798E = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_FSUtility___ctor__);
}


float __fastcall FSUtility__CalculateNotchWidth(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  float m_XMin; // s8
  float m_Width; // s9
  __int64 v5; // x1
  int32_t width; // w8
  ManagerConfig_c *v7; // x0
  float v8; // s9
  int HEIGHT; // s10
  UnityEngine_Rect_o safeArea; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1798D & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v1, v2);
    byte_4B1798D = 1;
  }
  safeArea = UnityEngine_Screen__get_safeArea(0LL);
  m_XMin = safeArea.fields.m_XMin;
  m_Width = safeArea.fields.m_Width;
  width = UnityEngine_Screen__get_width(0LL);
  v7 = ManagerConfig_TypeInfo;
  v8 = (float)width - (float)(m_Width + m_XMin);
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v5);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( m_XMin <= v8 )
    m_XMin = v8;
  HEIGHT = v7->static_fields->HEIGHT;
  return m_XMin * (float)((float)HEIGHT / (float)UnityEngine_Screen__get_height(0LL));
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall FSUtility__GetAddOffset(
        FSOffset_o *refOffset,
        bool calcNotch,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  FSUtility_c *v7; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float y; // s8
  float x; // s9
  __int64 v11; // x1
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  float subMarginX; // s10
  float OffsetX; // s0
  float v16; // s0
  float v17; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B1798C & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, calcNotch, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1798C = 1;
  }
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, calcNotch, method);
    byte_4B108BA = 1;
  }
  v7 = FSUtility_TypeInfo;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, calcNotch);
  if ( !FSUtility__IsUnderVista((const MethodInfo *)v7) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)refOffset, 0LL, 0LL);
    if ( v12 )
    {
      if ( !refOffset )
        sub_1BCAA3C(v12, v13);
      if ( refOffset->fields.enableAddOffsetX )
      {
        subMarginX = refOffset->fields.subMarginX;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v13);
        OffsetX = FSUtility__GetOffsetX(subMarginX, calcNotch, v13);
        if ( !refOffset->fields.addDirectionX )
          OffsetX = -OffsetX;
        x = x + OffsetX;
      }
      if ( refOffset->fields.enableAddBottomY )
        y = y + refOffset->fields.addBottomY;
    }
  }
  v16 = x;
  v17 = y;
  result.fields.y = v17;
  result.fields.x = v16;
  return result;
}


float __fastcall FSUtility__GetBackFSOffsetY(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x0
  float v13; // s8
  FSUtility_c *v14; // x0
  FSUtility_c *v15; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  v3 = fileName;
  if ( (byte_4B17984 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v4, v5);
    sub_1BCA7E0(&FSUtility_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_3154/*"Back/back"*/, v8, v9);
    fileName = (System_String_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B17984 = 1;
  }
  result = -1;
  if ( !v3 )
    goto LABEL_14;
  v12 = System_String__Replace_62420848(
          v3,
          (System_String_o *)StringLiteral_3154/*"Back/back"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v13 = 0.0;
  if ( System_Int32__TryParse(v12, &result, 0LL) )
  {
    v14 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
      v14 = FSUtility_TypeInfo;
    }
    fileName = (System_String_o *)v14->static_fields->trimBackRatioY;
    if ( !fileName )
      goto LABEL_14;
    if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
           (System_Collections_Generic_Dictionary_int__float__o *)fileName,
           result,
           (const MethodInfo_320BF3C *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
    {
      v15 = FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
        v15 = FSUtility_TypeInfo;
      }
      fileName = (System_String_o *)v15->static_fields->trimBackRatioY;
      if ( fileName )
        return System_Collections_Generic_Dictionary_int__float___get_Item(
                 (System_Collections_Generic_Dictionary_int__float__o *)fileName,
                 result,
                 (const MethodInfo_320BCA8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_14:
      sub_1BCAA3C(fileName, method);
    }
  }
  return v13;
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
  __int64 v3; // x2
  FSUtility_c *v6; // x0
  FSUtility_c *v7; // x0

  if ( (byte_4B1798B & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v3);
    byte_4B1798B = 1;
  }
  if ( calcNotch )
  {
    v6 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
    subMarginX = FSUtility__GetNotchSubMarginX(subMarginX, (const MethodInfo *)v6);
  }
  v7 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  return FSUtility__GetCalcOffsetX(subMarginX, (const MethodInfo *)v7);
}


float __fastcall FSUtility__GetNotchSubMarginX(float subMarginX, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  FSUtility_c *v5; // x0
  float v6; // s0

  if ( (byte_4B17989 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, v2, v3);
    byte_4B17989 = 1;
  }
  v5 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v2);
  v6 = FSUtility__CalculateNotchWidth((const MethodInfo *)v5);
  if ( v6 > 0.0 )
    return (float)(v6 / 68.0) * subMarginX;
  return subMarginX;
}


float __fastcall FSUtility__GetOffsetX(float subMarginX, bool calcNotch, const MethodInfo *method)
{
  __int64 v3; // x2
  FSUtility_c *v6; // x0
  __int64 v7; // x1
  FSUtility_c *v9; // x0
  FSUtility_c *v10; // x0

  if ( (byte_4B1798A & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v3);
    byte_4B1798A = 1;
  }
  v6 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  if ( FSUtility__IsUnderVista((const MethodInfo *)v6) )
    return 0.0;
  if ( calcNotch )
  {
    v9 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v7);
    subMarginX = FSUtility__GetNotchSubMarginX(subMarginX, (const MethodInfo *)v9);
  }
  v10 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v7);
  return FSUtility__GetCalcOffsetX(subMarginX, (const MethodInfo *)v10);
}


void __fastcall FSUtility__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B1797C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v3, v4);
    byte_4B1797C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BCAA3C(v7, v8);
    FSUtility__InitializeLocal((FSUtility_o *)Instance, v8);
  }
}


void __fastcall FSUtility__InitializeLocal(FSUtility_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *FSUtilityList; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1797D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1797D = 1;
  }
  FSUtilityList = (UnityEngine_Object_o *)this->fields.FSUtilityList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(FSUtilityList, 0LL, 0LL);
  if ( !v5 )
    FSUtility__ReadFSUtilityList((FSUtility_o *)v5, this->fields.FSUtilityList, v6);
}


bool __fastcall FSUtility__IsBusySetAssetData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FSUtility_c *v3; // x0

  if ( (byte_4B1797B & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, v1, v2);
    byte_4B1797B = 1;
  }
  v3 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v1);
    v3 = FSUtility_TypeInfo;
  }
  return v3->static_fields->isBusySetAssetData;
}


bool __fastcall FSUtility__IsFullScreenBack(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  v3 = fileName;
  if ( (byte_4B17982 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3154/*"Back/back"*/, v4, v5);
    fileName = (System_String_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17982 = 1;
  }
  result = -1;
  if ( !v3 )
    sub_1BCAA3C(fileName, method);
  v8 = System_String__Replace_62420848(
         v3,
         (System_String_o *)StringLiteral_3154/*"Back/back"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  if ( System_Int32__TryParse(v8, &result, 0LL) )
  {
    v10 = result;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v9);
    return FSUtility__IsFullScreenBack_41841416(v10, v9);
  }
  else
  {
    return 0;
  }
}


bool __fastcall FSUtility__IsFullScreenBack_41841416(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  FSUtility_c *v4; // x0
  signed int v5; // w8
  signed int v6; // w21
  struct System_Int32_array *legacyBacks; // x8
  signed int max_length; // w22
  struct System_Int32_array *v9; // x8
  bool v10; // zf

  if ( (byte_4B17983 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B17983 = 1;
  }
  v4 = FSUtility_TypeInfo;
  v5 = 0;
  do
  {
    v6 = v5;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
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
      j_il2cpp_runtime_class_init_0(v4, method);
      v4 = FSUtility_TypeInfo;
    }
    v9 = v4->static_fields->legacyBacks;
    if ( !v9 )
LABEL_15:
      sub_1BCAA3C(v4, method);
    if ( v6 >= v9->max_length )
      sub_1BCAA44(v4, method);
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

  if ( (byte_4B17981 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B17981 = 1;
  }
  v4 = 0LL;
  do
  {
    v5 = FSUtility_TypeInfo;
    v6 = v4;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
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
      j_il2cpp_runtime_class_init_0(v5, method);
      fullScreenImages = FSUtility_TypeInfo->static_fields->fullScreenImages;
      if ( !fullScreenImages )
LABEL_13:
        sub_1BCAA3C(v5, method);
    }
    if ( v6 >= (unsigned __int64)fullScreenImages->max_length )
      sub_1BCAA44(v5, method);
    v9 = System_String__op_Equality(fullScreenImages->m_Items[v6], imageName, 0LL);
    v4 = v6 + 1;
  }
  while ( !v9 );
  return v6 < max_length;
}


bool __fastcall FSUtility__IsFullScreenMovie(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 Item_68940932; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  System_String_o *Value; // x19
  unsigned __int64 v16; // x20
  struct System_String_array *legacyMovies; // x8
  char v19; // w8
  struct System_String_array *legacyAspectMovies; // x20
  __int64 v22; // x8
  bool v23; // w21
  unsigned __int64 v24; // x22

  if ( (byte_4B17986 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&FSUtility_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1121/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_22219/*"name"*/, v10, v11);
    byte_4B17986 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, method);
  Item_68940932 = (__int64)System_Text_RegularExpressions_Regex__Match(
                             fileName,
                             (System_String_o *)StringLiteral_1121/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/,
                             0LL);
  if ( !Item_68940932 )
    goto LABEL_32;
  v14 = Item_68940932;
  if ( !System_Text_RegularExpressions_Group__get_Success((System_Text_RegularExpressions_Group_o *)Item_68940932, 0LL) )
  {
LABEL_18:
    v19 = 0;
    return v19 & 1;
  }
  Item_68940932 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 392LL))(
                    v14,
                    *(_QWORD *)(*(_QWORD *)v14 + 400LL));
  if ( !Item_68940932 )
    goto LABEL_32;
  Item_68940932 = (__int64)System_Text_RegularExpressions_GroupCollection__get_Item_68940932(
                             (System_Text_RegularExpressions_GroupCollection_o *)Item_68940932,
                             (System_String_o *)StringLiteral_22219/*"name"*/,
                             0LL);
  if ( !Item_68940932 )
    goto LABEL_32;
  Value = System_Text_RegularExpressions_Capture__get_Value(
            (System_Text_RegularExpressions_Capture_o *)Item_68940932,
            0LL);
  v16 = 0LL;
  while ( 1 )
  {
    Item_68940932 = (__int64)FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v13);
      Item_68940932 = (__int64)FSUtility_TypeInfo;
    }
    legacyMovies = *(struct System_String_array **)(*(_QWORD *)(Item_68940932 + 184) + 48LL);
    if ( !legacyMovies )
      goto LABEL_32;
    if ( (__int64)v16 >= (int)legacyMovies->max_length )
      break;
    if ( !*(_DWORD *)(Item_68940932 + 224) )
    {
      j_il2cpp_runtime_class_init_0(Item_68940932, v13);
      legacyMovies = FSUtility_TypeInfo->static_fields->legacyMovies;
      if ( !legacyMovies )
        goto LABEL_32;
    }
    if ( v16 >= legacyMovies->max_length )
      goto LABEL_33;
    if ( System_String__op_Equality(legacyMovies->m_Items[v16++], Value, 0LL) )
      goto LABEL_18;
  }
  Item_68940932 = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
    Item_68940932 = (__int64)BalanceConfig_TypeInfo;
  }
  legacyAspectMovies = *(struct System_String_array **)(*(_QWORD *)(Item_68940932 + 184) + 840LL);
  if ( !legacyAspectMovies )
  {
    v19 = 1;
    return v19 & 1;
  }
  if ( !*(_DWORD *)(Item_68940932 + 224) )
  {
    j_il2cpp_runtime_class_init_0(Item_68940932, v13);
    legacyAspectMovies = BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
    if ( !legacyAspectMovies )
LABEL_32:
      sub_1BCAA3C(Item_68940932, v13);
  }
  v22 = *(_QWORD *)&legacyAspectMovies->max_length;
  v23 = (int)v22 > 0;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    while ( v24 < (unsigned int)v22 )
    {
      Item_68940932 = System_String__op_Equality(legacyAspectMovies->m_Items[v24], Value, 0LL);
      if ( (Item_68940932 & 1) == 0 )
      {
        LODWORD(v22) = legacyAspectMovies->max_length;
        v23 = (__int64)++v24 < (int)v22;
        if ( (__int64)v24 < (int)v22 )
          continue;
      }
      goto LABEL_30;
    }
LABEL_33:
    sub_1BCAA44(Item_68940932, v13);
  }
LABEL_30:
  v19 = !v23;
  return v19 & 1;
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

  if ( (byte_4B17985 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B17985 = 1;
  }
  v4 = FSUtility_TypeInfo;
  v5 = 0;
  do
  {
    v6 = v5;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
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
      j_il2cpp_runtime_class_init_0(v4, method);
      v4 = FSUtility_TypeInfo;
    }
    v9 = v4->static_fields->notFullScreenNpChrs;
    if ( !v9 )
LABEL_15:
      sub_1BCAA3C(v4, method);
    if ( v6 >= v9->max_length )
      sub_1BCAA44(v4, method);
    v10 = v9->m_Items[v6 + 1] == chrId;
    v5 = v6 + 1;
  }
  while ( !v10 );
  return v6 >= max_length;
}


bool __fastcall FSUtility__IsOverScope(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int32_t width; // w19
  int32_t height; // w0
  __int64 v5; // x1
  FSUtility_c *v6; // x8
  int v7; // w20

  if ( (byte_4B17988 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, v1, v2);
    byte_4B17988 = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v6 = FSUtility_TypeInfo;
  v7 = height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v5);
    v6 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)v7) > v6->static_fields->RATIO_SCOPE;
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
  __int64 v2; // x2
  int32_t width; // w19
  int32_t height; // w0
  __int64 v5; // x1
  FSUtility_c *v6; // x8
  int v7; // w20

  if ( (byte_4B17987 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, v1, v2);
    byte_4B17987 = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v6 = FSUtility_TypeInfo;
  v7 = height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v5);
    v6 = FSUtility_TypeInfo;
  }
  return (float)((float)width / (float)v7) <= v6->static_fields->RATIO_VISTA;
}


void __fastcall FSUtility__LoadAssetData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x19
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  FSUtility_c *v30; // x0
  struct FSUtility_StaticFields *static_fields; // x8
  System_String_o *FS_UTILITY_LIST_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v33; // x21
  __int64 v34; // x1

  if ( (byte_4B1797E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&FSUtility_TypeInfo, v4, v5);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_FSUtility___c__DisplayClass14_0__LoadAssetData_b__0__, v12, v13);
    sub_1BCA7E0(&FSUtility___c__DisplayClass14_0_TypeInfo, v14, v15);
    byte_4B1797E = 1;
  }
  v16 = sub_1BCAA2C(FSUtility___c__DisplayClass14_0_TypeInfo, v1, v2, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !v16 )
    sub_1BCAA3C(Instance, v18);
  *(_QWORD *)(v16 + 16) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)Instance, v19, v20, v21, v22, v23, v24);
  v26 = *(UnityEngine_Object_o **)(v16 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( !UnityEngine_Object__op_Equality(v26, 0LL, 0LL) )
  {
    v30 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v27);
      v30 = FSUtility_TypeInfo;
    }
    static_fields = v30->static_fields;
    static_fields->isBusySetAssetData = 1;
    FS_UTILITY_LIST_PATH = static_fields->FS_UTILITY_LIST_PATH;
    v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28, v29);
    AssetLoader_LoadEndDataHandler___ctor(
      v33,
      (Il2CppObject *)v16,
      Method_FSUtility___c__DisplayClass14_0__LoadAssetData_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v34);
    AssetManager__loadAssetStorage(FS_UTILITY_LIST_PATH, v33, 1, 0LL);
  }
}


void __fastcall FSUtility__ReadFSUtilityList(
        FSUtility_o *this,
        FSUtilityList_o *fsUtilityList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Int32_array *legacyBacks; // x20
  FSUtility_c *v12; // x0
  struct FSUtility_StaticFields *static_fields; // x0
  struct System_String_array *legacyMovies; // x1
  struct FSUtility_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_String_array *fullScreenImages; // x1
  struct FSUtility_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct FSUtilityList_trimBackRatioYChild_array *trimBackRatioY; // x20
  int max_length; // w8
  unsigned int v38; // w22
  FSUtilityList_trimBackRatioYChild_o *v39; // x24
  FSUtility_c *v40; // x0
  struct System_Int32_array *notFullScreenNpChrs; // x19
  struct FSUtility_StaticFields *v42; // x0

  if ( (byte_4B1797F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__Add__, fsUtilityList, method);
    this = (FSUtility_o *)sub_1BCA7E0(&FSUtility_TypeInfo, v9, v10);
    byte_4B1797F = 1;
  }
  if ( !fsUtilityList )
    goto LABEL_18;
  legacyBacks = fsUtilityList->fields.legacyBacks;
  v12 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, fsUtilityList);
    v12 = FSUtility_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->legacyBacks = legacyBacks;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->legacyBacks,
    (int64_t)legacyBacks,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  legacyMovies = fsUtilityList->fields.legacyMovies;
  v15 = FSUtility_TypeInfo->static_fields;
  v15->legacyMovies = legacyMovies;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15->legacyMovies, (int64_t)legacyMovies, v16, v17, v18, v19, v20, v21);
  fullScreenImages = fsUtilityList->fields.fullScreenImages;
  v23 = FSUtility_TypeInfo->static_fields;
  v23->fullScreenImages = fullScreenImages;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v23->fullScreenImages,
    (int64_t)fullScreenImages,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  trimBackRatioY = fsUtilityList->fields.trimBackRatioY;
  if ( !trimBackRatioY )
    goto LABEL_18;
  max_length = trimBackRatioY->max_length;
  if ( max_length >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      if ( v38 >= max_length )
        sub_1BCAA44(this, fsUtilityList);
      this = (FSUtility_o *)FSUtility_TypeInfo;
      v39 = trimBackRatioY->m_Items[v38];
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, fsUtilityList);
        this = (FSUtility_o *)FSUtility_TypeInfo;
      }
      if ( !v39 )
        break;
      this = *(FSUtility_o **)&this[4].fields.m_CancellationTokenSource->fields._disposed;
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_int__float___Add(
        (System_Collections_Generic_Dictionary_int__float__o *)this,
        v39->fields.id,
        v39->fields.offsetY,
        (const MethodInfo_320BD44 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      max_length = trimBackRatioY->max_length;
      if ( (int)++v38 >= max_length )
        goto LABEL_15;
    }
LABEL_18:
    sub_1BCAA3C(this, fsUtilityList);
  }
LABEL_15:
  v40 = FSUtility_TypeInfo;
  notFullScreenNpChrs = fsUtilityList->fields.notFullScreenNpChrs;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, fsUtilityList);
    v40 = FSUtility_TypeInfo;
  }
  v42 = v40->static_fields;
  v42->notFullScreenNpChrs = notFullScreenNpChrs;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v42->notFullScreenNpChrs,
    (int64_t)notFullScreenNpChrs,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall FSUtility__SetUpBackTextureSize(
        ExUITexture_o *backTexture,
        System_String_o *bgName,
        const MethodInfo *method)
{
  _BOOL8 IsFullScreenBack; // x0
  __int64 v6; // x1
  int32_t v7; // w1

  if ( (byte_4B17980 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, bgName, method);
    byte_4B17980 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, bgName);
  IsFullScreenBack = FSUtility__IsFullScreenBack(bgName, (const MethodInfo *)bgName);
  if ( !backTexture )
    sub_1BCAA3C(IsFullScreenBack, v6);
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
  __int64 v6; // x2
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  FSUtility_c *v9; // x0

  v4 = this;
  if ( (byte_4B17990 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_FSUtilityList___, assetData, method);
    this = (FSUtility___c__DisplayClass14_0_o *)sub_1BCA7E0(&FSUtility_TypeInfo, v5, v6);
    byte_4B17990 = 1;
  }
  if ( !assetData
    || (this = (FSUtility___c__DisplayClass14_0_o *)AssetData__GetObject_object_(
                                                      assetData,
                                                      (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_FSUtilityList___),
        !v4->fields.ins) )
  {
    sub_1BCAA3C(this, assetData);
  }
  FSUtility__ReadFSUtilityList((FSUtility_o *)this, (FSUtilityList_o *)this, v7);
  v9 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v8);
    v9 = FSUtility_TypeInfo;
  }
  v9->static_fields->isBusySetAssetData = 0;
}