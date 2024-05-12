void __fastcall BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = UnityEngine_Color__get_yellow(0LL);
  this->fields.record_intactColor = UnityEngine_Color__get_white(0LL);
  this->fields.damage_renewalColor = UnityEngine_Color__get_white(0LL);
  this->fields.damage_intactColor = UnityEngine_Color__get_blue(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438B80F & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultExpComponent_endClose__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438B80F = 1;
  }
  window = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_B7769C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v4,
    window->klass->vtable._13_CompClose.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__CreateRewardEffect(
        BattleResultExpComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultExpComponent_o *v8; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *transform; // x22
  int v13; // s0
  UnityEngine_Transform_o *v16; // x22
  int v17; // s0
  int parentComp; // w8
  BattleResultExpComponent_o *v21; // x21
  unsigned int v22; // w22
  __int64 v23; // x0

  v8 = this;
  if ( (byte_438B80B & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_B775C4(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultExpComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B80B = 1;
  }
  if ( !data )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               effectName,
                                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         Object_WarBoardWaitTimeSetting,
                                         (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_20;
  v10 = (UnityEngine_GameObject_o *)this;
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_20;
  v11 = (UnityEngine_Transform_o *)this;
  this = (BattleResultExpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0LL);
  if ( !v11 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)this, 0LL);
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  v16 = UnityEngine_GameObject__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
  if ( !v16 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                         v10,
                                         (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_20;
  parentComp = (int)this->fields.parentComp;
  v21 = this;
  if ( parentComp >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= parentComp )
      {
        v23 = sub_B776C8(this);
        sub_B77668(v23, 0LL);
      }
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v21->fields.myFsm + (int)v22);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      parentComp = (int)v21->fields.parentComp;
      if ( (int)++v22 >= parentComp )
        goto LABEL_18;
    }
LABEL_20:
    sub_B7769C(this, data);
  }
LABEL_18:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_20;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  __int64 v10; // x1
  BattleWindowComponent_o *window; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  System_String_o *v13; // x20
  System_String_o *v14; // x20

  if ( (byte_438B807 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2594/*"BATTLE_RESULTEXP_MASTERTITLE"*/);
    sub_B775C4(&StringLiteral_2589/*"BATTLE_RESULTEXP_EQUIPTITLE"*/);
    byte_438B807 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.effectUIList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  window = this->fields.window;
  if ( !window )
    goto LABEL_36;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_36;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = this->fields.masterupwindow;
  if ( !window )
    goto LABEL_36;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.masterupwindow;
  if ( !window )
    goto LABEL_36;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = this->fields.equipupwindow;
  if ( !window )
    goto LABEL_36;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.equipupwindow;
  if ( !window )
    goto LABEL_36;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = this->fields.damageRecordWindow;
  if ( !window )
    goto LABEL_36;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.damageRecordWindow;
  if ( !window )
    goto LABEL_36;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.knockdownRecordWindow;
    if ( !window )
      goto LABEL_36;
    ((void (__fastcall *)(BattleWindowComponent_o *, const char *))window->klass[1]._1.gc_desc)(
      window,
      window->klass[1]._1.name);
  }
  window = (BattleWindowComponent_o *)this->fields.masterLevelupRoot;
  if ( !window )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (BattleWindowComponent_o *)this->fields.equipLevelupRoot;
  if ( !window )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (BattleWindowComponent_o *)this->fields.damageRecordRoot;
  if ( !window )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !window )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2594/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !window )
    goto LABEL_36;
  v13 = (System_String_o *)window;
  if ( !System_String__Equals_44889276((System_String_o *)window, (System_String_o *)StringLiteral_2594/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_36;
    UILabel__set_text((UILabel_o *)window, v13, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2589/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !window )
LABEL_36:
    sub_B7769C(window, v10);
  v14 = (System_String_o *)window;
  if ( !System_String__Equals_44889276((System_String_o *)window, (System_String_o *)StringLiteral_2589/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v14, 0LL);
      goto LABEL_35;
    }
    goto LABEL_36;
  }
LABEL_35:
  this->fields.bondsCountUp = 1;
}


