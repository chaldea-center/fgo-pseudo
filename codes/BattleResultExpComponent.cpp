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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E890B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultExpComponent_endClose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E890B = 1;
  }
  window = this->fields.window;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v9, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v9,
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v22; // x21
  UnityEngine_Transform_o *v23; // x22
  UnityEngine_Transform_o *transform; // x22
  int v25; // s0
  UnityEngine_Transform_o *v28; // x22
  int v29; // s0
  int parentComp; // w8
  BattleResultExpComponent_o *v33; // x21
  unsigned int v34; // w22
  __int64 v35; // x0

  v8 = this;
  if ( (byte_42E8907 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)targetIcon, effectName);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16, v17);
    this = (BattleResultExpComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E8907 = 1;
  }
  if ( !data )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               effectName,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         Object_WarBoardWaitTimeSetting,
                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_20;
  v22 = (UnityEngine_GameObject_o *)this;
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_20;
  v23 = (UnityEngine_Transform_o *)this;
  this = (BattleResultExpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0LL);
  if ( !v23 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v23, (UnityEngine_Transform_o *)this, 0LL);
  transform = UnityEngine_GameObject__get_transform(v22, 0LL);
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
  v28 = UnityEngine_GameObject__get_transform(v22, 0LL);
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
  if ( !v28 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                         v22,
                                         (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_20;
  parentComp = (int)this->fields.parentComp;
  v33 = this;
  if ( parentComp >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= parentComp )
      {
        v35 = sub_B5D6C8(this);
        sub_B5D668(v35, 0LL);
      }
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v33->fields.myFsm + (int)v34);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      parentComp = (int)v33->fields.parentComp;
      if ( (int)++v34 >= parentComp )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(this, data);
  }
LABEL_18:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_20;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v33,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  BattleWindowComponent_o *window; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  System_String_o *v30; // x20
  System_String_o *v31; // x20

  if ( (byte_42E8903 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2541/*"BATTLE_RESULTEXP_MASTERTITLE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2536/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, v17, v18, v19);
    byte_42E8903 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effectUIList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2541/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !window )
    goto LABEL_36;
  v30 = (System_String_o *)window;
  if ( !System_String__Equals_44565128((System_String_o *)window, (System_String_o *)StringLiteral_2541/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_36;
    UILabel__set_text((UILabel_o *)window, v30, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2536/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !window )
LABEL_36:
    sub_B5D69C(window, v27);
  v31 = (System_String_o *)window;
  if ( !System_String__Equals_44565128((System_String_o *)window, (System_String_o *)StringLiteral_2536/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v31, 0LL);
      goto LABEL_35;
    }
    goto LABEL_36;
  }
LABEL_35:
  this->fields.bondsCountUp = 1;
}


void __fastcall BattleResultExpComponent__Open(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v45; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v47; // x11
  UnityEngine_GameObject_c *v48; // x22
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v50; // x20
  __int64 v51; // x21
  int32_t v52; // w20
  __int64 v53; // x8
  struct UnityEngine_GameObject_o **p_figureRoot; // x21
  UnityEngine_GameObject_o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Object_array *v62; // x21
  UnityEngine_GameObject_o *v63; // x0
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x22
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x22
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x22
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x1
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x1
  System_Collections_Hashtable_o *v128; // x0
  __int64 v129; // x0
  __int64 v130; // x0
  char v131[4]; // [xsp+18h] [xbp-38h] BYREF
  int v132; // [xsp+1Ch] [xbp-34h] BYREF
  int v133; // [xsp+28h] [xbp-28h] BYREF
  int32_t overwriteImageId; // [xsp+2Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  if ( (byte_42E890A & 1) == 0 )
  {
    sub_B5D5C4(&BattleRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&bool_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&object___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&float_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_18584/*"endMoveFigure"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_20221/*"islocal"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v38, v39, v40);
    sub_B5D5C4(&iTween_TypeInfo, v41, v42, v43);
    byte_42E890A = 1;
  }
  overwriteImageId = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_72;
  klass = gameObject[1].klass;
  if ( klass
    && (v47 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *((unsigned __int8 *)klass->_1.image + 300) >= (unsigned int)v47) )
  {
    v48 = *(BattleRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * v47 - 8) == BattleRootComponent_TypeInfo
        ? gameObject[1].klass
        : 0LL;
  }
  else
  {
    v48 = 0LL;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_72;
  v51 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v135.fields.currentCryptoKey = v51;
  *(_QWORD *)&v135.fields.fakeValue = v50;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                             v135,
                                             0LL);
  if ( !v48 )
    goto LABEL_72;
  v52 = (int)gameObject;
  gameObject = *(UnityEngine_GameObject_o **)&v48->_1.this_arg.bits;
  if ( !gameObject )
    goto LABEL_72;
  overwriteImageId = BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0LL);
  gameObject = *(UnityEngine_GameObject_o **)&v48->_1.this_arg.bits;
  if ( !gameObject )
    goto LABEL_72;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0LL);
  if ( overwriteImageId == -1 )
  {
    p_figureRoot = &this->fields.figureRoot;
  }
  else
  {
    v53 = *(_QWORD *)&v48->_1.this_arg.bits;
    if ( !v53 )
      goto LABEL_72;
    p_figureRoot = &this->fields.figureRoot;
    MasterFigureManagerOld__CreatePrefab_31039236(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v53 + 392),
      v52,
      60,
      0LL,
      overwriteImageId,
      (System_Nullable_Vector3__o)0,
      0LL);
  }
  v55 = *p_figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_B5D5DC(object___TypeInfo, 10LL);
  if ( !gameObject )
LABEL_72:
    sub_B5D69C(gameObject, v45);
  v62 = (System_Object_array *)gameObject;
  v63 = (UnityEngine_GameObject_o *)StringLiteral_23627/*"x"*/;
  if ( StringLiteral_23627/*"x"*/ )
  {
    v63 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_23627/*"x"*/, v62->obj.klass->_1.element_class);
    if ( !v63 )
      goto LABEL_73;
    v64 = (System_Int32_array **)StringLiteral_23627/*"x"*/;
  }
  else
  {
    v64 = 0LL;
  }
  if ( !v62->max_length )
    goto LABEL_71;
  v62->m_Items[0] = (Il2CppObject *)v64;
  sub_B5D560((BattleServantConfConponent_o *)v62->m_Items, v64, v56, v57, v58, v59, v60, v61);
  v133 = -1018691584;
  v63 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v133);
  v71 = (System_Int32_array **)v63;
  if ( v63 )
  {
    v63 = (UnityEngine_GameObject_o *)sub_B5D684(v63, v62->obj.klass->_1.element_class);
    if ( !v63 )
      goto LABEL_73;
  }
  if ( v62->max_length <= 1 )
    goto LABEL_71;
  v62->m_Items[1] = (Il2CppObject *)v71;
  sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[1], v71, v65, v66, v67, v68, v69, v70);
  v63 = (UnityEngine_GameObject_o *)StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v63 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v62->obj.klass->_1.element_class);
    if ( !v63 )
      goto LABEL_73;
    v78 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v78 = 0LL;
  }
  if ( v62->max_length <= 2 )
    goto LABEL_71;
  v62->m_Items[2] = (Il2CppObject *)v78;
  sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[2], v78, v72, v73, v74, v75, v76, v77);
  v132 = 1061997773;
  v63 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v132);
  v85 = (System_Int32_array **)v63;
  if ( v63 )
  {
    v63 = (UnityEngine_GameObject_o *)sub_B5D684(v63, v62->obj.klass->_1.element_class);
    if ( !v63 )
      goto LABEL_73;
  }
  if ( v62->max_length <= 3 )
    goto LABEL_71;
  v62->m_Items[3] = (Il2CppObject *)v85;
  sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[3], v85, v79, v80, v81, v82, v83, v84);
  v63 = (UnityEngine_GameObject_o *)StringLiteral_20221/*"islocal"*/;
  if ( StringLiteral_20221/*"islocal"*/ )
  {
    v63 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_20221/*"islocal"*/, v62->obj.klass->_1.element_class);
    if ( !v63 )
      goto LABEL_73;
    v92 = (System_Int32_array **)StringLiteral_20221/*"islocal"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( v62->max_length <= 4 )
    goto LABEL_71;
  v62->m_Items[4] = (Il2CppObject *)v92;
  sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[4], v92, v86, v87, v88, v89, v90, v91);
  v131[0] = 1;
  v63 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v131);
  v99 = (System_Int32_array **)v63;
  if ( v63 )
  {
    v63 = (UnityEngine_GameObject_o *)sub_B5D684(v63, v62->obj.klass->_1.element_class);
    if ( !v63 )
      goto LABEL_73;
  }
  if ( v62->max_length <= 5 )
    goto LABEL_71;
  v62->m_Items[5] = (Il2CppObject *)v99;
  sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[5], v99, v93, v94, v95, v96, v97, v98);
  v63 = (UnityEngine_GameObject_o *)StringLiteral_21544/*"oncompletetarget"*/;
  if ( StringLiteral_21544/*"oncompletetarget"*/ )
  {
    v63 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21544/*"oncompletetarget"*/, v62->obj.klass->_1.element_class);
    if ( !v63 )
      goto LABEL_73;
    v106 = (System_Int32_array **)StringLiteral_21544/*"oncompletetarget"*/;
  }
  else
  {
    v106 = 0LL;
  }
  if ( v62->max_length <= 6 )
    goto LABEL_71;
  v62->m_Items[6] = (Il2CppObject *)v106;
  sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[6], v106, v100, v101, v102, v103, v104, v105);
  v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v113 = (System_Int32_array **)v63;
  if ( v63 )
  {
    v63 = (UnityEngine_GameObject_o *)sub_B5D684(v63, v62->obj.klass->_1.element_class);
    if ( !v63 )
    {
LABEL_73:
      v130 = sub_B5D6BC(v63);
      sub_B5D668(v130, 0LL);
    }
  }
  if ( v62->max_length <= 7 )
    goto LABEL_71;
  v62->m_Items[7] = (Il2CppObject *)v113;
  sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[7], v113, v107, v108, v109, v110, v111, v112);
  v63 = (UnityEngine_GameObject_o *)StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v63 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v62->obj.klass->_1.element_class);
    if ( !v63 )
      goto LABEL_73;
    v120 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v120 = 0LL;
  }
  if ( v62->max_length <= 8 )
    goto LABEL_71;
  v62->m_Items[8] = (Il2CppObject *)v120;
  sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[8], v120, v114, v115, v116, v117, v118, v119);
  v63 = (UnityEngine_GameObject_o *)StringLiteral_18584/*"endMoveFigure"*/;
  if ( StringLiteral_18584/*"endMoveFigure"*/ )
  {
    v63 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_18584/*"endMoveFigure"*/, v62->obj.klass->_1.element_class);
    if ( v63 )
    {
      v127 = (System_Int32_array **)StringLiteral_18584/*"endMoveFigure"*/;
      goto LABEL_64;
    }
    goto LABEL_73;
  }
  v127 = 0LL;
