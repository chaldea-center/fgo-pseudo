void PlayerStatusRaidPointComponent___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x19
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x19
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x19
  int32_t v55; // w1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  int32_t v62; // w1
  struct PlayerStatusRaidPointComponent_StaticFields *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  struct System_Int32_array *v76; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v77; // x0

  if ( (byte_596D156 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&PlayerStatusRaidPointComponent_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_24141/*"raid_point_old"*/);
    sub_2213A60(&StringLiteral_24138/*"raid_point"*/);
    sub_2213A60(&StringLiteral_24142/*"raid_point_over"*/);
    sub_2213A60(&StringLiteral_24955/*"status_raid_point_frame"*/);
    sub_2213A60(&StringLiteral_24140/*"raid_point_frame_old"*/);
    sub_2213A60(&StringLiteral_24143/*"raid_point_over_old"*/);
    byte_596D156 = 1;
  }
  v1 = string___TypeInfo;
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v2 = sub_2213B20(v1, 2);
  if ( !v2 )
    goto LABEL_16;
  v10 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_15;
  v11 = StringLiteral_24140/*"raid_point_frame_old"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_24140/*"raid_point_frame_old"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v2 + 32), v11, v4, v5, v6, v7, v8, v9);
  if ( (*(_DWORD *)(v10 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_15;
  v18 = StringLiteral_24955/*"status_raid_point_frame"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_24955/*"status_raid_point_frame"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 40), v18, v12, v13, v14, v15, v16, v17);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->RP_SPNAME_FRAME, v10, v20, v21, v22, v23, v24, v25);
  v2 = sub_2213B20(string___TypeInfo, 2);
  if ( !v2 )
    goto LABEL_16;
  v32 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_15;
  v33 = StringLiteral_24141/*"raid_point_old"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_24141/*"raid_point_old"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v2 + 32), v33, v26, v27, v28, v29, v30, v31);
  if ( (*(_DWORD *)(v32 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_15;
  v40 = StringLiteral_24138/*"raid_point"*/;
  *(_QWORD *)(v32 + 40) = StringLiteral_24138/*"raid_point"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 40), v40, v34, v35, v36, v37, v38, v39);
  v41 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v41->RP_SPNAME_NORMAL = (struct System_String_array *)v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->RP_SPNAME_NORMAL, v32, v42, v43, v44, v45, v46, v47);
  v2 = sub_2213B20(string___TypeInfo, 2);
  if ( !v2 )
    goto LABEL_16;
  v54 = v2;
  if ( !*(_DWORD *)(v2 + 24)
    || (v55 = StringLiteral_24143/*"raid_point_over_old"*/,
        *(_QWORD *)(v2 + 32) = StringLiteral_24143/*"raid_point_over_old"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v2 + 32), v55, v48, v49, v50, v51, v52, v53),
        (*(_DWORD *)(v54 + 24) & 0xFFFFFFFE) == 0) )
  {
LABEL_15:
    sub_2213CE4(v2);
  }
  v62 = StringLiteral_24142/*"raid_point_over"*/;
  *(_QWORD *)(v54 + 40) = StringLiteral_24142/*"raid_point_over"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 40), v62, v56, v57, v58, v59, v60, v61);
  v63 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v63->RP_SPNAME_OVER = (struct System_String_array *)v54;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v63->RP_SPNAME_OVER, v54, v64, v65, v66, v67, v68, v69);
  v2 = sub_2213B20(int___TypeInfo, 2);
  if ( !v2 )
LABEL_16:
    sub_2213CDC(v2, v3);
  v76 = (struct System_Int32_array *)v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_15;
  v77 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v76->m_Items[0] = 5;
  v77->RP_OFFSET = v76;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v77->RP_OFFSET, (int32_t)v76, v70, v71, v72, v73, v74, v75);
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
  __int64 v6; // x2
  UISprite_o *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x2
  __int64 BpType; // x9

  if ( (byte_596D155 & 1) == 0 )
  {
    sub_2213A60(&PlayerStatusRaidPointComponent_TypeInfo);
    byte_596D155 = 1;
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
      v7 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( !*(&PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType, v9);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v8 = *(_QWORD *)(raidPointSp[7].fields.m_CachedPtr + 24);
      if ( !v8 )
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
      v7 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( !*(&PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType, v6);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v8 = *(_QWORD *)(raidPointSp[7].fields.m_CachedPtr + 16);
      if ( !v8 )
        goto LABEL_25;
LABEL_20:
      BpType = this->fields.BpType;
      if ( (unsigned int)BpType >= *(_DWORD *)(v8 + 24) )
        sub_2213CE4(raidPointSp);
      if ( !v7 )
        goto LABEL_25;
      UISprite__set_spriteName(v7, *(System_String_o **)(v8 + 8 * BpType + 32), 0);
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
      sub_2213CDC(raidPointSp, *(_QWORD *)&dispType);
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
  __int64 v14; // x2
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
  if ( (byte_596D154 & 1) == 0 )
  {
    sub_2213A60(&PlayerStatusRaidPointComponent_TypeInfo);
    sub_2213A60(&StringLiteral_11428/*"RAID_MARKDISP_STEP"*/);
    byte_596D154 = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_25;
  v8 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0);
  v10 = System_Int32__ToString((int32_t)&v23, 0);
  v11 = System_String__Concat_75651716(name, v10, 0);
  UnityEngine_Object__set_name(v8, v11, 0);
  v12 = v23 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11428/*"RAID_MARKDISP_STEP"*/, 0);
  if ( Value <= 0 )
  {
    v15 = PlayerStatusRaidPointComponent_TypeInfo;
    if ( !*(&PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo, v7, v14);
      v15 = PlayerStatusRaidPointComponent_TypeInfo;
    }
    Value = v15->static_fields->RAID_MARKDISP_STEP_DEFAULT;
  }
  v16 = v12 >= 1 && v12 % Value == 0;
  gameObject = (UnityEngine_Object_o *)this->fields.markFrontSp;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v16, 0);
  gameObject = (UnityEngine_Object_o *)this->fields.markBackSp;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v16, 0);
  gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  raidFrameSp = this->fields.raidFrameSp;
  if ( !*(&PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo, v7, v17);
    gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  }
  v19 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 8);
  if ( !v19 )
    goto LABEL_25;
  BpType = this->fields.BpType;
  if ( (unsigned int)BpType >= *(_DWORD *)(v19 + 24) )
    goto LABEL_26;
  if ( !raidFrameSp
    || (UISprite__set_spriteName(raidFrameSp, *(System_String_o **)(v19 + 8 * BpType + 32), 0),
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
    sub_2213CDC(gameObject, v7);
  }
  v22 = this->fields.BpType;
  if ( (unsigned int)v22 >= LODWORD(RP_OFFSET->max_length) )
LABEL_26:
    sub_2213CE4(gameObject);
  GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)gameObject, (float)RP_OFFSET->m_Items[v22], 0);
}