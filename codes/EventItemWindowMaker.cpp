void __fastcall EventItemWindowMaker___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  _DWORD *v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int v26; // w8
  int64_t v27; // x1
  struct EventItemWindowMaker_StaticFields *v28; // x0
  System_Array_o *v29; // x0
  int64_t v30; // x19
  struct EventItemWindowMaker_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct EventItemWindowMaker_StaticFields *v38; // x8
  System_Array_o *v39; // x0
  int64_t v40; // x19
  struct EventItemWindowMaker_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Array_o *v48; // x0
  int64_t v49; // x19
  struct EventItemWindowMaker_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int v63; // w8
  struct EventItemWindowMaker_StaticFields *v64; // x0
  System_Array_o *v65; // x0
  int64_t v66; // x19
  struct EventItemWindowMaker_StaticFields *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  System_Array_o *v74; // x0
  int64_t v75; // x19
  PartyOrganizationUtility_o *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct EventItemWindowMaker_StaticFields *v83; // x8
  System_RuntimeFieldHandle_o v84; // 0:w1.4
  System_RuntimeFieldHandle_o v85; // 0:w1.4
  System_RuntimeFieldHandle_o v86; // 0:w1.4
  System_RuntimeFieldHandle_o v87; // 0:w1.4
  System_RuntimeFieldHandle_o v88; // 0:w1.4

  if ( (byte_4B12553 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, v1, v2);
    sub_1BCA7E0(&int___TypeInfo, v3, v4);
    sub_1BCA7E0(&float___TypeInfo, v5, v6);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD,
      v7,
      v8);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327,
      v9,
      v10);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF,
      v11,
      v12);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499,
      v13,
      v14);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7,
      v15,
      v16);
    byte_4B12553 = 1;
  }
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT = xmmword_BD21B0;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT = xmmword_BD1E50;
  *(_OWORD *)&static_fields->NORMAL_DEFAULT_COUNT = xmmword_BD35D0;
  *(_QWORD *)&static_fields->MAX_ROWS_NORMAL = 0x300000003LL;
  static_fields->MAX_ROWS_LIMIT_OVER = 4;
  v18 = (_DWORD *)sub_1BCA888(float___TypeInfo, 2LL);
  if ( !v18 )
    goto LABEL_11;
  v26 = v18[6];
  v27 = (int64_t)v18;
  if ( !v26 || (v18[8] = -1027080192, v26 == 1) )
LABEL_10:
    sub_1BCAA44(v18, v27);
  v18[9] = 1120403456;
  v28 = EventItemWindowMaker_TypeInfo->static_fields;
  v28->X_NORMAL_POSITIONS = (struct System_Single_array *)v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&v28->X_NORMAL_POSITIONS, v27, v20, v21, v22, v23, v24, v25);
  v29 = (System_Array_o *)sub_1BCA888(float___TypeInfo, 3LL);
  v84.fields.value = Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327;
  v30 = (int64_t)v29;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v29, v84, 0LL);
  v31 = EventItemWindowMaker_TypeInfo->static_fields;
  v31->Y_NORMAL_POSITIONS = (struct System_Single_array *)v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->Y_NORMAL_POSITIONS, v30, v32, v33, v34, v35, v36, v37);
  v38 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v38->X_NORMAL_ONE_POSITION = 0x426B333300000000LL;
  v38->Y_NORMAL_ONE_POSITION_SHOP = 43.0;
  v39 = (System_Array_o *)sub_1BCA888(float___TypeInfo, 3LL);
  v85.fields.value = Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499;
  v40 = (int64_t)v39;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v39, v85, 0LL);
  v41 = EventItemWindowMaker_TypeInfo->static_fields;
  v41->X_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&v41->X_LIMIT_OVER_POSITIONS, v40, v42, v43, v44, v45, v46, v47);
  v48 = (System_Array_o *)sub_1BCA888(float___TypeInfo, 4LL);
  v86.fields.value = Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7;
  v49 = (int64_t)v48;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v48, v86, 0LL);
  v50 = EventItemWindowMaker_TypeInfo->static_fields;
  v50->Y_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->Y_LIMIT_OVER_POSITIONS, v49, v51, v52, v53, v54, v55, v56);
  EventItemWindowMaker_TypeInfo->static_fields->X_LIMITOVER_ONE_POSITION = -2.0;
  v18 = (_DWORD *)sub_1BCA888(float___TypeInfo, 2LL);
  if ( !v18 )
