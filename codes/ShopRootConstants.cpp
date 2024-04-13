void __fastcall ShopRootConstants___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ShopRootConstants_c *v14; // x8
  struct ShopRootConstants_StaticFields *static_fields; // x0
  System_Int32_array **v16; // x1
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  ShopRootConstants_c *v21; // x8
  struct ShopRootConstants_StaticFields *v22; // x9
  struct ShopRootConstants_StaticFields *v23; // x9
  struct ShopRootConstants_StaticFields *v24; // x9
  struct ShopRootConstants_StaticFields *v25; // x9
  struct ShopRootConstants_StaticFields *v26; // x9
  struct ShopRootConstants_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UnityEngine_Rect_o v35; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA6EF & 1) == 0 )
  {
    sub_B5D5C4(&ShopRootConstants_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2606/*"BGM_EVENT_128"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2708/*"Back/back{0}"*/, v11, v12, v13);
    byte_42EA6EF = 1;
  }
  ShopRootConstants_TypeInfo->static_fields->OPEN_TIME = 0.3;
  ShopRootConstants_TypeInfo->static_fields->CLOSE_TIME = 0.3;
  v14 = ShopRootConstants_TypeInfo;
  ShopRootConstants_TypeInfo->static_fields->DEFAULT_FIGURE_ID = 500900;
  v14->static_fields->DEFAULT_FIGURE_LIMIT_CNT = 0;
  static_fields = v14->static_fields;
  v16 = (System_Int32_array **)StringLiteral_2708/*"Back/back{0}"*/;
  static_fields->BG_ROOT = (struct System_String_o *)StringLiteral_2708/*"Back/back{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->BG_ROOT, v16, v2, v3, v4, v5, v6, v7);
  v36.fields.m_Width = 1.0;
  v36.fields.m_XMin = 0.0;
  ShopRootConstants_TypeInfo->static_fields->DEFAULT_BG_ID = 10600;
  v36.fields.m_YMin = 0.41;
  v36.fields.m_Height = 0.5869;
  v35 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v36, v17, v18, v19, v20, (const MethodInfo *)&v35);
  v21 = ShopRootConstants_TypeInfo;
  ShopRootConstants_TypeInfo->static_fields->DISP_RECT = v35;
  v22 = v21->static_fields;
  *(_QWORD *)&v22->DEFAULT_GIFT_POS.fields.x = 0xC37A0000C2F00000LL;
  v22->DEFAULT_GIFT_POS.fields.z = 0.0;
  v23 = v21->static_fields;
  *(_QWORD *)&v23->EVENT_GIFT_POS.fields.x = 0xC2FC0000C2F00000LL;
  v23->EVENT_GIFT_POS.fields.z = 0.0;
  v21->static_fields->SCOPE_GIFT_ADD_X = 10;
  v24 = v21->static_fields;
  *(_QWORD *)&v24->DEFAULT_HELP_BUTTON_POS.fields.x = 0xC401000000000000LL;
  v24->DEFAULT_HELP_BUTTON_POS.fields.z = 0.0;
  v25 = v21->static_fields;
  *(_QWORD *)&v25->EVENT_HELP_BUTTON_POS.fields.x = 0xC3C4000000000000LL;
  v25->EVENT_HELP_BUTTON_POS.fields.z = 0.0;
  v26 = v21->static_fields;
  *(_QWORD *)&v26->SCOPE_HELP_ANCHOR.fields.x = 0x4204000000000000LL;
  v26->SCOPE_HELP_ANCHOR.fields.z = 0.0;
  v21->static_fields->SVT_COSTUME_TITLE_ID = 80319;
  v27 = v21->static_fields;
  v28 = (System_Int32_array **)StringLiteral_2606/*"BGM_EVENT_128"*/;
  v27->SVT_COSTUME_BGM_NAME = (struct System_String_o *)StringLiteral_2606/*"BGM_EVENT_128"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->SVT_COSTUME_BGM_NAME, v28, v29, v30, v31, v32, v33, v34);
}


UnityEngine_Vector3_o __fastcall ShopRootConstants__GetGiftButtonPos(bool isEvent, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  float x; // s9
  float y; // s8
  float z; // s10
  ShopRootConstants_c *v11; // x0
  int SCOPE_GIFT_ADD_X; // w21
  float v13; // s11
  float v14; // s12
  float v15; // s13
  ShopRootConstants_c *v16; // x0
  float *p_OPEN_TIME; // x8
  float *v18; // x8
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float *v22; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA6ED & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ShopRootConstants_TypeInfo, v5, v6, v7);
    byte_42EA6ED = 1;
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
    v11 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v11 = ShopRootConstants_TypeInfo;
    }
    SCOPE_GIFT_ADD_X = v11->static_fields->SCOPE_GIFT_ADD_X;
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
    v24 = UnityEngine_Vector3__get_zero(0LL);
    v13 = v24.fields.x;
    v14 = v24.fields.y;
    v15 = v24.fields.z;
    v16 = ShopRootConstants_TypeInfo;
  }
  else
  {
    v16 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v16 = ShopRootConstants_TypeInfo;
    }
    p_OPEN_TIME = &v16->static_fields->OPEN_TIME;
    v13 = p_OPEN_TIME[24];
    v14 = p_OPEN_TIME[25];
    v15 = p_OPEN_TIME[26];
  }
  if ( isEvent )
  {
    if ( (WORD1(v16->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ShopRootConstants_TypeInfo;
    }
    v18 = &v16->static_fields->OPEN_TIME;
    v19 = x + v18[14];
    v20 = y + v18[15];
    v21 = z + v18[16];
  }
  else
  {
    if ( (WORD1(v16->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ShopRootConstants_TypeInfo;
    }
    v22 = &v16->static_fields->OPEN_TIME;
    v19 = v13 + (float)(x + v22[11]);
    v20 = v14 + (float)(y + v22[12]);
    v21 = v15 + (float)(z + v22[13]);
  }
  result.fields.z = v21;
  result.fields.y = v20;
  result.fields.x = v19;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopRootConstants__GetHelpButtonPos(int32_t state, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  float x; // s8
  float z; // v1.s[1]
  float v10; // s0
  float v11; // s9
  unsigned __int32 v12; // s2
  float32x2_t v13; // d1
  ShopRootConstants_c *v14; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  ShopRootConstants_c *v16; // x0
  struct ShopRootConstants_StaticFields *v17; // x8
  float v18; // s0
  unsigned __int64 v19; // d1
  ShopRootConstants_c *v20; // x0
  float32x2_t *v21; // x8
  float v22; // s0
  float32x2_t v23; // d1
  ShopRootConstants_c *v24; // x0
  struct ShopRootConstants_StaticFields *v25; // x8
  float v26; // s2
  unsigned __int64 v27; // [xsp+0h] [xbp-40h]
  float32x2_t v28; // [xsp+10h] [xbp-30h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA6EC & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ShopRootConstants_TypeInfo, v5, v6, v7);
    byte_42EA6EC = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    z = zero.fields.z;
    v28.n64_u64[0] = *(unsigned __int64 *)&zero.fields.y;
  }
  else
  {
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    x = -FSUtility__GetOffsetX(68.0, 1, 0LL);
    v28.n64_u64[0] = 0LL;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    *(UnityEngine_Vector3_o *)((char *)&v13 - 4) = UnityEngine_Vector3__get_zero(0LL);
    v11 = v10;
    v13.n64_u32[1] = v12;
  }
  else
  {
    v14 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v14 = ShopRootConstants_TypeInfo;
    }
    static_fields = v14->static_fields;
    v11 = static_fields->SCOPE_HELP_ANCHOR.fields.x;
    v13.n64_u64[0] = *(unsigned __int64 *)&static_fields->SCOPE_HELP_ANCHOR.fields.y;
  }
  switch ( state )
  {
    case 1:
    case 5:
      v16 = ShopRootConstants_TypeInfo;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        v27 = v13.n64_u64[0];
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v13.n64_u64[0] = v27;
        v16 = ShopRootConstants_TypeInfo;
      }
      v17 = v16->static_fields;
      v18 = v11 + (float)(x + v17->DEFAULT_HELP_BUTTON_POS.fields.x);
      v19 = vadd_f32(v13, vadd_f32(v28, *(float32x2_t *)&v17->DEFAULT_HELP_BUTTON_POS.fields.y)).n64_u64[0];
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
        v20 = ShopRootConstants_TypeInfo;
        if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v20 = ShopRootConstants_TypeInfo;
        }
        v21 = (float32x2_t *)v20->static_fields;
        v22 = v21[10].n64_f32[1];
        v23.n64_u64[0] = v21[11].n64_u64[0];
      }
      else
      {
LABEL_31:
        v24 = ShopRootConstants_TypeInfo;
        if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v24 = ShopRootConstants_TypeInfo;
        }
        v25 = v24->static_fields;
        v22 = v25->DEFAULT_HELP_BUTTON_POS.fields.x;
        v23.n64_u64[0] = *(unsigned __int64 *)&v25->DEFAULT_HELP_BUTTON_POS.fields.y;
      }
      v18 = x + v22;
      v19 = vadd_f32(v28, v23).n64_u64[0];
LABEL_36:
      v26 = *((float *)&v19 + 1);
      result.fields.y = *(float *)&v19;
      result.fields.z = v26;
      result.fields.x = v18;
      return result;
  }
}


System_String_o *__fastcall ShopRootConstants__GetHelpSaveKey(int32_t state, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 *v17; // x8

  if ( (byte_42EA6EB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13115/*"SpecialItemHelp"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12996/*"Shop15Help"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2004/*"AnonymousHelp"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11410/*"RarePriHelp"*/, v14, v15, v16);
    byte_42EA6EB = 1;
  }
  if ( state > 5 )
  {
    if ( state == 6 )
    {
      v17 = &StringLiteral_2004/*"AnonymousHelp"*/;
      return (System_String_o *)*v17;
    }
    if ( state == 20 )
    {
      v17 = &StringLiteral_12996/*"Shop15Help"*/;
      return (System_String_o *)*v17;
    }
LABEL_10:
    v17 = (__int64 *)&StringLiteral_1/*""*/;
    return (System_String_o *)*v17;
  }
  if ( state == 3 )
  {
    v17 = &StringLiteral_11410/*"RarePriHelp"*/;
    return (System_String_o *)*v17;
  }
  if ( state != 5 )
    goto LABEL_10;
  v17 = &StringLiteral_13115/*"SpecialItemHelp"*/;
  return (System_String_o *)*v17;
}


bool __fastcall ShopRootConstants__IsSvtCostumeShopOpen(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA6EE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12229/*"SHOP04_SHOP_STATE"*/, v1, v2, v3);
    byte_42EA6EE = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_12229/*"SHOP04_SHOP_STATE"*/, 0LL) == 0;
}