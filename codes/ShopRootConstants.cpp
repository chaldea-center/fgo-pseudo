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
  struct ShopRootConstants_StaticFields *v15; // x9
  struct ShopRootConstants_StaticFields *v16; // x9
  struct ShopRootConstants_StaticFields *v17; // x0
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4B188D9 & 1) == 0 )
  {
    sub_1BCAFF8(&ShopRootConstants_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_2896/*"BGM_EVENT_128"*/, v4);
    sub_1BCAFF8(&StringLiteral_3013/*"Back/back{0}"*/, v5);
    byte_4B188D9 = 1;
  }
  static_fields = ShopRootConstants_TypeInfo->static_fields;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
  *(_QWORD *)&static_fields->DEFAULT_FIGURE_ID = 500900LL;
  v7 = StringLiteral_3013/*"Back/back{0}"*/;
  static_fields->BG_ROOT = (struct System_String_o *)StringLiteral_3013/*"Back/back{0}"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->BG_ROOT, v7, v2, v3);
  v8 = ShopRootConstants_TypeInfo;
  v9 = ShopRootConstants_TypeInfo->static_fields;
  v9->DISP_RECT = (struct UnityEngine_Rect_o)xmmword_BE34D0;
  v9->DEFAULT_BG_ID = 10600;
  v10 = v8->static_fields;
  *(_QWORD *)&v10->DEFAULT_GIFT_POS.fields.x = 0xC37A0000C2F00000LL;
  v10->DEFAULT_GIFT_POS.fields.z = 0.0;
  v11 = v8->static_fields;
  *(_QWORD *)&v11->EVENT_GIFT_POS.fields.x = 0xC2FC0000C2F00000LL;
  v11->EVENT_GIFT_POS.fields.z = 0.0;
  v12 = v8->static_fields;
  *(_QWORD *)&v12->Shop18GiftPos.fields.x = 0xC2880000C2F00000LL;
  v12->Shop18GiftPos.fields.z = 0.0;
  v13 = v8->static_fields;
  *(_QWORD *)&v13->DEFAULT_HELP_BUTTON_POS.fields.x = 0xC401000000000000LL;
  v13->SCOPE_GIFT_ADD_X = 10;
  v13->DEFAULT_HELP_BUTTON_POS.fields.z = 0.0;
  v14 = v8->static_fields;
  *(_QWORD *)&v14->EVENT_HELP_BUTTON_POS.fields.x = 0xC3C4000000000000LL;
  v14->EVENT_HELP_BUTTON_POS.fields.z = 0.0;
  v15 = v8->static_fields;
  *(_QWORD *)&v15->Shop18HelpButtonPos.fields.x = 0xC3A7000000000000LL;
  v15->Shop18HelpButtonPos.fields.z = 0.0;
  v16 = v8->static_fields;
  *(_QWORD *)&v16->SCOPE_HELP_ANCHOR.fields.x = 0x4204000000000000LL;
  v16->SCOPE_HELP_ANCHOR.fields.z = 0.0;
  v17 = v8->static_fields;
  v17->SVT_COSTUME_TITLE_ID = 80319;
  v18 = StringLiteral_2896/*"BGM_EVENT_128"*/;
  v17->SVT_COSTUME_BGM_NAME = (struct System_String_o *)StringLiteral_2896/*"BGM_EVENT_128"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v17->SVT_COSTUME_BGM_NAME, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopRootConstants__GetGiftButtonPos(
        bool isEvent,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  ShopRootConstants_c *v9; // x0
  int SCOPE_GIFT_ADD_X; // w25
  float OffsetX; // s0
  unsigned __int64 v12; // d2
  __int64 v13; // x1
  ShopRootConstants_c *v14; // x0
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x10
  float *p_z; // x9
  struct ShopRootConstants_StaticFields *v18; // x9
  float32x2_t v19; // d3
  unsigned __int32 v20; // s2
  float v21; // s9
  struct ShopRootConstants_StaticFields *v22; // x8
  float32x2_t v23; // d0
  float v24; // s1
  unsigned __int64 v25; // d0
  float v26; // s2
  float v27; // s1
  unsigned __int32 v28; // [xsp+0h] [xbp-80h]
  float x; // [xsp+10h] [xbp-70h]
  float32x2_t v30; // [xsp+20h] [xbp-60h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B188D7 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, *(_QWORD *)&state);
    sub_1BCAFF8(&ShopRootConstants_TypeInfo, v5);
    byte_4B188D7 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4B16191 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v30.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  }
  else
  {
    v9 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v9 = ShopRootConstants_TypeInfo;
    }
    SCOPE_GIFT_ADD_X = v9->static_fields->SCOPE_GIFT_ADD_X;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    HIDWORD(v12) = 0;
    *(float *)&v12 = OffsetX + (float)SCOPE_GIFT_ADD_X;
    v30.n64_u64[0] = v12;
    z = 0.0;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4B16191 = 1;
    }
    v14 = ShopRootConstants_TypeInfo;
    p_SCOPE_HELP_ANCHOR = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.y;
    p_z = &p_SCOPE_HELP_ANCHOR->zeroVector.fields.z;
  }
  else
  {
    v14 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v14 = ShopRootConstants_TypeInfo;
    }
    v18 = v14->static_fields;
    p_SCOPE_HELP_ANCHOR = (struct UnityEngine_Vector3_StaticFields *)&v18->SCOPE_HELP_ANCHOR;
    p_y = (unsigned __int32 *)&v18->SCOPE_HELP_ANCHOR.fields.y;
    p_z = &v18->SCOPE_HELP_ANCHOR.fields.z;
  }
  v19.n64_u32[0] = LODWORD(p_SCOPE_HELP_ANCHOR->zeroVector.fields.x);
  v20 = *p_y;
  v21 = *p_z;
  if ( !v14->_2.cctor_finished )
  {
    v28 = *p_y;
    x = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
    j_il2cpp_runtime_class_init_0(v14);
    v20 = v28;
    v19.n64_f32[0] = x;
    v14 = ShopRootConstants_TypeInfo;
  }
  v22 = v14->static_fields;
  if ( state == 22 )
  {
    v23.n64_u64[0] = *(unsigned __int64 *)&v22->Shop18GiftPos.fields.x;
    v24 = v22->Shop18GiftPos.fields.z;
  }
  else
  {
    if ( !isEvent )
    {
      v19.n64_u32[1] = v20;
      v25 = vadd_f32(v19, vadd_f32(v30, *(float32x2_t *)&v22->DEFAULT_GIFT_POS.fields.x)).n64_u64[0];
      v26 = v21 + (float)(z + v22->DEFAULT_GIFT_POS.fields.z);
      goto LABEL_31;
    }
    v23.n64_u64[0] = *(unsigned __int64 *)&v22->EVENT_GIFT_POS.fields.x;
    v24 = v22->EVENT_GIFT_POS.fields.z;
  }
  v25 = vadd_f32(v30, v23).n64_u64[0];
  v26 = z + v24;
LABEL_31:
  v27 = *((float *)&v25 + 1);
  result.fields.x = *(float *)&v25;
  result.fields.z = v26;
  result.fields.y = v27;
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
  float32x2_t v13; // d3
  unsigned __int32 v14; // s2
  float v15; // s9
  ShopRootConstants_c *v16; // x0
  struct ShopRootConstants_StaticFields *v17; // x8
  unsigned __int64 v18; // d0
  float v19; // s2
  ShopRootConstants_c *v20; // x0
  struct ShopRootConstants_StaticFields *v21; // x8
  float32x2_t v22; // d0
  float v23; // s1
  ShopRootConstants_c *v24; // x0
  float32x2_t *v25; // x8
  ShopRootConstants_c *v26; // x0
  struct ShopRootConstants_StaticFields *v27; // x8
  float v28; // s1
  unsigned __int32 v29; // [xsp+0h] [xbp-60h]
  float x; // [xsp+10h] [xbp-50h]
  float32x2_t v31; // [xsp+20h] [xbp-40h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B188D6 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, method);
    sub_1BCAFF8(&ShopRootConstants_TypeInfo, v3);
    byte_4B188D6 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v4);
      byte_4B16191 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v31.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  }
  else
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v31.n64_u64[0] = COERCE_UNSIGNED_INT(-FSUtility__GetOffsetX(68.0, 1, 0LL));
    z = 0.0;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v7);
      byte_4B16191 = 1;
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
      v13.n64_u32[0] = LODWORD(p_SCOPE_HELP_ANCHOR->zeroVector.fields.x);
      v14 = *p_y;
      v15 = *p_z;
      v16 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        v29 = *p_y;
        x = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v14 = v29;
        v13.n64_f32[0] = x;
        v16 = ShopRootConstants_TypeInfo;
      }
      v17 = v16->static_fields;
      v13.n64_u32[1] = v14;
      v18 = vadd_f32(v13, vadd_f32(v31, *(float32x2_t *)&v17->DEFAULT_HELP_BUTTON_POS.fields.x)).n64_u64[0];
      v19 = v15 + (float)(z + v17->DEFAULT_HELP_BUTTON_POS.fields.z);
      goto LABEL_37;
    case 2:
    case 4:
      goto LABEL_33;
    case 3:
    case 6:
      goto LABEL_30;
    default:
      if ( state == 20 )
      {
LABEL_30:
        v24 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v24 = ShopRootConstants_TypeInfo;
        }
        v25 = (float32x2_t *)v24->static_fields;
        v22.n64_u64[0] = v25[12].n64_u64[0];
        v23 = v25[13].n64_f32[0];
      }
      else if ( state == 22 )
      {
        v20 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v20 = ShopRootConstants_TypeInfo;
        }
        v21 = v20->static_fields;
        v22.n64_u64[0] = *(unsigned __int64 *)&v21->Shop18HelpButtonPos.fields.x;
        v23 = v21->Shop18HelpButtonPos.fields.z;
      }
      else
      {
LABEL_33:
        v26 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v26 = ShopRootConstants_TypeInfo;
        }
        v27 = v26->static_fields;
        v22.n64_u64[0] = *(unsigned __int64 *)&v27->DEFAULT_HELP_BUTTON_POS.fields.x;
        v23 = v27->DEFAULT_HELP_BUTTON_POS.fields.z;
      }
      v18 = vadd_f32(v31, v22).n64_u64[0];
      v19 = z + v23;
LABEL_37:
      v28 = *((float *)&v18 + 1);
      result.fields.x = *(float *)&v18;
      result.fields.z = v19;
      result.fields.y = v28;
      return result;
  }
}


System_String_o *__fastcall ShopRootConstants__GetHelpSaveKey(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 *v8; // x8

  if ( (byte_4B188D5 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_12852/*"SpecialItemHelp"*/, method);
    sub_1BCAFF8(&StringLiteral_12733/*"Shop15Help"*/, v3);
    sub_1BCAFF8(&StringLiteral_12735/*"Shop18Help"*/, v4);
    sub_1BCAFF8(&StringLiteral_2264/*"AnonymousHelp"*/, v5);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v6);
    sub_1BCAFF8(&StringLiteral_11080/*"RarePriHelp"*/, v7);
    byte_4B188D5 = 1;
  }
  if ( (unsigned int)(state - 3) >= 4 )
  {
    v8 = (__int64 *)&StringLiteral_1/*""*/;
    if ( state == 22 )
      v8 = (__int64 *)&StringLiteral_12735/*"Shop18Help"*/;
    if ( state == 20 )
      v8 = &StringLiteral_12733/*"Shop15Help"*/;
  }
  else
  {
    v8 = (&off_45584B0)[state - 3];
  }
  return (System_String_o *)*v8;
}


bool __fastcall ShopRootConstants__IsSvtCostumeShopOpen(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B188D8 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_11931/*"SHOP04_SHOP_STATE"*/, v1);
    byte_4B188D8 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_11931/*"SHOP04_SHOP_STATE"*/, 0LL) == 0;
}