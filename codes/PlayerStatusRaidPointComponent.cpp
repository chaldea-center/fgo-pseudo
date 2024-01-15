void __fastcall PlayerStatusRaidPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x19
  __int64 v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct PlayerStatusRaidPointComponent_StaticFields *static_fields; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x2
  __int64 v34; // x0
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x19
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct PlayerStatusRaidPointComponent_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x2
  __int64 v54; // x0
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x19
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct PlayerStatusRaidPointComponent_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct PlayerStatusRaidPointComponent_StaticFields *v79; // x0

  if ( (byte_40F8FBB & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, v1);
    sub_B16FFC(&PlayerStatusRaidPointComponent_TypeInfo, v3);
    sub_B16FFC(&string___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_21598/*"raid_point_old"*/, v5);
    sub_B16FFC(&StringLiteral_21595/*"raid_point"*/, v6);
    sub_B16FFC(&StringLiteral_21599/*"raid_point_over"*/, v7);
    sub_B16FFC(&StringLiteral_22220/*"status_raid_point_frame"*/, v8);
    sub_B16FFC(&StringLiteral_21597/*"raid_point_frame_old"*/, v9);
    sub_B16FFC(&StringLiteral_21600/*"raid_point_over_old"*/, v10);
    byte_40F8FBB = 1;
  }
  PlayerStatusRaidPointComponent_TypeInfo->static_fields->RAID_MARKDISP_STEP_DEFAULT = 5;
  v11 = sub_B17014(string___TypeInfo, 2LL, v2);
  if ( !v11 )
    goto LABEL_41;
  v18 = (System_Int32_array **)v11;
  v19 = StringLiteral_21597/*"raid_point_frame_old"*/;
  if ( StringLiteral_21597/*"raid_point_frame_old"*/ )
  {
    v19 = sub_B170BC(StringLiteral_21597/*"raid_point_frame_old"*/, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v19 )
      goto LABEL_40;
    v20 = (System_Int32_array **)StringLiteral_21597/*"raid_point_frame_old"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_39;
  v18[4] = (System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 4), v20, v12, v13, v14, v15, v16, v17);
  v19 = StringLiteral_22220/*"status_raid_point_frame"*/;
  if ( StringLiteral_22220/*"status_raid_point_frame"*/ )
  {
    v19 = sub_B170BC(StringLiteral_22220/*"status_raid_point_frame"*/, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v19 )
      goto LABEL_40;
    v20 = (System_Int32_array **)StringLiteral_22220/*"status_raid_point_frame"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( *((_DWORD *)v18 + 6) <= 1u )
    goto LABEL_39;
  v18[5] = (System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 5), v20, v12, v21, v22, v23, v24, v25);
  static_fields = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  static_fields->RP_SPNAME_FRAME = (struct System_String_array *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->RP_SPNAME_FRAME, v18, v27, v28, v29, v30, v31, v32);
  v34 = sub_B17014(string___TypeInfo, 2LL, v33);
  if ( !v34 )
    goto LABEL_41;
  v40 = (System_Int32_array **)v34;
  v19 = StringLiteral_21598/*"raid_point_old"*/;
  if ( StringLiteral_21598/*"raid_point_old"*/ )
  {
    v19 = sub_B170BC(StringLiteral_21598/*"raid_point_old"*/, *(_QWORD *)&(*v40)->m_Items[9]);
    if ( !v19 )
      goto LABEL_40;
    v20 = (System_Int32_array **)StringLiteral_21598/*"raid_point_old"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*((_DWORD *)v40 + 6) )
    goto LABEL_39;
  v40[4] = (System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)(v40 + 4), v20, v12, v35, v36, v37, v38, v39);
  v19 = StringLiteral_21595/*"raid_point"*/;
  if ( StringLiteral_21595/*"raid_point"*/ )
  {
    v19 = sub_B170BC(StringLiteral_21595/*"raid_point"*/, *(_QWORD *)&(*v40)->m_Items[9]);
    if ( !v19 )
      goto LABEL_40;
    v20 = (System_Int32_array **)StringLiteral_21595/*"raid_point"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( *((_DWORD *)v40 + 6) <= 1u )
    goto LABEL_39;
  v40[5] = (System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)(v40 + 5), v20, v12, v41, v42, v43, v44, v45);
  v46 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v46->RP_SPNAME_NORMAL = (struct System_String_array *)v40;
  sub_B16F98((BattleServantConfConponent_o *)&v46->RP_SPNAME_NORMAL, v40, v47, v48, v49, v50, v51, v52);
  v54 = sub_B17014(string___TypeInfo, 2LL, v53);
  if ( !v54 )
    goto LABEL_41;
  v60 = (System_Int32_array **)v54;
  v19 = StringLiteral_21600/*"raid_point_over_old"*/;
  if ( StringLiteral_21600/*"raid_point_over_old"*/ )
  {
    v19 = sub_B170BC(StringLiteral_21600/*"raid_point_over_old"*/, *(_QWORD *)&(*v60)->m_Items[9]);
    if ( !v19 )
      goto LABEL_40;
    v20 = (System_Int32_array **)StringLiteral_21600/*"raid_point_over_old"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*((_DWORD *)v60 + 6) )
    goto LABEL_39;
  v60[4] = (System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)(v60 + 4), v20, v12, v55, v56, v57, v58, v59);
  v19 = StringLiteral_21599/*"raid_point_over"*/;
  if ( StringLiteral_21599/*"raid_point_over"*/ )
  {
    v19 = sub_B170BC(StringLiteral_21599/*"raid_point_over"*/, *(_QWORD *)&(*v60)->m_Items[9]);
    if ( v19 )
    {
      v20 = (System_Int32_array **)StringLiteral_21599/*"raid_point_over"*/;
      goto LABEL_35;
    }
LABEL_40:
    sub_B170F4(v19);
    sub_B170A0();
  }
  v20 = 0LL;
LABEL_35:
  if ( *((_DWORD *)v60 + 6) <= 1u )
    goto LABEL_39;
  v60[5] = (System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)(v60 + 5), v20, v12, v61, v62, v63, v64, v65);
  v66 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v66->RP_SPNAME_OVER = (struct System_String_array *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v66->RP_SPNAME_OVER, v60, v67, v68, v69, v70, v71, v72);
  v19 = sub_B17014(int___TypeInfo, 2LL, v73);
  if ( !v19 )
LABEL_41:
    sub_B170D4();
  v20 = (System_Int32_array **)v19;
  if ( !*(_DWORD *)(v19 + 24) )
  {
LABEL_39:
    sub_B17100(v19, v20, v12);
    sub_B170A0();
  }
  *(_DWORD *)(v19 + 32) = 5;
  v79 = PlayerStatusRaidPointComponent_TypeInfo->static_fields;
  v79->RP_OFFSET = (struct System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)&v79->RP_OFFSET, v20, v12, v74, v75, v76, v77, v78);
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
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UISprite_o *v11; // x20
  PlayerStatusRaidPointComponent_c *v12; // x0
  struct System_String_array *RP_SPNAME_OVER; // x8
  UnityEngine_Component_o *raidPointSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 BpType; // x9
  struct UISprite_o *v17; // x0

  if ( (byte_40F8FBA & 1) == 0 )
  {
    sub_B16FFC(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&dispType);
    byte_40F8FBA = 1;
  }
  switch ( dispType )
  {
    case 2:
      raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !raidPointSp )
        goto LABEL_27;
      gameObject = UnityEngine_Component__get_gameObject(raidPointSp, 0LL);
      if ( !gameObject )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v11 = this->fields.raidPointSp;
      v12 = PlayerStatusRaidPointComponent_TypeInfo;
      if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        v12 = PlayerStatusRaidPointComponent_TypeInfo;
      }
      RP_SPNAME_OVER = v12->static_fields->RP_SPNAME_OVER;
      if ( !RP_SPNAME_OVER )
        goto LABEL_27;
      goto LABEL_22;
    case 1:
      v7 = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( !v7 )
        goto LABEL_27;
      v8 = UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( !v8 )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive(v8, 1, 0LL);
      v11 = this->fields.raidPointSp;
      v12 = PlayerStatusRaidPointComponent_TypeInfo;
      if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
        v12 = PlayerStatusRaidPointComponent_TypeInfo;
      }
      RP_SPNAME_OVER = v12->static_fields->RP_SPNAME_NORMAL;
      if ( !RP_SPNAME_OVER )
        goto LABEL_27;
LABEL_22:
      BpType = this->fields.BpType;
      if ( (unsigned int)BpType >= RP_SPNAME_OVER->max_length )
      {
        sub_B17100(v12, v9, v10);
        sub_B170A0();
      }
      if ( !v11 )
        goto LABEL_27;
      UISprite__set_spriteName(v11, RP_SPNAME_OVER->m_Items[BpType], 0LL);
      v17 = this->fields.raidPointSp;
      if ( !v17 )
        goto LABEL_27;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v17->klass->vtable._33_MakePixelPerfect.method)(
        v17,
        v17->klass->vtable._34_get_minWidth.methodPtr);
      return;
    case 0:
      v5 = (UnityEngine_Component_o *)this->fields.raidPointSp;
      if ( v5 )
      {
        v6 = UnityEngine_Component__get_gameObject(v5, 0LL);
        if ( v6 )
        {
          UnityEngine_GameObject__SetActive(v6, 0, 0LL);
          return;
        }
      }
