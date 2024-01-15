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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_40FA3A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultExpComponent_endClose__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v6);
    byte_40FA3A8 = 1;
  }
  window = this->fields.window;
  v8 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3, v4);
  BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_B170D4();
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v8,
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x22
  int v20; // s0
  UnityEngine_Transform_o *v23; // x22
  int v24; // s0
  changeVColor_array *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int max_length; // w8
  changeVColor_array *v31; // x21
  unsigned int v32; // w22
  UIWidget_o *v33; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *effectUIList; // x0

  if ( (byte_40FA3A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FA3A4 = 1;
  }
  if ( !data )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               effectName,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v14 )
    goto LABEL_20;
  v15 = v14;
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !targetIcon )
    goto LABEL_20;
  v17 = transform;
  v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0LL);
  if ( !v17 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v17, v18, 0LL);
  v19 = UnityEngine_GameObject__get_transform(v15, 0LL);
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v19 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
  v23 = UnityEngine_GameObject__get_transform(v15, 0LL);
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL);
  if ( !v23 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
  v27 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
          v15,
          (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !v27 )
    goto LABEL_20;
  max_length = v27->max_length;
  v31 = v27;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
      {
        sub_B17100(v27, v28, v29);
        sub_B170A0();
      }
      v33 = (UIWidget_o *)v31->m_Items[v32];
      if ( !v33 )
        break;
      UIWidget__set_depth(v33, targetIcon->fields.mDepth - 1, 0LL);
      max_length = v31->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_18;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_18:
  effectUIList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_20;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    effectUIList,
    (System_Collections_Generic_IEnumerable_T__o *)v31,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleWindowComponent_o *window; // x0
  struct BattleWindowComponent_o *v19; // x0
  BattleWindowComponent_o *masterupwindow; // x0
  struct BattleWindowComponent_o *v21; // x0
  BattleWindowComponent_o *equipupwindow; // x0
  struct BattleWindowComponent_o *v23; // x0
  BattleWindowComponent_o *damageRecordWindow; // x0
  struct BattleWindowComponent_o *v25; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  struct BattleResultKnockdownComponent_o *v27; // x0
  UnityEngine_GameObject_o *masterLevelupRoot; // x0
  UnityEngine_GameObject_o *equipLevelupRoot; // x0
  UnityEngine_GameObject_o *damageRecordRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x20
  UILabel_o *mst_Title; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x20
  UILabel_o *equip_Title; // x0

  if ( (byte_40FA3A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_2478/*"BATTLE_RESULTEXP_MASTERTITLE"*/, v9);
    sub_B16FFC(&StringLiteral_2473/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, v10);
    byte_40FA3A0 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIUnityRenderer__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectUIList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  window = this->fields.window;
  if ( !window )
    goto LABEL_36;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  v19 = this->fields.window;
  if ( !v19 )
    goto LABEL_36;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v19->klass->vtable._9_setClose.method)(
    v19,
    v19->klass->vtable._10_Open.methodPtr);
  masterupwindow = this->fields.masterupwindow;
  if ( !masterupwindow )
    goto LABEL_36;
  BattleWindowComponent__setInitData(masterupwindow, 2, 0.15, 0, 0LL);
  v21 = this->fields.masterupwindow;
  if ( !v21 )
    goto LABEL_36;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v21->klass->vtable._9_setClose.method)(
    v21,
    v21->klass->vtable._10_Open.methodPtr);
  equipupwindow = this->fields.equipupwindow;
  if ( !equipupwindow )
    goto LABEL_36;
  BattleWindowComponent__setInitData(equipupwindow, 2, 0.15, 0, 0LL);
  v23 = this->fields.equipupwindow;
  if ( !v23 )
    goto LABEL_36;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v23->klass->vtable._9_setClose.method)(
    v23,
    v23->klass->vtable._10_Open.methodPtr);
  damageRecordWindow = this->fields.damageRecordWindow;
  if ( !damageRecordWindow )
    goto LABEL_36;
  BattleWindowComponent__setInitData(damageRecordWindow, 2, 0.15, 0, 0LL);
  v25 = this->fields.damageRecordWindow;
  if ( !v25 )
    goto LABEL_36;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v25->klass->vtable._9_setClose.method)(
    v25,
    v25->klass->vtable._10_Open.methodPtr);
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v27 = this->fields.knockdownRecordWindow;
    if ( !v27 )
      goto LABEL_36;
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, Il2CppMethodPointer))v27->klass->vtable._14_InitPopup.method)(
      v27,
      v27->klass->vtable._15_OpenPreProcess.methodPtr);
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL);
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL);
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !v32 )
    goto LABEL_36;
  v33 = v32;
  if ( !System_String__Equals_43731072(v32, (System_String_o *)StringLiteral_2478/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    mst_Title = this->fields.mst_Title;
    if ( !mst_Title )
      goto LABEL_36;
    UILabel__set_text(mst_Title, v33, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2473/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !v35 )
LABEL_36:
    sub_B170D4();
  v36 = v35;
  if ( !System_String__Equals_43731072(v35, (System_String_o *)StringLiteral_2473/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
  {
    equip_Title = this->fields.equip_Title;
    if ( equip_Title )
    {
      UILabel__set_text(equip_Title, v36, 0LL);
      goto LABEL_35;
    }
    goto LABEL_36;
  }
LABEL_35:
  this->fields.bondsCountUp = 1;
}


void __fastcall BattleResultExpComponent__Open(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  struct UIPanel_o *basePanel; // x8
  __int64 v19; // x11
  struct UIPanel_o *v20; // x22
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v22; // x20
  __int64 v23; // x21
  int32_t v24; // w0
  int32_t v25; // w20
  BattleData_o *v26; // x0
  BattleData_o *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x8
  struct UnityEngine_GameObject_o **p_figureRoot; // x21
  UnityEngine_GameObject_o *v31; // x20
  __int64 v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Object_array *v39; // x21
  UnityEngine_GameObject_o *v40; // x0
  System_Int32_array **v41; // x1
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x22
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x22
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x22
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Collections_Hashtable_o *v91; // x0
  struct BattleWindowComponent_o *window; // x0
  PlayMakerFSM_o *myFsm; // x0
  char v94[4]; // [xsp+18h] [xbp-38h] BYREF
  int v95; // [xsp+1Ch] [xbp-34h] BYREF
  int v96; // [xsp+28h] [xbp-28h] BYREF
  int32_t overwriteImageId; // [xsp+2Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  if ( (byte_40FA3A7 & 1) == 0 )
  {
    sub_B16FFC(&BattleRootComponent_TypeInfo, method);
    sub_B16FFC(&bool_TypeInfo, v3);
    sub_B16FFC(&object___TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&float_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_23222/*"x"*/, v8);
    sub_B16FFC(&StringLiteral_5477/*"END_OPEN"*/, v9);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v10);
    sub_B16FFC(&StringLiteral_21175/*"oncompletetarget"*/, v11);
    sub_B16FFC(&StringLiteral_18286/*"endMoveFigure"*/, v12);
    sub_B16FFC(&StringLiteral_19885/*"islocal"*/, v13);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v14);
    sub_B16FFC(&iTween_TypeInfo, v15);
    byte_40FA3A7 = 1;
  }
  overwriteImageId = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  basePanel = Instance->fields.basePanel;
  if ( basePanel
    && (v19 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
  {
    v20 = (BattleRootComponent_c *)basePanel->klass->_2.typeHierarchy[v19 - 1] == BattleRootComponent_TypeInfo
        ? Instance->fields.basePanel
        : 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_72;
  v23 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v98.fields.currentCryptoKey = v23;
  *(_QWORD *)&v98.fields.fakeValue = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v98, 0LL);
  if ( !v20 )
    goto LABEL_72;
  v25 = v24;
  v26 = *(BattleData_o **)&v20->fields.updateAnchors;
  if ( !v26 )
    goto LABEL_72;
  overwriteImageId = BattleData__GetMasterIconResultImageId(v26, 0LL);
  v27 = *(BattleData_o **)&v20->fields.updateAnchors;
  if ( !v27 )
    goto LABEL_72;
  BattleData__GetEquipAddImageId(v27, &overwriteImageId, 0LL);
  if ( overwriteImageId == -1 )
  {
    p_figureRoot = &this->fields.figureRoot;
  }
  else
  {
    v29 = *(_QWORD *)&v20->fields.updateAnchors;
    if ( !v29 )
      goto LABEL_72;
    p_figureRoot = &this->fields.figureRoot;
    MasterFigureManagerOld__CreatePrefab_27244420(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v29 + 392),
      v25,
      60,
      0LL,
      overwriteImageId,
      (System_Nullable_Vector3__o)0,
      0LL);
  }
  v31 = *p_figureRoot;
  v32 = sub_B17014(object___TypeInfo, 10LL, v28);
  if ( !v32 )
LABEL_72:
    sub_B170D4();
  v39 = (System_Object_array *)v32;
  v40 = (UnityEngine_GameObject_o *)StringLiteral_23222/*"x"*/;
  if ( StringLiteral_23222/*"x"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_23222/*"x"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_73;
    v41 = (System_Int32_array **)StringLiteral_23222/*"x"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( !v39->max_length )
    goto LABEL_71;
  v39->m_Items[0] = (Il2CppObject *)v41;
  sub_B16F98((BattleServantConfConponent_o *)v39->m_Items, v41, v33, v34, v35, v36, v37, v38);
  v96 = -1018691584;
  v40 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v96);
  v47 = (System_Int32_array **)v40;
  if ( v40 )
  {
    v40 = (UnityEngine_GameObject_o *)sub_B170BC(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_73;
  }
  if ( v39->max_length <= 1 )
    goto LABEL_71;
  v39->m_Items[1] = (Il2CppObject *)v47;
  sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[1], v47, v33, v42, v43, v44, v45, v46);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_22584/*"time"*/;
  if ( StringLiteral_22584/*"time"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_22584/*"time"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_73;
    v41 = (System_Int32_array **)StringLiteral_22584/*"time"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 2 )
    goto LABEL_71;
  v39->m_Items[2] = (Il2CppObject *)v41;
  sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[2], v41, v33, v48, v49, v50, v51, v52);
  v95 = 1061997773;
  v40 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v95);
  v58 = (System_Int32_array **)v40;
  if ( v40 )
  {
    v40 = (UnityEngine_GameObject_o *)sub_B170BC(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_73;
  }
  if ( v39->max_length <= 3 )
    goto LABEL_71;
  v39->m_Items[3] = (Il2CppObject *)v58;
  sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[3], v58, v33, v53, v54, v55, v56, v57);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_19885/*"islocal"*/;
  if ( StringLiteral_19885/*"islocal"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_19885/*"islocal"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_73;
    v41 = (System_Int32_array **)StringLiteral_19885/*"islocal"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 4 )
    goto LABEL_71;
  v39->m_Items[4] = (Il2CppObject *)v41;
  sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[4], v41, v33, v59, v60, v61, v62, v63);
  v94[0] = 1;
  v40 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v94);
  v69 = (System_Int32_array **)v40;
  if ( v40 )
  {
    v40 = (UnityEngine_GameObject_o *)sub_B170BC(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_73;
  }
  if ( v39->max_length <= 5 )
    goto LABEL_71;
  v39->m_Items[5] = (Il2CppObject *)v69;
  sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[5], v69, v33, v64, v65, v66, v67, v68);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_21175/*"oncompletetarget"*/;
  if ( StringLiteral_21175/*"oncompletetarget"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21175/*"oncompletetarget"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_73;
    v41 = (System_Int32_array **)StringLiteral_21175/*"oncompletetarget"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 6 )
    goto LABEL_71;
  v39->m_Items[6] = (Il2CppObject *)v41;
  sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[6], v41, v33, v70, v71, v72, v73, v74);
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v80 = (System_Int32_array **)v40;
  if ( v40 )
  {
    v40 = (UnityEngine_GameObject_o *)sub_B170BC(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
    {
LABEL_73:
      sub_B170F4(v40);
      sub_B170A0();
    }
  }
  if ( v39->max_length <= 7 )
    goto LABEL_71;
  v39->m_Items[7] = (Il2CppObject *)v80;
  sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[7], v80, v33, v75, v76, v77, v78, v79);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_21173/*"oncomplete"*/;
  if ( StringLiteral_21173/*"oncomplete"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_73;
    v41 = (System_Int32_array **)StringLiteral_21173/*"oncomplete"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 8 )
    goto LABEL_71;
  v39->m_Items[8] = (Il2CppObject *)v41;
  sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[8], v41, v33, v81, v82, v83, v84, v85);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_18286/*"endMoveFigure"*/;
  if ( StringLiteral_18286/*"endMoveFigure"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_18286/*"endMoveFigure"*/, v39->obj.klass->_1.element_class);
    if ( v40 )
    {
      v41 = (System_Int32_array **)StringLiteral_18286/*"endMoveFigure"*/;
      goto LABEL_64;
    }
    goto LABEL_73;
  }
  v41 = 0LL;
LABEL_64:
  if ( v39->max_length <= 9 )
  {
LABEL_71:
    sub_B17100(v40, v41, v33);
    sub_B170A0();
  }
  v39->m_Items[9] = (Il2CppObject *)v41;
  sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[9], v41, v33, v86, v87, v88, v89, v90);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v91 = iTween__Hash(v39, 0LL);
  iTween__MoveFrom_18435792(v31, v91, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_72;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    0LL,
    window->klass->vtable._11_CompOpen.methodPtr);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_72;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5477/*"END_OPEN"*/, 0LL);
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
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp || (obj_fronttouch = parentComp->fields.obj_fronttouch) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultExpComponent__checkDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *damageRecordRoot; // x0
  UnityEngine_Object_o *damage_LvupSimpleAnim; // x20
  SimpleAnimation_o *v11; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  UnityEngine_Animation_o *v24; // x0
  UnityEngine_AnimationState_o *v25; // x0
  UnityEngine_Animation_o *v26; // x0
  SimpleAnimation_o *v27; // x0
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v29; // x21

  if ( (byte_40FA3B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultExpComponent_endOpenDamageRecord__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16747/*"bit_result_levelup01"*/, v7);
    sub_B16FFC(&StringLiteral_3080/*"CLOSE"*/, v8);
    byte_40FA3B4 = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080/*"CLOSE"*/, 0LL);
      return;
    }
    goto LABEL_34;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(damageRecordRoot, 1, 0LL);
  damage_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.damage_LvupSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(damage_LvupSimpleAnim, 0LL, 0LL) )
  {
    v11 = this->fields.damage_LvupSimpleAnim;
    if ( v11 )
    {
      Item = SimpleAnimation__get_Item(v11, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v14 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v15 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v15;
            p_offset += 2;
            if ( v15 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
        }
        else
        {
LABEL_15:
          p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v14, *(_QWORD *)(p_method + 8), 0.0);
        v27 = this->fields.damage_LvupSimpleAnim;
        if ( v27 )
        {
          SimpleAnimation__Play_16380456(v27, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_34:
    sub_B170D4();
  }
  damage_LvupAnim = (UnityEngine_Object_o *)this->fields.damage_LvupAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(damage_LvupAnim, 0LL, 0LL) )
  {
    v24 = this->fields.damage_LvupAnim;
    if ( v24 )
    {
      v25 = UnityEngine_Animation__get_Item(v24, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
      if ( v25 )
      {
        UnityEngine_AnimationState__set_time(v25, 0.0, 0LL);
        v26 = this->fields.damage_LvupAnim;
        if ( v26 )
        {
          UnityEngine_Animation__Play_49744236(v26, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_34;
  }
LABEL_29:
  damageRecordWindow = this->fields.damageRecordWindow;
  v29 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v20, v21, v22, v23);
  BattleWindowComponent_EndCall___ctor(
    v29,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0LL);
  if ( !damageRecordWindow )
    goto LABEL_34;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._10_Open.method)(
    damageRecordWindow,
    v29,
    damageRecordWindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
}


void __fastcall BattleResultExpComponent__checkEquipLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  UnityEngine_GameObject_o *equipLevelupRoot; // x0
  UnityEngine_Object_o *equip_LvupSimpleAnim; // x20
  SimpleAnimation_o *v13; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v16; // x20
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Object_o *equip_LvupAnim; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  UnityEngine_Animation_o *v26; // x0
  UnityEngine_AnimationState_o *v27; // x0
  UnityEngine_Animation_o *v28; // x0
  SimpleAnimation_o *v29; // x0
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v31; // x21

  if ( (byte_40FA3B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultExpComponent_endOpenEquipUp__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16747/*"bit_result_levelup01"*/, v7);
    sub_B16FFC(&StringLiteral_3080/*"CLOSE"*/, v8);
    byte_40FA3B1 = 1;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_36;
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_36;
  if ( oldEquip->fields.lv >= newEquip->fields.lv )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080/*"CLOSE"*/, 0LL);
      return;
    }
    goto LABEL_36;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(equipLevelupRoot, 1, 0LL);
  equip_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.equip_LvupSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equip_LvupSimpleAnim, 0LL, 0LL) )
  {
    v13 = this->fields.equip_LvupSimpleAnim;
    if ( v13 )
    {
      Item = SimpleAnimation__get_Item(v13, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v16 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v17 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v17;
            p_offset += 2;
            if ( v17 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_17;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
        }
        else
        {
LABEL_17:
          p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v16, *(_QWORD *)(p_method + 8), 0.0);
        v29 = this->fields.equip_LvupSimpleAnim;
        if ( v29 )
        {
          SimpleAnimation__Play_16380456(v29, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_31;
        }
      }
    }
LABEL_36:
    sub_B170D4();
  }
  equip_LvupAnim = (UnityEngine_Object_o *)this->fields.equip_LvupAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equip_LvupAnim, 0LL, 0LL) )
  {
    v26 = this->fields.equip_LvupAnim;
    if ( v26 )
    {
      v27 = UnityEngine_Animation__get_Item(v26, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
      if ( v27 )
      {
        UnityEngine_AnimationState__set_time(v27, 0.0, 0LL);
        v28 = this->fields.equip_LvupAnim;
        if ( v28 )
        {
          UnityEngine_Animation__Play_49744236(v28, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_31;
        }
      }
    }
    goto LABEL_36;
  }
LABEL_31:
  equipupwindow = this->fields.equipupwindow;
  v31 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v22, v23, v24, v25);
  BattleWindowComponent_EndCall___ctor(v31, (Il2CppObject *)this, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_36;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v31,
    equipupwindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
}


void __fastcall BattleResultExpComponent__checkMasterLevelUp(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v12; // x2
  SePlayer_o *MeterSePlayer; // x0
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  UnityEngine_GameObject_o *masterLevelupRoot; // x0
  UnityEngine_Object_o *mst_LvupSimpleAnim; // x20
  SimpleAnimation_o *v18; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v21; // x20
  unsigned __int64 v22; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Object_o *mst_LvupAnim; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  UnityEngine_Animation_o *v31; // x0
  UnityEngine_AnimationState_o *v32; // x0
  UnityEngine_Animation_o *v33; // x0
  SimpleAnimation_o *v34; // x0
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v36; // x21
  struct UserGameEntity_o *v37; // x9
  struct UserGameEntity_o *v38; // x8
  int32_t v39; // w20
  AdManager_o *Instance; // x0

  if ( (byte_40FA3AD & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultExpComponent_endOpenMasterUp__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_16747/*"bit_result_levelup01"*/, v8);
    sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, v9);
    sub_B16FFC(&iTween_TypeInfo, v10);
    byte_40FA3AD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_18552136(gameObject, 0LL);
  BattleResultExpComponent__updateValueActual(this, 1.0, 1, v12);
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
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268/*"NEXT"*/, 0LL);
      return;
    }
    goto LABEL_46;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(masterLevelupRoot, 1, 0LL);
  mst_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.mst_LvupSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mst_LvupSimpleAnim, 0LL, 0LL) )
  {
    v18 = this->fields.mst_LvupSimpleAnim;
    if ( v18 )
    {
      Item = SimpleAnimation__get_Item(v18, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v21 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v22 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v22;
            p_offset += 2;
            if ( v22 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_22;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
        }
        else
        {
LABEL_22:
          p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v21, *(_QWORD *)(p_method + 8), 0.0);
        v34 = this->fields.mst_LvupSimpleAnim;
        if ( v34 )
        {
          SimpleAnimation__Play_16380456(v34, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_36;
        }
      }
    }
LABEL_46:
    sub_B170D4();
  }
  mst_LvupAnim = (UnityEngine_Object_o *)this->fields.mst_LvupAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mst_LvupAnim, 0LL, 0LL) )
  {
    v31 = this->fields.mst_LvupAnim;
    if ( !v31 )
      goto LABEL_46;
    v32 = UnityEngine_Animation__get_Item(v31, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
    if ( !v32 )
      goto LABEL_46;
    UnityEngine_AnimationState__set_time(v32, 0.0, 0LL);
    v33 = this->fields.mst_LvupAnim;
    if ( !v33 )
      goto LABEL_46;
    UnityEngine_Animation__Play_49744236(v33, (System_String_o *)StringLiteral_16747/*"bit_result_levelup01"*/, 0LL);
  }
LABEL_36:
  masterupwindow = this->fields.masterupwindow;
  v36 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v27, v28, v29, v30);
  BattleWindowComponent_EndCall___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_46;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._10_Open.method)(
    masterupwindow,
    v36,
    masterupwindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  v37 = this->fields.oldGame;
  if ( !v37 )
    goto LABEL_46;
  v38 = this->fields.newGame;
  if ( !v38 )
    goto LABEL_46;
  v39 = v37->fields.lv + 1;
  while ( v39 <= v38->fields.lv )
  {
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( Instance )
    {
      AdManager__TrackEvent(Instance, 3, 2, v39, -1, 0LL, 0LL);
      v38 = this->fields.newGame;
      ++v39;
      if ( v38 )
        continue;
    }
    goto LABEL_46;
  }
}


void __fastcall BattleResultExpComponent__checkOpenKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  struct BattleResultKnockdownComponent_o *v5; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3B7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3080/*"CLOSE"*/, v3);
    byte_40FA3B7 = 1;
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
      goto LABEL_12;
    if ( v5->fields.isOpenPossible )
    {
      ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._10_Open.method)(
        v5,
        0LL,
        v5->klass->vtable._11_CompOpen.methodPtr);
      return;
    }
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_12:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_40FA3B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultExpComponent_endCloseDamageRecord__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FA3B5 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (obj_fronttouch = parentComp->fields.obj_fronttouch) == 0LL
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL),
        damageRecordWindow = this->fields.damageRecordWindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v7, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseDamageRecord__,
          0LL),
        !damageRecordWindow) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._12_Close.method)(
    damageRecordWindow,
    v11,
    damageRecordWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  struct BattleWindowComponent_o *equipupwindow; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_40FA3B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultExpComponent_endCloseEquipUp__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FA3B2 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (obj_fronttouch = parentComp->fields.obj_fronttouch) == 0LL
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL),
        equipupwindow = this->fields.equipupwindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v7, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseEquipUp__,
          0LL),
        !equipupwindow) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._12_Close.method)(
    equipupwindow,
    v11,
    equipupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  struct BattleResultKnockdownComponent_o *v4; // x0

  if ( (byte_40FA3B8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA3B8 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v4 = this->fields.knockdownRecordWindow;
    if ( !v4 )
      sub_B170D4();
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._12_Close.method)(
      v4,
      0LL,
      v4->klass->vtable._13_CompClose.methodPtr);
  }
}


