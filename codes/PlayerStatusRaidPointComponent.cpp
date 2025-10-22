void PlayerStatusRaidPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  struct System_Int32_array *v2; // x1
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  __int64 v5; // x19
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x19
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x19
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct PlayerStatusRaidPointComponent_StaticFields *v35; // x0

  if ( (byte_4C538BE & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&PlayerStatusRaidPointComponent_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_22968/*"raid_point_old"*/);
    sub_1C3E564(&StringLiteral_22965/*"raid_point"*/);
    sub_1C3E564(&StringLiteral_22969/*"raid_point_over"*/);
    sub_1C3E564(&StringLiteral_23715/*"status_raid_point_frame"*/);
    sub_1C3E564(&StringLiteral_22967/*"raid_point_frame_old"*/);
    sub_1C3E564(&StringLiteral_22970/*"raid_point_over_old"*/);
    byte_4C538BE = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_16;
  v5 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_15;
  v6 = StringLiteral_22967/*"raid_point_frame_old"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_22967/*"raid_point_frame_old"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v1 + 32), v6, v3, v4);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_15;
  v9 = StringLiteral_23715/*"status_raid_point_frame"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_23715/*"status_raid_point_frame"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 40), v9, v7, v8);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v5;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->RP_SPNAME_FRAME, v5, v11, v12);
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_16;
  v15 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_15;
  v16 = StringLiteral_22968/*"raid_point_old"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_22968/*"raid_point_old"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v1 + 32), v16, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_15;
  v19 = StringLiteral_22965/*"raid_point"*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_22965/*"raid_point"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v15 + 40), v19, v17, v18);
  v20 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v20->RP_SPNAME_NORMAL = (struct System_String_array *)v15;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->RP_SPNAME_NORMAL, v15, v21, v22);
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_16;
  v25 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v26 = StringLiteral_22970/*"raid_point_over_old"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_22970/*"raid_point_over_old"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v1 + 32), v26, v23, v24),
        *(_DWORD *)(v25 + 24) <= 1u) )
  {
LABEL_15:
    sub_1C3E7C8(v1, v2);
  }
  v29 = StringLiteral_22969/*"raid_point_over"*/;
  *(_QWORD *)(v25 + 40) = StringLiteral_22969/*"raid_point_over"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v25 + 40), v29, v27, v28);
  v30 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v30->RP_SPNAME_OVER = (struct System_String_array *)v25;
  sub_1C3E508((CGThumbnailListItem_o *)&v30->RP_SPNAME_OVER, v25, v31, v32);
  v1 = sub_1C3E60C(int___TypeInfo, 2);
  if ( !v1 )
LABEL_16:
    sub_1C3E7C0(v1, v2);
  v2 = (struct System_Int32_array *)v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_15;
  *(_DWORD *)(v1 + 32) = 5;
  v35 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v35->RP_OFFSET = v2;
  sub_1C3E508((CGThumbnailListItem_o *)&v35->RP_OFFSET, (int32_t)v2, v33, v34);
}


void PlayerStatusRaidPointComponent___ctor(PlayerStatusRaidPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PlayerStatusRaidPointComponent__SetDispType(
        PlayerStatusRaidPointComponent_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *raidPointSp; // x0
  UISprite_o *v6; // x20
  __int64 v7; // x8
  __int64 BpType; // x9

  if ( (byte_4C538BD & 1) == 0 )
  {
    sub_1C3E564(&PlayerStatusRaidPointComponent_TypeInfo);
    byte_4C538BD = 1;
  }
  switch ( dispType )
  {
    case 2:
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !raidPointSp )
        goto LABEL_25;
      raidPointSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raidPointSp, 0);
      if ( !raidPointSp )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raidPointSp, 1, 0);
      v6 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v7 = *(_QWORD *)(raidPointSp[7].fields.m_CachedPtr + 24);
      if ( !v7 )
        goto LABEL_25;
      goto LABEL_20;
    case 1:
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !raidPointSp )
        goto LABEL_25;
      raidPointSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raidPointSp, 0);
      if ( !raidPointSp )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raidPointSp, 1, 0);
      v6 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v7 = *(_QWORD *)(raidPointSp[7].fields.m_CachedPtr + 16);
      if ( !v7 )
        goto LABEL_25;
LABEL_20:
      BpType = this->fields.BpType;
      if ( (unsigned int)BpType >= *(_DWORD *)(v7 + 24) )
        sub_1C3E7C8(raidPointSp, *(_QWORD *)&dispType);
      if ( !v6 )
        goto LABEL_25;
      UISprite__set_spriteName(v6, *(System_String_o **)(v7 + 8 * BpType + 32), 0);
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !raidPointSp )
        goto LABEL_25;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))raidPointSp->klass[2]._1.parent)(
        raidPointSp,
        raidPointSp->klass[2]._1.generic_class);
      return;
    case 0:
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( raidPointSp )
      {
        raidPointSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raidPointSp, 0);
        if ( raidPointSp )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raidPointSp, 0, 0);
          return;
        }
      }
LABEL_25:
      sub_1C3E7C0(raidPointSp, *(_QWORD *)&dispType);
  }
}


void PlayerStatusRaidPointComponent__Setup(
        PlayerStatusRaidPointComponent_o *this,
        int32_t index,
        int32_t iBpType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  System_String_o *name; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  int v12; // w20
  int32_t Value; // w0
  PlayerStatusRaidPointComponent_c *v14; // x0
  bool v15; // w20
  UISprite_o *raidFrameSp; // x20
  __int64 v17; // x8
  __int64 BpType; // x9
  struct System_Int32_array *RP_OFFSET; // x8
  __int64 v20; // x9
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  v21 = index;
  if ( (byte_4C538BC & 1) == 0 )
  {
    sub_1C3E564(&PlayerStatusRaidPointComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_10953/*"RAID_MARKDISP_STEP"*/);
    byte_4C538BC = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_25;
  v8 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0);
  v10 = System_Int32__ToString((int32_t)&v21, 0);
  v11 = System_String__Concat_63636468(name, v10, 0);
  UnityEngine_Object__set_name(v8, v11, 0);
  v12 = v21 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10953/*"RAID_MARKDISP_STEP"*/, 0);
  if ( Value <= 0 )
  {
    v14 = PlayerStatusRaidPointComponent_TypeInfo;
    if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
      v14 = PlayerStatusRaidPointComponent_TypeInfo;
    }
    Value = v14->static_fields->RAID_MARKDISP_STEP_DEFAULT;
  }
  v15 = v12 >= 1 && v12 % Value == 0;
  gameObject = (UnityEngine_Object_o *)this->fields.markFrontSp;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v15, 0);
  gameObject = (UnityEngine_Object_o *)this->fields.markBackSp;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v15, 0);
  gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  raidFrameSp = this->fields.raidFrameSp;
  if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
    gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  }
  v17 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 8);
  if ( !v17 )
    goto LABEL_25;
  BpType = this->fields.BpType;
  if ( (unsigned int)BpType >= *(_DWORD *)(v17 + 24) )
    goto LABEL_26;
  if ( !raidFrameSp
    || (UISprite__set_spriteName(raidFrameSp, *(System_String_o **)(v17 + 8 * BpType + 32), 0),
        (gameObject = (UnityEngine_Object_o *)this->fields.raidFrameSp) == 0)
    || (((void (__fastcall *)(UnityEngine_Object_o *, void *))gameObject->klass[2]._1.parent)(
          gameObject,
          gameObject->klass[2]._1.generic_class),
        (gameObject = (UnityEngine_Object_o *)this->fields.raidPointSp) == 0)
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)gameObject,
                                               0),
        (RP_OFFSET = PlayerStatusRaidPointComponent_TypeInfo->static_fields->RP_OFFSET) == 0) )
  {
LABEL_25:
    sub_1C3E7C0(gameObject, v7);
  }
  v20 = this->fields.BpType;
  if ( (unsigned int)v20 >= LODWORD(RP_OFFSET->max_length) )
LABEL_26:
    sub_1C3E7C8(gameObject, v7);
  GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)gameObject, (float)RP_OFFSET->m_Items[v20], 0);
}