void __fastcall BattleResultExpComponent__Open(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v6; // x11
  UnityEngine_GameObject_c *v7; // x22
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t v11; // w20
  __int64 v12; // x8
  struct UnityEngine_GameObject_o **p_figureRoot; // x21
  UnityEngine_GameObject_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Object_array *v21; // x21
  UnityEngine_GameObject_o *v22; // x0
  System_Int32_array **v23; // x1
  __int64 v24; // x2
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  __int64 v39; // x2
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  __int64 v54; // x2
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x22
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x1
  System_Collections_Hashtable_o *v90; // x0
  __int64 v91; // x0
  __int64 v92; // x0
  char v93[4]; // [xsp+18h] [xbp-38h] BYREF
  int v94; // [xsp+1Ch] [xbp-34h] BYREF
  int v95; // [xsp+28h] [xbp-28h] BYREF
  int32_t overwriteImageId; // [xsp+2Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_438B80E & 1) == 0 )
  {
    sub_B775C4(&BattleRootComponent_TypeInfo);
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&StringLiteral_23801/*"x"*/);
    sub_B775C4(&StringLiteral_5634/*"END_OPEN"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21704/*"oncompletetarget"*/);
    sub_B775C4(&StringLiteral_18722/*"endMoveFigure"*/);
    sub_B775C4(&StringLiteral_20375/*"islocal"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438B80E = 1;
  }
  overwriteImageId = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_72;
  klass = gameObject[1].klass;
  if ( klass
    && (v6 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *((unsigned __int8 *)klass->_1.image + 300) >= (unsigned int)v6) )
  {
    v7 = *(BattleRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * v6 - 8) == BattleRootComponent_TypeInfo
       ? gameObject[1].klass
       : 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_72;
  v10 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v97.fields.currentCryptoKey = v10;
  *(_QWORD *)&v97.fields.fakeValue = v9;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v97, 0LL);
  if ( !v7 )
    goto LABEL_72;
  v11 = (int)gameObject;
  gameObject = *(UnityEngine_GameObject_o **)&v7->_1.this_arg.bits;
  if ( !gameObject )
    goto LABEL_72;
  overwriteImageId = BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0LL);
  gameObject = *(UnityEngine_GameObject_o **)&v7->_1.this_arg.bits;
  if ( !gameObject )
    goto LABEL_72;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0LL);
  if ( overwriteImageId == -1 )
  {
    p_figureRoot = &this->fields.figureRoot;
  }
  else
  {
    v12 = *(_QWORD *)&v7->_1.this_arg.bits;
    if ( !v12 )
      goto LABEL_72;
    p_figureRoot = &this->fields.figureRoot;
    MasterFigureManagerOld__CreatePrefab_31347828(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v12 + 392),
      v11,
      60,
      0LL,
      overwriteImageId,
      (System_Nullable_Vector3__o)0,
      0LL);
  }
  v14 = *p_figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_B775DC(object___TypeInfo, 10LL);
  if ( !gameObject )
LABEL_72:
    sub_B7769C(gameObject, v4);
  v21 = (System_Object_array *)gameObject;
  v22 = (UnityEngine_GameObject_o *)StringLiteral_23801/*"x"*/;
  if ( StringLiteral_23801/*"x"*/ )
  {
    v22 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_23801/*"x"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_73;
    v23 = (System_Int32_array **)StringLiteral_23801/*"x"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_71;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_B77560((BattleServantConfConponent_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
  v95 = -1018691584;
  v22 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v95, v24);
  v31 = (System_Int32_array **)v22;
  if ( v22 )
  {
    v22 = (UnityEngine_GameObject_o *)sub_B77684(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_73;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_71;
  v21->m_Items[1] = (Il2CppObject *)v31;
  sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  v22 = (UnityEngine_GameObject_o *)StringLiteral_23154/*"time"*/;
  if ( StringLiteral_23154/*"time"*/ )
  {
    v22 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_23154/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_73;
    v38 = (System_Int32_array **)StringLiteral_23154/*"time"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_71;
  v21->m_Items[2] = (Il2CppObject *)v38;
  sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
  v94 = 1061997773;
  v22 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v94, v39);
  v46 = (System_Int32_array **)v22;
  if ( v22 )
  {
    v22 = (UnityEngine_GameObject_o *)sub_B77684(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_73;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_71;
  v21->m_Items[3] = (Il2CppObject *)v46;
  sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
  v22 = (UnityEngine_GameObject_o *)StringLiteral_20375/*"islocal"*/;
  if ( StringLiteral_20375/*"islocal"*/ )
  {
    v22 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_20375/*"islocal"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_73;
    v53 = (System_Int32_array **)StringLiteral_20375/*"islocal"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( v21->max_length <= 4 )
    goto LABEL_71;
  v21->m_Items[4] = (Il2CppObject *)v53;
  sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[4], v53, v47, v48, v49, v50, v51, v52);
  v93[0] = 1;
  v22 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v93, v54);
  v61 = (System_Int32_array **)v22;
  if ( v22 )
  {
    v22 = (UnityEngine_GameObject_o *)sub_B77684(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_73;
  }
  if ( v21->max_length <= 5 )
    goto LABEL_71;
  v21->m_Items[5] = (Il2CppObject *)v61;
  sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[5], v61, v55, v56, v57, v58, v59, v60);
  v22 = (UnityEngine_GameObject_o *)StringLiteral_21704/*"oncompletetarget"*/;
  if ( StringLiteral_21704/*"oncompletetarget"*/ )
  {
    v22 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_21704/*"oncompletetarget"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_73;
    v68 = (System_Int32_array **)StringLiteral_21704/*"oncompletetarget"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( v21->max_length <= 6 )
    goto LABEL_71;
  v21->m_Items[6] = (Il2CppObject *)v68;
  sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[6], v68, v62, v63, v64, v65, v66, v67);
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v75 = (System_Int32_array **)v22;
  if ( v22 )
  {
    v22 = (UnityEngine_GameObject_o *)sub_B77684(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_73:
      v92 = sub_B776BC(v22);
      sub_B77668(v92, 0LL);
    }
  }
  if ( v21->max_length <= 7 )
    goto LABEL_71;
  v21->m_Items[7] = (Il2CppObject *)v75;
  sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[7], v75, v69, v70, v71, v72, v73, v74);
  v22 = (UnityEngine_GameObject_o *)StringLiteral_21702/*"oncomplete"*/;
  if ( StringLiteral_21702/*"oncomplete"*/ )
  {
    v22 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_21702/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_73;
    v82 = (System_Int32_array **)StringLiteral_21702/*"oncomplete"*/;
  }
  else
  {
    v82 = 0LL;
  }
  if ( v21->max_length <= 8 )
    goto LABEL_71;
  v21->m_Items[8] = (Il2CppObject *)v82;
  sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[8], v82, v76, v77, v78, v79, v80, v81);
  v22 = (UnityEngine_GameObject_o *)StringLiteral_18722/*"endMoveFigure"*/;
  if ( StringLiteral_18722/*"endMoveFigure"*/ )
  {
    v22 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_18722/*"endMoveFigure"*/, v21->obj.klass->_1.element_class);
    if ( v22 )
    {
      v89 = (System_Int32_array **)StringLiteral_18722/*"endMoveFigure"*/;
      goto LABEL_64;
    }
    goto LABEL_73;
  }
  v89 = 0LL;
LABEL_64:
  if ( v21->max_length <= 9 )
  {
LABEL_71:
    v91 = sub_B776C8(v22);
    sub_B77668(v91, 0LL);
  }
  v21->m_Items[9] = (Il2CppObject *)v89;
  sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v90 = iTween__Hash(v21, 0LL);
  iTween__MoveFrom_43178708(v14, v90, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.window;
  if ( !gameObject )
    goto LABEL_72;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.typeMetadataHandle)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.interopData);
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5634/*"END_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__UpdateValue(
        BattleResultExpComponent_o *this,
        float val,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattleResultExpComponent__updateValueActual(this, val, 0, v3);
}


void __fastcall BattleResultExpComponent__activeTouch(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_B7769C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__checkDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Object_o *damage_LvupSimpleAnim; // x20
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v6; // x20
  unsigned __int64 v7; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v9; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_438B81B & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultExpComponent_endOpenDamageRecord__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&StringLiteral_17147/*"bit_result_levelup01"*/);
    sub_B775C4(&StringLiteral_3213/*"CLOSE"*/);
    byte_438B81B = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3213/*"CLOSE"*/, 0LL);
      return;
    }
    goto LABEL_34;
  }
  myFsm = (PlayMakerFSM_o *)this->fields.damageRecordRoot;
  if ( !myFsm )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 1, 0LL);
  damage_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.damage_LvupSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(damage_LvupSimpleAnim, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)SimpleAnimation__get_Item(
                                  (SimpleAnimation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v6 = myFsm;
        if ( *(_WORD *)&myFsm->klass->_2.bitflags1 )
        {
          v7 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v7;
            p_offset += 2;
            if ( v7 >= *(unsigned __int16 *)&myFsm->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v9 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_15:
          v9 = sub_B0F4C0(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v9)(v6, *(_QWORD *)(v9 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_16815192((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_34:
    sub_B7769C(myFsm, method);
  }
  damage_LvupAnim = (UnityEngine_Object_o *)this->fields.damage_LvupAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(damage_LvupAnim, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_51745976(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_34;
  }
LABEL_29:
  damageRecordWindow = this->fields.damageRecordWindow;
  v12 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0LL);
  if ( !damageRecordWindow )
    goto LABEL_34;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._10_Open.method)(
    damageRecordWindow,
    v12,
    damageRecordWindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
}


void __fastcall BattleResultExpComponent__checkEquipLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultExpComponent_o *v2; // x19
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  UnityEngine_Object_o *equip_LvupSimpleAnim; // x20
  BattleResultExpComponent_c *klass; // x8
  BattleResultExpComponent_o *v7; // x20
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 v10; // x0
  UnityEngine_Object_o *equip_LvupAnim; // x20
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v13; // x21

  v2 = this;
  if ( (byte_438B818 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultExpComponent_endOpenEquipUp__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&StringLiteral_17147/*"bit_result_levelup01"*/);
    this = (BattleResultExpComponent_o *)sub_B775C4(&StringLiteral_3213/*"CLOSE"*/);
    byte_438B818 = 1;
  }
  oldEquip = v2->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_36;
  newEquip = v2->fields.newEquip;
  if ( !newEquip )
    goto LABEL_36;
  if ( oldEquip->fields.lv >= newEquip->fields.lv )
  {
    this = (BattleResultExpComponent_o *)v2->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3213/*"CLOSE"*/, 0LL);
      return;
    }
    goto LABEL_36;
  }
  this = (BattleResultExpComponent_o *)v2->fields.equipLevelupRoot;
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  equip_LvupSimpleAnim = (UnityEngine_Object_o *)v2->fields.equip_LvupSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equip_LvupSimpleAnim, 0LL, 0LL) )
  {
    this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)this,
                                             (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        klass = this->klass;
        v7 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v8 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v8;
            p_offset += 4;
            if ( v8 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_17;
          }
          v10 = (__int64)(&klass[1]._1.gc_desc + 2 * *p_offset);
        }
        else
        {
LABEL_17:
          v10 = sub_B0F4C0(this, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v10)(v7, *(_QWORD *)(v10 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_16815192((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_31;
        }
      }
    }
LABEL_36:
    sub_B7769C(this, method);
  }
  equip_LvupAnim = (UnityEngine_Object_o *)v2->fields.equip_LvupAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equip_LvupAnim, 0LL, 0LL) )
  {
    this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)UnityEngine_Animation__get_Item(
                                             (UnityEngine_Animation_o *)this,
                                             (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_51745976(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_31;
        }
      }
    }
    goto LABEL_36;
  }
LABEL_31:
  equipupwindow = v2->fields.equipupwindow;
  v13 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v13, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_36;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v13,
    equipupwindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
}


void __fastcall BattleResultExpComponent__checkMasterLevelUp(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  SePlayer_o *MeterSePlayer; // x0
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  UnityEngine_Object_o *mst_LvupSimpleAnim; // x20
  SePlayer_c *klass; // x8
  SePlayer_o *v11; // x20
  unsigned __int64 v12; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v14; // x0
  UnityEngine_Object_o *mst_LvupAnim; // x20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v17; // x21
  struct UserGameEntity_o *v18; // x9
  struct UserGameEntity_o *v19; // x8
  int32_t v20; // w20

  if ( (byte_438B814 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultExpComponent_endOpenMasterUp__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&StringLiteral_17147/*"bit_result_levelup01"*/);
    sub_B775C4(&StringLiteral_9466/*"NEXT"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438B814 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43295052(gameObject, 0LL);
  BattleResultExpComponent__updateValueActual(this, 1.0, 1, v4);
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  oldGame = this->fields.oldGame;
  this->fields.bondsCountUp = 0;
  if ( !oldGame )
    goto LABEL_46;
  newGame = this->fields.newGame;
  if ( !newGame )
    goto LABEL_46;
  if ( oldGame->fields.lv >= newGame->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.myFsm;
    if ( MeterSePlayer )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9466/*"NEXT"*/, 0LL);
      return;
    }
    goto LABEL_46;
  }
  MeterSePlayer = (SePlayer_o *)this->fields.masterLevelupRoot;
  if ( !MeterSePlayer )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MeterSePlayer, 1, 0LL);
  mst_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.mst_LvupSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mst_LvupSimpleAnim, 0LL, 0LL) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
    if ( MeterSePlayer )
    {
      MeterSePlayer = (SePlayer_o *)SimpleAnimation__get_Item(
                                      (SimpleAnimation_o *)MeterSePlayer,
                                      (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
                                      0LL);
      if ( MeterSePlayer )
      {
        klass = MeterSePlayer->klass;
        v11 = MeterSePlayer;
        if ( *(_WORD *)&MeterSePlayer->klass->_2.bitflags1 )
        {
          v12 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v12;
            p_offset += 2;
            if ( v12 >= *(unsigned __int16 *)&MeterSePlayer->klass->_2.bitflags1 )
              goto LABEL_22;
          }
          v14 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_22:
          v14 = sub_B0F4C0(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_16815192(
            (SimpleAnimation_o *)MeterSePlayer,
            (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_36;
        }
      }
    }
LABEL_46:
    sub_B7769C(MeterSePlayer, v5);
  }
  mst_LvupAnim = (UnityEngine_Object_o *)this->fields.mst_LvupAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mst_LvupAnim, 0LL, 0LL) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_46;
    MeterSePlayer = (SePlayer_o *)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)MeterSePlayer,
                                    (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
                                    0LL);
    if ( !MeterSePlayer )
      goto LABEL_46;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0LL);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_46;
    UnityEngine_Animation__Play_51745976(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
      0LL);
  }