LABEL_64:
  if ( v62->max_length <= 9 )
  {
LABEL_71:
    v129 = sub_B5D6C8(v63);
    sub_B5D668(v129, 0LL);
  }
  v62->m_Items[9] = (Il2CppObject *)v127;
  sub_B5D560((BattleServantConfConponent_o *)&v62->m_Items[9], v127, v121, v122, v123, v124, v125, v126);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v128 = iTween__Hash(v62, 0LL);
  iTween__MoveFrom_43184584(v55, v128, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL);
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
    sub_B5D69C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__checkDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Object_o *damage_LvupSimpleAnim; // x20
  __int64 v25; // x3
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v27; // x20
  unsigned __int64 v28; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v30; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v33; // x21

  if ( (byte_42E8917 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultExpComponent_endOpenDamageRecord__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17019/*"bit_result_levelup01"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, v20, v21, v22);
    byte_42E8917 = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
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
                                  (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v27 = myFsm;
        if ( *(_WORD *)&myFsm->klass->_2.bitflags1 )
        {
          v28 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v28;
            p_offset += 2;
            if ( v28 >= *(unsigned __int16 *)&myFsm->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v30 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_15:
          v30 = sub_AF54C0(myFsm, SimpleAnimation_State_TypeInfo, 4LL, v25);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v30)(v27, *(_QWORD *)(v30 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_16676044((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_34:
    sub_B5D69C(myFsm, method);
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
                                  (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_51249124(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_34;
  }
LABEL_29:
  damageRecordWindow = this->fields.damageRecordWindow;
  v33 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v33,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0LL);
  if ( !damageRecordWindow )
    goto LABEL_34;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._10_Open.method)(
    damageRecordWindow,
    v33,
    damageRecordWindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
}


void __fastcall BattleResultExpComponent__checkEquipLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleResultExpComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  UnityEngine_Object_o *equip_LvupSimpleAnim; // x20
  __int64 v26; // x3
  BattleResultExpComponent_c *klass; // x8
  BattleResultExpComponent_o *v28; // x20
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0
  UnityEngine_Object_o *equip_LvupAnim; // x20
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v34; // x21

  v4 = this;
  if ( (byte_42E8914 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultExpComponent_endOpenEquipUp__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17019/*"bit_result_levelup01"*/, v17, v18, v19);
    this = (BattleResultExpComponent_o *)sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, v20, v21, v22);
    byte_42E8914 = 1;
  }
  oldEquip = v4->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_36;
  newEquip = v4->fields.newEquip;
  if ( !newEquip )
    goto LABEL_36;
  if ( oldEquip->fields.lv >= newEquip->fields.lv )
  {
    this = (BattleResultExpComponent_o *)v4->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
      return;
    }
    goto LABEL_36;
  }
  this = (BattleResultExpComponent_o *)v4->fields.equipLevelupRoot;
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  equip_LvupSimpleAnim = (UnityEngine_Object_o *)v4->fields.equip_LvupSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equip_LvupSimpleAnim, 0LL, 0LL) )
  {
    this = (BattleResultExpComponent_o *)v4->fields.equip_LvupSimpleAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)this,
                                             (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        klass = this->klass;
        v28 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v29 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v29;
            p_offset += 4;
            if ( v29 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_17;
          }
          v31 = (__int64)(&klass[1]._1.gc_desc + 2 * *p_offset);
        }
        else
        {
LABEL_17:
          v31 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 4LL, v26);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v31)(v28, *(_QWORD *)(v31 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v4->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_16676044((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_31;
        }
      }
    }
LABEL_36:
    sub_B5D69C(this, method);
  }
  equip_LvupAnim = (UnityEngine_Object_o *)v4->fields.equip_LvupAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equip_LvupAnim, 0LL, 0LL) )
  {
    this = (BattleResultExpComponent_o *)v4->fields.equip_LvupAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)UnityEngine_Animation__get_Item(
                                             (UnityEngine_Animation_o *)this,
                                             (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
        this = (BattleResultExpComponent_o *)v4->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_51249124(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_31;
        }
      }
    }
    goto LABEL_36;
  }
LABEL_31:
  equipupwindow = v4->fields.equipupwindow;
  v34 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v34, (Il2CppObject *)v4, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_36;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v34,
    equipupwindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
}


