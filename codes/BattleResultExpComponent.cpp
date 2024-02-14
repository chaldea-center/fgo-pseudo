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
  __int64 v4; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42148E7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultExpComponent_endClose__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_42148E7 = 1;
  }
  window = this->fields.window;
  v6 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_B0D97C(v7);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v6,
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *transform; // x22
  int v17; // s0
  UnityEngine_Transform_o *v20; // x22
  int v21; // s0
  int parentComp; // w8
  BattleResultExpComponent_o *v25; // x21
  unsigned int v26; // w22
  __int64 v27; // x0

  v8 = this;
  if ( (byte_42148E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultExpComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_42148E3 = 1;
  }
  if ( !data )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               effectName,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         Object_WarBoardWaitTimeSetting,
                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_20;
  v14 = (UnityEngine_GameObject_o *)this;
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_20;
  v15 = (UnityEngine_Transform_o *)this;
  this = (BattleResultExpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0LL);
  if ( !v15 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)this, 0LL);
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  v20 = UnityEngine_GameObject__get_transform(v14, 0LL);
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL);
  if ( !v20 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                         v14,
                                         (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_20;
  parentComp = (int)this->fields.parentComp;
  v25 = this;
  if ( parentComp >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= parentComp )
      {
        v27 = sub_B0D9A8(this);
        sub_B0D948(v27, 0LL);
      }
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v25->fields.myFsm + (int)v26);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      parentComp = (int)v25->fields.parentComp;
      if ( (int)++v26 >= parentComp )
        goto LABEL_18;
    }
LABEL_20:
    sub_B0D97C(this);
  }
LABEL_18:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_20;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v25,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleWindowComponent_o *window; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  System_String_o *v18; // x20
  System_String_o *v19; // x20

  if ( (byte_42148DF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_2499/*"BATTLE_RESULTEXP_MASTERTITLE"*/, v7);
    sub_B0D8A4(&StringLiteral_2494/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, v8);
    byte_42148DF = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_UIUnityRenderer__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effectUIList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2499/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !window )
    goto LABEL_36;
  v18 = (System_String_o *)window;
  if ( !System_String__Equals_43837244((System_String_o *)window, (System_String_o *)StringLiteral_2499/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_36;
    UILabel__set_text((UILabel_o *)window, v18, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2494/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !window )
LABEL_36:
    sub_B0D97C(window);
  v19 = (System_String_o *)window;
  if ( !System_String__Equals_43837244((System_String_o *)window, (System_String_o *)StringLiteral_2494/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v19, 0LL);
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
  UnityEngine_GameObject_c *klass; // x8
  __int64 v18; // x11
  UnityEngine_GameObject_c *v19; // x22
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v21; // x20
  __int64 v22; // x21
  int32_t v23; // w20
  __int64 v24; // x8
  struct UnityEngine_GameObject_o **p_figureRoot; // x21
  UnityEngine_GameObject_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Object_array *v33; // x21
  UnityEngine_GameObject_o *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x22
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x1
  System_Collections_Hashtable_o *v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  char v102[4]; // [xsp+18h] [xbp-38h] BYREF
  int v103; // [xsp+1Ch] [xbp-34h] BYREF
  int v104; // [xsp+28h] [xbp-28h] BYREF
  int32_t overwriteImageId; // [xsp+2Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_42148E6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRootComponent_TypeInfo, method);
    sub_B0D8A4(&bool_TypeInfo, v3);
    sub_B0D8A4(&object___TypeInfo, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&float_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_23394/*"x"*/, v8);
    sub_B0D8A4(&StringLiteral_5508/*"END_OPEN"*/, v9);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v10);
    sub_B0D8A4(&StringLiteral_21334/*"oncompletetarget"*/, v11);
    sub_B0D8A4(&StringLiteral_18412/*"endMoveFigure"*/, v12);
    sub_B0D8A4(&StringLiteral_20030/*"islocal"*/, v13);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v14);
    sub_B0D8A4(&iTween_TypeInfo, v15);
    byte_42148E6 = 1;
  }
  overwriteImageId = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_72;
  klass = gameObject[1].klass;
  if ( klass
    && (v18 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *((unsigned __int8 *)klass->_1.image + 300) >= (unsigned int)v18) )
  {
    v19 = *(BattleRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * v18 - 8) == BattleRootComponent_TypeInfo
        ? gameObject[1].klass
        : 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_72;
  v22 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v106.fields.currentCryptoKey = v22;
  *(_QWORD *)&v106.fields.fakeValue = v21;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                             v106,
                                             0LL);
  if ( !v19 )
    goto LABEL_72;
  v23 = (int)gameObject;
  gameObject = *(UnityEngine_GameObject_o **)&v19->_1.this_arg.bits;
  if ( !gameObject )
    goto LABEL_72;
  overwriteImageId = BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0LL);
  gameObject = *(UnityEngine_GameObject_o **)&v19->_1.this_arg.bits;
  if ( !gameObject )
    goto LABEL_72;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0LL);
  if ( overwriteImageId == -1 )
  {
    p_figureRoot = &this->fields.figureRoot;
  }
  else
  {
    v24 = *(_QWORD *)&v19->_1.this_arg.bits;
    if ( !v24 )
      goto LABEL_72;
    p_figureRoot = &this->fields.figureRoot;
    MasterFigureManagerOld__CreatePrefab_20993748(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v24 + 392),
      v23,
      60,
      0LL,
      overwriteImageId,
      (System_Nullable_Vector3__o)0,
      0LL);
  }
  v26 = *p_figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_B0D8BC(object___TypeInfo, 10LL);
  if ( !gameObject )
LABEL_72:
    sub_B0D97C(gameObject);
  v33 = (System_Object_array *)gameObject;
  v34 = (UnityEngine_GameObject_o *)StringLiteral_23394/*"x"*/;
  if ( StringLiteral_23394/*"x"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_23394/*"x"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_73;
    v35 = (System_Int32_array **)StringLiteral_23394/*"x"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !v33->max_length )
    goto LABEL_71;
  v33->m_Items[0] = (Il2CppObject *)v35;
  sub_B0D840((BattleServantConfConponent_o *)v33->m_Items, v35, v27, v28, v29, v30, v31, v32);
  v104 = -1018691584;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v104);
  v42 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_73;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_71;
  v33->m_Items[1] = (Il2CppObject *)v42;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_22753/*"time"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_73;
    v49 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v33->max_length <= 2 )
    goto LABEL_71;
  v33->m_Items[2] = (Il2CppObject *)v49;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
  v103 = 1061997773;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v103);
  v56 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_73;
  }
  if ( v33->max_length <= 3 )
    goto LABEL_71;
  v33->m_Items[3] = (Il2CppObject *)v56;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[3], v56, v50, v51, v52, v53, v54, v55);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_20030/*"islocal"*/;
  if ( StringLiteral_20030/*"islocal"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_20030/*"islocal"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_73;
    v63 = (System_Int32_array **)StringLiteral_20030/*"islocal"*/;
  }
  else
  {
    v63 = 0LL;
  }
  if ( v33->max_length <= 4 )
    goto LABEL_71;
  v33->m_Items[4] = (Il2CppObject *)v63;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[4], v63, v57, v58, v59, v60, v61, v62);
  v102[0] = 1;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v102);
  v70 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_73;
  }
  if ( v33->max_length <= 5 )
    goto LABEL_71;
  v33->m_Items[5] = (Il2CppObject *)v70;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[5], v70, v64, v65, v66, v67, v68, v69);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21334/*"oncompletetarget"*/;
  if ( StringLiteral_21334/*"oncompletetarget"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21334/*"oncompletetarget"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_73;
    v77 = (System_Int32_array **)StringLiteral_21334/*"oncompletetarget"*/;
  }
  else
  {
    v77 = 0LL;
  }
  if ( v33->max_length <= 6 )
    goto LABEL_71;
  v33->m_Items[6] = (Il2CppObject *)v77;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[6], v77, v71, v72, v73, v74, v75, v76);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v84 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
    {
LABEL_73:
      v101 = sub_B0D99C(v34);
      sub_B0D948(v101, 0LL);
    }
  }
  if ( v33->max_length <= 7 )
    goto LABEL_71;
  v33->m_Items[7] = (Il2CppObject *)v84;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[7], v84, v78, v79, v80, v81, v82, v83);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_73;
    v91 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v33->max_length <= 8 )
    goto LABEL_71;
  v33->m_Items[8] = (Il2CppObject *)v91;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[8], v91, v85, v86, v87, v88, v89, v90);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_18412/*"endMoveFigure"*/;
  if ( StringLiteral_18412/*"endMoveFigure"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_18412/*"endMoveFigure"*/, v33->obj.klass->_1.element_class);
    if ( v34 )
    {
      v98 = (System_Int32_array **)StringLiteral_18412/*"endMoveFigure"*/;
      goto LABEL_64;
    }
    goto LABEL_73;
  }
  v98 = 0LL;