LABEL_36:
  masterupwindow = this->fields.masterupwindow;
  v17 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_46;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._10_Open.method)(
    masterupwindow,
    v17,
    masterupwindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  v18 = this->fields.oldGame;
  if ( !v18 )
    goto LABEL_46;
  v19 = this->fields.newGame;
  if ( !v19 )
    goto LABEL_46;
  v20 = v18->fields.lv + 1;
  while ( v20 <= v19->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( MeterSePlayer )
    {
      AdManager__TrackEvent((AdManager_o *)MeterSePlayer, 3, 2, v20, -1, 0LL, 0LL);
      v19 = this->fields.newGame;
      ++v20;
      if ( v19 )
        continue;
    }
    goto LABEL_46;
  }
}


void __fastcall BattleResultExpComponent__checkOpenKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438B81E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_3213/*"CLOSE"*/);
    byte_438B81E = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.knockdownRecordWindow;
    if ( !myFsm )
      goto LABEL_12;
    if ( LOBYTE(myFsm[2].fields.m_CachedPtr) )
    {
      ((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, Il2CppClass *))myFsm->klass[1]._1.castClass)(
        myFsm,
        0LL,
        myFsm->klass[1]._1.declaringType);
      return;
    }
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_12:
    sub_B7769C(myFsm, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3213/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  void *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_438B81C & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultExpComponent_endCloseDamageRecord__);
    this = (BattleResultExpComponent_o *)sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438B81C = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor
    || (this = (BattleResultExpComponent_o *)*((_QWORD *)monitor + 6)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        v4 = v2[19].monitor,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, v2, Method_BattleResultExpComponent_endCloseDamageRecord__, 0LL),
        !v4) )
  {
    sub_B7769C(this, method);
  }
  (*(void (__fastcall **)(void *, BattleWindowComponent_EndCall_o *, _QWORD))(*(_QWORD *)v4 + 504LL))(
    v4,
    v5,
    *(_QWORD *)(*(_QWORD *)v4 + 512LL));
}


void __fastcall BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  Il2CppClass *klass; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_438B819 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultExpComponent_endCloseEquipUp__);
    this = (BattleResultExpComponent_o *)sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438B819 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor
    || (this = (BattleResultExpComponent_o *)*((_QWORD *)monitor + 6)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        klass = v2[16].klass,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, v2, Method_BattleResultExpComponent_endCloseEquipUp__, 0LL),
        !klass) )
  {
    sub_B7769C(this, method);
  }
  (*((void (__fastcall **)(Il2CppClass *, BattleWindowComponent_EndCall_o *, _QWORD))klass->_1.image + 63))(
    klass,
    v5,
    *((_QWORD *)klass->_1.image + 64));
}


void __fastcall BattleResultExpComponent__closeKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  struct BattleResultKnockdownComponent_o *v5; // x0

  if ( (byte_438B81F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B81F = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v5 = this->fields.knockdownRecordWindow;
    if ( !v5 )
      sub_B7769C(0LL, v4);
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._12_Close.method)(
      v5,
      0LL,
      v5->klass->vtable._13_CompClose.methodPtr);
  }
}


void __fastcall BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _DWORD *monitor; // x21
  int v4; // w8
  unsigned int v5; // w20
  void *v6; // x8
  void *v7; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_438B816 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultExpComponent_endCloseMasterUp__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    this = (BattleResultExpComponent_o *)sub_B775C4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_438B816 = 1;
  }
  monitor = v2[31].monitor;
  if ( !monitor )
    goto LABEL_16;
  v4 = monitor[6];
  if ( v4 >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v4 <= v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = *(BattleResultExpComponent_o **)(*((_QWORD *)monitor + 2) + 8LL * (int)v5 + 32);
      if ( !this )
        break;
      this = (BattleResultExpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      monitor = v2[31].monitor;
      if ( !monitor )
        break;
      v4 = monitor[6];
      if ( (int)++v5 >= v4 )
        goto LABEL_12;
    }
LABEL_16:
    sub_B7769C(this, method);
  }
LABEL_12:
  v6 = v2[1].monitor;
  if ( !v6 )
    goto LABEL_16;
  this = (BattleResultExpComponent_o *)*((_QWORD *)v6 + 6);
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v7 = v2[8].monitor;
  v8 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v8, v2, Method_BattleResultExpComponent_endCloseMasterUp__, 0LL);
  if ( !v7 )
    goto LABEL_16;
  (*(void (__fastcall **)(void *, BattleWindowComponent_EndCall_o *, _QWORD))(*(_QWORD *)v7 + 504LL))(
    v7,
    v8,
    *(_QWORD *)(*(_QWORD *)v7 + 512LL));
}


void __fastcall BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_438B810 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438B810 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_438B81D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438B81D = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_438B81A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438B81A = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_438B817 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438B817 = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endMoveFigure(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Object_array *v12; // x21
  __int64 v13; // x0
  System_Int32_array **v14; // x1
  __int64 v15; // x2
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  __int64 v30; // x2
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  __int64 v73; // x2
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x22
  System_Collections_Hashtable_o *v81; // x0
  System_String_o *CommonSeName; // x20
  struct SePlayer_o *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  __int64 v90; // x0
  __int64 v91; // x0
  float time_exptotal; // [xsp+Ch] [xbp-34h] BYREF
  int v93; // [xsp+18h] [xbp-28h] BYREF
  int v94; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_438B811 & 1) == 0 )
  {
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&SeManager_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_19296/*"from"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21711/*"onupdate"*/);
    sub_B775C4(&StringLiteral_15328/*"UpdateValue"*/);
    sub_B775C4(&StringLiteral_23192/*"to"*/);
    sub_B775C4(&StringLiteral_19118/*"finishUpdateValue"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438B811 = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v4 = sub_B775DC(object___TypeInfo, 10LL);
    if ( !v4 )
      sub_B7769C(0LL, v5);
    v12 = (System_Object_array *)v4;
    v13 = StringLiteral_19296/*"from"*/;
    if ( StringLiteral_19296/*"from"*/ )
    {
      v13 = sub_B77684(StringLiteral_19296/*"from"*/, v12->obj.klass->_1.element_class);
      if ( !v13 )
        goto LABEL_62;
      v14 = (System_Int32_array **)StringLiteral_19296/*"from"*/;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v12->max_length )
      goto LABEL_61;
    v12->m_Items[0] = (Il2CppObject *)v14;
    sub_B77560((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
    v94 = 0;
    v13 = j_il2cpp_value_box_0(float_TypeInfo, &v94, v15);
    v22 = (System_Int32_array **)v13;
    if ( !v13 || (v13 = sub_B77684(v13, v12->obj.klass->_1.element_class)) != 0 )
    {
      if ( v12->max_length <= 1 )
        goto LABEL_61;
      v12->m_Items[1] = (Il2CppObject *)v22;
      sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
      v13 = StringLiteral_23192/*"to"*/;
      if ( StringLiteral_23192/*"to"*/ )
      {
        v13 = sub_B77684(StringLiteral_23192/*"to"*/, v12->obj.klass->_1.element_class);
        if ( !v13 )
          goto LABEL_62;
        v29 = (System_Int32_array **)StringLiteral_23192/*"to"*/;
      }
      else
      {
        v29 = 0LL;
      }
      if ( v12->max_length <= 2 )
        goto LABEL_61;
      v12->m_Items[2] = (Il2CppObject *)v29;
      sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
      v93 = 1065353216;
      v13 = j_il2cpp_value_box_0(float_TypeInfo, &v93, v30);
      v37 = (System_Int32_array **)v13;
      if ( !v13 || (v13 = sub_B77684(v13, v12->obj.klass->_1.element_class)) != 0 )
      {
        if ( v12->max_length <= 3 )
          goto LABEL_61;
        v12->m_Items[3] = (Il2CppObject *)v37;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
        v13 = StringLiteral_21711/*"onupdate"*/;
        if ( StringLiteral_21711/*"onupdate"*/ )
        {
          v13 = sub_B77684(StringLiteral_21711/*"onupdate"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_62;
          v44 = (System_Int32_array **)StringLiteral_21711/*"onupdate"*/;
        }
        else
        {
          v44 = 0LL;
        }
        if ( v12->max_length <= 4 )
          goto LABEL_61;
        v12->m_Items[4] = (Il2CppObject *)v44;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
        v13 = StringLiteral_15328/*"UpdateValue"*/;
        if ( StringLiteral_15328/*"UpdateValue"*/ )
        {
          v13 = sub_B77684(StringLiteral_15328/*"UpdateValue"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_62;
          v51 = (System_Int32_array **)StringLiteral_15328/*"UpdateValue"*/;
        }
        else
        {
          v51 = 0LL;
        }
        if ( v12->max_length <= 5 )
          goto LABEL_61;
        v12->m_Items[5] = (Il2CppObject *)v51;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[5], v51, v45, v46, v47, v48, v49, v50);
        v13 = StringLiteral_21702/*"oncomplete"*/;
        if ( StringLiteral_21702/*"oncomplete"*/ )
        {
          v13 = sub_B77684(StringLiteral_21702/*"oncomplete"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_62;
          v58 = (System_Int32_array **)StringLiteral_21702/*"oncomplete"*/;
        }
        else
        {
          v58 = 0LL;
        }
        if ( v12->max_length <= 6 )
          goto LABEL_61;
        v12->m_Items[6] = (Il2CppObject *)v58;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[6], v58, v52, v53, v54, v55, v56, v57);
        v13 = StringLiteral_19118/*"finishUpdateValue"*/;
        if ( StringLiteral_19118/*"finishUpdateValue"*/ )
        {
          v13 = sub_B77684(StringLiteral_19118/*"finishUpdateValue"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_62;
          v65 = (System_Int32_array **)StringLiteral_19118/*"finishUpdateValue"*/;
        }
        else
        {
          v65 = 0LL;
        }
        if ( v12->max_length <= 7 )
          goto LABEL_61;
        v12->m_Items[7] = (Il2CppObject *)v65;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[7], v65, v59, v60, v61, v62, v63, v64);
        v13 = StringLiteral_23154/*"time"*/;
        if ( StringLiteral_23154/*"time"*/ )
        {
          v13 = sub_B77684(StringLiteral_23154/*"time"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_62;
          v72 = (System_Int32_array **)StringLiteral_23154/*"time"*/;
        }
        else
        {
          v72 = 0LL;
        }
        if ( v12->max_length <= 8 )
          goto LABEL_61;
        v12->m_Items[8] = (Il2CppObject *)v72;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[8], v72, v66, v67, v68, v69, v70, v71);
        time_exptotal = this->fields.time_exptotal;
        v13 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal, v73);
        v80 = (System_Int32_array **)v13;
        if ( !v13 || (v13 = sub_B77684(v13, v12->obj.klass->_1.element_class)) != 0 )
        {
          if ( v12->max_length > 9 )
          {
            v12->m_Items[9] = (Il2CppObject *)v80;
            sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[9], v80, v74, v75, v76, v77, v78, v79);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v81 = iTween__Hash(v12, 0LL);
            iTween__ValueTo(gameObject, v81, 0LL);
            if ( this->fields.updateFlg )
            {
              if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SeManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              }
              CommonSeName = SeManager__GetCommonSeName(15, 0LL);
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SoundManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              }
              v83 = SoundManager__playSe(CommonSeName, 0LL);
              this->fields.MeterSePlayer = v83;
              sub_B77560(
                (BattleServantConfConponent_o *)&this->fields.MeterSePlayer,
                (System_Int32_array **)v83,
                v84,
                v85,
                v86,
                v87,
                v88,
                v89);
            }
            return;
          }
LABEL_61:
          v90 = sub_B776C8(v13);
          sub_B77668(v90, 0LL);
        }
      }
    }
