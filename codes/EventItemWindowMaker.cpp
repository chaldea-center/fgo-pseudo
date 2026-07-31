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
  System_Array_o *v14; // x0
  System_RuntimeFieldHandle_o v15; // x1
  System_Array_o *v16; // x19
  struct EventItemWindowMaker_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppClass *v24; // x0
  struct EventItemWindowMaker_StaticFields *v25; // x8
  System_Array_o *v26; // x0
  System_RuntimeFieldHandle_o v27; // x1
  System_Array_o *v28; // x19
  struct EventItemWindowMaker_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Array_o *v36; // x0
  System_RuntimeFieldHandle_o v37; // x1
  System_Array_o *v38; // x19
  struct EventItemWindowMaker_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  Il2CppClass *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int v53; // w8
  __int64 v54; // x1
  struct EventItemWindowMaker_StaticFields *v55; // x0
  Il2CppClass *v56; // x0
  System_Array_o *v57; // x0
  System_RuntimeFieldHandle_o v58; // x1
  System_Array_o *v59; // x19
  struct EventItemWindowMaker_StaticFields *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_Array_o *v67; // x0
  System_RuntimeFieldHandle_o v68; // x1
  System_Array_o *v69; // x19
  struct EventItemWindowMaker_StaticFields *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct EventItemWindowMaker_StaticFields *v77; // x8

  if ( (byte_5934529 & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&float___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD);
    sub_21FFC50(&Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327);
    sub_21FFC50(&Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF);
    sub_21FFC50(&Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499);
    sub_21FFC50(&Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7);
    byte_5934529 = 1;
  }
  v1 = float___TypeInfo;
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT = xmmword_E92F60;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT = xmmword_E936D0;
  *(_OWORD *)&static_fields->NORMAL_DEFAULT_COUNT = xmmword_E94650;
  static_fields->MAX_ROWS_LIMIT_OVER = 4;
  *(_QWORD *)&static_fields->MAX_ROWS_NORMAL = 0x300000003LL;
  v3 = sub_21FFD10(v1, 2);
  if ( !v3 )
    goto LABEL_11;
  v11 = *(_DWORD *)(v3 + 24);
  v12 = v3;
  if ( !v11 || (*(_DWORD *)(v3 + 32) = -1027080192, v11 == 1) )
LABEL_10:
    sub_21FFED4(v3);
  v13 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_DWORD *)(v12 + 36) = 1120403456;
  v13->X_NORMAL_POSITIONS = (struct System_Single_array *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->X_NORMAL_POSITIONS, v12, v5, v6, v7, v8, v9, v10);
  v14 = (System_Array_o *)sub_21FFD10(float___TypeInfo, 3);
  v15.fields.value = Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327;
  v16 = v14;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v14, v15, 0);
  v17 = EventItemWindowMaker_TypeInfo->static_fields;
  v17->Y_NORMAL_POSITIONS = (struct System_Single_array *)v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->Y_NORMAL_POSITIONS, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = float___TypeInfo;
  v25 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v25->X_NORMAL_ONE_POSITION = 0x426B333300000000LL;
  v25->Y_NORMAL_ONE_POSITION_SHOP = 43.0;
  v26 = (System_Array_o *)sub_21FFD10(v24, 3);
  v27.fields.value = Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499;
  v28 = v26;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v26, v27, 0);
  v29 = EventItemWindowMaker_TypeInfo->static_fields;
  v29->X_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v28;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v29->X_LIMIT_OVER_POSITIONS,
    (int32_t)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Array_o *)sub_21FFD10(float___TypeInfo, 4);
  v37.fields.value = Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7;
  v38 = v36;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v36, v37, 0);
  v39 = EventItemWindowMaker_TypeInfo->static_fields;
  v39->Y_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v38;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v39->Y_LIMIT_OVER_POSITIONS,
    (int32_t)v38,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = float___TypeInfo;
  EventItemWindowMaker_TypeInfo->static_fields->X_LIMITOVER_ONE_POSITION = -2.0;
  v3 = sub_21FFD10(v46, 2);
  if ( !v3 )
LABEL_11:
    sub_21FFECC(v3, v4);
  v53 = *(_DWORD *)(v3 + 24);
  v54 = v3;
  if ( !v53 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 32) = -1029701632;
  if ( v53 == 1 )
    goto LABEL_10;
  v55 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_DWORD *)(v54 + 36) = 1117782016;
  v55->X_LIMIT_OVER_TWO_POSITIONS = (struct System_Single_array *)v54;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v55->X_LIMIT_OVER_TWO_POSITIONS, v54, v47, v48, v49, v50, v51, v52);
  v56 = int___TypeInfo;
  EventItemWindowMaker_TypeInfo->static_fields->Y_LIMIT_OVER_ONE = 51.0;
  v57 = (System_Array_o *)sub_21FFD10(v56, 4);
  v58.fields.value = Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF;
  v59 = v57;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v57, v58, 0);
  v60 = EventItemWindowMaker_TypeInfo->static_fields;
  v60->NORMAL_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v59;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v60->NORMAL_ITEM_BASE_WINDOW_HEIGHT,
    (int32_t)v59,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 5);
  v68.fields.value = Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD;
  v69 = v67;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v67, v68, 0);
  v70 = EventItemWindowMaker_TypeInfo->static_fields;
  v70->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v69;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v70->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT,
    (int32_t)v69,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v77->SCOPE_ITEM_INFO_ADD_HEIGHT = 0x400000021LL;
  v77->X_ITEM_BASE_WINDOW_POSITION = -460;
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
  float v38; // s2
  float v39; // s0
  float v40; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5934525 & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    byte_5934525 = 1;
  }
  if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, *(_QWORD *)&index, *(_QWORD *)&count);
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(
                        count,
                        isForcedAdjustment,
                        *(const MethodInfo **)&count);
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v10);
  MaxRows = EventItemWindowMaker__GetMaxRows(IsLimitOverWindow, v12);
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
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
    sub_21FFED4(v23);
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
      sub_21FFECC(v23, v20);
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
  v38 = 0.0;
  v39 = X_LIMITOVER_ONE_POSITION;
  v40 = *p_Y_LIMIT_OVER_ONE;
  result.fields.z = v38;
  result.fields.y = v40;
  result.fields.x = v39;
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

  if ( (byte_5934520 & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    byte_5934520 = 1;
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

  if ( (byte_5934526 & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    byte_5934526 = 1;
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

  if ( (byte_5934522 & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_5934522 = 1;
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
      sub_21FFECC(v14, v11);
  }
  if ( (unsigned int)RowCount >= LODWORD(LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->max_length) )
    sub_21FFED4(v14);
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

  if ( (byte_5934521 & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_5934521 = 1;
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

  if ( (byte_5934527 & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    byte_5934527 = 1;
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

  if ( (byte_5934528 & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    byte_5934528 = 1;
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
  float v11; // s2
  float v12; // s0
  float32x2_t v13; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  if ( (byte_593451F & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_593451F = 1;
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
  v11 = z;
  v12 = *((float *)&v9 + 1);
  result.fields.y = *(float *)&v9;
  result.fields.z = v11;
  result.fields.x = v12;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventItemWindowMaker__GetRowCount(int32_t count, int32_t maxColumns, const MethodInfo *method)
{
  float v5; // s0
  int32_t v6; // w9

  if ( !byte_5931FBB )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
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

  if ( (byte_5934523 & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    byte_5934523 = 1;
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

  if ( (byte_5934524 & 1) == 0 )
  {
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    byte_5934524 = 1;
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