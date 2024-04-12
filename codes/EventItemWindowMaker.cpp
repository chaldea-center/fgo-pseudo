void __fastcall EventItemWindowMaker___cctor(const MethodInfo *method)
{
  EventItemWindowMaker_c *v1; // x8
  System_Int32_array **v2; // x0
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  int v10; // w8
  System_Int32_array **v11; // x1
  struct EventItemWindowMaker_StaticFields *static_fields; // x0
  System_Array_o *v13; // x19
  struct EventItemWindowMaker_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  EventItemWindowMaker_c *v21; // x8
  System_Array_o *v22; // x19
  struct EventItemWindowMaker_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Array_o *v30; // x19
  struct EventItemWindowMaker_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int v44; // w8
  System_Int32_array **v45; // x1
  struct EventItemWindowMaker_StaticFields *v46; // x0
  System_Array_o *v47; // x19
  struct EventItemWindowMaker_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Array_o *v55; // x19
  struct EventItemWindowMaker_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  EventItemWindowMaker_c *v63; // x8
  __int64 v64; // x0
  System_RuntimeFieldHandle_o v65; // 0:w1.4
  System_RuntimeFieldHandle_o v66; // 0:w1.4
  System_RuntimeFieldHandle_o v67; // 0:w1.4
  System_RuntimeFieldHandle_o v68; // 0:w1.4
  System_RuntimeFieldHandle_o v69; // 0:w1.4

  if ( (byte_42B114F & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&float___TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD);
    sub_B52984(&Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327);
    sub_B52984(&Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF);
    sub_B52984(&Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499);
    sub_B52984(&Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7);
    byte_42B114F = 1;
  }
  EventItemWindowMaker_TypeInfo->static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT = 170;
  EventItemWindowMaker_TypeInfo->static_fields->NORMAL_WINDOW_BASE_HEIGHT_SHOP = 114;
  v1 = EventItemWindowMaker_TypeInfo;
  EventItemWindowMaker_TypeInfo->static_fields->NORMAL_WINDOW_BASE_HEIGHT_EVENT = 134;
  v1->static_fields->MIZUGI_WINDOW_ADD_HEIGHT = 42;
  v1->static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT = 45;
  v1->static_fields->LIMIT_OVER_WINDOW_REDUCE_HEIGHT = 40;
  v1->static_fields->X_EVENT_ITEM_PANEL_POSITION = -220;
  v1->static_fields->Y_EVENT_ITEM_PANEL_POSITION = 25;
  v1->static_fields->NORMAL_DEFAULT_COUNT = 4;
  v1->static_fields->LIMIT_OVER_DEFAULT_COUNT = 9;
  v1->static_fields->NORMAL_MAX_COUNT = 6;
  v1->static_fields->MAX_COLUMNS_NORMAL = 2;
  v1->static_fields->MAX_ROWS_NORMAL = 3;
  v1->static_fields->MAX_COLUMNS_LIMIT_OVER = 3;
  v1->static_fields->MAX_ROWS_LIMIT_OVER = 4;
  v2 = (System_Int32_array **)sub_B5299C(float___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_11;
  v10 = *((_DWORD *)v2 + 6);
  v11 = v2;
  if ( !v10 || (*((_DWORD *)v2 + 8) = -1027080192, v10 == 1) )
  {
LABEL_10:
    v64 = sub_B52A88(v2);
    sub_B52A28(v64, 0LL);
  }
  *((_DWORD *)v2 + 9) = 1120403456;
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  static_fields->X_NORMAL_POSITIONS = (struct System_Single_array *)v11;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->X_NORMAL_POSITIONS, v11, v4, v5, v6, v7, v8, v9);
  v13 = (System_Array_o *)sub_B5299C(float___TypeInfo, 3LL);
  v65.fields.value = Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v13, v65, 0LL);
  v14 = EventItemWindowMaker_TypeInfo->static_fields;
  v14->Y_NORMAL_POSITIONS = (struct System_Single_array *)v13;
  sub_B52920(
    (BattleServantConfConponent_o *)&v14->Y_NORMAL_POSITIONS,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = EventItemWindowMaker_TypeInfo;
  EventItemWindowMaker_TypeInfo->static_fields->X_NORMAL_ONE_POSITION = 0.0;
  v21->static_fields->Y_NORMAL_ONE_POSITION_EVENT = 58.8;
  v21->static_fields->Y_NORMAL_ONE_POSITION_SHOP = 43.0;
  v22 = (System_Array_o *)sub_B5299C(float___TypeInfo, 3LL);
  v66.fields.value = Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v22, v66, 0LL);
  v23 = EventItemWindowMaker_TypeInfo->static_fields;
  v23->X_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v22;
  sub_B52920(
    (BattleServantConfConponent_o *)&v23->X_LIMIT_OVER_POSITIONS,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Array_o *)sub_B5299C(float___TypeInfo, 4LL);
  v67.fields.value = Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v30, v67, 0LL);
  v31 = EventItemWindowMaker_TypeInfo->static_fields;
  v31->Y_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v30;
  sub_B52920(
    (BattleServantConfConponent_o *)&v31->Y_LIMIT_OVER_POSITIONS,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  EventItemWindowMaker_TypeInfo->static_fields->X_LIMITOVER_ONE_POSITION = -2.0;
  v2 = (System_Int32_array **)sub_B5299C(float___TypeInfo, 2LL);
  if ( !v2 )
LABEL_11:
    sub_B52A5C(v2, v3);
  v44 = *((_DWORD *)v2 + 6);
  v45 = v2;
  if ( !v44 )
    goto LABEL_10;
  *((_DWORD *)v2 + 8) = -1029701632;
  if ( v44 == 1 )
    goto LABEL_10;
  *((_DWORD *)v2 + 9) = 1117782016;
  v46 = EventItemWindowMaker_TypeInfo->static_fields;
  v46->X_LIMIT_OVER_TWO_POSITIONS = (struct System_Single_array *)v45;
  sub_B52920((BattleServantConfConponent_o *)&v46->X_LIMIT_OVER_TWO_POSITIONS, v45, v38, v39, v40, v41, v42, v43);
  EventItemWindowMaker_TypeInfo->static_fields->Y_LIMIT_OVER_ONE = 51.0;
  v47 = (System_Array_o *)sub_B5299C(int___TypeInfo, 4LL);
  v68.fields.value = Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v47, v68, 0LL);
  v48 = EventItemWindowMaker_TypeInfo->static_fields;
  v48->NORMAL_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v47;
  sub_B52920(
    (BattleServantConfConponent_o *)&v48->NORMAL_ITEM_BASE_WINDOW_HEIGHT,
    (System_Int32_array **)v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Array_o *)sub_B5299C(int___TypeInfo, 5LL);
  v69.fields.value = Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v55, v69, 0LL);
  v56 = EventItemWindowMaker_TypeInfo->static_fields;
  v56->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v55;
  sub_B52920(
    (BattleServantConfConponent_o *)&v56->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT,
    (System_Int32_array **)v55,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = EventItemWindowMaker_TypeInfo;
  EventItemWindowMaker_TypeInfo->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT = 33;
  v63->static_fields->SCOPE_ITEM_INFO_ADD_WIDTH = 4;
  v63->static_fields->X_ITEM_BASE_WINDOW_POSITION = -460;
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
  int v21; // w23
  EventItemWindowMaker_c *v22; // x0
  struct EventItemWindowMaker_StaticFields *v23; // x8
  float X_NORMAL_ONE_POSITION; // s8
  EventItemWindowMaker_c *v25; // x0
  __int16 v26; // w8
  int v27; // w9
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  struct System_Single_array *X_NORMAL_POSITIONS; // x9
  struct EventItemWindowMaker_StaticFields *v30; // x9
  struct System_Single_array *v31; // x8
  struct System_Single_array *Y_NORMAL_POSITIONS; // x9
  struct System_Single_array *X_LIMIT_OVER_POSITIONS; // x9
  float *p_Y_NORMAL_ONE_POSITION_SHOP; // x8
  struct EventItemWindowMaker_StaticFields *v35; // x9
  float v36; // s1
  float v37; // s2
  float v38; // s0
  __int64 v39; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B114B & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    byte_42B114B = 1;
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
  v21 = MaxRows - UnityEngine_Mathf__CeilToInt((float)count / v15, 0LL);
  if ( !v11 )
  {
    if ( count == 2 )
    {
      v25 = EventItemWindowMaker_TypeInfo;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v25 = EventItemWindowMaker_TypeInfo;
      }
      static_fields = v25->static_fields;
      X_NORMAL_POSITIONS = static_fields->X_NORMAL_POSITIONS;
      if ( !X_NORMAL_POSITIONS )
        goto LABEL_68;
      if ( v18 >= X_NORMAL_POSITIONS->max_length )
        goto LABEL_69;
      X_NORMAL_ONE_POSITION = X_NORMAL_POSITIONS->m_Items[v18 + 1];
      if ( isEventShop )
      {
        if ( (WORD1(v25->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          goto LABEL_58;
        goto LABEL_60;
      }
      if ( (WORD1(v25->vtable._0_Equals.methodPtr) & 0x400) == 0 )
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
        v25 = EventItemWindowMaker_TypeInfo;
        if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          v25 = EventItemWindowMaker_TypeInfo;
        }
        v30 = v25->static_fields;
        v31 = v30->X_NORMAL_POSITIONS;
        if ( v31 )
        {
          if ( v18 >= v31->max_length )
            goto LABEL_69;
          Y_NORMAL_POSITIONS = v30->Y_NORMAL_POSITIONS;
          if ( Y_NORMAL_POSITIONS )
            goto LABEL_51;
        }
        goto LABEL_68;
      }
      v25 = EventItemWindowMaker_TypeInfo;
      v26 = WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr);
      if ( (v26 & 0x400) != 0 )
      {
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          v25 = EventItemWindowMaker_TypeInfo;
          v26 = WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr);
        }
        v27 = v26 & 0x400;
      }
      else
      {
        v27 = 0;
      }
      static_fields = v25->static_fields;
      X_NORMAL_ONE_POSITION = static_fields->X_NORMAL_ONE_POSITION;
      if ( isEventShop )
      {
        if ( v27 )
        {
LABEL_58:
          if ( !v25->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v25);
            static_fields = EventItemWindowMaker_TypeInfo->static_fields;
          }
        }
