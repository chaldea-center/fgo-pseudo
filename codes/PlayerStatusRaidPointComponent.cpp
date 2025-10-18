void PlayerStatusRaidPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x19
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x19
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x19
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Int32_array *v34; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v35; // x0

  if ( (byte_4C3FB23 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&PlayerStatusRaidPointComponent_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_22949/*"raid_point_old"*/);
    sub_1C37058(&StringLiteral_22946/*"raid_point"*/);
    sub_1C37058(&StringLiteral_22950/*"raid_point_over"*/);
    sub_1C37058(&StringLiteral_23695/*"status_raid_point_frame"*/);
    sub_1C37058(&StringLiteral_22948/*"raid_point_frame_old"*/);
    sub_1C37058(&StringLiteral_22951/*"raid_point_over_old"*/);
    byte_4C3FB23 = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_16;
  v4 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_15;
  v5 = StringLiteral_22948/*"raid_point_frame_old"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_22948/*"raid_point_frame_old"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v5, v2, v3);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_15;
  v8 = StringLiteral_23695/*"status_raid_point_frame"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_23695/*"status_raid_point_frame"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 40), v8, v6, v7);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->RP_SPNAME_FRAME, v4, v10, v11);
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_16;
  v14 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_15;
  v15 = StringLiteral_22949/*"raid_point_old"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_22949/*"raid_point_old"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v15, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_15;
  v18 = StringLiteral_22946/*"raid_point"*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_22946/*"raid_point"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 40), v18, v16, v17);
  v19 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v19->RP_SPNAME_NORMAL = (struct System_String_array *)v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&v19->RP_SPNAME_NORMAL, v14, v20, v21);
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_16;
  v24 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v25 = StringLiteral_22951/*"raid_point_over_old"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_22951/*"raid_point_over_old"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v25, v22, v23),
        *(_DWORD *)(v24 + 24) <= 1u) )
  {
LABEL_15:
    sub_1C372BC(v1);
  }
  v28 = StringLiteral_22950/*"raid_point_over"*/;
  *(_QWORD *)(v24 + 40) = StringLiteral_22950/*"raid_point_over"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 40), v28, v26, v27);
  v29 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v29->RP_SPNAME_OVER = (struct System_String_array *)v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->RP_SPNAME_OVER, v24, v30, v31);
  v1 = sub_1C37100(int___TypeInfo, 2);
  if ( !v1 )
LABEL_16:
    sub_1C372B4(v1);
  v34 = (struct System_Int32_array *)v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_15;
  *(_DWORD *)(v1 + 32) = 5;
  v35 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v35->RP_OFFSET = v34;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->RP_OFFSET, (int32_t)v34, v32, v33);
}


void PlayerStatusRaidPointComponent___ctor(PlayerStatusRaidPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PlayerStatusRaidPointComponent__SetDispType(
        PlayerStatusRaidPointComponent_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *raidPointSp; // x0
  UISprite_o *v6; // x20
  __int64 v7; // x8
  __int64 BpType; // x9

  if ( (byte_4C3FB22 & 1) == 0 )
  {
    sub_1C37058(&PlayerStatusRaidPointComponent_TypeInfo);
    byte_4C3FB22 = 1;
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
        sub_1C372BC(raidPointSp);
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
      sub_1C372B4(raidPointSp);
  }
}


void PlayerStatusRaidPointComponent__Setup(
        PlayerStatusRaidPointComponent_o *this,
        int32_t index,
        int32_t iBpType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v7; // x20
  System_String_o *name; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int v11; // w20
  int32_t Value; // w0
  PlayerStatusRaidPointComponent_c *v13; // x0
  bool v14; // w20
  UISprite_o *raidFrameSp; // x20
  __int64 v16; // x8
  __int64 BpType; // x9
  struct System_Int32_array *RP_OFFSET; // x8
  __int64 v19; // x9
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  v20 = index;
  if ( (byte_4C3FB21 & 1) == 0 )
  {
    sub_1C37058(&PlayerStatusRaidPointComponent_TypeInfo);
    sub_1C37058(&StringLiteral_10951/*"RAID_MARKDISP_STEP"*/);
    byte_4C3FB21 = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_25;
  v7 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0);
  v9 = System_Int32__ToString((int32_t)&v20, 0);
  v10 = System_String__Concat_63561656(name, v9, 0);
  UnityEngine_Object__set_name(v7, v10, 0);
  v11 = v20 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10951/*"RAID_MARKDISP_STEP"*/, 0);
  if ( Value <= 0 )
  {
    v13 = PlayerStatusRaidPointComponent_TypeInfo;
    if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
      v13 = PlayerStatusRaidPointComponent_TypeInfo;
    }
    Value = v13->static_fields->RAID_MARKDISP_STEP_DEFAULT;
  }
  v14 = v11 >= 1 && v11 % Value == 0;
  gameObject = (UnityEngine_Object_o *)this->fields.markFrontSp;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v14, 0);
  gameObject = (UnityEngine_Object_o *)this->fields.markBackSp;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v14, 0);
  gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  raidFrameSp = this->fields.raidFrameSp;
  if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
    gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  }
  v16 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 8);
  if ( !v16 )
    goto LABEL_25;
  BpType = this->fields.BpType;
  if ( (unsigned int)BpType >= *(_DWORD *)(v16 + 24) )
    goto LABEL_26;
  if ( !raidFrameSp
    || (UISprite__set_spriteName(raidFrameSp, *(System_String_o **)(v16 + 8 * BpType + 32), 0),
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
    sub_1C372B4(gameObject);
  }
  v19 = this->fields.BpType;
  if ( (unsigned int)v19 >= LODWORD(RP_OFFSET->max_length) )
LABEL_26:
    sub_1C372BC(gameObject);
  GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)gameObject, (float)RP_OFFSET->m_Items[v19], 0);
}