void __fastcall BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_UIUnityRenderer__o *effectUIList; // x21
  int size; // w8
  unsigned int v8; // w20
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  struct BattleWindowComponent_o *masterupwindow; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  BattleWindowComponent_EndCall_o *v18; // x21

  if ( (byte_40FA3AF & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultExpComponent_endCloseMasterUp__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v5);
    byte_40FA3AF = 1;
  }
  effectUIList = this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_16;
  size = effectUIList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v9 = (UnityEngine_Component_o *)effectUIList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      effectUIList = this->fields.effectUIList;
      if ( !effectUIList )
        break;
      size = effectUIList->fields._size;
      if ( (int)++v8 >= size )
        goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_12:
  parentComp = this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_16;
  obj_fronttouch = parentComp->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL);
  masterupwindow = this->fields.masterupwindow;
  v18 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v14, v15, v16, v17);
  BattleWindowComponent_EndCall___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endCloseMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_16;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._12_Close.method)(
    masterupwindow,
    v18,
    masterupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3A9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA3A9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3B6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA3B6 = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3B3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA3B3 = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3B0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA3B0 = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endMoveFigure(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v15; // x2
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Object_array *v23; // x21
  __int64 v24; // x0
  System_Int32_array **v25; // x1
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x22
  System_Collections_Hashtable_o *v74; // x0
  System_String_o *CommonSeName; // x20
  struct SePlayer_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  float time_exptotal; // [xsp+Ch] [xbp-34h] BYREF
  int v84; // [xsp+18h] [xbp-28h] BYREF
  int v85; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FA3AA & 1) == 0 )
  {
    sub_B16FFC(&object___TypeInfo, method);
    sub_B16FFC(&SeManager_TypeInfo, v3);
    sub_B16FFC(&float_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v6);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v7);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v8);
    sub_B16FFC(&StringLiteral_15009/*"UpdateValue"*/, v9);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v10);
    sub_B16FFC(&StringLiteral_18670/*"finishUpdateValue"*/, v11);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v12);
    sub_B16FFC(&iTween_TypeInfo, v13);
    byte_40FA3AA = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v16 = sub_B17014(object___TypeInfo, 10LL, v15);
    if ( !v16 )
      sub_B170D4();
    v23 = (System_Object_array *)v16;
    v24 = StringLiteral_18842/*"from"*/;
    if ( StringLiteral_18842/*"from"*/ )
    {
      v24 = sub_B170BC(StringLiteral_18842/*"from"*/, v23->obj.klass->_1.element_class);
      if ( !v24 )
        goto LABEL_62;
      v25 = (System_Int32_array **)StringLiteral_18842/*"from"*/;
    }
    else
    {
      v25 = 0LL;
    }
    if ( !v23->max_length )
      goto LABEL_61;
    v23->m_Items[0] = (Il2CppObject *)v25;
    sub_B16F98((BattleServantConfConponent_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
    v85 = 0;
    v24 = j_il2cpp_value_box_0(float_TypeInfo, &v85);
    v31 = (System_Int32_array **)v24;
    if ( !v24 || (v24 = sub_B170BC(v24, v23->obj.klass->_1.element_class)) != 0 )
    {
      if ( v23->max_length <= 1 )
        goto LABEL_61;
      v23->m_Items[1] = (Il2CppObject *)v31;
      sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[1], v31, v17, v26, v27, v28, v29, v30);
      v24 = StringLiteral_22621/*"to"*/;
      if ( StringLiteral_22621/*"to"*/ )
      {
        v24 = sub_B170BC(StringLiteral_22621/*"to"*/, v23->obj.klass->_1.element_class);
        if ( !v24 )
          goto LABEL_62;
        v25 = (System_Int32_array **)StringLiteral_22621/*"to"*/;
      }
      else
      {
        v25 = 0LL;
      }
      if ( v23->max_length <= 2 )
        goto LABEL_61;
      v23->m_Items[2] = (Il2CppObject *)v25;
      sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[2], v25, v17, v32, v33, v34, v35, v36);
      v84 = 1065353216;
      v24 = j_il2cpp_value_box_0(float_TypeInfo, &v84);
      v42 = (System_Int32_array **)v24;
      if ( !v24 || (v24 = sub_B170BC(v24, v23->obj.klass->_1.element_class)) != 0 )
      {
        if ( v23->max_length <= 3 )
          goto LABEL_61;
        v23->m_Items[3] = (Il2CppObject *)v42;
        sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[3], v42, v17, v37, v38, v39, v40, v41);
        v24 = StringLiteral_21182/*"onupdate"*/;
        if ( StringLiteral_21182/*"onupdate"*/ )
        {
          v24 = sub_B170BC(StringLiteral_21182/*"onupdate"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_62;
          v25 = (System_Int32_array **)StringLiteral_21182/*"onupdate"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 4 )
          goto LABEL_61;
        v23->m_Items[4] = (Il2CppObject *)v25;
        sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[4], v25, v17, v43, v44, v45, v46, v47);
        v24 = StringLiteral_15009/*"UpdateValue"*/;
        if ( StringLiteral_15009/*"UpdateValue"*/ )
        {
          v24 = sub_B170BC(StringLiteral_15009/*"UpdateValue"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_62;
          v25 = (System_Int32_array **)StringLiteral_15009/*"UpdateValue"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 5 )
          goto LABEL_61;
        v23->m_Items[5] = (Il2CppObject *)v25;
        sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[5], v25, v17, v48, v49, v50, v51, v52);
        v24 = StringLiteral_21173/*"oncomplete"*/;
        if ( StringLiteral_21173/*"oncomplete"*/ )
        {
          v24 = sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_62;
          v25 = (System_Int32_array **)StringLiteral_21173/*"oncomplete"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 6 )
          goto LABEL_61;
        v23->m_Items[6] = (Il2CppObject *)v25;
        sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[6], v25, v17, v53, v54, v55, v56, v57);
        v24 = StringLiteral_18670/*"finishUpdateValue"*/;
        if ( StringLiteral_18670/*"finishUpdateValue"*/ )
        {
          v24 = sub_B170BC(StringLiteral_18670/*"finishUpdateValue"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_62;
          v25 = (System_Int32_array **)StringLiteral_18670/*"finishUpdateValue"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 7 )
          goto LABEL_61;
        v23->m_Items[7] = (Il2CppObject *)v25;
        sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[7], v25, v17, v58, v59, v60, v61, v62);
        v24 = StringLiteral_22584/*"time"*/;
        if ( StringLiteral_22584/*"time"*/ )
        {
          v24 = sub_B170BC(StringLiteral_22584/*"time"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_62;
          v25 = (System_Int32_array **)StringLiteral_22584/*"time"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 8 )
          goto LABEL_61;
        v23->m_Items[8] = (Il2CppObject *)v25;
        sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[8], v25, v17, v63, v64, v65, v66, v67);
        time_exptotal = this->fields.time_exptotal;
        v24 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal);
        v73 = (System_Int32_array **)v24;
        if ( !v24 || (v24 = sub_B170BC(v24, v23->obj.klass->_1.element_class)) != 0 )
        {
          if ( v23->max_length > 9 )
          {
            v23->m_Items[9] = (Il2CppObject *)v73;
            sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[9], v73, v17, v68, v69, v70, v71, v72);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v74 = iTween__Hash(v23, 0LL);
            iTween__ValueTo(gameObject, v74, 0LL);
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
              v76 = SoundManager__playSe(CommonSeName, 0LL);
              this->fields.MeterSePlayer = v76;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.MeterSePlayer,
                (System_Int32_array **)v76,
                v77,
                v78,
                v79,
                v80,
                v81,
                v82);
            }
            return;
          }
LABEL_61:
          sub_B17100(v24, v25, v17);
          sub_B170A0();
        }
      }
    }
LABEL_62:
    sub_B170F4(v24);
    sub_B170A0();
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp || (obj_fronttouch = parentComp->fields.obj_fronttouch) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp || (obj_fronttouch = parentComp->fields.obj_fronttouch) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3AE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15169/*"WAIT_OPEN"*/, method);
    byte_40FA3AE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15169/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3AB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, method);
    byte_40FA3AB = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268/*"NEXT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultExpComponent__setEquipExp(
        BattleResultExpComponent_o *this,
        int32_t equipId,
        int32_t getexp,
        int32_t nowexp,
        int32_t start_level,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *equip_getexpLabel; // x23
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  WebViewManager_o *Instance; // x0
  EquipExpMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EquipExpMaster_o *v20; // x25
  int32_t Level; // w22
  int32_t LevelMax; // w24
  EquipExpEntity_o *v23; // x0
  EquipExpEntity_o *v24; // x23
  UILabel_o *equip_atexpLabel; // x26
  System_String_o *v26; // x0
  const MethodInfo *v27; // x2
  int32_t exp; // w21
  UIProgressBar_o *equip_slider; // x0
  float value; // s0
  UIProgressBar_o *v31; // x0
  float v32; // s8
  float v33; // s0
  UIProgressBar_o *v34; // x0
  int v36; // [xsp+Ch] [xbp-64h] BYREF
  EquipExpEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t v38; // [xsp+1Ch] [xbp-54h] BYREF

  v38 = getexp;
  if ( (byte_40FA3A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&equipId);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v12);
    sub_B16FFC(&StringLiteral_11075/*"RESULT_EQUIP_MAXEXP"*/, v13);
    sub_B16FFC(&StringLiteral_692/*"+ {0}"*/, v14);
    byte_40FA3A6 = 1;
  }
  entity = 0LL;
  v36 = 0;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v16 = (Il2CppObject *)System_Int32__ToString_38275808((int32_t)&v38, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
  v17 = System_String__Format((System_String_o *)StringLiteral_692/*"+ {0}"*/, v16, 0LL);
  if ( !equip_getexpLabel )
    goto LABEL_28;
  UILabel__set_text(equip_getexpLabel, v17, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (EquipExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  v20 = MasterData_WarQuestSelectionMaster;
  Level = EquipExpMaster__getLevel(MasterData_WarQuestSelectionMaster, equipId, nowexp, start_level, 0LL);
  LevelMax = EquipExpMaster__getLevelMax(v20, equipId, 0LL);
  v23 = EquipExpMaster__GetEntity(v20, equipId, Level, 0LL);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_28;
  v24 = v23;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0LL);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_28;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0LL);
    if ( !v24 )
      goto LABEL_28;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v36 = v24->fields.exp - nowexp;
    v26 = System_Int32__ToString_38275808((int32_t)&v36, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_28;
  }
  UILabel__set_text(equip_atexpLabel, v26, 0LL);
  BattleResultExpComponent__setEquipLv(this, Level, v27);
  if ( EquipExpMaster__TryGetEntity(v20, &entity, equipId, Level - 1, 0LL) )
  {
    if ( !entity )
      goto LABEL_28;
    exp = entity->fields.exp;
  }
  else
  {
    exp = 0;
  }
  equip_slider = this->fields.equip_slider;
  if ( !equip_slider )
LABEL_28:
    sub_B170D4();
  value = UIProgressBar__get_value(equip_slider, 0LL);
  v31 = this->fields.equip_slider;
  v32 = value;
  if ( Level == LevelMax )
  {
    if ( !v31 )
      goto LABEL_28;
    v33 = 1.0;
  }
  else
  {
    if ( !v24 || !v31 )
      goto LABEL_28;
    v33 = 1.0 - (float)((float)(v24->fields.exp - nowexp) / (float)(v24->fields.exp - exp));
  }
  UIProgressBar__set_value(v31, v33, 0LL);
  v34 = this->fields.equip_slider;
  if ( !v34 )
    goto LABEL_28;
  return v32 != UIProgressBar__get_value(v34, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__setEquipLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x21
  bool v10; // w0
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v12; // x1
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA3A2 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&level);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2472/*"BATTLE_RESULTEXP_EQUIPLV"*/, v6);
    sub_B16FFC(&StringLiteral_23445/*"{0}"*/, v7);
    byte_40FA3A2 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2472/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_12;
  v9 = v8;
  v10 = System_String__Equals_43731072(v8, (System_String_o *)StringLiteral_2472/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v10 )
  {
    v15 = level;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v13 = (System_String_o *)StringLiteral_23445/*"{0}"*/;
  }
  else
  {
    v16 = level;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v13 = v9;
  }
  v14 = System_String__Format(v13, v12, 0LL);
  if ( !equip_Lv )
LABEL_12:
    sub_B170D4();
  UILabel__set_text(equip_Lv, v14, 0LL);
}


bool __fastcall BattleResultExpComponent__setMasterExp(
        BattleResultExpComponent_o *this,
        int64_t getexp,
        int64_t nowexp,
        int32_t start_level,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UILabel_o *mst_getexpLabel; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  UIProgressBar_o *mst_slider; // x0
  float value; // s8
  int32_t v21; // w0
  UILabel_o *mst_atexpLabel; // x21
  System_String_o *v23; // x0
  UIProgressBar_o *v24; // x0
  const MethodInfo *v25; // x2
  bool v26; // w21
  WebViewManager_o *Instance; // x0
  UserExpMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x23
  WarEntity_o *v30; // x0
  UILabel_o *v31; // x24
  WarEntity_o *v32; // x22
  System_String_o *v33; // x0
  bool v34; // w0
  struct System_String_o *age; // x8
  UIProgressBar_o *v36; // x0
  float v37; // s0
  UIProgressBar_o *v38; // x0
  UnityEngine_Behaviour_o *mst_nextSprite; // x0
  UILabel_o *v40; // x20
  System_String_o *v41; // x0
  UIProgressBar_o *v42; // x0
  int64_t v44; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int64_t v46; // [xsp+18h] [xbp-48h] BYREF

  v46 = getexp;
  if ( (byte_40FA3A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserExpMaster___, getexp);
    sub_B16FFC(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v12);
    sub_B16FFC(&StringLiteral_11075/*"RESULT_EQUIP_MAXEXP"*/, v13);
    sub_B16FFC(&StringLiteral_8674/*"MAX_USER_LV"*/, v14);
    sub_B16FFC(&StringLiteral_692/*"+ {0}"*/, v15);
    byte_40FA3A5 = 1;
  }
  v44 = 0LL;
  entity = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v17 = (Il2CppObject *)System_Int64__ToString_38278592((int64_t)&v46, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
  v18 = System_String__Format((System_String_o *)StringLiteral_692/*"+ {0}"*/, v17, 0LL);
  if ( !mst_getexpLabel )
    goto LABEL_32;
  UILabel__set_text(mst_getexpLabel, v18, 0LL);
  mst_slider = this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_32;
  value = UIProgressBar__get_value(mst_slider, 0LL);
  v21 = ConstantMaster__getValue((System_String_o *)StringLiteral_8674/*"MAX_USER_LV"*/, 0LL);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_32;
  if ( v21 == start_level )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0LL);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_32;
    UILabel__set_text(mst_atexpLabel, v23, 0LL);
    v24 = this->fields.mst_slider;
    if ( !v24 )
      goto LABEL_32;
    UIProgressBar__set_value(v24, 1.0, 0LL);
    v26 = 0;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MasterData_WarQuestSelectionMaster = (UserExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserExpMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_32;
    v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    start_level = UserExpMaster__getLevel(MasterData_WarQuestSelectionMaster, nowexp, start_level, 0LL);
    v30 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v29,
            start_level,
            (const MethodInfo_266F388 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !v30 )
      goto LABEL_32;
    v31 = this->fields.mst_atexpLabel;
    v32 = v30;
    v44 = (int64_t)v30->fields.age - nowexp;
    v33 = System_Int64__ToString_38278592((int64_t)&v44, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
    if ( !v31 )
      goto LABEL_32;
    UILabel__set_text(v31, v33, 0LL);
    v34 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v29,
            &entity,
            start_level - 1,
            (const MethodInfo_266F3E4 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    age = 0LL;
    if ( v34 )
    {
      if ( !entity )
        goto LABEL_32;
      age = entity->fields.age;
    }
    v36 = this->fields.mst_slider;
    if ( !v36
      || (v37 = 1.0
              - (double)((unsigned __int64)v32->fields.age - nowexp) / (double)((char *)v32->fields.age - (char *)age),
          UIProgressBar__set_value(v36, v37, 0LL),
          (v38 = this->fields.mst_slider) == 0LL) )
    {
LABEL_32:
      sub_B170D4();
    }
    v26 = value != UIProgressBar__get_value(v38, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, start_level, v25);
  if ( start_level == ConstantMaster__getValue((System_String_o *)StringLiteral_8674/*"MAX_USER_LV"*/, 0LL) )
  {
    mst_nextSprite = (UnityEngine_Behaviour_o *)this->fields.mst_nextSprite;
    if ( mst_nextSprite )
    {
      UnityEngine_Behaviour__set_enabled(mst_nextSprite, 0, 0LL);
      v40 = this->fields.mst_atexpLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
      if ( v40 )
      {
        UILabel__set_text(v40, v41, 0LL);
        v42 = this->fields.mst_slider;
        if ( v42 )
        {
          UIProgressBar__set_value(v42, 1.0, 0LL);
          return v26;
        }
      }
    }
    goto LABEL_32;
  }
  return v26;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__setMasterLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x21
  bool v10; // w0
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v12; // x1
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA3A1 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&level);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23445/*"{0}"*/, v6);
    sub_B16FFC(&StringLiteral_2477/*"BATTLE_RESULTEXP_MASTERLV"*/, v7);
    byte_40FA3A1 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2477/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_12;
  v9 = v8;
  v10 = System_String__Equals_43731072(v8, (System_String_o *)StringLiteral_2477/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v10 )
  {
    v15 = level;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v13 = (System_String_o *)StringLiteral_23445/*"{0}"*/;
  }
  else
  {
    v16 = level;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v13 = v9;
  }
  v14 = System_String__Format(v13, v12, 0LL);
  if ( !mst_Lv )
LABEL_12:
    sub_B170D4();
  UILabel__set_text(mst_Lv, v14, 0LL);
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
  UserEquipEntity_o *v14; // x20
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x27
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 *v53; // x26
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct UserGameEntity_o *v60; // x1
  struct UserGameEntity_o **p_oldGame; // x28
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *knockdownRecordWindow; // x24
  const MethodInfo *v75; // x2
  BattleResultKnockdownComponent_o *v76; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *v79; // x0
  struct UserGameEntity_o **p_newGame; // x24
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  WebViewManager_o *v87; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v88; // x0
  UserServantEntity_o *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  const MethodInfo *v96; // x4
  struct UserGameEntity_o *newGame; // x8
  UILabel_o *equip_nameLabel; // x25
  __int64 v99; // x21
  __int64 v100; // x28
  int32_t v101; // w0
  System_String_o *EquipName; // x0
  int32_t v103; // w0
  const MethodInfo *v104; // x5
  int32_t *p_lv; // x25
  const MethodInfo *v106; // x2
  void *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v108; // x1
  __int64 v109; // x2
  const MethodInfo *v110; // x3
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  BattleResultMasterUpStatusComponent_o *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  System_Func_float__int__int__o *v117; // x28
  const MethodInfo *v118; // x4
  int v119; // w27
  __int64 v120; // x8
  BattleResultExpComponent_o *v121; // x28
  signed __int64 v122; // x19
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v125; // x8
  UnityEngine_Component_o *v126; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UserEquipEntity_o *v129; // x21
  int v130; // w8
  void *v131; // x26
  unsigned int v132; // w20
  UILabel_o *v133; // x0
  struct UISprite_array *v134; // x8
  UIWidget_o *v135; // x0
  struct UISprite_array *v136; // x8
  UIWidget_o *v137; // x0
  struct UISprite_array *v138; // x8
  UIWidget_o *v139; // x0
  struct UISprite_array *v140; // x8
  UIWidget_o *v141; // x0
  const MethodInfo *v142; // x4
  struct UISprite_array *v143; // x8
  const MethodInfo *v144; // x4
  struct UISprite_array *v145; // x8
  int v146; // w8
  UIWidget_o *masterLevelwindowSprite; // x0
  const MethodInfo *v148; // x2
  UILabel_o *equip_oldlevelLabel; // x22
  System_String_o *v150; // x0
  System_String_o *v151; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x21
  System_String_o *v154; // x0
  System_String_o *v155; // x1
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  __int64 v159; // x4
  System_Text_StringBuilder_o *v160; // x22
  System_Int32_array *SkillIdList; // x0
  System_Int32_array *v162; // x23
  System_Int32_array *v163; // x24
  System_Int32_array *v164; // x26
  WebViewManager_o *v165; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v166; // x27
  int v167; // w20
  unsigned __int64 v168; // x25
  int32_t *v169; // x19
  System_String_o *v170; // x0
  System_String_o *v171; // x28
  Il2CppObject *v172; // x21
  Il2CppObject *v173; // x0
  System_String_o *v174; // x0
  System_String_o *v175; // x0
  System_String_o *v176; // x21
  Il2CppObject *Name; // x0
  System_String_o *v178; // x0
  UnityEngine_Transform_o *eqConfRoot; // x23
  UIWidget_o *eqLevelwindowSprite; // x0
  UILabel_o *equip_confLabel; // x21
  System_String_o *v182; // x0
  int64_t bestTurnDamage; // x11
  int64_t oldRecordDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  System_String_o *v186; // x0
  UILabel_o *v187; // x21
  System_String_o *v188; // x0
  UIWidget_o *v189; // x0
  UIWidget_o *v190; // x0
  UnityEngine_Component_o *v191; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v193; // w1
  System_String_o *v194; // x0
  UILabel_o *damage_battleLabel; // x21
  System_String_o *v196; // x0
  UIWidget_o *v197; // x0
  UIWidget_o *v198; // x0
  UnityEngine_Component_o *damage_recordRenewalSp; // x0
  UserEquipEntity_o *v200; // [xsp+0h] [xbp-A0h]
  UserEquipEntity_o **p_newEquip; // [xsp+8h] [xbp-98h]
  System_Int32_array *SkillLvList; // [xsp+18h] [xbp-88h]
  int32_t *v203; // [xsp+20h] [xbp-80h]
  int32_t v205; // [xsp+3Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16
  UnityEngine_Vector3_o v208; // 0:s0.4,4:s1.4,8:s2.4

  v14 = oldEquip;
  if ( (byte_40FA3A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___, oldGame);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserGameMaster___, v18);
    sub_B16FFC(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v19);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v20);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v21);
    sub_B16FFC(&Method_System_Func_float__int__int__Invoke__, v22);
    sub_B16FFC(&Method_System_Func_float__int__int___ctor__, v23);
    sub_B16FFC(&System_Func_float__int__int__TypeInfo, v24);
    sub_B16FFC(&int_TypeInfo, v25);
    sub_B16FFC(&LocalizationManager_TypeInfo, v26);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v27);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v30);
    sub_B16FFC(&Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__, v31);
    sub_B16FFC(&BattleResultExpComponent___c__DisplayClass61_0_TypeInfo, v32);
    sub_B16FFC(&StringLiteral_16760/*"bit_reward_shine01"*/, v33);
    sub_B16FFC(&StringLiteral_11074/*"RESULT_EQEXP_UPSKILLLV"*/, v34);
    sub_B16FFC(&StringLiteral_11073/*"RESULT_EQEXP_GETSKILL"*/, v35);
    sub_B16FFC(&StringLiteral_16761/*"bit_reward_shine02"*/, v36);
    sub_B16FFC(&StringLiteral_339/*"#,#"*/, v37);
    sub_B16FFC(&StringLiteral_1/*""*/, v38);
    byte_40FA3A3 = 1;
  }
  entity = 0LL;
  v39 = sub_B170CC(
          BattleResultExpComponent___c__DisplayClass61_0_TypeInfo,
          oldGame,
          oldEquip,
          masterLvInfoArray,
          resultAssetData);
  BattleResultExpComponent___c__DisplayClass61_0___ctor((BattleResultExpComponent___c__DisplayClass61_0_o *)v39, 0LL);
  if ( !v39 )
    goto LABEL_139;
  *(_QWORD *)(v39 + 16) = oldGame;
  v46 = v39 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v39 + 16), (System_Int32_array **)oldGame, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v39 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v39 + 24), (System_Int32_array **)this, v47, v48, v49, v50, v51, v52);
  *(_QWORD *)(v39 + 32) = masterLvInfoArray;
  v53 = (__int64 *)(v39 + 32);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v39 + 32),
    (System_Int32_array **)masterLvInfoArray,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = *(struct UserGameEntity_o **)(v39 + 16);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = v60;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.oldGame,
    (System_Int32_array **)v60,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.oldEquip = v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.oldEquip,
    (System_Int32_array **)v14,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
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
    v76 = this->fields.knockdownRecordWindow;
    if ( !v76 )
      goto LABEL_139;
    BattleResultKnockdownComponent__setData(v76, knockdownResult, v75);
  }
  this->fields.updateFlg = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_139;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_139;
  v79 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          MasterData_WarQuestSelectionMaster,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v79;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.newGame,
    (System_Int32_array **)v79,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v87 )
    goto LABEL_139;
  v88 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v87,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !v14 )
    goto LABEL_139;
  if ( !v88 )
    goto LABEL_139;
  v89 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          v88,
          v14->fields.id,
          (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  this->fields.newEquip = (struct UserEquipEntity_o *)v89;
  p_newEquip = &this->fields.newEquip;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.newEquip,
    (System_Int32_array **)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  newGame = this->fields.newGame;
  if ( !newGame || !*(_QWORD *)v46 )
    goto LABEL_139;
  BattleResultExpComponent__setMasterExp(
    this,
    newGame->fields.exp - *(_QWORD *)(*(_QWORD *)v46 + 88LL),
    *(_QWORD *)(*(_QWORD *)v46 + 88LL),
    *(_DWORD *)(*(_QWORD *)v46 + 80LL),
    v96);
  equip_nameLabel = this->fields.equip_nameLabel;
  v100 = *(_QWORD *)&v14->fields.equipId.fields.currentCryptoKey;
  v99 = *(_QWORD *)&v14->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v207.fields.currentCryptoKey = v100;
  *(_QWORD *)&v207.fields.fakeValue = v99;
  v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v207, 0LL);
  EquipName = EquipMaster__getEquipName(v101, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, EquipName, 0LL),
        v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14->fields.equipId, 0LL),
        !*p_newEquip)
    || (p_lv = &v14->fields.lv,
        BattleResultExpComponent__setEquipExp(
          this,
          v103,
          (*p_newEquip)->fields.exp - v14->fields.exp,
          v14->fields.exp,
          v14->fields.lv,
          v104),
        !*(_QWORD *)v46)
    || (BattleResultExpComponent__setMasterLv(this, *(_DWORD *)(*(_QWORD *)v46 + 80LL), v106),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_139:
    sub_B170D4();
  }
  if ( !upParamList->max_length )
    goto LABEL_140;
  if ( !*(_QWORD *)v46 )
    goto LABEL_139;
  if ( !*p_newGame )
    goto LABEL_139;
  v112 = upParamList->m_Items[0];
  if ( !v112 )
    goto LABEL_139;
  BattleResultMasterUpStatusComponent__setData(v112, *(_DWORD *)(*(_QWORD *)v46 + 80LL), (*p_newGame)->fields.lv, v110);
  v117 = (System_Func_float__int__int__o *)sub_B170CC(System_Func_float__int__int__TypeInfo, v113, v114, v115, v116);
  System_Func_float__int__int____ctor(
    v117,
    (Il2CppObject *)v39,
    Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__,
    (const MethodInfo_2B76434 *)Method_System_Func_float__int__int___ctor__);
  if ( !v117 )
    goto LABEL_139;
  ComponentsInChildren_USTimelineContainer = (void *)System_Func_float__int__int___Invoke(
                                                       v117,
                                                       -186.0,
                                                       35,
                                                       (const MethodInfo_2B76448 *)Method_System_Func_float__int__int__Invoke__);
  v119 = (int)ComponentsInChildren_USTimelineContainer;
  if ( (int)ComponentsInChildren_USTimelineContainer < 6 )
  {
    v120 = *v53;
    if ( *v53 )
    {
      v121 = this;
      v122 = 0LL;
      while ( v122 < *(int *)(v120 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_139;
        max_length = lvUpRewardSpArray->max_length;
        if ( v122 < (int)max_length )
        {
          if ( v122 >= max_length )
            goto LABEL_140;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v122],
            (System_String_o *)StringLiteral_16760/*"bit_reward_shine01"*/,
            v118);
          v120 = *v53;
        }
        ++v122;
        if ( !v120 )
          goto LABEL_139;
      }
      v146 = 35;
    }
    else
    {
      v121 = this;
      v146 = 35;
    }
    goto LABEL_70;
  }
  v125 = this->fields.upParamList;
  if ( !v125 )
    goto LABEL_139;
  if ( !v125->max_length )
    goto LABEL_140;
  v126 = (UnityEngine_Component_o *)v125->m_Items[0];
  if ( !v126 )
    goto LABEL_139;
  transform = UnityEngine_Component__get_transform(v126, 0LL);
  if ( !transform )
    goto LABEL_139;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_139;
  v129 = v14;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               parent,
                                               (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !ComponentsInChildren_USTimelineContainer )
    goto LABEL_139;
  v130 = *((_DWORD *)ComponentsInChildren_USTimelineContainer + 6);
  v131 = ComponentsInChildren_USTimelineContainer;
  if ( v130 >= 1 )
  {
    v132 = 0;
    while ( v132 < v130 )
    {
      v133 = (UILabel_o *)*((_QWORD *)v131 + (int)v132 + 4);
      if ( !v133 )
        goto LABEL_139;
      UILabel__set_fontSize(v133, v133->fields.mFontSize - 2, 0LL);
      v130 = *((_DWORD *)v131 + 6);
      if ( (int)++v132 >= v130 )
        goto LABEL_51;
    }
    goto LABEL_140;
  }
