void __fastcall PlayerStatusRaidPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x0
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x19
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x19
  int64_t v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x19
  int64_t v72; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct PlayerStatusRaidPointComponent_StaticFields *v93; // x0

  if ( (byte_4B12FC9 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, v1, v2);
    sub_1BCA7E0(&PlayerStatusRaidPointComponent_TypeInfo, v3, v4);
    sub_1BCA7E0(&string___TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_23016/*"raid_point_old"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_23013/*"raid_point"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_23017/*"raid_point_over"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_23780/*"status_raid_point_frame"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_23015/*"raid_point_frame_old"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_23018/*"raid_point_over_old"*/, v17, v18);
    byte_4B12FC9 = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v19 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v19 )
    goto LABEL_16;
  v27 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_15;
  v28 = StringLiteral_23015/*"raid_point_frame_old"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_23015/*"raid_point_frame_old"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), v28, v21, v22, v23, v24, v25, v26);
  if ( *(_DWORD *)(v27 + 24) <= 1u )
    goto LABEL_15;
  v35 = StringLiteral_23780/*"status_raid_point_frame"*/;
  *(_QWORD *)(v27 + 40) = StringLiteral_23780/*"status_raid_point_frame"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 40), v35, v29, v30, v31, v32, v33, v34);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->RP_SPNAME_FRAME, v27, v37, v38, v39, v40, v41, v42);
  v19 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v19 )
    goto LABEL_16;
  v49 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_15;
  v50 = StringLiteral_23016/*"raid_point_old"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_23016/*"raid_point_old"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), v50, v43, v44, v45, v46, v47, v48);
  if ( *(_DWORD *)(v49 + 24) <= 1u )
    goto LABEL_15;
  v57 = StringLiteral_23013/*"raid_point"*/;
  *(_QWORD *)(v49 + 40) = StringLiteral_23013/*"raid_point"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 40), v57, v51, v52, v53, v54, v55, v56);
  v58 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v58->RP_SPNAME_NORMAL = (struct System_String_array *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v58->RP_SPNAME_NORMAL, v49, v59, v60, v61, v62, v63, v64);
  v19 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v19 )
    goto LABEL_16;
  v71 = v19;
  if ( !*(_DWORD *)(v19 + 24)
    || (v72 = StringLiteral_23018/*"raid_point_over_old"*/,
        *(_QWORD *)(v19 + 32) = StringLiteral_23018/*"raid_point_over_old"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), v72, v65, v66, v67, v68, v69, v70),
        *(_DWORD *)(v71 + 24) <= 1u) )
  {
LABEL_15:
    sub_1BCAA44(v19, v20);
  }
  v79 = StringLiteral_23017/*"raid_point_over"*/;
  *(_QWORD *)(v71 + 40) = StringLiteral_23017/*"raid_point_over"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 40), v79, v73, v74, v75, v76, v77, v78);
  v80 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v80->RP_SPNAME_OVER = (struct System_String_array *)v71;
  sub_1BCA784((PartyOrganizationUtility_o *)&v80->RP_SPNAME_OVER, v71, v81, v82, v83, v84, v85, v86);
  v19 = sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v19 )
LABEL_16:
    sub_1BCAA3C(v19, v20);
  v20 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_15;
  *(_DWORD *)(v19 + 32) = 5;
  v93 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v93->RP_OFFSET = (struct System_Int32_array *)v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&v93->RP_OFFSET, v20, v87, v88, v89, v90, v91, v92);
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

  if ( (byte_4B12FC8 & 1) == 0 )
  {
    sub_1BCA7E0(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType, method);
    byte_4B12FC8 = 1;
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
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType);
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
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v7 = *(_QWORD *)(*(_QWORD *)&raidPointSp[7].fields.m_CachedPtr + 16LL);
      if ( !v7 )
        goto LABEL_25;
LABEL_20:
      BpType = this->fields.BpType;
      if ( (unsigned int)BpType >= *(_DWORD *)(v7 + 24) )
        sub_1BCAA44(raidPointSp, *(_QWORD *)&dispType);
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
      sub_1BCAA3C(raidPointSp, *(_QWORD *)&dispType);
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
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  System_String_o *name; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  int v14; // w20
  int32_t Value; // w0
  PlayerStatusRaidPointComponent_c *v16; // x0
  bool v17; // w20
  UISprite_o *raidFrameSp; // x20
  __int64 v19; // x8
  __int64 BpType; // x9
  struct System_Int32_array *RP_OFFSET; // x8
  __int64 v22; // x9
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  v23 = index;
  if ( (byte_4B12FC7 & 1) == 0 )
  {
    sub_1BCA7E0(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&index, *(_QWORD *)&iBpType);
    sub_1BCA7E0(&StringLiteral_11079/*"RAID_MARKDISP_STEP"*/, v6, v7);
    byte_4B12FC7 = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  v10 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v12 = System_Int32__ToString((int32_t)&v23, 0LL);
  v13 = System_String__Concat_62401220(name, v12, 0LL);
  UnityEngine_Object__set_name(v10, v13, 0LL);
  v14 = v23 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11079/*"RAID_MARKDISP_STEP"*/, 0LL);
  if ( Value <= 0 )
  {
    v16 = PlayerStatusRaidPointComponent_TypeInfo;
    if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo, v9);
      v16 = PlayerStatusRaidPointComponent_TypeInfo;
    }
    Value = v16->static_fields->RAID_MARKDISP_STEP_DEFAULT;
  }
  v17 = v14 >= 1 && v14 % Value == 0;
  gameObject = (UnityEngine_Object_o *)this->fields.markFrontSp;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v17, 0LL);
  gameObject = (UnityEngine_Object_o *)this->fields.markBackSp;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v17, 0LL);
  gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  raidFrameSp = this->fields.raidFrameSp;
  if ( !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo, v9);
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
    sub_1BCAA3C(gameObject, v9);
  }
  v22 = this->fields.BpType;
  if ( (unsigned int)v22 >= RP_OFFSET->max_length )
LABEL_26:
    sub_1BCAA44(gameObject, v9);
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    (float)RP_OFFSET->m_Items[v22 + 1],
    0LL);
}