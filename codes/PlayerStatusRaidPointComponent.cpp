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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x19
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x19
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x19
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v84; // x0
  __int64 v85; // x0
  __int64 v86; // x0

  if ( (byte_4213A82 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, v1);
    sub_B0D8A4(&PlayerStatusRaidPointComponent_TypeInfo, v2);
    sub_B0D8A4(&string___TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_21760/*"raid_point_old"*/, v4);
    sub_B0D8A4(&StringLiteral_21757/*"raid_point"*/, v5);
    sub_B0D8A4(&StringLiteral_21761/*"raid_point_over"*/, v6);
    sub_B0D8A4(&StringLiteral_22388/*"status_raid_point_frame"*/, v7);
    sub_B0D8A4(&StringLiteral_21759/*"raid_point_frame_old"*/, v8);
    sub_B0D8A4(&StringLiteral_21762/*"raid_point_over_old"*/, v9);
    byte_4213A82 = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v10 = sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_41;
  v17 = (System_Int32_array **)v10;
  v10 = StringLiteral_21759/*"raid_point_frame_old"*/;
  if ( StringLiteral_21759/*"raid_point_frame_old"*/ )
  {
    v10 = sub_B0D964(StringLiteral_21759/*"raid_point_frame_old"*/, *(_QWORD *)&(*v17)->m_Items[9]);
    if ( !v10 )
      goto LABEL_40;
    v18 = (System_Int32_array **)StringLiteral_21759/*"raid_point_frame_old"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !*((_DWORD *)v17 + 6) )
    goto LABEL_39;
  v17[4] = (System_Int32_array *)v18;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 4), v18, v11, v12, v13, v14, v15, v16);
  v10 = StringLiteral_22388/*"status_raid_point_frame"*/;
  if ( StringLiteral_22388/*"status_raid_point_frame"*/ )
  {
    v10 = sub_B0D964(StringLiteral_22388/*"status_raid_point_frame"*/, *(_QWORD *)&(*v17)->m_Items[9]);
    if ( !v10 )
      goto LABEL_40;
    v25 = (System_Int32_array **)StringLiteral_22388/*"status_raid_point_frame"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *((_DWORD *)v17 + 6) <= 1u )
    goto LABEL_39;
  v17[5] = (System_Int32_array *)v25;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 5), v25, v19, v20, v21, v22, v23, v24);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v17;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->RP_SPNAME_FRAME, v17, v27, v28, v29, v30, v31, v32);
  v10 = sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_41;
  v39 = (System_Int32_array **)v10;
  v10 = StringLiteral_21760/*"raid_point_old"*/;
  if ( StringLiteral_21760/*"raid_point_old"*/ )
  {
    v10 = sub_B0D964(StringLiteral_21760/*"raid_point_old"*/, *(_QWORD *)&(*v39)->m_Items[9]);
    if ( !v10 )
      goto LABEL_40;
    v40 = (System_Int32_array **)StringLiteral_21760/*"raid_point_old"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( !*((_DWORD *)v39 + 6) )
    goto LABEL_39;
  v39[4] = (System_Int32_array *)v40;
  sub_B0D840((BattleServantConfConponent_o *)(v39 + 4), v40, v33, v34, v35, v36, v37, v38);
  v10 = StringLiteral_21757/*"raid_point"*/;
  if ( StringLiteral_21757/*"raid_point"*/ )
  {
    v10 = sub_B0D964(StringLiteral_21757/*"raid_point"*/, *(_QWORD *)&(*v39)->m_Items[9]);
    if ( !v10 )
      goto LABEL_40;
    v47 = (System_Int32_array **)StringLiteral_21757/*"raid_point"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( *((_DWORD *)v39 + 6) <= 1u )
    goto LABEL_39;
  v39[5] = (System_Int32_array *)v47;
  sub_B0D840((BattleServantConfConponent_o *)(v39 + 5), v47, v41, v42, v43, v44, v45, v46);
  v48 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v48->RP_SPNAME_NORMAL = (struct System_String_array *)v39;
  sub_B0D840((BattleServantConfConponent_o *)&v48->RP_SPNAME_NORMAL, v39, v49, v50, v51, v52, v53, v54);
  v10 = sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_41;
  v61 = (System_Int32_array **)v10;
  v10 = StringLiteral_21762/*"raid_point_over_old"*/;
  if ( StringLiteral_21762/*"raid_point_over_old"*/ )
  {
    v10 = sub_B0D964(StringLiteral_21762/*"raid_point_over_old"*/, *(_QWORD *)&(*v61)->m_Items[9]);
    if ( !v10 )
      goto LABEL_40;
    v62 = (System_Int32_array **)StringLiteral_21762/*"raid_point_over_old"*/;
  }
  else
  {
    v62 = 0LL;
  }
  if ( !*((_DWORD *)v61 + 6) )
    goto LABEL_39;
  v61[4] = (System_Int32_array *)v62;
  sub_B0D840((BattleServantConfConponent_o *)(v61 + 4), v62, v55, v56, v57, v58, v59, v60);
  v10 = StringLiteral_21761/*"raid_point_over"*/;
  if ( StringLiteral_21761/*"raid_point_over"*/ )
  {
    v10 = sub_B0D964(StringLiteral_21761/*"raid_point_over"*/, *(_QWORD *)&(*v61)->m_Items[9]);
    if ( v10 )
    {
      v69 = (System_Int32_array **)StringLiteral_21761/*"raid_point_over"*/;
      goto LABEL_35;
    }
LABEL_40:
    v86 = sub_B0D99C();
    sub_B0D948(v86, 0LL);
  }
  v69 = 0LL;
LABEL_35:
  if ( *((_DWORD *)v61 + 6) <= 1u )
    goto LABEL_39;
  v61[5] = (System_Int32_array *)v69;
  sub_B0D840((BattleServantConfConponent_o *)(v61 + 5), v69, v63, v64, v65, v66, v67, v68);
  v70 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v70->RP_SPNAME_OVER = (struct System_String_array *)v61;
  sub_B0D840((BattleServantConfConponent_o *)&v70->RP_SPNAME_OVER, v61, v71, v72, v73, v74, v75, v76);
  v10 = sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
LABEL_41:
    sub_B0D97C(v10);
  v83 = (System_Int32_array **)v10;
  if ( !*(_DWORD *)(v10 + 24) )
  {
LABEL_39:
    v85 = sub_B0D9A8(v10);
    sub_B0D948(v85, 0LL);
  }
  *(_DWORD *)(v10 + 32) = 5;
  v84 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v84->RP_OFFSET = (struct System_Int32_array *)v83;
  sub_B0D840((BattleServantConfConponent_o *)&v84->RP_OFFSET, v83, v77, v78, v79, v80, v81, v82);
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

  if ( (byte_4213A81 & 1) == 0 )
  {
    sub_B0D8A4(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType);
    byte_4213A81 = 1;
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
        v9 = sub_B0D9A8(raidPointSp);
        sub_B0D948(v9, 0LL);
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
      sub_B0D97C(raidPointSp);
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
  if ( (byte_4213A80 & 1) == 0 )
  {
    sub_B0D8A4(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&StringLiteral_11031/*"RAID_MARKDISP_STEP"*/, v6);
    byte_4213A80 = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  v8 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v10 = System_Int32__ToString((int32_t)&v22, 0LL);
  v11 = System_String__Concat_43849904(name, v10, 0LL);
  UnityEngine_Object__set_name(v8, v11, 0LL);
  v12 = v22 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11031/*"RAID_MARKDISP_STEP"*/, 0LL);
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
    sub_B0D97C(gameObject);
  }
  v20 = this->fields.BpType;
  if ( (unsigned int)v20 >= RP_OFFSET->max_length )
  {
LABEL_28:
    v21 = sub_B0D9A8(gameObject);
    sub_B0D948(v21, 0LL);
  }
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    (float)RP_OFFSET->m_Items[v20 + 1],
    0LL);
}