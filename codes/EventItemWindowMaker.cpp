void EventItemWindowMaker___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int v11; // w8
  __int64 v12; // x1
  struct EventItemWindowMaker_StaticFields *v13; // x0
  System_Array_o *v14; // x19
  struct EventItemWindowMaker_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppClass *v22; // x0
  struct EventItemWindowMaker_StaticFields *v23; // x8
  System_Array_o *v24; // x19
  struct EventItemWindowMaker_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Array_o *v32; // x19
  struct EventItemWindowMaker_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppClass *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int v47; // w8
  __int64 v48; // x1
  struct EventItemWindowMaker_StaticFields *v49; // x0
  Il2CppClass *v50; // x0
  System_Array_o *v51; // x19
  struct EventItemWindowMaker_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Array_o *v59; // x19
  struct EventItemWindowMaker_StaticFields *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct EventItemWindowMaker_StaticFields *v67; // x8

  if ( (byte_596C658 & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD);
    sub_2213A60(&Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327);
    sub_2213A60(&Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF);
    sub_2213A60(&Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499);
    sub_2213A60(&Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7);
    byte_596C658 = 1;
  }
  v1 = float___TypeInfo;
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT = xmmword_E9C100;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT = xmmword_E9C870;
  *(_OWORD *)&static_fields->NORMAL_DEFAULT_COUNT = xmmword_E9D7F0;
  static_fields->MAX_ROWS_LIMIT_OVER = 4;
  *(_QWORD *)&static_fields->MAX_ROWS_NORMAL = 0x300000003LL;
  v3 = sub_2213B20(v1, 2);
  if ( !v3 )
    goto LABEL_11;
  v11 = *(_DWORD *)(v3 + 24);
  v12 = v3;
  if ( !v11 || (*(_DWORD *)(v3 + 32) = -1027080192, v11 == 1) )
LABEL_10:
    sub_2213CE4(v3);
  v13 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_DWORD *)(v12 + 36) = 1120403456;
  v13->X_NORMAL_POSITIONS = (struct System_Single_array *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->X_NORMAL_POSITIONS, v12, v5, v6, v7, v8, v9, v10);
  v14 = (System_Array_o *)sub_2213B20(float___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v14,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327,
    0);
  v15 = EventItemWindowMaker_TypeInfo->static_fields;
  v15->Y_NORMAL_POSITIONS = (struct System_Single_array *)v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->Y_NORMAL_POSITIONS, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  v22 = float___TypeInfo;
  v23 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v23->X_NORMAL_ONE_POSITION = 0x426B333300000000LL;
  v23->Y_NORMAL_ONE_POSITION_SHOP = 43.0;
  v24 = (System_Array_o *)sub_2213B20(v22, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v24,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499,
    0);
  v25 = EventItemWindowMaker_TypeInfo->static_fields;
  v25->X_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v25->X_LIMIT_OVER_POSITIONS,
    (int32_t)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Array_o *)sub_2213B20(float___TypeInfo, 4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v32,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7,
    0);
  v33 = EventItemWindowMaker_TypeInfo->static_fields;
  v33->Y_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v33->Y_LIMIT_OVER_POSITIONS,
    (int32_t)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = float___TypeInfo;
  EventItemWindowMaker_TypeInfo->static_fields->X_LIMITOVER_ONE_POSITION = -2.0;
  v3 = sub_2213B20(v40, 2);
  if ( !v3 )
