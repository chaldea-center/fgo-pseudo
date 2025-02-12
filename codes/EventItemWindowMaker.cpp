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
  _DWORD *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int v18; // w8
  int64_t v19; // x1
  struct EventItemWindowMaker_StaticFields *v20; // x0
  System_Array_o *v21; // x0
  int64_t v22; // x19
  struct EventItemWindowMaker_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct EventItemWindowMaker_StaticFields *v30; // x8
  System_Array_o *v31; // x0
  int64_t v32; // x19
  struct EventItemWindowMaker_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Array_o *v40; // x0
  int64_t v41; // x19
  struct EventItemWindowMaker_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int v55; // w8
  struct EventItemWindowMaker_StaticFields *v56; // x0
  System_Array_o *v57; // x0
  int64_t v58; // x19
  struct EventItemWindowMaker_StaticFields *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Array_o *v66; // x0
  int64_t v67; // x19
  struct EventItemWindowMaker_StaticFields *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct EventItemWindowMaker_StaticFields *v75; // x8
  System_RuntimeFieldHandle_o v76; // 0:w1.4
  System_RuntimeFieldHandle_o v77; // 0:w1.4
  System_RuntimeFieldHandle_o v78; // 0:w1.4
  System_RuntimeFieldHandle_o v79; // 0:w1.4
  System_RuntimeFieldHandle_o v80; // 0:w1.4

  if ( (byte_4BB09C7 & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, v1);
    sub_1C13D24(&int___TypeInfo, v2);
    sub_1C13D24(&float___TypeInfo, v3);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD,
      v4);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327,
      v5);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF,
      v6);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499,
      v7);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7,
      v8);
    byte_4BB09C7 = 1;
  }
  static_fields = EventItemWindowMaker_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_BASE_HEIGHT = xmmword_BF5F50;
  *(_OWORD *)&static_fields->LIMIT_OVER_WINDOW_ADD_HEIGHT = xmmword_BF5BE0;
  *(_OWORD *)&static_fields->NORMAL_DEFAULT_COUNT = xmmword_BF7350;
  *(_QWORD *)&static_fields->MAX_ROWS_NORMAL = 0x300000003LL;
  static_fields->MAX_ROWS_LIMIT_OVER = 4;
  v10 = (_DWORD *)sub_1C13DCC(float___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_11;
  v18 = v10[6];
  v19 = (int64_t)v10;
  if ( !v18 || (v10[8] = -1027080192, v18 == 1) )
LABEL_10:
    sub_1C13F88(v10, v19);
  v10[9] = 1120403456;
  v20 = EventItemWindowMaker_TypeInfo->static_fields;
  v20->X_NORMAL_POSITIONS = (struct System_Single_array *)v19;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v20->X_NORMAL_POSITIONS, v19, v12, v13, v14, v15, v16, v17);
  v21 = (System_Array_o *)sub_1C13DCC(float___TypeInfo, 3LL);
  v76.fields.value = Field__PrivateImplementationDetails__71D1A658FF2FA50F7694FC8A7C287C2CD9B92497C646C79707C0C81D99C20327;
  v22 = (int64_t)v21;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v21, v76, 0LL);
  v23 = EventItemWindowMaker_TypeInfo->static_fields;
  v23->Y_NORMAL_POSITIONS = (struct System_Single_array *)v22;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->Y_NORMAL_POSITIONS, v22, v24, v25, v26, v27, v28, v29);
  v30 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v30->X_NORMAL_ONE_POSITION = 0x426B333300000000LL;
  v30->Y_NORMAL_ONE_POSITION_SHOP = 43.0;
  v31 = (System_Array_o *)sub_1C13DCC(float___TypeInfo, 3LL);
  v77.fields.value = Field__PrivateImplementationDetails__E7986B0CC6AFD5693D407FE1D03B289AC4D96BC21666A109A987DC69CBA49499;
  v32 = (int64_t)v31;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v31, v77, 0LL);
  v33 = EventItemWindowMaker_TypeInfo->static_fields;
  v33->X_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v32;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v33->X_LIMIT_OVER_POSITIONS, v32, v34, v35, v36, v37, v38, v39);
  v40 = (System_Array_o *)sub_1C13DCC(float___TypeInfo, 4LL);
  v78.fields.value = Field__PrivateImplementationDetails__EC9A5A643F4380691BD71B254D28DB6E668D0421F6316D9D8FC8C332301295D7;
  v41 = (int64_t)v40;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v40, v78, 0LL);
  v42 = EventItemWindowMaker_TypeInfo->static_fields;
  v42->Y_LIMIT_OVER_POSITIONS = (struct System_Single_array *)v41;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v42->Y_LIMIT_OVER_POSITIONS, v41, v43, v44, v45, v46, v47, v48);
  EventItemWindowMaker_TypeInfo->static_fields->X_LIMITOVER_ONE_POSITION = -2.0;
  v10 = (_DWORD *)sub_1C13DCC(float___TypeInfo, 2LL);
  if ( !v10 )