LABEL_11:
    sub_1BCAA3C(v18, v19);
  v63 = v18[6];
  v27 = (int64_t)v18;
  if ( !v63 )
    goto LABEL_10;
  v18[8] = -1029701632;
  if ( v63 == 1 )
    goto LABEL_10;
  v18[9] = 1117782016;
  v64 = EventItemWindowMaker_TypeInfo->static_fields;
  v64->X_LIMIT_OVER_TWO_POSITIONS = (struct System_Single_array *)v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&v64->X_LIMIT_OVER_TWO_POSITIONS, v27, v57, v58, v59, v60, v61, v62);
  EventItemWindowMaker_TypeInfo->static_fields->Y_LIMIT_OVER_ONE = 51.0;
  v65 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 4LL);
  v87.fields.value = Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF;
  v66 = (int64_t)v65;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v65, v87, 0LL);
  v67 = EventItemWindowMaker_TypeInfo->static_fields;
  v67->NORMAL_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v66;
  sub_1BCA784((PartyOrganizationUtility_o *)&v67->NORMAL_ITEM_BASE_WINDOW_HEIGHT, v66, v68, v69, v70, v71, v72, v73);
  v74 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 5LL);
  v88.fields.value = Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD;
  v75 = (int64_t)v74;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v74, v88, 0LL);
  v76 = (PartyOrganizationUtility_o *)EventItemWindowMaker_TypeInfo->static_fields;
  v76[1].klass = (PartyOrganizationUtility_c *)v75;
  sub_1BCA784(v76 + 1, v75, v77, v78, v79, v80, v81, v82);
  v83 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v83->SCOPE_ITEM_INFO_ADD_HEIGHT = 0x400000021LL;
  v83->X_ITEM_BASE_WINDOW_POSITION = -460;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall EventItemWindowMaker__GetEventItemPosition(
        bool isEventShop,
        int32_t index,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  bool IsLimitOverWindow; // w0
  bool v10; // w24
  bool v11; // w22
  const MethodInfo *v12; // x1
  int MaxColumns; // w23
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int32_t MaxRows; // w24
  float v18; // s8
  unsigned int v19; // w9
  unsigned int v20; // w21
  unsigned int v21; // w26
  __int64 v22; // x1
  int v23; // w23
  EventItemWindowMaker_c *v24; // x0
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  float X_LIMITOVER_ONE_POSITION; // s8
  struct EventItemWindowMaker_StaticFields *v27; // x8
  EventItemWindowMaker_c *v28; // x0
  struct System_Single_array *v29; // x9
  __int64 v30; // x9
  float *p_Y_LIMIT_OVER_ONE; // x8
  struct EventItemWindowMaker_StaticFields *v32; // x9
  struct System_Single_array *X_NORMAL_POSITIONS; // x8
  struct System_Single_array *Y_LIMIT_OVER_POSITIONS; // x9
  struct System_Single_array *X_LIMIT_OVER_POSITIONS; // x9
  struct EventItemWindowMaker_StaticFields *v36; // x9
  float v37; // s1
  float v38; // s2
  float v39; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1254F & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&index, *(_QWORD *)&count);
    byte_4B1254F = 1;
  }
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, *(_QWORD *)&index);
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(
                        count,
                        isForcedAdjustment,
                        *(const MethodInfo **)&count);
  v10 = IsLimitOverWindow;
  v11 = IsLimitOverWindow;
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v12);
  MaxRows = EventItemWindowMaker__GetMaxRows(v10, v14);
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v15, v16);
    byte_4B109C0 = 1;
  }
  v18 = (float)index / (float)MaxColumns;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15);
  v19 = vcvtms_s32_f32(v18);
  v20 = index % MaxColumns;
  if ( floorf(v18) == INFINITY )
    v21 = 0x80000000;
  else
    v21 = v19;
  v23 = MaxRows - EventItemWindowMaker__GetRowCount(count, MaxColumns, v16);
  if ( v11 )
  {
    switch ( count )
    {
      case 3:
        v28 = EventItemWindowMaker_TypeInfo;
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v22);
          v28 = EventItemWindowMaker_TypeInfo;
        }
        static_fields = v28->static_fields;
        X_LIMIT_OVER_POSITIONS = static_fields->X_LIMIT_OVER_POSITIONS;
        if ( !X_LIMIT_OVER_POSITIONS )
          goto LABEL_58;
        break;
      case 2:
        v28 = EventItemWindowMaker_TypeInfo;
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v22);
          v28 = EventItemWindowMaker_TypeInfo;
        }
        static_fields = v28->static_fields;
        X_LIMIT_OVER_POSITIONS = static_fields->X_LIMIT_OVER_TWO_POSITIONS;
        if ( !X_LIMIT_OVER_POSITIONS )
          goto LABEL_58;
        break;
      case 1:
        v24 = EventItemWindowMaker_TypeInfo;
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v22);
          v24 = EventItemWindowMaker_TypeInfo;
        }
        static_fields = v24->static_fields;
        X_LIMITOVER_ONE_POSITION = static_fields->X_LIMITOVER_ONE_POSITION;
        goto LABEL_47;
      default:
        v28 = EventItemWindowMaker_TypeInfo;
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v22);
          v28 = EventItemWindowMaker_TypeInfo;
        }
        v36 = v28->static_fields;
        X_NORMAL_POSITIONS = v36->X_LIMIT_OVER_POSITIONS;
        if ( X_NORMAL_POSITIONS )
        {
          if ( v20 >= X_NORMAL_POSITIONS->max_length )
            goto LABEL_59;
          Y_LIMIT_OVER_POSITIONS = v36->Y_LIMIT_OVER_POSITIONS;
          if ( Y_LIMIT_OVER_POSITIONS )
            goto LABEL_53;
        }
        goto LABEL_58;
    }
    if ( v20 < X_LIMIT_OVER_POSITIONS->max_length )
    {
      X_LIMITOVER_ONE_POSITION = X_LIMIT_OVER_POSITIONS->m_Items[v20 + 1];
LABEL_47:
      p_Y_LIMIT_OVER_ONE = &static_fields->Y_LIMIT_OVER_ONE;
      goto LABEL_55;
    }
