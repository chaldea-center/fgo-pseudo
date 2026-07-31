void ShopRootConstants___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct ShopRootConstants_StaticFields *static_fields; // x0
  ShopRootConstants_c *v9; // x8
  __int64 v10; // x1
  struct ShopRootConstants_StaticFields *v11; // x9
  struct ShopRootConstants_StaticFields *v12; // x10
  struct ShopRootConstants_StaticFields *v13; // x9
  struct ShopRootConstants_StaticFields *v14; // x9
  struct ShopRootConstants_StaticFields *v15; // x9
  struct ShopRootConstants_StaticFields *v16; // x10
  struct ShopRootConstants_StaticFields *v17; // x9
  struct ShopRootConstants_StaticFields *v18; // x9
  struct ShopRootConstants_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_59347E1 & 1) == 0 )
  {
    sub_21FFC50(&ShopRootConstants_TypeInfo);
    sub_21FFC50(&StringLiteral_3031/*"BGM_EVENT_128"*/);
    sub_21FFC50(&StringLiteral_3151/*"Back/back{0}"*/);
    byte_59347E1 = 1;
  }
  v7 = StringLiteral_3151/*"Back/back{0}"*/;
  static_fields = ShopRootConstants_TypeInfo->static_fields;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
  *(_QWORD *)&static_fields->DEFAULT_FIGURE_ID = 500900;
  static_fields->BG_ROOT = (struct System_String_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->BG_ROOT, v7, v1, v2, v3, v4, v5, v6);
  v9 = ShopRootConstants_TypeInfo;
  v10 = StringLiteral_3031/*"BGM_EVENT_128"*/;
  v11 = ShopRootConstants_TypeInfo->static_fields;
  v11->DISP_RECT = (struct UnityEngine_Rect_o)xmmword_E93560;
  v12 = v9->static_fields;
  v11->DEFAULT_BG_ID = 10600;
  *(_QWORD *)&v12->DEFAULT_GIFT_POS.fields.x = 0xC37A0000C2F00000LL;
  v12->DEFAULT_GIFT_POS.fields.z = 0.0;
  v13 = v9->static_fields;
  *(_QWORD *)&v13->EVENT_GIFT_POS.fields.x = 0xC2FC0000C2F00000LL;
  v13->EVENT_GIFT_POS.fields.z = 0.0;
  v14 = v9->static_fields;
  *(_QWORD *)&v14->ClassBoardResetGiftPos.fields.x = 0xC2880000C2F00000LL;
  v14->ClassBoardResetGiftPos.fields.z = 0.0;
  v15 = v9->static_fields;
  *(_QWORD *)&v15->DEFAULT_HELP_BUTTON_POS.fields.x = 0xC401000000000000LL;
  v15->DEFAULT_HELP_BUTTON_POS.fields.z = 0.0;
  v16 = v9->static_fields;
  v15->SCOPE_GIFT_ADD_X = 10;
  *(_QWORD *)&v16->EVENT_HELP_BUTTON_POS.fields.x = 0xC3C4000000000000LL;
  v16->EVENT_HELP_BUTTON_POS.fields.z = 0.0;
  v17 = v9->static_fields;
  *(_QWORD *)&v17->ClassBoardResetHelpButtonPos.fields.x = 0xC3A7000000000000LL;
  v17->ClassBoardResetHelpButtonPos.fields.z = 0.0;
  v18 = v9->static_fields;
  *(_QWORD *)&v18->SCOPE_HELP_ANCHOR.fields.x = 0x4204000000000000LL;
  v18->SCOPE_HELP_ANCHOR.fields.z = 0.0;
  v19 = v9->static_fields;
  v19->SVT_COSTUME_TITLE_ID = 80319;
  v19->SVT_COSTUME_BGM_NAME = (struct System_String_o *)v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->SVT_COSTUME_BGM_NAME, v10, v20, v21, v22, v23, v24, v25);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o ShopRootConstants__GetGiftButtonPos(bool isEvent, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  ShopRootConstants_c *v9; // x0
  int SCOPE_GIFT_ADD_X; // w25
  __int64 v11; // x1
  __int64 v12; // x2
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x9
  float *p_z; // x10
  ShopRootConstants_c *v16; // x0
  struct ShopRootConstants_StaticFields *v17; // x10
  ShopRootConstants_c *v18; // x0
  int v19; // w11
  struct ShopRootConstants_StaticFields *v20; // x8
  float32x2_t v21; // d0
  float v22; // s1
  float32x2_t *v23; // x8
  unsigned __int64 v24; // d0
  float v25; // s2
  float32x2_t v26; // d3
  unsigned __int32 v27; // s4
  float v28; // s9
  struct ShopRootConstants_StaticFields *v29; // x8
  float v30; // s1
  unsigned __int32 v31; // [xsp+0h] [xbp-80h]
  float x; // [xsp+10h] [xbp-70h]
  float32x2_t v33; // [xsp+20h] [xbp-60h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59347DF & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&ShopRootConstants_TypeInfo);
    byte_59347DF = 1;
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, *(_QWORD *)&state, method);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v33.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  }
  else
  {
    v9 = ShopRootConstants_TypeInfo;
    if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v5, v6);
      v9 = ShopRootConstants_TypeInfo;
    }
    SCOPE_GIFT_ADD_X = v9->static_fields->SCOPE_GIFT_ADD_X;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v5, v6);
    z = 0.0;
    v33.n64_u64[0] = COERCE_UNSIGNED_INT(FSUtility__GetOffsetX(68.0, 2, 0) + (float)SCOPE_GIFT_ADD_X);
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v5, v6);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    p_SCOPE_HELP_ANCHOR = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.y;
    p_z = &p_SCOPE_HELP_ANCHOR->zeroVector.fields.z;
  }
  else
  {
    v16 = ShopRootConstants_TypeInfo;
    if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v11, v12);
      v16 = ShopRootConstants_TypeInfo;
    }
    v17 = v16->static_fields;
    p_SCOPE_HELP_ANCHOR = (struct UnityEngine_Vector3_StaticFields *)&v17->SCOPE_HELP_ANCHOR;
    p_y = (unsigned __int32 *)&v17->SCOPE_HELP_ANCHOR.fields.y;
    p_z = &v17->SCOPE_HELP_ANCHOR.fields.z;
  }
  v18 = ShopRootConstants_TypeInfo;
  v19 = *(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1);
  if ( state == 22 )
  {
    if ( !v19 )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v11, v12);
      v18 = ShopRootConstants_TypeInfo;
    }
    v20 = v18->static_fields;
    v21.n64_u64[0] = *(unsigned __int64 *)&v20->ClassBoardResetGiftPos.fields.x;
    v22 = v20->ClassBoardResetGiftPos.fields.z;