LABEL_11:
    sub_2213CDC(v3, v4);
  v47 = *(_DWORD *)(v3 + 24);
  v48 = v3;
  if ( !v47 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 32) = -1029701632;
  if ( v47 == 1 )
    goto LABEL_10;
  v49 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_DWORD *)(v48 + 36) = 1117782016;
  v49->X_LIMIT_OVER_TWO_POSITIONS = (struct System_Single_array *)v48;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->X_LIMIT_OVER_TWO_POSITIONS, v48, v41, v42, v43, v44, v45, v46);
  v50 = int___TypeInfo;
  EventItemWindowMaker_TypeInfo->static_fields->Y_LIMIT_OVER_ONE = 51.0;
  v51 = (System_Array_o *)sub_2213B20(v50, 4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v51,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF,
    0);
  v52 = EventItemWindowMaker_TypeInfo->static_fields;
  v52->NORMAL_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v51;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v52->NORMAL_ITEM_BASE_WINDOW_HEIGHT,
    (int32_t)v51,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Array_o *)sub_2213B20(int___TypeInfo, 5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v59,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD,
    0);
  v60 = EventItemWindowMaker_TypeInfo->static_fields;
  v60->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v59;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v60->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT,
    (int32_t)v59,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v67->SCOPE_ITEM_INFO_ADD_HEIGHT = 0x400000021LL;
  v67->X_ITEM_BASE_WINDOW_POSITION = -460;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o EventItemWindowMaker__GetEventItemPosition(
        bool isEventShop,
        int32_t index,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  bool IsLimitOverWindow; // w22
  const MethodInfo *v10; // x1
  int MaxColumns; // w23
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int32_t MaxRows; // w24
  float v16; // s8
  unsigned int v17; // w9
  unsigned int v18; // w21
  unsigned int v19; // w26
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t RowCount; // w8
  EventItemWindowMaker_c *v23; // x0
  int v24; // w23
  int v25; // w9
  struct EventItemWindowMaker_StaticFields *v26; // x8
  float X_LIMITOVER_ONE_POSITION; // s8
  float *p_Y_LIMIT_OVER_ONE; // x8
  struct EventItemWindowMaker_StaticFields *v29; // x8
  struct System_Single_array *X_NORMAL_POSITIONS; // x9
  int v31; // w9
  struct EventItemWindowMaker_StaticFields *v32; // x9
  struct System_Single_array *v33; // x8
  struct System_Single_array *Y_LIMIT_OVER_POSITIONS; // x9
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  struct System_Single_array *X_LIMIT_OVER_POSITIONS; // x9
  struct EventItemWindowMaker_StaticFields *v37; // x9
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C654 & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    byte_596C654 = 1;
  }
  if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, *(_QWORD *)&index, *(_QWORD *)&count);
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(
                        count,
                        isForcedAdjustment,
                        *(const MethodInfo **)&count);
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v10);
  MaxRows = EventItemWindowMaker__GetMaxRows(IsLimitOverWindow, v12);
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v16 = (float)index / (float)MaxColumns;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v14);
  v17 = vcvtms_s32_f32(v16);
  v18 = index % MaxColumns;
  if ( floorf(v16) == INFINITY )
    v19 = 0x80000000;
  else
    v19 = v17;
  RowCount = EventItemWindowMaker__GetRowCount(count, MaxColumns, v14);
  v23 = EventItemWindowMaker_TypeInfo;
  v24 = MaxRows - RowCount;
  v25 = *(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1);
  if ( IsLimitOverWindow )
  {
    switch ( count )
    {
      case 3:
        if ( !v25 )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v20, v21);
          v23 = EventItemWindowMaker_TypeInfo;
        }
        static_fields = v23->static_fields;
        X_LIMIT_OVER_POSITIONS = static_fields->X_LIMIT_OVER_POSITIONS;
        if ( !X_LIMIT_OVER_POSITIONS )
          goto LABEL_59;
        break;
      case 2:
        if ( !v25 )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v20, v21);
          v23 = EventItemWindowMaker_TypeInfo;
        }
        static_fields = v23->static_fields;
        X_LIMIT_OVER_POSITIONS = static_fields->X_LIMIT_OVER_TWO_POSITIONS;
        if ( !X_LIMIT_OVER_POSITIONS )
          goto LABEL_59;
        break;
      case 1:
        if ( !v25 )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v20, v21);
          v23 = EventItemWindowMaker_TypeInfo;
        }
        v26 = v23->static_fields;
        X_LIMITOVER_ONE_POSITION = v26->X_LIMITOVER_ONE_POSITION;
        p_Y_LIMIT_OVER_ONE = &v26->Y_LIMIT_OVER_ONE;
        goto LABEL_58;
      default:
        if ( !v25 )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v20, v21);
          v23 = EventItemWindowMaker_TypeInfo;
        }
        v37 = v23->static_fields;
        v33 = v37->X_LIMIT_OVER_POSITIONS;
        if ( v33 )
        {
          if ( v18 >= LODWORD(v33->max_length) )
            goto LABEL_60;
          Y_LIMIT_OVER_POSITIONS = v37->Y_LIMIT_OVER_POSITIONS;
          if ( Y_LIMIT_OVER_POSITIONS )
            goto LABEL_56;
        }
        goto LABEL_59;
    }
    if ( v18 < LODWORD(X_LIMIT_OVER_POSITIONS->max_length) )
    {
      p_Y_LIMIT_OVER_ONE = &static_fields->Y_LIMIT_OVER_ONE;
      X_LIMITOVER_ONE_POSITION = X_LIMIT_OVER_POSITIONS->m_Items[v18];
      goto LABEL_58;
    }