LABEL_59:
    sub_1BCAA44(v28, v22);
  }
  if ( count != 2 )
  {
    if ( count != 1 )
    {
      v28 = EventItemWindowMaker_TypeInfo;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v22);
        v28 = EventItemWindowMaker_TypeInfo;
      }
      v32 = v28->static_fields;
      X_NORMAL_POSITIONS = v32->X_NORMAL_POSITIONS;
      if ( X_NORMAL_POSITIONS )
      {
        if ( v20 >= X_NORMAL_POSITIONS->max_length )
          goto LABEL_59;
        Y_LIMIT_OVER_POSITIONS = v32->Y_NORMAL_POSITIONS;
        if ( Y_LIMIT_OVER_POSITIONS )
        {
LABEL_53:
          if ( v23 + v21 < Y_LIMIT_OVER_POSITIONS->max_length )
          {
            X_LIMITOVER_ONE_POSITION = X_NORMAL_POSITIONS->m_Items[v20 + 1];
            p_Y_LIMIT_OVER_ONE = &Y_LIMIT_OVER_POSITIONS->m_Items[v23 + v21 + 1];
            goto LABEL_55;
          }
          goto LABEL_59;
        }
      }
LABEL_58:
      sub_1BCAA3C(v28, v22);
    }
    if ( EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      v27 = EventItemWindowMaker_TypeInfo->static_fields;
      X_LIMITOVER_ONE_POSITION = v27->X_NORMAL_ONE_POSITION;
      goto LABEL_29;
    }
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v22);
    v28 = EventItemWindowMaker_TypeInfo;
    v27 = EventItemWindowMaker_TypeInfo->static_fields;
    X_LIMITOVER_ONE_POSITION = v27->X_NORMAL_ONE_POSITION;
    if ( EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      goto LABEL_29;
LABEL_28:
    j_il2cpp_runtime_class_init_0(v28, v22);
    v27 = EventItemWindowMaker_TypeInfo->static_fields;
    goto LABEL_29;
  }
  v28 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v22);
    v28 = EventItemWindowMaker_TypeInfo;
  }
  v27 = v28->static_fields;
  v29 = v27->X_NORMAL_POSITIONS;
  if ( !v29 )
    goto LABEL_58;
  if ( v20 >= v29->max_length )
    goto LABEL_59;
  X_LIMITOVER_ONE_POSITION = v29->m_Items[v20 + 1];
  if ( !v28->_2.cctor_finished )
    goto LABEL_28;