LABEL_11:
    sub_1C13F80(v10, v11);
  v55 = v10[6];
  v19 = (int64_t)v10;
  if ( !v55 )
    goto LABEL_10;
  v10[8] = -1029701632;
  if ( v55 == 1 )
    goto LABEL_10;
  v10[9] = 1117782016;
  v56 = EventItemWindowMaker_TypeInfo->static_fields;
  v56->X_LIMIT_OVER_TWO_POSITIONS = (struct System_Single_array *)v19;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v56->X_LIMIT_OVER_TWO_POSITIONS, v19, v49, v50, v51, v52, v53, v54);
  EventItemWindowMaker_TypeInfo->static_fields->Y_LIMIT_OVER_ONE = 51.0;
  v57 = (System_Array_o *)sub_1C13DCC(int___TypeInfo, 4LL);
  v79.fields.value = Field__PrivateImplementationDetails__D83DD4D6E09D0FB50249A80793CEC793DF676933B89DE246E16B3CEA541E0BAF;
  v58 = (int64_t)v57;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v57, v79, 0LL);
  v59 = EventItemWindowMaker_TypeInfo->static_fields;
  v59->NORMAL_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v58;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v59->NORMAL_ITEM_BASE_WINDOW_HEIGHT, v58, v60, v61, v62, v63, v64, v65);
  v66 = (System_Array_o *)sub_1C13DCC(int___TypeInfo, 5LL);
  v80.fields.value = Field__PrivateImplementationDetails__3FB54EFF0CF17DC7FF006FA7182D1C99659ED820E3E1B626643EC55951FE13BD;
  v67 = (int64_t)v66;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v66, v80, 0LL);
  v68 = EventItemWindowMaker_TypeInfo->static_fields;
  v68->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT = (struct System_Int32_array *)v67;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v68->LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT, v67, v69, v70, v71, v72, v73, v74);
  v75 = EventItemWindowMaker_TypeInfo->static_fields;
  *(_QWORD *)&v75->SCOPE_ITEM_INFO_ADD_HEIGHT = 0x400000021LL;
  v75->X_ITEM_BASE_WINDOW_POSITION = -460;
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

  if ( (byte_4BB09C3 & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&index);
    byte_4BB09C3 = 1;
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
  if ( !byte_4BAEDA0 )
  {
    sub_1C13D24(&System_Math_TypeInfo, v15);
    byte_4BAEDA0 = 1;
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
    sub_1C13F88(v28, v22);
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
      sub_1C13F80(v28, v22);
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

  if ( (byte_4BB09BE & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    byte_4BB09BE = 1;
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

  if ( (byte_4BB09C4 & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, isForcedAdjustment);
    byte_4BB09C4 = 1;
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

  if ( (byte_4BB09C0 & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, isForcedAdjustment);
    sub_1C13D24(&FSUtility_TypeInfo, v5);
    byte_4BB09C0 = 1;
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
      sub_1C13F80(v13, v14);
  }
  if ( RowCount >= LIMIT_OVER_ITEM_BASE_WINDOW_HEIGHT->max_length )
    sub_1C13F88(v13, v14);
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

  if ( (byte_4BB09BF & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, v1);
    sub_1C13D24(&FSUtility_TypeInfo, v2);
    byte_4BB09BF = 1;
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

  if ( (byte_4BB09C5 & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, method);
    byte_4BB09C5 = 1;
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

  if ( (byte_4BB09C6 & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, method);
    byte_4BB09C6 = 1;
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
  if ( (byte_4BB09BD & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, v2);
    sub_1C13D24(&FSUtility_TypeInfo, v4);
    byte_4BB09BD = 1;
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

  if ( !byte_4BAF44E )
  {
    sub_1C13D24(&System_Math_TypeInfo, *(_QWORD *)&maxColumns);
    byte_4BAF44E = 1;
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

  if ( (byte_4BB09C1 & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    byte_4BB09C1 = 1;
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

  if ( (byte_4BB09C2 & 1) == 0 )
  {
    sub_1C13D24(&EventItemWindowMaker_TypeInfo, *(_QWORD *)&count);
    byte_4BB09C2 = 1;
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