LABEL_64:
  if ( v33->max_length <= 9 )
  {
LABEL_71:
    v100 = sub_B0D9A8(v34);
    sub_B0D948(v100, 0LL);
  }
  v33->m_Items[9] = (Il2CppObject *)v98;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[9], v98, v92, v93, v94, v95, v96, v97);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v99 = iTween__Hash(v33, 0LL);
  iTween__MoveFrom_42386240(v26, v99, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5508/*"END_OPEN"*/, 0LL);
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
    sub_B0D97C(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__checkDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Object_o *damage_LvupSimpleAnim; // x20
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v12; // x20
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v15; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v20; // x21

  if ( (byte_42148F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultExpComponent_endOpenDamageRecord__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_16862/*"bit_result_levelup01"*/, v7);
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, v8);
    byte_42148F3 = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
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
                                  (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v12 = myFsm;
        if ( *(_WORD *)&myFsm->klass->_2.bitflags1 )
        {
          v13 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v13;
            p_offset += 2;
            if ( v13 >= *(unsigned __int16 *)&myFsm->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v15 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_15:
          v15 = sub_AA67A0(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v15)(v12, *(_QWORD *)(v15 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_50482404((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_34:
    sub_B0D97C(myFsm);
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
                                  (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_50564840(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_34;
  }
LABEL_29:
  damageRecordWindow = this->fields.damageRecordWindow;
  v20 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v17, v18);
  BattleWindowComponent_EndCall___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0LL);
  if ( !damageRecordWindow )
    goto LABEL_34;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._10_Open.method)(
    damageRecordWindow,
    v20,
    damageRecordWindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
}


void __fastcall BattleResultExpComponent__checkEquipLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultExpComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  UnityEngine_Object_o *equip_LvupSimpleAnim; // x20
  BattleResultExpComponent_c *klass; // x8
  BattleResultExpComponent_o *v13; // x20
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  UnityEngine_Object_o *equip_LvupAnim; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v21; // x21

  v2 = this;
  if ( (byte_42148F0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultExpComponent_endOpenEquipUp__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_16862/*"bit_result_levelup01"*/, v7);
    this = (BattleResultExpComponent_o *)sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, v8);
    byte_42148F0 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
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
                                             (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        klass = this->klass;
        v13 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v14 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v14;
            p_offset += 4;
            if ( v14 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_17;
          }
          v16 = (__int64)(&klass[1]._1.gc_desc + 2 * *p_offset);
        }
        else
        {
LABEL_17:
          v16 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_50482404((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_31;
        }
      }
    }
LABEL_36:
    sub_B0D97C(this);
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
                                             (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_50564840(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_31;
        }
      }
    }
    goto LABEL_36;
  }
LABEL_31:
  equipupwindow = v2->fields.equipupwindow;
  v21 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v18, v19);
  BattleWindowComponent_EndCall___ctor(v21, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_36;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v21,
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
  UnityEngine_Object_o *mst_LvupSimpleAnim; // x20
  SePlayer_c *klass; // x8
  SePlayer_o *v18; // x20
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v21; // x0
  UnityEngine_Object_o *mst_LvupAnim; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v26; // x21
  struct UserGameEntity_o *v27; // x9
  struct UserGameEntity_o *v28; // x8
  int32_t v29; // w20

  if ( (byte_42148EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultExpComponent_endOpenMasterUp__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_16862/*"bit_result_levelup01"*/, v8);
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, v9);
    sub_B0D8A4(&iTween_TypeInfo, v10);
    byte_42148EC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42502584(gameObject, 0LL);
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
    MeterSePlayer = (SePlayer_o *)this->fields.myFsm;
    if ( MeterSePlayer )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9321/*"NEXT"*/, 0LL);
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
                                      (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
                                      0LL);
      if ( MeterSePlayer )
      {
        klass = MeterSePlayer->klass;
        v18 = MeterSePlayer;
        if ( *(_WORD *)&MeterSePlayer->klass->_2.bitflags1 )
        {
          v19 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v19;
            p_offset += 2;
            if ( v19 >= *(unsigned __int16 *)&MeterSePlayer->klass->_2.bitflags1 )
              goto LABEL_22;
          }
          v21 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_22:
          v21 = sub_AA67A0(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v21)(v18, *(_QWORD *)(v21 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_50482404(
            (SimpleAnimation_o *)MeterSePlayer,
            (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_36;
        }
      }
    }
LABEL_46:
    sub_B0D97C(MeterSePlayer);
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
                                    (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
                                    0LL);
    if ( !MeterSePlayer )
      goto LABEL_46;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0LL);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_46;
    UnityEngine_Animation__Play_50564840(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
      0LL);
  }
LABEL_36:
  masterupwindow = this->fields.masterupwindow;
  v26 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v23, v24);
  BattleWindowComponent_EndCall___ctor(
    v26,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_46;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._10_Open.method)(
    masterupwindow,
    v26,
    masterupwindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  v27 = this->fields.oldGame;
  if ( !v27 )
    goto LABEL_46;
  v28 = this->fields.newGame;
  if ( !v28 )
    goto LABEL_46;
  v29 = v27->fields.lv + 1;
  while ( v29 <= v28->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( MeterSePlayer )
    {
      AdManager__TrackEvent((AdManager_o *)MeterSePlayer, 3, 2, v29, -1, 0LL, 0LL);
      v28 = this->fields.newGame;
      ++v29;
      if ( v28 )
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
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148F6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, v3);
    byte_42148F6 = 1;
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
    sub_B0D97C(myFsm);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  void *monitor; // x8
  void *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  BattleWindowComponent_EndCall_o *v8; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_42148F4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultExpComponent_endCloseDamageRecord__, method);
    this = (BattleResultExpComponent_o *)sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_42148F4 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor
    || (this = (BattleResultExpComponent_o *)*((_QWORD *)monitor + 6)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        v5 = v2[19].monitor,
        v8 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v6, v7),
        BattleWindowComponent_EndCall___ctor(v8, v2, Method_BattleResultExpComponent_endCloseDamageRecord__, 0LL),
        !v5) )
  {
    sub_B0D97C(this);
  }
  (*(void (__fastcall **)(void *, BattleWindowComponent_EndCall_o *, _QWORD))(*(_QWORD *)v5 + 504LL))(
    v5,
    v8,
    *(_QWORD *)(*(_QWORD *)v5 + 512LL));
}


void __fastcall BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  void *monitor; // x8
  Il2CppClass *klass; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  BattleWindowComponent_EndCall_o *v8; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_42148F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultExpComponent_endCloseEquipUp__, method);
    this = (BattleResultExpComponent_o *)sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_42148F1 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor
    || (this = (BattleResultExpComponent_o *)*((_QWORD *)monitor + 6)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        klass = v2[16].klass,
        v8 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v6, v7),
        BattleWindowComponent_EndCall___ctor(v8, v2, Method_BattleResultExpComponent_endCloseEquipUp__, 0LL),
        !klass) )
  {
    sub_B0D97C(this);
  }
  (*((void (__fastcall **)(Il2CppClass *, BattleWindowComponent_EndCall_o *, _QWORD))klass->_1.image + 63))(
    klass,
    v8,
    *((_QWORD *)klass->_1.image + 64));
}


void __fastcall BattleResultExpComponent__closeKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  struct BattleResultKnockdownComponent_o *v4; // x0

  if ( (byte_42148F7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42148F7 = 1;
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
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._12_Close.method)(
      v4,
      0LL,
      v4->klass->vtable._13_CompClose.methodPtr);
  }
}


