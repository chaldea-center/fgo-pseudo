void __fastcall PlayerStatusRaidPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Int32_array **v9; // x19
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x19
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x19
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v76; // x0
  __int64 v77; // x0
  __int64 v78; // x0

  if ( (byte_4351BF8 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&PlayerStatusRaidPointComponent_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_22050/*"raid_point_old"*/);
    sub_B70694(&StringLiteral_22047/*"raid_point"*/);
    sub_B70694(&StringLiteral_22051/*"raid_point_over"*/);
    sub_B70694(&StringLiteral_22685/*"status_raid_point_frame"*/);
    sub_B70694(&StringLiteral_22049/*"raid_point_frame_old"*/);
    sub_B70694(&StringLiteral_22052/*"raid_point_over_old"*/);
    byte_4351BF8 = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v1 = sub_B706AC(string___TypeInfo, 2LL);
  if ( !v1 )
    goto LABEL_41;
  v9 = (System_Int32_array **)v1;
  v1 = StringLiteral_22049/*"raid_point_frame_old"*/;
  if ( StringLiteral_22049/*"raid_point_frame_old"*/ )
  {
    v1 = sub_B70754(StringLiteral_22049/*"raid_point_frame_old"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v1 )
      goto LABEL_40;
    v10 = (System_Int32_array **)StringLiteral_22049/*"raid_point_frame_old"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !*((_DWORD *)v9 + 6) )
    goto LABEL_39;
  v9[4] = (System_Int32_array *)v10;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 4), v10, v3, v4, v5, v6, v7, v8);
  v1 = StringLiteral_22685/*"status_raid_point_frame"*/;
  if ( StringLiteral_22685/*"status_raid_point_frame"*/ )
  {
    v1 = sub_B70754(StringLiteral_22685/*"status_raid_point_frame"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v1 )
      goto LABEL_40;
    v17 = (System_Int32_array **)StringLiteral_22685/*"status_raid_point_frame"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 1u )
    goto LABEL_39;
  v9[5] = (System_Int32_array *)v17;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 5), v17, v11, v12, v13, v14, v15, v16);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v9;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->RP_SPNAME_FRAME, v9, v19, v20, v21, v22, v23, v24);
  v1 = sub_B706AC(string___TypeInfo, 2LL);
  if ( !v1 )
    goto LABEL_41;
  v31 = (System_Int32_array **)v1;
  v1 = StringLiteral_22050/*"raid_point_old"*/;
  if ( StringLiteral_22050/*"raid_point_old"*/ )
  {
    v1 = sub_B70754(StringLiteral_22050/*"raid_point_old"*/, *(_QWORD *)&(*v31)->m_Items[9]);
    if ( !v1 )
      goto LABEL_40;
    v32 = (System_Int32_array **)StringLiteral_22050/*"raid_point_old"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !*((_DWORD *)v31 + 6) )
    goto LABEL_39;
  v31[4] = (System_Int32_array *)v32;
  sub_B70630((BattleServantConfConponent_o *)(v31 + 4), v32, v25, v26, v27, v28, v29, v30);
  v1 = StringLiteral_22047/*"raid_point"*/;
  if ( StringLiteral_22047/*"raid_point"*/ )
  {
    v1 = sub_B70754(StringLiteral_22047/*"raid_point"*/, *(_QWORD *)&(*v31)->m_Items[9]);
    if ( !v1 )
      goto LABEL_40;
    v39 = (System_Int32_array **)StringLiteral_22047/*"raid_point"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( *((_DWORD *)v31 + 6) <= 1u )
    goto LABEL_39;
  v31[5] = (System_Int32_array *)v39;
  sub_B70630((BattleServantConfConponent_o *)(v31 + 5), v39, v33, v34, v35, v36, v37, v38);
  v40 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v40->RP_SPNAME_NORMAL = (struct System_String_array *)v31;
  sub_B70630((BattleServantConfConponent_o *)&v40->RP_SPNAME_NORMAL, v31, v41, v42, v43, v44, v45, v46);
  v1 = sub_B706AC(string___TypeInfo, 2LL);
  if ( !v1 )
    goto LABEL_41;
  v53 = (System_Int32_array **)v1;
  v1 = StringLiteral_22052/*"raid_point_over_old"*/;
  if ( StringLiteral_22052/*"raid_point_over_old"*/ )
  {
    v1 = sub_B70754(StringLiteral_22052/*"raid_point_over_old"*/, *(_QWORD *)&(*v53)->m_Items[9]);
    if ( !v1 )
      goto LABEL_40;
    v54 = (System_Int32_array **)StringLiteral_22052/*"raid_point_over_old"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( !*((_DWORD *)v53 + 6) )
    goto LABEL_39;
  v53[4] = (System_Int32_array *)v54;
  sub_B70630((BattleServantConfConponent_o *)(v53 + 4), v54, v47, v48, v49, v50, v51, v52);
  v1 = StringLiteral_22051/*"raid_point_over"*/;
  if ( StringLiteral_22051/*"raid_point_over"*/ )
  {
    v1 = sub_B70754(StringLiteral_22051/*"raid_point_over"*/, *(_QWORD *)&(*v53)->m_Items[9]);
    if ( v1 )
    {
      v61 = (System_Int32_array **)StringLiteral_22051/*"raid_point_over"*/;
      goto LABEL_35;
    }
LABEL_40:
    v78 = sub_B7078C(v1);
    sub_B70738(v78, 0LL);
  }
  v61 = 0LL;
LABEL_35:
  if ( *((_DWORD *)v53 + 6) <= 1u )
    goto LABEL_39;
  v53[5] = (System_Int32_array *)v61;
  sub_B70630((BattleServantConfConponent_o *)(v53 + 5), v61, v55, v56, v57, v58, v59, v60);
  v62 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v62->RP_SPNAME_OVER = (struct System_String_array *)v53;
  sub_B70630((BattleServantConfConponent_o *)&v62->RP_SPNAME_OVER, v53, v63, v64, v65, v66, v67, v68);
  v1 = sub_B706AC(int___TypeInfo, 2LL);
  if ( !v1 )
LABEL_41:
    sub_B7076C(v1, v2);
  v75 = (System_Int32_array **)v1;
  if ( !*(_DWORD *)(v1 + 24) )
  {
LABEL_39:
    v77 = sub_B70798(v1);
    sub_B70738(v77, 0LL);
  }
  *(_DWORD *)(v1 + 32) = 5;
  v76 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v76->RP_OFFSET = (struct System_Int32_array *)v75;
  sub_B70630((BattleServantConfConponent_o *)&v76->RP_OFFSET, v75, v69, v70, v71, v72, v73, v74);
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
  __int64 v9; // x0

  if ( (byte_4351BF7 & 1) == 0 )
  {
    sub_B70694(&PlayerStatusRaidPointComponent_TypeInfo);
    byte_4351BF7 = 1;
  }
  switch ( dispType )
  {
    case 2:
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !raidPointSp )
        goto LABEL_27;
      raidPointSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raidPointSp, 0LL);
      if ( !raidPointSp )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raidPointSp, 1, 0LL);
      v6 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v7 = *(_QWORD *)(*(_QWORD *)&raidPointSp[7].fields.m_CachedPtr + 24LL);
      if ( !v7 )
        goto LABEL_27;
      goto LABEL_22;
    case 1:
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !raidPointSp )
        goto LABEL_27;
      raidPointSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raidPointSp, 0LL);
      if ( !raidPointSp )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raidPointSp, 1, 0LL);
      v6 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v7 = *(_QWORD *)(*(_QWORD *)&raidPointSp[7].fields.m_CachedPtr + 16LL);
      if ( !v7 )
        goto LABEL_27;
LABEL_22:
      BpType = this->fields.BpType;
      if ( (unsigned int)BpType >= *(_DWORD *)(v7 + 24) )
      {
        v9 = sub_B70798(raidPointSp);
        sub_B70738(v9, 0LL);
      }
      if ( !v6 )
        goto LABEL_27;
      UISprite__set_spriteName(v6, *(System_String_o **)(v7 + 8 * BpType + 32), 0LL);
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !raidPointSp )
        goto LABEL_27;
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
LABEL_27:
      sub_B7076C(raidPointSp, *(_QWORD *)&dispType);
  }
}