void __fastcall BattleResultExpComponent__checkMasterLevelUp(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  SePlayer_o *MeterSePlayer; // x0
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  UnityEngine_Object_o *mst_LvupSimpleAnim; // x20
  __int64 v36; // x3
  SePlayer_c *klass; // x8
  SePlayer_o *v38; // x20
  unsigned __int64 v39; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v41; // x0
  UnityEngine_Object_o *mst_LvupAnim; // x20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v44; // x21
  struct UserGameEntity_o *v45; // x9
  struct UserGameEntity_o *v46; // x8
  int32_t v47; // w20

  if ( (byte_42E8910 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultExpComponent_endOpenMasterUp__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17019/*"bit_result_levelup01"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, v23, v24, v25);
    sub_B5D5C4(&iTween_TypeInfo, v26, v27, v28);
    byte_42E8910 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43300928(gameObject, 0LL);
  BattleResultExpComponent__updateValueActual(this, 1.0, 1, v30);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
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
                                      (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
                                      0LL);
      if ( MeterSePlayer )
      {
        klass = MeterSePlayer->klass;
        v38 = MeterSePlayer;
        if ( *(_WORD *)&MeterSePlayer->klass->_2.bitflags1 )
        {
          v39 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v39;
            p_offset += 2;
            if ( v39 >= *(unsigned __int16 *)&MeterSePlayer->klass->_2.bitflags1 )
              goto LABEL_22;
          }
          v41 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_22:
          v41 = sub_AF54C0(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4LL, v36);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v41)(v38, *(_QWORD *)(v41 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_16676044(
            (SimpleAnimation_o *)MeterSePlayer,
            (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_36;
        }
      }
    }
LABEL_46:
    sub_B5D69C(MeterSePlayer, v31);
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
                                    (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
                                    0LL);
    if ( !MeterSePlayer )
      goto LABEL_46;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0LL);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_46;
    UnityEngine_Animation__Play_51249124(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
      0LL);
  }
LABEL_36:
  masterupwindow = this->fields.masterupwindow;
  v44 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v44,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_46;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._10_Open.method)(
    masterupwindow,
    v44,
    masterupwindow->klass->vtable._11_CompOpen.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  v45 = this->fields.oldGame;
  if ( !v45 )
    goto LABEL_46;
  v46 = this->fields.newGame;
  if ( !v46 )
    goto LABEL_46;
  v47 = v45->fields.lv + 1;
  while ( v47 <= v46->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( MeterSePlayer )
    {
      AdManager__TrackEvent((AdManager_o *)MeterSePlayer, 3, 2, v47, -1, 0LL, 0LL);
      v46 = this->fields.newGame;
      ++v47;
      if ( v46 )
        continue;
    }
    goto LABEL_46;
  }
}


void __fastcall BattleResultExpComponent__checkOpenKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v9; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E891A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, v5, v6, v7);
    byte_42E891A = 1;
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
    sub_B5D69C(myFsm, v9);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *monitor; // x8
  void *v9; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E8918 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultExpComponent_endCloseDamageRecord__, (_DWORD)method, v2, v3);
    this = (BattleResultExpComponent_o *)sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E8918 = 1;
  }
  monitor = v4[1].monitor;
  if ( !monitor
    || (this = (BattleResultExpComponent_o *)*((_QWORD *)monitor + 6)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        v9 = v4[19].monitor,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v10, v4, Method_BattleResultExpComponent_endCloseDamageRecord__, 0LL),
        !v9) )
  {
    sub_B5D69C(this, method);
  }
  (*(void (__fastcall **)(void *, BattleWindowComponent_EndCall_o *, _QWORD))(*(_QWORD *)v9 + 504LL))(
    v9,
    v10,
    *(_QWORD *)(*(_QWORD *)v9 + 512LL));
}


void __fastcall BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *monitor; // x8
  Il2CppClass *klass; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E8915 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultExpComponent_endCloseEquipUp__, (_DWORD)method, v2, v3);
    this = (BattleResultExpComponent_o *)sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E8915 = 1;
  }
  monitor = v4[1].monitor;
  if ( !monitor
    || (this = (BattleResultExpComponent_o *)*((_QWORD *)monitor + 6)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        klass = v4[16].klass,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v10, v4, Method_BattleResultExpComponent_endCloseEquipUp__, 0LL),
        !klass) )
  {
    sub_B5D69C(this, method);
  }
  (*((void (__fastcall **)(Il2CppClass *, BattleWindowComponent_EndCall_o *, _QWORD))klass->_1.image + 63))(
    klass,
    v10,
    *((_QWORD *)klass->_1.image + 64));
}


void __fastcall BattleResultExpComponent__closeKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v6; // x1
  struct BattleResultKnockdownComponent_o *v7; // x0

  if ( (byte_42E891B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E891B = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v7 = this->fields.knockdownRecordWindow;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._12_Close.method)(
      v7,
      0LL,
      v7->klass->vtable._13_CompClose.methodPtr);
  }
}


void __fastcall BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _DWORD *monitor; // x21
  int v15; // w8
  unsigned int v16; // w20
  void *v17; // x8
  void *v18; // x20
  BattleWindowComponent_EndCall_o *v19; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E8912 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultExpComponent_endCloseMasterUp__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v8, v9, v10);
    this = (BattleResultExpComponent_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__,
                                           v11,
                                           v12,
                                           v13);
    byte_42E8912 = 1;
  }
  monitor = v4[31].monitor;
  if ( !monitor )
    goto LABEL_16;
  v15 = monitor[6];
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v15 <= v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = *(BattleResultExpComponent_o **)(*((_QWORD *)monitor + 2) + 8LL * (int)v16 + 32);
      if ( !this )
        break;
      this = (BattleResultExpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      monitor = v4[31].monitor;
      if ( !monitor )
        break;
      v15 = monitor[6];
      if ( (int)++v16 >= v15 )
        goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(this, method);
  }
LABEL_12:
  v17 = v4[1].monitor;
  if ( !v17 )
    goto LABEL_16;
  this = (BattleResultExpComponent_o *)*((_QWORD *)v17 + 6);
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v18 = v4[8].monitor;
  v19 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v19, v4, Method_BattleResultExpComponent_endCloseMasterUp__, 0LL);
  if ( !v18 )
    goto LABEL_16;
  (*(void (__fastcall **)(void *, BattleWindowComponent_EndCall_o *, _QWORD))(*(_QWORD *)v18 + 504LL))(
    v18,
    v19,
    *(_QWORD *)(*(_QWORD *)v18 + 512LL));
}


void __fastcall BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_42E890C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E890C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(gameObject, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_42E8919 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E8919 = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_42E8916 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E8916 = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_42E8913 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E8913 = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endMoveFigure(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Object_array *v47; // x21
  __int64 v48; // x0
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
  System_Int32_array **v84; // x1
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
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x22
  System_Collections_Hashtable_o *v113; // x0
  System_String_o *CommonSeName; // x20
  struct SePlayer_o *v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  __int64 v122; // x0
  __int64 v123; // x0
  float time_exptotal; // [xsp+Ch] [xbp-34h] BYREF
  int v125; // [xsp+18h] [xbp-28h] BYREF
  int v126; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E890D & 1) == 0 )
  {
    sub_B5D5C4(&object___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SeManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&float_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_15227/*"UpdateValue"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18978/*"finishUpdateValue"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v32, v33, v34);
    sub_B5D5C4(&iTween_TypeInfo, v35, v36, v37);
    byte_42E890D = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v39 = sub_B5D5DC(object___TypeInfo, 10LL);
    if ( !v39 )
      sub_B5D69C(0LL, v40);
    v47 = (System_Object_array *)v39;
    v48 = StringLiteral_19153/*"from"*/;
    if ( StringLiteral_19153/*"from"*/ )
    {
      v48 = sub_B5D684(StringLiteral_19153/*"from"*/, v47->obj.klass->_1.element_class);
      if ( !v48 )
        goto LABEL_62;
      v49 = (System_Int32_array **)StringLiteral_19153/*"from"*/;
    }
    else
    {
      v49 = 0LL;
    }
    if ( !v47->max_length )
      goto LABEL_61;
    v47->m_Items[0] = (Il2CppObject *)v49;
    sub_B5D560((BattleServantConfConponent_o *)v47->m_Items, v49, v41, v42, v43, v44, v45, v46);
    v126 = 0;
    v48 = j_il2cpp_value_box_0(float_TypeInfo, &v126);
    v56 = (System_Int32_array **)v48;
    if ( !v48 || (v48 = sub_B5D684(v48, v47->obj.klass->_1.element_class)) != 0 )
    {
      if ( v47->max_length <= 1 )
        goto LABEL_61;
      v47->m_Items[1] = (Il2CppObject *)v56;
      sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[1], v56, v50, v51, v52, v53, v54, v55);
      v48 = StringLiteral_23019/*"to"*/;
      if ( StringLiteral_23019/*"to"*/ )
      {
        v48 = sub_B5D684(StringLiteral_23019/*"to"*/, v47->obj.klass->_1.element_class);
        if ( !v48 )
          goto LABEL_62;
        v63 = (System_Int32_array **)StringLiteral_23019/*"to"*/;
      }
      else
      {
        v63 = 0LL;
      }
      if ( v47->max_length <= 2 )
        goto LABEL_61;
      v47->m_Items[2] = (Il2CppObject *)v63;
      sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[2], v63, v57, v58, v59, v60, v61, v62);
      v125 = 1065353216;
      v48 = j_il2cpp_value_box_0(float_TypeInfo, &v125);
      v70 = (System_Int32_array **)v48;
      if ( !v48 || (v48 = sub_B5D684(v48, v47->obj.klass->_1.element_class)) != 0 )
      {
        if ( v47->max_length <= 3 )
          goto LABEL_61;
        v47->m_Items[3] = (Il2CppObject *)v70;
        sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[3], v70, v64, v65, v66, v67, v68, v69);
        v48 = StringLiteral_21551/*"onupdate"*/;
        if ( StringLiteral_21551/*"onupdate"*/ )
        {
          v48 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v47->obj.klass->_1.element_class);
          if ( !v48 )
            goto LABEL_62;
          v77 = (System_Int32_array **)StringLiteral_21551/*"onupdate"*/;
        }
        else
        {
          v77 = 0LL;
        }
        if ( v47->max_length <= 4 )
          goto LABEL_61;
        v47->m_Items[4] = (Il2CppObject *)v77;
        sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[4], v77, v71, v72, v73, v74, v75, v76);
        v48 = StringLiteral_15227/*"UpdateValue"*/;
        if ( StringLiteral_15227/*"UpdateValue"*/ )
        {
          v48 = sub_B5D684(StringLiteral_15227/*"UpdateValue"*/, v47->obj.klass->_1.element_class);
          if ( !v48 )
            goto LABEL_62;
          v84 = (System_Int32_array **)StringLiteral_15227/*"UpdateValue"*/;
        }
        else
        {
          v84 = 0LL;
        }
        if ( v47->max_length <= 5 )
          goto LABEL_61;
        v47->m_Items[5] = (Il2CppObject *)v84;
        sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[5], v84, v78, v79, v80, v81, v82, v83);
        v48 = StringLiteral_21542/*"oncomplete"*/;
        if ( StringLiteral_21542/*"oncomplete"*/ )
        {
          v48 = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v47->obj.klass->_1.element_class);
          if ( !v48 )
            goto LABEL_62;
          v91 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
        }
        else
        {
          v91 = 0LL;
        }
        if ( v47->max_length <= 6 )
          goto LABEL_61;
        v47->m_Items[6] = (Il2CppObject *)v91;
        sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[6], v91, v85, v86, v87, v88, v89, v90);
        v48 = StringLiteral_18978/*"finishUpdateValue"*/;
        if ( StringLiteral_18978/*"finishUpdateValue"*/ )
        {
          v48 = sub_B5D684(StringLiteral_18978/*"finishUpdateValue"*/, v47->obj.klass->_1.element_class);
          if ( !v48 )
            goto LABEL_62;
          v98 = (System_Int32_array **)StringLiteral_18978/*"finishUpdateValue"*/;
        }
        else
        {
          v98 = 0LL;
        }
        if ( v47->max_length <= 7 )
          goto LABEL_61;
        v47->m_Items[7] = (Il2CppObject *)v98;
        sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[7], v98, v92, v93, v94, v95, v96, v97);
        v48 = StringLiteral_22982/*"time"*/;
        if ( StringLiteral_22982/*"time"*/ )
        {
          v48 = sub_B5D684(StringLiteral_22982/*"time"*/, v47->obj.klass->_1.element_class);
          if ( !v48 )
            goto LABEL_62;
          v105 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
        }
        else
        {
          v105 = 0LL;
        }
        if ( v47->max_length <= 8 )
          goto LABEL_61;
        v47->m_Items[8] = (Il2CppObject *)v105;
        sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[8], v105, v99, v100, v101, v102, v103, v104);
        time_exptotal = this->fields.time_exptotal;
        v48 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal);
        v112 = (System_Int32_array **)v48;
        if ( !v48 || (v48 = sub_B5D684(v48, v47->obj.klass->_1.element_class)) != 0 )
        {
          if ( v47->max_length > 9 )
          {
            v47->m_Items[9] = (Il2CppObject *)v112;
            sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[9], v112, v106, v107, v108, v109, v110, v111);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v113 = iTween__Hash(v47, 0LL);
            iTween__ValueTo(gameObject, v113, 0LL);
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
              v115 = SoundManager__playSe(CommonSeName, 0LL);
              this->fields.MeterSePlayer = v115;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.MeterSePlayer,
                (System_Int32_array **)v115,
                v116,
                v117,
                v118,
                v119,
                v120,
                v121);
            }
            return;
          }