LABEL_31:
    v24 = vadd_f32(v33, v21).n64_u64[0];
    v25 = z + v22;
    goto LABEL_35;
  }
  if ( isEvent )
  {
    if ( !v19 )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v11, v12);
      v18 = ShopRootConstants_TypeInfo;
    }
    v23 = (float32x2_t *)v18->static_fields;
    v21.n64_u64[0] = v23[7].n64_u64[0];
    v22 = v23[8].n64_f32[0];
    goto LABEL_31;
  }
  v26.n64_u32[0] = LODWORD(p_SCOPE_HELP_ANCHOR->zeroVector.fields.x);
  v27 = *p_y;
  v28 = *p_z;
  if ( !v19 )
  {
    v31 = *p_y;
    x = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v11, v12);
    v27 = v31;
    v26.n64_f32[0] = x;
    v18 = ShopRootConstants_TypeInfo;
  }
  v29 = v18->static_fields;
  v26.n64_u32[1] = v27;
  v24 = vadd_f32(v26, vadd_f32(v33, *(float32x2_t *)&v29->DEFAULT_GIFT_POS.fields.x)).n64_u64[0];
  v25 = v28 + (float)(z + v29->DEFAULT_GIFT_POS.fields.z);
LABEL_35:
  v30 = *((float *)&v24 + 1);
  result.fields.x = *(float *)&v24;
  result.fields.z = v25;
  result.fields.y = v30;
  return result;
}


