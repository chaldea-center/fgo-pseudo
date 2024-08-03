void __fastcall EventItemWindowMaker___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  struct System_Single_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  il2cpp_array_size_t max_length; // w8
  struct System_Single_array *v14; // x1
  struct EventItemWindowMaker_StaticFields *v15; // x0
  System_Array_o *v16; // x0
  System_Array_o *v17; // x19
  struct EventItemWindowMaker_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct EventItemWindowMaker_StaticFields *v21; // x8
  System_Array_o *v22; // x0
  System_Array_o *v23; // x19
  struct EventItemWindowMaker_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Array_o *v27; // x0
  System_Array_o *v28; // x19
  struct EventItemWindowMaker_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  il2cpp_array_size_t v34; // w8
  struct EventItemWindowMaker_StaticFields *v35; // x0
  System_Array_o *v36; // x0
  System_Array_o *v37; // x19
  struct EventItemWindowMaker_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Array_o *v41; // x0
  System_Array_o *v42; // x19
  struct EventItemWindowMaker_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct EventItemWindowMaker_StaticFields *v46; // x8
  System_RuntimeFieldHandle_o v47; // 0:w1.4
  System_RuntimeFieldHandle_o v48; // 0:w1.4
  System_RuntimeFieldHandle_o v49; // 0:w1.4
  System_RuntimeFieldHandle_o v50; // 0:w1.4
  System_RuntimeFieldHandle_o v51; // 0:w1.4

  if ( (byte_49F88A8 & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, v1);
    sub_1B640C8(&int___TypeInfo, v2);
    sub_1B640C8(&float___TypeInfo, v3);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD,
      v4);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327,
      v5);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF,
      v6);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499,
      v7);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7,
      v8);
    byte_49F88A8 = 1;
  }
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT = xmmword_BA27F0;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT = xmmword_BA24A0;
  *(_OWORD *)&static_fields->NORMAL_DEFAULT_COUNT = xmmword_BA3C10;
  *(_QWORD *)&static_fields->MAX_ROWS_NORMAL = 0x300000003LL;
  static_fields->MAX_ROWS_LIMIT_OVER = 4;
  v10 = (struct System_Single_array *)sub_1B64170(float___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_11;
  max_length = v10->max_length;
  v14 = v10;
  if ( !max_length || (v10->m_Items[1] = -100.0, max_length == 1) )
LABEL_10:
    sub_1B6432C(v10, v14);
  v10->m_Items[2] = 100.0;
  v15 = EventItemWindowMaker_TypeInfo->static_fields;
  v15->X_NORMAL_POSITIONS = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->X_NORMAL_POSITIONS, (int32_t)v14, v11, v12);
  v16 = (System_Array_o *)sub_1B64170(float___TypeInfo, 3LL);
  v47.fields.value = Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327;
  v17 = v16;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v16, v47, 0LL);
  v18 = EventItemWindowMaker_TypeInfo->static_fields;
  v18->Y_NORMAL_POSITIONS = (struct System_Single_array *)v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->Y_NORMAL_POSITIONS, (int32_t)v17, v19, v20);
  v21 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v21->X_NORMAL_ONE_POSITION = 0x426B333300000000LL;
  v21->Y_NORMAL_ONE_POSITION_SHOP = 43.0;
  v22 = (System_Array_o *)sub_1B64170(float___TypeInfo, 3LL);
  v48.fields.value = Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499;
  v23 = v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v22, v48, 0LL);
  v24 = EventItemWindowMaker_TypeInfo->static_fields;
  v24->X_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->X_LIMIT_OVER_POSITIONS, (int32_t)v23, v25, v26);
  v27 = (System_Array_o *)sub_1B64170(float___TypeInfo, 4LL);
  v49.fields.value = Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7;
  v28 = v27;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v27, v49, 0LL);
  v29 = EventItemWindowMaker_TypeInfo->static_fields;
  v29->Y_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->Y_LIMIT_OVER_POSITIONS, (int32_t)v28, v30, v31);
  EventItemWindowMaker_TypeInfo->static_fields->X_LIMITOVER_ONE_POSITION = -2.0;
  v10 = (struct System_Single_array *)sub_1B64170(float___TypeInfo, 2LL);
  if ( !v10 )
