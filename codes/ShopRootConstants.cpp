void __fastcall ShopRootConstants___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  ShopRootConstants_c *v7; // x8
  struct ShopRootConstants_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  ShopRootConstants_c *v14; // x8
  struct ShopRootConstants_StaticFields *v15; // x9
  struct ShopRootConstants_StaticFields *v16; // x9
  struct ShopRootConstants_StaticFields *v17; // x9
  struct ShopRootConstants_StaticFields *v18; // x9
  struct ShopRootConstants_StaticFields *v19; // x9
  struct ShopRootConstants_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_Rect_o v28; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435373C & 1) == 0 )
  {
    sub_B70694(&ShopRootConstants_TypeInfo);
    sub_B70694(&StringLiteral_2614/*"BGM_EVENT_128"*/);
    sub_B70694(&StringLiteral_2716/*"Back/back{0}"*/);
    byte_435373C = 1;
  }
  ShopRootConstants_TypeInfo->static_fields->OPEN_TIME = 0.3;
  ShopRootConstants_TypeInfo->static_fields->CLOSE_TIME = 0.3;
  v7 = ShopRootConstants_TypeInfo;
  ShopRootConstants_TypeInfo->static_fields->DEFAULT_FIGURE_ID = 500900;
  v7->static_fields->DEFAULT_FIGURE_LIMIT_CNT = 0;
  static_fields = v7->static_fields;
  v9 = (System_Int32_array **)StringLiteral_2716/*"Back/back{0}"*/;
  static_fields->BG_ROOT = (struct System_String_o *)StringLiteral_2716/*"Back/back{0}"*/;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->BG_ROOT, v9, v1, v2, v3, v4, v5, v6);
  v29.fields.m_Width = 1.0;
  v29.fields.m_XMin = 0.0;
  ShopRootConstants_TypeInfo->static_fields->DEFAULT_BG_ID = 10600;
  v29.fields.m_YMin = 0.41;
  v29.fields.m_Height = 0.5869;
  v28 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v29, v10, v11, v12, v13, (const MethodInfo *)&v28);
  v14 = ShopRootConstants_TypeInfo;
  ShopRootConstants_TypeInfo->static_fields->DISP_RECT = v28;
  v15 = v14->static_fields;
  *(_QWORD *)&v15->DEFAULT_GIFT_POS.fields.x = 0xC37A0000C2F00000LL;
  v15->DEFAULT_GIFT_POS.fields.z = 0.0;
  v16 = v14->static_fields;
  *(_QWORD *)&v16->EVENT_GIFT_POS.fields.x = 0xC2FC0000C2F00000LL;
  v16->EVENT_GIFT_POS.fields.z = 0.0;
  v14->static_fields->SCOPE_GIFT_ADD_X = 10;
  v17 = v14->static_fields;
  *(_QWORD *)&v17->DEFAULT_HELP_BUTTON_POS.fields.x = 0xC401000000000000LL;
  v17->DEFAULT_HELP_BUTTON_POS.fields.z = 0.0;
  v18 = v14->static_fields;
  *(_QWORD *)&v18->EVENT_HELP_BUTTON_POS.fields.x = 0xC3C4000000000000LL;
  v18->EVENT_HELP_BUTTON_POS.fields.z = 0.0;
  v19 = v14->static_fields;
  *(_QWORD *)&v19->SCOPE_HELP_ANCHOR.fields.x = 0x4204000000000000LL;
  v19->SCOPE_HELP_ANCHOR.fields.z = 0.0;
  v14->static_fields->SVT_COSTUME_TITLE_ID = 80319;
  v20 = v14->static_fields;
  v21 = (System_Int32_array **)StringLiteral_2614/*"BGM_EVENT_128"*/;
  v20->SVT_COSTUME_BGM_NAME = (struct System_String_o *)StringLiteral_2614/*"BGM_EVENT_128"*/;
  sub_B70630((BattleServantConfConponent_o *)&v20->SVT_COSTUME_BGM_NAME, v21, v22, v23, v24, v25, v26, v27);
}


