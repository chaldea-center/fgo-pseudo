void EventItemWindowMaker___cctor(const MethodInfo *method)
{
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  struct System_Single_array *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  const MethodInfo *v5; // x3
  int max_length; // w8
  struct System_Single_array *v7; // x1
  struct EventItemWindowMaker_StaticFields *v8; // x0
  System_Array_o *v9; // x0
  System_RuntimeFieldHandle_o v10; // x1
  System_Array_o *v11; // x19
  struct EventItemWindowMaker_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct EventItemWindowMaker_StaticFields *v15; // x8
  System_Array_o *v16; // x0
  System_RuntimeFieldHandle_o v17; // x1
  System_Array_o *v18; // x19
  struct EventItemWindowMaker_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Array_o *v22; // x0
  System_RuntimeFieldHandle_o v23; // x1
  System_Array_o *v24; // x19
  struct EventItemWindowMaker_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  int v29; // w8
  struct EventItemWindowMaker_StaticFields *v30; // x0
  System_Array_o *v31; // x0
  System_RuntimeFieldHandle_o v32; // x1
  System_Array_o *v33; // x19
  struct EventItemWindowMaker_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Array_o *v37; // x0
  System_RuntimeFieldHandle_o v38; // x1
  CGThumbnailListItem_c *v39; // x19
  CGThumbnailListItem_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct EventItemWindowMaker_StaticFields *v43; // x8

  if ( (byte_4C2337D & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD);
    sub_1C2D490(&Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327);
    sub_1C2D490(&Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF);
    sub_1C2D490(&Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499);
    sub_1C2D490(&Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7);
    byte_4C2337D = 1;
  }
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT = xmmword_C08FA0;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT = xmmword_C08C10;
  *(_OWORD *)&static_fields->NORMAL_DEFAULT_COUNT = xmmword_C0A490;
  *(_QWORD *)&static_fields->MAX_ROWS_NORMAL = 0x300000003LL;
  static_fields->MAX_ROWS_LIMIT_OVER = 4;
  v2 = (struct System_Single_array *)sub_1C2D538(float___TypeInfo, 2);
  if ( !v2 )
    goto LABEL_11;
  max_length = v2->max_length;
  v7 = v2;
  if ( !max_length || (v2->m_Items[0] = -100.0, max_length == 1) )
LABEL_10:
    sub_1C2D6F4(v2, v7, v4);
  v2->m_Items[1] = 100.0;
  v8 = EventItemWindowMaker_TypeInfo->static_fields;
  v8->X_NORMAL_POSITIONS = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->X_NORMAL_POSITIONS, (int32_t)v7, v4, v5);
  v9 = (System_Array_o *)sub_1C2D538(float___TypeInfo, 3);
  v10.fields.value = Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327;
  v11 = v9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v9, v10, 0);
  v12 = EventItemWindowMaker_TypeInfo->static_fields;
  v12->Y_NORMAL_POSITIONS = (struct System_Single_array *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->Y_NORMAL_POSITIONS, (int32_t)v11, v13, v14);
  v15 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v15->X_NORMAL_ONE_POSITION = 0x426B333300000000LL;
  v15->Y_NORMAL_ONE_POSITION_SHOP = 43.0;
  v16 = (System_Array_o *)sub_1C2D538(float___TypeInfo, 3);
  v17.fields.value = Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499;
  v18 = v16;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v16, v17, 0);
  v19 = EventItemWindowMaker_TypeInfo->static_fields;
  v19->X_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v18;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->X_LIMIT_OVER_POSITIONS, (int32_t)v18, v20, v21);
  v22 = (System_Array_o *)sub_1C2D538(float___TypeInfo, 4);
  v23.fields.value = Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7;
  v24 = v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v22, v23, 0);
  v25 = EventItemWindowMaker_TypeInfo->static_fields;
  v25->Y_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v24;
  sub_1C2D434((CGThumbnailListItem_o *)&v25->Y_LIMIT_OVER_POSITIONS, (int32_t)v24, v26, v27);
  EventItemWindowMaker_TypeInfo->static_fields->X_LIMITOVER_ONE_POSITION = -2.0;
  v2 = (struct System_Single_array *)sub_1C2D538(float___TypeInfo, 2);
  if ( !v2 )