void __fastcall BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _DWORD *monitor; // x21
  int v7; // w8
  unsigned int v8; // w20
  void *v9; // x8
  void *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  BattleWindowComponent_EndCall_o *v13; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_42148EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultExpComponent_endCloseMasterUp__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v4);
    this = (BattleResultExpComponent_o *)sub_B0D8A4(
                                           &Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__,
                                           v5);
    byte_42148EE = 1;
  }
  monitor = v2[31].monitor;
  if ( !monitor )
    goto LABEL_16;
  v7 = monitor[6];
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v7 <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = *(BattleResultExpComponent_o **)(*((_QWORD *)monitor + 2) + 8LL * (int)v8 + 32);
      if ( !this )
        break;
      this = (BattleResultExpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      monitor = v2[31].monitor;
      if ( !monitor )
        break;
      v7 = monitor[6];
      if ( (int)++v8 >= v7 )
        goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(this);
  }
LABEL_12:
  v9 = v2[1].monitor;
  if ( !v9 )
    goto LABEL_16;
  this = (BattleResultExpComponent_o *)*((_QWORD *)v9 + 6);
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v10 = v2[8].monitor;
  v13 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v11, v12);
  BattleWindowComponent_EndCall___ctor(v13, v2, Method_BattleResultExpComponent_endCloseMasterUp__, 0LL);
  if ( !v10 )
    goto LABEL_16;
  (*(void (__fastcall **)(void *, BattleWindowComponent_EndCall_o *, _QWORD))(*(_QWORD *)v10 + 504LL))(
    v10,
    v13,
    *(_QWORD *)(*(_QWORD *)v10 + 512LL));
}


void __fastcall BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42148E8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42148E8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_42148F5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42148F5 = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(damageRecordRoot);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_42148F2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42148F2 = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(equipLevelupRoot);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_42148EF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42148EF = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(masterLevelupRoot);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
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
  __int64 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Object_array *v22; // x21
  __int64 v23; // x0
  System_Int32_array **v24; // x1
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
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x22
  System_Collections_Hashtable_o *v88; // x0
  System_String_o *CommonSeName; // x20
  struct SePlayer_o *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x0
  __int64 v98; // x0
  float time_exptotal; // [xsp+Ch] [xbp-34h] BYREF
  int v100; // [xsp+18h] [xbp-28h] BYREF
  int v101; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42148E9 & 1) == 0 )
  {
    sub_B0D8A4(&object___TypeInfo, method);
    sub_B0D8A4(&SeManager_TypeInfo, v3);
    sub_B0D8A4(&float_TypeInfo, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v6);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v7);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v8);
    sub_B0D8A4(&StringLiteral_15115/*"UpdateValue"*/, v9);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v10);
    sub_B0D8A4(&StringLiteral_18800/*"finishUpdateValue"*/, v11);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v12);
    sub_B0D8A4(&iTween_TypeInfo, v13);
    byte_42148E9 = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v15 = sub_B0D8BC(object___TypeInfo, 10LL);
    if ( !v15 )
      sub_B0D97C(0LL);
    v22 = (System_Object_array *)v15;
    v23 = StringLiteral_18972/*"from"*/;
    if ( StringLiteral_18972/*"from"*/ )
    {
      v23 = sub_B0D964(StringLiteral_18972/*"from"*/, v22->obj.klass->_1.element_class);
      if ( !v23 )
        goto LABEL_62;
      v24 = (System_Int32_array **)StringLiteral_18972/*"from"*/;
    }
    else
    {
      v24 = 0LL;
    }
    if ( !v22->max_length )
      goto LABEL_61;
    v22->m_Items[0] = (Il2CppObject *)v24;
    sub_B0D840((BattleServantConfConponent_o *)v22->m_Items, v24, v16, v17, v18, v19, v20, v21);
    v101 = 0;
    v23 = j_il2cpp_value_box_0(float_TypeInfo, &v101);
    v31 = (System_Int32_array **)v23;
    if ( !v23 || (v23 = sub_B0D964(v23, v22->obj.klass->_1.element_class)) != 0 )
    {
      if ( v22->max_length <= 1 )
        goto LABEL_61;
      v22->m_Items[1] = (Il2CppObject *)v31;
      sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
      v23 = StringLiteral_22790/*"to"*/;
      if ( StringLiteral_22790/*"to"*/ )
      {
        v23 = sub_B0D964(StringLiteral_22790/*"to"*/, v22->obj.klass->_1.element_class);
        if ( !v23 )
          goto LABEL_62;
        v38 = (System_Int32_array **)StringLiteral_22790/*"to"*/;
      }
      else
      {
        v38 = 0LL;
      }
      if ( v22->max_length <= 2 )
        goto LABEL_61;
      v22->m_Items[2] = (Il2CppObject *)v38;
      sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
      v100 = 1065353216;
      v23 = j_il2cpp_value_box_0(float_TypeInfo, &v100);
      v45 = (System_Int32_array **)v23;
      if ( !v23 || (v23 = sub_B0D964(v23, v22->obj.klass->_1.element_class)) != 0 )
      {
        if ( v22->max_length <= 3 )
          goto LABEL_61;
        v22->m_Items[3] = (Il2CppObject *)v45;
        sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
        v23 = StringLiteral_21341/*"onupdate"*/;
        if ( StringLiteral_21341/*"onupdate"*/ )
        {
          v23 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v22->obj.klass->_1.element_class);
          if ( !v23 )
            goto LABEL_62;
          v52 = (System_Int32_array **)StringLiteral_21341/*"onupdate"*/;
        }
        else
        {
          v52 = 0LL;
        }
        if ( v22->max_length <= 4 )
          goto LABEL_61;
        v22->m_Items[4] = (Il2CppObject *)v52;
        sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[4], v52, v46, v47, v48, v49, v50, v51);
        v23 = StringLiteral_15115/*"UpdateValue"*/;
        if ( StringLiteral_15115/*"UpdateValue"*/ )
        {
          v23 = sub_B0D964(StringLiteral_15115/*"UpdateValue"*/, v22->obj.klass->_1.element_class);
          if ( !v23 )
            goto LABEL_62;
          v59 = (System_Int32_array **)StringLiteral_15115/*"UpdateValue"*/;
        }
        else
        {
          v59 = 0LL;
        }
        if ( v22->max_length <= 5 )
          goto LABEL_61;
        v22->m_Items[5] = (Il2CppObject *)v59;
        sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[5], v59, v53, v54, v55, v56, v57, v58);
        v23 = StringLiteral_21332/*"oncomplete"*/;
        if ( StringLiteral_21332/*"oncomplete"*/ )
        {
          v23 = sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v22->obj.klass->_1.element_class);
          if ( !v23 )
            goto LABEL_62;
          v66 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
        }
        else
        {
          v66 = 0LL;
        }
        if ( v22->max_length <= 6 )
          goto LABEL_61;
        v22->m_Items[6] = (Il2CppObject *)v66;
        sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[6], v66, v60, v61, v62, v63, v64, v65);
        v23 = StringLiteral_18800/*"finishUpdateValue"*/;
        if ( StringLiteral_18800/*"finishUpdateValue"*/ )
        {
          v23 = sub_B0D964(StringLiteral_18800/*"finishUpdateValue"*/, v22->obj.klass->_1.element_class);
          if ( !v23 )
            goto LABEL_62;
          v73 = (System_Int32_array **)StringLiteral_18800/*"finishUpdateValue"*/;
        }
        else
        {
          v73 = 0LL;
        }
        if ( v22->max_length <= 7 )
          goto LABEL_61;
        v22->m_Items[7] = (Il2CppObject *)v73;
        sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[7], v73, v67, v68, v69, v70, v71, v72);
        v23 = StringLiteral_22753/*"time"*/;
        if ( StringLiteral_22753/*"time"*/ )
        {
          v23 = sub_B0D964(StringLiteral_22753/*"time"*/, v22->obj.klass->_1.element_class);
          if ( !v23 )
            goto LABEL_62;
          v80 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
        }
        else
        {
          v80 = 0LL;
        }
        if ( v22->max_length <= 8 )
          goto LABEL_61;
        v22->m_Items[8] = (Il2CppObject *)v80;
        sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[8], v80, v74, v75, v76, v77, v78, v79);
        time_exptotal = this->fields.time_exptotal;
        v23 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal);
        v87 = (System_Int32_array **)v23;
        if ( !v23 || (v23 = sub_B0D964(v23, v22->obj.klass->_1.element_class)) != 0 )
        {
          if ( v22->max_length > 9 )
          {
            v22->m_Items[9] = (Il2CppObject *)v87;
            sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[9], v87, v81, v82, v83, v84, v85, v86);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v88 = iTween__Hash(v22, 0LL);
            iTween__ValueTo(gameObject, v88, 0LL);
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
              v90 = SoundManager__playSe(CommonSeName, 0LL);
              this->fields.MeterSePlayer = v90;
              sub_B0D840(
                (BattleServantConfConponent_o *)&this->fields.MeterSePlayer,
                (System_Int32_array **)v90,
                v91,
                v92,
                v93,
                v94,
                v95,
                v96);
            }
            return;
          }