LABEL_62:
    v91 = sub_B776BC(v13);
    sub_B77668(v91, 0LL);
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_B7769C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_B7769C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438B815 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15489/*"WAIT_OPEN"*/);
    byte_438B815 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15489/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438B812 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9466/*"NEXT"*/);
    byte_438B812 = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9466/*"NEXT"*/, 0LL);
}


bool __fastcall BattleResultExpComponent__setEquipExp(
        BattleResultExpComponent_o *this,
        int32_t equipId,
        int32_t getexp,
        int32_t nowexp,
        int32_t start_level,
        const MethodInfo *method)
{
  UILabel_o *equip_getexpLabel; // x23
  Il2CppObject *v11; // x0
  System_String_o *Instance; // x0
  __int64 v13; // x1
  EquipExpMaster_o *v14; // x25
  int32_t Level; // w22
  int32_t LevelMax; // w24
  System_String_o *v17; // x23
  UILabel_o *equip_atexpLabel; // x26
  const MethodInfo *v19; // x2
  int32_t exp; // w21
  float value; // s0
  float v22; // s8
  float v23; // s0
  int v25; // [xsp+Ch] [xbp-64h] BYREF
  EquipExpEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-54h] BYREF

  v27 = getexp;
  if ( (byte_438B80D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    sub_B775C4(&StringLiteral_11326/*"RESULT_EQUIP_MAXEXP"*/);
    sub_B775C4(&StringLiteral_708/*"+ {0}"*/);
    byte_438B80D = 1;
  }
  entity = 0LL;
  v25 = 0;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v11 = (Il2CppObject *)System_Int32__ToString_39547236((int32_t)&v27, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL);
  Instance = System_String__Format((System_String_o *)StringLiteral_708/*"+ {0}"*/, v11, 0LL);
  if ( !equip_getexpLabel )
    goto LABEL_28;
  UILabel__set_text(equip_getexpLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_28;
  v14 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowexp, start_level, 0LL);
  LevelMax = EquipExpMaster__getLevelMax(v14, equipId, 0LL);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v14, equipId, Level, 0LL);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_28;
  v17 = Instance;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0LL);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11326/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_28;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0LL);
    if ( !v17 )
      goto LABEL_28;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v25 = LODWORD(v17[1].klass) - nowexp;
    Instance = System_Int32__ToString_39547236((int32_t)&v25, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_28;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0LL);
  BattleResultExpComponent__setEquipLv(this, Level, v19);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v14, &entity, equipId, Level - 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_28;
    exp = entity->fields.exp;
  }
  else
  {
    exp = 0;
  }
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
LABEL_28:
    sub_B7769C(Instance, v13);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  v22 = value;
  if ( Level == LevelMax )
  {
    if ( !Instance )
      goto LABEL_28;
    v23 = 1.0;
  }
  else
  {
    if ( !v17 || !Instance )
      goto LABEL_28;
    v23 = 1.0 - (float)((float)(LODWORD(v17[1].klass) - nowexp) / (float)(LODWORD(v17[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v23, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_28;
  return v22 != UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
}


void __fastcall BattleResultExpComponent__setEquipLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  bool v8; // w0
  __int64 v9; // x2
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v11; // x1
  System_String_o *v12; // x0
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B809 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_2588/*"BATTLE_RESULTEXP_EQUIPLV"*/);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    byte_438B809 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2588/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v5 )
    goto LABEL_12;
  v7 = v5;
  v8 = System_String__Equals_44889276(v5, (System_String_o *)StringLiteral_2588/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v8 )
  {
    v13 = level;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v9);
    v12 = (System_String_o *)StringLiteral_24025/*"{0}"*/;
  }
  else
  {
    v14 = level;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9);
    v12 = v7;
  }
  v5 = System_String__Format(v12, v11, 0LL);
  if ( !equip_Lv )
LABEL_12:
    sub_B7769C(v5, v6);
  UILabel__set_text(equip_Lv, v5, 0LL);
}


bool __fastcall BattleResultExpComponent__setMasterExp(
        BattleResultExpComponent_o *this,
        int64_t getexp,
        int64_t nowexp,
        int32_t start_level,
        const MethodInfo *method)
{
  UILabel_o *mst_getexpLabel; // x22
  Il2CppObject *v9; // x0
  System_String_o *mst_slider; // x0
  __int64 v11; // x1
  float value; // s8
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v14; // x2
  bool v15; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x23
  UILabel_o *v17; // x24
  System_String_o *v18; // x22
  struct System_String_o *age; // x8
  float v20; // s0
  UILabel_o *v21; // x20
  int64_t v23; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int64_t v25; // [xsp+18h] [xbp-48h] BYREF

  v25 = getexp;
  if ( (byte_438B80C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_B775C4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    sub_B775C4(&StringLiteral_11326/*"RESULT_EQUIP_MAXEXP"*/);
    sub_B775C4(&StringLiteral_8864/*"MAX_USER_LV"*/);
    sub_B775C4(&StringLiteral_708/*"+ {0}"*/);
    byte_438B80C = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v9 = (Il2CppObject *)System_Int64__ToString_39550020((int64_t)&v25, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL);
  mst_slider = System_String__Format((System_String_o *)StringLiteral_708/*"+ {0}"*/, v9, 0LL);
  if ( !mst_getexpLabel )
    goto LABEL_32;
  UILabel__set_text(mst_getexpLabel, mst_slider, 0LL);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_32;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  mst_slider = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8864/*"MAX_USER_LV"*/, 0LL);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_32;
  if ( (_DWORD)mst_slider == start_level )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0LL);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11326/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_32;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_32;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
    v15 = 0;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    mst_slider = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mst_slider )
      goto LABEL_32;
    mst_slider = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)mst_slider,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserExpMaster___);
    if ( !mst_slider )
      goto LABEL_32;
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)mst_slider;
    start_level = UserExpMaster__getLevel((UserExpMaster_o *)mst_slider, nowexp, start_level, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v16,
                                      start_level,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_32;
    v17 = this->fields.mst_atexpLabel;
    v18 = mst_slider;
    v23 = (int64_t)mst_slider[1].klass - nowexp;
    mst_slider = System_Int64__ToString_39550020((int64_t)&v23, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL);
    if ( !v17 )
      goto LABEL_32;
    UILabel__set_text(v17, mst_slider, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      v16,
                                      &entity,
                                      start_level - 1,
                                      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    age = 0LL;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      age = entity->fields.age;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v20 = 1.0 - (double)((unsigned __int64)v18[1].klass - nowexp) / (double)((char *)v18[1].klass - (char *)age),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v20, 0LL),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0LL) )
    {
LABEL_32:
      sub_B7769C(mst_slider, v11);
    }
    v15 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, start_level, v14);
  if ( start_level == ConstantMaster__getValue((System_String_o *)StringLiteral_8864/*"MAX_USER_LV"*/, 0LL) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( mst_slider )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0LL);
      v21 = this->fields.mst_atexpLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11326/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
      if ( v21 )
      {
        UILabel__set_text(v21, mst_slider, 0LL);
        mst_slider = (System_String_o *)this->fields.mst_slider;
        if ( mst_slider )
        {
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
          return v15;
        }
      }
    }
    goto LABEL_32;
  }
  return v15;
}