LABEL_61:
          v122 = sub_B5D6C8(v48);
          sub_B5D668(v122, 0LL);
        }
      }
    }
LABEL_62:
    v123 = sub_B5D6BC(v48);
    sub_B5D668(v123, 0LL);
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_B5D69C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_B5D69C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8911 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15388/*"WAIT_OPEN"*/, (_DWORD)method, v2, v3);
    byte_42E8911 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15388/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E890E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E890E = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
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
  UILabel_o *equip_getexpLabel; // x23
  Il2CppObject *v26; // x0
  System_String_o *Instance; // x0
  __int64 v28; // x1
  EquipExpMaster_o *v29; // x25
  int32_t Level; // w22
  int32_t LevelMax; // w24
  System_String_o *v32; // x23
  UILabel_o *equip_atexpLabel; // x26
  const MethodInfo *v34; // x2
  int32_t exp; // w21
  float value; // s0
  float v37; // s8
  float v38; // s0
  int v40; // [xsp+Ch] [xbp-64h] BYREF
  EquipExpEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t v42; // [xsp+1Ch] [xbp-54h] BYREF

  v42 = getexp;
  if ( (byte_42E8909 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipExpMaster___, equipId, getexp, *(_QWORD *)&nowexp);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11244/*"RESULT_EQUIP_MAXEXP"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_701/*"+ {0}"*/, v22, v23, v24);
    byte_42E8909 = 1;
  }
  entity = 0LL;
  v40 = 0;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v26 = (Il2CppObject *)System_Int32__ToString_39741776((int32_t)&v42, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
  Instance = System_String__Format((System_String_o *)StringLiteral_701/*"+ {0}"*/, v26, 0LL);
  if ( !equip_getexpLabel )
    goto LABEL_28;
  UILabel__set_text(equip_getexpLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_28;
  v29 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowexp, start_level, 0LL);
  LevelMax = EquipExpMaster__getLevelMax(v29, equipId, 0LL);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v29, equipId, Level, 0LL);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_28;
  v32 = Instance;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0LL);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11244/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_28;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0LL);
    if ( !v32 )
      goto LABEL_28;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v40 = LODWORD(v32[1].klass) - nowexp;
    Instance = System_Int32__ToString_39741776((int32_t)&v40, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_28;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0LL);
  BattleResultExpComponent__setEquipLv(this, Level, v34);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v29, &entity, equipId, Level - 1, 0LL);
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
    sub_B5D69C(Instance, v28);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  v37 = value;
  if ( Level == LevelMax )
  {
    if ( !Instance )
      goto LABEL_28;
    v38 = 1.0;
  }
  else
  {
    if ( !v32 || !Instance )
      goto LABEL_28;
    v38 = 1.0 - (float)((float)(LODWORD(v32[1].klass) - nowexp) / (float)(LODWORD(v32[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v38, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_28;
  return v37 != UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
}


void __fastcall BattleResultExpComponent__setEquipLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  bool v18; // w0
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v20; // x1
  System_String_o *v21; // x0
  int32_t v22; // [xsp+8h] [xbp-28h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8905 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, level, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_2535/*"BATTLE_RESULTEXP_EQUIPLV"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v12, v13, v14);
    byte_42E8905 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2535/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v15 )
    goto LABEL_12;
  v17 = v15;
  v18 = System_String__Equals_44565128(v15, (System_String_o *)StringLiteral_2535/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v18 )
  {
    v22 = level;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v21 = (System_String_o *)StringLiteral_23850/*"{0}"*/;
  }
  else
  {
    v23 = level;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v21 = v17;
  }
  v15 = System_String__Format(v21, v20, 0LL);
  if ( !equip_Lv )
LABEL_12:
    sub_B5D69C(v15, v16);
  UILabel__set_text(equip_Lv, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultExpComponent__setMasterExp(
        BattleResultExpComponent_o *this,
        int64_t getexp,
        int64_t nowexp,
        int32_t start_level,
        const MethodInfo *method)
{
  int32_t Level; // w20
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UILabel_o *mst_getexpLabel; // x22
  Il2CppObject *v33; // x0
  System_String_o *mst_slider; // x0
  __int64 v35; // x1
  float value; // s8
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v38; // x2
  bool v39; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x23
  UILabel_o *v41; // x24
  System_String_o *v42; // x22
  struct System_String_o *age; // x8
  float v44; // s0
  UILabel_o *v45; // x20
  int64_t v47; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int64_t v49; // [xsp+18h] [xbp-48h] BYREF

  Level = start_level;
  v49 = getexp;
  if ( (byte_42E8908 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserExpMaster___, getexp, nowexp, *(_QWORD *)&start_level);
    sub_B5D5C4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11244/*"RESULT_EQUIP_MAXEXP"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_8793/*"MAX_USER_LV"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_701/*"+ {0}"*/, v29, v30, v31);
    byte_42E8908 = 1;
  }
  v47 = 0LL;
  entity = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v33 = (Il2CppObject *)System_Int64__ToString_39744560((int64_t)&v49, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
  mst_slider = System_String__Format((System_String_o *)StringLiteral_701/*"+ {0}"*/, v33, 0LL);
  if ( !mst_getexpLabel )
    goto LABEL_32;
  UILabel__set_text(mst_getexpLabel, mst_slider, 0LL);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_32;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  mst_slider = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8793/*"MAX_USER_LV"*/, 0LL);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_32;
  if ( (_DWORD)mst_slider == Level )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0LL);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11244/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_32;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_32;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
    v39 = 0;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    mst_slider = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mst_slider )
      goto LABEL_32;
    mst_slider = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)mst_slider,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserExpMaster___);
    if ( !mst_slider )
      goto LABEL_32;
    v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)mst_slider;
    Level = UserExpMaster__getLevel((UserExpMaster_o *)mst_slider, nowexp, Level, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v40,
                                      Level,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_32;
    v41 = this->fields.mst_atexpLabel;
    v42 = mst_slider;
    v47 = (int64_t)mst_slider[1].klass - nowexp;
    mst_slider = System_Int64__ToString_39744560((int64_t)&v47, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
    if ( !v41 )
      goto LABEL_32;
    UILabel__set_text(v41, mst_slider, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      v40,
                                      &entity,
                                      Level - 1,
                                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    age = 0LL;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      age = entity->fields.age;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v44 = 1.0 - (double)((unsigned __int64)v42[1].klass - nowexp) / (double)((char *)v42[1].klass - (char *)age),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v44, 0LL),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0LL) )
    {
LABEL_32:
      sub_B5D69C(mst_slider, v35);
    }
    v39 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, Level, v38);
  if ( Level == ConstantMaster__getValue((System_String_o *)StringLiteral_8793/*"MAX_USER_LV"*/, 0LL) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( mst_slider )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0LL);
      v45 = this->fields.mst_atexpLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11244/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
      if ( v45 )
      {
        UILabel__set_text(v45, mst_slider, 0LL);
        mst_slider = (System_String_o *)this->fields.mst_slider;
        if ( mst_slider )
        {
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
          return v39;
        }
      }
    }
    goto LABEL_32;
  }
  return v39;
}