LABEL_51:
  v134 = this->fields.lvUpRewardSpArray;
  if ( !v134 )
    goto LABEL_139;
  if ( !v134->max_length )
    goto LABEL_140;
  v135 = (UIWidget_o *)v134->m_Items[0];
  if ( !v135 )
    goto LABEL_139;
  UIWidget__set_width(v135, v135->fields.mWidth - 5, 0LL);
  v136 = this->fields.lvUpRewardSpArray;
  if ( !v136 )
    goto LABEL_139;
  if ( !v136->max_length )
    goto LABEL_140;
  v137 = (UIWidget_o *)v136->m_Items[0];
  if ( !v137 )
    goto LABEL_139;
  v14 = v129;
  UIWidget__set_height(v137, v137->fields.mHeight - 5, 0LL);
  v138 = this->fields.lvUpRewardSpArray;
  if ( !v138 )
    goto LABEL_139;
  if ( v138->max_length <= 1 )
    goto LABEL_140;
  v139 = (UIWidget_o *)v138->m_Items[1];
  if ( !v139 )
    goto LABEL_139;
  UIWidget__set_width(v139, v139->fields.mWidth - 5, 0LL);
  v140 = this->fields.lvUpRewardSpArray;
  if ( !v140 )
    goto LABEL_139;
  if ( v140->max_length <= 1 )
    goto LABEL_140;
  v141 = (UIWidget_o *)v140->m_Items[1];
  if ( !v141 )
    goto LABEL_139;
  UIWidget__set_height(v141, v141->fields.mHeight - 5, 0LL);
  ComponentsInChildren_USTimelineContainer = (void *)System_Func_float__int__int___Invoke(
                                                       v117,
                                                       -186.0,
                                                       31,
                                                       (const MethodInfo_2B76448 *)Method_System_Func_float__int__int__Invoke__);
  v121 = this;
  v143 = this->fields.lvUpRewardSpArray;
  if ( !v143 )
    goto LABEL_139;
  if ( !v143->max_length )
    goto LABEL_140;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v143->m_Items[0],
    (System_String_o *)StringLiteral_16761/*"bit_reward_shine02"*/,
    v142);
  v145 = this->fields.lvUpRewardSpArray;
  if ( !v145 )
    goto LABEL_139;
  if ( v145->max_length <= 1 )
  {
LABEL_140:
    sub_B17100(ComponentsInChildren_USTimelineContainer, v108, v109);
    sub_B170A0();
  }
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v145->m_Items[1],
    (System_String_o *)StringLiteral_16761/*"bit_reward_shine02"*/,
    v144);
  v146 = 31;
