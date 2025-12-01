void ShopRootConstants___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct ShopRootConstants_StaticFields *static_fields; // x0
  int32_t v8; // w1
  ShopRootConstants_c *v9; // x8
  struct ShopRootConstants_StaticFields *v10; // x9
  struct ShopRootConstants_StaticFields *v11; // x9
  struct ShopRootConstants_StaticFields *v12; // x9
  struct ShopRootConstants_StaticFields *v13; // x9
  struct ShopRootConstants_StaticFields *v14; // x9
  struct ShopRootConstants_StaticFields *v15; // x9
  struct ShopRootConstants_StaticFields *v16; // x9
  struct ShopRootConstants_StaticFields *v17; // x9
  struct ShopRootConstants_StaticFields *v18; // x0
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CC36DF & 1) == 0 )
  {
    sub_1C713B0(&ShopRootConstants_TypeInfo);
    sub_1C713B0(&StringLiteral_2909/*"BGM_EVENT_128"*/);
    sub_1C713B0(&StringLiteral_3026/*"Back/back{0}"*/);
    byte_4CC36DF = 1;
  }
  static_fields = ShopRootConstants_TypeInfo->static_fields;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
  *(_QWORD *)&static_fields->DEFAULT_FIGURE_ID = 500900;
  v8 = StringLiteral_3026/*"Back/back{0}"*/;
  static_fields->BG_ROOT = (struct System_String_o *)StringLiteral_3026/*"Back/back{0}"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->BG_ROOT, v8, v1, v2, v3, v4, v5, v6);
  v9 = ShopRootConstants_TypeInfo;
  v10 = ShopRootConstants_TypeInfo->static_fields;
  v10->DISP_RECT = (struct UnityEngine_Rect_o)xmmword_CF0490;
  v10->DEFAULT_BG_ID = 10600;
  v11 = v9->static_fields;
  *(_QWORD *)&v11->DEFAULT_GIFT_POS.fields.x = 0xC37A0000C2F00000LL;
  v11->DEFAULT_GIFT_POS.fields.z = 0.0;
  v12 = v9->static_fields;
  *(_QWORD *)&v12->EVENT_GIFT_POS.fields.x = 0xC2FC0000C2F00000LL;
  v12->EVENT_GIFT_POS.fields.z = 0.0;
  v13 = v9->static_fields;
  *(_QWORD *)&v13->ClassBoardResetGiftPos.fields.x = 0xC2880000C2F00000LL;
  v13->ClassBoardResetGiftPos.fields.z = 0.0;
  v14 = v9->static_fields;
  *(_QWORD *)&v14->DEFAULT_HELP_BUTTON_POS.fields.x = 0xC401000000000000LL;
  v14->SCOPE_GIFT_ADD_X = 10;
  v14->DEFAULT_HELP_BUTTON_POS.fields.z = 0.0;
  v15 = v9->static_fields;
  *(_QWORD *)&v15->EVENT_HELP_BUTTON_POS.fields.x = 0xC3C4000000000000LL;
  v15->EVENT_HELP_BUTTON_POS.fields.z = 0.0;
  v16 = v9->static_fields;
  *(_QWORD *)&v16->ClassBoardResetHelpButtonPos.fields.x = 0xC3A7000000000000LL;
  v16->ClassBoardResetHelpButtonPos.fields.z = 0.0;
  v17 = v9->static_fields;
  *(_QWORD *)&v17->SCOPE_HELP_ANCHOR.fields.x = 0x4204000000000000LL;
  v17->SCOPE_HELP_ANCHOR.fields.z = 0.0;
  v18 = v9->static_fields;
  v18->SVT_COSTUME_TITLE_ID = 80319;
  v19 = StringLiteral_2909/*"BGM_EVENT_128"*/;
  v18->SVT_COSTUME_BGM_NAME = (struct System_String_o *)StringLiteral_2909/*"BGM_EVENT_128"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v18->SVT_COSTUME_BGM_NAME, v19, v20, v21, v22, v23, v24, v25);
}


UnityEngine_Vector3_o ShopRootConstants__GetGiftButtonPos(bool isEvent, int32_t state, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  ShopRootConstants_c *v7; // x0
  int SCOPE_GIFT_ADD_X; // w25
  float OffsetX; // s0
  unsigned __int64 v10; // d2
  ShopRootConstants_c *v11; // x0
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x10
  float *p_z; // x9
  struct ShopRootConstants_StaticFields *v15; // x9
  float32x2_t v16; // d3
  unsigned __int32 v17; // s2
  float v18; // s9
  struct ShopRootConstants_StaticFields *v19; // x8
  float32x2_t v20; // d0
  float v21; // s1
  unsigned __int64 v22; // d0
  float v23; // s2
  float v24; // s1
  unsigned __int32 v25; // [xsp+0h] [xbp-80h]
  float x; // [xsp+10h] [xbp-70h]
  float32x2_t v27; // [xsp+20h] [xbp-60h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC36DD & 1) == 0 )
  {
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&ShopRootConstants_TypeInfo);
    byte_4CC36DD = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v27.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  }
  else
  {
    v7 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v7 = ShopRootConstants_TypeInfo;
    }
    SCOPE_GIFT_ADD_X = v7->static_fields->SCOPE_GIFT_ADD_X;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    OffsetX = FSUtility__GetOffsetX(68.0, 0, 0);
    HIDWORD(v10) = 0;
    *(float *)&v10 = OffsetX + (float)SCOPE_GIFT_ADD_X;
    v27.n64_u64[0] = v10;
    z = 0.0;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    v11 = ShopRootConstants_TypeInfo;
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
    v15 = v11->static_fields;
    p_SCOPE_HELP_ANCHOR = (struct UnityEngine_Vector3_StaticFields *)&v15->SCOPE_HELP_ANCHOR;
    p_y = (unsigned __int32 *)&v15->SCOPE_HELP_ANCHOR.fields.y;
    p_z = &v15->SCOPE_HELP_ANCHOR.fields.z;
  }
  v16.n64_u32[0] = LODWORD(p_SCOPE_HELP_ANCHOR->zeroVector.fields.x);
  v17 = *p_y;
  v18 = *p_z;
  if ( !v11->_2.cctor_finished )
  {
    v25 = *p_y;
    x = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
    j_il2cpp_runtime_class_init_0(v11);
    v17 = v25;
    v16.n64_f32[0] = x;
    v11 = ShopRootConstants_TypeInfo;
  }
  v19 = v11->static_fields;
  if ( state == 22 )
  {
    v20.n64_u64[0] = *(unsigned __int64 *)&v19->ClassBoardResetGiftPos.fields.x;
    v21 = v19->ClassBoardResetGiftPos.fields.z;
  }
  else
  {
    if ( !isEvent )
    {
      v16.n64_u32[1] = v17;
      v22 = vadd_f32(v16, vadd_f32(v27, *(float32x2_t *)&v19->DEFAULT_GIFT_POS.fields.x)).n64_u64[0];
      v23 = v18 + (float)(z + v19->DEFAULT_GIFT_POS.fields.z);
      goto LABEL_31;
    }
    v20.n64_u64[0] = *(unsigned __int64 *)&v19->EVENT_GIFT_POS.fields.x;
    v21 = v19->EVENT_GIFT_POS.fields.z;
  }
  v22 = vadd_f32(v27, v20).n64_u64[0];
  v23 = z + v21;
LABEL_31:
  v24 = *((float *)&v22 + 1);
  result.fields.x = *(float *)&v22;
  result.fields.z = v23;
  result.fields.y = v24;
  return result;
}


UnityEngine_Vector3_o ShopRootConstants__GetHelpButtonPos(int32_t state, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *p_SCOPE_HELP_ANCHOR; // x8
  unsigned __int32 *p_y; // x9
  float *p_z; // x10
  ShopRootConstants_c *v8; // x0
  struct ShopRootConstants_StaticFields *v9; // x10
  float32x2_t v10; // d3
  unsigned __int32 v11; // s2
  float v12; // s9
  ShopRootConstants_c *v13; // x0
  struct ShopRootConstants_StaticFields *v14; // x8
  unsigned __int64 v15; // d0
  float v16; // s2
  ShopRootConstants_c *v17; // x0
  struct ShopRootConstants_StaticFields *v18; // x8
  float32x2_t v19; // d0
  float v20; // s1
  ShopRootConstants_c *v21; // x0
  float32x2_t *v22; // x8
  ShopRootConstants_c *v23; // x0
  struct ShopRootConstants_StaticFields *v24; // x8
  float v25; // s1
  unsigned __int32 v26; // [xsp+0h] [xbp-60h]
  float x; // [xsp+10h] [xbp-50h]
  float32x2_t v28; // [xsp+20h] [xbp-40h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC36DC & 1) == 0 )
  {
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&ShopRootConstants_TypeInfo);
    byte_4CC36DC = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v28.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  }
  else
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v28.n64_u64[0] = COERCE_UNSIGNED_INT(-FSUtility__GetOffsetX(68.0, 1, 0));
    z = 0.0;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
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
      v10.n64_u32[0] = LODWORD(p_SCOPE_HELP_ANCHOR->zeroVector.fields.x);
      v11 = *p_y;
      v12 = *p_z;
      v13 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        v26 = *p_y;
        x = p_SCOPE_HELP_ANCHOR->zeroVector.fields.x;
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v11 = v26;
        v10.n64_f32[0] = x;
        v13 = ShopRootConstants_TypeInfo;
      }
      v14 = v13->static_fields;
      v10.n64_u32[1] = v11;
      v15 = vadd_f32(v10, vadd_f32(v28, *(float32x2_t *)&v14->DEFAULT_HELP_BUTTON_POS.fields.x)).n64_u64[0];
      v16 = v12 + (float)(z + v14->DEFAULT_HELP_BUTTON_POS.fields.z);
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
        v21 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v21 = ShopRootConstants_TypeInfo;
        }
        v22 = (float32x2_t *)v21->static_fields;
        v19.n64_u64[0] = v22[12].n64_u64[0];
        v20 = v22[13].n64_f32[0];
      }
      else if ( state == 22 )
      {
        v17 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v17 = ShopRootConstants_TypeInfo;
        }
        v18 = v17->static_fields;
        v19.n64_u64[0] = *(unsigned __int64 *)&v18->ClassBoardResetHelpButtonPos.fields.x;
        v20 = v18->ClassBoardResetHelpButtonPos.fields.z;
      }
      else
      {
LABEL_33:
        v23 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v23 = ShopRootConstants_TypeInfo;
        }
        v24 = v23->static_fields;
        v19.n64_u64[0] = *(unsigned __int64 *)&v24->DEFAULT_HELP_BUTTON_POS.fields.x;
        v20 = v24->DEFAULT_HELP_BUTTON_POS.fields.z;
      }
      v15 = vadd_f32(v28, v19).n64_u64[0];
      v16 = z + v20;
LABEL_37:
      v25 = *((float *)&v15 + 1);
      result.fields.x = *(float *)&v15;
      result.fields.z = v16;
      result.fields.y = v25;
      return result;
  }
}


System_String_o *ShopRootConstants__GetHelpSaveKey(int32_t state, const MethodInfo *method)
{
  __int64 *v3; // x8

  if ( (byte_4CC36DB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_12975/*"SpecialItemHelp"*/);
    sub_1C713B0(&StringLiteral_12857/*"Shop15Help"*/);
    sub_1C713B0(&StringLiteral_12858/*"Shop18Help"*/);
    sub_1C713B0(&StringLiteral_2273/*"AnonymousHelp"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_11188/*"RarePriHelp"*/);
    byte_4CC36DB = 1;
  }
  if ( (unsigned int)(state - 3) >= 4 )
  {
    v3 = &StringLiteral_1/*""*/;
    if ( state == 22 )
      v3 = (__int64 *)&StringLiteral_12858/*"Shop18Help"*/;
    if ( state == 20 )
      v3 = &StringLiteral_12857/*"Shop15Help"*/;
  }
  else
  {
    v3 = off_46E1088[state - 3];
  }
  return (System_String_o *)*v3;
}


bool ShopRootConstants__IsSvtCostumeShopOpen(const MethodInfo *method)
{
  if ( (byte_4CC36DE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_12041/*"SHOP04_SHOP_STATE"*/);
    byte_4CC36DE = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_12041/*"SHOP04_SHOP_STATE"*/, 0) == 0;
}