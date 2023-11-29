void __fastcall EventItemWindowMaker___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventItemWindowMaker_c *v10; // x8
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // w8
  System_Int32_array **v19; // x1
  struct EventItemWindowMaker_StaticFields *static_fields; // x0
  __int64 v21; // x2
  System_Array_o *v22; // x19
  struct EventItemWindowMaker_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  EventItemWindowMaker_c *v30; // x8
  __int64 v31; // x2
  System_Array_o *v32; // x19
  struct EventItemWindowMaker_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x2
  System_Array_o *v41; // x19
  struct EventItemWindowMaker_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int v55; // w8
  struct EventItemWindowMaker_StaticFields *v56; // x0
  __int64 v57; // x2
  System_Array_o *v58; // x19
  struct EventItemWindowMaker_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x2
  System_Array_o *v67; // x19
  struct EventItemWindowMaker_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  EventItemWindowMaker_c *v75; // x8
  System_RuntimeFieldHandle_o v76; // 0:w1.4
  System_RuntimeFieldHandle_o v77; // 0:w1.4
  System_RuntimeFieldHandle_o v78; // 0:w1.4
  System_RuntimeFieldHandle_o v79; // 0:w1.4
  System_RuntimeFieldHandle_o v80; // 0:w1.4

  if ( (byte_40F885E & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, v1);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(&float___TypeInfo, v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD,
      v5);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327,
      v6);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF,
      v7);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499,
      v8);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7,
      v9);
    byte_40F885E = 1;
  }
  EventItemWindowMaker_TypeInfo->static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT = 170;
  EventItemWindowMaker_TypeInfo->static_fields->NORMAL_WINDOW_BASE_HEIGHT_SHOP = 114;
  v10 = EventItemWindowMaker_TypeInfo;
  EventItemWindowMaker_TypeInfo->static_fields->NORMAL_WINDOW_BASE_HEIGHT_EVENT = 134;
  v10->static_fields->MIZUGI_WINDOW_ADD_HEIGHT = 42;
  v10->static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT = 45;
  v10->static_fields->LIMIT_OVER_WINDOW_REDUCE_HEIGHT = 40;
  v10->static_fields->X_EVENT_ITEM_PANEL_POSITION = -220;
  v10->static_fields->Y_EVENT_ITEM_PANEL_POSITION = 25;
  v10->static_fields->NORMAL_DEFAULT_COUNT = 4;
  v10->static_fields->LIMIT_OVER_DEFAULT_COUNT = 9;
  v10->static_fields->NORMAL_MAX_COUNT = 6;
  v10->static_fields->MAX_COLUMNS_NORMAL = 2;
  v10->static_fields->MAX_ROWS_NORMAL = 3;
  v10->static_fields->MAX_COLUMNS_LIMIT_OVER = 3;
  v10->static_fields->MAX_ROWS_LIMIT_OVER = 4;
  v11 = (System_Int32_array **)sub_B17014(float___TypeInfo, 2LL, v2);
  if ( !v11 )
    goto LABEL_11;
  v18 = *((_DWORD *)v11 + 6);
  v19 = v11;
  if ( !v18 || (*((_DWORD *)v11 + 8) = -1027080192, v18 == 1) )
  {
LABEL_10:
    sub_B17100(v11, v19, v12);
    sub_B170A0();
  }
  *((_DWORD *)v11 + 9) = 1120403456;
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  static_fields->X_NORMAL_POSITIONS = (struct System_Single_array *)v19;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->X_NORMAL_POSITIONS, v19, v12, v13, v14, v15, v16, v17);
  v22 = (System_Array_o *)sub_B17014(float___TypeInfo, 3LL, v21);
  v76.fields.value = Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v22, v76, 0LL);
  v23 = EventItemWindowMaker_TypeInfo->static_fields;
  v23->Y_NORMAL_POSITIONS = (struct System_Single_array *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v23->Y_NORMAL_POSITIONS,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = EventItemWindowMaker_TypeInfo;
  EventItemWindowMaker_TypeInfo->static_fields->X_NORMAL_ONE_POSITION = 0.0;
  v30->static_fields->Y_NORMAL_ONE_POSITION_EVENT = 58.8;
  v30->static_fields->Y_NORMAL_ONE_POSITION_SHOP = 43.0;
  v32 = (System_Array_o *)sub_B17014(float___TypeInfo, 3LL, v31);
  v77.fields.value = Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v32, v77, 0LL);
  v33 = EventItemWindowMaker_TypeInfo->static_fields;
  v33->X_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v33->X_LIMIT_OVER_POSITIONS,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v41 = (System_Array_o *)sub_B17014(float___TypeInfo, 4LL, v40);
  v78.fields.value = Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v41, v78, 0LL);
  v42 = EventItemWindowMaker_TypeInfo->static_fields;
  v42->Y_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v42->Y_LIMIT_OVER_POSITIONS,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  EventItemWindowMaker_TypeInfo->static_fields->X_LIMITOVER_ONE_POSITION = -2.0;
  v11 = (System_Int32_array **)sub_B17014(float___TypeInfo, 2LL, v49);
  if ( !v11 )