LABEL_61:
          v97 = sub_B0D9A8(v23);
          sub_B0D948(v97, 0LL);
        }
      }
    }
LABEL_62:
    v98 = sub_B0D99C(v23);
    sub_B0D948(v98, 0LL);
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_B0D97C(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_B0D97C(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148ED & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15276/*"WAIT_OPEN"*/, method);
    byte_42148ED = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15276/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148EA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, method);
    byte_42148EA = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9321/*"NEXT"*/, 0LL);
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
  System_String_o *Instance; // x0
  EquipExpMaster_o *v18; // x25
  int32_t Level; // w22
  int32_t LevelMax; // w24
  System_String_o *v21; // x23
  UILabel_o *equip_atexpLabel; // x26
  const MethodInfo *v23; // x2
  int32_t exp; // w21
  float value; // s0
  float v26; // s8
  float v27; // s0
  int v29; // [xsp+Ch] [xbp-64h] BYREF
  EquipExpEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-54h] BYREF

  v31 = getexp;
  if ( (byte_42148E5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&equipId);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v12);
    sub_B0D8A4(&StringLiteral_11138/*"RESULT_EQUIP_MAXEXP"*/, v13);
    sub_B0D8A4(&StringLiteral_699/*"+ {0}"*/, v14);
    byte_42148E5 = 1;
  }
  entity = 0LL;
  v29 = 0;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v16 = (Il2CppObject *)System_Int32__ToString_38473032((int32_t)&v31, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
  Instance = System_String__Format((System_String_o *)StringLiteral_699/*"+ {0}"*/, v16, 0LL);
  if ( !equip_getexpLabel )
    goto LABEL_28;
  UILabel__set_text(equip_getexpLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_28;
  v18 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowexp, start_level, 0LL);
  LevelMax = EquipExpMaster__getLevelMax(v18, equipId, 0LL);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v18, equipId, Level, 0LL);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_28;
  v21 = Instance;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0LL);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11138/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_28;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0LL);
    if ( !v21 )
      goto LABEL_28;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v29 = LODWORD(v21[1].klass) - nowexp;
    Instance = System_Int32__ToString_38473032((int32_t)&v29, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_28;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0LL);
  BattleResultExpComponent__setEquipLv(this, Level, v23);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v18, &entity, equipId, Level - 1, 0LL);
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
    sub_B0D97C(Instance);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  v26 = value;
  if ( Level == LevelMax )
  {
    if ( !Instance )
      goto LABEL_28;
    v27 = 1.0;
  }
  else
  {
    if ( !v21 || !Instance )
      goto LABEL_28;
    v27 = 1.0 - (float)((float)(LODWORD(v21[1].klass) - nowexp) / (float)(LODWORD(v21[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v27, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_28;
  return v26 != UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
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
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42148E1 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&level);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_2493/*"BATTLE_RESULTEXP_EQUIPLV"*/, v6);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v7);
    byte_42148E1 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2493/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_12;
  v9 = v8;
  v10 = System_String__Equals_43837244(v8, (System_String_o *)StringLiteral_2493/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v10 )
  {
    v14 = level;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    v13 = (System_String_o *)StringLiteral_23617/*"{0}"*/;
  }
  else
  {
    v15 = level;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v13 = v9;
  }
  v8 = System_String__Format(v13, v12, 0LL);
  if ( !equip_Lv )
LABEL_12:
    sub_B0D97C(v8);
  UILabel__set_text(equip_Lv, v8, 0LL);
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
  System_String_o *mst_slider; // x0
  float value; // s8
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v21; // x2
  bool v22; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x23
  UILabel_o *v24; // x24
  System_String_o *v25; // x22
  struct System_String_o *age; // x8
  float v27; // s0
  UILabel_o *v28; // x20
  int64_t v30; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int64_t v32; // [xsp+18h] [xbp-48h] BYREF

  v32 = getexp;
  if ( (byte_42148E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserExpMaster___, getexp);
    sub_B0D8A4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v12);
    sub_B0D8A4(&StringLiteral_11138/*"RESULT_EQUIP_MAXEXP"*/, v13);
    sub_B0D8A4(&StringLiteral_8725/*"MAX_USER_LV"*/, v14);
    sub_B0D8A4(&StringLiteral_699/*"+ {0}"*/, v15);
    byte_42148E4 = 1;
  }
  v30 = 0LL;
  entity = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v17 = (Il2CppObject *)System_Int64__ToString_38475816((int64_t)&v32, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
  mst_slider = System_String__Format((System_String_o *)StringLiteral_699/*"+ {0}"*/, v17, 0LL);
  if ( !mst_getexpLabel )
    goto LABEL_32;
  UILabel__set_text(mst_getexpLabel, mst_slider, 0LL);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_32;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  mst_slider = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8725/*"MAX_USER_LV"*/, 0LL);
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
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11138/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_32;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_32;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
    v22 = 0;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    mst_slider = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mst_slider )
      goto LABEL_32;
    mst_slider = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)mst_slider,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserExpMaster___);
    if ( !mst_slider )
      goto LABEL_32;
    v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)mst_slider;
    start_level = UserExpMaster__getLevel((UserExpMaster_o *)mst_slider, nowexp, start_level, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v23,
                                      start_level,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_32;
    v24 = this->fields.mst_atexpLabel;
    v25 = mst_slider;
    v30 = (int64_t)mst_slider[1].klass - nowexp;
    mst_slider = System_Int64__ToString_38475816((int64_t)&v30, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
    if ( !v24 )
      goto LABEL_32;
    UILabel__set_text(v24, mst_slider, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      v23,
                                      &entity,
                                      start_level - 1,
                                      (const MethodInfo_2669C30 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    age = 0LL;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      age = entity->fields.age;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v27 = 1.0 - (double)((unsigned __int64)v25[1].klass - nowexp) / (double)((char *)v25[1].klass - (char *)age),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v27, 0LL),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0LL) )
    {
LABEL_32:
      sub_B0D97C(mst_slider);
    }
    v22 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, start_level, v21);
  if ( start_level == ConstantMaster__getValue((System_String_o *)StringLiteral_8725/*"MAX_USER_LV"*/, 0LL) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( mst_slider )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0LL);
      v28 = this->fields.mst_atexpLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11138/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
      if ( v28 )
      {
        UILabel__set_text(v28, mst_slider, 0LL);
        mst_slider = (System_String_o *)this->fields.mst_slider;
        if ( mst_slider )
        {
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
          return v22;
        }
      }
    }
    goto LABEL_32;
  }
  return v22;
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
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42148E0 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&level);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v6);
    sub_B0D8A4(&StringLiteral_2498/*"BATTLE_RESULTEXP_MASTERLV"*/, v7);
    byte_42148E0 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2498/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_12;
  v9 = v8;
  v10 = System_String__Equals_43837244(v8, (System_String_o *)StringLiteral_2498/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v10 )
  {
    v14 = level;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    v13 = (System_String_o *)StringLiteral_23617/*"{0}"*/;
  }
  else
  {
    v15 = level;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v13 = v9;
  }
  v8 = System_String__Format(v13, v12, 0LL);
  if ( !mst_Lv )