LABEL_70:
  masterLevelwindowSprite = (UIWidget_o *)v121->fields.masterLevelwindowSprite;
  if ( !masterLevelwindowSprite )
    goto LABEL_139;
  UIWidget__set_height(masterLevelwindowSprite, v146 * v119 + 134, 0LL);
  if ( !*(_QWORD *)v46 )
    goto LABEL_139;
  if ( !*p_newGame )
    goto LABEL_139;
  v121->fields.updateFlg |= *(_QWORD *)(*(_QWORD *)v46 + 88LL) != (*p_newGame)->fields.exp;
  BattleResultExpComponent__setEquipLv(v121, *p_lv, v148);
  equip_oldlevelLabel = v121->fields.equip_oldlevelLabel;
  v150 = System_Int32__ToString((int32_t)p_lv, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_139;
  v151 = v150 ? v150 : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v151, 0LL);
  newEquip = v121->fields.newEquip;
  if ( !newEquip )
    goto LABEL_139;
  equip_newlevelLabel = v121->fields.equip_newlevelLabel;
  v154 = System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_139;
  v155 = v154 ? v154 : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v155, 0LL);
  v160 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v156, v157, v158, v159);
  System_Text_StringBuilder___ctor(v160, 0LL);
  SkillIdList = UserEquipEntity__getSkillIdList(v14, 0LL);
  if ( !*p_newEquip )
    goto LABEL_139;
  v162 = SkillIdList;
  v163 = UserEquipEntity__getSkillIdList(*p_newEquip, 0LL);
  SkillLvList = UserEquipEntity__getSkillLvList(v14, 0LL);
  if ( !*p_newEquip )
    goto LABEL_139;
  v164 = UserEquipEntity__getSkillLvList(*p_newEquip, 0LL);
  v165 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v165 )
    goto LABEL_139;
  ComponentsInChildren_USTimelineContainer = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v165,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v162 )
    goto LABEL_139;
  v200 = v14;
  if ( (int)v162->max_length >= 1 )
  {
    v166 = (DataMasterBase_WarMaster__WarEntity__int__o *)ComponentsInChildren_USTimelineContainer;
    v167 = 0;
    v203 = &v164->m_Items[1];
    v168 = 0LL;
    v169 = &v163->m_Items[1];
    while ( 1 )
    {
      entity = 0LL;
      if ( !v163 )
        goto LABEL_139;
      if ( v168 >= v163->max_length )
        goto LABEL_140;
      if ( !v166 )
        goto LABEL_139;
      ComponentsInChildren_USTimelineContainer = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                           v166,
                                                           &entity,
                                                           v169[v168],
                                                           (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( entity && ((unsigned __int8)ComponentsInChildren_USTimelineContainer & 1) != 0 )
      {
        if ( v168 >= v162->max_length || v168 >= v163->max_length )
          goto LABEL_140;
        if ( v162->m_Items[v168 + 1] != v169[v168] )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v175 = LocalizationManager__Get((System_String_o *)StringLiteral_11073/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !entity )
            goto LABEL_139;
          v176 = v175;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          v178 = System_String__Format(v176, Name, 0LL);
          if ( !v160 )
            goto LABEL_139;
          ComponentsInChildren_USTimelineContainer = System_Text_StringBuilder__AppendLine_41915036(v160, v178, 0LL);
LABEL_114:
          v167 += 3;
          goto LABEL_115;
        }
        if ( !SkillLvList )
          goto LABEL_139;
        if ( v168 >= SkillLvList->max_length )
          goto LABEL_140;
        if ( !v164 )
          goto LABEL_139;
        if ( v168 >= v164->max_length )
          goto LABEL_140;
        if ( SkillLvList->m_Items[v168 + 1] != v203[v168] )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v170 = LocalizationManager__Get((System_String_o *)StringLiteral_11074/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !entity )
            goto LABEL_139;
          v171 = v170;
          ComponentsInChildren_USTimelineContainer = SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( v168 >= v164->max_length )
            goto LABEL_140;
          v172 = (Il2CppObject *)ComponentsInChildren_USTimelineContainer;
          v205 = v203[v168];
          v173 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v205);
          v174 = System_String__Format_43739268(v171, v172, v173, 0LL);
          if ( !v160 )
            goto LABEL_139;
          ComponentsInChildren_USTimelineContainer = System_Text_StringBuilder__AppendLine_41915036(v160, v174, 0LL);
          v121 = this;
          goto LABEL_114;
        }
      }
