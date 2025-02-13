void __fastcall EventItemWindowMaker___cctor(const MethodInfo *method)
{
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  _DWORD *v2; // x0
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int v10; // w8
  int64_t v11; // x1
  struct EventItemWindowMaker_StaticFields *v12; // x0
  System_Array_o *v13; // x0
  int64_t v14; // x19
  struct EventItemWindowMaker_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct EventItemWindowMaker_StaticFields *v22; // x8
  System_Array_o *v23; // x0
  int64_t v24; // x19
  struct EventItemWindowMaker_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Array_o *v32; // x0
  int64_t v33; // x19
  struct EventItemWindowMaker_StaticFields *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int v47; // w8
  struct EventItemWindowMaker_StaticFields *v48; // x0
  System_Array_o *v49; // x0
  int64_t v50; // x19
  struct EventItemWindowMaker_StaticFields *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Array_o *v58; // x0
  int64_t v59; // x19
  struct EventItemWindowMaker_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct EventItemWindowMaker_StaticFields *v67; // x8
  System_RuntimeFieldHandle_o v68; // 0:w1.4
  System_RuntimeFieldHandle_o v69; // 0:w1.4
  System_RuntimeFieldHandle_o v70; // 0:w1.4
  System_RuntimeFieldHandle_o v71; // 0:w1.4
  System_RuntimeFieldHandle_o v72; // 0:w1.4

  if ( (byte_4BD8804 & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&float___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD);
    sub_1C21E38(&Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327);
    sub_1C21E38(&Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF);
    sub_1C21E38(&Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499);
    sub_1C21E38(&Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7);
    byte_4BD8804 = 1;
  }
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT = xmmword_BFDB50;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT = xmmword_BFD7E0;
  *(_OWORD *)&static_fields->NORMAL_DEFAULT_COUNT = xmmword_BFEF10;
  *(_QWORD *)&static_fields->MAX_ROWS_NORMAL = 0x300000003LL;
  static_fields->MAX_ROWS_LIMIT_OVER = 4;
  v2 = (_DWORD *)sub_1C21EE0(float___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_11;
  v10 = v2[6];
  v11 = (int64_t)v2;
  if ( !v10 || (v2[8] = -1027080192, v10 == 1) )
LABEL_10:
    sub_1C2209C(v2, v11);
  v2[9] = 1120403456;
  v12 = EventItemWindowMaker_TypeInfo->static_fields;
  v12->X_NORMAL_POSITIONS = (struct System_Single_array *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->X_NORMAL_POSITIONS, v11, v4, v5, v6, v7, v8, v9);
  v13 = (System_Array_o *)sub_1C21EE0(float___TypeInfo, 3LL);
  v68.fields.value = Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327;
  v14 = (int64_t)v13;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v13, v68, 0LL);
  v15 = EventItemWindowMaker_TypeInfo->static_fields;
  v15->Y_NORMAL_POSITIONS = (struct System_Single_array *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->Y_NORMAL_POSITIONS, v14, v16, v17, v18, v19, v20, v21);
  v22 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v22->X_NORMAL_ONE_POSITION = 0x426B333300000000LL;
  v22->Y_NORMAL_ONE_POSITION_SHOP = 43.0;
  v23 = (System_Array_o *)sub_1C21EE0(float___TypeInfo, 3LL);
  v69.fields.value = Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499;
  v24 = (int64_t)v23;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v23, v69, 0LL);
  v25 = EventItemWindowMaker_TypeInfo->static_fields;
  v25->X_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v25->X_LIMIT_OVER_POSITIONS, v24, v26, v27, v28, v29, v30, v31);
  v32 = (System_Array_o *)sub_1C21EE0(float___TypeInfo, 4LL);
  v70.fields.value = Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7;
  v33 = (int64_t)v32;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v32, v70, 0LL);
  v34 = EventItemWindowMaker_TypeInfo->static_fields;
  v34->Y_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v33;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v34->Y_LIMIT_OVER_POSITIONS, v33, v35, v36, v37, v38, v39, v40);
  EventItemWindowMaker_TypeInfo->static_fields->X_LIMITOVER_ONE_POSITION = -2.0;
  v2 = (_DWORD *)sub_1C21EE0(float___TypeInfo, 2LL);
  if ( !v2 )
