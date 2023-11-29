void __fastcall ShopRootConstants___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  ShopRootConstants_c *v10; // x8
  struct ShopRootConstants_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  ShopRootConstants_c *v17; // x8
  struct ShopRootConstants_StaticFields *v18; // x9
  struct ShopRootConstants_StaticFields *v19; // x9
  struct ShopRootConstants_StaticFields *v20; // x9
  struct ShopRootConstants_StaticFields *v21; // x9
  struct ShopRootConstants_StaticFields *v22; // x9
  struct ShopRootConstants_StaticFields *v23; // x0
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UnityEngine_Rect_o v31; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB7CD & 1) == 0 )
  {
    sub_B16FFC(&ShopRootConstants_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_2542, v8);
    sub_B16FFC(&StringLiteral_2643, v9);
    byte_40FB7CD = 1;
  }
  ShopRootConstants_TypeInfo->static_fields->OPEN_TIME = 0.3;
  ShopRootConstants_TypeInfo->static_fields->CLOSE_TIME = 0.3;
  v10 = ShopRootConstants_TypeInfo;
  ShopRootConstants_TypeInfo->static_fields->DEFAULT_FIGURE_ID = 500900;
  v10->static_fields->DEFAULT_FIGURE_LIMIT_CNT = 0;
  static_fields = v10->static_fields;
  v12 = (System_Int32_array **)StringLiteral_2643;
  static_fields->BG_ROOT = (struct System_String_o *)StringLiteral_2643;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->BG_ROOT, v12, v2, v3, v4, v5, v6, v7);
  v32.fields.m_Width = 1.0;
  v32.fields.m_XMin = 0.0;
  ShopRootConstants_TypeInfo->static_fields->DEFAULT_BG_ID = 10600;
  v32.fields.m_YMin = 0.41;
  v32.fields.m_Height = 0.5869;
  v31 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v32, v13, v14, v15, v16, (const MethodInfo *)&v31);
  v17 = ShopRootConstants_TypeInfo;
  ShopRootConstants_TypeInfo->static_fields->DISP_RECT = v31;
  v18 = v17->static_fields;
  *(_QWORD *)&v18->DEFAULT_GIFT_POS.fields.x = 0xC37A0000C2F00000LL;
  v18->DEFAULT_GIFT_POS.fields.z = 0.0;
  v19 = v17->static_fields;
  *(_QWORD *)&v19->EVENT_GIFT_POS.fields.x = 0xC2FC0000C2F00000LL;
  v19->EVENT_GIFT_POS.fields.z = 0.0;
  v17->static_fields->SCOPE_GIFT_ADD_X = 10;
  v20 = v17->static_fields;
  *(_QWORD *)&v20->DEFAULT_HELP_BUTTON_POS.fields.x = 0xC401000000000000LL;
  v20->DEFAULT_HELP_BUTTON_POS.fields.z = 0.0;
  v21 = v17->static_fields;
  *(_QWORD *)&v21->EVENT_HELP_BUTTON_POS.fields.x = 0xC3C4000000000000LL;
  v21->EVENT_HELP_BUTTON_POS.fields.z = 0.0;
  v22 = v17->static_fields;
  *(_QWORD *)&v22->SCOPE_HELP_ANCHOR.fields.x = 0x4204000000000000LL;
  v22->SCOPE_HELP_ANCHOR.fields.z = 0.0;
  v17->static_fields->SVT_COSTUME_TITLE_ID = 80319;
  v23 = v17->static_fields;
  v24 = (System_Int32_array **)StringLiteral_2542;
  v23->SVT_COSTUME_BGM_NAME = (struct System_String_o *)StringLiteral_2542;
  sub_B16F98((BattleServantConfConponent_o *)&v23->SVT_COSTUME_BGM_NAME, v24, v25, v26, v27, v28, v29, v30);
}


