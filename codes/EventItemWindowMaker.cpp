void EventItemWindowMaker___cctor(const MethodInfo *method)
{
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  struct System_Single_array *v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int max_length; // w8
  struct System_Single_array *v11; // x1
  struct EventItemWindowMaker_StaticFields *v12; // x0
  System_Array_o *v13; // x19
  struct EventItemWindowMaker_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct EventItemWindowMaker_StaticFields *v21; // x8
  System_Array_o *v22; // x19
  struct EventItemWindowMaker_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Array_o *v30; // x19
  struct EventItemWindowMaker_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int v44; // w8
  struct System_Single_array *v45; // x1
  struct EventItemWindowMaker_StaticFields *v46; // x0
  System_Array_o *v47; // x19
  struct EventItemWindowMaker_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_Array_o *v55; // x19
  struct EventItemWindowMaker_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct EventItemWindowMaker_StaticFields *v63; // x8

  if ( (byte_4D2C8BB & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&float___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD);
    sub_1C93AD4(&Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327);
    sub_1C93AD4(&Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF);
    sub_1C93AD4(&Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499);
    sub_1C93AD4(&Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7);
    byte_4D2C8BB = 1;
  }
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT = xmmword_D003A0;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT = xmmword_CFFFF0;
  *(_OWORD *)&static_fields->NORMAL_DEFAULT_COUNT = xmmword_D018B0;
  *(_QWORD *)&static_fields->MAX_ROWS_NORMAL = 0x300000003LL;
  static_fields->MAX_ROWS_LIMIT_OVER = 4;
  v2 = (struct System_Single_array *)sub_1C93B7C(float___TypeInfo, 2);
  if ( !v2 )
    goto LABEL_11;
  max_length = v2->max_length;
  v11 = v2;
  if ( !max_length || (v2->m_Items[0] = -100.0, max_length == 1) )
LABEL_10:
    sub_1C93D34(v2);
  v2->m_Items[1] = 100.0;
  v12 = EventItemWindowMaker_TypeInfo->static_fields;
  v12->X_NORMAL_POSITIONS = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v12->X_NORMAL_POSITIONS, (int32_t)v11, v4, v5, v6, v7, v8, v9);
  v13 = (System_Array_o *)sub_1C93B7C(float___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v13,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327,
    0);
  v14 = EventItemWindowMaker_TypeInfo->static_fields;
  v14->Y_NORMAL_POSITIONS = (struct System_Single_array *)v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->Y_NORMAL_POSITIONS, (int32_t)v13, v15, v16, v17, v18, v19, v20);
  v21 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v21->X_NORMAL_ONE_POSITION = 0x426B333300000000LL;
  v21->Y_NORMAL_ONE_POSITION_SHOP = 43.0;
  v22 = (System_Array_o *)sub_1C93B7C(float___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v22,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499,
    0);
  v23 = EventItemWindowMaker_TypeInfo->static_fields;
  v23->X_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v22;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->X_LIMIT_OVER_POSITIONS, (int32_t)v22, v24, v25, v26, v27, v28, v29);
  v30 = (System_Array_o *)sub_1C93B7C(float___TypeInfo, 4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v30,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7,
    0);
  v31 = EventItemWindowMaker_TypeInfo->static_fields;
  v31->Y_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v30;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v31->Y_LIMIT_OVER_POSITIONS, (int32_t)v30, v32, v33, v34, v35, v36, v37);
  EventItemWindowMaker_TypeInfo->static_fields->X_LIMITOVER_ONE_POSITION = -2.0;
  v2 = (struct System_Single_array *)sub_1C93B7C(float___TypeInfo, 2);
  if ( !v2 )