LABEL_11:
    sub_1B64324(v10);
  v34 = v10->max_length;
  v14 = v10;
  if ( !v34 )
    goto LABEL_10;
  v10->m_Items[1] = -80.0;
  if ( v34 == 1 )
    goto LABEL_10;
  v10->m_Items[2] = 80.0;
  v35 = EventItemWindowMaker_TypeInfo->static_fields;
  v35->X_LIMIT_OVER_TWO_POSITIONS = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->X_LIMIT_OVER_TWO_POSITIONS, (int32_t)v14, v32, v33);
  EventItemWindowMaker_TypeInfo->static_fields->Y_LIMIT_OVER_ONE = 51.0;
  v36 = (System_Array_o *)sub_1B64170(int___TypeInfo, 4LL);
  v50.fields.value = Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF;
  v37 = v36;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v36, v50, 0LL);
  v38 = EventItemWindowMaker_TypeInfo->static_fields;
  v38->NORMAL_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->NORMAL_ITEM_BASE_WINDOW_HEIGHT, (int32_t)v37, v39, v40);
  v41 = (System_Array_o *)sub_1B64170(int___TypeInfo, 5LL);
  v51.fields.value = Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD;
  v42 = v41;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v41, v51, 0LL);
  v43 = EventItemWindowMaker_TypeInfo->static_fields;
  v43->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT, (int32_t)v42, v44, v45);
  v46 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v46->SCOPE_ITEM_INFO_ADD_HEIGHT = 0x400000021LL;
  v46->X_ITEM_BASE_WINDOW_POSITION = -460;
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

  if ( (byte_49F88A4 & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&index);
    byte_49F88A4 = 1;
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
  if ( !byte_49F7110 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v15);
    byte_49F7110 = 1;
  }
  v18 = (float)index / (float)MaxColumns;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
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
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
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
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
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
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          v24 = EventItemWindowMaker_TypeInfo;
        }
        static_fields = v24->static_fields;
        X_LIMITOVER_ONE_POSITION = static_fields->X_LIMITOVER_ONE_POSITION;
        goto LABEL_47;
      default:
        v28 = EventItemWindowMaker_TypeInfo;
        if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
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
    sub_1B6432C(v28, v22);
  }
  if ( count != 2 )
  {
    if ( count != 1 )
    {
      v28 = EventItemWindowMaker_TypeInfo;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
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
      sub_1B64324(v28);
    }
    if ( EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      v27 = EventItemWindowMaker_TypeInfo->static_fields;
      X_LIMITOVER_ONE_POSITION = v27->X_NORMAL_ONE_POSITION;
      goto LABEL_29;
    }
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v28 = EventItemWindowMaker_TypeInfo;
    v27 = EventItemWindowMaker_TypeInfo->static_fields;
    X_LIMITOVER_ONE_POSITION = v27->X_NORMAL_ONE_POSITION;
    if ( EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      goto LABEL_29;
LABEL_28:
    j_il2cpp_runtime_class_init_0(v28);
    v27 = EventItemWindowMaker_TypeInfo->static_fields;
    goto LABEL_29;
  }
  v28 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
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
  int32_t WindowAddHeight; // w22
  EventItemWindowMaker_c *v10; // x0
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  bool v12; // w21
  struct EventItemWindowMaker_StaticFields *v13; // x8
  int32_t v15; // w8

  if ( (byte_49F889F & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    byte_49F889F = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventItemWindowMaker__GetIsLimitOverWindow(
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v5; // x0

  if ( (byte_49F88A5 & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, isForcedAdjustment);
    byte_49F88A5 = 1;
  }
  v5 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
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
  const MethodInfo *v10; // x2
  int32_t RowCount; // w19
  const MethodInfo *v12; // x2
  _BOOL8 v13; // x0
  __int64 v14; // x1
  EventItemWindowMaker_c *v15; // x8
  bool v16; // w20
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  struct System_Int32_array *LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT; // x8
  int32_t v19; // w19
  int32_t SCOPE_ITEM_INFO_ADD_HEIGHT; // w8
  EventItemWindowMaker_c *v21; // x0

  if ( (byte_49F88A1 & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, isForcedAdjustment);
    sub_1B640C8(&FSUtility_TypeInfo, v5);
    byte_49F88A1 = 1;
  }
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  v6 = isForcedAdjustment;
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(count, isForcedAdjustment, method);
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v8);
  RowCount = EventItemWindowMaker__GetRowCount(count, MaxColumns, v10);
  v13 = EventItemWindowMaker__GetIsLimitOverWindow(count, v6, v12);
  v15 = EventItemWindowMaker_TypeInfo;
  v16 = v13;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v15 = EventItemWindowMaker_TypeInfo;
  }
  static_fields = v15->static_fields;
  if ( v16 )
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
      sub_1B64324(v13);
  }
  if ( RowCount >= LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->max_length )
    sub_1B6432C(v13, v14);
  v19 = LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->m_Items[RowCount + 1];
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    SCOPE_ITEM_INFO_ADD_HEIGHT = 0;
  }
  else
  {
    v21 = EventItemWindowMaker_TypeInfo;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v21 = EventItemWindowMaker_TypeInfo;
    }
    SCOPE_ITEM_INFO_ADD_HEIGHT = v21->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT;
  }
  return SCOPE_ITEM_INFO_ADD_HEIGHT + v19;
}