LABEL_27:
      sub_B170D4();
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
  UnityEngine_Component_o *markFrontSp; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *markBackSp; // x0
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UISprite_o *raidFrameSp; // x20
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x8
  __int64 BpType; // x9
  struct UISprite_o *v26; // x0
  UnityEngine_Component_o *raidPointSp; // x0
  struct System_Int32_array *RP_OFFSET; // x8
  __int64 v29; // x9
  int32_t v30; // [xsp+Ch] [xbp-14h] BYREF

  v30 = index;
  if ( (byte_40F8FB9 & 1) == 0 )
  {
    sub_B16FFC(&PlayerStatusRaidPointComponent_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&StringLiteral_10968/*"RAID_MARKDISP_STEP"*/, v6);
    byte_40F8FB9 = 1;
  }
  this->fields.BpType = iBpType;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  v8 = gameObject;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v10 = System_Int32__ToString((int32_t)&v30, 0LL);
  v11 = System_String__Concat_43743732(name, v10, 0LL);
  UnityEngine_Object__set_name(v8, v11, 0LL);
  v12 = v30 - 1;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10968/*"RAID_MARKDISP_STEP"*/, 0LL);
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
  markFrontSp = (UnityEngine_Component_o *)this->fields.markFrontSp;
  if ( !markFrontSp )
    goto LABEL_27;
  v17 = UnityEngine_Component__get_gameObject(markFrontSp, 0LL);
  if ( !v17 )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(v17, v15, 0LL);
  markBackSp = (UnityEngine_Component_o *)this->fields.markBackSp;
  if ( !markBackSp )
    goto LABEL_27;
  v19 = UnityEngine_Component__get_gameObject(markBackSp, 0LL);
  if ( !v19 )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(v19, v15, 0LL);
  raidFrameSp = this->fields.raidFrameSp;
  v23 = (UnityEngine_GameObject_o *)PlayerStatusRaidPointComponent_TypeInfo;
  if ( (BYTE3(PlayerStatusRaidPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PlayerStatusRaidPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PlayerStatusRaidPointComponent_TypeInfo);
    v23 = (UnityEngine_GameObject_o *)PlayerStatusRaidPointComponent_TypeInfo;
  }
  v24 = *(_QWORD *)(*(_QWORD *)&v23[7].fields.m_CachedPtr + 8LL);
  if ( !v24 )
    goto LABEL_27;
  BpType = this->fields.BpType;
  if ( (unsigned int)BpType >= *(_DWORD *)(v24 + 24) )
    goto LABEL_28;
  if ( !raidFrameSp
    || (UISprite__set_spriteName(raidFrameSp, *(System_String_o **)(v24 + 8 * BpType + 32), 0LL),
        (v26 = this->fields.raidFrameSp) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v26->klass->vtable._33_MakePixelPerfect.method)(
          v26,
          v26->klass->vtable._34_get_minWidth.methodPtr),
        (raidPointSp = (UnityEngine_Component_o *)this->fields.raidPointSp) == 0LL)
    || (v23 = UnityEngine_Component__get_gameObject(raidPointSp, 0LL),
        (RP_OFFSET = PlayerStatusRaidPointComponent_TypeInfo->static_fields->RP_OFFSET) == 0LL) )
  {
LABEL_27:
    sub_B170D4();
  }
  v29 = this->fields.BpType;
  if ( (unsigned int)v29 >= RP_OFFSET->max_length )
  {
LABEL_28:
    sub_B17100(v23, v20, v21);
    sub_B170A0();
  }
  GameObjectExtensions__SetLocalPositionX(v23, (float)RP_OFFSET->m_Items[v29 + 1], 0LL);
}