LABEL_11:
    sub_B170D4();
  v55 = *((_DWORD *)v11 + 6);
  v19 = v11;
  if ( !v55 )
    goto LABEL_10;
  *((_DWORD *)v11 + 8) = -1029701632;
  if ( v55 == 1 )
    goto LABEL_10;
  *((_DWORD *)v11 + 9) = 1117782016;
  v56 = EventItemWindowMaker_TypeInfo->static_fields;
  v56->X_LIMIT_OVER_TWO_POSITIONS = (struct System_Single_array *)v19;
  sub_B16F98((BattleServantConfConponent_o *)&v56->X_LIMIT_OVER_TWO_POSITIONS, v19, v12, v50, v51, v52, v53, v54);
  EventItemWindowMaker_TypeInfo->static_fields->Y_LIMIT_OVER_ONE = 51.0;
  v58 = (System_Array_o *)sub_B17014(int___TypeInfo, 4LL, v57);
  v79.fields.value = Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v58, v79, 0LL);
  v59 = EventItemWindowMaker_TypeInfo->static_fields;
  v59->NORMAL_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v58;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v59->NORMAL_ITEM_BASE_WINDOW_HEIGHT,
    (System_Int32_array **)v58,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v67 = (System_Array_o *)sub_B17014(int___TypeInfo, 5LL, v66);
  v80.fields.value = Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v67, v80, 0LL);
  v68 = EventItemWindowMaker_TypeInfo->static_fields;
  v68->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v67;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v68->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT,
    (System_Int32_array **)v67,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = EventItemWindowMaker_TypeInfo;
  EventItemWindowMaker_TypeInfo->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT = 33;
  v75->static_fields->SCOPE_ITEM_INFO_ADD_WIDTH = 4;
  v75->static_fields->X_ITEM_BASE_WINDOW_POSITION = -460;
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
  bool v10; // w23
  bool v11; // w22
  const MethodInfo *v12; // x1
  int32_t MaxColumns; // w24
  const MethodInfo *v14; // x1
  float v15; // s8
  int32_t MaxRows; // w23
  float v17; // s0
  unsigned int v18; // w24
  int32_t v19; // w20
  __int64 v20; // x1
  __int64 v21; // x2
  int v22; // w23
  EventItemWindowMaker_c *v23; // x0
  struct EventItemWindowMaker_StaticFields *v24; // x8
  float X_NORMAL_ONE_POSITION; // s8
  EventItemWindowMaker_c *v26; // x0
  __int16 v27; // w8
  int v28; // w9
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  struct System_Single_array *X_NORMAL_POSITIONS; // x9
  struct EventItemWindowMaker_StaticFields *v31; // x9
  struct System_Single_array *v32; // x8
  struct System_Single_array *Y_NORMAL_POSITIONS; // x9
  struct System_Single_array *X_LIMIT_OVER_POSITIONS; // x9
  float *p_Y_NORMAL_ONE_POSITION_SHOP; // x8
  struct EventItemWindowMaker_StaticFields *v36; // x9
  float v37; // s1
  float v38; // s2
  float v39; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F885A & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&index);
    byte_40F885A = 1;
  }
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  }
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(
                        count,
                        isForcedAdjustment,
                        *(const MethodInfo **)&count);
  v10 = IsLimitOverWindow;
  v11 = IsLimitOverWindow;
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v12);
  v15 = (float)MaxColumns;
  MaxRows = EventItemWindowMaker__GetMaxRows(v10, v14);
  v17 = (float)index / (float)MaxColumns;
  v18 = index % MaxColumns;
  v19 = UnityEngine_Mathf__FloorToInt(v17, 0LL);
  v22 = MaxRows - UnityEngine_Mathf__CeilToInt((float)count / v15, 0LL);
  if ( !v11 )
  {
    if ( count == 2 )
    {
      v26 = EventItemWindowMaker_TypeInfo;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v26 = EventItemWindowMaker_TypeInfo;
      }
      static_fields = v26->static_fields;
      X_NORMAL_POSITIONS = static_fields->X_NORMAL_POSITIONS;
      if ( !X_NORMAL_POSITIONS )
        goto LABEL_68;
      if ( v18 >= X_NORMAL_POSITIONS->max_length )
        goto LABEL_69;
      X_NORMAL_ONE_POSITION = X_NORMAL_POSITIONS->m_Items[v18 + 1];
      if ( isEventShop )
      {
        if ( (WORD1(v26->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          goto LABEL_58;
        goto LABEL_60;
      }
      if ( (WORD1(v26->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      {
LABEL_66:
        p_Y_NORMAL_ONE_POSITION_SHOP = &static_fields->Y_NORMAL_ONE_POSITION_SHOP;
        goto LABEL_67;
      }
    }
    else
    {
      if ( count != 1 )
      {
        v26 = EventItemWindowMaker_TypeInfo;
        if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          v26 = EventItemWindowMaker_TypeInfo;
        }
        v31 = v26->static_fields;
        v32 = v31->X_NORMAL_POSITIONS;
        if ( v32 )
        {
          if ( v18 >= v32->max_length )
            goto LABEL_69;
          Y_NORMAL_POSITIONS = v31->Y_NORMAL_POSITIONS;
          if ( Y_NORMAL_POSITIONS )
            goto LABEL_51;
        }
        goto LABEL_68;
      }
      v26 = EventItemWindowMaker_TypeInfo;
      v27 = WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr);
      if ( (v27 & 0x400) != 0 )
      {
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          v26 = EventItemWindowMaker_TypeInfo;
          v27 = WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr);
        }
        v28 = v27 & 0x400;
      }
      else
      {
        v28 = 0;
      }
      static_fields = v26->static_fields;
      X_NORMAL_ONE_POSITION = static_fields->X_NORMAL_ONE_POSITION;
      if ( isEventShop )
      {
        if ( v28 )
        {
LABEL_58:
          if ( !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26);
            static_fields = EventItemWindowMaker_TypeInfo->static_fields;
          }
        }
LABEL_60:
        p_Y_NORMAL_ONE_POSITION_SHOP = &static_fields->Y_NORMAL_ONE_POSITION_EVENT;
        goto LABEL_67;
      }
      if ( !v28 )
        goto LABEL_66;
    }
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    goto LABEL_66;
  }
  switch ( count )
  {
    case 3:
      v26 = EventItemWindowMaker_TypeInfo;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v26 = EventItemWindowMaker_TypeInfo;
      }
      v24 = v26->static_fields;
      X_LIMIT_OVER_POSITIONS = v24->X_LIMIT_OVER_POSITIONS;
      if ( !X_LIMIT_OVER_POSITIONS )
        goto LABEL_68;
      break;
    case 2:
      v26 = EventItemWindowMaker_TypeInfo;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v26 = EventItemWindowMaker_TypeInfo;
      }
      v24 = v26->static_fields;
      X_LIMIT_OVER_POSITIONS = v24->X_LIMIT_OVER_TWO_POSITIONS;
      if ( !X_LIMIT_OVER_POSITIONS )
        goto LABEL_68;
      break;
    case 1:
      v23 = EventItemWindowMaker_TypeInfo;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v23 = EventItemWindowMaker_TypeInfo;
      }
      v24 = v23->static_fields;
      X_NORMAL_ONE_POSITION = v24->X_LIMITOVER_ONE_POSITION;
      goto LABEL_44;
    default:
      v26 = EventItemWindowMaker_TypeInfo;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v26 = EventItemWindowMaker_TypeInfo;
      }
      v36 = v26->static_fields;
      v32 = v36->X_LIMIT_OVER_POSITIONS;
      if ( v32 )
      {
        if ( v18 >= v32->max_length )
          goto LABEL_69;
        Y_NORMAL_POSITIONS = v36->Y_LIMIT_OVER_POSITIONS;
        if ( Y_NORMAL_POSITIONS )
        {
LABEL_51:
          if ( v22 + v19 < Y_NORMAL_POSITIONS->max_length )
          {
            X_NORMAL_ONE_POSITION = v32->m_Items[v18 + 1];
            p_Y_NORMAL_ONE_POSITION_SHOP = &Y_NORMAL_POSITIONS->m_Items[v22 + 1 + v19];
            goto LABEL_67;
          }
LABEL_69:
          sub_B17100(v26, v20, v21);
          sub_B170A0();
        }
      }