LABEL_115:
      if ( (__int64)++v168 >= (int)v162->max_length )
        goto LABEL_118;
    }
  }
  v167 = 0;
LABEL_118:
  eqConfRoot = v121->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_139;
  LODWORD(v208.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(v121->fields.eqConfRoot, 0LL);
  v208.fields.y = (float)v167 * 10.0;
  v208.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v208, 0LL);
  eqLevelwindowSprite = (UIWidget_o *)v121->fields.eqLevelwindowSprite;
  if ( !eqLevelwindowSprite )
    goto LABEL_139;
  UIWidget__set_height(eqLevelwindowSprite, 22 * v167 + 134, 0LL);
  if ( !v160 )
    goto LABEL_139;
  equip_confLabel = v121->fields.equip_confLabel;
  v182 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v160->klass->vtable._3_ToString.method)(
                              v160,
                              v160->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_139;
  UILabel__set_text(equip_confLabel, v182, 0LL);
  if ( !*p_newEquip )
    goto LABEL_139;
  bestTurnDamage = v121->fields.bestTurnDamage;
  oldRecordDamage = v121->fields.oldRecordDamage;
  v121->fields.updateFlg |= v200->fields.exp != (*p_newEquip)->fields.exp;
  damage_recordLabel = v121->fields.damage_recordLabel;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    v194 = System_Int64__ToString_38278592(
             (int64_t)&v121->fields.oldRecordDamage,
             (System_String_o *)StringLiteral_339/*"#,#"*/,
             0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, v194, 0LL);
      damage_battleLabel = v121->fields.damage_battleLabel;
      v196 = System_Int64__ToString_38278592(
               (int64_t)&v121->fields.bestTurnDamage,
               (System_String_o *)StringLiteral_339/*"#,#"*/,
               0LL);
      if ( damage_battleLabel )
      {
        UILabel__set_text(damage_battleLabel, v196, 0LL);
        v197 = (UIWidget_o *)v121->fields.damage_recordLabel;
        if ( v197 )
        {
          UIWidget__set_color(v197, v121->fields.record_intactColor, 0LL);
          v198 = (UIWidget_o *)v121->fields.damage_battleLabel;
          if ( v198 )
          {
            UIWidget__set_color(v198, v121->fields.damage_intactColor, 0LL);
            damage_recordRenewalSp = (UnityEngine_Component_o *)v121->fields.damage_recordRenewalSp;
            if ( damage_recordRenewalSp )
            {
              gameObject = UnityEngine_Component__get_gameObject(damage_recordRenewalSp, 0LL);
              if ( gameObject )
              {
                v193 = 0;
                goto LABEL_138;
              }
            }
          }
        }
      }
    }
    goto LABEL_139;
  }
  v186 = System_Int64__ToString_38278592(
           (int64_t)&v121->fields.bestTurnDamage,
           (System_String_o *)StringLiteral_339/*"#,#"*/,
           0LL);
  if ( !damage_recordLabel )
    goto LABEL_139;
  UILabel__set_text(damage_recordLabel, v186, 0LL);
  v187 = v121->fields.damage_battleLabel;
  v188 = System_Int64__ToString_38278592(
           (int64_t)&v121->fields.bestTurnDamage,
           (System_String_o *)StringLiteral_339/*"#,#"*/,
           0LL);
  if ( !v187 )
    goto LABEL_139;
  UILabel__set_text(v187, v188, 0LL);
  v189 = (UIWidget_o *)v121->fields.damage_recordLabel;
  if ( !v189 )
    goto LABEL_139;
  UIWidget__set_color(v189, v121->fields.record_renewalColor, 0LL);
  v190 = (UIWidget_o *)v121->fields.damage_battleLabel;
  if ( !v190 )
    goto LABEL_139;
  UIWidget__set_color(v190, v121->fields.damage_renewalColor, 0LL);
  v191 = (UnityEngine_Component_o *)v121->fields.damage_recordRenewalSp;
  if ( !v191 )
    goto LABEL_139;
  gameObject = UnityEngine_Component__get_gameObject(v191, 0LL);
  if ( !gameObject )
    goto LABEL_139;
  v193 = 1;