LABEL_12:
    sub_B0D97C(v8);
  UILabel__set_text(mst_Lv, v8, 0LL);
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
  __int64 Instance; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 *v54; // x26
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct UserGameEntity_o *v61; // x1
  struct UserGameEntity_o **p_oldGame; // x28
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
  UnityEngine_Object_o *knockdownRecordWindow; // x24
  const MethodInfo *v76; // x2
  UserServantEntity_o *v77; // x0
  struct UserGameEntity_o **p_newGame; // x24
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  UserServantEntity_o *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  const MethodInfo *v92; // x4
  struct UserGameEntity_o *newGame; // x8
  UILabel_o *equip_nameLabel; // x25
  __int64 v95; // x21
  __int64 v96; // x28
  int32_t v97; // w0
  const MethodInfo *v98; // x5
  int32_t *p_lv; // x25
  const MethodInfo *v100; // x2
  const MethodInfo *v101; // x3
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  __int64 v103; // x1
  __int64 v104; // x2
  System_Func_float__int__int__o *v105; // x28
  const MethodInfo *v106; // x4
  int v107; // w27
  __int64 v108; // x8
  BattleResultExpComponent_o *v109; // x28
  signed __int64 v110; // x19
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v113; // x8
  UserEquipEntity_o *v114; // x21
  int v115; // w8
  __int64 v116; // x26
  unsigned int v117; // w20
  struct UISprite_array *v118; // x8
  struct UISprite_array *v119; // x8
  struct UISprite_array *v120; // x8
  struct UISprite_array *v121; // x8
  const MethodInfo *v122; // x4
  struct UISprite_array *v123; // x8
  const MethodInfo *v124; // x4
  struct UISprite_array *v125; // x8
  int v126; // w8
  const MethodInfo *v127; // x2
  UILabel_o *equip_oldlevelLabel; // x22
  System_String_o *v129; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x21
  System_String_o *v132; // x1
  __int64 v133; // x1
  __int64 v134; // x2
  System_Text_StringBuilder_o *v135; // x22
  __int64 v136; // x23
  System_Int32_array *SkillIdList; // x24
  System_Int32_array *SkillLvList; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v139; // x27
  int v140; // w20
  unsigned __int64 v141; // x25
  int32_t *v142; // x19
  System_String_o *v143; // x28
  Il2CppObject *v144; // x21
  Il2CppObject *v145; // x0
  System_String_o *v146; // x21
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x23
  UILabel_o *equip_confLabel; // x21
  int64_t bestTurnDamage; // x11
  int64_t oldRecordDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v153; // x21
  bool v154; // w1
  UILabel_o *damage_battleLabel; // x21
  __int64 v156; // x0
  UserEquipEntity_o *v157; // [xsp+0h] [xbp-A0h]
  UserEquipEntity_o **p_newEquip; // [xsp+8h] [xbp-98h]
  __int64 v159; // [xsp+18h] [xbp-88h]
  int32_t *v160; // [xsp+20h] [xbp-80h]
  int32_t v162; // [xsp+3Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4

  v14 = oldEquip;
  if ( (byte_42148E2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___, oldGame);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEquipMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserGameMaster___, v18);
    sub_B0D8A4(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v19);
    sub_B0D8A4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v20);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v21);
    sub_B0D8A4(&Method_System_Func_float__int__int__Invoke__, v22);
    sub_B0D8A4(&Method_System_Func_float__int__int___ctor__, v23);
    sub_B0D8A4(&System_Func_float__int__int__TypeInfo, v24);
    sub_B0D8A4(&int_TypeInfo, v25);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v26);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v27);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v30);
    sub_B0D8A4(&Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__, v31);
    sub_B0D8A4(&BattleResultExpComponent___c__DisplayClass61_0_TypeInfo, v32);
    sub_B0D8A4(&StringLiteral_16875/*"bit_reward_shine01"*/, v33);
    sub_B0D8A4(&StringLiteral_11137/*"RESULT_EQEXP_UPSKILLLV"*/, v34);
    sub_B0D8A4(&StringLiteral_11136/*"RESULT_EQEXP_GETSKILL"*/, v35);
    sub_B0D8A4(&StringLiteral_16876/*"bit_reward_shine02"*/, v36);
    sub_B0D8A4(&StringLiteral_344/*"#,#"*/, v37);
    sub_B0D8A4(&StringLiteral_1/*""*/, v38);
    byte_42148E2 = 1;
  }
  entity = 0LL;
  v39 = sub_B0D974(BattleResultExpComponent___c__DisplayClass61_0_TypeInfo, oldGame, oldEquip);
  BattleResultExpComponent___c__DisplayClass61_0___ctor((BattleResultExpComponent___c__DisplayClass61_0_o *)v39, 0LL);
  if ( !v39 )
    goto LABEL_139;
  *(_QWORD *)(v39 + 16) = oldGame;
  v47 = v39 + 16;
  sub_B0D840((BattleServantConfConponent_o *)(v39 + 16), (System_Int32_array **)oldGame, v41, v42, v43, v44, v45, v46);
  *(_QWORD *)(v39 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v39 + 24), (System_Int32_array **)this, v48, v49, v50, v51, v52, v53);
  *(_QWORD *)(v39 + 32) = masterLvInfoArray;
  v54 = (__int64 *)(v39 + 32);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v39 + 32),
    (System_Int32_array **)masterLvInfoArray,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = *(struct UserGameEntity_o **)(v39 + 16);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = v61;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.oldGame,
    (System_Int32_array **)v61,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.oldEquip = v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.oldEquip,
    (System_Int32_array **)v14,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
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
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Instance, knockdownResult, v76);
  }
  this->fields.updateFlg = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_139;
  if ( !Instance )
    goto LABEL_139;
  v77 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_2669DFC *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v77;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.newGame,
    (System_Int32_array **)v77,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !v14 )
    goto LABEL_139;
  if ( !Instance )
    goto LABEL_139;
  v85 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          v14->fields.id,
          (const MethodInfo_2669DFC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  this->fields.newEquip = (struct UserEquipEntity_o *)v85;
  p_newEquip = &this->fields.newEquip;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.newEquip,
    (System_Int32_array **)v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  newGame = this->fields.newGame;
  if ( !newGame || !*(_QWORD *)v47 )
    goto LABEL_139;
  BattleResultExpComponent__setMasterExp(
    this,
    newGame->fields.exp - *(_QWORD *)(*(_QWORD *)v47 + 88LL),
    *(_QWORD *)(*(_QWORD *)v47 + 88LL),
    *(_DWORD *)(*(_QWORD *)v47 + 80LL),
    v92);
  equip_nameLabel = this->fields.equip_nameLabel;
  v96 = *(_QWORD *)&v14->fields.equipId.fields.currentCryptoKey;
  v95 = *(_QWORD *)&v14->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v164.fields.currentCryptoKey = v96;
  *(_QWORD *)&v164.fields.fakeValue = v95;
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v164, 0LL);
  Instance = (__int64)EquipMaster__getEquipName(v97, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Instance, 0LL),
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14->fields.equipId, 0LL),
        !*p_newEquip)
    || (p_lv = &v14->fields.lv,
        Instance = BattleResultExpComponent__setEquipExp(
                     this,
                     Instance,
                     (*p_newEquip)->fields.exp - v14->fields.exp,
                     v14->fields.exp,
                     v14->fields.lv,
                     v98),
        !*(_QWORD *)v47)
    || (BattleResultExpComponent__setMasterLv(this, *(_DWORD *)(*(_QWORD *)v47 + 80LL), v100),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_139:
    sub_B0D97C(Instance);
  }
  if ( !upParamList->max_length )
    goto LABEL_140;
  if ( !*(_QWORD *)v47 )
    goto LABEL_139;
  if ( !*p_newGame )
    goto LABEL_139;
  Instance = (__int64)upParamList->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Instance,
    *(_DWORD *)(*(_QWORD *)v47 + 80LL),
    (*p_newGame)->fields.lv,
    v101);
  v105 = (System_Func_float__int__int__o *)sub_B0D974(System_Func_float__int__int__TypeInfo, v103, v104);
  System_Func_float__int__int____ctor(
    v105,
    (Il2CppObject *)v39,
    Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__,
    (const MethodInfo_26242AC *)Method_System_Func_float__int__int___ctor__);
  if ( !v105 )
    goto LABEL_139;
  Instance = System_Func_float__int__int___Invoke(
               v105,
               -186.0,
               35,
               (const MethodInfo_26242C0 *)Method_System_Func_float__int__int__Invoke__);
  v107 = Instance;
  if ( (int)Instance < 6 )
  {
    v108 = *v54;
    if ( *v54 )
    {
      v109 = this;
      v110 = 0LL;
      while ( v110 < *(int *)(v108 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_139;
        max_length = lvUpRewardSpArray->max_length;
        if ( v110 < (int)max_length )
        {
          if ( v110 >= max_length )
            goto LABEL_140;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v110],
            (System_String_o *)StringLiteral_16875/*"bit_reward_shine01"*/,
            v106);
          v108 = *v54;
        }
        ++v110;
        if ( !v108 )
          goto LABEL_139;
      }
      v126 = 35;
    }
    else
    {
      v109 = this;
      v126 = 35;
    }
    goto LABEL_70;
  }
  v113 = this->fields.upParamList;
  if ( !v113 )
    goto LABEL_139;
  if ( !v113->max_length )
    goto LABEL_140;
  Instance = (__int64)v113->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_139;
  v114 = v14;
  Instance = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Instance )
    goto LABEL_139;
  v115 = *(_DWORD *)(Instance + 24);
  v116 = Instance;
  if ( v115 >= 1 )
  {
    v117 = 0;
    while ( v117 < v115 )
    {
      Instance = *(_QWORD *)(v116 + 8LL * (int)v117 + 32);
      if ( !Instance )
        goto LABEL_139;
      UILabel__set_fontSize((UILabel_o *)Instance, *(_DWORD *)(Instance + 416) - 2, 0LL);
      v115 = *(_DWORD *)(v116 + 24);
      if ( (int)++v117 >= v115 )
        goto LABEL_51;
    }
    goto LABEL_140;
  }