UnityEngine_Vector3_o ShopRootConstants__GetHelpButtonPos(int32_t state, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float OffsetX; // s0
  unsigned __int64 v9; // d1
  __int64 v10; // x1
  __int64 v11; // x2
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x9
  float *p_z; // x10
  ShopRootConstants_c *v15; // x0
  struct ShopRootConstants_StaticFields *v16; // x10
  ShopRootConstants_c *v17; // x0
  float32x2_t v18; // d3
  unsigned __int32 v19; // s4
  float v20; // s9
  struct ShopRootConstants_StaticFields *v21; // x8
  unsigned __int64 v22; // d0
  float v23; // s2
  ShopRootConstants_c *v24; // x0
  float32x2_t *v25; // x8
  float32x2_t v26; // d0
  float v27; // s1
  ShopRootConstants_c *v28; // x0
  struct ShopRootConstants_StaticFields *v29; // x8
  ShopRootConstants_c *v30; // x0
  struct ShopRootConstants_StaticFields *v31; // x8
  float v32; // s1
  unsigned __int32 v33; // [xsp+0h] [xbp-70h]
  float x; // [xsp+10h] [xbp-60h]
  float32x2_t v35; // [xsp+20h] [xbp-50h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59347DE & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&ShopRootConstants_TypeInfo);
    byte_59347DE = 1;
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method, v2);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v35.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  }
  else
  {
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v4, v5);
    OffsetX = FSUtility__GetOffsetX(68.0, 1, 0);
    HIDWORD(v9) = 0;
    z = 0.0;
    *(float *)&v9 = -OffsetX;
    v35.n64_u64[0] = v9;
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v4, v5);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    p_SCOPE_HELP_ANCHOR = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.y;
    p_z = &p_SCOPE_HELP_ANCHOR->zeroVector.fields.z;
  }
  else
  {
    v15 = ShopRootConstants_TypeInfo;
    if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v10, v11);
      v15 = ShopRootConstants_TypeInfo;
    }
    v16 = v15->static_fields;
    p_SCOPE_HELP_ANCHOR = (struct UnityEngine_Vector3_StaticFields *)&v16->SCOPE_HELP_ANCHOR;
    p_y = (unsigned __int32 *)&v16->SCOPE_HELP_ANCHOR.fields.y;
    p_z = &v16->SCOPE_HELP_ANCHOR.fields.z;
  }
  if ( (unsigned int)state > 0x16 )
    goto LABEL_34;
  if ( ((1 << state) & 0x100048) != 0 )
  {
    v24 = ShopRootConstants_TypeInfo;
    if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v10, v11);
      v24 = ShopRootConstants_TypeInfo;
    }
    v25 = (float32x2_t *)v24->static_fields;
    v26.n64_u64[0] = v25[12].n64_u64[0];
    v27 = v25[13].n64_f32[0];
    goto LABEL_37;
  }
  if ( ((1 << state) & 0x22) == 0 )
  {
    if ( state == 22 )
    {
      v28 = ShopRootConstants_TypeInfo;
      if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v10, v11);
        v28 = ShopRootConstants_TypeInfo;
      }
      v29 = v28->static_fields;
      v26.n64_u64[0] = *(unsigned __int64 *)&v29->ClassBoardResetHelpButtonPos.fields.x;
      v27 = v29->ClassBoardResetHelpButtonPos.fields.z;
LABEL_37:
      v22 = vadd_f32(v35, v26).n64_u64[0];
      v23 = z + v27;
      goto LABEL_38;
    }
LABEL_34:
    v30 = ShopRootConstants_TypeInfo;
    if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v10, v11);
      v30 = ShopRootConstants_TypeInfo;
    }
    v31 = v30->static_fields;
    v26.n64_u64[0] = *(unsigned __int64 *)&v31->DEFAULT_HELP_BUTTON_POS.fields.x;
    v27 = v31->DEFAULT_HELP_BUTTON_POS.fields.z;
    goto LABEL_37;
  }
  v17 = ShopRootConstants_TypeInfo;
  v18.n64_u32[0] = LODWORD(p_SCOPE_HELP_ANCHOR->zeroVector.fields.x);
  v19 = *p_y;
  v20 = *p_z;
  if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
  {
    v33 = *p_y;
    x = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v10, v11);
    v19 = v33;
    v18.n64_f32[0] = x;
    v17 = ShopRootConstants_TypeInfo;
  }
  v21 = v17->static_fields;
  v18.n64_u32[1] = v19;
  v22 = vadd_f32(v18, vadd_f32(v35, *(float32x2_t *)&v21->DEFAULT_HELP_BUTTON_POS.fields.x)).n64_u64[0];
  v23 = v20 + (float)(z + v21->DEFAULT_HELP_BUTTON_POS.fields.z);
LABEL_38:
  v32 = *((float *)&v22 + 1);
  result.fields.x = *(float *)&v22;
  result.fields.z = v23;
  result.fields.y = v32;
  return result;
}


System_String_o *ShopRootConstants__GetHelpSaveKey(int32_t state, const MethodInfo *method)
{
  __int64 *v3; // x8

  if ( (byte_59347DD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13486/*"SpecialItemHelp"*/);
    sub_21FFC50(&StringLiteral_13363/*"Shop15Help"*/);
    sub_21FFC50(&StringLiteral_13364/*"Shop18Help"*/);
    sub_21FFC50(&StringLiteral_2383/*"AnonymousHelp"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_11652/*"RarePriHelp"*/);
    byte_59347DD = 1;
  }
  if ( (unsigned int)(state - 3) >= 4 )
  {
    v3 = (__int64 *)&StringLiteral_1/*""*/;
    if ( state == 22 )
      v3 = (__int64 *)&StringLiteral_13364/*"Shop18Help"*/;
    if ( state == 20 )
      v3 = &StringLiteral_13363/*"Shop15Help"*/;
  }
  else
  {
    v3 = (&off_5296490)[state - 3];
  }
  return (System_String_o *)*v3;
}


bool ShopRootConstants__IsSvtCostumeShopOpen(const MethodInfo *method)
{
  if ( (byte_59347E0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_12525/*"SHOP04_SHOP_STATE"*/);
    byte_59347E0 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_12525/*"SHOP04_SHOP_STATE"*/, 0) == 0;
}