void __fastcall PlayerStatusRaidPointComponent__Setup(
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
  __int64 v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-14h] BYREF

  v22 = index;
  if ( (byte_4351BF6 & 1) == 0 )
  {
    sub_B70694(&PlayerStatusRaidPointComponent_TypeInfo);
    sub_B70694(&StringLiteral_11158/*"RAID_MARKDISP_STEP"*/);
    byte_4351BF6 = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  v8 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v10 = System_Int32__ToString((int32_t)&v22, 0LL);
  v11 = System_String__Concat_44758168(name, v10, 0LL);
  UnityEngine_Object__set_name(v8, v11, 0LL);
  v12 = v22 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11158/*"RAID_MARKDISP_STEP"*/, 0LL);
  if ( Value <= 0 )
  {
    v14 = PlayerStatusRaidPointComponent_TypeInfo;
    if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
      v14 = PlayerStatusRaidPointComponent_TypeInfo;
    }
    Value = v14->static_fields->RAID_MARKDISP_STEP_DEFAULT;
  }
  v15 = v12 >= 1 && v12 % Value == 0;
  gameObject = (UnityEngine_Object_o *)this->fields.markFrontSp;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v15, 0LL);
  gameObject = (UnityEngine_Object_o *)this->fields.markBackSp;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v15, 0LL);
  raidFrameSp = this->fields.raidFrameSp;
  gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
    gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  }
  v17 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 8LL);
  if ( !v17 )
    goto LABEL_27;
  BpType = this->fields.BpType;
  if ( (unsigned int)BpType >= *(_DWORD *)(v17 + 24) )
    goto LABEL_28;
  if ( !raidFrameSp
    || (UISprite__set_spriteName(raidFrameSp, *(System_String_o **)(v17 + 8 * BpType + 32), 0LL),
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
LABEL_27:
    sub_B7076C(gameObject, v7);
  }
  v20 = this->fields.BpType;
  if ( (unsigned int)v20 >= RP_OFFSET->max_length )
  {
LABEL_28:
    v21 = sub_B70798(gameObject);
    sub_B70738(v21, 0LL);
  }
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    (float)RP_OFFSET->m_Items[v20 + 1],
    0LL);
}