LABEL_51:
  v118 = this->fields.lvUpRewardSpArray;
  if ( !v118 )
    goto LABEL_139;
  if ( !v118->max_length )
    goto LABEL_140;
  Instance = (__int64)v118->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 160) - 5, 0LL);
  v119 = this->fields.lvUpRewardSpArray;
  if ( !v119 )
    goto LABEL_139;
  if ( !v119->max_length )
    goto LABEL_140;
  Instance = (__int64)v119->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  v14 = v114;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 164) - 5, 0LL);
  v120 = this->fields.lvUpRewardSpArray;
  if ( !v120 )
    goto LABEL_139;
  if ( v120->max_length <= 1 )
    goto LABEL_140;
  Instance = (__int64)v120->m_Items[1];
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 160) - 5, 0LL);
  v121 = this->fields.lvUpRewardSpArray;
  if ( !v121 )
    goto LABEL_139;
  if ( v121->max_length <= 1 )
    goto LABEL_140;
  Instance = (__int64)v121->m_Items[1];
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 164) - 5, 0LL);
  Instance = System_Func_float__int__int___Invoke(
               v105,
               -186.0,
               31,
               (const MethodInfo_26242C0 *)Method_System_Func_float__int__int__Invoke__);
  v109 = this;
  v123 = this->fields.lvUpRewardSpArray;
  if ( !v123 )
    goto LABEL_139;
  if ( !v123->max_length )
    goto LABEL_140;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v123->m_Items[0],
    (System_String_o *)StringLiteral_16876/*"bit_reward_shine02"*/,
    v122);
  v125 = this->fields.lvUpRewardSpArray;
  if ( !v125 )
    goto LABEL_139;
  if ( v125->max_length <= 1 )
  {
LABEL_140:
    v156 = sub_B0D9A8(Instance);
    sub_B0D948(v156, 0LL);
  }
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v125->m_Items[1],
    (System_String_o *)StringLiteral_16876/*"bit_reward_shine02"*/,
    v124);
  v126 = 31;
LABEL_70:
  Instance = (__int64)v109->fields.masterLevelwindowSprite;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_height((UIWidget_o *)Instance, v126 * v107 + 134, 0LL);
  if ( !*(_QWORD *)v47 )
    goto LABEL_139;
  if ( !*p_newGame )
    goto LABEL_139;
  v109->fields.updateFlg |= *(_QWORD *)(*(_QWORD *)v47 + 88LL) != (*p_newGame)->fields.exp;
  BattleResultExpComponent__setEquipLv(v109, *p_lv, v127);
  equip_oldlevelLabel = v109->fields.equip_oldlevelLabel;
  Instance = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_139;
  v129 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v129, 0LL);
  newEquip = v109->fields.newEquip;
  if ( !newEquip )
    goto LABEL_139;
  equip_newlevelLabel = v109->fields.equip_newlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_139;
  v132 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v132, 0LL);
  v135 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v133, v134);
  System_Text_StringBuilder___ctor(v135, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillIdList(v14, 0LL);
  if ( !*p_newEquip )
    goto LABEL_139;
  v136 = Instance;
  SkillIdList = UserEquipEntity__getSkillIdList(*p_newEquip, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillLvList(v14, 0LL);
  v159 = Instance;
  if ( !*p_newEquip )
    goto LABEL_139;
  SkillLvList = UserEquipEntity__getSkillLvList(*p_newEquip, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v136 )
    goto LABEL_139;
  v157 = v14;
  if ( *(int *)(v136 + 24) >= 1 )
  {
    v139 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v140 = 0;
    v160 = &SkillLvList->m_Items[1];
    v141 = 0LL;
    v142 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      entity = 0LL;
      if ( !SkillIdList )
        goto LABEL_139;
      if ( v141 >= SkillIdList->max_length )
        goto LABEL_140;
      if ( !v139 )
        goto LABEL_139;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v139,
                   &entity,
                   v142[v141],
                   (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( entity && (Instance & 1) != 0 )
      {
        if ( v141 >= *(unsigned int *)(v136 + 24) || v141 >= SkillIdList->max_length )
          goto LABEL_140;
        if ( *(_DWORD *)(v136 + 32 + 4 * v141) != v142[v141] )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11136/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !entity )
            goto LABEL_139;
          v146 = (System_String_o *)Instance;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          Instance = (__int64)System_String__Format(v146, Name, 0LL);
          if ( !v135 )
            goto LABEL_139;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_42156196(v135, (System_String_o *)Instance, 0LL);
LABEL_114:
          v140 += 3;
          goto LABEL_115;
        }
        if ( !v159 )
          goto LABEL_139;
        if ( v141 >= *(unsigned int *)(v159 + 24) )
          goto LABEL_140;
        if ( !SkillLvList )
          goto LABEL_139;
        if ( v141 >= SkillLvList->max_length )
          goto LABEL_140;
        if ( *(_DWORD *)(v159 + 32 + 4 * v141) != v160[v141] )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11137/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !entity )
            goto LABEL_139;
          v143 = (System_String_o *)Instance;
          Instance = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( v141 >= SkillLvList->max_length )
            goto LABEL_140;
          v144 = (Il2CppObject *)Instance;
          v162 = v160[v141];
          v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
          Instance = (__int64)System_String__Format_43845440(v143, v144, v145, 0LL);
          if ( !v135 )
            goto LABEL_139;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_42156196(v135, (System_String_o *)Instance, 0LL);
          v109 = this;
          goto LABEL_114;
        }
      }
LABEL_115:
      if ( (__int64)++v141 >= *(int *)(v136 + 24) )
        goto LABEL_118;
    }
  }
  v140 = 0;