LABEL_60:
    sub_2213CE4(v23);
  }
  if ( count == 2 )
  {
    if ( !v25 )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v20, v21);
      v23 = EventItemWindowMaker_TypeInfo;
    }
    v29 = v23->static_fields;
    X_NORMAL_POSITIONS = v29->X_NORMAL_POSITIONS;
    if ( !X_NORMAL_POSITIONS )
      goto LABEL_59;
    if ( v18 >= LODWORD(X_NORMAL_POSITIONS->max_length) )
      goto LABEL_60;
    X_LIMITOVER_ONE_POSITION = X_NORMAL_POSITIONS->m_Items[v18];
  }
  else
  {
    if ( count != 1 )
    {
      if ( !v25 )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v20, v21);
        v23 = EventItemWindowMaker_TypeInfo;
      }
      v32 = v23->static_fields;
      v33 = v32->X_NORMAL_POSITIONS;
      if ( v33 )
      {
        if ( v18 >= LODWORD(v33->max_length) )
          goto LABEL_60;
        Y_LIMIT_OVER_POSITIONS = v32->Y_NORMAL_POSITIONS;
        if ( Y_LIMIT_OVER_POSITIONS )
        {
LABEL_56:
          if ( v24 + v19 < LODWORD(Y_LIMIT_OVER_POSITIONS->max_length) )
          {
            X_LIMITOVER_ONE_POSITION = v33->m_Items[v18];
            p_Y_LIMIT_OVER_ONE = &Y_LIMIT_OVER_POSITIONS->m_Items[v24 + v19];
            goto LABEL_58;
          }
          goto LABEL_60;
        }
      }
LABEL_59:
      sub_2213CDC(v23, v20);
    }
    if ( !v25 )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v20, v21);
      v23 = EventItemWindowMaker_TypeInfo;
    }
    v29 = v23->static_fields;
    X_LIMITOVER_ONE_POSITION = v29->X_NORMAL_ONE_POSITION;
  }
  v31 = *(&v23->_2.cctor_finished + 1);
  if ( isEventShop )
  {
    if ( !v31 )
    {
      j_il2cpp_runtime_class_init_0(v23, v20, v21);
      v29 = EventItemWindowMaker_TypeInfo->static_fields;
    }
    p_Y_LIMIT_OVER_ONE = &v29->Y_NORMAL_ONE_POSITION_EVENT;
  }
  else
  {
    if ( !v31 )
    {
      j_il2cpp_runtime_class_init_0(v23, v20, v21);
      v29 = EventItemWindowMaker_TypeInfo->static_fields;
    }
    p_Y_LIMIT_OVER_ONE = &v29->Y_NORMAL_ONE_POSITION_SHOP;
  }