LABEL_11:
    sub_1C93D2C(v2, v3);
  v44 = v2->max_length;
  v45 = v2;
  if ( !v44 )
    goto LABEL_10;
  v2->m_Items[0] = -80.0;
  if ( v44 == 1 )
    goto LABEL_10;
  v2->m_Items[1] = 80.0;
  v46 = EventItemWindowMaker_TypeInfo->static_fields;
  v46->X_LIMIT_OVER_TWO_POSITIONS = v45;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v46->X_LIMIT_OVER_TWO_POSITIONS,
    (int32_t)v45,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  EventItemWindowMaker_TypeInfo->static_fields->Y_LIMIT_OVER_ONE = 51.0;
  v47 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v47,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF,
    0);
  v48 = EventItemWindowMaker_TypeInfo->static_fields;
  v48->NORMAL_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v47;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v48->NORMAL_ITEM_BASE_WINDOW_HEIGHT,
    (int32_t)v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v55,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD,
    0);
  v56 = EventItemWindowMaker_TypeInfo->static_fields;
  v56->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v55;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v56->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT,
    (int32_t)v55,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v63->SCOPE_ITEM_INFO_ADD_HEIGHT = 0x400000021LL;
  v63->X_ITEM_BASE_WINDOW_POSITION = -460;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o EventItemWindowMaker__GetEventItemPosition(
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
  const MethodInfo *v15; // x2
  int32_t MaxRows; // w24
  float v17; // s8
  unsigned int v18; // w9
  unsigned int v19; // w21
  unsigned int v20; // w26
  __int64 v21; // x1
  int v22; // w23
  EventItemWindowMaker_c *v23; // x0
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  float X_LIMITOVER_ONE_POSITION; // s8
  struct EventItemWindowMaker_StaticFields *v26; // x8
  EventItemWindowMaker_c *v27; // x0
  struct System_Single_array *v28; // x9
  __int64 v29; // x9
  float *p_Y_LIMIT_OVER_ONE; // x8
  struct EventItemWindowMaker_StaticFields *v31; // x9
  struct System_Single_array *X_NORMAL_POSITIONS; // x8
  struct System_Single_array *Y_LIMIT_OVER_POSITIONS; // x9
  struct System_Single_array *X_LIMIT_OVER_POSITIONS; // x9
  struct EventItemWindowMaker_StaticFields *v35; // x9
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2C8B7 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    byte_4D2C8B7 = 1;
  }
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(
                        count,
                        isForcedAdjustment,
                        *(const MethodInfo **)&count);
  v10 = IsLimitOverWindow;
  v11 = IsLimitOverWindow;
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v12);
  MaxRows = EventItemWindowMaker__GetMaxRows(v10, v14);
  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v17 = (float)index / (float)MaxColumns;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v18 = vcvtms_s32_f32(v17);
  v19 = index % MaxColumns;
  if ( floorf(v17) == INFINITY )
    v20 = 0x80000000;
  else
    v20 = v18;
  v22 = MaxRows - EventItemWindowMaker__GetRowCount(count, MaxColumns, v15);
  if ( v11 )
  {
    switch ( count )
    {
      case 3:
        v27 = EventItemWindowMaker_TypeInfo;
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          v27 = EventItemWindowMaker_TypeInfo;
        }
        static_fields = v27->static_fields;
        X_LIMIT_OVER_POSITIONS = static_fields->X_LIMIT_OVER_POSITIONS;
        if ( !X_LIMIT_OVER_POSITIONS )
          goto LABEL_58;
        break;
      case 2:
        v27 = EventItemWindowMaker_TypeInfo;
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          v27 = EventItemWindowMaker_TypeInfo;
        }
        static_fields = v27->static_fields;
        X_LIMIT_OVER_POSITIONS = static_fields->X_LIMIT_OVER_TWO_POSITIONS;
        if ( !X_LIMIT_OVER_POSITIONS )
          goto LABEL_58;
        break;
      case 1:
        v23 = EventItemWindowMaker_TypeInfo;
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          v23 = EventItemWindowMaker_TypeInfo;
        }
        static_fields = v23->static_fields;
        X_LIMITOVER_ONE_POSITION = static_fields->X_LIMITOVER_ONE_POSITION;
        goto LABEL_47;
      default:
        v27 = EventItemWindowMaker_TypeInfo;
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          v27 = EventItemWindowMaker_TypeInfo;
        }
        v35 = v27->static_fields;
        X_NORMAL_POSITIONS = v35->X_LIMIT_OVER_POSITIONS;
        if ( X_NORMAL_POSITIONS )
        {
          if ( v19 >= LODWORD(X_NORMAL_POSITIONS->max_length) )
            goto LABEL_59;
          Y_LIMIT_OVER_POSITIONS = v35->Y_LIMIT_OVER_POSITIONS;
          if ( Y_LIMIT_OVER_POSITIONS )
            goto LABEL_53;
        }
        goto LABEL_58;
    }
    if ( v19 < LODWORD(X_LIMIT_OVER_POSITIONS->max_length) )
    {
      X_LIMITOVER_ONE_POSITION = X_LIMIT_OVER_POSITIONS->m_Items[v19];
LABEL_47:
      p_Y_LIMIT_OVER_ONE = &static_fields->Y_LIMIT_OVER_ONE;
      goto LABEL_55;
    }