void __fastcall BattleResultExpComponent__setMasterLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  bool v18; // w0
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v20; // x1
  System_String_o *v21; // x0
  int32_t v22; // [xsp+8h] [xbp-28h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8904 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, level, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2540/*"BATTLE_RESULTEXP_MASTERLV"*/, v12, v13, v14);
    byte_42E8904 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2540/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v15 )
    goto LABEL_12;
  v17 = v15;
  v18 = System_String__Equals_44565128(v15, (System_String_o *)StringLiteral_2540/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v18 )
  {
    v22 = level;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v21 = (System_String_o *)StringLiteral_23850/*"{0}"*/;
  }
  else
  {
    v23 = level;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v21 = v17;
  }
  v15 = System_String__Format(v21, v20, 0LL);
  if ( !mst_Lv )
LABEL_12:
    sub_B5D69C(v15, v16);
  UILabel__set_text(mst_Lv, v15, 0LL);
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  __int64 v85; // x27
  __int64 Instance; // x0
  __int64 v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  __int64 v94; // x23
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 *v101; // x26
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  struct UserGameEntity_o *v108; // x1
  struct UserGameEntity_o **p_oldGame; // x28
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  UnityEngine_Object_o *knockdownRecordWindow; // x24
  const MethodInfo *v123; // x2
  UserServantEntity_o *v124; // x0
  struct UserGameEntity_o **p_newGame; // x24
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  UserServantEntity_o *v132; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  const MethodInfo *v139; // x4
  struct UserGameEntity_o *newGame; // x8
  UILabel_o *equip_nameLabel; // x25
  __int64 v142; // x21
  __int64 v143; // x28
  int32_t v144; // w0
  const MethodInfo *v145; // x5
  int32_t *p_lv; // x25
  const MethodInfo *v147; // x2
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  System_Func_float__int__int__o *v149; // x28
  const MethodInfo *v150; // x4
  int v151; // w27
  __int64 v152; // x8
  BattleResultExpComponent_o *v153; // x28
  signed __int64 v154; // x19
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v157; // x8
  UserEquipEntity_o *v158; // x21
  int v159; // w8
  __int64 v160; // x26
  unsigned int v161; // w20
  struct UISprite_array *v162; // x8
  struct UISprite_array *v163; // x8
  struct UISprite_array *v164; // x8
  struct UISprite_array *v165; // x8
  const MethodInfo *v166; // x4
  struct UISprite_array *v167; // x8
  const MethodInfo *v168; // x4
  struct UISprite_array *v169; // x8
  int v170; // w8
  const MethodInfo *v171; // x2
  UILabel_o *equip_oldlevelLabel; // x22
  System_String_o *v173; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x21
  System_String_o *v176; // x1
  System_Text_StringBuilder_o *v177; // x22
  __int64 v178; // x23
  System_Int32_array *SkillIdList; // x24
  System_Int32_array *SkillLvList; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v181; // x27
  int v182; // w20
  unsigned __int64 v183; // x25
  int32_t *v184; // x19
  System_String_o *v185; // x28
  Il2CppObject *v186; // x21
  Il2CppObject *v187; // x0
  System_String_o *v188; // x21
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x23
  UILabel_o *equip_confLabel; // x21
  int64_t bestTurnDamage; // x11
  int64_t oldRecordDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v195; // x21
  bool v196; // w1
  UILabel_o *damage_battleLabel; // x21
  __int64 v198; // x0
  UserEquipEntity_o *v199; // [xsp+0h] [xbp-A0h]
  UserEquipEntity_o **p_newEquip; // [xsp+8h] [xbp-98h]
  __int64 v201; // [xsp+18h] [xbp-88h]
  int32_t *v202; // [xsp+20h] [xbp-80h]
  int32_t v204; // [xsp+3Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  UnityEngine_Vector3_o v207; // 0:s0.4,4:s1.4,8:s2.4

  v14 = oldEquip;
  if ( (byte_42E8906 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_UILabel___,
      (_DWORD)oldGame,
      (_DWORD)oldEquip,
      masterLvInfoArray);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserGameMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Func_float__int__int__Invoke__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Func_float__int__int___ctor__, v37, v38, v39);
    sub_B5D5C4(&System_Func_float__int__int__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&int_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v55, v56, v57);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__, v61, v62, v63);
    sub_B5D5C4(&BattleResultExpComponent___c__DisplayClass61_0_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_17032/*"bit_reward_shine01"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_11243/*"RESULT_EQEXP_UPSKILLLV"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_11242/*"RESULT_EQEXP_GETSKILL"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_17033/*"bit_reward_shine02"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_345/*"#,#"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_1/*""*/, v82, v83, v84);
    byte_42E8906 = 1;
  }
  entity = 0LL;
  v85 = sub_B5D694(BattleResultExpComponent___c__DisplayClass61_0_TypeInfo);
  BattleResultExpComponent___c__DisplayClass61_0___ctor((BattleResultExpComponent___c__DisplayClass61_0_o *)v85, 0LL);
  if ( !v85 )
    goto LABEL_139;
  *(_QWORD *)(v85 + 16) = oldGame;
  v94 = v85 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v85 + 16), (System_Int32_array **)oldGame, v88, v89, v90, v91, v92, v93);
  *(_QWORD *)(v85 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v85 + 24), (System_Int32_array **)this, v95, v96, v97, v98, v99, v100);
  *(_QWORD *)(v85 + 32) = masterLvInfoArray;
  v101 = (__int64 *)(v85 + 32);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v85 + 32),
    (System_Int32_array **)masterLvInfoArray,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  v108 = *(struct UserGameEntity_o **)(v85 + 16);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = v108;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.oldGame,
    (System_Int32_array **)v108,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  this->fields.oldEquip = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.oldEquip,
    (System_Int32_array **)v14,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
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
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Instance, knockdownResult, v123);
  }
  this->fields.updateFlg = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_139;
  if ( !Instance )
    goto LABEL_139;
  v124 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
           (*p_oldGame)->fields.userId,
           (const MethodInfo_23FB038 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v124;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.newGame,
    (System_Int32_array **)v124,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !v14 )
    goto LABEL_139;
  if ( !Instance )
    goto LABEL_139;
  v132 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
           v14->fields.id,
           (const MethodInfo_23FB038 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  this->fields.newEquip = (struct UserEquipEntity_o *)v132;
  p_newEquip = &this->fields.newEquip;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.newEquip,
    (System_Int32_array **)v132,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  newGame = this->fields.newGame;
  if ( !newGame || !*(_QWORD *)v94 )
    goto LABEL_139;
  BattleResultExpComponent__setMasterExp(
    this,
    newGame->fields.exp - *(_QWORD *)(*(_QWORD *)v94 + 88LL),
    *(_QWORD *)(*(_QWORD *)v94 + 88LL),
    *(_DWORD *)(*(_QWORD *)v94 + 80LL),
    v139);
  equip_nameLabel = this->fields.equip_nameLabel;
  v143 = *(_QWORD *)&v14->fields.equipId.fields.currentCryptoKey;
  v142 = *(_QWORD *)&v14->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v206.fields.currentCryptoKey = v143;
  *(_QWORD *)&v206.fields.fakeValue = v142;
  v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v206, 0LL);
  Instance = (__int64)EquipMaster__getEquipName(v144, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Instance, 0LL),
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14->fields.equipId, 0LL),
        !*p_newEquip)
    || (p_lv = &v14->fields.lv,
        Instance = BattleResultExpComponent__setEquipExp(
                     this,
                     Instance,
                     (*p_newEquip)->fields.exp - v14->fields.exp,
                     v14->fields.exp,
                     v14->fields.lv,
                     v145),
        !*(_QWORD *)v94)
    || (BattleResultExpComponent__setMasterLv(this, *(_DWORD *)(*(_QWORD *)v94 + 80LL), v147),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_139:
    sub_B5D69C(Instance, v87);
  }
  if ( !upParamList->max_length )
    goto LABEL_140;
  if ( !*(_QWORD *)v94 )
    goto LABEL_139;
  if ( !*p_newGame )
    goto LABEL_139;
  Instance = (__int64)upParamList->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Instance,
    *(_DWORD *)(*(_QWORD *)v94 + 80LL),
    (*p_newGame)->fields.lv,
    0LL);
  v149 = (System_Func_float__int__int__o *)sub_B5D694(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    v149,
    (Il2CppObject *)v85,
    Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__,
    (const MethodInfo_2C3A5C4 *)Method_System_Func_float__int__int___ctor__);
  if ( !v149 )
    goto LABEL_139;
  Instance = System_Func_float__int__int___Invoke(
               v149,
               -186.0,
               35,
               (const MethodInfo_2C3A5D8 *)Method_System_Func_float__int__int__Invoke__);
  v151 = Instance;
  if ( (int)Instance < 6 )
  {
    v152 = *v101;
    if ( *v101 )
    {
      v153 = this;
      v154 = 0LL;
      while ( v154 < *(int *)(v152 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_139;
        max_length = lvUpRewardSpArray->max_length;
        if ( v154 < (int)max_length )
        {
          if ( v154 >= max_length )
            goto LABEL_140;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v154],
            (System_String_o *)StringLiteral_17032/*"bit_reward_shine01"*/,
            v150);
          v152 = *v101;
        }
        ++v154;
        if ( !v152 )
          goto LABEL_139;
      }
      v170 = 35;
    }
    else
    {
      v153 = this;
      v170 = 35;
    }
    goto LABEL_70;
  }
  v157 = this->fields.upParamList;
  if ( !v157 )
    goto LABEL_139;
  if ( !v157->max_length )
    goto LABEL_140;
  Instance = (__int64)v157->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_139;
  v158 = v14;
  Instance = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Instance )
    goto LABEL_139;
  v159 = *(_DWORD *)(Instance + 24);
  v160 = Instance;
  if ( v159 >= 1 )
  {
    v161 = 0;
    while ( v161 < v159 )
    {
      Instance = *(_QWORD *)(v160 + 8LL * (int)v161 + 32);
      if ( !Instance )
        goto LABEL_139;
      UILabel__set_fontSize((UILabel_o *)Instance, *(_DWORD *)(Instance + 416) - 2, 0LL);
      v159 = *(_DWORD *)(v160 + 24);
      if ( (int)++v161 >= v159 )
        goto LABEL_51;
    }
    goto LABEL_140;
  }
