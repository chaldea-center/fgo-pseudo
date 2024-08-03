void __fastcall FSUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v14; // w3
  __int64 v15; // x0
  struct FSUtility_StaticFields *v16; // x8
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_int__float__o *v21; // x19
  struct FSUtility_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x0
  struct FSUtility_StaticFields *v26; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x0
  struct FSUtility_StaticFields *v30; // x8
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x0
  struct FSUtility_StaticFields *v34; // x8
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_49FDA82 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v4);
    sub_1B640C8(&FSUtility_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&string___TypeInfo, v7);
    sub_1B640C8(&StringLiteral_6832/*"FullScreen/FSUtilityList"*/, v8);
    byte_49FDA82 = 1;
  }
  static_fields = FSUtility_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RATIO_VISTA = 0x4015555540000000LL;
  v10 = StringLiteral_6832/*"FullScreen/FSUtilityList"*/;
  static_fields->FS_UTILITY_LIST_PATH = (struct System_String_o *)StringLiteral_6832/*"FullScreen/FSUtilityList"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->FS_UTILITY_LIST_PATH, v10, v2, v3);
  v11 = sub_1B64170(int___TypeInfo, 0LL);
  v12 = FSUtility_TypeInfo->static_fields;
  v12->legacyBacks = (struct System_Int32_array *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->legacyBacks, v11, v13, v14);
  v15 = sub_1B64170(string___TypeInfo, 0LL);
  v16 = FSUtility_TypeInfo->static_fields;
  v16->fullScreenImages = (struct System_String_array *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->fullScreenImages, v15, v17, v18);
  v21 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__float__TypeInfo,
                                                                 v19,
                                                                 v20);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v21,
    (const MethodInfo_3128EE8 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  v22 = FSUtility_TypeInfo->static_fields;
  v22->trimBackRatioY = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->trimBackRatioY, (int32_t)v21, v23, v24);
  v25 = sub_1B64170(string___TypeInfo, 0LL);
  v26 = FSUtility_TypeInfo->static_fields;
  v26->legacyMovies = (struct System_String_array *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->legacyMovies, v25, v27, v28);
  v29 = sub_1B64170(int___TypeInfo, 0LL);
  v30 = FSUtility_TypeInfo->static_fields;
  v30->fullScreenNpChrs = (struct System_Int32_array *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fullScreenNpChrs, v29, v31, v32);
  v33 = sub_1B64170(int___TypeInfo, 0LL);
  v34 = FSUtility_TypeInfo->static_fields;
  v34->fullScreenNpSeqIds = (struct System_Int32_array *)v33;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->fullScreenNpSeqIds, v33, v35, v36);
}


void __fastcall FSUtility___ctor(FSUtility_o *this, const MethodInfo *method)
{
  if ( (byte_49FDA81 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_FSUtility___ctor__, method);
    byte_49FDA81 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_FSUtility___ctor__);
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

  if ( (byte_49FDA80 & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, v1);
    byte_49FDA80 = 1;
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

  if ( (byte_49FDA7F & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, calcNotch);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FDA7F = 1;
  }
  if ( !byte_49F700A )
  {
    sub_1B640C8(&UnityEngine_Vector2_TypeInfo, calcNotch);
    byte_49F700A = 1;
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
        sub_1B64324(v10);
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
  if ( (byte_49FDA77 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v3);
    sub_1B640C8(&FSUtility_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_3112/*"Back/back"*/, v5);
    fileName = (System_String_o *)sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FDA77 = 1;
  }
  result = -1;
  if ( !v2 )
    goto LABEL_14;
  v7 = System_String__Replace_61395016(
         v2,
         (System_String_o *)StringLiteral_3112/*"Back/back"*/,
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
           (const MethodInfo_3129AAC *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
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
                 (const MethodInfo_3129818 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
LABEL_14:
      sub_1B64324(fileName);
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

  if ( (byte_49FDA7E & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49FDA7E = 1;
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

  if ( (byte_49FDA7C & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, v2);
    byte_49FDA7C = 1;
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

  if ( (byte_49FDA7D & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49FDA7D = 1;
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

  if ( (byte_49FDA6F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v2);
    byte_49FDA6F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B64324(v4);
    FSUtility__InitializeLocal((FSUtility_o *)Instance, v5);
  }
}


void __fastcall FSUtility__InitializeLocal(FSUtility_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *FSUtilityList; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49FDA70 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FDA70 = 1;
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

  if ( (byte_49FDA6E & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, v1);
    byte_49FDA6E = 1;
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
  if ( (byte_49FDA75 & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    sub_1B640C8(&StringLiteral_3112/*"Back/back"*/, v3);
    fileName = (System_String_o *)sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FDA75 = 1;
  }
  result = -1;
  if ( !v2 )
    sub_1B64324(fileName);
  v5 = System_String__Replace_61395016(
         v2,
         (System_String_o *)StringLiteral_3112/*"Back/back"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  if ( System_Int32__TryParse(v5, &result, 0LL) )
  {
    v7 = result;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    return FSUtility__IsFullScreenBack_40693936(v7, v6);
  }
  else
  {
    return 0;
  }
}


bool __fastcall FSUtility__IsFullScreenBack_40693936(int32_t id, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  signed int v4; // w8
  signed int v5; // w21
  struct System_Int32_array *legacyBacks; // x8
  signed int max_length; // w22
  struct System_Int32_array *v8; // x8
  bool v9; // zf

  if ( (byte_49FDA76 & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49FDA76 = 1;
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
      sub_1B64324(v3);
    if ( v5 >= v8->max_length )
      sub_1B6432C(v3, method);
    v9 = v8->m_Items[v5 + 1] == id;
    v4 = v5 + 1;
  }
  while ( !v9 );
  return v5 >= max_length;
}


bool __fastcall FSUtility__IsFullScreenImage(System_String_o *imageName, const MethodInfo *method)
{
  signed __int64 v3; // x8
  FSUtility_c *v4; // x0
  signed __int64 v5; // x21
  struct System_String_array *fullScreenImages; // x8
  signed __int64 max_length; // x22
  bool v8; // w0

  if ( (byte_49FDA74 & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49FDA74 = 1;
  }
  v3 = 0LL;
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
    max_length = (int)fullScreenImages->max_length;
    if ( v5 >= max_length )
      return v5 < max_length;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      fullScreenImages = FSUtility_TypeInfo->static_fields->fullScreenImages;
      if ( !fullScreenImages )
LABEL_13:
        sub_1B64324(v4);
    }
    if ( v5 >= (unsigned __int64)fullScreenImages->max_length )
      sub_1B6432C(v4, method);
    v8 = System_String__op_Equality(fullScreenImages->m_Items[v5], imageName, 0LL);
    v3 = v5 + 1;
  }
  while ( !v8 );
  return v5 < max_length;
}


bool __fastcall FSUtility__IsFullScreenMovie(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 Item_67914656; // x0
  __int64 v8; // x19
  __int64 v9; // x1
  System_String_o *Value; // x19
  unsigned __int64 v11; // x20
  struct System_String_array *legacyMovies; // x8
  char v14; // w8
  struct System_String_array *legacyAspectMovies; // x20
  __int64 v17; // x8
  bool v18; // w21
  unsigned __int64 v19; // x22

  if ( (byte_49FDA79 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&FSUtility_TypeInfo, v3);
    sub_1B640C8(&System_Text_RegularExpressions_Regex_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_1125/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/, v5);
    sub_1B640C8(&StringLiteral_21895/*"name"*/, v6);
    byte_49FDA79 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  Item_67914656 = (__int64)System_Text_RegularExpressions_Regex__Match(
                             fileName,
                             (System_String_o *)StringLiteral_1125/*"/(?<name>[^/]*?)\\.[Uu][Ss][Mm]$"*/,
                             0LL);
  if ( !Item_67914656 )
    goto LABEL_32;
  v8 = Item_67914656;
  if ( !System_Text_RegularExpressions_Group__get_Success((System_Text_RegularExpressions_Group_o *)Item_67914656, 0LL) )
  {
LABEL_18:
    v14 = 0;
    return v14 & 1;
  }
  Item_67914656 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 392LL))(
                    v8,
                    *(_QWORD *)(*(_QWORD *)v8 + 400LL));
  if ( !Item_67914656 )
    goto LABEL_32;
  Item_67914656 = (__int64)System_Text_RegularExpressions_GroupCollection__get_Item_67914656(
                             (System_Text_RegularExpressions_GroupCollection_o *)Item_67914656,
                             (System_String_o *)StringLiteral_21895/*"name"*/,
                             0LL);
  if ( !Item_67914656 )
    goto LABEL_32;
  Value = System_Text_RegularExpressions_Capture__get_Value(
            (System_Text_RegularExpressions_Capture_o *)Item_67914656,
            0LL);
  v11 = 0LL;
  while ( 1 )
  {
    Item_67914656 = (__int64)FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      Item_67914656 = (__int64)FSUtility_TypeInfo;
    }
    legacyMovies = *(struct System_String_array **)(*(_QWORD *)(Item_67914656 + 184) + 48LL);
    if ( !legacyMovies )
      goto LABEL_32;
    if ( (__int64)v11 >= (int)legacyMovies->max_length )
      break;
    if ( !*(_DWORD *)(Item_67914656 + 224) )
    {
      j_il2cpp_runtime_class_init_0(Item_67914656);
      legacyMovies = FSUtility_TypeInfo->static_fields->legacyMovies;
      if ( !legacyMovies )
        goto LABEL_32;
    }
    if ( v11 >= legacyMovies->max_length )
      goto LABEL_33;
    if ( System_String__op_Equality(legacyMovies->m_Items[v11++], Value, 0LL) )
      goto LABEL_18;
  }
  Item_67914656 = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Item_67914656 = (__int64)BalanceConfig_TypeInfo;
  }
  legacyAspectMovies = *(struct System_String_array **)(*(_QWORD *)(Item_67914656 + 184) + 832LL);
  if ( !legacyAspectMovies )
  {
    v14 = 1;
    return v14 & 1;
  }
  if ( !*(_DWORD *)(Item_67914656 + 224) )
  {
    j_il2cpp_runtime_class_init_0(Item_67914656);
    legacyAspectMovies = BalanceConfig_TypeInfo->static_fields->legacyAspectMovies;
    if ( !legacyAspectMovies )
LABEL_32:
      sub_1B64324(Item_67914656);
  }
  v17 = *(_QWORD *)&legacyAspectMovies->max_length;
  v18 = (int)v17 > 0;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    while ( v19 < (unsigned int)v17 )
    {
      Item_67914656 = System_String__op_Equality(legacyAspectMovies->m_Items[v19], Value, 0LL);
      if ( (Item_67914656 & 1) == 0 )
      {
        LODWORD(v17) = legacyAspectMovies->max_length;
        v18 = (__int64)++v19 < (int)v17;
        if ( (__int64)v19 < (int)v17 )
          continue;
      }
      goto LABEL_30;
    }
LABEL_33:
    sub_1B6432C(Item_67914656, v9);
  }
LABEL_30:
  v14 = !v18;
  return v14 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FSUtility__IsFullScreenNP(int32_t chrId, int32_t seqId, const MethodInfo *method)
{
  __int64 v5; // x1
  _DWORD *v6; // x0
  unsigned int v7; // w22
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
  bool v19; // w20
  unsigned int v21; // w22
  __int64 v22; // x8
  int v23; // w8
  __int64 v24; // x8
  int v25; // w8

  if ( (byte_49FDA78 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&seqId);
    sub_1B640C8(&FSUtility_TypeInfo, v5);
    byte_49FDA78 = 1;
  }
  v6 = FSUtility_TypeInfo;
  v7 = 0;
  do
  {
    if ( !v6[56] )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FSUtility_TypeInfo;
    }
    v8 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 56LL);
    if ( !v8 )
      goto LABEL_55;
    if ( (signed int)v7 >= *(_DWORD *)(v8 + 24) )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( !v6[56] )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = FSUtility_TypeInfo;
        }
        v12 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 64LL);
        if ( !v12 )
          goto LABEL_55;
        if ( (signed int)v11 >= *(_DWORD *)(v12 + 24) )
          break;
        if ( !v6[56] )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = FSUtility_TypeInfo;
        }
        v13 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 64LL);
        if ( !v13 )
          goto LABEL_55;
        if ( v11 >= *(_DWORD *)(v13 + 24) )
          goto LABEL_56;
        v14 = *(_DWORD *)(v13 + 4LL * (int)v11++ + 32);
        if ( v14 == seqId )
          return 1;
      }
      v6 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v6 = BalanceConfig_TypeInfo;
      }
      if ( *(_QWORD *)(*((_QWORD *)v6 + 23) + 840LL) )
      {
        v15 = 0;
        while ( 1 )
        {
          if ( !v6[56] )
          {
            j_il2cpp_runtime_class_init_0(v6);
            v6 = BalanceConfig_TypeInfo;
          }
          v16 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 840LL);
          if ( !v16 )
            break;
          if ( (signed int)v15 >= *(_DWORD *)(v16 + 24) )
            goto LABEL_40;
          if ( !v6[56] )
          {
            j_il2cpp_runtime_class_init_0(v6);
            v6 = BalanceConfig_TypeInfo;
          }
          v17 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 840LL);
          if ( !v17 )
            break;
          if ( v15 >= *(_DWORD *)(v17 + 24) )
            goto LABEL_56;
          v18 = *(_DWORD *)(v17 + 4LL * (int)v15++ + 32);
          if ( v18 == chrId )
            return 1;
        }
      }
      else
      {
LABEL_40:
        if ( !v6[56] )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = BalanceConfig_TypeInfo;
        }
        if ( !*(_QWORD *)(*((_QWORD *)v6 + 23) + 848LL) )
          return 0;
        v21 = 0;
        while ( 1 )
        {
          if ( !v6[56] )
          {
            j_il2cpp_runtime_class_init_0(v6);
            v6 = BalanceConfig_TypeInfo;
          }
          v22 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 848LL);
          if ( !v22 )
            break;
          v23 = *(_DWORD *)(v22 + 24);
          v19 = (int)v21 < v23;
          if ( (int)v21 >= v23 )
            return v19;
          if ( !v6[56] )
          {
            j_il2cpp_runtime_class_init_0(v6);
            v6 = BalanceConfig_TypeInfo;
          }
          v24 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 848LL);
          if ( !v24 )
            break;
          if ( v21 >= *(_DWORD *)(v24 + 24) )
            goto LABEL_56;
          v25 = *(_DWORD *)(v24 + 4LL * (int)v21++ + 32);
          if ( v25 == seqId )
            return v19;
        }
      }
