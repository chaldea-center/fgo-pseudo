void __fastcall ShopRootConstants___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct ShopRootConstants_StaticFields *static_fields; // x0
  int64_t v8; // x1
  ShopRootConstants_c *v9; // x8
  struct ShopRootConstants_StaticFields *v10; // x9
  struct ShopRootConstants_StaticFields *v11; // x9
  struct ShopRootConstants_StaticFields *v12; // x9
  struct ShopRootConstants_StaticFields *v13; // x9
  struct ShopRootConstants_StaticFields *v14; // x9
  struct ShopRootConstants_StaticFields *v15; // x9
  struct ShopRootConstants_StaticFields *v16; // x0
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BD8A9E & 1) == 0 )
  {
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    sub_1C21E38(&StringLiteral_3063/*"BGM_EVENT_128"*/);
    sub_1C21E38(&StringLiteral_3179/*"Back/back{0}"*/);
    byte_4BD8A9E = 1;
  }
  static_fields = ShopRootConstants_TypeInfo->static_fields;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
  *(_QWORD *)&static_fields->DEFAULT_FIGURE_ID = 500900LL;
  v8 = StringLiteral_3179/*"Back/back{0}"*/;
  static_fields->BG_ROOT = (struct System_String_o *)StringLiteral_3179/*"Back/back{0}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->BG_ROOT, v8, v1, v2, v3, v4, v5, v6);
  v9 = ShopRootConstants_TypeInfo;
  v10 = ShopRootConstants_TypeInfo->static_fields;
  v10->DISP_RECT = (struct UnityEngine_Rect_o)xmmword_BFF560;
  v10->DEFAULT_BG_ID = 10600;
  v11 = v9->static_fields;
  *(_QWORD *)&v11->DEFAULT_GIFT_POS.fields.x = 0xC37A0000C2F00000LL;
  v11->DEFAULT_GIFT_POS.fields.z = 0.0;
  v12 = v9->static_fields;
  *(_QWORD *)&v12->EVENT_GIFT_POS.fields.x = 0xC2FC0000C2F00000LL;
  v12->EVENT_GIFT_POS.fields.z = 0.0;
  v13 = v9->static_fields;
  *(_QWORD *)&v13->DEFAULT_HELP_BUTTON_POS.fields.x = 0xC401000000000000LL;
  v13->SCOPE_GIFT_ADD_X = 10;
  v13->DEFAULT_HELP_BUTTON_POS.fields.z = 0.0;
  v14 = v9->static_fields;
  *(_QWORD *)&v14->EVENT_HELP_BUTTON_POS.fields.x = 0xC3C4000000000000LL;
  v14->EVENT_HELP_BUTTON_POS.fields.z = 0.0;
  v15 = v9->static_fields;
  *(_QWORD *)&v15->SCOPE_HELP_ANCHOR.fields.x = 0x4204000000000000LL;
  v15->SCOPE_HELP_ANCHOR.fields.z = 0.0;
  v16 = v9->static_fields;
  v16->SVT_COSTUME_TITLE_ID = 80319;
  v17 = StringLiteral_3063/*"BGM_EVENT_128"*/;
  v16->SVT_COSTUME_BGM_NAME = (struct System_String_o *)StringLiteral_3063/*"BGM_EVENT_128"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->SVT_COSTUME_BGM_NAME, v17, v18, v19, v20, v21, v22, v23);
}


UnityEngine_Vector3_o __fastcall ShopRootConstants__GetGiftButtonPos(bool isEvent, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float32x2_t v5; // d9
  ShopRootConstants_c *v6; // x0
  int SCOPE_GIFT_ADD_X; // w24
  ShopRootConstants_c *v8; // x0
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x10
  unsigned __int32 *p_z; // x9
  struct ShopRootConstants_StaticFields *v12; // x9
  float v13; // s10
  float32x2_t v14; // d2
  unsigned __int32 v15; // s3
  struct ShopRootConstants_StaticFields *v16; // x8
  float v17; // s0
  unsigned __int64 v18; // d1
  float v19; // s2
  unsigned __int32 v20; // [xsp+0h] [xbp-70h]
  unsigned __int32 v21; // [xsp+10h] [xbp-60h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8A9C & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    byte_4BD8A9C = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    v5.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.y;
  }
  else
  {
    v6 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v6 = ShopRootConstants_TypeInfo;
    }
    SCOPE_GIFT_ADD_X = v6->static_fields->SCOPE_GIFT_ADD_X;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    x = FSUtility__GetOffsetX(68.0, 0, 0LL) + (float)SCOPE_GIFT_ADD_X;
    v5.n64_u64[0] = 0LL;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    v8 = ShopRootConstants_TypeInfo;
    p_SCOPE_HELP_ANCHOR = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.y;
    p_z = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.z;
  }
  else
  {
    v8 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v8 = ShopRootConstants_TypeInfo;
    }
    v12 = v8->static_fields;
    p_SCOPE_HELP_ANCHOR = (struct UnityEngine_Vector3_StaticFields *)&v12->SCOPE_HELP_ANCHOR;
    p_y = (unsigned __int32 *)&v12->SCOPE_HELP_ANCHOR.fields.y;
    p_z = (unsigned __int32 *)&v12->SCOPE_HELP_ANCHOR.fields.z;
  }
  v13 = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
  v14.n64_u32[0] = *p_y;
  v15 = *p_z;
  if ( !v8->_2.cctor_finished )
  {
    v20 = *p_z;
    v21 = *p_y;
    j_il2cpp_runtime_class_init_0(v8);
    v15 = v20;
    v14.n64_u32[0] = v21;
    v8 = ShopRootConstants_TypeInfo;
  }
  v16 = v8->static_fields;
  if ( isEvent )
  {
    v17 = x + v16->EVENT_GIFT_POS.fields.x;
    v18 = vadd_f32(v5, *(float32x2_t *)&v16->EVENT_GIFT_POS.fields.y).n64_u64[0];
  }
  else
  {
    v14.n64_u32[1] = v15;
    v17 = v13 + (float)(x + v16->DEFAULT_GIFT_POS.fields.x);
    v18 = vadd_f32(v14, vadd_f32(v5, *(float32x2_t *)&v16->DEFAULT_GIFT_POS.fields.y)).n64_u64[0];
  }
  v19 = *((float *)&v18 + 1);
  result.fields.y = *(float *)&v18;
  result.fields.z = v19;
  result.fields.x = v17;
  return result;
}


UnityEngine_Vector3_o __fastcall ShopRootConstants__GetHelpButtonPos(int32_t state, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x9
  float *p_z; // x10
  ShopRootConstants_c *v8; // x0
  struct ShopRootConstants_StaticFields *v9; // x10
  ShopRootConstants_c *v10; // x0
  float32x2_t v11; // d3
  unsigned __int32 v12; // s2
  float v13; // s9
  float32x2_t *v14; // x8
  unsigned __int64 v15; // d0
  float v16; // s2
  ShopRootConstants_c *v17; // x0
  struct ShopRootConstants_StaticFields *v18; // x8
  float32x2_t v19; // d0
  float v20; // s1
  ShopRootConstants_c *v21; // x0
  float32x2_t *v22; // x8
  float v23; // s1
  unsigned __int32 v24; // [xsp+0h] [xbp-70h]
  float x; // [xsp+10h] [xbp-60h]
  float32x2_t v26; // [xsp+20h] [xbp-50h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8A9B & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    byte_4BD8A9B = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v26.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  }
  else
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v26.n64_u64[0] = COERCE_UNSIGNED_INT(-FSUtility__GetOffsetX(68.0, 1, 0LL));
    z = 0.0;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    p_SCOPE_HELP_ANCHOR = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.y;
    p_z = &p_SCOPE_HELP_ANCHOR->zeroVector.fields.z;
  }
  else
  {
    v8 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v8 = ShopRootConstants_TypeInfo;
    }
    v9 = v8->static_fields;
    p_SCOPE_HELP_ANCHOR = (struct UnityEngine_Vector3_StaticFields *)&v9->SCOPE_HELP_ANCHOR;
    p_y = (unsigned __int32 *)&v9->SCOPE_HELP_ANCHOR.fields.y;
    p_z = &v9->SCOPE_HELP_ANCHOR.fields.z;
  }
  switch ( state )
  {
    case 1:
    case 5:
      v10 = ShopRootConstants_TypeInfo;
      v11.n64_u32[0] = LODWORD(p_SCOPE_HELP_ANCHOR->zeroVector.fields.x);
      v12 = *p_y;
      v13 = *p_z;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        v24 = *p_y;
        x = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v12 = v24;
        v11.n64_f32[0] = x;
        v10 = ShopRootConstants_TypeInfo;
      }
      v14 = (float32x2_t *)v10->static_fields;
      v11.n64_u32[1] = v12;
      v15 = vadd_f32(v11, vadd_f32(v26, v14[9])).n64_u64[0];
      v16 = v13 + (float)(z + v14[10].n64_f32[0]);
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
        v17 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v17 = ShopRootConstants_TypeInfo;
        }
        v18 = v17->static_fields;
        v19.n64_u64[0] = *(unsigned __int64 *)&v18->EVENT_HELP_BUTTON_POS.fields.x;
        v20 = v18->EVENT_HELP_BUTTON_POS.fields.z;
      }
      else
      {
LABEL_29:
        v21 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v21 = ShopRootConstants_TypeInfo;
        }
        v22 = (float32x2_t *)v21->static_fields;
        v19.n64_u64[0] = v22[9].n64_u64[0];
        v20 = v22[10].n64_f32[0];
      }
      v15 = vadd_f32(v26, v19).n64_u64[0];
      v16 = z + v20;
LABEL_33:
      v23 = *((float *)&v15 + 1);
      result.fields.x = *(float *)&v15;
      result.fields.z = v16;
      result.fields.y = v23;
      return result;
  }
}


System_String_o *__fastcall ShopRootConstants__GetHelpSaveKey(int32_t state, const MethodInfo *method)
{
  __int64 *v3; // x8

  if ( (byte_4BD8A9A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13116/*"SpecialItemHelp"*/);
    sub_1C21E38(&StringLiteral_12994/*"Shop15Help"*/);
    sub_1C21E38(&StringLiteral_2417/*"AnonymousHelp"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_11364/*"RarePriHelp"*/);
    byte_4BD8A9A = 1;
  }
  if ( state > 5 )
  {
    if ( state == 6 )
    {
      v3 = &StringLiteral_2417/*"AnonymousHelp"*/;
      return (System_String_o *)*v3;
    }
    if ( state == 20 )
    {
      v3 = &StringLiteral_12994/*"Shop15Help"*/;
      return (System_String_o *)*v3;
    }
LABEL_10:
    v3 = (__int64 *)&StringLiteral_1/*""*/;
    return (System_String_o *)*v3;
  }
  if ( state == 3 )
  {
    v3 = &StringLiteral_11364/*"RarePriHelp"*/;
    return (System_String_o *)*v3;
  }
  if ( state != 5 )
    goto LABEL_10;
  v3 = &StringLiteral_13116/*"SpecialItemHelp"*/;
  return (System_String_o *)*v3;
}


bool __fastcall ShopRootConstants__IsSvtCostumeShopOpen(const MethodInfo *method)
{
  if ( (byte_4BD8A9D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12196/*"SHOP04_SHOP_STATE"*/);
    byte_4BD8A9D = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_12196/*"SHOP04_SHOP_STATE"*/, 0LL) == 0;
}