LABEL_29:
  v30 = 88LL;
  if ( isEventShop )
    v30 = 84LL;
  p_Y_LIMIT_OVER_ONE = (float *)((char *)&v27->LIMIT_OVER_WINDOW_BASE_HEIGHT + v30);
LABEL_55:
  v37 = *p_Y_LIMIT_OVER_ONE;
  v38 = 0.0;
  v39 = X_LIMITOVER_ONE_POSITION;
  result.fields.z = v38;
  result.fields.y = v37;
  result.fields.x = v39;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventItemWindowMaker__GetEventItemWindowHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  int32_t WindowBaseHeight; // w20
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  int32_t WindowAddHeight; // w22
  EventItemWindowMaker_c *v11; // x0
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  bool v13; // w21
  struct EventItemWindowMaker_StaticFields *v14; // x8
  int32_t v16; // w8

  if ( (byte_4B1254A & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count, isForcedAdjustment);
    byte_4B1254A = 1;
  }
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
  WindowBaseHeight = EventItemWindowMaker__GetWindowBaseHeight(isEventShop, count, isForcedAdjustment, method);
  WindowAddHeight = EventItemWindowMaker__GetWindowAddHeight(0, count, isForcedAdjustment, v8);
  v11 = EventItemWindowMaker_TypeInfo;
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  v13 = static_fields->NORMAL_MAX_COUNT < count || isForcedAdjustment;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v9);
    v11 = EventItemWindowMaker_TypeInfo;
    static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    if ( v13 )
      goto LABEL_7;
LABEL_19:
    if ( static_fields->NORMAL_DEFAULT_COUNT >= count )
      v16 = 0;
    else
      v16 = WindowAddHeight;
    return v16 + WindowBaseHeight;
  }
  if ( !v13 )
    goto LABEL_19;