LABEL_55:
      sub_1B64324(v6);
    }
    if ( !v6[56] )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FSUtility_TypeInfo;
    }
    v9 = *(_QWORD *)(*((_QWORD *)v6 + 23) + 56LL);
    if ( !v9 )
      goto LABEL_55;
    if ( v7 >= *(_DWORD *)(v9 + 24) )
LABEL_56:
      sub_1B6432C(v6, *(_QWORD *)&seqId);
    v10 = *(_DWORD *)(v9 + 4LL * (int)v7++ + 32);
  }
  while ( v10 != chrId );
  return 1;
}


bool __fastcall FSUtility__IsOverScope(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t width; // w19
  int32_t height; // w0
  FSUtility_c *v4; // x8
  int v5; // w20

  if ( (byte_49FDA7B & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, v1);
    byte_49FDA7B = 1;
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

  if ( (byte_49FDA7A & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, v1);
    byte_49FDA7A = 1;
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  Il2CppObject *Instance; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  FSUtility_c *v16; // x0
  struct FSUtility_StaticFields *static_fields; // x8
  System_String_o *FS_UTILITY_LIST_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_49FDA71 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, v1);
    sub_1B640C8(&FSUtility_TypeInfo, v3);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_FSUtility__get_Instance__, v6);
    sub_1B640C8(&Method_FSUtility___c__DisplayClass15_0__LoadAssetData_b__0__, v7);
    sub_1B640C8(&FSUtility___c__DisplayClass15_0_TypeInfo, v8);
    byte_49FDA71 = 1;
  }
  v9 = sub_1B64314(FSUtility___c__DisplayClass15_0_TypeInfo, v1, v2);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_FSUtility__get_Instance__);
  if ( !v9 )
    sub_1B64324(Instance);
  *(_QWORD *)(v9 + 16) = Instance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)Instance, v11, v12);
  v13 = *(UnityEngine_Object_o **)(v9 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v13, 0LL, 0LL) )
  {
    v16 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      v16 = FSUtility_TypeInfo;
    }
    static_fields = v16->static_fields;
    static_fields->isBusySetAssetData = 1;
    FS_UTILITY_LIST_PATH = static_fields->FS_UTILITY_LIST_PATH;
    v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
    AssetLoader_LoadEndDataHandler___ctor(
      v19,
      (Il2CppObject *)v9,
      Method_FSUtility___c__DisplayClass15_0__LoadAssetData_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(FS_UTILITY_LIST_PATH, v19, 1, 0LL);
  }
}