void __fastcall BattleResultExpComponent__setMasterLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  bool v8; // w0
  __int64 v9; // x2
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v11; // x1
  System_String_o *v12; // x0
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B808 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    sub_B775C4(&StringLiteral_2593/*"BATTLE_RESULTEXP_MASTERLV"*/);
    byte_438B808 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2593/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v5 )
    goto LABEL_12;
  v7 = v5;
  v8 = System_String__Equals_44889276(v5, (System_String_o *)StringLiteral_2593/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v8 )
  {
    v13 = level;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v9);
    v12 = (System_String_o *)StringLiteral_24025/*"{0}"*/;
  }
  else
  {
    v14 = level;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9);
    v12 = v7;
  }
  v5 = System_String__Format(v12, v11, 0LL);
  if ( !mst_Lv )
LABEL_12:
    sub_B7769C(v5, v6);
  UILabel__set_text(mst_Lv, v5, 0LL);
}


void __fastcall BattleResultExpComponent__setResultData(
        BattleResultExpComponent_o *this,
        UserGameEntity_o *oldGame,
        UserEquipEntity_o *oldEquip,
        MasterLvRewardInfo_array *masterLvInfoArray,
        AssetData_o *resultAssetData,
        int64_t maxTurnDamage,
        int64_t oldRecord,
        QuestKnockdownResult_o *knockdownResult,
        const MethodInfo *method)
{
  __int64 v16; // x27
  __int64 Instance; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 *v32; // x26
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UserGameEntity_o *v39; // x1
  struct UserGameEntity_o **p_oldGame; // x28
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
  UnityEngine_Object_o *knockdownRecordWindow; // x24
  const MethodInfo *v54; // x2
  UserServantEntity_o *v55; // x0
  struct UserGameEntity_o **p_newGame; // x24
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UserServantEntity_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x4
  struct UserGameEntity_o *newGame; // x8
  UILabel_o *equip_nameLabel; // x25
  __int64 v73; // x21
  __int64 v74; // x28
  int32_t v75; // w0
  const MethodInfo *v76; // x5
  int32_t *p_lv; // x25
  const MethodInfo *v78; // x2
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  System_Func_float__int__int__o *v80; // x28
  const MethodInfo *v81; // x4
  int v82; // w27
  __int64 v83; // x8
  BattleResultExpComponent_o *v84; // x28
  signed __int64 v85; // x19
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v88; // x8
  UserEquipEntity_o *v89; // x21
  int v90; // w8
  __int64 v91; // x26
  unsigned int v92; // w20
  struct UISprite_array *v93; // x8
  struct UISprite_array *v94; // x8
  struct UISprite_array *v95; // x8
  struct UISprite_array *v96; // x8
  const MethodInfo *v97; // x4
  struct UISprite_array *v98; // x8
  const MethodInfo *v99; // x4
  struct UISprite_array *v100; // x8
  int v101; // w8
  const MethodInfo *v102; // x2
  UILabel_o *equip_oldlevelLabel; // x22
  System_String_o *v104; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x21
  System_String_o *v107; // x1
  System_Text_StringBuilder_o *v108; // x22
  __int64 v109; // x23
  System_Int32_array *SkillIdList; // x24
  System_Int32_array *SkillLvList; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v112; // x27
  int v113; // w20
  unsigned __int64 v114; // x25
  int32_t *v115; // x19
  System_String_o *v116; // x28
  __int64 v117; // x2
  Il2CppObject *v118; // x21
  Il2CppObject *v119; // x0
  System_String_o *v120; // x21
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x23
  UILabel_o *equip_confLabel; // x21
  int64_t bestTurnDamage; // x11
  int64_t oldRecordDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v127; // x21
  bool v128; // w1
  UILabel_o *damage_battleLabel; // x21
  __int64 v130; // x0
  UserEquipEntity_o *v131; // [xsp+0h] [xbp-A0h]
  UserEquipEntity_o **p_newEquip; // [xsp+8h] [xbp-98h]
  __int64 v133; // [xsp+18h] [xbp-88h]
  int32_t *v134; // [xsp+20h] [xbp-80h]
  int32_t v136; // [xsp+3Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438B80A & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserGameMaster___);
    sub_B775C4(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Func_float__int__int__Invoke__);
    sub_B775C4(&Method_System_Func_float__int__int___ctor__);
    sub_B775C4(&System_Func_float__int__int__TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__);
    sub_B775C4(&BattleResultExpComponent___c__DisplayClass61_0_TypeInfo);
    sub_B775C4(&StringLiteral_17160/*"bit_reward_shine01"*/);
    sub_B775C4(&StringLiteral_11325/*"RESULT_EQEXP_UPSKILLLV"*/);
    sub_B775C4(&StringLiteral_11324/*"RESULT_EQEXP_GETSKILL"*/);
    sub_B775C4(&StringLiteral_17161/*"bit_reward_shine02"*/);
    sub_B775C4(&StringLiteral_349/*"#,#"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B80A = 1;
  }
  entity = 0LL;
  v16 = sub_B77694(BattleResultExpComponent___c__DisplayClass61_0_TypeInfo);
  BattleResultExpComponent___c__DisplayClass61_0___ctor((BattleResultExpComponent___c__DisplayClass61_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_139;
  *(_QWORD *)(v16 + 16) = oldGame;
  v25 = v16 + 16;
  sub_B77560((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)oldGame, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v16 + 32) = masterLvInfoArray;
  v32 = (__int64 *)(v16 + 32);
  sub_B77560(
    (BattleServantConfConponent_o *)(v16 + 32),
    (System_Int32_array **)masterLvInfoArray,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = *(struct UserGameEntity_o **)(v16 + 16);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = v39;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.oldGame,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.oldEquip = oldEquip;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.oldEquip,
    (System_Int32_array **)oldEquip,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.bestTurnDamage = maxTurnDamage;
  this->fields.oldRecordDamage = oldRecord;
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    Instance = (__int64)this->fields.knockdownRecordWindow;
    if ( !Instance )
      goto LABEL_139;
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Instance, knockdownResult, v54);
  }
  this->fields.updateFlg = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_139;
  if ( !Instance )
    goto LABEL_139;
  v55 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_21FBABC *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v55;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.newGame,
    (System_Int32_array **)v55,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !oldEquip )
    goto LABEL_139;
  if ( !Instance )
    goto LABEL_139;
  v63 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          oldEquip->fields.id,
          (const MethodInfo_21FBABC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  this->fields.newEquip = (struct UserEquipEntity_o *)v63;
  p_newEquip = &this->fields.newEquip;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.newEquip,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  newGame = this->fields.newGame;
  if ( !newGame || !*(_QWORD *)v25 )
    goto LABEL_139;
  BattleResultExpComponent__setMasterExp(
    this,
    newGame->fields.exp - *(_QWORD *)(*(_QWORD *)v25 + 88LL),
    *(_QWORD *)(*(_QWORD *)v25 + 88LL),
    *(_DWORD *)(*(_QWORD *)v25 + 80LL),
    v70);
  equip_nameLabel = this->fields.equip_nameLabel;
  v74 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v73 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v138.fields.currentCryptoKey = v74;
  *(_QWORD *)&v138.fields.fakeValue = v73;
  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v138, 0LL);
  Instance = (__int64)EquipMaster__getEquipName(v75, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Instance, 0LL),
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(oldEquip->fields.equipId, 0LL),
        !*p_newEquip)
    || (p_lv = &oldEquip->fields.lv,
        Instance = BattleResultExpComponent__setEquipExp(
                     this,
                     Instance,
                     (*p_newEquip)->fields.exp - oldEquip->fields.exp,
                     oldEquip->fields.exp,
                     oldEquip->fields.lv,
                     v76),
        !*(_QWORD *)v25)
    || (BattleResultExpComponent__setMasterLv(this, *(_DWORD *)(*(_QWORD *)v25 + 80LL), v78),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_139:
    sub_B7769C(Instance, v18);
  }
  if ( !upParamList->max_length )
    goto LABEL_140;
  if ( !*(_QWORD *)v25 )
    goto LABEL_139;
  if ( !*p_newGame )
    goto LABEL_139;
  Instance = (__int64)upParamList->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Instance,
    *(_DWORD *)(*(_QWORD *)v25 + 80LL),
    (*p_newGame)->fields.lv,
    0LL);
  v80 = (System_Func_float__int__int__o *)sub_B77694(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    v80,
    (Il2CppObject *)v16,
    Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__,
    (const MethodInfo_29F5480 *)Method_System_Func_float__int__int___ctor__);
  if ( !v80 )
    goto LABEL_139;
  Instance = System_Func_float__int__int___Invoke(
               v80,
               -186.0,
               35,
               (const MethodInfo_29F5494 *)Method_System_Func_float__int__int__Invoke__);
  v82 = Instance;
  if ( (int)Instance < 6 )
  {
    v83 = *v32;
    if ( *v32 )
    {
      v84 = this;
      v85 = 0LL;
      while ( v85 < *(int *)(v83 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_139;
        max_length = lvUpRewardSpArray->max_length;
        if ( v85 < (int)max_length )
        {
          if ( v85 >= max_length )
            goto LABEL_140;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v85],
            (System_String_o *)StringLiteral_17160/*"bit_reward_shine01"*/,
            v81);
          v83 = *v32;
        }
        ++v85;
        if ( !v83 )
          goto LABEL_139;
      }
      v101 = 35;
    }
    else
    {
      v84 = this;
      v101 = 35;
    }
    goto LABEL_70;
  }
  v88 = this->fields.upParamList;
  if ( !v88 )
    goto LABEL_139;
  if ( !v88->max_length )
    goto LABEL_140;
  Instance = (__int64)v88->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_139;
  v89 = oldEquip;
  Instance = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Instance )
    goto LABEL_139;
  v90 = *(_DWORD *)(Instance + 24);
  v91 = Instance;
  if ( v90 >= 1 )
  {
    v92 = 0;
    while ( v92 < v90 )
    {
      Instance = *(_QWORD *)(v91 + 8LL * (int)v92 + 32);
      if ( !Instance )
        goto LABEL_139;
      UILabel__set_fontSize((UILabel_o *)Instance, *(_DWORD *)(Instance + 416) - 2, 0LL);
      v90 = *(_DWORD *)(v91 + 24);
      if ( (int)++v92 >= v90 )
        goto LABEL_51;
    }
    goto LABEL_140;
  }