LABEL_51:
  v162 = this->fields.lvUpRewardSpArray;
  if ( !v162 )
    goto LABEL_139;
  if ( !v162->max_length )
    goto LABEL_140;
  Instance = (__int64)v162->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 160) - 5, 0LL);
  v163 = this->fields.lvUpRewardSpArray;
  if ( !v163 )
    goto LABEL_139;
  if ( !v163->max_length )
    goto LABEL_140;
  Instance = (__int64)v163->m_Items[0];
  if ( !Instance )
    goto LABEL_139;
  v14 = v158;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 164) - 5, 0LL);
  v164 = this->fields.lvUpRewardSpArray;
  if ( !v164 )
    goto LABEL_139;
  if ( v164->max_length <= 1 )
    goto LABEL_140;
  Instance = (__int64)v164->m_Items[1];
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 160) - 5, 0LL);
  v165 = this->fields.lvUpRewardSpArray;
  if ( !v165 )
    goto LABEL_139;
  if ( v165->max_length <= 1 )
    goto LABEL_140;
  Instance = (__int64)v165->m_Items[1];
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 164) - 5, 0LL);
  Instance = System_Func_float__int__int___Invoke(
               v149,
               -186.0,
               31,
               (const MethodInfo_2C3A5D8 *)Method_System_Func_float__int__int__Invoke__);
  v153 = this;
  v167 = this->fields.lvUpRewardSpArray;
  if ( !v167 )
    goto LABEL_139;
  if ( !v167->max_length )
    goto LABEL_140;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v167->m_Items[0],
    (System_String_o *)StringLiteral_17033/*"bit_reward_shine02"*/,
    v166);
  v169 = this->fields.lvUpRewardSpArray;
  if ( !v169 )
    goto LABEL_139;
  if ( v169->max_length <= 1 )
  {
LABEL_140:
    v198 = sub_B5D6C8(Instance);
    sub_B5D668(v198, 0LL);
  }
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v169->m_Items[1],
    (System_String_o *)StringLiteral_17033/*"bit_reward_shine02"*/,
    v168);
  v170 = 31;
LABEL_70:
  Instance = (__int64)v153->fields.masterLevelwindowSprite;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_height((UIWidget_o *)Instance, v170 * v151 + 134, 0LL);
  if ( !*(_QWORD *)v94 )
    goto LABEL_139;
  if ( !*p_newGame )
    goto LABEL_139;
  v153->fields.updateFlg |= *(_QWORD *)(*(_QWORD *)v94 + 88LL) != (*p_newGame)->fields.exp;
  BattleResultExpComponent__setEquipLv(v153, *p_lv, v171);
  equip_oldlevelLabel = v153->fields.equip_oldlevelLabel;
  Instance = (__int64)System_Int32__ToString((int32_t)p_lv, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_139;
  v173 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v173, 0LL);
  newEquip = v153->fields.newEquip;
  if ( !newEquip )
    goto LABEL_139;
  equip_newlevelLabel = v153->fields.equip_newlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_139;
  v176 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v176, 0LL);
  v177 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v177, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillIdList(v14, 0LL);
  if ( !*p_newEquip )
    goto LABEL_139;
  v178 = Instance;
  SkillIdList = UserEquipEntity__getSkillIdList(*p_newEquip, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillLvList(v14, 0LL);
  v201 = Instance;
  if ( !*p_newEquip )
    goto LABEL_139;
  SkillLvList = UserEquipEntity__getSkillLvList(*p_newEquip, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v178 )
    goto LABEL_139;
  v199 = v14;
  if ( *(int *)(v178 + 24) >= 1 )
  {
    v181 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v182 = 0;
    v202 = &SkillLvList->m_Items[1];
    v183 = 0LL;
    v184 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      entity = 0LL;
      if ( !SkillIdList )
        goto LABEL_139;
      if ( v183 >= SkillIdList->max_length )
        goto LABEL_140;
      if ( !v181 )
        goto LABEL_139;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v181,
                   &entity,
                   v184[v183],
                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( entity && (Instance & 1) != 0 )
      {
        if ( v183 >= *(unsigned int *)(v178 + 24) || v183 >= SkillIdList->max_length )
          goto LABEL_140;
        if ( *(_DWORD *)(v178 + 32 + 4 * v183) != v184[v183] )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11242/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !entity )
            goto LABEL_139;
          v188 = (System_String_o *)Instance;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          Instance = (__int64)System_String__Format(v188, Name, 0LL);
          if ( !v177 )
            goto LABEL_139;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_42954540(v177, (System_String_o *)Instance, 0LL);
LABEL_114:
          v182 += 3;
          goto LABEL_115;
        }
        if ( !v201 )
          goto LABEL_139;
        if ( v183 >= *(unsigned int *)(v201 + 24) )
          goto LABEL_140;
        if ( !SkillLvList )
          goto LABEL_139;
        if ( v183 >= SkillLvList->max_length )
          goto LABEL_140;
        if ( *(_DWORD *)(v201 + 32 + 4 * v183) != v202[v183] )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11243/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !entity )
            goto LABEL_139;
          v185 = (System_String_o *)Instance;
          Instance = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( v183 >= SkillLvList->max_length )
            goto LABEL_140;
          v186 = (Il2CppObject *)Instance;
          v204 = v202[v183];
          v187 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204);
          Instance = (__int64)System_String__Format_44573324(v185, v186, v187, 0LL);
          if ( !v177 )
            goto LABEL_139;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_42954540(v177, (System_String_o *)Instance, 0LL);
          v153 = this;
          goto LABEL_114;
        }
      }
LABEL_115:
      if ( (__int64)++v183 >= *(int *)(v178 + 24) )
        goto LABEL_118;
    }
  }
  v182 = 0;
LABEL_118:
  eqConfRoot = v153->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_139;
  LODWORD(v207.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(v153->fields.eqConfRoot, 0LL);
  v207.fields.y = (float)v182 * 10.0;
  v207.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v207, 0LL);
  Instance = (__int64)v153->fields.eqLevelwindowSprite;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_height((UIWidget_o *)Instance, 22 * v182 + 134, 0LL);
  if ( !v177 )
    goto LABEL_139;
  equip_confLabel = v153->fields.equip_confLabel;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v177->klass->vtable._3_ToString.method)(
               v177,
               v177->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_139;
  UILabel__set_text(equip_confLabel, (System_String_o *)Instance, 0LL);
  if ( !*p_newEquip )
    goto LABEL_139;
  bestTurnDamage = v153->fields.bestTurnDamage;
  oldRecordDamage = v153->fields.oldRecordDamage;
  v153->fields.updateFlg |= v199->fields.exp != (*p_newEquip)->fields.exp;
  damage_recordLabel = v153->fields.damage_recordLabel;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Instance = (__int64)System_Int64__ToString_39744560(
                          (int64_t)&v153->fields.oldRecordDamage,
                          (System_String_o *)StringLiteral_345/*"#,#"*/,
                          0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
      damage_battleLabel = v153->fields.damage_battleLabel;
      Instance = (__int64)System_Int64__ToString_39744560(
                            (int64_t)&v153->fields.bestTurnDamage,
                            (System_String_o *)StringLiteral_345/*"#,#"*/,
                            0LL);
      if ( damage_battleLabel )
      {
        UILabel__set_text(damage_battleLabel, (System_String_o *)Instance, 0LL);
        Instance = (__int64)v153->fields.damage_recordLabel;
        if ( Instance )
        {
          UIWidget__set_color((UIWidget_o *)Instance, v153->fields.record_intactColor, 0LL);
          Instance = (__int64)v153->fields.damage_battleLabel;
          if ( Instance )
          {
            UIWidget__set_color((UIWidget_o *)Instance, v153->fields.damage_intactColor, 0LL);
            Instance = (__int64)v153->fields.damage_recordRenewalSp;
            if ( Instance )
            {
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( Instance )
              {
                v196 = 0;
                goto LABEL_138;
              }
            }
          }
        }
      }
    }
    goto LABEL_139;
  }
  Instance = (__int64)System_Int64__ToString_39744560(
                        (int64_t)&v153->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_345/*"#,#"*/,
                        0LL);
  if ( !damage_recordLabel )
    goto LABEL_139;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
  v195 = v153->fields.damage_battleLabel;
  Instance = (__int64)System_Int64__ToString_39744560(
                        (int64_t)&v153->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_345/*"#,#"*/,
                        0LL);
  if ( !v195 )
    goto LABEL_139;
  UILabel__set_text(v195, (System_String_o *)Instance, 0LL);
  Instance = (__int64)v153->fields.damage_recordLabel;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_color((UIWidget_o *)Instance, v153->fields.record_renewalColor, 0LL);
  Instance = (__int64)v153->fields.damage_battleLabel;
  if ( !Instance )
    goto LABEL_139;
  UIWidget__set_color((UIWidget_o *)Instance, v153->fields.damage_renewalColor, 0LL);
  Instance = (__int64)v153->fields.damage_recordRenewalSp;
  if ( !Instance )
    goto LABEL_139;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_139;
  v196 = 1;