void __fastcall FSUtility__ReadFSUtilityList(
        FSUtility_o *this,
        FSUtilityList_o *fsUtilityList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v5; // x1
  struct System_Int32_array *legacyBacks; // x20
  FSUtility_c *v7; // x0
  struct FSUtility_StaticFields *static_fields; // x0
  struct System_String_array *legacyMovies; // x1
  struct FSUtility_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_String_array *fullScreenImages; // x1
  struct FSUtility_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  struct FSUtilityList_trimBackRatioYChild_array *trimBackRatioY; // x20
  int max_length; // w8
  unsigned int v22; // w22
  FSUtilityList_trimBackRatioYChild_o *v23; // x24
  FSUtility_c *v24; // x0
  struct System_Int32_array *fullScreenNpChrs; // x20
  struct FSUtility_StaticFields *v26; // x0
  struct System_Int32_array *fullScreenNpSeqIds; // x1
  struct FSUtility_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_49FDA72 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__float__Add__, fsUtilityList);
    this = (FSUtility_o *)sub_1B640C8(&FSUtility_TypeInfo, v5);
    byte_49FDA72 = 1;
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->legacyBacks,
    (int32_t)legacyBacks,
    (int32_t)method,
    v3);
  legacyMovies = fsUtilityList->fields.legacyMovies;
  v10 = FSUtility_TypeInfo->static_fields;
  v10->legacyMovies = legacyMovies;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->legacyMovies, (int32_t)legacyMovies, v11, v12);
  fullScreenImages = fsUtilityList->fields.fullScreenImages;
  v14 = FSUtility_TypeInfo->static_fields;
  v14->fullScreenImages = fullScreenImages;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->fullScreenImages, (int32_t)fullScreenImages, v15, v16);
  trimBackRatioY = fsUtilityList->fields.trimBackRatioY;
  if ( !trimBackRatioY )
    goto LABEL_18;
  max_length = trimBackRatioY->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1B6432C(this, v17);
      this = (FSUtility_o *)FSUtility_TypeInfo;
      v23 = trimBackRatioY->m_Items[v22];
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (FSUtility_o *)FSUtility_TypeInfo;
      }
      if ( !v23 )
        break;
      this = *(FSUtility_o **)&this[4].fields.m_CancellationTokenSource->fields._disposed;
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_int__float___Add(
        (System_Collections_Generic_Dictionary_int__float__o *)this,
        v23->fields.id,
        v23->fields.offsetY,
        (const MethodInfo_31298B4 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      max_length = trimBackRatioY->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_15;
    }
LABEL_18:
    sub_1B64324(this);
  }