UnityEngine_Vector3_o __fastcall ShopRootConstants__GetGiftButtonPos(bool isEvent, const MethodInfo *method)
{
  __int64 v3; // x1
  float x; // s9
  float y; // s8
  float z; // s10
  ShopRootConstants_c *v7; // x0
  int SCOPE_GIFT_ADD_X; // w21
  float v9; // s11
  float v10; // s12
  float v11; // s13
  ShopRootConstants_c *v12; // x0
  float *p_OPEN_TIME; // x8
  float *v14; // x8
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float *v18; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB7CB & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    sub_B16FFC(&ShopRootConstants_TypeInfo, v3);
    byte_40FB7CB = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
  }
  else
  {
    v7 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v7 = ShopRootConstants_TypeInfo;
    }
    SCOPE_GIFT_ADD_X = v7->static_fields->SCOPE_GIFT_ADD_X;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    y = 0.0;
    x = FSUtility__GetOffsetX(68.0, 0, 0LL) + (float)SCOPE_GIFT_ADD_X;
    z = 0.0;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v20 = UnityEngine_Vector3__get_zero(0LL);
    v9 = v20.fields.x;
    v10 = v20.fields.y;
    v11 = v20.fields.z;
    v12 = ShopRootConstants_TypeInfo;
  }
  else
  {
    v12 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v12 = ShopRootConstants_TypeInfo;
    }
    p_OPEN_TIME = &v12->static_fields->OPEN_TIME;
    v9 = p_OPEN_TIME[24];
    v10 = p_OPEN_TIME[25];
    v11 = p_OPEN_TIME[26];
  }
  if ( isEvent )
  {
    if ( (WORD1(v12->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ShopRootConstants_TypeInfo;
    }
    v14 = &v12->static_fields->OPEN_TIME;
    v15 = x + v14[14];
    v16 = y + v14[15];
    v17 = z + v14[16];
  }
  else
  {
    if ( (WORD1(v12->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ShopRootConstants_TypeInfo;
    }
    v18 = &v12->static_fields->OPEN_TIME;
    v15 = v9 + (float)(x + v18[11]);
    v16 = v10 + (float)(y + v18[12]);
    v17 = v11 + (float)(z + v18[13]);
  }
  result.fields.z = v17;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopRootConstants__GetHelpButtonPos(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  float x; // s8
  float z; // v1.s[1]
  float v6; // s0
  float v7; // s9
  unsigned __int32 v8; // s2
  float32x2_t v9; // d1
  ShopRootConstants_c *v10; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  ShopRootConstants_c *v12; // x0
  struct ShopRootConstants_StaticFields *v13; // x8
  float v14; // s0
  unsigned __int64 v15; // d1
  ShopRootConstants_c *v16; // x0
  float32x2_t *v17; // x8
  float v18; // s0
  float32x2_t v19; // d1
  ShopRootConstants_c *v20; // x0
  struct ShopRootConstants_StaticFields *v21; // x8
  float v22; // s2
  unsigned __int64 v23; // [xsp+0h] [xbp-40h]
  float32x2_t v24; // [xsp+10h] [xbp-30h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB7CA & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    sub_B16FFC(&ShopRootConstants_TypeInfo, v3);
    byte_40FB7CA = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    z = zero.fields.z;
    v24.n64_u64[0] = *(unsigned __int64 *)&zero.fields.y;
  }
  else
  {
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    x = -FSUtility__GetOffsetX(68.0, 1, 0LL);
    v24.n64_u64[0] = 0LL;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    *(UnityEngine_Vector3_o *)((char *)&v9 - 4) = UnityEngine_Vector3__get_zero(0LL);
    v7 = v6;
    v9.n64_u32[1] = v8;
  }
  else
  {
    v10 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v10 = ShopRootConstants_TypeInfo;
    }
    static_fields = v10->static_fields;
    v7 = static_fields->SCOPE_HELP_ANCHOR.fields.x;
    v9.n64_u64[0] = *(unsigned __int64 *)&static_fields->SCOPE_HELP_ANCHOR.fields.y;
  }
  switch ( state )
  {
    case 1:
    case 5:
      v12 = ShopRootConstants_TypeInfo;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        v23 = v9.n64_u64[0];
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v9.n64_u64[0] = v23;
        v12 = ShopRootConstants_TypeInfo;
      }
      v13 = v12->static_fields;
      v14 = v7 + (float)(x + v13->DEFAULT_HELP_BUTTON_POS.fields.x);
      v15 = vadd_f32(v9, vadd_f32(v24, *(float32x2_t *)&v13->DEFAULT_HELP_BUTTON_POS.fields.y)).n64_u64[0];
      goto LABEL_36;
    case 2:
    case 4:
      goto LABEL_31;
    case 3:
    case 6:
      goto LABEL_27;
    default:
      if ( state == 20 )
      {
LABEL_27:
        v16 = ShopRootConstants_TypeInfo;
        if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v16 = ShopRootConstants_TypeInfo;
        }
        v17 = (float32x2_t *)v16->static_fields;
        v18 = v17[10].n64_f32[1];
        v19.n64_u64[0] = v17[11].n64_u64[0];
      }
      else
      {
LABEL_31:
        v20 = ShopRootConstants_TypeInfo;
        if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v20 = ShopRootConstants_TypeInfo;
        }
        v21 = v20->static_fields;
        v18 = v21->DEFAULT_HELP_BUTTON_POS.fields.x;
        v19.n64_u64[0] = *(unsigned __int64 *)&v21->DEFAULT_HELP_BUTTON_POS.fields.y;
      }
      v14 = x + v18;
      v15 = vadd_f32(v24, v19).n64_u64[0];
LABEL_36:
      v22 = *((float *)&v15 + 1);
      result.fields.y = *(float *)&v15;
      result.fields.z = v22;
      result.fields.x = v14;
      return result;
  }
}


System_String_o *__fastcall ShopRootConstants__GetHelpSaveKey(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_40FB7C9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12903, method);
    sub_B16FFC(&StringLiteral_12784, v3);
    sub_B16FFC(&StringLiteral_1971, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    sub_B16FFC(&StringLiteral_11241, v6);
    byte_40FB7C9 = 1;
  }
  if ( state > 5 )
  {
    if ( state == 6 )
    {
      v7 = &StringLiteral_1971;
      return (System_String_o *)*v7;
    }
    if ( state == 20 )
    {
      v7 = &StringLiteral_12784;
      return (System_String_o *)*v7;
    }
LABEL_10:
    v7 = (__int64 *)&StringLiteral_1;
    return (System_String_o *)*v7;
  }
  if ( state == 3 )
  {
    v7 = &StringLiteral_11241;
    return (System_String_o *)*v7;
  }
  if ( state != 5 )
    goto LABEL_10;
  v7 = &StringLiteral_12903;
  return (System_String_o *)*v7;
}


bool __fastcall ShopRootConstants__IsSvtCostumeShopOpen(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FB7CC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12031, v1);
    byte_40FB7CC = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_12031, 0LL) == 0;
}