LABEL_118:
  eqConfRoot = v109->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_139;
  LODWORD(v165.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(v109->fields.eqConfRoot, 0LL);
  v165.fields.y = (float)v140 * 10.0;
  v165.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v165, 0LL);
  Instance = (__int64)v109->fields.eqLevelwindowSprite;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_height((UIWidget_o *)Instance, 22 * v140 + 134, 0LL);
  if ( !v135 )
    goto LABEL_139;
  equip_confLabel = v109->fields.equip_confLabel;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v135->klass->vtable._3_ToString.method)(
               v135,
               v135->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_139;
  UILabel__set_text(equip_confLabel, (System_String_o *)Instance, 0LL);
  if ( !*p_newEquip )
    goto LABEL_139;
  bestTurnDamage = v109->fields.bestTurnDamage;
  oldRecordDamage = v109->fields.oldRecordDamage;
  v109->fields.updateFlg |= v157->fields.exp != (*p_newEquip)->fields.exp;
  damage_recordLabel = v109->fields.damage_recordLabel;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Instance = (__int64)System_Int64__ToString_38475816(
                          (int64_t)&v109->fields.oldRecordDamage,
                          (System_String_o *)StringLiteral_344/*"#,#"*/,
                          0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
      damage_battleLabel = v109->fields.damage_battleLabel;
      Instance = (__int64)System_Int64__ToString_38475816(
                            (int64_t)&v109->fields.bestTurnDamage,
                            (System_String_o *)StringLiteral_344/*"#,#"*/,
                            0LL);
      if ( damage_battleLabel )
      {
        UILabel__set_text(damage_battleLabel, (System_String_o *)Instance, 0LL);
        Instance = (__int64)v109->fields.damage_recordLabel;
        if ( Instance )
        {
          UIWidget__set_color((UIWidget_o *)Instance, v109->fields.record_intactColor, 0LL);
          Instance = (__int64)v109->fields.damage_battleLabel;
          if ( Instance )
          {
            UIWidget__set_color((UIWidget_o *)Instance, v109->fields.damage_intactColor, 0LL);
            Instance = (__int64)v109->fields.damage_recordRenewalSp;
            if ( Instance )
            {
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( Instance )
              {
                v154 = 0;
                goto LABEL_138;
              }
            }
          }
        }
      }
    }
    goto LABEL_139;
  }
  Instance = (__int64)System_Int64__ToString_38475816(
                        (int64_t)&v109->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_344/*"#,#"*/,
                        0LL);
  if ( !damage_recordLabel )
    goto LABEL_139;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
  v153 = v109->fields.damage_battleLabel;
  Instance = (__int64)System_Int64__ToString_38475816(
                        (int64_t)&v109->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_344/*"#,#"*/,
                        0LL);
  if ( !v153 )
    goto LABEL_139;
  UILabel__set_text(v153, (System_String_o *)Instance, 0LL);
  Instance = (__int64)v109->fields.damage_recordLabel;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_color((UIWidget_o *)Instance, v109->fields.record_renewalColor, 0LL);
  Instance = (__int64)v109->fields.damage_battleLabel;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_color((UIWidget_o *)Instance, v109->fields.damage_renewalColor, 0LL);
  Instance = (__int64)v109->fields.damage_recordRenewalSp;
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_139;
  v154 = 1;