LABEL_59:
    sub_1C93D34(v27);
  }
  if ( count != 2 )
  {
    if ( count != 1 )
    {
      v27 = EventItemWindowMaker_TypeInfo;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v27 = EventItemWindowMaker_TypeInfo;
      }
      v31 = v27->static_fields;
      X_NORMAL_POSITIONS = v31->X_NORMAL_POSITIONS;
      if ( X_NORMAL_POSITIONS )
      {
        if ( v19 >= LODWORD(X_NORMAL_POSITIONS->max_length) )
          goto LABEL_59;
        Y_LIMIT_OVER_POSITIONS = v31->Y_NORMAL_POSITIONS;
        if ( Y_LIMIT_OVER_POSITIONS )
        {
LABEL_53:
          if ( v22 + v20 < LODWORD(Y_LIMIT_OVER_POSITIONS->max_length) )
          {
            X_LIMITOVER_ONE_POSITION = X_NORMAL_POSITIONS->m_Items[v19];
            p_Y_LIMIT_OVER_ONE = &Y_LIMIT_OVER_POSITIONS->m_Items[v22 + v20];
            goto LABEL_55;
          }
          goto LABEL_59;
        }
      }
LABEL_58:
      sub_1C93D2C(v27, v21);
    }
    if ( EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      v26 = EventItemWindowMaker_TypeInfo->static_fields;
      X_LIMITOVER_ONE_POSITION = v26->X_NORMAL_ONE_POSITION;
      goto LABEL_29;
    }
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v27 = EventItemWindowMaker_TypeInfo;
    v26 = EventItemWindowMaker_TypeInfo->static_fields;
    X_LIMITOVER_ONE_POSITION = v26->X_NORMAL_ONE_POSITION;
    if ( EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      goto LABEL_29;
LABEL_28:
    j_il2cpp_runtime_class_init_0(v27);
    v26 = EventItemWindowMaker_TypeInfo->static_fields;
    goto LABEL_29;
  }
  v27 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v27 = EventItemWindowMaker_TypeInfo;
  }
  v26 = v27->static_fields;
  v28 = v26->X_NORMAL_POSITIONS;
  if ( !v28 )
    goto LABEL_58;
  if ( v19 >= LODWORD(v28->max_length) )
    goto LABEL_59;
  X_LIMITOVER_ONE_POSITION = v28->m_Items[v19];
  if ( !v27->_2.cctor_finished )
    goto LABEL_28;
LABEL_29:
  v29 = 88;
  if ( isEventShop )
    v29 = 84;
  p_Y_LIMIT_OVER_ONE = (float *)((char *)&v26->LIMIT_OVER_WINDOW_BASE_HEIGHT + v29);
LABEL_55:
  result.fields.y = *p_Y_LIMIT_OVER_ONE;
  result.fields.z = 0.0;
  result.fields.x = X_LIMITOVER_ONE_POSITION;
  return result;
}