LABEL_7:
  if ( static_fields->NORMAL_MAX_COUNT >= count )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, v9);
      v11 = EventItemWindowMaker_TypeInfo;
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    WindowBaseHeight -= static_fields->LIMIT_OVER_WINDOW_REDUCE_HEIGHT;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11, v9);
    v11 = EventItemWindowMaker_TypeInfo;
  }
  v14 = v11->static_fields;
  if ( v14->LIMIT_OVER_DEFAULT_COUNT < count )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, v9);
      v14 = EventItemWindowMaker_TypeInfo->static_fields;
    }
    WindowBaseHeight += v14->LIMIT_OVER_WINDOW_ADD_HEIGHT;
  }
  return WindowBaseHeight;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventItemWindowMaker__GetIsLimitOverWindow(
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v5; // x0

  if ( (byte_4B12550 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, isForcedAdjustment, method);
    byte_4B12550 = 1;
  }
  v5 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, isForcedAdjustment);
    v5 = EventItemWindowMaker_TypeInfo;
  }
  return v5->static_fields->NORMAL_MAX_COUNT < count || isForcedAdjustment;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventItemWindowMaker__GetItemBaseWindowHeight(
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  bool v7; // w21
  bool IsLimitOverWindow; // w0
  const MethodInfo *v9; // x1
  int32_t MaxColumns; // w0
  const MethodInfo *v11; // x2
  int32_t RowCount; // w19
  const MethodInfo *v13; // x2
  _BOOL8 v14; // x0
  __int64 v15; // x1
  EventItemWindowMaker_c *v16; // x8
  bool v17; // w20
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  struct System_Int32_array *LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT; // x8
  int32_t v20; // w19
  __int64 v21; // x1
  int32_t SCOPE_ITEM_INFO_ADD_HEIGHT; // w8
  EventItemWindowMaker_c *v23; // x0

  if ( (byte_4B1254C & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, isForcedAdjustment, method);
    sub_1BCA7E0(&FSUtility_TypeInfo, v5, v6);
    byte_4B1254C = 1;
  }
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, isForcedAdjustment);
  v7 = isForcedAdjustment;
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(count, isForcedAdjustment, method);
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v9);
  RowCount = EventItemWindowMaker__GetRowCount(count, MaxColumns, v11);
  v14 = EventItemWindowMaker__GetIsLimitOverWindow(count, v7, v13);
  v16 = EventItemWindowMaker_TypeInfo;
  v17 = v14;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v15);
    v16 = EventItemWindowMaker_TypeInfo;
  }
  static_fields = v16->static_fields;
  if ( v17 )
  {
    LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = static_fields->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT;
    if ( !LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT )
      goto LABEL_9;
  }
  else
  {
    LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = static_fields->NORMAL_ITEM_BASE_WINDOW_HEIGHT;
    if ( !LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT )
LABEL_9:
      sub_1BCAA3C(v14, v15);
  }
  if ( RowCount >= LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->max_length )
    sub_1BCAA44(v14, v15);
  v20 = LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->m_Items[RowCount + 1];
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v15);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    SCOPE_ITEM_INFO_ADD_HEIGHT = 0;
  }
  else
  {
    v23 = EventItemWindowMaker_TypeInfo;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v21);
      v23 = EventItemWindowMaker_TypeInfo;
    }
    SCOPE_ITEM_INFO_ADD_HEIGHT = v23->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT;
  }
  return SCOPE_ITEM_INFO_ADD_HEIGHT + v20;
}


float __fastcall EventItemWindowMaker__GetItemBaseWindowX(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  EventItemWindowMaker_c *v5; // x0
  int X_ITEM_BASE_WINDOW_POSITION; // w19

  if ( (byte_4B1254B & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, v1, v2);
    sub_1BCA7E0(&FSUtility_TypeInfo, v3, v4);
    byte_4B1254B = 1;
  }
  v5 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v1);
    v5 = EventItemWindowMaker_TypeInfo;
  }
  X_ITEM_BASE_WINDOW_POSITION = v5->static_fields->X_ITEM_BASE_WINDOW_POSITION;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v1);
  return (float)X_ITEM_BASE_WINDOW_POSITION - FSUtility__GetOffsetX(68.0, 1, 0LL);
}


int32_t __fastcall EventItemWindowMaker__GetMaxColumns(bool isLimitOverWindow, const MethodInfo *method)
{
  __int64 v2; // x2
  EventItemWindowMaker_c *v4; // x0
  __int64 v5; // x9

  if ( (byte_4B12551 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, method, v2);
    byte_4B12551 = 1;
  }
  v4 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, method);
    v4 = EventItemWindowMaker_TypeInfo;
  }
  v5 = 44LL;
  if ( isLimitOverWindow )
    v5 = 52LL;
  return *(int32_t *)((char *)&v4->static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT + v5);
}