UnityEngine_Vector3_o __fastcall ShopRootConstants__GetGiftButtonPos(bool isEvent, const MethodInfo *method)
{
  float x; // s9
  float y; // s8
  float z; // s10
  ShopRootConstants_c *v6; // x0
  int SCOPE_GIFT_ADD_X; // w21
  float v8; // s11
  float v9; // s12
  float v10; // s13
  ShopRootConstants_c *v11; // x0
  float *p_OPEN_TIME; // x8
  float *v13; // x8
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float *v17; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_435373A & 1) == 0 )
  {
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&ShopRootConstants_TypeInfo);
    byte_435373A = 1;
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
    v6 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v6 = ShopRootConstants_TypeInfo;
    }
    SCOPE_GIFT_ADD_X = v6->static_fields->SCOPE_GIFT_ADD_X;
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
    v19 = UnityEngine_Vector3__get_zero(0LL);
    v8 = v19.fields.x;
    v9 = v19.fields.y;
    v10 = v19.fields.z;
    v11 = ShopRootConstants_TypeInfo;
  }
  else
  {
    v11 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v11 = ShopRootConstants_TypeInfo;
    }
    p_OPEN_TIME = &v11->static_fields->OPEN_TIME;
    v8 = p_OPEN_TIME[24];
    v9 = p_OPEN_TIME[25];
    v10 = p_OPEN_TIME[26];
  }
  if ( isEvent )
  {
    if ( (WORD1(v11->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ShopRootConstants_TypeInfo;
    }
    v13 = &v11->static_fields->OPEN_TIME;
    v14 = x + v13[14];
    v15 = y + v13[15];
    v16 = z + v13[16];
  }
  else
  {
    if ( (WORD1(v11->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ShopRootConstants_TypeInfo;
    }
    v17 = &v11->static_fields->OPEN_TIME;
    v14 = v8 + (float)(x + v17[11]);
    v15 = v9 + (float)(y + v17[12]);
    v16 = v10 + (float)(z + v17[13]);
  }
  result.fields.z = v16;
  result.fields.y = v15;
  result.fields.x = v14;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopRootConstants__GetHelpButtonPos(int32_t state, const MethodInfo *method)
{
  float x; // s8
  float z; // v1.s[1]
  float v5; // s0
  float v6; // s9
  unsigned __int32 v7; // s2
  float32x2_t v8; // d1
  ShopRootConstants_c *v9; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  ShopRootConstants_c *v11; // x0
  struct ShopRootConstants_StaticFields *v12; // x8
  float v13; // s0
  unsigned __int64 v14; // d1
  ShopRootConstants_c *v15; // x0
  float32x2_t *v16; // x8
  float v17; // s0
  float32x2_t v18; // d1
  ShopRootConstants_c *v19; // x0
  struct ShopRootConstants_StaticFields *v20; // x8
  float v21; // s2
  unsigned __int64 v22; // [xsp+0h] [xbp-40h]
  float32x2_t v23; // [xsp+10h] [xbp-30h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353739 & 1) == 0 )
  {
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&ShopRootConstants_TypeInfo);
    byte_4353739 = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    z = zero.fields.z;
    v23.n64_u64[0] = *(unsigned __int64 *)&zero.fields.y;
  }
  else
  {
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    x = -FSUtility__GetOffsetX(68.0, 1, 0LL);
    v23.n64_u64[0] = 0LL;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    *(UnityEngine_Vector3_o *)((char *)&v8 - 4) = UnityEngine_Vector3__get_zero(0LL);
    v6 = v5;
    v8.n64_u32[1] = v7;
  }
  else
  {
    v9 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v9 = ShopRootConstants_TypeInfo;
    }
    static_fields = v9->static_fields;
    v6 = static_fields->SCOPE_HELP_ANCHOR.fields.x;
    v8.n64_u64[0] = *(unsigned __int64 *)&static_fields->SCOPE_HELP_ANCHOR.fields.y;
  }
  switch ( state )
  {
    case 1:
    case 5:
      v11 = ShopRootConstants_TypeInfo;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        v22 = v8.n64_u64[0];
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v8.n64_u64[0] = v22;
        v11 = ShopRootConstants_TypeInfo;
      }
      v12 = v11->static_fields;
      v13 = v6 + (float)(x + v12->DEFAULT_HELP_BUTTON_POS.fields.x);
      v14 = vadd_f32(v8, vadd_f32(v23, *(float32x2_t *)&v12->DEFAULT_HELP_BUTTON_POS.fields.y)).n64_u64[0];
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
        v15 = ShopRootConstants_TypeInfo;
        if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v15 = ShopRootConstants_TypeInfo;
        }
        v16 = (float32x2_t *)v15->static_fields;
        v17 = v16[10].n64_f32[1];
        v18.n64_u64[0] = v16[11].n64_u64[0];
      }
      else
      {
LABEL_31:
        v19 = ShopRootConstants_TypeInfo;
        if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v19 = ShopRootConstants_TypeInfo;
        }
        v20 = v19->static_fields;
        v17 = v20->DEFAULT_HELP_BUTTON_POS.fields.x;
        v18.n64_u64[0] = *(unsigned __int64 *)&v20->DEFAULT_HELP_BUTTON_POS.fields.y;
      }
      v13 = x + v17;
      v14 = vadd_f32(v23, v18).n64_u64[0];
LABEL_36:
      v21 = *((float *)&v14 + 1);
      result.fields.y = *(float *)&v14;
      result.fields.z = v21;
      result.fields.x = v13;
      return result;
  }
}


System_String_o *__fastcall ShopRootConstants__GetHelpSaveKey(int32_t state, const MethodInfo *method)
{
  __int64 *v3; // x8

  if ( (byte_4353738 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_13138/*"SpecialItemHelp"*/);
    sub_B70694(&StringLiteral_13019/*"Shop15Help"*/);
    sub_B70694(&StringLiteral_2009/*"AnonymousHelp"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_11431/*"RarePriHelp"*/);
    byte_4353738 = 1;
  }
  if ( state > 5 )
  {
    if ( state == 6 )
    {
      v3 = &StringLiteral_2009/*"AnonymousHelp"*/;
      return (System_String_o *)*v3;
    }
    if ( state == 20 )
    {
      v3 = &StringLiteral_13019/*"Shop15Help"*/;
      return (System_String_o *)*v3;
    }
LABEL_10:
    v3 = (__int64 *)&StringLiteral_1/*""*/;
    return (System_String_o *)*v3;
  }
  if ( state == 3 )
  {
    v3 = &StringLiteral_11431/*"RarePriHelp"*/;
    return (System_String_o *)*v3;
  }
  if ( state != 5 )
    goto LABEL_10;
  v3 = &StringLiteral_13138/*"SpecialItemHelp"*/;
  return (System_String_o *)*v3;
}


bool __fastcall ShopRootConstants__IsSvtCostumeShopOpen(const MethodInfo *method)
{
  if ( (byte_435373B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12250/*"SHOP04_SHOP_STATE"*/);
    byte_435373B = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_12250/*"SHOP04_SHOP_STATE"*/, 0LL) == 0;
}