int32_t EventItemWindowMaker__GetEventItemWindowHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  int32_t WindowBaseHeight; // w20
  const MethodInfo *v8; // x3
  int32_t WindowAddHeight; // w22
  EventItemWindowMaker_c *v10; // x0
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  bool v12; // w21
  struct EventItemWindowMaker_StaticFields *v13; // x8
  int32_t v15; // w8

  if ( (byte_4D2C8B2 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    byte_4D2C8B2 = 1;
  }
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  WindowBaseHeight = EventItemWindowMaker__GetWindowBaseHeight(isEventShop, count, isForcedAdjustment, method);
  WindowAddHeight = EventItemWindowMaker__GetWindowAddHeight(0, count, isForcedAdjustment, v8);
  v10 = EventItemWindowMaker_TypeInfo;
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  v12 = static_fields->NORMAL_MAX_COUNT < count || isForcedAdjustment;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v10 = EventItemWindowMaker_TypeInfo;
    static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    if ( v12 )
      goto LABEL_7;
LABEL_19:
    if ( static_fields->NORMAL_DEFAULT_COUNT >= count )
      v15 = 0;
    else
      v15 = WindowAddHeight;
    return v15 + WindowBaseHeight;
  }
  if ( !v12 )
    goto LABEL_19;
LABEL_7:
  if ( static_fields->NORMAL_MAX_COUNT >= count )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventItemWindowMaker_TypeInfo;
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    WindowBaseHeight -= static_fields->LIMIT_OVER_WINDOW_REDUCE_HEIGHT;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = EventItemWindowMaker_TypeInfo;
  }
  v13 = v10->static_fields;
  if ( v13->LIMIT_OVER_DEFAULT_COUNT < count )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v13 = EventItemWindowMaker_TypeInfo->static_fields;
    }
    WindowBaseHeight += v13->LIMIT_OVER_WINDOW_ADD_HEIGHT;
  }
  return WindowBaseHeight;
}


bool EventItemWindowMaker__GetIsLimitOverWindow(int32_t count, bool isForcedAdjustment, const MethodInfo *method)
{
  EventItemWindowMaker_c *v5; // x0

  if ( (byte_4D2C8B8 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    byte_4D2C8B8 = 1;
  }
  v5 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v5 = EventItemWindowMaker_TypeInfo;
  }
  return v5->static_fields->NORMAL_MAX_COUNT < count || isForcedAdjustment;
}


int32_t EventItemWindowMaker__GetItemBaseWindowHeight(int32_t count, bool isForcedAdjustment, const MethodInfo *method)
{
  bool v5; // w21
  bool IsLimitOverWindow; // w0
  const MethodInfo *v7; // x1
  int32_t MaxColumns; // w0
  const MethodInfo *v9; // x2
  int32_t RowCount; // w19
  const MethodInfo *v11; // x2
  _BOOL8 v12; // x0
  __int64 v13; // x1
  EventItemWindowMaker_c *v14; // x8
  bool v15; // w20
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  struct System_Int32_array *LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT; // x8
  int32_t v18; // w19
  int32_t SCOPE_ITEM_INFO_ADD_HEIGHT; // w8
  EventItemWindowMaker_c *v20; // x0

  if ( (byte_4D2C8B4 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    byte_4D2C8B4 = 1;
  }
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  v5 = isForcedAdjustment;
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(count, isForcedAdjustment, method);
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v7);
  RowCount = EventItemWindowMaker__GetRowCount(count, MaxColumns, v9);
  v12 = EventItemWindowMaker__GetIsLimitOverWindow(count, v5, v11);
  v14 = EventItemWindowMaker_TypeInfo;
  v15 = v12;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v14 = EventItemWindowMaker_TypeInfo;
  }
  static_fields = v14->static_fields;
  if ( v15 )
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
      sub_1C93D2C(v12, v13);
  }
  if ( (unsigned int)RowCount >= LODWORD(LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->max_length) )
    sub_1C93D34(v12);
  v18 = LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->m_Items[RowCount];
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    SCOPE_ITEM_INFO_ADD_HEIGHT = 0;
  }
  else
  {
    v20 = EventItemWindowMaker_TypeInfo;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v20 = EventItemWindowMaker_TypeInfo;
    }
    SCOPE_ITEM_INFO_ADD_HEIGHT = v20->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT;
  }
  return SCOPE_ITEM_INFO_ADD_HEIGHT + v18;
}


