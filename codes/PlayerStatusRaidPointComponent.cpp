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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x19
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x19
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x19
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v85; // x0
  __int64 v86; // x0
  __int64 v87; // x0

  if ( (byte_4186B56 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, v1);
    sub_B2C35C(&PlayerStatusRaidPointComponent_TypeInfo, v2);
    sub_B2C35C(&string___TypeInfo, v3);
    sub_B2C35C(&StringLiteral_21690/*"raid_point_old"*/, v4);
    sub_B2C35C(&StringLiteral_21687/*"raid_point"*/, v5);
    sub_B2C35C(&StringLiteral_21691/*"raid_point_over"*/, v6);
    sub_B2C35C(&StringLiteral_22312/*"status_raid_point_frame"*/, v7);
    sub_B2C35C(&StringLiteral_21689/*"raid_point_frame_old"*/, v8);
    sub_B2C35C(&StringLiteral_21692/*"raid_point_over_old"*/, v9);
    byte_4186B56 = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v10 = sub_B2C374(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_41;
  v18 = (System_Int32_array **)v10;
  v10 = StringLiteral_21689/*"raid_point_frame_old"*/;
  if ( StringLiteral_21689/*"raid_point_frame_old"*/ )
  {
    v10 = sub_B2C41C(StringLiteral_21689/*"raid_point_frame_old"*/, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v10 )
      goto LABEL_40;
    v19 = (System_Int32_array **)StringLiteral_21689/*"raid_point_frame_old"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_39;
  v18[4] = (System_Int32_array *)v19;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 4), v19, v12, v13, v14, v15, v16, v17);
  v10 = StringLiteral_22312/*"status_raid_point_frame"*/;
  if ( StringLiteral_22312/*"status_raid_point_frame"*/ )
  {
    v10 = sub_B2C41C(StringLiteral_22312/*"status_raid_point_frame"*/, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v10 )
      goto LABEL_40;
    v26 = (System_Int32_array **)StringLiteral_22312/*"status_raid_point_frame"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( *((_DWORD *)v18 + 6) <= 1u )
    goto LABEL_39;
  v18[5] = (System_Int32_array *)v26;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 5), v26, v20, v21, v22, v23, v24, v25);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->RP_SPNAME_FRAME, v18, v28, v29, v30, v31, v32, v33);
  v10 = sub_B2C374(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_41;
  v40 = (System_Int32_array **)v10;
  v10 = StringLiteral_21690/*"raid_point_old"*/;
  if ( StringLiteral_21690/*"raid_point_old"*/ )
  {
    v10 = sub_B2C41C(StringLiteral_21690/*"raid_point_old"*/, *(_QWORD *)&(*v40)->m_Items[9]);
    if ( !v10 )
      goto LABEL_40;
    v41 = (System_Int32_array **)StringLiteral_21690/*"raid_point_old"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( !*((_DWORD *)v40 + 6) )
    goto LABEL_39;
  v40[4] = (System_Int32_array *)v41;
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 4), v41, v34, v35, v36, v37, v38, v39);
  v10 = StringLiteral_21687/*"raid_point"*/;
  if ( StringLiteral_21687/*"raid_point"*/ )
  {
    v10 = sub_B2C41C(StringLiteral_21687/*"raid_point"*/, *(_QWORD *)&(*v40)->m_Items[9]);
    if ( !v10 )
      goto LABEL_40;
    v48 = (System_Int32_array **)StringLiteral_21687/*"raid_point"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( *((_DWORD *)v40 + 6) <= 1u )
    goto LABEL_39;
  v40[5] = (System_Int32_array *)v48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 5), v48, v42, v43, v44, v45, v46, v47);
  v49 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v49->RP_SPNAME_NORMAL = (struct System_String_array *)v40;
  sub_B2C2F8((BattleServantConfConponent_o *)&v49->RP_SPNAME_NORMAL, v40, v50, v51, v52, v53, v54, v55);
  v10 = sub_B2C374(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_41;
  v62 = (System_Int32_array **)v10;
  v10 = StringLiteral_21692/*"raid_point_over_old"*/;
  if ( StringLiteral_21692/*"raid_point_over_old"*/ )
  {
    v10 = sub_B2C41C(StringLiteral_21692/*"raid_point_over_old"*/, *(_QWORD *)&(*v62)->m_Items[9]);
    if ( !v10 )
      goto LABEL_40;
    v63 = (System_Int32_array **)StringLiteral_21692/*"raid_point_over_old"*/;
  }
  else
  {
    v63 = 0LL;
  }
  if ( !*((_DWORD *)v62 + 6) )
    goto LABEL_39;
  v62[4] = (System_Int32_array *)v63;
  sub_B2C2F8((BattleServantConfConponent_o *)(v62 + 4), v63, v56, v57, v58, v59, v60, v61);
  v10 = StringLiteral_21691/*"raid_point_over"*/;
  if ( StringLiteral_21691/*"raid_point_over"*/ )
  {
    v10 = sub_B2C41C(StringLiteral_21691/*"raid_point_over"*/, *(_QWORD *)&(*v62)->m_Items[9]);
    if ( v10 )
    {
      v70 = (System_Int32_array **)StringLiteral_21691/*"raid_point_over"*/;
      goto LABEL_35;
    }
LABEL_40:
    v87 = sub_B2C454();
    sub_B2C400(v87, 0LL);
  }
  v70 = 0LL;
LABEL_35:
  if ( *((_DWORD *)v62 + 6) <= 1u )
    goto LABEL_39;
  v62[5] = (System_Int32_array *)v70;
  sub_B2C2F8((BattleServantConfConponent_o *)(v62 + 5), v70, v64, v65, v66, v67, v68, v69);
  v71 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v71->RP_SPNAME_OVER = (struct System_String_array *)v62;
  sub_B2C2F8((BattleServantConfConponent_o *)&v71->RP_SPNAME_OVER, v62, v72, v73, v74, v75, v76, v77);
  v10 = sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
LABEL_41:
    sub_B2C434(v10, v11);
  v84 = (System_Int32_array **)v10;
  if ( !*(_DWORD *)(v10 + 24) )
  {
LABEL_39:
    v86 = sub_B2C460(v10);
    sub_B2C400(v86, 0LL);
  }
  *(_DWORD *)(v10 + 32) = 5;
  v85 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v85->RP_OFFSET = (struct System_Int32_array *)v84;
  sub_B2C2F8((BattleServantConfConponent_o *)&v85->RP_OFFSET, v84, v78, v79, v80, v81, v82, v83);
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

  if ( (byte_4186B55 & 1) == 0 )
  {
    sub_B2C35C(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType);
    byte_4186B55 = 1;
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
        v9 = sub_B2C460(raidPointSp);
        sub_B2C400(v9, 0LL);
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
      sub_B2C434(raidPointSp, *(_QWORD *)&dispType);
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
  __int64 v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-14h] BYREF

  v23 = index;
  if ( (byte_4186B54 & 1) == 0 )
  {
    sub_B2C35C(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&StringLiteral_11004/*"RAID_MARKDISP_STEP"*/, v6);
    byte_4186B54 = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  v9 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v11 = System_Int32__ToString((int32_t)&v23, 0LL);
  v12 = System_String__Concat_44305532(name, v11, 0LL);
  UnityEngine_Object__set_name(v9, v12, 0LL);
  v13 = v23 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11004/*"RAID_MARKDISP_STEP"*/, 0LL);
  if ( Value <= 0 )
  {
    v15 = PlayerStatusRaidPointComponent_TypeInfo;
    if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
      v15 = PlayerStatusRaidPointComponent_TypeInfo;
    }
    Value = v15->static_fields->RAID_MARKDISP_STEP_DEFAULT;
  }
  v16 = v13 >= 1 && v13 % Value == 0;
  gameObject = (UnityEngine_Object_o *)this->fields.markFrontSp;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v16, 0LL);
  gameObject = (UnityEngine_Object_o *)this->fields.markBackSp;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v16, 0LL);
  raidFrameSp = this->fields.raidFrameSp;
  gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
    gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  }
  v18 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 8LL);
  if ( !v18 )
    goto LABEL_27;
  BpType = this->fields.BpType;
  if ( (unsigned int)BpType >= *(_DWORD *)(v18 + 24) )
    goto LABEL_28;
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
LABEL_27:
    sub_B2C434(gameObject, v8);
  }
  v21 = this->fields.BpType;
  if ( (unsigned int)v21 >= RP_OFFSET->max_length )
  {
LABEL_28:
    v22 = sub_B2C460(gameObject);
    sub_B2C400(v22, 0LL);
  }
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    (float)RP_OFFSET->m_Items[v21 + 1],
    0LL);
}