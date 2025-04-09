void __fastcall ShopRootConstants___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct ShopRootConstants_StaticFields *static_fields; // x0
  int32_t v7; // w1
  ShopRootConstants_c *v8; // x8
  struct ShopRootConstants_StaticFields *v9; // x9
  struct ShopRootConstants_StaticFields *v10; // x9
  struct ShopRootConstants_StaticFields *v11; // x9
  struct ShopRootConstants_StaticFields *v12; // x9
  struct ShopRootConstants_StaticFields *v13; // x9
  struct ShopRootConstants_StaticFields *v14; // x9
  struct ShopRootConstants_StaticFields *v15; // x0
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_49B737D & 1) == 0 )
  {
    sub_1B4CF90(&ShopRootConstants_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_2911/*"BGM_EVENT_128"*/, v4);
    sub_1B4CF90(&StringLiteral_3025/*"Back/back{0}"*/, v5);
    byte_49B737D = 1;
  }
  static_fields = ShopRootConstants_TypeInfo->static_fields;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
  *(_QWORD *)&static_fields->DEFAULT_FIGURE_ID = 500900LL;
  v7 = StringLiteral_3025/*"Back/back{0}"*/;
  static_fields->BG_ROOT = (struct System_String_o *)StringLiteral_3025/*"Back/back{0}"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->BG_ROOT, v7, v2, v3);
  v8 = ShopRootConstants_TypeInfo;
  v9 = ShopRootConstants_TypeInfo->static_fields;
  v9->DISP_RECT = (struct UnityEngine_Rect_o)xmmword_BAB3E0;
  v9->DEFAULT_BG_ID = 10600;
  v10 = v8->static_fields;
  *(_QWORD *)&v10->DEFAULT_GIFT_POS.fields.x = 0xC37A0000C2F00000LL;
  v10->DEFAULT_GIFT_POS.fields.z = 0.0;
  v11 = v8->static_fields;
  *(_QWORD *)&v11->EVENT_GIFT_POS.fields.x = 0xC2FC0000C2F00000LL;
  v11->EVENT_GIFT_POS.fields.z = 0.0;
  v12 = v8->static_fields;
  *(_QWORD *)&v12->DEFAULT_HELP_BUTTON_POS.fields.x = 0xC401000000000000LL;
  v12->SCOPE_GIFT_ADD_X = 10;
  v12->DEFAULT_HELP_BUTTON_POS.fields.z = 0.0;
  v13 = v8->static_fields;
  *(_QWORD *)&v13->EVENT_HELP_BUTTON_POS.fields.x = 0xC3C4000000000000LL;
  v13->EVENT_HELP_BUTTON_POS.fields.z = 0.0;
  v14 = v8->static_fields;
  *(_QWORD *)&v14->SCOPE_HELP_ANCHOR.fields.x = 0x4204000000000000LL;
  v14->SCOPE_HELP_ANCHOR.fields.z = 0.0;
  v15 = v8->static_fields;
  v15->SVT_COSTUME_TITLE_ID = 80319;
  v16 = StringLiteral_2911/*"BGM_EVENT_128"*/;
  v15->SVT_COSTUME_BGM_NAME = (struct System_String_o *)StringLiteral_2911/*"BGM_EVENT_128"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v15->SVT_COSTUME_BGM_NAME, v16, v17, v18);
}


UnityEngine_Vector3_o __fastcall ShopRootConstants__GetGiftButtonPos(bool isEvent, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float32x2_t v7; // d9
  ShopRootConstants_c *v8; // x0
  int SCOPE_GIFT_ADD_X; // w24
  __int64 v10; // x1
  ShopRootConstants_c *v11; // x0
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x10
  unsigned __int32 *p_z; // x9
  struct ShopRootConstants_StaticFields *v15; // x9
  float v16; // s10
  float32x2_t v17; // d2
  unsigned __int32 v18; // s3
  struct ShopRootConstants_StaticFields *v19; // x8
  float v20; // s0
  unsigned __int64 v21; // d1
  float v22; // s2
  unsigned __int32 v23; // [xsp+0h] [xbp-70h]
  unsigned __int32 v24; // [xsp+10h] [xbp-60h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B737B & 1) == 0 )
  {
    sub_1B4CF90(&FSUtility_TypeInfo, method);
    sub_1B4CF90(&ShopRootConstants_TypeInfo, v3);
    byte_49B737B = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v4);
      byte_49B5361 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    v7.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.y;
  }
  else
  {
    v8 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v8 = ShopRootConstants_TypeInfo;
    }
    SCOPE_GIFT_ADD_X = v8->static_fields->SCOPE_GIFT_ADD_X;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    x = FSUtility__GetOffsetX(68.0, 0, 0LL) + (float)SCOPE_GIFT_ADD_X;
    v7.n64_u64[0] = 0LL;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v10);
      byte_49B5361 = 1;
    }
    v11 = ShopRootConstants_TypeInfo;
    p_SCOPE_HELP_ANCHOR = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.y;
    p_z = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.z;
  }
  else
  {
    v11 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v11 = ShopRootConstants_TypeInfo;
    }
    v15 = v11->static_fields;
    p_SCOPE_HELP_ANCHOR = (struct UnityEngine_Vector3_StaticFields *)&v15->SCOPE_HELP_ANCHOR;
    p_y = (unsigned __int32 *)&v15->SCOPE_HELP_ANCHOR.fields.y;
    p_z = (unsigned __int32 *)&v15->SCOPE_HELP_ANCHOR.fields.z;
  }
  v16 = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
  v17.n64_u32[0] = *p_y;
  v18 = *p_z;
  if ( !v11->_2.cctor_finished )
  {
    v23 = *p_z;
    v24 = *p_y;
    j_il2cpp_runtime_class_init_0(v11);
    v18 = v23;
    v17.n64_u32[0] = v24;
    v11 = ShopRootConstants_TypeInfo;
  }
  v19 = v11->static_fields;
  if ( isEvent )
  {
    v20 = x + v19->EVENT_GIFT_POS.fields.x;
    v21 = vadd_f32(v7, *(float32x2_t *)&v19->EVENT_GIFT_POS.fields.y).n64_u64[0];
  }
  else
  {
    v17.n64_u32[1] = v18;
    v20 = v16 + (float)(x + v19->DEFAULT_GIFT_POS.fields.x);
    v21 = vadd_f32(v17, vadd_f32(v7, *(float32x2_t *)&v19->DEFAULT_GIFT_POS.fields.y)).n64_u64[0];
  }
  v22 = *((float *)&v21 + 1);
  result.fields.y = *(float *)&v21;
  result.fields.z = v22;
  result.fields.x = v20;
  return result;
}


UnityEngine_Vector3_o __fastcall ShopRootConstants__GetHelpButtonPos(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  __int64 v7; // x1
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x9
  float *p_z; // x10
  ShopRootConstants_c *v11; // x0
  struct ShopRootConstants_StaticFields *v12; // x10
  ShopRootConstants_c *v13; // x0
  float32x2_t v14; // d3
  unsigned __int32 v15; // s2
  float v16; // s9
  float32x2_t *v17; // x8
  unsigned __int64 v18; // d0
  float v19; // s2
  ShopRootConstants_c *v20; // x0
  struct ShopRootConstants_StaticFields *v21; // x8
  float32x2_t v22; // d0
  float v23; // s1
  ShopRootConstants_c *v24; // x0
  float32x2_t *v25; // x8
  float v26; // s1
  unsigned __int32 v27; // [xsp+0h] [xbp-70h]
  float x; // [xsp+10h] [xbp-60h]
  float32x2_t v29; // [xsp+20h] [xbp-50h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B737A & 1) == 0 )
  {
    sub_1B4CF90(&FSUtility_TypeInfo, method);
    sub_1B4CF90(&ShopRootConstants_TypeInfo, v3);
    byte_49B737A = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v4);
      byte_49B5361 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v29.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  }
  else
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v29.n64_u64[0] = COERCE_UNSIGNED_INT(-FSUtility__GetOffsetX(68.0, 1, 0LL));
    z = 0.0;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v7);
      byte_49B5361 = 1;
    }
    p_SCOPE_HELP_ANCHOR = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.y;
    p_z = &p_SCOPE_HELP_ANCHOR->zeroVector.fields.z;
  }
  else
  {
    v11 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v11 = ShopRootConstants_TypeInfo;
    }
    v12 = v11->static_fields;
    p_SCOPE_HELP_ANCHOR = (struct UnityEngine_Vector3_StaticFields *)&v12->SCOPE_HELP_ANCHOR;
    p_y = (unsigned __int32 *)&v12->SCOPE_HELP_ANCHOR.fields.y;
    p_z = &v12->SCOPE_HELP_ANCHOR.fields.z;
  }
  switch ( state )
  {
    case 1:
    case 5:
      v13 = ShopRootConstants_TypeInfo;
      v14.n64_u32[0] = LODWORD(p_SCOPE_HELP_ANCHOR->zeroVector.fields.x);
      v15 = *p_y;
      v16 = *p_z;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        v27 = *p_y;
        x = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v15 = v27;
        v14.n64_f32[0] = x;
        v13 = ShopRootConstants_TypeInfo;
      }
      v17 = (float32x2_t *)v13->static_fields;
      v14.n64_u32[1] = v15;
      v18 = vadd_f32(v14, vadd_f32(v29, v17[9])).n64_u64[0];
      v19 = v16 + (float)(z + v17[10].n64_f32[0]);
      goto LABEL_33;
    case 2:
    case 4:
      goto LABEL_29;
    case 3:
    case 6:
      goto LABEL_26;
    default:
      if ( state == 20 )
      {
LABEL_26:
        v20 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v20 = ShopRootConstants_TypeInfo;
        }
        v21 = v20->static_fields;
        v22.n64_u64[0] = *(unsigned __int64 *)&v21->EVENT_HELP_BUTTON_POS.fields.x;
        v23 = v21->EVENT_HELP_BUTTON_POS.fields.z;
      }
      else
      {
LABEL_29:
        v24 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v24 = ShopRootConstants_TypeInfo;
        }
        v25 = (float32x2_t *)v24->static_fields;
        v22.n64_u64[0] = v25[9].n64_u64[0];
        v23 = v25[10].n64_f32[0];
      }
      v18 = vadd_f32(v29, v22).n64_u64[0];
      v19 = z + v23;
LABEL_33:
      v26 = *((float *)&v18 + 1);
      result.fields.x = *(float *)&v18;
      result.fields.z = v19;
      result.fields.y = v26;
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

  if ( (byte_49B7379 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_12673/*"SpecialItemHelp"*/, method);
    sub_1B4CF90(&StringLiteral_12552/*"Shop15Help"*/, v3);
    sub_1B4CF90(&StringLiteral_2284/*"AnonymousHelp"*/, v4);
    sub_1B4CF90(&StringLiteral_1/*""*/, v5);
    sub_1B4CF90(&StringLiteral_10937/*"RarePriHelp"*/, v6);
    byte_49B7379 = 1;
  }
  if ( state > 5 )
  {
    if ( state == 6 )
    {
      v7 = &StringLiteral_2284/*"AnonymousHelp"*/;
      return (System_String_o *)*v7;
    }
    if ( state == 20 )
    {
      v7 = &StringLiteral_12552/*"Shop15Help"*/;
      return (System_String_o *)*v7;
    }
LABEL_10:
    v7 = (__int64 *)&StringLiteral_1/*""*/;
    return (System_String_o *)*v7;
  }
  if ( state == 3 )
  {
    v7 = &StringLiteral_10937/*"RarePriHelp"*/;
    return (System_String_o *)*v7;
  }
  if ( state != 5 )
    goto LABEL_10;
  v7 = &StringLiteral_12673/*"SpecialItemHelp"*/;
  return (System_String_o *)*v7;
}


bool __fastcall ShopRootConstants__IsSvtCostumeShopOpen(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49B737C & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_11762/*"SHOP04_SHOP_STATE"*/, v1);
    byte_49B737C = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_11762/*"SHOP04_SHOP_STATE"*/, 0LL) == 0;
}