LABEL_11:
    sub_1C22094(v2, v3);
  v47 = v2[6];
  v11 = (int64_t)v2;
  if ( !v47 )
    goto LABEL_10;
  v2[8] = -1029701632;
  if ( v47 == 1 )
    goto LABEL_10;
  v2[9] = 1117782016;
  v48 = EventItemWindowMaker_TypeInfo->static_fields;
  v48->X_LIMIT_OVER_TWO_POSITIONS = (struct System_Single_array *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v48->X_LIMIT_OVER_TWO_POSITIONS, v11, v41, v42, v43, v44, v45, v46);
  EventItemWindowMaker_TypeInfo->static_fields->Y_LIMIT_OVER_ONE = 51.0;
  v49 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 4LL);
  v71.fields.value = Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF;
  v50 = (int64_t)v49;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v49, v71, 0LL);
  v51 = EventItemWindowMaker_TypeInfo->static_fields;
  v51->NORMAL_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v50;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v51->NORMAL_ITEM_BASE_WINDOW_HEIGHT, v50, v52, v53, v54, v55, v56, v57);
  v58 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 5LL);
  v72.fields.value = Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD;
  v59 = (int64_t)v58;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v58, v72, 0LL);
  v60 = EventItemWindowMaker_TypeInfo->static_fields;
  v60->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v59;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v60->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT, v59, v61, v62, v63, v64, v65, v66);
  v67 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v67->SCOPE_ITEM_INFO_ADD_HEIGHT = 0x400000021LL;
  v67->X_ITEM_BASE_WINDOW_POSITION = -460;
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
  float v36; // s1
  float v37; // s2
  float v38; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8800 & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    byte_4BD8800 = 1;
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
  if ( !byte_4BD6BB0 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB0 = 1;
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
          if ( v19 >= X_NORMAL_POSITIONS->max_length )
            goto LABEL_59;
          Y_LIMIT_OVER_POSITIONS = v35->Y_LIMIT_OVER_POSITIONS;
          if ( Y_LIMIT_OVER_POSITIONS )
            goto LABEL_53;
        }
        goto LABEL_58;
    }
    if ( v19 < X_LIMIT_OVER_POSITIONS->max_length )
    {
      X_LIMITOVER_ONE_POSITION = X_LIMIT_OVER_POSITIONS->m_Items[v19 + 1];
LABEL_47:
      p_Y_LIMIT_OVER_ONE = &static_fields->Y_LIMIT_OVER_ONE;
      goto LABEL_55;
    }
LABEL_59:
    sub_1C2209C(v27, v21);
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
        if ( v19 >= X_NORMAL_POSITIONS->max_length )
          goto LABEL_59;
        Y_LIMIT_OVER_POSITIONS = v31->Y_NORMAL_POSITIONS;
        if ( Y_LIMIT_OVER_POSITIONS )
        {
LABEL_53:
          if ( v22 + v20 < Y_LIMIT_OVER_POSITIONS->max_length )
          {
            X_LIMITOVER_ONE_POSITION = X_NORMAL_POSITIONS->m_Items[v19 + 1];
            p_Y_LIMIT_OVER_ONE = &Y_LIMIT_OVER_POSITIONS->m_Items[v22 + v20 + 1];
            goto LABEL_55;
          }
          goto LABEL_59;
        }
      }
LABEL_58:
      sub_1C22094(v27, v21);
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
  if ( v19 >= v28->max_length )
    goto LABEL_59;
  X_LIMITOVER_ONE_POSITION = v28->m_Items[v19 + 1];
  if ( !v27->_2.cctor_finished )
    goto LABEL_28;
LABEL_29:
  v29 = 88LL;
  if ( isEventShop )
    v29 = 84LL;
  p_Y_LIMIT_OVER_ONE = (float *)((char *)&v26->LIMIT_OVER_WINDOW_BASE_HEIGHT + v29);
LABEL_55:
  v36 = *p_Y_LIMIT_OVER_ONE;
  v37 = 0.0;
  v38 = X_LIMITOVER_ONE_POSITION;
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
  int32_t WindowAddHeight; // w22
  EventItemWindowMaker_c *v10; // x0
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  bool v12; // w21
  struct EventItemWindowMaker_StaticFields *v13; // x8
  int32_t v15; // w8

  if ( (byte_4BD87FB & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    byte_4BD87FB = 1;
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


bool __fastcall EventItemWindowMaker__GetIsLimitOverWindow(
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  EventItemWindowMaker_c *v5; // x0

  if ( (byte_4BD8801 & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    byte_4BD8801 = 1;
  }
  v5 = EventItemWindowMaker_TypeInfo;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BD87FD & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BD87FD = 1;
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
      sub_1C22094(v12, v13);
  }
  if ( RowCount >= LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->max_length )
    sub_1C2209C(v12, v13);
  v18 = LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->m_Items[RowCount + 1];
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
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


float __fastcall EventItemWindowMaker__GetItemBaseWindowX(const MethodInfo *method)
{
  EventItemWindowMaker_c *v1; // x0
  int X_ITEM_BASE_WINDOW_POSITION; // w19

  if ( (byte_4BD87FC & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BD87FC = 1;
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
  return (float)X_ITEM_BASE_WINDOW_POSITION - FSUtility__GetOffsetX(68.0, 1, 0LL);
}


int32_t __fastcall EventItemWindowMaker__GetMaxColumns(bool isLimitOverWindow, const MethodInfo *method)
{
  EventItemWindowMaker_c *v3; // x0
  __int64 v4; // x9

  if ( (byte_4BD8802 & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    byte_4BD8802 = 1;
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

  if ( (byte_4BD8803 & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    byte_4BD8803 = 1;
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
  if ( (byte_4BD87FA & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BD87FA = 1;
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
  if ( FSUtility__IsUnderVista(0LL) )
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


int32_t __fastcall EventItemWindowMaker__GetRowCount(int32_t count, int32_t maxColumns, const MethodInfo *method)
{
  float v5; // s0
  int32_t v6; // w8

  if ( !byte_4BD7265 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD7265 = 1;
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


int32_t __fastcall EventItemWindowMaker__GetWindowAddHeight(
        bool isEventShop,
        int32_t count,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  struct EventItemWindowMaker_StaticFields *static_fields; // x8
  int32_t NORMAL_MAX_COUNT; // w22
  __int64 v8; // x9

  if ( (byte_4BD87FE & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    byte_4BD87FE = 1;
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

  if ( (byte_4BD87FF & 1) == 0 )
  {
    sub_1C21E38(&EventItemWindowMaker_TypeInfo);
    byte_4BD87FF = 1;
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