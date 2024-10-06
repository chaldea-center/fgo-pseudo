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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x19
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x19
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x19
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  struct PlayerStatusRaidPointComponent_StaticFields *v44; // x0

  if ( (byte_4A6CD11 & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, v1);
    sub_1B90010(&PlayerStatusRaidPointComponent_TypeInfo, v2);
    sub_1B90010(&string___TypeInfo, v3);
    sub_1B90010(&StringLiteral_22805/*"raid_point_old"*/, v4);
    sub_1B90010(&StringLiteral_22802/*"raid_point"*/, v5);
    sub_1B90010(&StringLiteral_22806/*"raid_point_over"*/, v6);
    sub_1B90010(&StringLiteral_23569/*"status_raid_point_frame"*/, v7);
    sub_1B90010(&StringLiteral_22804/*"raid_point_frame_old"*/, v8);
    sub_1B90010(&StringLiteral_22807/*"raid_point_over_old"*/, v9);
    byte_4A6CD11 = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v10 = sub_1B900B8(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_16;
  v14 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_15;
  v15 = StringLiteral_22804/*"raid_point_frame_old"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_22804/*"raid_point_frame_old"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 32), v15, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_15;
  v18 = StringLiteral_23569/*"status_raid_point_frame"*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_23569/*"status_raid_point_frame"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v14 + 40), v18, v16, v17);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v14;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->RP_SPNAME_FRAME, v14, v20, v21);
  v10 = sub_1B900B8(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_16;
  v24 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_15;
  v25 = StringLiteral_22805/*"raid_point_old"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_22805/*"raid_point_old"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 32), v25, v22, v23);
  if ( *(_DWORD *)(v24 + 24) <= 1u )
    goto LABEL_15;
  v28 = StringLiteral_22802/*"raid_point"*/;
  *(_QWORD *)(v24 + 40) = StringLiteral_22802/*"raid_point"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v24 + 40), v28, v26, v27);
  v29 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v29->RP_SPNAME_NORMAL = (struct System_String_array *)v24;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v29->RP_SPNAME_NORMAL, v24, v30, v31);
  v10 = sub_1B900B8(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_16;
  v34 = v10;
  if ( !*(_DWORD *)(v10 + 24)
    || (v35 = StringLiteral_22807/*"raid_point_over_old"*/,
        *(_QWORD *)(v10 + 32) = StringLiteral_22807/*"raid_point_over_old"*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 32), v35, v32, v33),
        *(_DWORD *)(v34 + 24) <= 1u) )
  {
LABEL_15:
    sub_1B90274(v10, v11);
  }
  v38 = StringLiteral_22806/*"raid_point_over"*/;
  *(_QWORD *)(v34 + 40) = StringLiteral_22806/*"raid_point_over"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v34 + 40), v38, v36, v37);
  v39 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v39->RP_SPNAME_OVER = (struct System_String_array *)v34;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v39->RP_SPNAME_OVER, v34, v40, v41);
  v10 = sub_1B900B8(int___TypeInfo, 2LL);
  if ( !v10 )
LABEL_16:
    sub_1B9026C(v10, v11);
  v11 = (struct System_Int32_array *)v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_15;
  *(_DWORD *)(v10 + 32) = 5;
  v44 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v44->RP_OFFSET = v11;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v44->RP_OFFSET, (int32_t)v11, v42, v43);
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
  UISprite_o *v6; // x20
  __int64 v7; // x8
  __int64 BpType; // x9

  if ( (byte_4A6CD10 & 1) == 0 )
  {
    sub_1B90010(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType);
    byte_4A6CD10 = 1;
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
      v6 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v7 = *(_QWORD *)(*(_QWORD *)&raidPointSp[7].fields.m_CachedPtr + 24LL);
      if ( !v7 )
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
      v6 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v7 = *(_QWORD *)(*(_QWORD *)&raidPointSp[7].fields.m_CachedPtr + 16LL);
      if ( !v7 )
        goto LABEL_25;
LABEL_20:
      BpType = this->fields.BpType;
      if ( (unsigned int)BpType >= *(_DWORD *)(v7 + 24) )
        sub_1B90274(raidPointSp, *(_QWORD *)&dispType);
      if ( !v6 )
        goto LABEL_25;
      UISprite__set_spriteName(v6, *(System_String_o **)(v7 + 8 * BpType + 32), 0LL);
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
      sub_1B9026C(raidPointSp, *(_QWORD *)&dispType);
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
  UISprite_o *raidFrameSp; // x20
  __int64 v18; // x8
  __int64 BpType; // x9
  struct System_Int32_array *RP_OFFSET; // x8
  __int64 v21; // x9
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  v22 = index;
  if ( (byte_4A6CD0F & 1) == 0 )
  {
    sub_1B90010(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&index);
    sub_1B90010(&StringLiteral_10949/*"RAID_MARKDISP_STEP"*/, v6);
    byte_4A6CD0F = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  v9 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v11 = System_Int32__ToString((int32_t)&v22, 0LL);
  v12 = System_String__Concat_61787092(name, v11, 0LL);
  UnityEngine_Object__set_name(v9, v12, 0LL);
  v13 = v22 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10949/*"RAID_MARKDISP_STEP"*/, 0LL);
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
  v18 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 8LL);
  if ( !v18 )
    goto LABEL_25;
  BpType = this->fields.BpType;
  if ( (unsigned int)BpType >= *(_DWORD *)(v18 + 24) )
    goto LABEL_26;
  if ( !raidFrameSp
    || (UISprite__set_spriteName(raidFrameSp, *(System_String_o **)(v18 + 8 * BpType + 32), 0LL),
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
    sub_1B9026C(gameObject, v8);
  }
  v21 = this->fields.BpType;
  if ( (unsigned int)v21 >= RP_OFFSET->max_length )
LABEL_26:
    sub_1B90274(gameObject, v8);
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    (float)RP_OFFSET->m_Items[v21 + 1],
    0LL);
}