int32_t __fastcall EventItemWindowMaker__GetMaxRows(bool isLimitOverWindow, const MethodInfo *method)
{
  __int64 v2; // x2
  EventItemWindowMaker_c *v4; // x0
  __int64 v5; // x9

  if ( (byte_4B12552 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, method, v2);
    byte_4B12552 = 1;
  }
  v4 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, method);
    v4 = EventItemWindowMaker_TypeInfo;
  }
  v5 = 48LL;
  if ( isLimitOverWindow )
    v5 = 56LL;
  return *(int32_t *)((char *)&v4->static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT + v5);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall EventItemWindowMaker__GetPanelPosition(
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  float z; // s8
  __int64 v5; // x1
  __int64 v6; // x2
  EventItemWindowMaker_c *v7; // x0
  int32x2_t v8; // d9
  __int64 v9; // x1
  unsigned __int64 v10; // d1
  EventItemWindowMaker_c *v11; // x0
  float v12; // s2
  float v13; // s0
  float32x2_t v14; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  if ( (byte_4B12549 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, v2, v3);
    sub_1BCA7E0(&FSUtility_TypeInfo, v5, v6);
    byte_4B12549 = 1;
  }
  v7 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v2);
    v7 = EventItemWindowMaker_TypeInfo;
  }
  v8.n64_u64[0] = vrev64_s32(*(int32x2_t *)&v7->static_fields->X_EVENT_ITEM_PANEL_POSITION).n64_u64[0];
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v2);
  v14.n64_u64[0] = vcvt_f32_s32(v8).n64_u64[0];
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v10 = v14.n64_u64[0];
  }
  else
  {
    v11 = EventItemWindowMaker_TypeInfo;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v9);
      v11 = EventItemWindowMaker_TypeInfo;
    }
    z = z + 0.0;
    v10 = vadd_f32(v14, vcvt_f32_s32(*(int32x2_t *)&v11->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT)).n64_u64[0];
  }
  v12 = z;
  v13 = *((float *)&v10 + 1);
  result.fields.y = *(float *)&v10;
  result.fields.z = v12;
  result.fields.x = v13;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventItemWindowMaker__GetRowCount(int32_t count, int32_t maxColumns, const MethodInfo *method)
{
  float v5; // s0
  int32_t v6; // w8

  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, *(_QWORD *)&maxColumns, method);
    byte_4B1103A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&maxColumns);
  v5 = (float)count / (float)maxColumns;
  v6 = vcvtps_s32_f32(v5);
  if ( ceilf(v5) == INFINITY )
    return 0x80000000;
  else
    return v6;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventItemWindowMaker__GetWindowAddHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  int32_t NORMAL_MAX_COUNT; // w22
  __int64 v8; // x1
  __int64 v9; // x9

  if ( (byte_4B1254D & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count, isForcedAdjustment);
    byte_4B1254D = 1;
  }
  if ( EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    NORMAL_MAX_COUNT = static_fields->NORMAL_MAX_COUNT;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    NORMAL_MAX_COUNT = static_fields->NORMAL_MAX_COUNT;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v8);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
  }
  v9 = 12LL;
  if ( NORMAL_MAX_COUNT < count || isForcedAdjustment )
    v9 = 16LL;
  return *(int32_t *)((char *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT + v9);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventItemWindowMaker__GetWindowBaseHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v7; // x0
  uint32_t cctor_finished; // w9
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  bool v10; // w20

  if ( (byte_4B1254E & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count, isForcedAdjustment);
    byte_4B1254E = 1;
  }
  v7 = EventItemWindowMaker_TypeInfo;
  cctor_finished = EventItemWindowMaker_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    v7 = EventItemWindowMaker_TypeInfo;
    cctor_finished = EventItemWindowMaker_TypeInfo->_2.cctor_finished;
  }
  static_fields = v7->static_fields;
  v10 = static_fields->NORMAL_MAX_COUNT < count || isForcedAdjustment;
  if ( cctor_finished )
  {
    if ( v10 )
      return static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&count);
    static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    if ( v10 )
      return static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT;
  }
  if ( isEventShop )
    static_fields = (struct EventItemWindowMaker_StaticFields *)((char *)static_fields + 8);
  else
    static_fields = (struct EventItemWindowMaker_StaticFields *)((char *)static_fields + 4);
  return static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT;
}