LABEL_138:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v154, 0LL);
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
  if ( (byte_42148EB & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isFinish);
    byte_42148EB = 1;
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
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_23825508(v16, 0LL);
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
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v24, 0LL);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0LL )
LABEL_22:
    sub_B0D97C(this);
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
  int32_t actMax; // w19
  int32_t v21; // w21
  struct BattleResultExpComponent_o *v22; // x8
  struct BattleResultMasterUpStatusComponent_array *v23; // x8
  struct BattleResultExpComponent_o *v24; // x8
  struct BattleResultMasterUpStatusComponent_array *v25; // x9
  struct UserGameEntity_o *v26; // x10
  struct UserGameEntity_o *v27; // x8
  int v28; // w22
  struct UserGameEntity_o *v29; // x8
  struct BattleResultExpComponent_o *v30; // x10
  struct UserGameEntity_o *v31; // x9
  struct BattleResultMasterUpStatusComponent_array *v32; // x10
  int32_t costMax; // w19
  int32_t v34; // w21
  struct BattleResultExpComponent_o *v35; // x8
  struct BattleResultMasterUpStatusComponent_array *v36; // x8
  struct BattleResultExpComponent_o *v37; // x8
  struct BattleResultMasterUpStatusComponent_array *v38; // x9
  struct UserGameEntity_o *v39; // x10
  struct UserGameEntity_o *v40; // x8
  struct BattleResultExpComponent_o *v41; // x8
  struct BattleResultMasterUpStatusComponent_array *v42; // x8
  struct UserGameEntity_o *v43; // x8
  struct BattleResultExpComponent_o *v44; // x10
  struct UserGameEntity_o *v45; // x9
  struct BattleResultMasterUpStatusComponent_array *v46; // x10
  int32_t friendKeep; // w19
  int32_t v48; // w21
  struct BattleResultExpComponent_o *v49; // x8
  struct BattleResultMasterUpStatusComponent_array *v50; // x8
  struct BattleResultExpComponent_o *v51; // x8
  struct BattleResultMasterUpStatusComponent_array *v52; // x9
  struct UserGameEntity_o *v53; // x10
  struct UserGameEntity_o *v54; // x8
  struct BattleResultExpComponent_o *v55; // x8
  struct BattleResultMasterUpStatusComponent_array *v56; // x8
  struct BattleResultExpComponent_o *v57; // x8
  struct BattleResultMasterUpStatusComponent_array *v58; // x8
  EventMaster_o *v59; // x21
  struct BattleResultExpComponent_o *v60; // x8
  struct BattleResultMasterUpStatusComponent_array *v61; // x8
  BattleResultMasterUpStatusComponent_o *v62; // x8
  __int64 *v63; // x9
  struct BattleResultExpComponent_o *v64; // x8
  struct BattleResultMasterUpStatusComponent_array *v65; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  __int64 v67; // x8
  il2cpp_array_size_t v68; // w24
  int v69; // w25
  struct BattleResultExpComponent_o *v70; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v72; // x8
  struct UISprite_array *v73; // x8
  struct MasterLvRewardInfo_array *v74; // x9
  UISprite_o *v75; // x22
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v77; // x8
  struct BattleResultExpComponent_o *v78; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v80; // x9
  MasterLvRewardInfo_o *v81; // x9
  Il2CppObject *v82; // x23
  UILabel_o *v83; // x22
  Il2CppObject *v84; // x0
  struct MasterLvRewardInfo_array *v85; // x8
  __int64 v86; // x0
  int v88; // [xsp+4h] [xbp-7Ch]
  int32_t num; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4211EC0 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&baseHeight);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_2496/*"BATTLE_RESULTEXP_FULLAP"*/, v9);
    sub_B0D8A4(&StringLiteral_2495/*"BATTLE_RESULTEXP_FRIENDMAX"*/, v10);
    sub_B0D8A4(&StringLiteral_2491/*"BATTLE_RESULTEXP_APMAX"*/, v11);
    sub_B0D8A4(&StringLiteral_2497/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/, v12);
    sub_B0D8A4(&StringLiteral_2492/*"BATTLE_RESULTEXP_COSTMAX"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)sub_B0D8A4(&StringLiteral_23655/*"{0} {1}個"*/, v15);
    byte_4211EC0 = 1;
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
  v21 = newGame->fields.actMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  if ( actMax >= v21 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v28 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v22 = v5->fields.__4__this;
    if ( !v22 )
      goto LABEL_130;
    v23 = v22->fields.upParamList;
    if ( !v23 )
      goto LABEL_130;
    if ( v23->max_length <= 1 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v23->m_Items[1];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2491/*"BATTLE_RESULTEXP_APMAX"*/,
      0LL);
    v24 = v5->fields.__4__this;
    if ( !v24 )
      goto LABEL_130;
    v25 = v24->fields.upParamList;
    if ( !v25 )
      goto LABEL_130;
    if ( v25->max_length <= 1 )
      goto LABEL_131;
    v26 = v5->fields.oldGame;
    if ( !v26 )
      goto LABEL_130;
    v27 = v24->fields.newGame;
    if ( !v27 )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v25->m_Items[1];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v26->fields.actMax,
      v27->fields.actMax,
      0LL);
    v28 = 1;
  }
  v29 = v5->fields.oldGame;
  if ( !v29 )
    goto LABEL_130;
  v30 = v5->fields.__4__this;
  if ( !v30 )
    goto LABEL_130;
  v31 = v30->fields.newGame;
  if ( !v31 )
    goto LABEL_130;
  v32 = v30->fields.upParamList;
  if ( !v32 )
    goto LABEL_130;
  if ( v32->max_length <= 2 )
    goto LABEL_131;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v32->m_Items[2];
  if ( !this )
    goto LABEL_130;
  costMax = v29->fields.costMax;
  v34 = v31->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  if ( costMax >= v34 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v35 = v5->fields.__4__this;
    if ( !v35 )
      goto LABEL_130;
    v36 = v35->fields.upParamList;
    if ( !v36 )
      goto LABEL_130;
    if ( v36->max_length <= 2 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v36->m_Items[2];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2492/*"BATTLE_RESULTEXP_COSTMAX"*/,
      0LL);
    v37 = v5->fields.__4__this;
    if ( !v37 )
      goto LABEL_130;
    v38 = v37->fields.upParamList;
    if ( !v38 )
      goto LABEL_130;
    if ( v38->max_length <= 2 )
      goto LABEL_131;
    v39 = v5->fields.oldGame;
    if ( !v39 )
      goto LABEL_130;
    v40 = v37->fields.newGame;
    if ( !v40 )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v38->m_Items[2];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v39->fields.costMax,
      v40->fields.costMax,
      0LL);
    v41 = v5->fields.__4__this;
    if ( !v41 )
      goto LABEL_130;
    v42 = v41->fields.upParamList;
    if ( !v42 )
      goto LABEL_130;
    if ( v42->max_length <= 2 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v42->m_Items[2];
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
    v93.fields.z = 0.0;
    v93.fields.y = height - (float)(v28 * baseHeight);
    v93.fields.x = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v93, 0LL);
    ++v28;
  }
  v43 = v5->fields.oldGame;
  if ( !v43 )
    goto LABEL_130;
  v44 = v5->fields.__4__this;
  if ( !v44 )
    goto LABEL_130;
  v45 = v44->fields.newGame;
  if ( !v45 )
    goto LABEL_130;
  v46 = v44->fields.upParamList;
  if ( !v46 )
    goto LABEL_130;
  if ( v46->max_length <= 3 )
    goto LABEL_131;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v46->m_Items[3];
  if ( !this )
    goto LABEL_130;
  friendKeep = v43->fields.friendKeep;
  v48 = v45->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  if ( friendKeep >= v48 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v49 = v5->fields.__4__this;
    if ( !v49 )
      goto LABEL_130;
    v50 = v49->fields.upParamList;
    if ( !v50 )
      goto LABEL_130;
    if ( v50->max_length <= 3 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v50->m_Items[3];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2495/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      0LL);
    v51 = v5->fields.__4__this;
    if ( !v51 )
      goto LABEL_130;
    v52 = v51->fields.upParamList;
    if ( !v52 )
      goto LABEL_130;
    if ( v52->max_length <= 3 )
      goto LABEL_131;
    v53 = v5->fields.oldGame;
    if ( !v53 )
      goto LABEL_130;
    v54 = v51->fields.newGame;
    if ( !v54 )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v52->m_Items[3];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v53->fields.friendKeep,
      v54->fields.friendKeep,
      0LL);
    v55 = v5->fields.__4__this;
    if ( !v55 )
      goto LABEL_130;
    v56 = v55->fields.upParamList;
    if ( !v56 )
      goto LABEL_130;
    if ( v56->max_length <= 3 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v56->m_Items[3];
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
    v94.fields.z = 0.0;
    v94.fields.y = height - (float)(v28 * baseHeight);
    v94.fields.x = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v94, 0LL);
    ++v28;
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  v57 = v5->fields.__4__this;
  if ( !v57 )
    goto LABEL_130;
  v58 = v57->fields.upParamList;
  if ( !v58 )
    goto LABEL_130;
  if ( v58->max_length <= 4 )
    goto LABEL_131;
  v59 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v58->m_Items[4];
  if ( !this )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v59 )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)EventMaster__IsBPEnable(v59, 0LL);
  v60 = v5->fields.__4__this;
  if ( !v60 )
    goto LABEL_130;
  v61 = v60->fields.upParamList;
  if ( !v61 )
    goto LABEL_130;
  if ( v61->max_length <= 4 )
    goto LABEL_131;
  v62 = v61->m_Items[4];
  if ( !v62
    || (((unsigned __int8)this & 1) == 0 ? (v63 = &StringLiteral_2496/*"BATTLE_RESULTEXP_FULLAP"*/) : (v63 = &StringLiteral_2497/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/),
        (BattleResultMasterUpStatusComponent__setTitle(v62, (System_String_o *)*v63, 0LL),
         (v64 = v5->fields.__4__this) == 0LL)
     || (v65 = v64->fields.upParamList) == 0LL) )
  {
LABEL_130:
    sub_B0D97C(this);
  }
  if ( v65->max_length <= 4 )
  {
LABEL_131:
    v86 = sub_B0D9A8(this);
    sub_B0D948(v86, 0LL);
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v65->m_Items[4];
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
  v95.fields.z = 0.0;
  v95.fields.y = height - (float)(v28 * baseHeight);
  v95.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v95, 0LL);
  masterLvInfoArray = v5->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)(unsigned int)(v28 + 1);
  if ( masterLvInfoArray )
  {
    v67 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v67 <= 2 && (int)v67 >= 1 )
    {
      v88 = v28 + 1;
      v68 = 0;
      v69 = baseHeight * (_DWORD)this;
      do
      {
        v70 = v5->fields.__4__this;
        if ( !v70 )
          goto LABEL_130;
        lvUpRewardSpArray = v70->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_130;
        if ( v68 >= lvUpRewardSpArray->max_length )
          goto LABEL_131;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)lvUpRewardSpArray->m_Items[v68];
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
        v96.fields.y = height - (float)v69;
        v96.fields.z = 0.0;
        v96.fields.x = -30.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v96, 0LL);
        v72 = v5->fields.__4__this;
        if ( !v72 )
          goto LABEL_130;
        v73 = v72->fields.lvUpRewardSpArray;
        if ( !v73 )
          goto LABEL_130;
        if ( v68 >= v73->max_length )
          goto LABEL_131;
        v74 = v5->fields.masterLvInfoArray;
        if ( !v74 )
          goto LABEL_130;
        if ( v68 >= v74->max_length )
          goto LABEL_131;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v74->m_Items[v68];
        if ( !this )
          goto LABEL_130;
        v75 = v73->m_Items[v68];
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
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)AtlasManager__SetItem(v75, IconImageId, 0LL);
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        countText = (System_String_o *)StringLiteral_1/*""*/;
        v77 = v5->fields.masterLvInfoArray;
        if ( !v77 )
          goto LABEL_130;
        if ( v68 >= v77->max_length )
          goto LABEL_131;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v77->m_Items[v68];
        if ( !this )
          goto LABEL_130;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_130;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0LL);
        v78 = v5->fields.__4__this;
        if ( !v78 )
          goto LABEL_130;
        lvUpRewardLabelArray = v78->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_130;
        if ( v68 >= lvUpRewardLabelArray->max_length )
          goto LABEL_131;
        v80 = v5->fields.masterLvInfoArray;
        if ( !v80 )
          goto LABEL_130;
        if ( v68 >= v80->max_length )
          goto LABEL_131;
        v81 = v80->m_Items[v68];
        if ( !v81 )
          goto LABEL_130;
        v82 = (Il2CppObject *)nameText;
        v83 = lvUpRewardLabelArray->m_Items[v68];
        num = v81->fields.num;
        v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)System_String__Format_43845440(
                                                                     (System_String_o *)StringLiteral_23655/*"{0} {1}個"*/,
                                                                     v82,
                                                                     v84,
                                                                     0LL);
        if ( !v83 )
          goto LABEL_130;
        UILabel__set_text(v83, (System_String_o *)this, 0LL);
        v85 = v5->fields.masterLvInfoArray;
        if ( !v85 )
          goto LABEL_130;
        ++v68;
        v69 += baseHeight;
      }
      while ( (signed int)v68 < (signed int)v85->max_length );
      LODWORD(this) = v88 + v68;
    }
  }
  return (int)this;
}