LABEL_58:
  result.fields.z = 0.0;
  result.fields.x = X_LIMITOVER_ONE_POSITION;
  result.fields.y = *p_Y_LIMIT_OVER_ONE;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventItemWindowMaker__GetEventItemWindowHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  int32_t WindowBaseHeight; // w20
  const MethodInfo *v8; // x3
  int32_t WindowAddHeight; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  EventItemWindowMaker_c *v12; // x8
  struct EventItemWindowMaker_StaticFields *static_fields; // x9
  int v14; // w11
  int32_t NORMAL_MAX_COUNT; // w10
  int32_t v16; // w22
  int32_t LIMIT_OVER_WINDOW_ADD_HEIGHT; // w8
  struct EventItemWindowMaker_StaticFields *v18; // x9

  if ( (byte_596C64F & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    byte_596C64F = 1;
  }
  if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, *(_QWORD *)&count, isForcedAdjustment);
  WindowBaseHeight = EventItemWindowMaker__GetWindowBaseHeight(isEventShop, count, isForcedAdjustment, method);
  WindowAddHeight = EventItemWindowMaker__GetWindowAddHeight(0, count, isForcedAdjustment, v8);
  v12 = EventItemWindowMaker_TypeInfo;
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  v14 = *(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1);
  NORMAL_MAX_COUNT = static_fields->NORMAL_MAX_COUNT;
  if ( NORMAL_MAX_COUNT >= count && !isForcedAdjustment )
  {
    v16 = WindowAddHeight;
    if ( !v14 )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v10, v11);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    if ( static_fields->NORMAL_DEFAULT_COUNT >= count )
      LIMIT_OVER_WINDOW_ADD_HEIGHT = 0;
    else
      LIMIT_OVER_WINDOW_ADD_HEIGHT = v16;
LABEL_24:
    WindowBaseHeight += LIMIT_OVER_WINDOW_ADD_HEIGHT;
    return WindowBaseHeight;
  }
  if ( !v14 )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v10, v11);
    v12 = EventItemWindowMaker_TypeInfo;
    static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    NORMAL_MAX_COUNT = static_fields->NORMAL_MAX_COUNT;
  }
  if ( NORMAL_MAX_COUNT >= count )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v10, v11);
      v12 = EventItemWindowMaker_TypeInfo;
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    WindowBaseHeight -= static_fields->LIMIT_OVER_WINDOW_REDUCE_HEIGHT;
  }
  if ( !*(&v12->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v12, v10, v11);
    v12 = EventItemWindowMaker_TypeInfo;
  }
  v18 = v12->static_fields;
  if ( v18->LIMIT_OVER_DEFAULT_COUNT < count )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v10, v11);
      v18 = EventItemWindowMaker_TypeInfo->static_fields;
    }
    LIMIT_OVER_WINDOW_ADD_HEIGHT = v18->LIMIT_OVER_WINDOW_ADD_HEIGHT;
    goto LABEL_24;
  }
  return WindowBaseHeight;
}


// local variable allocation has failed, the output may be wrong!
bool EventItemWindowMaker__GetIsLimitOverWindow(int32_t count, bool isForcedAdjustment, const MethodInfo *method)
{
  EventItemWindowMaker_c *v5; // x0

  if ( (byte_596C655 & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    byte_596C655 = 1;
  }
  v5 = EventItemWindowMaker_TypeInfo;
  if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, isForcedAdjustment, method);
    v5 = EventItemWindowMaker_TypeInfo;
  }
  return v5->static_fields->NORMAL_MAX_COUNT < count || isForcedAdjustment;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventItemWindowMaker__GetItemBaseWindowHeight(int32_t count, bool isForcedAdjustment, const MethodInfo *method)
{
  bool IsLimitOverWindow; // w0
  const MethodInfo *v6; // x1
  int32_t MaxColumns; // w0
  const MethodInfo *v8; // x2
  int32_t RowCount; // w19
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  bool v13; // w8
  EventItemWindowMaker_c *v14; // x0
  int v15; // w9
  struct System_Int32_array *LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT; // x8
  int32_t v17; // w19
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t SCOPE_ITEM_INFO_ADD_HEIGHT; // w8
  EventItemWindowMaker_c *v21; // x0

  if ( (byte_596C651 & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    byte_596C651 = 1;
  }
  if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, isForcedAdjustment, method);
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(count, isForcedAdjustment, method);
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v6);
  RowCount = EventItemWindowMaker__GetRowCount(count, MaxColumns, v8);
  v13 = EventItemWindowMaker__GetIsLimitOverWindow(count, isForcedAdjustment, v10);
  v14 = EventItemWindowMaker_TypeInfo;
  v15 = *(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1);
  if ( v13 )
  {
    if ( !v15 )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v11, v12);
      v14 = EventItemWindowMaker_TypeInfo;
    }
    LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = v14->static_fields->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT;
    if ( !LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT )
      goto LABEL_9;
  }
  else
  {
    if ( !v15 )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v11, v12);
      v14 = EventItemWindowMaker_TypeInfo;
    }
    LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = v14->static_fields->NORMAL_ITEM_BASE_WINDOW_HEIGHT;
    if ( !LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT )
LABEL_9:
      sub_2213CDC(v14, v11);
  }
  if ( (unsigned int)RowCount >= LODWORD(LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->max_length) )
    sub_2213CE4(v14);
  v17 = LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->m_Items[RowCount];
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v11, v12);
  if ( FSUtility__IsUnderVista(0) )
  {
    SCOPE_ITEM_INFO_ADD_HEIGHT = 0;
  }
  else
  {
    v21 = EventItemWindowMaker_TypeInfo;
    if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v18, v19);
      v21 = EventItemWindowMaker_TypeInfo;
    }
    SCOPE_ITEM_INFO_ADD_HEIGHT = v21->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT;
  }
  return SCOPE_ITEM_INFO_ADD_HEIGHT + v17;
}


float EventItemWindowMaker__GetItemBaseWindowX(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EventItemWindowMaker_c *v3; // x0
  int X_ITEM_BASE_WINDOW_POSITION; // w19

  if ( (byte_596C650 & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    byte_596C650 = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v1, v2);
    v3 = EventItemWindowMaker_TypeInfo;
  }
  X_ITEM_BASE_WINDOW_POSITION = v3->static_fields->X_ITEM_BASE_WINDOW_POSITION;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v1, v2);
  return (float)X_ITEM_BASE_WINDOW_POSITION - FSUtility__GetOffsetX(68.0, 2, 0);
}


int32_t EventItemWindowMaker__GetMaxColumns(bool isLimitOverWindow, const MethodInfo *method)
{
  __int64 v2; // x2
  EventItemWindowMaker_c *v4; // x0
  int v5; // w8
  int32_t *p_MAX_COLUMNS_LIMIT_OVER; // x8

  if ( (byte_596C656 & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    byte_596C656 = 1;
  }
  v4 = EventItemWindowMaker_TypeInfo;
  v5 = *(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1);
  if ( isLimitOverWindow )
  {
    if ( !v5 )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, method, v2);
      v4 = EventItemWindowMaker_TypeInfo;
    }
    p_MAX_COLUMNS_LIMIT_OVER = &v4->static_fields->MAX_COLUMNS_LIMIT_OVER;
  }
  else
  {
    if ( !v5 )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, method, v2);
      v4 = EventItemWindowMaker_TypeInfo;
    }
    p_MAX_COLUMNS_LIMIT_OVER = &v4->static_fields->MAX_COLUMNS_NORMAL;
  }
  return *p_MAX_COLUMNS_LIMIT_OVER;
}


int32_t EventItemWindowMaker__GetMaxRows(bool isLimitOverWindow, const MethodInfo *method)
{
  __int64 v2; // x2
  EventItemWindowMaker_c *v4; // x0
  int v5; // w8
  int32_t *p_MAX_ROWS_LIMIT_OVER; // x8

  if ( (byte_596C657 & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    byte_596C657 = 1;
  }
  v4 = EventItemWindowMaker_TypeInfo;
  v5 = *(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1);
  if ( isLimitOverWindow )
  {
    if ( !v5 )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, method, v2);
      v4 = EventItemWindowMaker_TypeInfo;
    }
    p_MAX_ROWS_LIMIT_OVER = &v4->static_fields->MAX_ROWS_LIMIT_OVER;
  }
  else
  {
    if ( !v5 )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, method, v2);
      v4 = EventItemWindowMaker_TypeInfo;
    }
    p_MAX_ROWS_LIMIT_OVER = &v4->static_fields->MAX_ROWS_NORMAL;
  }
  return *p_MAX_ROWS_LIMIT_OVER;
}