LABEL_51:
  v93 = this->fields.lvUpRewardSpArray;
  if ( !v93 )
    goto LABEL_139;
  if ( !v93->max_length )
    goto LABEL_140;
  Instance = (__int64)v93->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 160) - 5, 0LL);
  v94 = this->fields.lvUpRewardSpArray;
  if ( !v94 )
    goto LABEL_139;
  if ( !v94->max_length )
    goto LABEL_140;
  Instance = (__int64)v94->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  oldEquip = v89;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 164) - 5, 0LL);
  v95 = this->fields.lvUpRewardSpArray;
  if ( !v95 )
    goto LABEL_139;
  if ( v95->max_length <= 1 )
    goto LABEL_140;
  Instance = (__int64)v95->m_Items[1];
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 160) - 5, 0LL);
  v96 = this->fields.lvUpRewardSpArray;
  if ( !v96 )
    goto LABEL_139;
  if ( v96->max_length <= 1 )
    goto LABEL_140;
  Instance = (__int64)v96->m_Items[1];
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 164) - 5, 0LL);
  Instance = System_Func_float__int__int___Invoke(
               v80,
               -186.0,
               31,
               (const MethodInfo_29F5494 *)Method_System_Func_float__int__int__Invoke__);
  v84 = this;
  v98 = this->fields.lvUpRewardSpArray;
  if ( !v98 )
    goto LABEL_139;
  if ( !v98->max_length )
    goto LABEL_140;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v98->m_Items[0],
    (System_String_o *)StringLiteral_17161/*"bit_reward_shine02"*/,
    v97);
  v100 = this->fields.lvUpRewardSpArray;
  if ( !v100 )
    goto LABEL_139;
  if ( v100->max_length <= 1 )
  {
LABEL_140:
    v130 = sub_B776C8(Instance);
    sub_B77668(v130, 0LL);
  }
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v100->m_Items[1],
    (System_String_o *)StringLiteral_17161/*"bit_reward_shine02"*/,
    v99);
  v101 = 31;
LABEL_70:
  Instance = (__int64)v84->fields.masterLevelwindowSprite;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_height((UIWidget_o *)Instance, v101 * v82 + 134, 0LL);
  if ( !*(_QWORD *)v25 )
    goto LABEL_139;
  if ( !*p_newGame )
    goto LABEL_139;
  v84->fields.updateFlg |= *(_QWORD *)(*(_QWORD *)v25 + 88LL) != (*p_newGame)->fields.exp;
  BattleResultExpComponent__setEquipLv(v84, *p_lv, v102);
  equip_oldlevelLabel = v84->fields.equip_oldlevelLabel;
  Instance = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_139;
  v104 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v104, 0LL);
  newEquip = v84->fields.newEquip;
  if ( !newEquip )
    goto LABEL_139;
  equip_newlevelLabel = v84->fields.equip_newlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_139;
  v107 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v107, 0LL);
  v108 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v108, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillIdList(oldEquip, 0LL);
  if ( !*p_newEquip )
    goto LABEL_139;
  v109 = Instance;
  SkillIdList = UserEquipEntity__getSkillIdList(*p_newEquip, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillLvList(oldEquip, 0LL);
  v133 = Instance;
  if ( !*p_newEquip )
    goto LABEL_139;
  SkillLvList = UserEquipEntity__getSkillLvList(*p_newEquip, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v109 )
    goto LABEL_139;
  v131 = oldEquip;
  if ( *(int *)(v109 + 24) >= 1 )
  {
    v112 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v113 = 0;
    v134 = &SkillLvList->m_Items[1];
    v114 = 0LL;
    v115 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      entity = 0LL;
      if ( !SkillIdList )
        goto LABEL_139;
      if ( v114 >= SkillIdList->max_length )
        goto LABEL_140;
      if ( !v112 )
        goto LABEL_139;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v112,
                   &entity,
                   v115[v114],
                   (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( entity && (Instance & 1) != 0 )
      {
        if ( v114 >= *(unsigned int *)(v109 + 24) || v114 >= SkillIdList->max_length )
          goto LABEL_140;
        if ( *(_DWORD *)(v109 + 32 + 4 * v114) != v115[v114] )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11324/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !entity )
            goto LABEL_139;
          v120 = (System_String_o *)Instance;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          Instance = (__int64)System_String__Format(v120, Name, 0LL);
          if ( !v108 )
            goto LABEL_139;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_42952760(v108, (System_String_o *)Instance, 0LL);
LABEL_114:
          v113 += 3;
          goto LABEL_115;
        }
        if ( !v133 )
          goto LABEL_139;
        if ( v114 >= *(unsigned int *)(v133 + 24) )
          goto LABEL_140;
        if ( !SkillLvList )
          goto LABEL_139;
        if ( v114 >= SkillLvList->max_length )
          goto LABEL_140;
        if ( *(_DWORD *)(v133 + 32 + 4 * v114) != v134[v114] )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11325/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !entity )
            goto LABEL_139;
          v116 = (System_String_o *)Instance;
          Instance = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( v114 >= SkillLvList->max_length )
            goto LABEL_140;
          v118 = (Il2CppObject *)Instance;
          v136 = v134[v114];
          v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v136, v117);
          Instance = (__int64)System_String__Format_44897472(v116, v118, v119, 0LL);
          if ( !v108 )
            goto LABEL_139;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_42952760(v108, (System_String_o *)Instance, 0LL);
          v84 = this;
          goto LABEL_114;
        }
      }
LABEL_115:
      if ( (__int64)++v114 >= *(int *)(v109 + 24) )
        goto LABEL_118;
    }
  }
  v113 = 0;
LABEL_118:
  eqConfRoot = v84->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_139;
  LODWORD(v139.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(v84->fields.eqConfRoot, 0LL);
  v139.fields.y = (float)v113 * 10.0;
  v139.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v139, 0LL);
  Instance = (__int64)v84->fields.eqLevelwindowSprite;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_height((UIWidget_o *)Instance, 22 * v113 + 134, 0LL);
  if ( !v108 )
    goto LABEL_139;
  equip_confLabel = v84->fields.equip_confLabel;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v108->klass->vtable._3_ToString.method)(
               v108,
               v108->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_139;
  UILabel__set_text(equip_confLabel, (System_String_o *)Instance, 0LL);
  if ( !*p_newEquip )
    goto LABEL_139;
  bestTurnDamage = v84->fields.bestTurnDamage;
  oldRecordDamage = v84->fields.oldRecordDamage;
  v84->fields.updateFlg |= v131->fields.exp != (*p_newEquip)->fields.exp;
  damage_recordLabel = v84->fields.damage_recordLabel;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Instance = (__int64)System_Int64__ToString_39550020(
                          (int64_t)&v84->fields.oldRecordDamage,
                          (System_String_o *)StringLiteral_349/*"#,#"*/,
                          0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
      damage_battleLabel = v84->fields.damage_battleLabel;
      Instance = (__int64)System_Int64__ToString_39550020(
                            (int64_t)&v84->fields.bestTurnDamage,
                            (System_String_o *)StringLiteral_349/*"#,#"*/,
                            0LL);
      if ( damage_battleLabel )
      {
        UILabel__set_text(damage_battleLabel, (System_String_o *)Instance, 0LL);
        Instance = (__int64)v84->fields.damage_recordLabel;
        if ( Instance )
        {
          UIWidget__set_color((UIWidget_o *)Instance, v84->fields.record_intactColor, 0LL);
          Instance = (__int64)v84->fields.damage_battleLabel;
          if ( Instance )
          {
            UIWidget__set_color((UIWidget_o *)Instance, v84->fields.damage_intactColor, 0LL);
            Instance = (__int64)v84->fields.damage_recordRenewalSp;
            if ( Instance )
            {
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( Instance )
              {
                v128 = 0;
                goto LABEL_138;
              }
            }
          }
        }
      }
    }
    goto LABEL_139;
  }
  Instance = (__int64)System_Int64__ToString_39550020(
                        (int64_t)&v84->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_349/*"#,#"*/,
                        0LL);
  if ( !damage_recordLabel )
    goto LABEL_139;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
  v127 = v84->fields.damage_battleLabel;
  Instance = (__int64)System_Int64__ToString_39550020(
                        (int64_t)&v84->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_349/*"#,#"*/,
                        0LL);
  if ( !v127 )
    goto LABEL_139;
  UILabel__set_text(v127, (System_String_o *)Instance, 0LL);
  Instance = (__int64)v84->fields.damage_recordLabel;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_color((UIWidget_o *)Instance, v84->fields.record_renewalColor, 0LL);
  Instance = (__int64)v84->fields.damage_battleLabel;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_color((UIWidget_o *)Instance, v84->fields.damage_renewalColor, 0LL);
  Instance = (__int64)v84->fields.damage_recordRenewalSp;
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_139;
  v128 = 1;
