void __fastcall ShopRootConstants___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct ShopRootConstants_StaticFields *static_fields; // x0
  int64_t v13; // x1
  ShopRootConstants_c *v14; // x8
  struct ShopRootConstants_StaticFields *v15; // x9
  struct ShopRootConstants_StaticFields *v16; // x9
  struct ShopRootConstants_StaticFields *v17; // x9
  struct ShopRootConstants_StaticFields *v18; // x9
  struct ShopRootConstants_StaticFields *v19; // x9
  struct ShopRootConstants_StaticFields *v20; // x9
  struct ShopRootConstants_StaticFields *v21; // x0
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B127E2 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3040/*"BGM_EVENT_128"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3156/*"Back/back{0}"*/, v10, v11);
    byte_4B127E2 = 1;
  }
  static_fields = ShopRootConstants_TypeInfo->static_fields;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
  *(_QWORD *)&static_fields->DEFAULT_FIGURE_ID = 500900LL;
  v13 = StringLiteral_3156/*"Back/back{0}"*/;
  static_fields->BG_ROOT = (struct System_String_o *)StringLiteral_3156/*"Back/back{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->BG_ROOT, v13, v2, v3, v4, v5, v6, v7);
  v14 = ShopRootConstants_TypeInfo;
  v15 = ShopRootConstants_TypeInfo->static_fields;
  v15->DISP_RECT = (struct UnityEngine_Rect_o)xmmword_BD3C40;
  v15->DEFAULT_BG_ID = 10600;
  v16 = v14->static_fields;
  *(_QWORD *)&v16->DEFAULT_GIFT_POS.fields.x = 0xC37A0000C2F00000LL;
  v16->DEFAULT_GIFT_POS.fields.z = 0.0;
  v17 = v14->static_fields;
  *(_QWORD *)&v17->EVENT_GIFT_POS.fields.x = 0xC2FC0000C2F00000LL;
  v17->EVENT_GIFT_POS.fields.z = 0.0;
  v18 = v14->static_fields;
  *(_QWORD *)&v18->DEFAULT_HELP_BUTTON_POS.fields.x = 0xC401000000000000LL;
  v18->SCOPE_GIFT_ADD_X = 10;
  v18->DEFAULT_HELP_BUTTON_POS.fields.z = 0.0;
  v19 = v14->static_fields;
  *(_QWORD *)&v19->EVENT_HELP_BUTTON_POS.fields.x = 0xC3C4000000000000LL;
  v19->EVENT_HELP_BUTTON_POS.fields.z = 0.0;
  v20 = v14->static_fields;
  *(_QWORD *)&v20->SCOPE_HELP_ANCHOR.fields.x = 0x4204000000000000LL;
  v20->SCOPE_HELP_ANCHOR.fields.z = 0.0;
  v21 = v14->static_fields;
  v21->SVT_COSTUME_TITLE_ID = 80319;
  v22 = StringLiteral_3040/*"BGM_EVENT_128"*/;
  v21->SVT_COSTUME_BGM_NAME = (struct System_String_o *)StringLiteral_3040/*"BGM_EVENT_128"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v21->SVT_COSTUME_BGM_NAME, v22, v23, v24, v25, v26, v27, v28);
}


UnityEngine_Vector3_o __fastcall ShopRootConstants__GetGiftButtonPos(bool isEvent, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float32x2_t v10; // d9
  ShopRootConstants_c *v11; // x0
  int SCOPE_GIFT_ADD_X; // w24
  __int64 v13; // x1
  __int64 v14; // x2
  ShopRootConstants_c *v15; // x0
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x10
  unsigned __int32 *p_z; // x9
  struct ShopRootConstants_StaticFields *v19; // x9
  float v20; // s10
  float32x2_t v21; // d2
  unsigned __int32 v22; // s3
  struct ShopRootConstants_StaticFields *v23; // x8
  float v24; // s0
  unsigned __int64 v25; // d1
  float v26; // s2
  unsigned __int32 v27; // [xsp+0h] [xbp-70h]
  unsigned __int32 v28; // [xsp+10h] [xbp-60h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B127E0 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v4, v5);
    byte_4B127E0 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    v10.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.y;
  }
  else
  {
    v11 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v6);
      v11 = ShopRootConstants_TypeInfo;
    }
    SCOPE_GIFT_ADD_X = v11->static_fields->SCOPE_GIFT_ADD_X;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v6);
    x = FSUtility__GetOffsetX(68.0, 0, 0LL) + (float)SCOPE_GIFT_ADD_X;
    v10.n64_u64[0] = 0LL;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v6);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v14);
      byte_4B109C1 = 1;
    }
    v15 = ShopRootConstants_TypeInfo;
    p_SCOPE_HELP_ANCHOR = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.y;
    p_z = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.z;
  }
  else
  {
    v15 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v13);
      v15 = ShopRootConstants_TypeInfo;
    }
    v19 = v15->static_fields;
    p_SCOPE_HELP_ANCHOR = (struct UnityEngine_Vector3_StaticFields *)&v19->SCOPE_HELP_ANCHOR;
    p_y = (unsigned __int32 *)&v19->SCOPE_HELP_ANCHOR.fields.y;
    p_z = (unsigned __int32 *)&v19->SCOPE_HELP_ANCHOR.fields.z;
  }
  v20 = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
  v21.n64_u32[0] = *p_y;
  v22 = *p_z;
  if ( !v15->_2.cctor_finished )
  {
    v27 = *p_z;
    v28 = *p_y;
    j_il2cpp_runtime_class_init_0(v15, v13);
    v22 = v27;
    v21.n64_u32[0] = v28;
    v15 = ShopRootConstants_TypeInfo;
  }
  v23 = v15->static_fields;
  if ( isEvent )
  {
    v24 = x + v23->EVENT_GIFT_POS.fields.x;
    v25 = vadd_f32(v10, *(float32x2_t *)&v23->EVENT_GIFT_POS.fields.y).n64_u64[0];
  }
  else
  {
    v21.n64_u32[1] = v22;
    v24 = v20 + (float)(x + v23->DEFAULT_GIFT_POS.fields.x);
    v25 = vadd_f32(v21, vadd_f32(v10, *(float32x2_t *)&v23->DEFAULT_GIFT_POS.fields.y)).n64_u64[0];
  }
  v26 = *((float *)&v25 + 1);
  result.fields.y = *(float *)&v25;
  result.fields.z = v26;
  result.fields.x = v24;
  return result;
}


UnityEngine_Vector3_o __fastcall ShopRootConstants__GetHelpButtonPos(int32_t state, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  __int64 v10; // x1
  __int64 v11; // x2
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x9
  float *p_z; // x10
  ShopRootConstants_c *v15; // x0
  struct ShopRootConstants_StaticFields *v16; // x10
  ShopRootConstants_c *v17; // x0
  float32x2_t v18; // d3
  unsigned __int32 v19; // s2
  float v20; // s9
  float32x2_t *v21; // x8
  unsigned __int64 v22; // d0
  float v23; // s2
  ShopRootConstants_c *v24; // x0
  struct ShopRootConstants_StaticFields *v25; // x8
  float32x2_t v26; // d0
  float v27; // s1
  ShopRootConstants_c *v28; // x0
  float32x2_t *v29; // x8
  float v30; // s1
  unsigned __int32 v31; // [xsp+0h] [xbp-70h]
  float x; // [xsp+10h] [xbp-60h]
  float32x2_t v33; // [xsp+20h] [xbp-50h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B127DF & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v4, v5);
    byte_4B127DF = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v33.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  }
  else
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v6);
    v33.n64_u64[0] = COERCE_UNSIGNED_INT(-FSUtility__GetOffsetX(68.0, 1, 0LL));
    z = 0.0;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v6);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v11);
      byte_4B109C1 = 1;
    }
    p_SCOPE_HELP_ANCHOR = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (unsigned __int32 *)&p_SCOPE_HELP_ANCHOR->zeroVector.fields.y;
    p_z = &p_SCOPE_HELP_ANCHOR->zeroVector.fields.z;
  }
  else
  {
    v15 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v10);
      v15 = ShopRootConstants_TypeInfo;
    }
    v16 = v15->static_fields;
    p_SCOPE_HELP_ANCHOR = (struct UnityEngine_Vector3_StaticFields *)&v16->SCOPE_HELP_ANCHOR;
    p_y = (unsigned __int32 *)&v16->SCOPE_HELP_ANCHOR.fields.y;
    p_z = &v16->SCOPE_HELP_ANCHOR.fields.z;
  }
  switch ( state )
  {
    case 1:
    case 5:
      v17 = ShopRootConstants_TypeInfo;
      v18.n64_u32[0] = LODWORD(p_SCOPE_HELP_ANCHOR->zeroVector.fields.x);
      v19 = *p_y;
      v20 = *p_z;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        v31 = *p_y;
        x = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v10);
        v19 = v31;
        v18.n64_f32[0] = x;
        v17 = ShopRootConstants_TypeInfo;
      }
      v21 = (float32x2_t *)v17->static_fields;
      v18.n64_u32[1] = v19;
      v22 = vadd_f32(v18, vadd_f32(v33, v21[9])).n64_u64[0];
      v23 = v20 + (float)(z + v21[10].n64_f32[0]);
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
        v24 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v10);
          v24 = ShopRootConstants_TypeInfo;
        }
        v25 = v24->static_fields;
        v26.n64_u64[0] = *(unsigned __int64 *)&v25->EVENT_HELP_BUTTON_POS.fields.x;
        v27 = v25->EVENT_HELP_BUTTON_POS.fields.z;
      }
      else
      {
LABEL_29:
        v28 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v10);
          v28 = ShopRootConstants_TypeInfo;
        }
        v29 = (float32x2_t *)v28->static_fields;
        v26.n64_u64[0] = v29[9].n64_u64[0];
        v27 = v29[10].n64_f32[0];
      }
      v22 = vadd_f32(v33, v26).n64_u64[0];
      v23 = z + v27;
LABEL_33:
      v30 = *((float *)&v22 + 1);
      result.fields.x = *(float *)&v22;
      result.fields.z = v23;
      result.fields.y = v30;
      return result;
  }
}


System_String_o *__fastcall ShopRootConstants__GetHelpSaveKey(int32_t state, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 *v12; // x8

  if ( (byte_4B127DE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13024/*"SpecialItemHelp"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_12902/*"Shop15Help"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_2398/*"AnonymousHelp"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11286/*"RarePriHelp"*/, v10, v11);
    byte_4B127DE = 1;
  }
  if ( state > 5 )
  {
    if ( state == 6 )
    {
      v12 = &StringLiteral_2398/*"AnonymousHelp"*/;
      return (System_String_o *)*v12;
    }
    if ( state == 20 )
    {
      v12 = &StringLiteral_12902/*"Shop15Help"*/;
      return (System_String_o *)*v12;
    }
LABEL_10:
    v12 = (__int64 *)&StringLiteral_1/*""*/;
    return (System_String_o *)*v12;
  }
  if ( state == 3 )
  {
    v12 = &StringLiteral_11286/*"RarePriHelp"*/;
    return (System_String_o *)*v12;
  }
  if ( state != 5 )
    goto LABEL_10;
  v12 = &StringLiteral_13024/*"SpecialItemHelp"*/;
  return (System_String_o *)*v12;
}


bool __fastcall ShopRootConstants__IsSvtCostumeShopOpen(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B127E1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12115/*"SHOP04_SHOP_STATE"*/, v1, v2);
    byte_4B127E1 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_12115/*"SHOP04_SHOP_STATE"*/, 0LL) == 0;
}