float __fastcall EventItemWindowMaker__GetItemBaseWindowX(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  EventItemWindowMaker_c *v3; // x0
  int X_ITEM_BASE_WINDOW_POSITION; // w19

  if ( (byte_49F88A0 & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, v1);
    sub_1B640C8(&FSUtility_TypeInfo, v2);
    byte_49F88A0 = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v3 = EventItemWindowMaker_TypeInfo;
  }
  X_ITEM_BASE_WINDOW_POSITION = v3->static_fields->X_ITEM_BASE_WINDOW_POSITION;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return (float)X_ITEM_BASE_WINDOW_POSITION - FSUtility__GetOffsetX(68.0, 1, 0LL);
}


int32_t __fastcall EventItemWindowMaker__GetMaxColumns(bool isLimitOverWindow, const MethodInfo *method)
{
  EventItemWindowMaker_c *v3; // x0
  __int64 v4; // x9

  if ( (byte_49F88A6 & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, method);
    byte_49F88A6 = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v3 = EventItemWindowMaker_TypeInfo;
  }
  v4 = 44LL;
  if ( isLimitOverWindow )
    v4 = 52LL;
  return *(int32_t *)((char *)&v3->static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT + v4);
}


int32_t __fastcall EventItemWindowMaker__GetMaxRows(bool isLimitOverWindow, const MethodInfo *method)
{
  EventItemWindowMaker_c *v3; // x0
  __int64 v4; // x9

  if ( (byte_49F88A7 & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, method);
    byte_49F88A7 = 1;
  }
  v3 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v3 = EventItemWindowMaker_TypeInfo;
  }
  v4 = 48LL;
  if ( isLimitOverWindow )
    v4 = 56LL;
  return *(int32_t *)((char *)&v3->static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT + v4);
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
  unsigned __int64 v7; // d1
  EventItemWindowMaker_c *v8; // x0
  float v9; // s2
  float v10; // s0
  float32x2_t v11; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  if ( (byte_49F889E & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, v2);
    sub_1B640C8(&FSUtility_TypeInfo, v4);
    byte_49F889E = 1;
  }
  v5 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v5 = EventItemWindowMaker_TypeInfo;
  }
  v6.n64_u64[0] = vrev64_s32(*(int32x2_t *)&v5->static_fields->X_EVENT_ITEM_PANEL_POSITION).n64_u64[0];
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v11.n64_u64[0] = vcvt_f32_s32(v6).n64_u64[0];
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v7 = v11.n64_u64[0];
  }
  else
  {
    v8 = EventItemWindowMaker_TypeInfo;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v8 = EventItemWindowMaker_TypeInfo;
    }
    z = z + 0.0;
    v7 = vadd_f32(v11, vcvt_f32_s32(*(int32x2_t *)&v8->static_fields->SCOPE_ITEM_INFO_ADD_HEIGHT)).n64_u64[0];
  }
  v9 = z;
  v10 = *((float *)&v7 + 1);
  result.fields.y = *(float *)&v7;
  result.fields.z = v9;
  result.fields.x = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventItemWindowMaker__GetRowCount(int32_t count, int32_t maxColumns, const MethodInfo *method)
{
  float v5; // s0
  int32_t v6; // w8

  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, *(_QWORD *)&maxColumns);
    byte_49F779D = 1;
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventItemWindowMaker__GetWindowAddHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  int32_t NORMAL_MAX_COUNT; // w22
  __int64 v8; // x9

  if ( (byte_49F88A2 & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    byte_49F88A2 = 1;
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
  v8 = 12LL;
  if ( NORMAL_MAX_COUNT < count || isForcedAdjustment )
    v8 = 16LL;
  return *(int32_t *)((char *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT + v8);
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

  if ( (byte_49F88A3 & 1) == 0 )
  {
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    byte_49F88A3 = 1;
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