UnityEngine_Vector3_o EventItemWindowMaker__GetPanelPosition(UnityEngine_Vector3_o position, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  float z; // s8
  EventItemWindowMaker_c *v5; // x0
  int32x2_t v6; // d9
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned __int64 v9; // d1
  EventItemWindowMaker_c *v10; // x0
  float32x2_t v13; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  if ( (byte_596C64E & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    byte_596C64E = 1;
  }
  v5 = EventItemWindowMaker_TypeInfo;
  if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v2, v3);
    v5 = EventItemWindowMaker_TypeInfo;
  }
  v6.n64_u64[0] = vcvt_f32_s32(*(int32x2_t *)&v5->static_fields->X_EVENT_ITEM_PANEL_POSITION).n64_u64[0];
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v2, v3);
  v13.n64_u64[0] = vrev64_s32(v6).n64_u64[0];
  if ( FSUtility__IsUnderVista(0) )
  {
    v9 = v13.n64_u64[0];
  }
  else
  {
    v10 = EventItemWindowMaker_TypeInfo;
    if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v7, v8);
      v10 = EventItemWindowMaker_TypeInfo;
    }
    z = z + 0.0;
    v9 = vadd_f32(v13, vcvt_f32_s32(*(int32x2_t *)&v10->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT)).n64_u64[0];
  }
  result.fields.z = z;
  result.fields.x = *((float *)&v9 + 1);
  result.fields.y = *(float *)&v9;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventItemWindowMaker__GetRowCount(int32_t count, int32_t maxColumns, const MethodInfo *method)
{
  float v5; // s0
  int32_t v6; // w9

  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&maxColumns, method);
  v5 = (float)count / (float)maxColumns;
  v6 = vcvtps_s32_f32(v5);
  if ( ceilf(v5) == INFINITY )
    return 0x80000000;
  else
    return v6;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventItemWindowMaker__GetWindowAddHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v6; // x0
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  int v8; // w9
  int32_t *p_LIMIT_OVER_WINDOW_ADD_HEIGHT; // x8

  if ( (byte_596C652 & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    byte_596C652 = 1;
  }
  v6 = EventItemWindowMaker_TypeInfo;
  if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, *(_QWORD *)&count, isForcedAdjustment);
    v6 = EventItemWindowMaker_TypeInfo;
  }
  static_fields = v6->static_fields;
  v8 = *(&v6->_2.cctor_finished + 1);
  if ( static_fields->NORMAL_MAX_COUNT < count || isForcedAdjustment )
  {
    if ( !v8 )
    {
      j_il2cpp_runtime_class_init_0(v6, *(_QWORD *)&count, isForcedAdjustment);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    p_LIMIT_OVER_WINDOW_ADD_HEIGHT = &static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT;
  }
  else
  {
    if ( !v8 )
    {
      j_il2cpp_runtime_class_init_0(v6, *(_QWORD *)&count, isForcedAdjustment);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    p_LIMIT_OVER_WINDOW_ADD_HEIGHT = &static_fields->MIZUGI_WINDOW_ADD_HEIGHT;
  }
  return *p_LIMIT_OVER_WINDOW_ADD_HEIGHT;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventItemWindowMaker__GetWindowBaseHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v7; // x0
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  int v9; // w9

  if ( (byte_596C653 & 1) == 0 )
  {
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    byte_596C653 = 1;
  }
  v7 = EventItemWindowMaker_TypeInfo;
  if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, *(_QWORD *)&count, isForcedAdjustment);
    v7 = EventItemWindowMaker_TypeInfo;
  }
  static_fields = v7->static_fields;
  v9 = *(&v7->_2.cctor_finished + 1);
  if ( static_fields->NORMAL_MAX_COUNT < count || isForcedAdjustment )
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&count, isForcedAdjustment);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
  }
  else if ( isEventShop )
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&count, isForcedAdjustment);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    static_fields = (struct EventItemWindowMaker_StaticFields *)((char *)static_fields + 8);
  }
  else
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&count, isForcedAdjustment);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    static_fields = (struct EventItemWindowMaker_StaticFields *)((char *)static_fields + 4);
  }
  return static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT;
}