LABEL_68:
      sub_B170D4();
  }
  if ( v18 >= X_LIMIT_OVER_POSITIONS->max_length )
    goto LABEL_69;
  X_NORMAL_ONE_POSITION = X_LIMIT_OVER_POSITIONS->m_Items[v18 + 1];
LABEL_44:
  p_Y_NORMAL_ONE_POSITION_SHOP = &v24->Y_LIMIT_OVER_ONE;
LABEL_67:
  v37 = *p_Y_NORMAL_ONE_POSITION_SHOP;
  v38 = 0.0;
  v39 = X_NORMAL_ONE_POSITION;
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
  int32_t WindowAddHeight; // w0
  EventItemWindowMaker_c *v10; // x8
  struct EventItemWindowMaker_StaticFields *static_fields; // x9
  int32_t NORMAL_MAX_COUNT; // w10
  int32_t v13; // w22
  int32_t v14; // w8
  struct EventItemWindowMaker_StaticFields *v16; // x9

  if ( (byte_40F8855 & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    byte_40F8855 = 1;
  }
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  }
  WindowBaseHeight = EventItemWindowMaker__GetWindowBaseHeight(isEventShop, count, isForcedAdjustment, method);
  WindowAddHeight = EventItemWindowMaker__GetWindowAddHeight(0, count, isForcedAdjustment, v8);
  v10 = EventItemWindowMaker_TypeInfo;
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  NORMAL_MAX_COUNT = static_fields->NORMAL_MAX_COUNT;
  if ( NORMAL_MAX_COUNT < count || isForcedAdjustment )
  {
    if ( (WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v10 = EventItemWindowMaker_TypeInfo;
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
      NORMAL_MAX_COUNT = static_fields->NORMAL_MAX_COUNT;
    }
    if ( NORMAL_MAX_COUNT >= count )
    {
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = EventItemWindowMaker_TypeInfo;
        static_fields = EventItemWindowMaker_TypeInfo->static_fields;
      }
      WindowBaseHeight -= static_fields->LIMIT_OVER_WINDOW_REDUCE_HEIGHT;
    }
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventItemWindowMaker_TypeInfo;
    }
    v16 = v10->static_fields;
    if ( v16->LIMIT_OVER_DEFAULT_COUNT < count )
    {
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v16 = EventItemWindowMaker_TypeInfo->static_fields;
      }
      WindowBaseHeight += v16->LIMIT_OVER_WINDOW_ADD_HEIGHT;
    }
    return WindowBaseHeight;
  }
  else
  {
    v13 = WindowAddHeight;
    if ( (WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    if ( static_fields->NORMAL_DEFAULT_COUNT >= count )
      v14 = 0;
    else
      v14 = v13;
    return v14 + WindowBaseHeight;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventItemWindowMaker__GetIsLimitOverWindow(
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v5; // x0

  if ( (byte_40F885B & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, isForcedAdjustment);
    byte_40F885B = 1;
  }
  v5 = EventItemWindowMaker_TypeInfo;
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
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
  bool v6; // w21
  bool IsLimitOverWindow; // w0
  const MethodInfo *v8; // x1
  int32_t MaxColumns; // w0
  int32_t v10; // w19
  const MethodInfo *v11; // x2
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  EventItemWindowMaker_c *v15; // x8
  struct System_Int32_array *LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT; // x8
  int32_t v17; // w19
  int32_t SCOPE_ITEM_INFO_ADD_HEIGHT; // w8
  EventItemWindowMaker_c *v19; // x0

  if ( (byte_40F8857 & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, isForcedAdjustment);
    sub_B16FFC(&FSUtility_TypeInfo, v5);
    byte_40F8857 = 1;
  }
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  }
  v6 = isForcedAdjustment;
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(count, isForcedAdjustment, method);
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v8);
  v10 = UnityEngine_Mathf__CeilToInt((float)count / (float)MaxColumns, 0LL);
  v12 = EventItemWindowMaker__GetIsLimitOverWindow(count, v6, v11);
  v15 = EventItemWindowMaker_TypeInfo;
  if ( v12 )
  {
    if ( (WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v15 = EventItemWindowMaker_TypeInfo;
    }
    LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = v15->static_fields->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT;
    if ( !LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT )
      goto LABEL_11;
  }
  else
  {
    if ( (WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v15 = EventItemWindowMaker_TypeInfo;
    }
    LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = v15->static_fields->NORMAL_ITEM_BASE_WINDOW_HEIGHT;
    if ( !LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT )
LABEL_11:
      sub_B170D4();
  }
  if ( v10 >= LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->max_length )
  {
    sub_B17100(v12, v13, v14);
    sub_B170A0();
  }
  v17 = LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->m_Items[v10 + 1];
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    SCOPE_ITEM_INFO_ADD_HEIGHT = 0;
  }
  else
  {
    v19 = EventItemWindowMaker_TypeInfo;
    if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v19 = EventItemWindowMaker_TypeInfo;
    }
    SCOPE_ITEM_INFO_ADD_HEIGHT = v19->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT;
  }
  return SCOPE_ITEM_INFO_ADD_HEIGHT + v17;
}


float __fastcall EventItemWindowMaker__GetItemBaseWindowX(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  EventItemWindowMaker_c *v3; // x0
  int X_ITEM_BASE_WINDOW_POSITION; // w19

  if ( (byte_40F8856 & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, v1);
    sub_B16FFC(&FSUtility_TypeInfo, v2);
    byte_40F8856 = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v3 = EventItemWindowMaker_TypeInfo;
  }
  X_ITEM_BASE_WINDOW_POSITION = v3->static_fields->X_ITEM_BASE_WINDOW_POSITION;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return (float)X_ITEM_BASE_WINDOW_POSITION - FSUtility__GetOffsetX(68.0, 1, 0LL);
}


int32_t __fastcall EventItemWindowMaker__GetMaxColumns(bool isLimitOverWindow, const MethodInfo *method)
{
  EventItemWindowMaker_c *v3; // x0
  int32_t *p_MAX_COLUMNS_LIMIT_OVER; // x8

  if ( (byte_40F885C & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, method);
    byte_40F885C = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( isLimitOverWindow )
  {
    if ( (WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v3 = EventItemWindowMaker_TypeInfo;
    }
    p_MAX_COLUMNS_LIMIT_OVER = &v3->static_fields->MAX_COLUMNS_LIMIT_OVER;
  }
  else
  {
    if ( (WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v3 = EventItemWindowMaker_TypeInfo;
    }
    p_MAX_COLUMNS_LIMIT_OVER = &v3->static_fields->MAX_COLUMNS_NORMAL;
  }
  return *p_MAX_COLUMNS_LIMIT_OVER;
}


int32_t __fastcall EventItemWindowMaker__GetMaxRows(bool isLimitOverWindow, const MethodInfo *method)
{
  EventItemWindowMaker_c *v3; // x0
  int32_t *p_MAX_ROWS_LIMIT_OVER; // x8

  if ( (byte_40F885D & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, method);
    byte_40F885D = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( isLimitOverWindow )
  {
    if ( (WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v3 = EventItemWindowMaker_TypeInfo;
    }
    p_MAX_ROWS_LIMIT_OVER = &v3->static_fields->MAX_ROWS_LIMIT_OVER;
  }
  else
  {
    if ( (WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v3 = EventItemWindowMaker_TypeInfo;
    }
    p_MAX_ROWS_LIMIT_OVER = &v3->static_fields->MAX_ROWS_NORMAL;
  }
  return *p_MAX_ROWS_LIMIT_OVER;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall EventItemWindowMaker__GetPanelPosition(
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  __int64 v2; // x1
  float z; // s8
  __int64 v4; // x1
  EventItemWindowMaker_c *v5; // x0
  int32x2_t v6; // d9
  unsigned __int64 v7; // d0
  EventItemWindowMaker_c *v8; // x0
  float v9; // s2
  float v10; // s1
  float32x2_t v11; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  if ( (byte_40F8854 & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, v2);
    sub_B16FFC(&FSUtility_TypeInfo, v4);
    byte_40F8854 = 1;
  }
  v5 = EventItemWindowMaker_TypeInfo;
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v5 = EventItemWindowMaker_TypeInfo;
  }
  v6.n64_u64[0] = *(unsigned __int64 *)&v5->static_fields->X_EVENT_ITEM_PANEL_POSITION;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v11.n64_u64[0] = vcvt_f32_s32(v6).n64_u64[0];
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v7 = v11.n64_u64[0];
  }
  else
  {
    v8 = EventItemWindowMaker_TypeInfo;
    if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v8 = EventItemWindowMaker_TypeInfo;
    }
    z = z + 0.0;
    v7 = vadd_f32(v11, vcvt_f32_s32(vrev64_s32(*(int32x2_t *)&v8->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT))).n64_u64[0];
  }
  v9 = z;
  v10 = *((float *)&v7 + 1);
  result.fields.x = *(float *)&v7;
  result.fields.z = v9;
  result.fields.y = v10;
  return result;
}


int32_t __fastcall EventItemWindowMaker__GetRowCount(int32_t count, int32_t maxColumns, const MethodInfo *method)
{
  return UnityEngine_Mathf__CeilToInt((float)count / (float)maxColumns, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventItemWindowMaker__GetWindowAddHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v6; // x0
  __int16 v7; // w8
  int v8; // w9
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  int32_t *p_LIMIT_OVER_WINDOW_ADD_HEIGHT; // x8

  if ( (byte_40F8858 & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    byte_40F8858 = 1;
  }
  v6 = EventItemWindowMaker_TypeInfo;
  v7 = WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v7 & 0x400) != 0 )
  {
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v6 = EventItemWindowMaker_TypeInfo;
      v7 = WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v8 = v7 & 0x400;
  }
  else
  {
    v8 = 0;
  }
  static_fields = v6->static_fields;
  if ( static_fields->NORMAL_MAX_COUNT < count || isForcedAdjustment )
  {
    if ( v8 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    p_LIMIT_OVER_WINDOW_ADD_HEIGHT = &static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT;
  }
  else
  {
    if ( v8 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    p_LIMIT_OVER_WINDOW_ADD_HEIGHT = &static_fields->MIZUGI_WINDOW_ADD_HEIGHT;
  }
  return *p_LIMIT_OVER_WINDOW_ADD_HEIGHT;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventItemWindowMaker__GetWindowBaseHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v7; // x0
  __int16 v8; // w8
  int v9; // w9
  struct EventItemWindowMaker_StaticFields *static_fields; // x8

  if ( (byte_40F8859 & 1) == 0 )
  {
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    byte_40F8859 = 1;
  }
  v7 = EventItemWindowMaker_TypeInfo;
  v8 = WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v8 & 0x400) != 0 )
  {
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v7 = EventItemWindowMaker_TypeInfo;
      v8 = WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v9 = v8 & 0x400;
  }
  else
  {
    v9 = 0;
  }
  static_fields = v7->static_fields;
  if ( static_fields->NORMAL_MAX_COUNT < count || isForcedAdjustment )
  {
    if ( v9 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
  }
  else if ( isEventShop )
  {
    if ( v9 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    static_fields = (struct EventItemWindowMaker_StaticFields *)((char *)static_fields + 8);
  }
  else
  {
    if ( v9 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    static_fields = (struct EventItemWindowMaker_StaticFields *)((char *)static_fields + 4);
  }
  return static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT;
}