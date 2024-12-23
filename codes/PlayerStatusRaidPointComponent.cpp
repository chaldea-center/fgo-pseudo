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
  int64_t v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x19
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x19
  int64_t v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x19
  int64_t v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct PlayerStatusRaidPointComponent_StaticFields *v84; // x0

  if ( (byte_4B6393D & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, v1);
    sub_1BE4ACC(&PlayerStatusRaidPointComponent_TypeInfo, v2);
    sub_1BE4ACC(&string___TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_23094/*"raid_point_old"*/, v4);
    sub_1BE4ACC(&StringLiteral_23091/*"raid_point"*/, v5);
    sub_1BE4ACC(&StringLiteral_23095/*"raid_point_over"*/, v6);
    sub_1BE4ACC(&StringLiteral_23867/*"status_raid_point_frame"*/, v7);
    sub_1BE4ACC(&StringLiteral_23093/*"raid_point_frame_old"*/, v8);
    sub_1BE4ACC(&StringLiteral_23096/*"raid_point_over_old"*/, v9);
    byte_4B6393D = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v10 = sub_1BE4B74(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_16;
  v18 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_15;
  v19 = StringLiteral_23093/*"raid_point_frame_old"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_23093/*"raid_point_frame_old"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 32), v19, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_15;
  v26 = StringLiteral_23867/*"status_raid_point_frame"*/;
  *(_QWORD *)(v18 + 40) = StringLiteral_23867/*"status_raid_point_frame"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 40), v26, v20, v21, v22, v23, v24, v25);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v18;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->RP_SPNAME_FRAME, v18, v28, v29, v30, v31, v32, v33);
  v10 = sub_1BE4B74(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_16;
  v40 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_15;
  v41 = StringLiteral_23094/*"raid_point_old"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_23094/*"raid_point_old"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 32), v41, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v40 + 24) <= 1u )
    goto LABEL_15;
  v48 = StringLiteral_23091/*"raid_point"*/;
  *(_QWORD *)(v40 + 40) = StringLiteral_23091/*"raid_point"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 40), v48, v42, v43, v44, v45, v46, v47);
  v49 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v49->RP_SPNAME_NORMAL = (struct System_String_array *)v40;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v49->RP_SPNAME_NORMAL, v40, v50, v51, v52, v53, v54, v55);
  v10 = sub_1BE4B74(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_16;
  v62 = v10;
  if ( !*(_DWORD *)(v10 + 24)
    || (v63 = StringLiteral_23096/*"raid_point_over_old"*/,
        *(_QWORD *)(v10 + 32) = StringLiteral_23096/*"raid_point_over_old"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 32), v63, v56, v57, v58, v59, v60, v61),
        *(_DWORD *)(v62 + 24) <= 1u) )
  {
LABEL_15:
    sub_1BE4D30(v10, v11);
  }
  v70 = StringLiteral_23095/*"raid_point_over"*/;
  *(_QWORD *)(v62 + 40) = StringLiteral_23095/*"raid_point_over"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 40), v70, v64, v65, v66, v67, v68, v69);
  v71 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v71->RP_SPNAME_OVER = (struct System_String_array *)v62;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v71->RP_SPNAME_OVER, v62, v72, v73, v74, v75, v76, v77);
  v10 = sub_1BE4B74(int___TypeInfo, 2LL);
  if ( !v10 )
LABEL_16:
    sub_1BE4D28(v10, v11);
  v11 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_15;
  *(_DWORD *)(v10 + 32) = 5;
  v84 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v84->RP_OFFSET = (struct System_Int32_array *)v11;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v84->RP_OFFSET, v11, v78, v79, v80, v81, v82, v83);
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

  if ( (byte_4B6393C & 1) == 0 )
  {
    sub_1BE4ACC(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType);
    byte_4B6393C = 1;
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
        sub_1BE4D30(raidPointSp, *(_QWORD *)&dispType);
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
      sub_1BE4D28(raidPointSp, *(_QWORD *)&dispType);
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
  if ( (byte_4B6393B & 1) == 0 )
  {
    sub_1BE4ACC(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&StringLiteral_11109/*"RAID_MARKDISP_STEP"*/, v6);
    byte_4B6393B = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  v9 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v11 = System_Int32__ToString((int32_t)&v22, 0LL);
  v12 = System_String__Concat_62698808(name, v11, 0LL);
  UnityEngine_Object__set_name(v9, v12, 0LL);
  v13 = v22 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11109/*"RAID_MARKDISP_STEP"*/, 0LL);
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
    sub_1BE4D28(gameObject, v8);
  }
  v21 = this->fields.BpType;
  if ( (unsigned int)v21 >= RP_OFFSET->max_length )
LABEL_26:
    sub_1BE4D30(gameObject, v8);
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    (float)RP_OFFSET->m_Items[v21 + 1],
    0LL);
}