LABEL_138:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v128, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__updateValueActual(
        BattleResultExpComponent_o *this,
        float val,
        bool isFinish,
        const MethodInfo *method)
{
  BattleResultExpComponent_o *v6; // x19
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  double v9; // d0
  const MethodInfo *v10; // x4
  struct UserGameEntity_o *v11; // x8
  BattleResultExpComponent_o *exp; // x2
  struct UserGameEntity_o *v13; // x9
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  double v16; // d0
  struct UserEquipEntity_o *v17; // x8
  int32_t v18; // w21
  __int64 v19; // x20
  __int64 v20; // x22
  const MethodInfo *v21; // x5
  struct UserEquipEntity_o *v22; // x8
  struct UserEquipEntity_o *v23; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v6 = this;
  if ( (byte_438B813 & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438B813 = 1;
  }
  oldGame = v6->fields.oldGame;
  if ( !oldGame )
    goto LABEL_22;
  newGame = v6->fields.newGame;
  if ( !newGame )
    goto LABEL_22;
  v9 = BattleUtility__LerpDouble((double)oldGame->fields.exp, (double)newGame->fields.exp, val, 0LL);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToLong(v9, 0LL);
  v11 = v6->fields.newGame;
  if ( isFinish )
  {
    if ( !v11 )
      goto LABEL_22;
    exp = (BattleResultExpComponent_o *)v11->fields.exp;
  }
  else
  {
    exp = this;
    if ( !v11 )
      goto LABEL_22;
  }
  v13 = v6->fields.oldGame;
  if ( !v13 )
    goto LABEL_22;
  this = (BattleResultExpComponent_o *)BattleResultExpComponent__setMasterExp(
                                         v6,
                                         v11->fields.exp - v13->fields.exp,
                                         (int64_t)exp,
                                         v13->fields.lv,
                                         v10);
  oldEquip = v6->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_22;
  newEquip = v6->fields.newEquip;
  if ( !newEquip )
    goto LABEL_22;
  v16 = BattleUtility__LerpDouble((double)oldEquip->fields.exp, (double)newEquip->fields.exp, val, 0LL);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_24289972(v16, 0LL);
  v17 = v6->fields.newEquip;
  if ( isFinish )
  {
    if ( !v17 )
      goto LABEL_22;
    v18 = v17->fields.exp;
  }
  else
  {
    v18 = (int)this;
    if ( !v17 )
      goto LABEL_22;
  }
  v20 = *(_QWORD *)&v17->fields.equipId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v17->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v20;
  *(_QWORD *)&v24.fields.fakeValue = v19;
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v24, 0LL);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0LL )
LABEL_22:
    sub_B7769C(this, isFinish);
  BattleResultExpComponent__setEquipExp(v6, (int32_t)this, v22->fields.exp - v23->fields.exp, v18, v23->fields.lv, v21);
}