LABEL_138:
  UnityEngine_GameObject__SetActive(gameObject, v193, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__updateValueActual(
        BattleResultExpComponent_o *this,
        float val,
        bool isFinish,
        const MethodInfo *method)
{
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  double v9; // d0
  int64_t v10; // x0
  const MethodInfo *v11; // x4
  struct UserGameEntity_o *v12; // x8
  int64_t exp; // x2
  struct UserGameEntity_o *v14; // x9
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  double v17; // d0
  int32_t v18; // w0
  struct UserEquipEntity_o *v19; // x8
  int32_t v20; // w21
  __int64 v21; // x20
  __int64 v22; // x22
  int32_t v23; // w0
  const MethodInfo *v24; // x5
  struct UserEquipEntity_o *v25; // x8
  struct UserEquipEntity_o *v26; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40FA3AC & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isFinish);
    byte_40FA3AC = 1;
  }
  oldGame = this->fields.oldGame;
  if ( !oldGame )
    goto LABEL_22;
  newGame = this->fields.newGame;
  if ( !newGame )
    goto LABEL_22;
  v9 = BattleUtility__LerpDouble((double)oldGame->fields.exp, (double)newGame->fields.exp, val, 0LL);
  v10 = BattleUtility__FloorToLong(v9, 0LL);
  v12 = this->fields.newGame;
  if ( isFinish )
  {
    if ( !v12 )
      goto LABEL_22;
    exp = v12->fields.exp;
  }
  else
  {
    exp = v10;
    if ( !v12 )
      goto LABEL_22;
  }
  v14 = this->fields.oldGame;
  if ( !v14 )
    goto LABEL_22;
  BattleResultExpComponent__setMasterExp(this, v12->fields.exp - v14->fields.exp, exp, v14->fields.lv, v11);
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_22;
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_22;
  v17 = BattleUtility__LerpDouble((double)oldEquip->fields.exp, (double)newEquip->fields.exp, val, 0LL);
  v18 = BattleUtility__FloorToInt_23374264(v17, 0LL);
  v19 = this->fields.newEquip;
  if ( isFinish )
  {
    if ( !v19 )
      goto LABEL_22;
    v20 = v19->fields.exp;
  }
  else
  {
    v20 = v18;
    if ( !v19 )
      goto LABEL_22;
  }
  v22 = *(_QWORD *)&v19->fields.equipId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v22;
  *(_QWORD *)&v27.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
  v25 = this->fields.newEquip;
  if ( !v25 || (v26 = this->fields.oldEquip) == 0LL )