LABEL_138:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v196, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__updateValueActual(
        BattleResultExpComponent_o *this,
        float val,
        bool isFinish,
        const MethodInfo *method)
{
  __int64 v4; // x3
  BattleResultExpComponent_o *v7; // x19
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  double v10; // d0
  const MethodInfo *v11; // x4
  struct UserGameEntity_o *v12; // x8
  BattleResultExpComponent_o *exp; // x2
  struct UserGameEntity_o *v14; // x9
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  double v17; // d0
  struct UserEquipEntity_o *v18; // x8
  int32_t v19; // w21
  __int64 v20; // x20
  __int64 v21; // x22
  const MethodInfo *v22; // x5
  struct UserEquipEntity_o *v23; // x8
  struct UserEquipEntity_o *v24; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v7 = this;
  if ( (byte_42E890F & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_B5D5C4(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           isFinish,
                                           (_DWORD)method,
                                           v4);
    byte_42E890F = 1;
  }
  oldGame = v7->fields.oldGame;
  if ( !oldGame )
    goto LABEL_22;
  newGame = v7->fields.newGame;
  if ( !newGame )
    goto LABEL_22;
  v10 = BattleUtility__LerpDouble((double)oldGame->fields.exp, (double)newGame->fields.exp, val, 0LL);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToLong(v10, 0LL);
  v12 = v7->fields.newGame;
  if ( isFinish )
  {
    if ( !v12 )
      goto LABEL_22;
    exp = (BattleResultExpComponent_o *)v12->fields.exp;
  }
  else
  {
    exp = this;
    if ( !v12 )
      goto LABEL_22;
  }
  v14 = v7->fields.oldGame;
  if ( !v14 )
    goto LABEL_22;
  this = (BattleResultExpComponent_o *)BattleResultExpComponent__setMasterExp(
                                         v7,
                                         v12->fields.exp - v14->fields.exp,
                                         (int64_t)exp,
                                         v14->fields.lv,
                                         v11);
  oldEquip = v7->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_22;
  newEquip = v7->fields.newEquip;
  if ( !newEquip )
    goto LABEL_22;
  v17 = BattleUtility__LerpDouble((double)oldEquip->fields.exp, (double)newEquip->fields.exp, val, 0LL);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_23938964(v17, 0LL);
  v18 = v7->fields.newEquip;
  if ( isFinish )
  {
    if ( !v18 )
      goto LABEL_22;
    v19 = v18->fields.exp;
  }
  else
  {
    v19 = (int)this;
    if ( !v18 )
      goto LABEL_22;
  }
  v21 = *(_QWORD *)&v18->fields.equipId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v21;
  *(_QWORD *)&v25.fields.fakeValue = v20;
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
  v23 = v7->fields.newEquip;
  if ( !v23 || (v24 = v7->fields.oldEquip) == 0LL )
LABEL_22:
    sub_B5D69C(this, isFinish);
  BattleResultExpComponent__setEquipExp(v7, (int32_t)this, v23->fields.exp - v24->fields.exp, v19, v24->fields.lv, v22);
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
  __int64 v4; // x3
  BattleResultExpComponent___c__DisplayClass61_0_o *v6; // x20
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  struct UserGameEntity_o *oldGame; // x8
  struct BattleResultExpComponent_o *_4__this; // x10
  struct UserGameEntity_o *newGame; // x9
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x10
  int32_t actMax; // w19
  int32_t v42; // w21
  struct BattleResultExpComponent_o *v43; // x8
  struct BattleResultMasterUpStatusComponent_array *v44; // x8
  struct BattleResultExpComponent_o *v45; // x8
  struct BattleResultMasterUpStatusComponent_array *v46; // x9
  struct UserGameEntity_o *v47; // x10
  struct UserGameEntity_o *v48; // x8
  int v49; // w22
  struct UserGameEntity_o *v50; // x8
  struct BattleResultExpComponent_o *v51; // x10
  struct UserGameEntity_o *v52; // x9
  struct BattleResultMasterUpStatusComponent_array *v53; // x10
  int32_t costMax; // w19
  int32_t v55; // w21
  struct BattleResultExpComponent_o *v56; // x8
  struct BattleResultMasterUpStatusComponent_array *v57; // x8
  struct BattleResultExpComponent_o *v58; // x8
  struct BattleResultMasterUpStatusComponent_array *v59; // x9
  struct UserGameEntity_o *v60; // x10
  struct UserGameEntity_o *v61; // x8
  struct BattleResultExpComponent_o *v62; // x8
  struct BattleResultMasterUpStatusComponent_array *v63; // x8
  struct UserGameEntity_o *v64; // x8
  struct BattleResultExpComponent_o *v65; // x10
  struct UserGameEntity_o *v66; // x9
  struct BattleResultMasterUpStatusComponent_array *v67; // x10
  int32_t friendKeep; // w19
  int32_t v69; // w21
  struct BattleResultExpComponent_o *v70; // x8
  struct BattleResultMasterUpStatusComponent_array *v71; // x8
  struct BattleResultExpComponent_o *v72; // x8
  struct BattleResultMasterUpStatusComponent_array *v73; // x9
  struct UserGameEntity_o *v74; // x10
  struct UserGameEntity_o *v75; // x8
  struct BattleResultExpComponent_o *v76; // x8
  struct BattleResultMasterUpStatusComponent_array *v77; // x8
  struct BattleResultExpComponent_o *v78; // x8
  struct BattleResultMasterUpStatusComponent_array *v79; // x8
  EventMaster_o *v80; // x21
  struct BattleResultExpComponent_o *v81; // x8
  struct BattleResultMasterUpStatusComponent_array *v82; // x8
  BattleResultMasterUpStatusComponent_o *v83; // x8
  __int64 *v84; // x9
  struct BattleResultExpComponent_o *v85; // x8
  struct BattleResultMasterUpStatusComponent_array *v86; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  __int64 v88; // x8
  il2cpp_array_size_t v89; // w24
  int v90; // w25
  struct BattleResultExpComponent_o *v91; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v93; // x8
  struct UISprite_array *v94; // x8
  struct MasterLvRewardInfo_array *v95; // x9
  UISprite_o *v96; // x22
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v98; // x8
  struct BattleResultExpComponent_o *v99; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v101; // x9
  MasterLvRewardInfo_o *v102; // x9
  Il2CppObject *v103; // x23
  UILabel_o *v104; // x22
  Il2CppObject *v105; // x0
  struct MasterLvRewardInfo_array *v106; // x8
  __int64 v107; // x0
  int v109; // [xsp+4h] [xbp-7Ch]
  int32_t num; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42E60AC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, baseHeight, (_DWORD)method, v4);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v7, v8, v9);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_2538/*"BATTLE_RESULTEXP_FULLAP"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_2537/*"BATTLE_RESULTEXP_FRIENDMAX"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_2533/*"BATTLE_RESULTEXP_APMAX"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_2539/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_2534/*"BATTLE_RESULTEXP_COSTMAX"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_1/*""*/, v31, v32, v33);
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)sub_B5D5C4(&StringLiteral_23889/*"{0} {1}個"*/, v34, v35, v36);
    byte_42E60AC = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  oldGame = v6->fields.oldGame;
  if ( !oldGame )
    goto LABEL_130;
  _4__this = v6->fields.__4__this;
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
  v42 = newGame->fields.actMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  if ( actMax >= v42 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v49 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v43 = v6->fields.__4__this;
    if ( !v43 )
      goto LABEL_130;
    v44 = v43->fields.upParamList;
    if ( !v44 )
      goto LABEL_130;
    if ( v44->max_length <= 1 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v44->m_Items[1];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2533/*"BATTLE_RESULTEXP_APMAX"*/,
      0LL);
    v45 = v6->fields.__4__this;
    if ( !v45 )
      goto LABEL_130;
    v46 = v45->fields.upParamList;
    if ( !v46 )
      goto LABEL_130;
    if ( v46->max_length <= 1 )
      goto LABEL_131;
    v47 = v6->fields.oldGame;
    if ( !v47 )
      goto LABEL_130;
    v48 = v45->fields.newGame;
    if ( !v48 )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v46->m_Items[1];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v47->fields.actMax,
      v48->fields.actMax,
      0LL);
    v49 = 1;
  }
  v50 = v6->fields.oldGame;
  if ( !v50 )
    goto LABEL_130;
  v51 = v6->fields.__4__this;
  if ( !v51 )
    goto LABEL_130;
  v52 = v51->fields.newGame;
  if ( !v52 )
    goto LABEL_130;
  v53 = v51->fields.upParamList;
  if ( !v53 )
    goto LABEL_130;
  if ( v53->max_length <= 2 )
    goto LABEL_131;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v53->m_Items[2];
  if ( !this )
    goto LABEL_130;
  costMax = v50->fields.costMax;
  v55 = v52->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  if ( costMax >= v55 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v56 = v6->fields.__4__this;
    if ( !v56 )
      goto LABEL_130;
    v57 = v56->fields.upParamList;
    if ( !v57 )
      goto LABEL_130;
    if ( v57->max_length <= 2 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v57->m_Items[2];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2534/*"BATTLE_RESULTEXP_COSTMAX"*/,
      0LL);
    v58 = v6->fields.__4__this;
    if ( !v58 )
      goto LABEL_130;
    v59 = v58->fields.upParamList;
    if ( !v59 )
      goto LABEL_130;
    if ( v59->max_length <= 2 )
      goto LABEL_131;
    v60 = v6->fields.oldGame;
    if ( !v60 )
      goto LABEL_130;
    v61 = v58->fields.newGame;
    if ( !v61 )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v59->m_Items[2];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v60->fields.costMax,
      v61->fields.costMax,
      0LL);
    v62 = v6->fields.__4__this;
    if ( !v62 )
      goto LABEL_130;
    v63 = v62->fields.upParamList;
    if ( !v63 )
      goto LABEL_130;
    if ( v63->max_length <= 2 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v63->m_Items[2];
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
    v114.fields.z = 0.0;
    v114.fields.y = height - (float)(v49 * baseHeight);
    v114.fields.x = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v114, 0LL);
    ++v49;
  }
  v64 = v6->fields.oldGame;
  if ( !v64 )
    goto LABEL_130;
  v65 = v6->fields.__4__this;
  if ( !v65 )
    goto LABEL_130;
  v66 = v65->fields.newGame;
  if ( !v66 )
    goto LABEL_130;
  v67 = v65->fields.upParamList;
  if ( !v67 )
    goto LABEL_130;
  if ( v67->max_length <= 3 )
    goto LABEL_131;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v67->m_Items[3];
  if ( !this )
    goto LABEL_130;
  friendKeep = v64->fields.friendKeep;
  v69 = v66->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  if ( friendKeep >= v69 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v70 = v6->fields.__4__this;
    if ( !v70 )
      goto LABEL_130;
    v71 = v70->fields.upParamList;
    if ( !v71 )
      goto LABEL_130;
    if ( v71->max_length <= 3 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v71->m_Items[3];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2537/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      0LL);
    v72 = v6->fields.__4__this;
    if ( !v72 )
      goto LABEL_130;
    v73 = v72->fields.upParamList;
    if ( !v73 )
      goto LABEL_130;
    if ( v73->max_length <= 3 )
      goto LABEL_131;
    v74 = v6->fields.oldGame;
    if ( !v74 )
      goto LABEL_130;
    v75 = v72->fields.newGame;
    if ( !v75 )
      goto LABEL_130;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v73->m_Items[3];
    if ( !this )
      goto LABEL_130;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v74->fields.friendKeep,
      v75->fields.friendKeep,
      0LL);
    v76 = v6->fields.__4__this;
    if ( !v76 )
      goto LABEL_130;
    v77 = v76->fields.upParamList;
    if ( !v77 )
      goto LABEL_130;
    if ( v77->max_length <= 3 )
      goto LABEL_131;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v77->m_Items[3];
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
    v115.fields.z = 0.0;
    v115.fields.y = height - (float)(v49 * baseHeight);
    v115.fields.x = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v115, 0LL);
    ++v49;
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  v78 = v6->fields.__4__this;
  if ( !v78 )
    goto LABEL_130;
  v79 = v78->fields.upParamList;
  if ( !v79 )
    goto LABEL_130;
  if ( v79->max_length <= 4 )
    goto LABEL_131;
  v80 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v79->m_Items[4];
  if ( !this )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_130;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v80 )
    goto LABEL_130;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)EventMaster__IsBPEnable(v80, 0LL);
  v81 = v6->fields.__4__this;
  if ( !v81 )
    goto LABEL_130;
  v82 = v81->fields.upParamList;
  if ( !v82 )
    goto LABEL_130;
  if ( v82->max_length <= 4 )
    goto LABEL_131;
  v83 = v82->m_Items[4];
  if ( !v83
    || (((unsigned __int8)this & 1) == 0 ? (v84 = &StringLiteral_2538/*"BATTLE_RESULTEXP_FULLAP"*/) : (v84 = &StringLiteral_2539/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/),
        (BattleResultMasterUpStatusComponent__setTitle(v83, (System_String_o *)*v84, 0LL),
         (v85 = v6->fields.__4__this) == 0LL)
     || (v86 = v85->fields.upParamList) == 0LL) )
  {
LABEL_130:
    sub_B5D69C(this, *(_QWORD *)&baseHeight);
  }
  if ( v86->max_length <= 4 )
  {
LABEL_131:
    v107 = sub_B5D6C8(this);
    sub_B5D668(v107, 0LL);
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v86->m_Items[4];
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
  v116.fields.z = 0.0;
  v116.fields.y = height - (float)(v49 * baseHeight);
  v116.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v116, 0LL);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)(unsigned int)(v49 + 1);
  if ( masterLvInfoArray )
  {
    v88 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v88 <= 2 && (int)v88 >= 1 )
    {
      v109 = v49 + 1;
      v89 = 0;
      v90 = baseHeight * (_DWORD)this;
      do
      {
        v91 = v6->fields.__4__this;
        if ( !v91 )
          goto LABEL_130;
        lvUpRewardSpArray = v91->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_130;
        if ( v89 >= lvUpRewardSpArray->max_length )
          goto LABEL_131;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)lvUpRewardSpArray->m_Items[v89];
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
        v117.fields.y = height - (float)v90;
        v117.fields.z = 0.0;
        v117.fields.x = -30.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v117, 0LL);
        v93 = v6->fields.__4__this;
        if ( !v93 )
          goto LABEL_130;
        v94 = v93->fields.lvUpRewardSpArray;
        if ( !v94 )
          goto LABEL_130;
        if ( v89 >= v94->max_length )
          goto LABEL_131;
        v95 = v6->fields.masterLvInfoArray;
        if ( !v95 )
          goto LABEL_130;
        if ( v89 >= v95->max_length )
          goto LABEL_131;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v95->m_Items[v89];
        if ( !this )
          goto LABEL_130;
        v96 = v94->m_Items[v89];
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
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)AtlasManager__SetItem(v96, IconImageId, 0LL);
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        countText = (System_String_o *)StringLiteral_1/*""*/;
        v98 = v6->fields.masterLvInfoArray;
        if ( !v98 )
          goto LABEL_130;
        if ( v89 >= v98->max_length )
          goto LABEL_131;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v98->m_Items[v89];
        if ( !this )
          goto LABEL_130;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_130;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0LL);
        v99 = v6->fields.__4__this;
        if ( !v99 )
          goto LABEL_130;
        lvUpRewardLabelArray = v99->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_130;
        if ( v89 >= lvUpRewardLabelArray->max_length )
          goto LABEL_131;
        v101 = v6->fields.masterLvInfoArray;
        if ( !v101 )
          goto LABEL_130;
        if ( v89 >= v101->max_length )
          goto LABEL_131;
        v102 = v101->m_Items[v89];
        if ( !v102 )
          goto LABEL_130;
        v103 = (Il2CppObject *)nameText;
        v104 = lvUpRewardLabelArray->m_Items[v89];
        num = v102->fields.num;
        v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)System_String__Format_44573324(
                                                                     (System_String_o *)StringLiteral_23889/*"{0} {1}個"*/,
                                                                     v103,
                                                                     v105,
                                                                     0LL);
        if ( !v104 )
          goto LABEL_130;
        UILabel__set_text(v104, (System_String_o *)this, 0LL);
        v106 = v6->fields.masterLvInfoArray;
        if ( !v106 )
          goto LABEL_130;
        ++v89;
        v90 += baseHeight;
      }
      while ( (signed int)v89 < (signed int)v106->max_length );
      LODWORD(this) = v109 + v89;
    }
  }
  return (int)this;
}