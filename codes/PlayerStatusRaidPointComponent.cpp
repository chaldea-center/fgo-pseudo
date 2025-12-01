void PlayerStatusRaidPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  __int64 v9; // x19
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x19
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  __int64 v53; // x19
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  struct System_Int32_array *v75; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v76; // x0

  if ( (byte_4CC3F21 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&PlayerStatusRaidPointComponent_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_23060/*"raid_point_old"*/);
    sub_1C713B0(&StringLiteral_23057/*"raid_point"*/);
    sub_1C713B0(&StringLiteral_23061/*"raid_point_over"*/);
    sub_1C713B0(&StringLiteral_23809/*"status_raid_point_frame"*/);
    sub_1C713B0(&StringLiteral_23059/*"raid_point_frame_old"*/);
    sub_1C713B0(&StringLiteral_23062/*"raid_point_over_old"*/);
    byte_4CC3F21 = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v1 = sub_1C71458(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_16;
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_15;
  v10 = StringLiteral_23059/*"raid_point_frame_old"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_23059/*"raid_point_frame_old"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_15;
  v17 = StringLiteral_23809/*"status_raid_point_frame"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_23809/*"status_raid_point_frame"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v9;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->RP_SPNAME_FRAME, v9, v19, v20, v21, v22, v23, v24);
  v1 = sub_1C71458(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_16;
  v31 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_15;
  v32 = StringLiteral_23060/*"raid_point_old"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_23060/*"raid_point_old"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v1 + 32), v32, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v31 + 24) <= 1u )
    goto LABEL_15;
  v39 = StringLiteral_23057/*"raid_point"*/;
  *(_QWORD *)(v31 + 40) = StringLiteral_23057/*"raid_point"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 40), v39, v33, v34, v35, v36, v37, v38);
  v40 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v40->RP_SPNAME_NORMAL = (struct System_String_array *)v31;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v40->RP_SPNAME_NORMAL, v31, v41, v42, v43, v44, v45, v46);
  v1 = sub_1C71458(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_16;
  v53 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v54 = StringLiteral_23062/*"raid_point_over_old"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_23062/*"raid_point_over_old"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v1 + 32), v54, v47, v48, v49, v50, v51, v52),
        *(_DWORD *)(v53 + 24) <= 1u) )
  {
LABEL_15:
    sub_1C71610(v1);
  }
  v61 = StringLiteral_23061/*"raid_point_over"*/;
  *(_QWORD *)(v53 + 40) = StringLiteral_23061/*"raid_point_over"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v53 + 40), v61, v55, v56, v57, v58, v59, v60);
  v62 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v62->RP_SPNAME_OVER = (struct System_String_array *)v53;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v62->RP_SPNAME_OVER, v53, v63, v64, v65, v66, v67, v68);
  v1 = sub_1C71458(int___TypeInfo, 2);
  if ( !v1 )
LABEL_16:
    sub_1C71608(v1, v2);
  v75 = (struct System_Int32_array *)v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_15;
  *(_DWORD *)(v1 + 32) = 5;
  v76 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v76->RP_OFFSET = v75;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v76->RP_OFFSET, (int32_t)v75, v69, v70, v71, v72, v73, v74);
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

  if ( (byte_4CC3F20 & 1) == 0 )
  {
    sub_1C713B0(&PlayerStatusRaidPointComponent_TypeInfo);
    byte_4CC3F20 = 1;
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
        sub_1C71610(raidPointSp);
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
      sub_1C71608(raidPointSp, *(_QWORD *)&dispType);
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
  if ( (byte_4CC3F1F & 1) == 0 )
  {
    sub_1C713B0(&PlayerStatusRaidPointComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_10955/*"RAID_MARKDISP_STEP"*/);
    byte_4CC3F1F = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_25;
  v8 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0);
  v10 = System_Int32__ToString((int32_t)&v21, 0);
  v11 = System_String__Concat_64031724(name, v10, 0);
  UnityEngine_Object__set_name(v8, v11, 0);
  v12 = v21 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10955/*"RAID_MARKDISP_STEP"*/, 0);
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
    sub_1C71608(gameObject, v7);
  }
  v20 = this->fields.BpType;
  if ( (unsigned int)v20 >= LODWORD(RP_OFFSET->max_length) )
LABEL_26:
    sub_1C71610(gameObject);
  GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)gameObject, (float)RP_OFFSET->m_Items[v20], 0);
}