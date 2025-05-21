void __fastcall PlayerStatusRaidPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x0
  struct System_Int32_array *v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  __int64 v14; // x19
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  __int64 v22; // x19
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  __int64 v30; // x19
  int32_t v31; // w1
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  struct PlayerStatusRaidPointComponent_StaticFields *v38; // x0

  if ( (byte_4B416A0 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, v1);
    sub_1BDB878(&PlayerStatusRaidPointComponent_TypeInfo, v2);
    sub_1BDB878(&string___TypeInfo, v3);
    sub_1BDB878(&StringLiteral_22970/*"raid_point_old"*/, v4);
    sub_1BDB878(&StringLiteral_22967/*"raid_point"*/, v5);
    sub_1BDB878(&StringLiteral_22971/*"raid_point_over"*/, v6);
    sub_1BDB878(&StringLiteral_23725/*"status_raid_point_frame"*/, v7);
    sub_1BDB878(&StringLiteral_22969/*"raid_point_frame_old"*/, v8);
    sub_1BDB878(&StringLiteral_22972/*"raid_point_over_old"*/, v9);
    byte_4B416A0 = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v10 = sub_1BDB920(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_16;
  v14 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_15;
  v15 = StringLiteral_22969/*"raid_point_frame_old"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_22969/*"raid_point_frame_old"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 32), v15, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_15;
  v17 = StringLiteral_23725/*"status_raid_point_frame"*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_23725/*"status_raid_point_frame"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 40), v17, v12, v16);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v14;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->RP_SPNAME_FRAME, v14, v19, v20);
  v10 = sub_1BDB920(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_16;
  v22 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_15;
  v23 = StringLiteral_22970/*"raid_point_old"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_22970/*"raid_point_old"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 32), v23, v12, v21);
  if ( *(_DWORD *)(v22 + 24) <= 1u )
    goto LABEL_15;
  v25 = StringLiteral_22967/*"raid_point"*/;
  *(_QWORD *)(v22 + 40) = StringLiteral_22967/*"raid_point"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 40), v25, v12, v24);
  v26 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v26->RP_SPNAME_NORMAL = (struct System_String_array *)v22;
  sub_1BDB81C((CGThumbnailListItem_o *)&v26->RP_SPNAME_NORMAL, v22, v27, v28);
  v10 = sub_1BDB920(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_16;
  v30 = v10;
  if ( !*(_DWORD *)(v10 + 24)
    || (v31 = StringLiteral_22972/*"raid_point_over_old"*/,
        *(_QWORD *)(v10 + 32) = StringLiteral_22972/*"raid_point_over_old"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 32), v31, v12, v29),
        *(_DWORD *)(v30 + 24) <= 1u) )
  {
LABEL_15:
    sub_1BDBADC(v10, v11, v12);
  }
  v33 = StringLiteral_22971/*"raid_point_over"*/;
  *(_QWORD *)(v30 + 40) = StringLiteral_22971/*"raid_point_over"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v30 + 40), v33, v12, v32);
  v34 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v34->RP_SPNAME_OVER = (struct System_String_array *)v30;
  sub_1BDB81C((CGThumbnailListItem_o *)&v34->RP_SPNAME_OVER, v30, v35, v36);
  v10 = sub_1BDB920(int___TypeInfo, 2LL);
  if ( !v10 )
LABEL_16:
    sub_1BDBAD4(v10, v11);
  v11 = (struct System_Int32_array *)v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_15;
  *(_DWORD *)(v10 + 32) = 5;
  v38 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v38->RP_OFFSET = v11;
  sub_1BDB81C((CGThumbnailListItem_o *)&v38->RP_OFFSET, (int32_t)v11, v12, v37);
}


void __fastcall PlayerStatusRaidPointComponent___ctor(PlayerStatusRaidPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerStatusRaidPointComponent__SetDispType(
        PlayerStatusRaidPointComponent_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *raidPointSp; // x0
  __int64 v6; // x2
  UISprite_o *v7; // x20
  __int64 v8; // x8
  __int64 BpType; // x9

  if ( (byte_4B4169F & 1) == 0 )
  {
    sub_1BDB878(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType);
    byte_4B4169F = 1;
  }
  switch ( dispType )
  {
    case 2:
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !raidPointSp )
        goto LABEL_25;
      raidPointSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raidPointSp, 0LL);
      if ( !raidPointSp )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raidPointSp, 1, 0LL);
      v7 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v8 = *(_QWORD *)(*(_QWORD *)&raidPointSp[7].fields.m_CachedPtr + 24LL);
      if ( !v8 )
        goto LABEL_25;
      goto LABEL_20;
    case 1:
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !raidPointSp )
        goto LABEL_25;
      raidPointSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raidPointSp, 0LL);
      if ( !raidPointSp )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raidPointSp, 1, 0LL);
      v7 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v8 = *(_QWORD *)(*(_QWORD *)&raidPointSp[7].fields.m_CachedPtr + 16LL);
      if ( !v8 )
        goto LABEL_25;
LABEL_20:
      BpType = this->fields.BpType;
      if ( (unsigned int)BpType >= *(_DWORD *)(v8 + 24) )
        sub_1BDBADC(raidPointSp, *(_QWORD *)&dispType, v6);
      if ( !v7 )
        goto LABEL_25;
      UISprite__set_spriteName(v7, *(System_String_o **)(v8 + 8 * BpType + 32), 0LL);
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !raidPointSp )
        goto LABEL_25;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))raidPointSp->klass[2]._1.typeMetadataHandle)(
        raidPointSp,
        raidPointSp->klass[2]._1.interopData);
      return;
    case 0:
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( raidPointSp )
      {
        raidPointSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raidPointSp, 0LL);
        if ( raidPointSp )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raidPointSp, 0, 0LL);
          return;
        }
      }
LABEL_25:
      sub_1BDBAD4(raidPointSp, *(_QWORD *)&dispType);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerStatusRaidPointComponent__Setup(
        PlayerStatusRaidPointComponent_o *this,
        int32_t index,
        int32_t iBpType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  System_String_o *name; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  int v13; // w20
  int32_t Value; // w0
  PlayerStatusRaidPointComponent_c *v15; // x0
  bool v16; // w20
  __int64 v17; // x2
  UISprite_o *raidFrameSp; // x20
  __int64 v19; // x8
  __int64 BpType; // x9
  struct System_Int32_array *RP_OFFSET; // x8
  __int64 v22; // x9
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  v23 = index;
  if ( (byte_4B4169E & 1) == 0 )
  {
    sub_1BDB878(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&StringLiteral_10947/*"RAID_MARKDISP_STEP"*/, v6);
    byte_4B4169E = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  v9 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v11 = System_Int32__ToString((int32_t)&v23, 0LL);
  v12 = System_String__Concat_62572260(name, v11, 0LL);
  UnityEngine_Object__set_name(v9, v12, 0LL);
  v13 = v23 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10947/*"RAID_MARKDISP_STEP"*/, 0LL);
  if ( Value <= 0 )
  {
    v15 = PlayerStatusRaidPointComponent_TypeInfo;
    if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
      v15 = PlayerStatusRaidPointComponent_TypeInfo;
    }
    Value = v15->static_fields->RAID_MARKDISP_STEP_DEFAULT;
  }
  v16 = v13 >= 1 && v13 % Value == 0;
  gameObject = (UnityEngine_Object_o *)this->fields.markFrontSp;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v16, 0LL);
  gameObject = (UnityEngine_Object_o *)this->fields.markBackSp;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v16, 0LL);
  gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  raidFrameSp = this->fields.raidFrameSp;
  if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
    gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  }
  v19 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 8LL);
  if ( !v19 )
    goto LABEL_25;
  BpType = this->fields.BpType;
  if ( (unsigned int)BpType >= *(_DWORD *)(v19 + 24) )
    goto LABEL_26;
  if ( !raidFrameSp
    || (UISprite__set_spriteName(raidFrameSp, *(System_String_o **)(v19 + 8 * BpType + 32), 0LL),
        (gameObject = (UnityEngine_Object_o *)this->fields.raidFrameSp) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Object_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
          gameObject,
          gameObject->klass[2]._1.interopData),
        (gameObject = (UnityEngine_Object_o *)this->fields.raidPointSp) == 0LL)
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL),
        (RP_OFFSET = PlayerStatusRaidPointComponent_TypeInfo->static_fields->RP_OFFSET) == 0LL) )
  {
LABEL_25:
    sub_1BDBAD4(gameObject, v8);
  }
  v22 = this->fields.BpType;
  if ( (unsigned int)v22 >= RP_OFFSET->max_length )
LABEL_26:
    sub_1BDBADC(gameObject, v8, v17);
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    (float)RP_OFFSET->m_Items[v22 + 1],
    0LL);
}