void __fastcall BattleResultExpComponent___c__DisplayClass61_0___ctor(
        BattleResultExpComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleResultExpComponent___c__DisplayClass61_0___setResultData_b__0(
        BattleResultExpComponent___c__DisplayClass61_0_o *this,
        float height,
        int32_t baseHeight,
        const MethodInfo *method)
{
  BattleResultExpComponent___c__DisplayClass61_0_o *v5; // x20
  struct UserGameEntity_o *oldGame; // x8
  struct BattleResultExpComponent_o *_4__this; // x10
  struct UserGameEntity_o *newGame; // x9
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x10
  int32_t actMax; // w19
  int32_t v11; // w21
  struct BattleResultExpComponent_o *v12; // x8
  struct BattleResultMasterUpStatusComponent_array *v13; // x8
  struct BattleResultExpComponent_o *v14; // x8
  struct BattleResultMasterUpStatusComponent_array *v15; // x9
  struct UserGameEntity_o *v16; // x10
  struct UserGameEntity_o *v17; // x8
  int v18; // w22
  struct UserGameEntity_o *v19; // x8
  struct BattleResultExpComponent_o *v20; // x10
  struct UserGameEntity_o *v21; // x9
  struct BattleResultMasterUpStatusComponent_array *v22; // x10
  int32_t costMax; // w19
  int32_t v24; // w21
  struct BattleResultExpComponent_o *v25; // x8
  struct BattleResultMasterUpStatusComponent_array *v26; // x8
  struct BattleResultExpComponent_o *v27; // x8
  struct BattleResultMasterUpStatusComponent_array *v28; // x9
  struct UserGameEntity_o *v29; // x10
  struct UserGameEntity_o *v30; // x8
  struct BattleResultExpComponent_o *v31; // x8
  struct BattleResultMasterUpStatusComponent_array *v32; // x8
  struct UserGameEntity_o *v33; // x8
  struct BattleResultExpComponent_o *v34; // x10
  struct UserGameEntity_o *v35; // x9
  struct BattleResultMasterUpStatusComponent_array *v36; // x10
  int32_t friendKeep; // w19
  int32_t v38; // w21
  struct BattleResultExpComponent_o *v39; // x8
  struct BattleResultMasterUpStatusComponent_array *v40; // x8
  struct BattleResultExpComponent_o *v41; // x8
  struct BattleResultMasterUpStatusComponent_array *v42; // x9
  struct UserGameEntity_o *v43; // x10
  struct UserGameEntity_o *v44; // x8
  struct BattleResultExpComponent_o *v45; // x8
  struct BattleResultMasterUpStatusComponent_array *v46; // x8
  struct BattleResultExpComponent_o *v47; // x8
  struct BattleResultMasterUpStatusComponent_array *v48; // x8
  EventMaster_o *v49; // x21
  struct BattleResultExpComponent_o *v50; // x8
  struct BattleResultMasterUpStatusComponent_array *v51; // x8
  BattleResultMasterUpStatusComponent_o *v52; // x8
  __int64 *v53; // x9
  struct BattleResultExpComponent_o *v54; // x8
  struct BattleResultMasterUpStatusComponent_array *v55; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  __int64 v57; // x8
  il2cpp_array_size_t v58; // w24
  int v59; // w25
  struct BattleResultExpComponent_o *v60; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v62; // x8
  struct UISprite_array *v63; // x8
  struct MasterLvRewardInfo_array *v64; // x9
  UISprite_o *v65; // x22
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v67; // x8
  __int64 v68; // x2
  struct BattleResultExpComponent_o *v69; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v71; // x9
  MasterLvRewardInfo_o *v72; // x9
  Il2CppObject *v73; // x23
  UILabel_o *v74; // x22
  Il2CppObject *v75; // x0
  struct MasterLvRewardInfo_array *v76; // x8
  __int64 v77; // x0
  int v79; // [xsp+4h] [xbp-7Ch]
  int32_t num; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4388E08 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_2591/*"BATTLE_RESULTEXP_FULLAP"*/);
    sub_B775C4(&StringLiteral_2590/*"BATTLE_RESULTEXP_FRIENDMAX"*/);
    sub_B775C4(&StringLiteral_2586/*"BATTLE_RESULTEXP_APMAX"*/);
    sub_B775C4(&StringLiteral_2592/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/);
    sub_B775C4(&StringLiteral_2587/*"BATTLE_RESULTEXP_COSTMAX"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)sub_B775C4(&StringLiteral_24064/*"{0} {1}個"*/);
    byte_4388E08 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  oldGame = v5->fields.oldGame;
  if ( !oldGame )
    goto LABEL_130;
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_130;
  newGame = _4__this->fields.newGame;
  if ( !newGame )
    goto LABEL_130;
  upParamList = _4__this->fields.upParamList;
  if ( !upParamList )
    goto LABEL_130;
  if ( upParamList->max_length <= 1 )
    goto LABEL_131;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)upParamList->m_Items[1];
  if ( !this )
    goto LABEL_130;
  actMax = oldGame->fields.actMax;
  v11 = newGame->fields.actMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  if ( actMax >= v11 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v18 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v12 = v5->fields.__4__this;
    if ( !v12 )
      goto LABEL_130;
    v13 = v12->fields.upParamList;
    if ( !v13 )
      goto LABEL_130;
    if ( v13->max_length <= 1 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v13->m_Items[1];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2586/*"BATTLE_RESULTEXP_APMAX"*/,
      0LL);
    v14 = v5->fields.__4__this;
    if ( !v14 )
      goto LABEL_130;
    v15 = v14->fields.upParamList;
    if ( !v15 )
      goto LABEL_130;
    if ( v15->max_length <= 1 )
      goto LABEL_131;
    v16 = v5->fields.oldGame;
    if ( !v16 )
      goto LABEL_130;
    v17 = v14->fields.newGame;
    if ( !v17 )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v15->m_Items[1];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v16->fields.actMax,
      v17->fields.actMax,
      0LL);
    v18 = 1;
  }
  v19 = v5->fields.oldGame;
  if ( !v19 )
    goto LABEL_130;
  v20 = v5->fields.__4__this;
  if ( !v20 )
    goto LABEL_130;
  v21 = v20->fields.newGame;
  if ( !v21 )
    goto LABEL_130;
  v22 = v20->fields.upParamList;
  if ( !v22 )
    goto LABEL_130;
  if ( v22->max_length <= 2 )
    goto LABEL_131;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v22->m_Items[2];
  if ( !this )
    goto LABEL_130;
  costMax = v19->fields.costMax;
  v24 = v21->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  if ( costMax >= v24 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v25 = v5->fields.__4__this;
    if ( !v25 )
      goto LABEL_130;
    v26 = v25->fields.upParamList;
    if ( !v26 )
      goto LABEL_130;
    if ( v26->max_length <= 2 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v26->m_Items[2];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2587/*"BATTLE_RESULTEXP_COSTMAX"*/,
      0LL);
    v27 = v5->fields.__4__this;
    if ( !v27 )
      goto LABEL_130;
    v28 = v27->fields.upParamList;
    if ( !v28 )
      goto LABEL_130;
    if ( v28->max_length <= 2 )
      goto LABEL_131;
    v29 = v5->fields.oldGame;
    if ( !v29 )
      goto LABEL_130;
    v30 = v27->fields.newGame;
    if ( !v30 )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v28->m_Items[2];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v29->fields.costMax,
      v30->fields.costMax,
      0LL);
    v31 = v5->fields.__4__this;
    if ( !v31 )
      goto LABEL_130;
    v32 = v31->fields.upParamList;
    if ( !v32 )
      goto LABEL_130;
    if ( v32->max_length <= 2 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v32->m_Items[2];
    if ( !this )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_130;
    v84.fields.z = 0.0;
    v84.fields.y = height - (float)(v18 * baseHeight);
    v84.fields.x = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v84, 0LL);
    ++v18;
  }
  v33 = v5->fields.oldGame;
  if ( !v33 )
    goto LABEL_130;
  v34 = v5->fields.__4__this;
  if ( !v34 )
    goto LABEL_130;
  v35 = v34->fields.newGame;
  if ( !v35 )
    goto LABEL_130;
  v36 = v34->fields.upParamList;
  if ( !v36 )
    goto LABEL_130;
  if ( v36->max_length <= 3 )
    goto LABEL_131;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v36->m_Items[3];
  if ( !this )
    goto LABEL_130;
  friendKeep = v33->fields.friendKeep;
  v38 = v35->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  if ( friendKeep >= v38 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v39 = v5->fields.__4__this;
    if ( !v39 )
      goto LABEL_130;
    v40 = v39->fields.upParamList;
    if ( !v40 )
      goto LABEL_130;
    if ( v40->max_length <= 3 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v40->m_Items[3];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2590/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      0LL);
    v41 = v5->fields.__4__this;
    if ( !v41 )
      goto LABEL_130;
    v42 = v41->fields.upParamList;
    if ( !v42 )
      goto LABEL_130;
    if ( v42->max_length <= 3 )
      goto LABEL_131;
    v43 = v5->fields.oldGame;
    if ( !v43 )
      goto LABEL_130;
    v44 = v41->fields.newGame;
    if ( !v44 )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v42->m_Items[3];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v43->fields.friendKeep,
      v44->fields.friendKeep,
      0LL);
    v45 = v5->fields.__4__this;
    if ( !v45 )
      goto LABEL_130;
    v46 = v45->fields.upParamList;
    if ( !v46 )
      goto LABEL_130;
    if ( v46->max_length <= 3 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v46->m_Items[3];
    if ( !this )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_130;
    v85.fields.z = 0.0;
    v85.fields.y = height - (float)(v18 * baseHeight);
    v85.fields.x = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v85, 0LL);
    ++v18;
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  v47 = v5->fields.__4__this;
  if ( !v47 )
    goto LABEL_130;
  v48 = v47->fields.upParamList;
  if ( !v48 )
    goto LABEL_130;
  if ( v48->max_length <= 4 )
    goto LABEL_131;
  v49 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v48->m_Items[4];
  if ( !this )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v49 )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)EventMaster__IsBPEnable(v49, 0LL);
  v50 = v5->fields.__4__this;
  if ( !v50 )
    goto LABEL_130;
  v51 = v50->fields.upParamList;
  if ( !v51 )
    goto LABEL_130;
  if ( v51->max_length <= 4 )
    goto LABEL_131;
  v52 = v51->m_Items[4];
  if ( !v52
    || (((unsigned __int8)this & 1) == 0 ? (v53 = &StringLiteral_2591/*"BATTLE_RESULTEXP_FULLAP"*/) : (v53 = &StringLiteral_2592/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/),
        (BattleResultMasterUpStatusComponent__setTitle(v52, (System_String_o *)*v53, 0LL),
         (v54 = v5->fields.__4__this) == 0LL)
     || (v55 = v54->fields.upParamList) == 0LL) )
  {
LABEL_130:
    sub_B7769C(this, *(_QWORD *)&baseHeight);
  }
  if ( v55->max_length <= 4 )
  {
LABEL_131:
    v77 = sub_B776C8(this);
    sub_B77668(v77, 0LL);
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v55->m_Items[4];
  if ( !this )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  v86.fields.z = 0.0;
  v86.fields.y = height - (float)(v18 * baseHeight);
  v86.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v86, 0LL);
  masterLvInfoArray = v5->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)(unsigned int)(v18 + 1);
  if ( masterLvInfoArray )
  {
    v57 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v57 <= 2 && (int)v57 >= 1 )
    {
      v79 = v18 + 1;
      v58 = 0;
      v59 = baseHeight * (_DWORD)this;
      do
      {
        v60 = v5->fields.__4__this;
        if ( !v60 )
          goto LABEL_130;
        lvUpRewardSpArray = v60->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_130;
        if ( v58 >= lvUpRewardSpArray->max_length )
          goto LABEL_131;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)lvUpRewardSpArray->m_Items[v58];
        if ( !this )
          goto LABEL_130;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_130;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Transform__get_parent(
                                                                     (UnityEngine_Transform_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_130;
        v87.fields.y = height - (float)v59;
        v87.fields.z = 0.0;
        v87.fields.x = -30.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v87, 0LL);
        v62 = v5->fields.__4__this;
        if ( !v62 )
          goto LABEL_130;
        v63 = v62->fields.lvUpRewardSpArray;
        if ( !v63 )
          goto LABEL_130;
        if ( v58 >= v63->max_length )
          goto LABEL_131;
        v64 = v5->fields.masterLvInfoArray;
        if ( !v64 )
          goto LABEL_130;
        if ( v58 >= v64->max_length )
          goto LABEL_131;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v64->m_Items[v58];
        if ( !this )
          goto LABEL_130;
        v65 = v63->m_Items[v58];
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_130;
        IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)AtlasManager__SetItem(v65, IconImageId, 0LL);
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        countText = (System_String_o *)StringLiteral_1/*""*/;
        v67 = v5->fields.masterLvInfoArray;
        if ( !v67 )
          goto LABEL_130;
        if ( v58 >= v67->max_length )
          goto LABEL_131;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v67->m_Items[v58];
        if ( !this )
          goto LABEL_130;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_130;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0LL);
        v69 = v5->fields.__4__this;
        if ( !v69 )
          goto LABEL_130;
        lvUpRewardLabelArray = v69->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_130;
        if ( v58 >= lvUpRewardLabelArray->max_length )
          goto LABEL_131;
        v71 = v5->fields.masterLvInfoArray;
        if ( !v71 )
          goto LABEL_130;
        if ( v58 >= v71->max_length )
          goto LABEL_131;
        v72 = v71->m_Items[v58];
        if ( !v72 )
          goto LABEL_130;
        v73 = (Il2CppObject *)nameText;
        v74 = lvUpRewardLabelArray->m_Items[v58];
        num = v72->fields.num;
        v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v68);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)System_String__Format_44897472(
                                                                     (System_String_o *)StringLiteral_24064/*"{0} {1}個"*/,
                                                                     v73,
                                                                     v75,
                                                                     0LL);
        if ( !v74 )
          goto LABEL_130;
        UILabel__set_text(v74, (System_String_o *)this, 0LL);
        v76 = v5->fields.masterLvInfoArray;
        if ( !v76 )
          goto LABEL_130;
        ++v58;
        v59 += baseHeight;
      }
      while ( (signed int)v58 < (signed int)v76->max_length );
      LODWORD(this) = v79 + v58;
    }
  }
  return (int)this;
}