LABEL_22:
    sub_B170D4();
  BattleResultExpComponent__setEquipExp(this, v23, v25->fields.exp - v26->fields.exp, v20, v26->fields.lv, v24);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct UserGameEntity_o *oldGame; // x8
  struct BattleResultExpComponent_o *_4__this; // x10
  struct UserGameEntity_o *newGame; // x9
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x10
  UnityEngine_Component_o *v20; // x0
  int32_t actMax; // w19
  int32_t v22; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleResultExpComponent_o *v24; // x8
  struct BattleResultMasterUpStatusComponent_array *v25; // x8
  BattleResultMasterUpStatusComponent_o *v26; // x0
  struct BattleResultExpComponent_o *v27; // x8
  struct BattleResultMasterUpStatusComponent_array *v28; // x9
  struct UserGameEntity_o *v29; // x10
  struct UserGameEntity_o *v30; // x8
  BattleResultMasterUpStatusComponent_o *v31; // x0
  int v32; // w22
  struct UserGameEntity_o *v33; // x8
  struct BattleResultExpComponent_o *v34; // x10
  struct UserGameEntity_o *v35; // x9
  struct BattleResultMasterUpStatusComponent_array *v36; // x10
  UnityEngine_Component_o *v37; // x0
  int32_t costMax; // w19
  int32_t v39; // w21
  UnityEngine_GameObject_o *v40; // x0
  struct BattleResultExpComponent_o *v41; // x8
  struct BattleResultMasterUpStatusComponent_array *v42; // x8
  BattleResultMasterUpStatusComponent_o *v43; // x0
  struct BattleResultExpComponent_o *v44; // x8
  struct BattleResultMasterUpStatusComponent_array *v45; // x9
  struct UserGameEntity_o *v46; // x10
  struct UserGameEntity_o *v47; // x8
  BattleResultMasterUpStatusComponent_o *v48; // x0
  struct BattleResultExpComponent_o *v49; // x8
  struct BattleResultMasterUpStatusComponent_array *v50; // x8
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Transform_o *transform; // x0
  struct UserGameEntity_o *v54; // x8
  struct BattleResultExpComponent_o *v55; // x10
  struct UserGameEntity_o *v56; // x9
  struct BattleResultMasterUpStatusComponent_array *v57; // x10
  UnityEngine_Component_o *v58; // x0
  int32_t friendKeep; // w19
  int32_t v60; // w21
  UnityEngine_GameObject_o *v61; // x0
  struct BattleResultExpComponent_o *v62; // x8
  struct BattleResultMasterUpStatusComponent_array *v63; // x8
  BattleResultMasterUpStatusComponent_o *v64; // x0
  struct BattleResultExpComponent_o *v65; // x8
  struct BattleResultMasterUpStatusComponent_array *v66; // x9
  struct UserGameEntity_o *v67; // x10
  struct UserGameEntity_o *v68; // x8
  BattleResultMasterUpStatusComponent_o *v69; // x0
  struct BattleResultExpComponent_o *v70; // x8
  struct BattleResultMasterUpStatusComponent_array *v71; // x8
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_Transform_o *v74; // x0
  WebViewManager_o *Instance; // x0
  struct BattleResultExpComponent_o *v76; // x8
  struct BattleResultMasterUpStatusComponent_array *v77; // x8
  EventMaster_o *v78; // x21
  UnityEngine_Component_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  struct BattleResultExpComponent_o *v81; // x8
  struct BattleResultMasterUpStatusComponent_array *v82; // x8
  BattleResultMasterUpStatusComponent_o *v83; // x8
  __int64 *v84; // x9
  struct BattleResultExpComponent_o *v85; // x8
  struct BattleResultMasterUpStatusComponent_array *v86; // x8
  UnityEngine_Component_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  UnityEngine_Transform_o *v89; // x0
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  __int64 v91; // x8
  il2cpp_array_size_t v92; // w24
  int v93; // w25
  struct BattleResultExpComponent_o *v94; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  UnityEngine_Component_o *v96; // x0
  UnityEngine_Transform_o *v97; // x0
  UnityEngine_Transform_o *parent; // x0
  struct BattleResultExpComponent_o *v99; // x8
  struct UISprite_array *v100; // x8
  struct MasterLvRewardInfo_array *v101; // x9
  MasterLvRewardInfo_o *v102; // x0
  UISprite_o *v103; // x22
  GiftEntity_o *GiftEntity; // x0
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v106; // x8
  MasterLvRewardInfo_o *v107; // x0
  GiftEntity_o *v108; // x0
  struct BattleResultExpComponent_o *v109; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v111; // x9
  MasterLvRewardInfo_o *v112; // x9
  Il2CppObject *v113; // x23
  UILabel_o *v114; // x22
  Il2CppObject *v115; // x0
  System_String_o *v116; // x0
  struct MasterLvRewardInfo_array *v117; // x8
  int v119; // [xsp+4h] [xbp-7Ch]
  int32_t num; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_40F718A & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&baseHeight);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_2475/*"BATTLE_RESULTEXP_FULLAP"*/, v9);
    sub_B16FFC(&StringLiteral_2474/*"BATTLE_RESULTEXP_FRIENDMAX"*/, v10);
    sub_B16FFC(&StringLiteral_2470/*"BATTLE_RESULTEXP_APMAX"*/, v11);
    sub_B16FFC(&StringLiteral_2476/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/, v12);
    sub_B16FFC(&StringLiteral_2471/*"BATTLE_RESULTEXP_COSTMAX"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)sub_B16FFC(&StringLiteral_23483/*"{0} {1}個"*/, v15);
    byte_40F718A = 1;
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
  v20 = (UnityEngine_Component_o *)upParamList->m_Items[1];
  if ( !v20 )
    goto LABEL_130;
  actMax = oldGame->fields.actMax;
  v22 = newGame->fields.actMax;
  gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
  if ( !gameObject )
    goto LABEL_130;
  if ( actMax >= v22 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v32 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v24 = v5->fields.__4__this;
    if ( !v24 )
      goto LABEL_130;
    v25 = v24->fields.upParamList;
    if ( !v25 )
      goto LABEL_130;
    if ( v25->max_length <= 1 )
      goto LABEL_131;
    v26 = v25->m_Items[1];
    if ( !v26 )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(v26, (System_String_o *)StringLiteral_2470/*"BATTLE_RESULTEXP_APMAX"*/, 0LL);
    v27 = v5->fields.__4__this;
    if ( !v27 )
      goto LABEL_130;
    v28 = v27->fields.upParamList;
    if ( !v28 )
      goto LABEL_130;
    if ( v28->max_length <= 1 )
      goto LABEL_131;
    v29 = v5->fields.oldGame;
    if ( !v29 )
      goto LABEL_130;
    v30 = v27->fields.newGame;
    if ( !v30 )
      goto LABEL_130;
    v31 = v28->m_Items[1];
    if ( !v31 )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(v31, v29->fields.actMax, v30->fields.actMax, 0LL);
    v32 = 1;
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
  if ( v36->max_length <= 2 )
    goto LABEL_131;
  v37 = (UnityEngine_Component_o *)v36->m_Items[2];
  if ( !v37 )
    goto LABEL_130;
  costMax = v33->fields.costMax;
  v39 = v35->fields.costMax;
  v40 = UnityEngine_Component__get_gameObject(v37, 0LL);
  if ( !v40 )
    goto LABEL_130;
  if ( costMax >= v39 )
  {
    UnityEngine_GameObject__SetActive(v40, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(v40, 1, 0LL);
    v41 = v5->fields.__4__this;
    if ( !v41 )
      goto LABEL_130;
    v42 = v41->fields.upParamList;
    if ( !v42 )
      goto LABEL_130;
    if ( v42->max_length <= 2 )
      goto LABEL_131;
    v43 = v42->m_Items[2];
    if ( !v43 )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(v43, (System_String_o *)StringLiteral_2471/*"BATTLE_RESULTEXP_COSTMAX"*/, 0LL);
    v44 = v5->fields.__4__this;
    if ( !v44 )
      goto LABEL_130;
    v45 = v44->fields.upParamList;
    if ( !v45 )
      goto LABEL_130;
    if ( v45->max_length <= 2 )
      goto LABEL_131;
    v46 = v5->fields.oldGame;
    if ( !v46 )
      goto LABEL_130;
    v47 = v44->fields.newGame;
    if ( !v47 )
      goto LABEL_130;
    v48 = v45->m_Items[2];
    if ( !v48 )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(v48, v46->fields.costMax, v47->fields.costMax, 0LL);
    v49 = v5->fields.__4__this;
    if ( !v49 )
      goto LABEL_130;
    v50 = v49->fields.upParamList;
    if ( !v50 )
      goto LABEL_130;
    if ( v50->max_length <= 2 )
      goto LABEL_131;
    v51 = (UnityEngine_Component_o *)v50->m_Items[2];
    if ( !v51 )
      goto LABEL_130;
    v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
    if ( !v52 )
      goto LABEL_130;
    transform = UnityEngine_GameObject__get_transform(v52, 0LL);
    if ( !transform )
      goto LABEL_130;
    v124.fields.z = 0.0;
    v124.fields.y = height - (float)(v32 * baseHeight);
    v124.fields.x = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v124, 0LL);
    ++v32;
  }
  v54 = v5->fields.oldGame;
  if ( !v54 )
    goto LABEL_130;
  v55 = v5->fields.__4__this;
  if ( !v55 )
    goto LABEL_130;
  v56 = v55->fields.newGame;
  if ( !v56 )
    goto LABEL_130;
  v57 = v55->fields.upParamList;
  if ( !v57 )
    goto LABEL_130;
  if ( v57->max_length <= 3 )
    goto LABEL_131;
  v58 = (UnityEngine_Component_o *)v57->m_Items[3];
  if ( !v58 )
    goto LABEL_130;
  friendKeep = v54->fields.friendKeep;
  v60 = v56->fields.friendKeep;
  v61 = UnityEngine_Component__get_gameObject(v58, 0LL);
  if ( !v61 )
    goto LABEL_130;
  if ( friendKeep >= v60 )
  {
    UnityEngine_GameObject__SetActive(v61, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(v61, 1, 0LL);
    v62 = v5->fields.__4__this;
    if ( !v62 )
      goto LABEL_130;
    v63 = v62->fields.upParamList;
    if ( !v63 )
      goto LABEL_130;
    if ( v63->max_length <= 3 )
      goto LABEL_131;
    v64 = v63->m_Items[3];
    if ( !v64 )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(v64, (System_String_o *)StringLiteral_2474/*"BATTLE_RESULTEXP_FRIENDMAX"*/, 0LL);
    v65 = v5->fields.__4__this;
    if ( !v65 )
      goto LABEL_130;
    v66 = v65->fields.upParamList;
    if ( !v66 )
      goto LABEL_130;
    if ( v66->max_length <= 3 )
      goto LABEL_131;
    v67 = v5->fields.oldGame;
    if ( !v67 )
      goto LABEL_130;
    v68 = v65->fields.newGame;
    if ( !v68 )
      goto LABEL_130;
    v69 = v66->m_Items[3];
    if ( !v69 )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(v69, v67->fields.friendKeep, v68->fields.friendKeep, 0LL);
    v70 = v5->fields.__4__this;
    if ( !v70 )
      goto LABEL_130;
    v71 = v70->fields.upParamList;
    if ( !v71 )
      goto LABEL_130;
    if ( v71->max_length <= 3 )
      goto LABEL_131;
    v72 = (UnityEngine_Component_o *)v71->m_Items[3];
    if ( !v72 )
      goto LABEL_130;
    v73 = UnityEngine_Component__get_gameObject(v72, 0LL);
    if ( !v73 )
      goto LABEL_130;
    v74 = UnityEngine_GameObject__get_transform(v73, 0LL);
    if ( !v74 )
      goto LABEL_130;
    v125.fields.z = 0.0;
    v125.fields.y = height - (float)(v32 * baseHeight);
    v125.fields.x = 0.0;
    UnityEngine_Transform__set_localPosition(v74, v125, 0LL);
    ++v32;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  v76 = v5->fields.__4__this;
  if ( !v76 )
    goto LABEL_130;
  v77 = v76->fields.upParamList;
  if ( !v77 )
    goto LABEL_130;
  if ( v77->max_length <= 4 )
    goto LABEL_131;
  v78 = (EventMaster_o *)this;
  v79 = (UnityEngine_Component_o *)v77->m_Items[4];
  if ( !v79 )
    goto LABEL_130;
  v80 = UnityEngine_Component__get_gameObject(v79, 0LL);
  if ( !v80 )
    goto LABEL_130;
  UnityEngine_GameObject__SetActive(v80, 1, 0LL);
  if ( !v78 )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)EventMaster__IsBPEnable(v78, 0LL);
  v81 = v5->fields.__4__this;
  if ( !v81 )
    goto LABEL_130;
  v82 = v81->fields.upParamList;
  if ( !v82 )
    goto LABEL_130;
  if ( v82->max_length <= 4 )
    goto LABEL_131;
  v83 = v82->m_Items[4];
  if ( !v83
    || (((unsigned __int8)this & 1) == 0 ? (v84 = &StringLiteral_2475/*"BATTLE_RESULTEXP_FULLAP"*/) : (v84 = &StringLiteral_2476/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/),
        (BattleResultMasterUpStatusComponent__setTitle(v83, (System_String_o *)*v84, 0LL),
         (v85 = v5->fields.__4__this) == 0LL)
     || (v86 = v85->fields.upParamList) == 0LL) )
  {
LABEL_130:
    sub_B170D4();
  }
  if ( v86->max_length <= 4 )
  {
LABEL_131:
    sub_B17100(this, *(_QWORD *)&baseHeight, method);
    sub_B170A0();
  }
  v87 = (UnityEngine_Component_o *)v86->m_Items[4];
  if ( !v87 )
    goto LABEL_130;
  v88 = UnityEngine_Component__get_gameObject(v87, 0LL);
  if ( !v88 )
    goto LABEL_130;
  v89 = UnityEngine_GameObject__get_transform(v88, 0LL);
  if ( !v89 )
    goto LABEL_130;
  v126.fields.z = 0.0;
  v126.fields.y = height - (float)(v32 * baseHeight);
  v126.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition(v89, v126, 0LL);
  masterLvInfoArray = v5->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)(unsigned int)(v32 + 1);
  if ( masterLvInfoArray )
  {
    v91 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v91 <= 2 && (int)v91 >= 1 )
    {
      v119 = v32 + 1;
      v92 = 0;
      v93 = baseHeight * (_DWORD)this;
      do
      {
        v94 = v5->fields.__4__this;
        if ( !v94 )
          goto LABEL_130;
        lvUpRewardSpArray = v94->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_130;
        if ( v92 >= lvUpRewardSpArray->max_length )
          goto LABEL_131;
        v96 = (UnityEngine_Component_o *)lvUpRewardSpArray->m_Items[v92];
        if ( !v96 )
          goto LABEL_130;
        v97 = UnityEngine_Component__get_transform(v96, 0LL);
        if ( !v97 )
          goto LABEL_130;
        parent = UnityEngine_Transform__get_parent(v97, 0LL);
        if ( !parent )
          goto LABEL_130;
        v127.fields.y = height - (float)v93;
        v127.fields.z = 0.0;
        v127.fields.x = -30.0;
        UnityEngine_Transform__set_localPosition(parent, v127, 0LL);
        v99 = v5->fields.__4__this;
        if ( !v99 )
          goto LABEL_130;
        v100 = v99->fields.lvUpRewardSpArray;
        if ( !v100 )
          goto LABEL_130;
        if ( v92 >= v100->max_length )
          goto LABEL_131;
        v101 = v5->fields.masterLvInfoArray;
        if ( !v101 )
          goto LABEL_130;
        if ( v92 >= v101->max_length )
          goto LABEL_131;
        v102 = v101->m_Items[v92];
        if ( !v102 )
          goto LABEL_130;
        v103 = v100->m_Items[v92];
        GiftEntity = MasterLvRewardInfo__getGiftEntity(v102, 0LL);
        if ( !GiftEntity )
          goto LABEL_130;
        IconImageId = GiftEntity__getIconImageId(GiftEntity, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)AtlasManager__SetItem(v103, IconImageId, 0LL);
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        countText = (System_String_o *)StringLiteral_1/*""*/;
        v106 = v5->fields.masterLvInfoArray;
        if ( !v106 )
          goto LABEL_130;
        if ( v92 >= v106->max_length )
          goto LABEL_131;
        v107 = v106->m_Items[v92];
        if ( !v107 )
          goto LABEL_130;
        v108 = MasterLvRewardInfo__getGiftEntity(v107, 0LL);
        if ( !v108 )
          goto LABEL_130;
        GiftEntity__GetInfo(v108, &nameText, &countText, 0LL);
        v109 = v5->fields.__4__this;
        if ( !v109 )
          goto LABEL_130;
        lvUpRewardLabelArray = v109->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_130;
        if ( v92 >= lvUpRewardLabelArray->max_length )
          goto LABEL_131;
        v111 = v5->fields.masterLvInfoArray;
        if ( !v111 )
          goto LABEL_130;
        if ( v92 >= v111->max_length )
          goto LABEL_131;
        v112 = v111->m_Items[v92];
        if ( !v112 )
          goto LABEL_130;
        v113 = (Il2CppObject *)nameText;
        v114 = lvUpRewardLabelArray->m_Items[v92];
        num = v112->fields.num;
        v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        v116 = System_String__Format_43739268((System_String_o *)StringLiteral_23483/*"{0} {1}個"*/, v113, v115, 0LL);
        if ( !v114 )
          goto LABEL_130;
        UILabel__set_text(v114, v116, 0LL);
        v117 = v5->fields.masterLvInfoArray;
        if ( !v117 )
          goto LABEL_130;
        ++v92;
        v93 += baseHeight;
      }
      while ( (signed int)v92 < (signed int)v117->max_length );
      LODWORD(this) = v119 + v92;
    }
  }
  return (int)this;
}