LABEL_60:
        p_Y_NORMAL_ONE_POSITION_SHOP = &static_fields->Y_NORMAL_ONE_POSITION_EVENT;
        goto LABEL_67;
      }
      if ( !v27 )
        goto LABEL_66;
    }
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = EventItemWindowMaker_TypeInfo->static_fields;
    }
    goto LABEL_66;
  }
  switch ( count )
  {
    case 3:
      v25 = EventItemWindowMaker_TypeInfo;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v25 = EventItemWindowMaker_TypeInfo;
      }
      v23 = v25->static_fields;
      X_LIMIT_OVER_POSITIONS = v23->X_LIMIT_OVER_POSITIONS;
      if ( !X_LIMIT_OVER_POSITIONS )
        goto LABEL_68;
      break;
    case 2:
      v25 = EventItemWindowMaker_TypeInfo;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v25 = EventItemWindowMaker_TypeInfo;
      }
      v23 = v25->static_fields;
      X_LIMIT_OVER_POSITIONS = v23->X_LIMIT_OVER_TWO_POSITIONS;
      if ( !X_LIMIT_OVER_POSITIONS )
        goto LABEL_68;
      break;
    case 1:
      v22 = EventItemWindowMaker_TypeInfo;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v22 = EventItemWindowMaker_TypeInfo;
      }
      v23 = v22->static_fields;
      X_NORMAL_ONE_POSITION = v23->X_LIMITOVER_ONE_POSITION;
      goto LABEL_44;
    default:
      v25 = EventItemWindowMaker_TypeInfo;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
        v25 = EventItemWindowMaker_TypeInfo;
      }
      v35 = v25->static_fields;
      v31 = v35->X_LIMIT_OVER_POSITIONS;
      if ( v31 )
      {
        if ( v18 >= v31->max_length )
          goto LABEL_69;
        Y_NORMAL_POSITIONS = v35->Y_LIMIT_OVER_POSITIONS;
        if ( Y_NORMAL_POSITIONS )
        {
LABEL_51:
          if ( v21 + v19 < Y_NORMAL_POSITIONS->max_length )
          {
            X_NORMAL_ONE_POSITION = v31->m_Items[v18 + 1];
            p_Y_NORMAL_ONE_POSITION_SHOP = &Y_NORMAL_POSITIONS->m_Items[v21 + 1 + v19];
            goto LABEL_67;
          }
LABEL_69:
          v39 = sub_B52A88(v25);
          sub_B52A28(v39, 0LL);
        }
      }