float EventItemWindowMaker__GetItemBaseWindowX(const MethodInfo *method)
{
  EventItemWindowMaker_c *v1; // x0
  int X_ITEM_BASE_WINDOW_POSITION; // w19

  if ( (byte_4D2C8B3 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    byte_4D2C8B3 = 1;
  }
  v1 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v1 = EventItemWindowMaker_TypeInfo;
  }
  X_ITEM_BASE_WINDOW_POSITION = v1->static_fields->X_ITEM_BASE_WINDOW_POSITION;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return (float)X_ITEM_BASE_WINDOW_POSITION - FSUtility__GetOffsetX(68.0, 1, 0);
}


int32_t EventItemWindowMaker__GetMaxColumns(bool isLimitOverWindow, const MethodInfo *method)
{
  EventItemWindowMaker_c *v3; // x0
  __int64 v4; // x9

  if ( (byte_4D2C8B9 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    byte_4D2C8B9 = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v3 = EventItemWindowMaker_TypeInfo;
  }
  v4 = 44;
  if ( isLimitOverWindow )
    v4 = 52;
  return *(int32_t *)((char *)&v3->static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT + v4);
}


int32_t EventItemWindowMaker__GetMaxRows(bool isLimitOverWindow, const MethodInfo *method)
{
  EventItemWindowMaker_c *v3; // x0
  __int64 v4; // x9

  if ( (byte_4D2C8BA & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    byte_4D2C8BA = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v3 = EventItemWindowMaker_TypeInfo;
  }
  v4 = 48;
  if ( isLimitOverWindow )
    v4 = 56;
  return *(int32_t *)((char *)&v3->static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT + v4);
}


UnityEngine_Vector3_o EventItemWindowMaker__GetPanelPosition(UnityEngine_Vector3_o position, const MethodInfo *method)
{
  float z; // s8
  EventItemWindowMaker_c *v3; // x0
  int32x2_t v4; // d9
  unsigned __int64 v5; // d1
  EventItemWindowMaker_c *v6; // x0
  float32x2_t v9; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  if ( (byte_4D2C8B1 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    byte_4D2C8B1 = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v3 = EventItemWindowMaker_TypeInfo;
  }
  v4.n64_u64[0] = vrev64_s32(*(int32x2_t *)&v3->static_fields->X_EVENT_ITEM_PANEL_POSITION).n64_u64[0];
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v9.n64_u64[0] = vcvt_f32_s32(v4).n64_u64[0];
  if ( FSUtility__IsUnderVista(0) )
  {
    v5 = v9.n64_u64[0];
  }
  else
  {
    v6 = EventItemWindowMaker_TypeInfo;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v6 = EventItemWindowMaker_TypeInfo;
    }
    z = z + 0.0;
    v5 = vadd_f32(v9, vcvt_f32_s32(*(int32x2_t *)&v6->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT)).n64_u64[0];
  }
  result.fields.z = z;
  result.fields.x = *((float *)&v5 + 1);
  result.fields.y = *(float *)&v5;
  return result;
}


int32_t EventItemWindowMaker__GetRowCount(int32_t count, int32_t maxColumns, const MethodInfo *method)
{
  float v5; // s0
  int32_t v6; // w8

  if ( !byte_4D2A7BA )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A7BA = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = (float)count / (float)maxColumns;
  v6 = vcvtps_s32_f32(v5);
  if ( ceilf(v5) == INFINITY )
    return 0x80000000;
  else
    return v6;
}


int32_t EventItemWindowMaker__GetWindowAddHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  int32_t NORMAL_MAX_COUNT; // w22
  __int64 v8; // x9

  if ( (byte_4D2C8B5 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    byte_4D2C8B5 = 1;
  }
  if ( EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    NORMAL_MAX_COUNT = static_fields->NORMAL_MAX_COUNT;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    NORMAL_MAX_COUNT = static_fields->NORMAL_MAX_COUNT;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
  }
  v8 = 12;
  if ( NORMAL_MAX_COUNT < count || isForcedAdjustment )
    v8 = 16;
  return *(int32_t *)((char *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT + v8);
}


int32_t EventItemWindowMaker__GetWindowBaseHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v7; // x0
  uint32_t cctor_finished; // w9
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  bool v10; // w20

  if ( (byte_4D2C8B6 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    byte_4D2C8B6 = 1;
  }
  v7 = EventItemWindowMaker_TypeInfo;
  cctor_finished = EventItemWindowMaker_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(v7);
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