LABEL_15:
  v24 = FSUtility_TypeInfo;
  fullScreenNpChrs = fsUtilityList->fields.fullScreenNpChrs;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v24 = FSUtility_TypeInfo;
  }
  v26 = v24->static_fields;
  v26->fullScreenNpChrs = fullScreenNpChrs;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->fullScreenNpChrs, (int32_t)fullScreenNpChrs, v18, v19);
  fullScreenNpSeqIds = fsUtilityList->fields.fullScreenNpSeqIds;
  v28 = FSUtility_TypeInfo->static_fields;
  v28->fullScreenNpSeqIds = fullScreenNpSeqIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28->fullScreenNpSeqIds, (int32_t)fullScreenNpSeqIds, v29, v30);
}


void __fastcall FSUtility__SetUpBackTextureSize(
        ExUITexture_o *backTexture,
        System_String_o *bgName,
        const MethodInfo *method)
{
  _BOOL8 IsFullScreenBack; // x0
  int32_t v6; // w1

  if ( (byte_49FDA73 & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, bgName);
    byte_49FDA73 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsFullScreenBack = FSUtility__IsFullScreenBack(bgName, (const MethodInfo *)bgName);
  if ( !backTexture )
    sub_1B64324(IsFullScreenBack);
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
  const MethodInfo *v6; // x2
  FSUtility_c *v7; // x0

  v4 = this;
  if ( (byte_49FDA83 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_FSUtilityList___, assetData);
    this = (FSUtility___c__DisplayClass15_0_o *)sub_1B640C8(&FSUtility_TypeInfo, v5);
    byte_49FDA83 = 1;
  }
  if ( !assetData
    || (this = (FSUtility___c__DisplayClass15_0_o *)AssetData__GetObject_object_(
                                                      assetData,
                                                      (const MethodInfo_2E1B914 *)Method_AssetData_GetObject_FSUtilityList___),
        !v4->fields.ins) )
  {
    sub_1B64324(this);
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