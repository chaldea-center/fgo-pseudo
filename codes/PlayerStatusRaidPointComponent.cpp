void __fastcall PlayerStatusRaidPointComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x19
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x19
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x19
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x1
  struct PlayerStatusRaidPointComponent_StaticFields *v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0

  if ( (byte_42E8433 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&PlayerStatusRaidPointComponent_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&string___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_21983/*"raid_point_old"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_21980/*"raid_point"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_21984/*"raid_point_over"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_22615/*"status_raid_point_frame"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_21982/*"raid_point_frame_old"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_21985/*"raid_point_over_old"*/, v25, v26, v27);
    byte_42E8433 = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v28 = sub_B5D5DC(string___TypeInfo, 2LL);
  if ( !v28 )
    goto LABEL_41;
  v36 = (System_Int32_array **)v28;
  v28 = StringLiteral_21982/*"raid_point_frame_old"*/;
  if ( StringLiteral_21982/*"raid_point_frame_old"*/ )
  {
    v28 = sub_B5D684(StringLiteral_21982/*"raid_point_frame_old"*/, *(_QWORD *)&(*v36)->m_Items[9]);
    if ( !v28 )
      goto LABEL_40;
    v37 = (System_Int32_array **)StringLiteral_21982/*"raid_point_frame_old"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( !*((_DWORD *)v36 + 6) )
    goto LABEL_39;
  v36[4] = (System_Int32_array *)v37;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 4), v37, v30, v31, v32, v33, v34, v35);
  v28 = StringLiteral_22615/*"status_raid_point_frame"*/;
  if ( StringLiteral_22615/*"status_raid_point_frame"*/ )
  {
    v28 = sub_B5D684(StringLiteral_22615/*"status_raid_point_frame"*/, *(_QWORD *)&(*v36)->m_Items[9]);
    if ( !v28 )
      goto LABEL_40;
    v44 = (System_Int32_array **)StringLiteral_22615/*"status_raid_point_frame"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( *((_DWORD *)v36 + 6) <= 1u )
    goto LABEL_39;
  v36[5] = (System_Int32_array *)v44;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 5), v44, v38, v39, v40, v41, v42, v43);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v36;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->RP_SPNAME_FRAME, v36, v46, v47, v48, v49, v50, v51);
  v28 = sub_B5D5DC(string___TypeInfo, 2LL);
  if ( !v28 )
    goto LABEL_41;
  v58 = (System_Int32_array **)v28;
  v28 = StringLiteral_21983/*"raid_point_old"*/;
  if ( StringLiteral_21983/*"raid_point_old"*/ )
  {
    v28 = sub_B5D684(StringLiteral_21983/*"raid_point_old"*/, *(_QWORD *)&(*v58)->m_Items[9]);
    if ( !v28 )
      goto LABEL_40;
    v59 = (System_Int32_array **)StringLiteral_21983/*"raid_point_old"*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( !*((_DWORD *)v58 + 6) )
    goto LABEL_39;
  v58[4] = (System_Int32_array *)v59;
  sub_B5D560((BattleServantConfConponent_o *)(v58 + 4), v59, v52, v53, v54, v55, v56, v57);
  v28 = StringLiteral_21980/*"raid_point"*/;
  if ( StringLiteral_21980/*"raid_point"*/ )
  {
    v28 = sub_B5D684(StringLiteral_21980/*"raid_point"*/, *(_QWORD *)&(*v58)->m_Items[9]);
    if ( !v28 )
      goto LABEL_40;
    v66 = (System_Int32_array **)StringLiteral_21980/*"raid_point"*/;
  }
  else
  {
    v66 = 0LL;
  }
  if ( *((_DWORD *)v58 + 6) <= 1u )
    goto LABEL_39;
  v58[5] = (System_Int32_array *)v66;
  sub_B5D560((BattleServantConfConponent_o *)(v58 + 5), v66, v60, v61, v62, v63, v64, v65);
  v67 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v67->RP_SPNAME_NORMAL = (struct System_String_array *)v58;
  sub_B5D560((BattleServantConfConponent_o *)&v67->RP_SPNAME_NORMAL, v58, v68, v69, v70, v71, v72, v73);
  v28 = sub_B5D5DC(string___TypeInfo, 2LL);
  if ( !v28 )
    goto LABEL_41;
  v80 = (System_Int32_array **)v28;
  v28 = StringLiteral_21985/*"raid_point_over_old"*/;
  if ( StringLiteral_21985/*"raid_point_over_old"*/ )
  {
    v28 = sub_B5D684(StringLiteral_21985/*"raid_point_over_old"*/, *(_QWORD *)&(*v80)->m_Items[9]);
    if ( !v28 )
      goto LABEL_40;
    v81 = (System_Int32_array **)StringLiteral_21985/*"raid_point_over_old"*/;
  }
  else
  {
    v81 = 0LL;
  }
  if ( !*((_DWORD *)v80 + 6) )
    goto LABEL_39;
  v80[4] = (System_Int32_array *)v81;
  sub_B5D560((BattleServantConfConponent_o *)(v80 + 4), v81, v74, v75, v76, v77, v78, v79);
  v28 = StringLiteral_21984/*"raid_point_over"*/;
  if ( StringLiteral_21984/*"raid_point_over"*/ )
  {
    v28 = sub_B5D684(StringLiteral_21984/*"raid_point_over"*/, *(_QWORD *)&(*v80)->m_Items[9]);
    if ( v28 )
    {
      v88 = (System_Int32_array **)StringLiteral_21984/*"raid_point_over"*/;
      goto LABEL_35;
    }
LABEL_40:
    v105 = sub_B5D6BC(v28);
    sub_B5D668(v105, 0LL);
  }
  v88 = 0LL;
LABEL_35:
  if ( *((_DWORD *)v80 + 6) <= 1u )
    goto LABEL_39;
  v80[5] = (System_Int32_array *)v88;
  sub_B5D560((BattleServantConfConponent_o *)(v80 + 5), v88, v82, v83, v84, v85, v86, v87);
  v89 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v89->RP_SPNAME_OVER = (struct System_String_array *)v80;
  sub_B5D560((BattleServantConfConponent_o *)&v89->RP_SPNAME_OVER, v80, v90, v91, v92, v93, v94, v95);
  v28 = sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v28 )
LABEL_41:
    sub_B5D69C(v28, v29);
  v102 = (System_Int32_array **)v28;
  if ( !*(_DWORD *)(v28 + 24) )
  {
LABEL_39:
    v104 = sub_B5D6C8(v28);
    sub_B5D668(v104, 0LL);
  }
  *(_DWORD *)(v28 + 32) = 5;
  v103 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v103->RP_OFFSET = (struct System_Int32_array *)v102;
  sub_B5D560((BattleServantConfConponent_o *)&v103->RP_OFFSET, v102, v96, v97, v98, v99, v100, v101);
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
  __int64 v3; // x3
  UnityEngine_Component_o *raidPointSp; // x0
  UISprite_o *v7; // x20
  __int64 v8; // x8
  __int64 BpType; // x9
  __int64 v10; // x0

  if ( (byte_42E8432 & 1) == 0 )
  {
    sub_B5D5C4(&PlayerStatusRaidPointComponent_TypeInfo, dispType, (_DWORD)method, v3);
    byte_42E8432 = 1;
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
      v7 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v8 = *(_QWORD *)(*(_QWORD *)&raidPointSp[7].fields.m_CachedPtr + 24LL);
      if ( !v8 )
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
      v7 = this->fields.raidPointSp;
      raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        raidPointSp = (UnityEngine_Component_o *)PlayerStatusRaidPointComponent_TypeInfo;
      }
      v8 = *(_QWORD *)(*(_QWORD *)&raidPointSp[7].fields.m_CachedPtr + 16LL);
      if ( !v8 )
        goto LABEL_27;
LABEL_22:
      BpType = this->fields.BpType;
      if ( (unsigned int)BpType >= *(_DWORD *)(v8 + 24) )
      {
        v10 = sub_B5D6C8(raidPointSp);
        sub_B5D668(v10, 0LL);
      }
      if ( !v7 )
        goto LABEL_27;
      UISprite__set_spriteName(v7, *(System_String_o **)(v8 + 8 * BpType + 32), 0LL);
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
      sub_B5D69C(raidPointSp, *(_QWORD *)&dispType);
  }
}


void __fastcall PlayerStatusRaidPointComponent__Setup(
        PlayerStatusRaidPointComponent_o *this,
        int32_t index,
        int32_t iBpType,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  System_String_o *name; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  int v15; // w20
  int32_t Value; // w0
  PlayerStatusRaidPointComponent_c *v17; // x0
  bool v18; // w20
  UISprite_o *raidFrameSp; // x20
  __int64 v20; // x8
  __int64 BpType; // x9
  struct System_Int32_array *RP_OFFSET; // x8
  __int64 v23; // x9
  __int64 v24; // x0
  int32_t v25; // [xsp+Ch] [xbp-14h] BYREF

  v25 = index;
  if ( (byte_42E8431 & 1) == 0 )
  {
    sub_B5D5C4(&PlayerStatusRaidPointComponent_TypeInfo, index, iBpType, method);
    sub_B5D5C4(&StringLiteral_11137/*"RAID_MARKDISP_STEP"*/, v6, v7, v8);
    byte_42E8431 = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  v11 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v13 = System_Int32__ToString((int32_t)&v25, 0LL);
  v14 = System_String__Concat_44577788(name, v13, 0LL);
  UnityEngine_Object__set_name(v11, v14, 0LL);
  v15 = v25 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11137/*"RAID_MARKDISP_STEP"*/, 0LL);
  if ( Value <= 0 )
  {
    v17 = PlayerStatusRaidPointComponent_TypeInfo;
    if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
      v17 = PlayerStatusRaidPointComponent_TypeInfo;
    }
    Value = v17->static_fields->RAID_MARKDISP_STEP_DEFAULT;
  }
  v18 = v15 >= 1 && v15 % Value == 0;
  gameObject = (UnityEngine_Object_o *)this->fields.markFrontSp;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v18, 0LL);
  gameObject = (UnityEngine_Object_o *)this->fields.markBackSp;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v18, 0LL);
  raidFrameSp = this->fields.raidFrameSp;
  gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
    gameObject = (UnityEngine_Object_o *)PlayerStatusRaidPointComponent_TypeInfo;
  }
  v20 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 8LL);
  if ( !v20 )
    goto LABEL_27;
  BpType = this->fields.BpType;
  if ( (unsigned int)BpType >= *(_DWORD *)(v20 + 24) )
    goto LABEL_28;
  if ( !raidFrameSp
    || (UISprite__set_spriteName(raidFrameSp, *(System_String_o **)(v20 + 8 * BpType + 32), 0LL),
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
    sub_B5D69C(gameObject, v10);
  }
  v23 = this->fields.BpType;
  if ( (unsigned int)v23 >= RP_OFFSET->max_length )
  {
LABEL_28:
    v24 = sub_B5D6C8(gameObject);
    sub_B5D668(v24, 0LL);
  }
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)gameObject,
    (float)RP_OFFSET->m_Items[v23 + 1],
    0LL);
}