LABEL_11:
    sub_1C2D6EC(v2, v3);
  v29 = v2->max_length;
  v7 = v2;
  if ( !v29 )
    goto LABEL_10;
  v2->m_Items[0] = -80.0;
  if ( v29 == 1 )
    goto LABEL_10;
  v2->m_Items[1] = 80.0;
  v30 = EventItemWindowMaker_TypeInfo->static_fields;
  v30->X_LIMIT_OVER_TWO_POSITIONS = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->X_LIMIT_OVER_TWO_POSITIONS, (int32_t)v7, v4, v28);
  EventItemWindowMaker_TypeInfo->static_fields->Y_LIMIT_OVER_ONE = 51.0;
  v31 = (System_Array_o *)sub_1C2D538(int___TypeInfo, 4);
  v32.fields.value = Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF;
  v33 = v31;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v31, v32, 0);
  v34 = EventItemWindowMaker_TypeInfo->static_fields;
  v34->NORMAL_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v33;
  sub_1C2D434((CGThumbnailListItem_o *)&v34->NORMAL_ITEM_BASE_WINDOW_HEIGHT, (int32_t)v33, v35, v36);
  v37 = (System_Array_o *)sub_1C2D538(int___TypeInfo, 5);
  v38.fields.value = Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD;
  v39 = (CGThumbnailListItem_c *)v37;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v37, v38, 0);
  v40 = (CGThumbnailListItem_o *)EventItemWindowMaker_TypeInfo->static_fields;
  v40[1].klass = v39;
  sub_1C2D434(v40 + 1, (int32_t)v39, v41, v42);
  v43 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v43->SCOPE_ITEM_INFO_ADD_HEIGHT = 0x400000021LL;
  v43->X_ITEM_BASE_WINDOW_POSITION = -460;
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
  __int64 v22; // x2
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

  if ( (byte_4C23379 & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    byte_4C23379 = 1;
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
  if ( !byte_4C20DA0 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA0 = 1;
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
  v23 = MaxRows - EventItemWindowMaker__GetRowCount(count, MaxColumns, v15);
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
          if ( v19 >= LODWORD(X_NORMAL_POSITIONS->max_length) )
            goto LABEL_59;
          Y_LIMIT_OVER_POSITIONS = v36->Y_LIMIT_OVER_POSITIONS;
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
    sub_1C2D6F4(v28, v21, v22);
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
        if ( v19 >= LODWORD(X_NORMAL_POSITIONS->max_length) )
          goto LABEL_59;
        Y_LIMIT_OVER_POSITIONS = v32->Y_NORMAL_POSITIONS;
        if ( Y_LIMIT_OVER_POSITIONS )
        {
LABEL_53:
          if ( v23 + v20 < LODWORD(Y_LIMIT_OVER_POSITIONS->max_length) )
          {
            X_LIMITOVER_ONE_POSITION = X_NORMAL_POSITIONS->m_Items[v19];
            p_Y_LIMIT_OVER_ONE = &Y_LIMIT_OVER_POSITIONS->m_Items[v23 + v20];
            goto LABEL_55;
          }
          goto LABEL_59;
        }
      }
LABEL_58:
      sub_1C2D6EC(v28, v21);
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
  if ( v19 >= LODWORD(v29->max_length) )
    goto LABEL_59;
  X_LIMITOVER_ONE_POSITION = v29->m_Items[v19];
  if ( !v28->_2.cctor_finished )
    goto LABEL_28;
LABEL_29:
  v30 = 88;
  if ( isEventShop )
    v30 = 84;
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

  if ( (byte_4C23374 & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    byte_4C23374 = 1;
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

  if ( (byte_4C2337A & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    byte_4C2337A = 1;
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
  __int64 v14; // x2
  EventItemWindowMaker_c *v15; // x8
  bool v16; // w20
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  struct System_Int32_array *LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT; // x8
  int32_t v19; // w19
  int32_t SCOPE_ITEM_INFO_ADD_HEIGHT; // w8
  EventItemWindowMaker_c *v21; // x0

  if ( (byte_4C23376 & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    sub_1C2D490(&FSUtility_TypeInfo);
    byte_4C23376 = 1;
  }
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  v5 = isForcedAdjustment;
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(count, isForcedAdjustment, method);
  MaxColumns = EventItemWindowMaker__GetMaxColumns(IsLimitOverWindow, v7);
  RowCount = EventItemWindowMaker__GetRowCount(count, MaxColumns, v9);
  v12 = EventItemWindowMaker__GetIsLimitOverWindow(count, v5, v11);
  v15 = EventItemWindowMaker_TypeInfo;
  v16 = v12;
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
      sub_1C2D6EC(v12, v13);
  }
  if ( (unsigned int)RowCount >= LODWORD(LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->max_length) )
    sub_1C2D6F4(v12, v13, v14);
  v19 = LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->m_Items[RowCount];
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
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


float EventItemWindowMaker__GetItemBaseWindowX(const MethodInfo *method)
{
  EventItemWindowMaker_c *v1; // x0
  int X_ITEM_BASE_WINDOW_POSITION; // w19

  if ( (byte_4C23375 & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    sub_1C2D490(&FSUtility_TypeInfo);
    byte_4C23375 = 1;
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

  if ( (byte_4C2337B & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    byte_4C2337B = 1;
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

  if ( (byte_4C2337C & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    byte_4C2337C = 1;
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
  float v7; // s2
  float v8; // s0
  float32x2_t v9; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  if ( (byte_4C23373 & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    sub_1C2D490(&FSUtility_TypeInfo);
    byte_4C23373 = 1;
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
  v7 = z;
  v8 = *((float *)&v5 + 1);
  result.fields.y = *(float *)&v5;
  result.fields.z = v7;
  result.fields.x = v8;
  return result;
}


int32_t EventItemWindowMaker__GetRowCount(int32_t count, int32_t maxColumns, const MethodInfo *method)
{
  float v5; // s0
  int32_t v6; // w8

  if ( !byte_4C21465 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C21465 = 1;
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

  if ( (byte_4C23377 & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    byte_4C23377 = 1;
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

  if ( (byte_4C23378 & 1) == 0 )
  {
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    byte_4C23378 = 1;
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