LABEL_68:
      sub_B52A5C(v25, v20);
  }
  if ( v18 >= X_LIMIT_OVER_POSITIONS->max_length )
    goto LABEL_69;
  X_NORMAL_ONE_POSITION = X_LIMIT_OVER_POSITIONS->m_Items[v18 + 1];
LABEL_44:
  p_Y_NORMAL_ONE_POSITION_SHOP = &v23->Y_LIMIT_OVER_ONE;
LABEL_67:
  v36 = *p_Y_NORMAL_ONE_POSITION_SHOP;
  v37 = 0.0;
  v38 = X_NORMAL_ONE_POSITION;
  result.fields.z = v37;
  result.fields.y = v36;
  result.fields.x = v38;
  return result;
}


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

  if ( (byte_42B1146 & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    byte_42B1146 = 1;
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


bool __fastcall EventItemWindowMaker__GetIsLimitOverWindow(
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v5; // x0

  if ( (byte_42B114C & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    byte_42B114C = 1;
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


int32_t __fastcall EventItemWindowMaker__GetItemBaseWindowHeight(
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  bool v5; // w21
  bool IsLimitOverWindow; // w0
  const MethodInfo *v7; // x1
  int32_t MaxColumns; // w0
  int32_t v9; // w19
  const MethodInfo *v10; // x2
  _BOOL8 v11; // x0
  __int64 v12; // x1
  EventItemWindowMaker_c *v13; // x8
  struct System_Int32_array *LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT; // x8
  int32_t v15; // w19
  int32_t SCOPE_ITEM_INFO_ADD_HEIGHT; // w8
  EventItemWindowMaker_c *v17; // x0
  __int64 v19; // x0

  if ( (byte_42B1148 & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B1148 = 1;
  }
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  }
  v5 = isForcedAdjustment;
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(count, isForcedAdjustment, method);
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v7);
  v9 = UnityEngine_Mathf__CeilToInt((float)count / (float)MaxColumns, 0LL);
  v11 = EventItemWindowMaker__GetIsLimitOverWindow(count, v5, v10);
  v13 = EventItemWindowMaker_TypeInfo;
  if ( v11 )
  {
    if ( (WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v13 = EventItemWindowMaker_TypeInfo;
    }
    LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = v13->static_fields->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT;
    if ( !LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT )
      goto LABEL_11;
  }
  else
  {
    if ( (WORD1(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v13 = EventItemWindowMaker_TypeInfo;
    }
    LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = v13->static_fields->NORMAL_ITEM_BASE_WINDOW_HEIGHT;
    if ( !LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT )
LABEL_11:
      sub_B52A5C(v11, v12);
  }
  if ( v9 >= LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->max_length )
  {
    v19 = sub_B52A88(v11);
    sub_B52A28(v19, 0LL);
  }
  v15 = LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->m_Items[v9 + 1];
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    SCOPE_ITEM_INFO_ADD_HEIGHT = 0;
  }
  else
  {
    v17 = EventItemWindowMaker_TypeInfo;
    if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v17 = EventItemWindowMaker_TypeInfo;
    }
    SCOPE_ITEM_INFO_ADD_HEIGHT = v17->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT;
  }
  return SCOPE_ITEM_INFO_ADD_HEIGHT + v15;
}


float __fastcall EventItemWindowMaker__GetItemBaseWindowX(const MethodInfo *method)
{
  EventItemWindowMaker_c *v1; // x0
  int X_ITEM_BASE_WINDOW_POSITION; // w19

  if ( (byte_42B1147 & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B1147 = 1;
  }
  v1 = EventItemWindowMaker_TypeInfo;
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v1 = EventItemWindowMaker_TypeInfo;
  }
  X_ITEM_BASE_WINDOW_POSITION = v1->static_fields->X_ITEM_BASE_WINDOW_POSITION;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return (float)X_ITEM_BASE_WINDOW_POSITION - FSUtility__GetOffsetX(68.0, 1, 0LL);
}


int32_t __fastcall EventItemWindowMaker__GetMaxColumns(bool isLimitOverWindow, const MethodInfo *method)
{
  EventItemWindowMaker_c *v3; // x0
  int32_t *p_MAX_COLUMNS_LIMIT_OVER; // x8

  if ( (byte_42B114D & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    byte_42B114D = 1;
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

  if ( (byte_42B114E & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    byte_42B114E = 1;
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
  float z; // s8
  EventItemWindowMaker_c *v3; // x0
  int32x2_t v4; // d9
  unsigned __int64 v5; // d0
  EventItemWindowMaker_c *v6; // x0
  float v7; // s2
  float v8; // s1
  float32x2_t v9; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  if ( (byte_42B1145 & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B1145 = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v3 = EventItemWindowMaker_TypeInfo;
  }
  v4.n64_u64[0] = *(unsigned __int64 *)&v3->static_fields->X_EVENT_ITEM_PANEL_POSITION;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v9.n64_u64[0] = vcvt_f32_s32(v4).n64_u64[0];
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v5 = v9.n64_u64[0];
  }
  else
  {
    v6 = EventItemWindowMaker_TypeInfo;
    if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v6 = EventItemWindowMaker_TypeInfo;
    }
    z = z + 0.0;
    v5 = vadd_f32(v9, vcvt_f32_s32(vrev64_s32(*(int32x2_t *)&v6->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT))).n64_u64[0];
  }
  v7 = z;
  v8 = *((float *)&v5 + 1);
  result.fields.x = *(float *)&v5;
  result.fields.z = v7;
  result.fields.y = v8;
  return result;
}


int32_t __fastcall EventItemWindowMaker__GetRowCount(int32_t count, int32_t maxColumns, const MethodInfo *method)
{
  return UnityEngine_Mathf__CeilToInt((float)count / (float)maxColumns, 0LL);
}


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

  if ( (byte_42B1149 & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    byte_42B1149 = 1;
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

  if ( (byte_42B114A & 1) == 0 )
  {
    sub_B52984(&EventItemWindowMaker_TypeInfo);
    byte_42B114A = 1;
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