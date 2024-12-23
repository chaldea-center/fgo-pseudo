void __fastcall BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = (struct UnityEngine_Color_o)xmmword_BE28A0;
  this->fields.record_intactColor = _Q0;
  this->fields.damage_renewalColor = _Q0;
  this->fields.damage_intactColor = (struct UnityEngine_Color_o)xmmword_BE19B0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B69FA1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleResultExpComponent_endClose__, method);
    sub_1BE4ACC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B69FA1 = 1;
  }
  window = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1BE4D18(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_1BE4D28(v6, v7);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v5,
    window->klass->vtable._13_CompClose.methodPtr);
}


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
  Il2CppObject *Object_object__49525204; // x21
  BattleResultExpComponent_o *v14; // x21
  BattleResultExpComponent_o *v15; // x22
  BattleResultExpComponent_o *v16; // x22
  BattleResultExpComponent_o *v17; // x22
  int m_CancellationTokenSource; // w8
  BattleResultExpComponent_o *v19; // x21
  unsigned int v20; // w22

  v8 = this;
  if ( (byte_4B69F9D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject____77158408, data);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultExpComponent_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    byte_4B69F9D = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__49525204 = AssetData__GetObject_object__49525204(
                              data,
                              effectName,
                              (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__49525204,
                                         (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v14 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_23;
  v15 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0LL);
  if ( !v15 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v15, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v16 = this;
  if ( !byte_4B612E1 )
  {
    this = (BattleResultExpComponent_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, data);
    byte_4B612E1 = 1;
  }
  if ( !v16 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v17 = this;
  if ( !byte_4B612E6 )
  {
    this = (BattleResultExpComponent_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, data);
    byte_4B612E6 = 1;
  }
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49980352(
                                         (UnityEngine_GameObject_o *)v14,
                                         (const MethodInfo_2FAA3C0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v19 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= m_CancellationTokenSource )
        sub_1BE4D30(this, data);
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v19->fields.parentComp + (int)v20);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
      if ( (int)++v20 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BE4D28(this, data);
  }
LABEL_21:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  BattleWindowComponent_o *window; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  System_String_o *v18; // x20
  System_String_o *v19; // x20

  if ( (byte_4B69F99 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_2980/*"BATTLE_RESULTEXP_MASTERTITLE"*/, v6);
    sub_1BE4ACC(&StringLiteral_2975/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, v7);
    byte_4B69F99 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v8;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.effectUIList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = this->fields.masterupwindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.masterupwindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = this->fields.equipupwindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.equipupwindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = this->fields.damageRecordWindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.damageRecordWindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.knockdownRecordWindow;
    if ( !window )
      goto LABEL_33;
    ((void (__fastcall *)(BattleWindowComponent_o *, const char *))window->klass[1]._1.gc_desc)(
      window,
      window->klass[1]._1.name);
  }
  window = (BattleWindowComponent_o *)this->fields.masterLevelupRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (BattleWindowComponent_o *)this->fields.equipLevelupRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (BattleWindowComponent_o *)this->fields.damageRecordRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2980/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v18 = (System_String_o *)window;
  if ( !System_String__Equals_62707124((System_String_o *)window, (System_String_o *)StringLiteral_2980/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v18, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2975/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !window )
LABEL_33:
    sub_1BE4D28(window, v15);
  v19 = (System_String_o *)window;
  if ( !System_String__Equals_62707124((System_String_o *)window, (System_String_o *)StringLiteral_2975/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v19, 0LL);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
LABEL_32:
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
  __int64 v17; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x11
  _QWORD *v20; // x22
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v22; // x20
  __int64 v23; // x21
  int32_t v24; // w20
  __int64 v25; // x8
  UnityEngine_GameObject_o *figureRoot; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Object_array *v33; // x21
  UnityEngine_GameObject_o *v34; // x0
  Il2CppObject *v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x22
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x22
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x22
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  System_Collections_Hashtable_o *v103; // x0
  __int64 v104; // x0
  char v105[4]; // [xsp+28h] [xbp-48h] BYREF
  int v106; // [xsp+2Ch] [xbp-44h] BYREF
  int v107; // [xsp+38h] [xbp-38h] BYREF
  int32_t overwriteImageId; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_4B69FA0 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleRootComponent_TypeInfo, method);
    sub_1BE4ACC(&bool_TypeInfo, v3);
    sub_1BE4ACC(&object___TypeInfo, v4);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BE4ACC(&float_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1BE4ACC(&StringLiteral_25085/*"x"*/, v8);
    sub_1BE4ACC(&StringLiteral_5572/*"END_OPEN"*/, v9);
    sub_1BE4ACC(&StringLiteral_24265/*"time"*/, v10);
    sub_1BE4ACC(&StringLiteral_22593/*"oncompletetarget"*/, v11);
    sub_1BE4ACC(&StringLiteral_19264/*"endMoveFigure"*/, v12);
    sub_1BE4ACC(&StringLiteral_21131/*"islocal"*/, v13);
    sub_1BE4ACC(&StringLiteral_22591/*"oncomplete"*/, v14);
    sub_1BE4ACC(&iTween_TypeInfo, v15);
    byte_4B69FA0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  monitor = gameObject[1].monitor;
  if ( monitor
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)methodPtr_low) )
  {
    v20 = *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo
        ? gameObject[1].monitor
        : 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_69;
  v23 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = v23;
  *(_QWORD *)&v109.fields.fakeValue = v22;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                             v109,
                                             0LL);
  if ( !v20 )
    goto LABEL_69;
  v24 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)v20[8];
  if ( !gameObject )
    goto LABEL_69;
  overwriteImageId = BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)v20[8];
  if ( !gameObject )
    goto LABEL_69;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0LL);
  if ( overwriteImageId != -1 )
  {
    v25 = v20[8];
    if ( !v25 )
      goto LABEL_69;
    MasterFigureManagerOld__CreatePrefab_38826340(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v25 + 400),
      v24,
      60,
      0LL,
      overwriteImageId,
      (System_Nullable_Vector3__o)0,
      0,
      0LL);
  }
  figureRoot = this->fields.figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_1BE4B74(object___TypeInfo, 10LL);
  if ( !gameObject )
LABEL_69:
    sub_1BE4D28(gameObject, v17);
  v33 = (System_Object_array *)gameObject;
  v34 = (UnityEngine_GameObject_o *)StringLiteral_25085/*"x"*/;
  if ( StringLiteral_25085/*"x"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BE4C08(StringLiteral_25085/*"x"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_70;
    v35 = (Il2CppObject *)StringLiteral_25085/*"x"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !v33->max_length )
    goto LABEL_68;
  v33->m_Items[0] = v35;
  sub_1BE4A70((PartyOrganizationUtility_o *)v33->m_Items, (int64_t)v35, v27, v28, v29, v30, v31, v32);
  v107 = -1018691584;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v107, v36, v37, v38);
  v45 = (int64_t)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BE4C08(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_70;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_68;
  v33->m_Items[1] = (Il2CppObject *)v45;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v33->m_Items[1], v45, v39, v40, v41, v42, v43, v44);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_24265/*"time"*/;
  if ( StringLiteral_24265/*"time"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BE4C08(StringLiteral_24265/*"time"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_70;
    v35 = (Il2CppObject *)StringLiteral_24265/*"time"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v33->max_length <= 2 )
    goto LABEL_68;
  v33->m_Items[2] = v35;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v33->m_Items[2], (int64_t)v35, v46, v47, v48, v49, v50, v51);
  v106 = 1061997773;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v106, v52, v53, v54);
  v61 = (int64_t)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BE4C08(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_70;
  }
  if ( v33->max_length <= 3 )
    goto LABEL_68;
  v33->m_Items[3] = (Il2CppObject *)v61;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v33->m_Items[3], v61, v55, v56, v57, v58, v59, v60);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21131/*"islocal"*/;
  if ( StringLiteral_21131/*"islocal"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BE4C08(StringLiteral_21131/*"islocal"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_70;
    v35 = (Il2CppObject *)StringLiteral_21131/*"islocal"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v33->max_length <= 4 )
    goto LABEL_68;
  v33->m_Items[4] = v35;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v33->m_Items[4], (int64_t)v35, v62, v63, v64, v65, v66, v67);
  v105[0] = 1;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v105, v68, v69, v70);
  v77 = (int64_t)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BE4C08(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_70;
  }
  if ( v33->max_length <= 5 )
    goto LABEL_68;
  v33->m_Items[5] = (Il2CppObject *)v77;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v33->m_Items[5], v77, v71, v72, v73, v74, v75, v76);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_22593/*"oncompletetarget"*/;
  if ( StringLiteral_22593/*"oncompletetarget"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BE4C08(StringLiteral_22593/*"oncompletetarget"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_70;
    v35 = (Il2CppObject *)StringLiteral_22593/*"oncompletetarget"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v33->max_length <= 6 )
    goto LABEL_68;
  v33->m_Items[6] = v35;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v33->m_Items[6], (int64_t)v35, v78, v79, v80, v81, v82, v83);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v90 = (int64_t)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BE4C08(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
    {
LABEL_70:
      v104 = sub_1BE4D4C(v34);
      sub_1BE4BF4(v104, 0LL);
    }
  }
  if ( v33->max_length <= 7 )
    goto LABEL_68;
  v33->m_Items[7] = (Il2CppObject *)v90;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v33->m_Items[7], v90, v84, v85, v86, v87, v88, v89);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_22591/*"oncomplete"*/;
  if ( StringLiteral_22591/*"oncomplete"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BE4C08(StringLiteral_22591/*"oncomplete"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_70;
    v35 = (Il2CppObject *)StringLiteral_22591/*"oncomplete"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v33->max_length <= 8 )
    goto LABEL_68;
  v33->m_Items[8] = v35;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v33->m_Items[8], (int64_t)v35, v91, v92, v93, v94, v95, v96);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_19264/*"endMoveFigure"*/;
  if ( StringLiteral_19264/*"endMoveFigure"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BE4C08(StringLiteral_19264/*"endMoveFigure"*/, v33->obj.klass->_1.element_class);
    if ( v34 )
    {
      v35 = (Il2CppObject *)StringLiteral_19264/*"endMoveFigure"*/;
      goto LABEL_62;
    }
    goto LABEL_70;
  }
  v35 = 0LL;
LABEL_62:
  if ( v33->max_length <= 9 )
LABEL_68:
    sub_1BE4D30(v34, v35);
  v33->m_Items[9] = v35;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v33->m_Items[9], (int64_t)v35, v97, v98, v99, v100, v101, v102);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v103 = iTween__Hash(v33, 0LL);
  iTween__MoveFrom_61237868(figureRoot, v103, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.window;
  if ( !gameObject )
    goto LABEL_69;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.typeMetadataHandle)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.interopData);
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5572/*"END_OPEN"*/, 0LL);
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
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1BE4D28(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
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
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v18; // x21
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_4B69FAD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleResultExpComponent_checkDamageRecord__, method);
    sub_1BE4ACC(&Method_BattleResultExpComponent_endOpenDamageRecord__, v3);
    sub_1BE4ACC(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&SimpleAnimation_State_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_17500/*"bit_result_levelup01"*/, v7);
    sub_1BE4ACC(&StringLiteral_3617/*"CLOSE"*/, v8);
    byte_4B69FAD = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3617/*"CLOSE"*/, 0LL);
      return;
    }
    goto LABEL_31;
  }
  myFsm = (PlayMakerFSM_o *)this->fields.damageRecordRoot;
  if ( !myFsm )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 1, 0LL);
  damage_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.damage_LvupSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damage_LvupSimpleAnim, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)SimpleAnimation__get_Item(
                                  (SimpleAnimation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v12 = myFsm;
        v13 = *(unsigned __int16 *)(&myFsm->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&myFsm->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v13;
            p_offset += 2;
            if ( !v13 )
              goto LABEL_14;
          }
          v15 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_14:
          v15 = sub_1C36AAC(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v15)(v12, *(_QWORD *)(v15 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_64837092((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_31:
    sub_1BE4D28(myFsm, method);
  }
  damage_LvupAnim = (UnityEngine_Object_o *)this->fields.damage_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damage_LvupAnim, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_70197004(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_27:
  damageRecordWindow = this->fields.damageRecordWindow;
  v18 = (BattleWindowComponent_EndCall_o *)sub_1BE4D18(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0LL);
  if ( !damageRecordWindow )
    goto LABEL_31;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._10_Open.method)(
    damageRecordWindow,
    v18,
    damageRecordWindow->klass->vtable._11_CompOpen.methodPtr);
  v19 = Method_BattleResultExpComponent_checkDamageRecord__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkDamageRecord__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BE4AE4(Method_BattleResultExpComponent_checkDamageRecord__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 6, 0LL);
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
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *equip_LvupAnim; // x20
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v19; // x21
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  v2 = this;
  if ( (byte_4B69FAA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleResultExpComponent_checkEquipLevelUp__, method);
    sub_1BE4ACC(&Method_BattleResultExpComponent_endOpenEquipUp__, v3);
    sub_1BE4ACC(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&SimpleAnimation_State_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_17500/*"bit_result_levelup01"*/, v7);
    this = (BattleResultExpComponent_o *)sub_1BE4ACC(&StringLiteral_3617/*"CLOSE"*/, v8);
    byte_4B69FAA = 1;
  }
  oldEquip = v2->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_33;
  newEquip = v2->fields.newEquip;
  if ( !newEquip )
    goto LABEL_33;
  if ( oldEquip->fields.lv >= newEquip->fields.lv )
  {
    this = (BattleResultExpComponent_o *)v2->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3617/*"CLOSE"*/, 0LL);
      return;
    }
    goto LABEL_33;
  }
  this = (BattleResultExpComponent_o *)v2->fields.equipLevelupRoot;
  if ( !this )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  equip_LvupSimpleAnim = (UnityEngine_Object_o *)v2->fields.equip_LvupSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equip_LvupSimpleAnim, 0LL, 0LL) )
  {
    this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)this,
                                             (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        klass = this->klass;
        v13 = this;
        v14 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v14;
            p_offset += 4;
            if ( !v14 )
              goto LABEL_16;
          }
          v16 = (__int64)(&klass[1]._1.gc_desc + 2 * *p_offset);
        }
        else
        {
LABEL_16:
          v16 = sub_1C36AAC(this, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_64837092((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    sub_1BE4D28(this, method);
  }
  equip_LvupAnim = (UnityEngine_Object_o *)v2->fields.equip_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equip_LvupAnim, 0LL, 0LL) )
  {
    this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)UnityEngine_Animation__get_Item(
                                             (UnityEngine_Animation_o *)this,
                                             (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_70197004(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_29:
  equipupwindow = v2->fields.equipupwindow;
  v19 = (BattleWindowComponent_EndCall_o *)sub_1BE4D18(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v19, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v19,
    equipupwindow->klass->vtable._11_CompOpen.methodPtr);
  v20 = Method_BattleResultExpComponent_checkEquipLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkEquipLevelUp__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BE4AE4(Method_BattleResultExpComponent_checkEquipLevelUp__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 6, 0LL);
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
  __int64 v13; // x1
  SePlayer_o *MeterSePlayer; // x0
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  UnityEngine_Object_o *mst_LvupSimpleAnim; // x20
  SePlayer_c *klass; // x8
  SePlayer_o *v19; // x20
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0
  UnityEngine_Object_o *mst_LvupAnim; // x20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v25; // x21
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  struct UserGameEntity_o *v28; // x9
  struct UserGameEntity_o *v29; // x8
  int32_t v30; // w20

  if ( (byte_4B69FA6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleResultExpComponent_checkMasterLevelUp__, method);
    sub_1BE4ACC(&Method_BattleResultExpComponent_endOpenMasterUp__, v3);
    sub_1BE4ACC(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_1BE4ACC(&SimpleAnimation_State_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_17500/*"bit_result_levelup01"*/, v8);
    sub_1BE4ACC(&StringLiteral_9392/*"NEXT"*/, v9);
    sub_1BE4ACC(&iTween_TypeInfo, v10);
    byte_4B69FA6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61346736(gameObject, 0LL);
  BattleResultExpComponent__updateValueActual(this, 1.0, 1, v12);
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  oldGame = this->fields.oldGame;
  this->fields.bondsCountUp = 0;
  if ( !oldGame )
    goto LABEL_42;
  newGame = this->fields.newGame;
  if ( !newGame )
    goto LABEL_42;
  if ( oldGame->fields.lv >= newGame->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.myFsm;
    if ( MeterSePlayer )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9392/*"NEXT"*/, 0LL);
      return;
    }
    goto LABEL_42;
  }
  MeterSePlayer = (SePlayer_o *)this->fields.masterLevelupRoot;
  if ( !MeterSePlayer )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MeterSePlayer, 1, 0LL);
  mst_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.mst_LvupSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mst_LvupSimpleAnim, 0LL, 0LL) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
    if ( MeterSePlayer )
    {
      MeterSePlayer = (SePlayer_o *)SimpleAnimation__get_Item(
                                      (SimpleAnimation_o *)MeterSePlayer,
                                      (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/,
                                      0LL);
      if ( MeterSePlayer )
      {
        klass = MeterSePlayer->klass;
        v19 = MeterSePlayer;
        v20 = *(unsigned __int16 *)(&MeterSePlayer->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&MeterSePlayer->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v20;
            p_offset += 2;
            if ( !v20 )
              goto LABEL_20;
          }
          v22 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_20:
          v22 = sub_1C36AAC(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_64837092(
            (SimpleAnimation_o *)MeterSePlayer,
            (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_33;
        }
      }
    }
LABEL_42:
    sub_1BE4D28(MeterSePlayer, v13);
  }
  mst_LvupAnim = (UnityEngine_Object_o *)this->fields.mst_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mst_LvupAnim, 0LL, 0LL) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    MeterSePlayer = (SePlayer_o *)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)MeterSePlayer,
                                    (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/,
                                    0LL);
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0LL);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_Animation__Play_70197004(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17500/*"bit_result_levelup01"*/,
      0LL);
  }
LABEL_33:
  masterupwindow = this->fields.masterupwindow;
  v25 = (BattleWindowComponent_EndCall_o *)sub_1BE4D18(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v25,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_42;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._10_Open.method)(
    masterupwindow,
    v25,
    masterupwindow->klass->vtable._11_CompOpen.methodPtr);
  v26 = Method_BattleResultExpComponent_checkMasterLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkMasterLevelUp__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1BE4AE4(Method_BattleResultExpComponent_checkMasterLevelUp__);
  v27 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v26, v26[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 6, 0LL);
  v28 = this->fields.oldGame;
  if ( !v28 )
    goto LABEL_42;
  v29 = this->fields.newGame;
  if ( !v29 )
    goto LABEL_42;
  v30 = v28->fields.lv + 1;
  while ( v30 <= v29->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( MeterSePlayer )
    {
      AdManager__TrackEvent((AdManager_o *)MeterSePlayer, 3, 2, v30, -1, 0LL, 0LL);
      v29 = this->fields.newGame;
      ++v30;
      if ( v29 )
        continue;
    }
    goto LABEL_42;
  }
}


void __fastcall BattleResultExpComponent__checkOpenKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B69FB0 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_3617/*"CLOSE"*/, v3);
    byte_4B69FB0 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.knockdownRecordWindow;
    if ( !myFsm )
      goto LABEL_11;
    if ( LOBYTE(myFsm[2].monitor) )
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
LABEL_11:
    sub_1BE4D28(myFsm, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3617/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4B69FAE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleResultExpComponent_endCloseDamageRecord__, method);
    sub_1BE4ACC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B69FAE = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL),
        damageRecordWindow = this->fields.damageRecordWindow,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1BE4D18(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseDamageRecord__,
          0LL),
        !damageRecordWindow) )
  {
    sub_1BE4D28(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._12_Close.method)(
    damageRecordWindow,
    v6,
    damageRecordWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4B69FAB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleResultExpComponent_endCloseEquipUp__, method);
    sub_1BE4ACC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B69FAB = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL),
        equipupwindow = this->fields.equipupwindow,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1BE4D18(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseEquipUp__,
          0LL),
        !equipupwindow) )
  {
    sub_1BE4D28(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._12_Close.method)(
    equipupwindow,
    v6,
    equipupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  struct BattleResultKnockdownComponent_o *v5; // x0

  if ( (byte_4B69FB1 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B69FB1 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v5 = this->fields.knockdownRecordWindow;
    if ( !v5 )
      sub_1BE4D28(0LL, v4);
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._12_Close.method)(
      v5,
      0LL,
      v5->klass->vtable._13_CompClose.methodPtr);
  }
}


void __fastcall BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *effectUIList; // x0
  int32_t v7; // w20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4B69FA8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleResultExpComponent_endCloseMasterUp__, method);
    sub_1BE4ACC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v5);
    byte_4B69FA8 = 1;
  }
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_13;
  if ( effectUIList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      effectUIList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    effectUIList,
                                                                    v7,
                                                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        break;
      effectUIList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)effectUIList,
                                                                    0LL);
      if ( !effectUIList )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL);
      effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
      if ( !effectUIList )
        break;
      if ( ++v7 >= effectUIList->fields._size )
        goto LABEL_10;
    }
LABEL_13:
    sub_1BE4D28(effectUIList, method);
  }
LABEL_10:
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.parentComp;
  if ( !effectUIList )
    goto LABEL_13;
  BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0LL);
  masterupwindow = this->fields.masterupwindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_1BE4D18(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endCloseMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._12_Close.method)(
    masterupwindow,
    v9,
    masterupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4B69FA2 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_5577/*"END_PROC"*/, method);
    byte_4B69FA2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BE4D28(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5577/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_4B69FAF & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_5577/*"END_PROC"*/, method);
    byte_4B69FAF = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BE4D28(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5577/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_4B69FAC & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_5577/*"END_PROC"*/, method);
    byte_4B69FAC = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BE4D28(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5577/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_4B69FA9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_5577/*"END_PROC"*/, method);
    byte_4B69FA9 = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BE4D28(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5577/*"END_PROC"*/, 0LL);
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
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Object_array *v23; // x21
  __int64 v24; // x0
  int64_t v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x22
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x22
  System_Collections_Hashtable_o *v92; // x0
  _QWORD *v93; // x0
  System_Reflection_MethodBase_o *v94; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 v103; // x0
  float time_exptotal; // [xsp+Ch] [xbp-44h] BYREF
  int v105; // [xsp+18h] [xbp-38h] BYREF
  int v106; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B69FA3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleResultExpComponent_endMoveFigure__, method);
    sub_1BE4ACC(&object___TypeInfo, v3);
    sub_1BE4ACC(&SeManager_TypeInfo, v4);
    sub_1BE4ACC(&float_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_19917/*"from"*/, v6);
    sub_1BE4ACC(&StringLiteral_24265/*"time"*/, v7);
    sub_1BE4ACC(&StringLiteral_22599/*"onupdate"*/, v8);
    sub_1BE4ACC(&StringLiteral_15401/*"UpdateValue"*/, v9);
    sub_1BE4ACC(&StringLiteral_24306/*"to"*/, v10);
    sub_1BE4ACC(&StringLiteral_19697/*"finishUpdateValue"*/, v11);
    sub_1BE4ACC(&StringLiteral_22591/*"oncomplete"*/, v12);
    sub_1BE4ACC(&iTween_TypeInfo, v13);
    byte_4B69FA3 = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v15 = sub_1BE4B74(object___TypeInfo, 10LL);
    if ( !v15 )
      sub_1BE4D28(0LL, v16);
    v23 = (System_Object_array *)v15;
    v24 = StringLiteral_19917/*"from"*/;
    if ( StringLiteral_19917/*"from"*/ )
    {
      v24 = sub_1BE4C08(StringLiteral_19917/*"from"*/, v23->obj.klass->_1.element_class);
      if ( !v24 )
        goto LABEL_59;
      v25 = StringLiteral_19917/*"from"*/;
    }
    else
    {
      v25 = 0LL;
    }
    if ( !v23->max_length )
      goto LABEL_58;
    v23->m_Items[0] = (Il2CppObject *)v25;
    sub_1BE4A70((PartyOrganizationUtility_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
    v106 = 0;
    v24 = j_il2cpp_value_box_0(float_TypeInfo, &v106, v26, v27, v28);
    v35 = v24;
    if ( !v24 || (v24 = sub_1BE4C08(v24, v23->obj.klass->_1.element_class)) != 0 )
    {
      if ( v23->max_length <= 1 )
        goto LABEL_58;
      v23->m_Items[1] = (Il2CppObject *)v35;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v23->m_Items[1], v35, v29, v30, v31, v32, v33, v34);
      v24 = StringLiteral_24306/*"to"*/;
      if ( StringLiteral_24306/*"to"*/ )
      {
        v24 = sub_1BE4C08(StringLiteral_24306/*"to"*/, v23->obj.klass->_1.element_class);
        if ( !v24 )
          goto LABEL_59;
        v25 = StringLiteral_24306/*"to"*/;
      }
      else
      {
        v25 = 0LL;
      }
      if ( v23->max_length <= 2 )
        goto LABEL_58;
      v23->m_Items[2] = (Il2CppObject *)v25;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v23->m_Items[2], v25, v36, v37, v38, v39, v40, v41);
      v105 = 1065353216;
      v24 = j_il2cpp_value_box_0(float_TypeInfo, &v105, v42, v43, v44);
      v51 = v24;
      if ( !v24 || (v24 = sub_1BE4C08(v24, v23->obj.klass->_1.element_class)) != 0 )
      {
        if ( v23->max_length <= 3 )
          goto LABEL_58;
        v23->m_Items[3] = (Il2CppObject *)v51;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v23->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
        v24 = StringLiteral_22599/*"onupdate"*/;
        if ( StringLiteral_22599/*"onupdate"*/ )
        {
          v24 = sub_1BE4C08(StringLiteral_22599/*"onupdate"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_59;
          v25 = StringLiteral_22599/*"onupdate"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 4 )
          goto LABEL_58;
        v23->m_Items[4] = (Il2CppObject *)v25;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v23->m_Items[4], v25, v52, v53, v54, v55, v56, v57);
        v24 = StringLiteral_15401/*"UpdateValue"*/;
        if ( StringLiteral_15401/*"UpdateValue"*/ )
        {
          v24 = sub_1BE4C08(StringLiteral_15401/*"UpdateValue"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_59;
          v25 = StringLiteral_15401/*"UpdateValue"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 5 )
          goto LABEL_58;
        v23->m_Items[5] = (Il2CppObject *)v25;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v23->m_Items[5], v25, v58, v59, v60, v61, v62, v63);
        v24 = StringLiteral_22591/*"oncomplete"*/;
        if ( StringLiteral_22591/*"oncomplete"*/ )
        {
          v24 = sub_1BE4C08(StringLiteral_22591/*"oncomplete"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_59;
          v25 = StringLiteral_22591/*"oncomplete"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 6 )
          goto LABEL_58;
        v23->m_Items[6] = (Il2CppObject *)v25;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v23->m_Items[6], v25, v64, v65, v66, v67, v68, v69);
        v24 = StringLiteral_19697/*"finishUpdateValue"*/;
        if ( StringLiteral_19697/*"finishUpdateValue"*/ )
        {
          v24 = sub_1BE4C08(StringLiteral_19697/*"finishUpdateValue"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_59;
          v25 = StringLiteral_19697/*"finishUpdateValue"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 7 )
          goto LABEL_58;
        v23->m_Items[7] = (Il2CppObject *)v25;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v23->m_Items[7], v25, v70, v71, v72, v73, v74, v75);
        v24 = StringLiteral_24265/*"time"*/;
        if ( StringLiteral_24265/*"time"*/ )
        {
          v24 = sub_1BE4C08(StringLiteral_24265/*"time"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_59;
          v25 = StringLiteral_24265/*"time"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 8 )
          goto LABEL_58;
        v23->m_Items[8] = (Il2CppObject *)v25;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v23->m_Items[8], v25, v76, v77, v78, v79, v80, v81);
        time_exptotal = this->fields.time_exptotal;
        v24 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal, v82, v83, v84);
        v91 = v24;
        if ( !v24 || (v24 = sub_1BE4C08(v24, v23->obj.klass->_1.element_class)) != 0 )
        {
          if ( v23->max_length > 9 )
          {
            v23->m_Items[9] = (Il2CppObject *)v91;
            sub_1BE4A70((PartyOrganizationUtility_o *)&v23->m_Items[9], v91, v85, v86, v87, v88, v89, v90);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v92 = iTween__Hash(v23, 0LL);
            iTween__ValueTo(gameObject, v92, 0LL);
            if ( this->fields.updateFlg )
            {
              v93 = Method_BattleResultExpComponent_endMoveFigure__;
              if ( (*((_BYTE *)Method_BattleResultExpComponent_endMoveFigure__ + 83) & 2) != 0 )
                v93 = (_QWORD *)sub_1BE4AE4(Method_BattleResultExpComponent_endMoveFigure__);
              v94 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v93, v93[4]);
              if ( !SeManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              CommonSeName = SeManager__GetCommonSeName(15, 0LL);
              v96 = OverwriteAssetSoundName__PlaySe(v94, CommonSeName, 0LL);
              this->fields.MeterSePlayer = v96;
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&this->fields.MeterSePlayer,
                (int64_t)v96,
                v97,
                v98,
                v99,
                v100,
                v101,
                v102);
            }
            return;
          }
LABEL_58:
          sub_1BE4D30(v24, v25);
        }
      }
    }
LABEL_59:
    v103 = sub_1BE4D4C(v24);
    sub_1BE4BF4(v103, 0LL);
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1BE4D28(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1BE4D28(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B69FA7 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15588/*"WAIT_OPEN"*/, method);
    byte_4B69FA7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BE4D28(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15588/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B69FA4 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9392/*"NEXT"*/, method);
    byte_4B69FA4 = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BE4D28(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9392/*"NEXT"*/, 0LL);
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
  __int64 v18; // x1
  EquipExpMaster_o *v19; // x25
  int32_t Level; // w22
  int32_t LevelMax; // w24
  System_String_o *v22; // x23
  UILabel_o *equip_atexpLabel; // x26
  const MethodInfo *v24; // x2
  int32_t exp; // w21
  float value; // s0
  float v27; // s8
  float v28; // s0
  EquipExpEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int v31; // [xsp+18h] [xbp-58h] BYREF
  int32_t v32; // [xsp+1Ch] [xbp-54h] BYREF

  v32 = getexp;
  if ( (byte_4B69F9F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&equipId);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&StringLiteral_9359/*"N0"*/, v12);
    sub_1BE4ACC(&StringLiteral_11260/*"RESULT_EQUIP_MAXEXP"*/, v13);
    sub_1BE4ACC(&StringLiteral_857/*"+ {0}"*/, v14);
    byte_4B69F9F = 1;
  }
  entity = 0LL;
  v31 = 0;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v16 = (Il2CppObject *)System_Int32__ToString_63504416((int32_t)&v32, (System_String_o *)StringLiteral_9359/*"N0"*/, 0LL);
  Instance = System_String__Format((System_String_o *)StringLiteral_857/*"+ {0}"*/, v16, 0LL);
  if ( !equip_getexpLabel )
    goto LABEL_27;
  UILabel__set_text(equip_getexpLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_27;
  v19 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowexp, start_level, 0LL);
  LevelMax = EquipExpMaster__getLevelMax(v19, equipId, 0LL);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v19, equipId, Level, 0LL);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_27;
  v22 = Instance;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0LL);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11260/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_27;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0LL);
    if ( !v22 )
      goto LABEL_27;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v31 = LODWORD(v22[1].klass) - nowexp;
    Instance = System_Int32__ToString_63504416((int32_t)&v31, (System_String_o *)StringLiteral_9359/*"N0"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_27;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0LL);
  BattleResultExpComponent__setEquipLv(this, Level, v24);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v19, &entity, equipId, Level - 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_27;
    exp = entity->fields.exp;
  }
  else
  {
    exp = 0;
  }
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
LABEL_27:
    sub_1BE4D28(Instance, v18);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  v27 = value;
  if ( Level == LevelMax )
  {
    v28 = 1.0;
    if ( !Instance )
      goto LABEL_27;
  }
  else
  {
    if ( !v22 || !Instance )
      goto LABEL_27;
    v28 = 1.0 - (float)((float)(LODWORD(v22[1].klass) - nowexp) / (float)(LODWORD(v22[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v28, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_27;
  return v27 != UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
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
  __int64 v9; // x1
  System_String_o *v10; // x21
  bool v11; // w0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v16; // x1
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B69F9B & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&level);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_2974/*"BATTLE_RESULTEXP_EQUIPLV"*/, v6);
    sub_1BE4ACC(&StringLiteral_25327/*"{0}"*/, v7);
    byte_4B69F9B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v10 = v8;
  v11 = System_String__Equals_62707124(v8, (System_String_o *)StringLiteral_2974/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v11 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
    v17 = (System_String_o *)StringLiteral_25327/*"{0}"*/;
  }
  else
  {
    v19 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v12, v13, v14);
    v17 = v10;
  }
  v8 = System_String__Format(v17, v16, 0LL);
  if ( !equip_Lv )
LABEL_11:
    sub_1BE4D28(v8, v9);
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
  __int64 v19; // x1
  float value; // s8
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v22; // x2
  bool v23; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x23
  UILabel_o *v25; // x24
  System_String_o *v26; // x22
  char *monitor; // x8
  float v28; // s0
  UILabel_o *v29; // x20
  int64_t v31; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int64_t v33; // [xsp+18h] [xbp-58h] BYREF

  v33 = getexp;
  if ( (byte_4B69F9E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserExpMaster___, getexp);
    sub_1BE4ACC(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v8);
    sub_1BE4ACC(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__, v9);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&StringLiteral_9359/*"N0"*/, v12);
    sub_1BE4ACC(&StringLiteral_11260/*"RESULT_EQUIP_MAXEXP"*/, v13);
    sub_1BE4ACC(&StringLiteral_8745/*"MAX_USER_LV"*/, v14);
    sub_1BE4ACC(&StringLiteral_857/*"+ {0}"*/, v15);
    byte_4B69F9E = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v17 = (Il2CppObject *)System_Int64__ToString_63509592((int64_t)&v33, (System_String_o *)StringLiteral_9359/*"N0"*/, 0LL);
  mst_slider = System_String__Format((System_String_o *)StringLiteral_857/*"+ {0}"*/, v17, 0LL);
  if ( !mst_getexpLabel )
    goto LABEL_30;
  UILabel__set_text(mst_getexpLabel, mst_slider, 0LL);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_30;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  mst_slider = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8745/*"MAX_USER_LV"*/, 0LL);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_30;
  if ( (_DWORD)mst_slider == start_level )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0LL);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11260/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_30;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_30;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
    v23 = 0;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    mst_slider = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mst_slider )
      goto LABEL_30;
    mst_slider = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)mst_slider,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserExpMaster___);
    if ( !mst_slider )
      goto LABEL_30;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)mst_slider;
    start_level = UserExpMaster__getLevel((UserExpMaster_o *)mst_slider, nowexp, start_level, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v24,
                                      start_level,
                                      (const MethodInfo_31FD7C4 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_30;
    v25 = this->fields.mst_atexpLabel;
    v26 = mst_slider;
    v31 = (int64_t)mst_slider[1].klass - nowexp;
    mst_slider = System_Int64__ToString_63509592((int64_t)&v31, (System_String_o *)StringLiteral_9359/*"N0"*/, 0LL);
    if ( !v25 )
      goto LABEL_30;
    UILabel__set_text(v25, mst_slider, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      v24,
                                      &entity,
                                      start_level - 1,
                                      (const MethodInfo_31FD818 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    monitor = 0LL;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      monitor = (char *)entity[1].monitor;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v28 = 1.0 - (double)((unsigned __int64)v26[1].klass - nowexp) / (double)((char *)v26[1].klass - monitor),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v28, 0LL),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0LL) )
    {
LABEL_30:
      sub_1BE4D28(mst_slider, v19);
    }
    v23 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, start_level, v22);
  if ( start_level == ConstantMaster__getValue((System_String_o *)StringLiteral_8745/*"MAX_USER_LV"*/, 0LL) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( mst_slider )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0LL);
      v29 = this->fields.mst_atexpLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11260/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
      if ( v29 )
      {
        UILabel__set_text(v29, mst_slider, 0LL);
        mst_slider = (System_String_o *)this->fields.mst_slider;
        if ( mst_slider )
        {
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
          return v23;
        }
      }
    }
    goto LABEL_30;
  }
  return v23;
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
  __int64 v9; // x1
  System_String_o *v10; // x21
  bool v11; // w0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v16; // x1
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B69F9A & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&level);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_25327/*"{0}"*/, v6);
    sub_1BE4ACC(&StringLiteral_2979/*"BATTLE_RESULTEXP_MASTERLV"*/, v7);
    byte_4B69F9A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v10 = v8;
  v11 = System_String__Equals_62707124(v8, (System_String_o *)StringLiteral_2979/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v11 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
    v17 = (System_String_o *)StringLiteral_25327/*"{0}"*/;
  }
  else
  {
    v19 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v12, v13, v14);
    v17 = v10;
  }
  v8 = System_String__Format(v17, v16, 0LL);
  if ( !mst_Lv )
LABEL_11:
    sub_1BE4D28(v8, v9);
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
  __int64 v38; // x27
  __int64 Instance; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x23
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 *v54; // x26
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct UserGameEntity_o *v61; // x1
  struct UserGameEntity_o **p_oldGame; // x28
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  UnityEngine_Object_o *knockdownRecordWindow; // x24
  const MethodInfo *v76; // x2
  Il2CppObject *v77; // x0
  struct UserGameEntity_o **p_newGame; // x24
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  Il2CppObject *v85; // x0
  struct UserEquipEntity_o **p_newEquip; // x21
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  const MethodInfo *v93; // x4
  struct UserGameEntity_o *newGame; // x8
  UserEquipEntity_o *v95; // x9
  UILabel_o *equip_nameLabel; // x25
  __int64 v97; // x29
  __int64 v98; // x28
  int32_t v99; // w0
  UserEquipEntity_o *v100; // x29
  const MethodInfo *v101; // x5
  const MethodInfo *v102; // x2
  const MethodInfo *v103; // x3
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  __int64 v105; // x28
  const MethodInfo *v106; // x4
  int v107; // w27
  __int64 v108; // x8
  signed __int64 v109; // x20
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v112; // x8
  UserEquipEntity_o **v113; // x21
  int v114; // w8
  __int64 v115; // x26
  unsigned int v116; // w20
  struct UISprite_array *v117; // x8
  struct UISprite_array *v118; // x8
  struct UISprite_array *v119; // x8
  struct UISprite_array *v120; // x8
  const MethodInfo *v121; // x4
  struct UISprite_array *v122; // x8
  const MethodInfo *v123; // x4
  struct UISprite_array *v124; // x8
  int v125; // w8
  const MethodInfo *v126; // x2
  UILabel_o *equip_oldlevelLabel; // x22
  System_String_o *v128; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x22
  System_String_o *v131; // x1
  System_Text_StringBuilder_o *v132; // x22
  __int64 v133; // x23
  System_Int32_array *SkillIdList; // x24
  System_Int32_array *SkillLvList; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v136; // x27
  int v137; // w21
  unsigned __int64 v138; // x20
  int32_t *v139; // x25
  System_String_o *v140; // x28
  __int64 v141; // x2
  __int64 v142; // x3
  __int64 v143; // x4
  Il2CppObject *v144; // x29
  Il2CppObject *v145; // x0
  System_String_o *v146; // x28
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x23
  UILabel_o *equip_confLabel; // x23
  int64_t oldRecordDamage; // x11
  int64_t bestTurnDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v153; // x21
  bool v154; // w1
  UILabel_o *damage_battleLabel; // x21
  struct UserEquipEntity_o **v156; // [xsp+0h] [xbp-A0h]
  UserEquipEntity_o *v157; // [xsp+8h] [xbp-98h]
  __int64 v158; // [xsp+18h] [xbp-88h]
  int32_t *v159; // [xsp+20h] [xbp-80h]
  int32_t v160; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B69F9C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___, oldGame);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserEquipMaster___, v18);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserGameMaster___, v19);
    sub_1BE4ACC(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v20);
    sub_1BE4ACC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v21);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v22);
    sub_1BE4ACC(&System_Func_float__int__int__TypeInfo, v23);
    sub_1BE4ACC(&int_TypeInfo, v24);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v25);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v26);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1BE4ACC(&System_Text_StringBuilder_TypeInfo, v29);
    sub_1BE4ACC(&Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__, v30);
    sub_1BE4ACC(&BattleResultExpComponent___c__DisplayClass61_0_TypeInfo, v31);
    sub_1BE4ACC(&StringLiteral_17515/*"bit_reward_shine01"*/, v32);
    sub_1BE4ACC(&StringLiteral_11259/*"RESULT_EQEXP_UPSKILLLV"*/, v33);
    sub_1BE4ACC(&StringLiteral_11258/*"RESULT_EQEXP_GETSKILL"*/, v34);
    sub_1BE4ACC(&StringLiteral_17516/*"bit_reward_shine02"*/, v35);
    sub_1BE4ACC(&StringLiteral_423/*"#,#"*/, v36);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v37);
    byte_4B69F9C = 1;
  }
  entity = 0LL;
  v38 = sub_1BE4D18(BattleResultExpComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_134;
  *(_QWORD *)(v38 + 16) = oldGame;
  v47 = v38 + 16;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v38 + 16), (int64_t)oldGame, v41, v42, v43, v44, v45, v46);
  *(_QWORD *)(v38 + 24) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v38 + 24), (int64_t)this, v48, v49, v50, v51, v52, v53);
  *(_QWORD *)(v38 + 32) = masterLvInfoArray;
  v54 = (__int64 *)(v38 + 32);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v38 + 32), (int64_t)masterLvInfoArray, v55, v56, v57, v58, v59, v60);
  v61 = *(struct UserGameEntity_o **)(v38 + 16);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = v61;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.oldGame, (int64_t)v61, v63, v64, v65, v66, v67, v68);
  this->fields.oldEquip = oldEquip;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.oldEquip, (int64_t)oldEquip, v69, v70, v71, v72, v73, v74);
  this->fields.bestTurnDamage = maxTurnDamage;
  this->fields.oldRecordDamage = oldRecord;
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    Instance = (__int64)this->fields.knockdownRecordWindow;
    if ( !Instance )
      goto LABEL_134;
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Instance, knockdownResult, v76);
  }
  this->fields.updateFlg = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v77 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_31FD970 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v77;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.newGame, (int64_t)v77, v79, v80, v81, v82, v83, v84);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !oldEquip )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v85 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          oldEquip->fields.id,
          (const MethodInfo_31FD970 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  p_newEquip = &this->fields.newEquip;
  this->fields.newEquip = (struct UserEquipEntity_o *)v85;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.newEquip, (int64_t)v85, v87, v88, v89, v90, v91, v92);
  newGame = this->fields.newGame;
  if ( !newGame || !*(_QWORD *)v47 )
    goto LABEL_134;
  BattleResultExpComponent__setMasterExp(
    this,
    newGame->fields.exp - *(_QWORD *)(*(_QWORD *)v47 + 88LL),
    *(_QWORD *)(*(_QWORD *)v47 + 88LL),
    *(_DWORD *)(*(_QWORD *)v47 + 80LL),
    v93);
  v95 = oldEquip;
  equip_nameLabel = this->fields.equip_nameLabel;
  v97 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v98 = *(_QWORD *)&v95->fields.equipId.fields.fakeValue;
  v157 = v95;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v162.fields.currentCryptoKey = v97;
  *(_QWORD *)&v162.fields.fakeValue = v98;
  v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v162, 0LL);
  Instance = (__int64)EquipMaster__getEquipName(v99, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Instance, 0LL),
        v100 = v157,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v157->fields.equipId, 0LL),
        !*p_newEquip)
    || (Instance = BattleResultExpComponent__setEquipExp(
                     this,
                     Instance,
                     (*p_newEquip)->fields.exp - v157->fields.exp,
                     v157->fields.exp,
                     v157->fields.lv,
                     v101),
        !*(_QWORD *)v47)
    || (BattleResultExpComponent__setMasterLv(this, *(_DWORD *)(*(_QWORD *)v47 + 80LL), v102),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_134:
    sub_1BE4D28(Instance, v40);
  }
  if ( !upParamList->max_length )
    goto LABEL_135;
  if ( !*(_QWORD *)v47 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  Instance = (__int64)upParamList->m_Items[0];
  v156 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Instance,
    *(_DWORD *)(*(_QWORD *)v47 + 80LL),
    (*p_newGame)->fields.lv,
    v103);
  v105 = sub_1BE4D18(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    (System_Func_float__int__int__o *)v105,
    (Il2CppObject *)v38,
    Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__,
    0LL);
  if ( !v105 )
    goto LABEL_134;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v105 + 24))(
               *(_QWORD *)(v105 + 64),
               35LL,
               *(_QWORD *)(v105 + 40),
               -186.0);
  v107 = Instance;
  if ( (int)Instance < 6 )
  {
    v108 = *v54;
    if ( *v54 )
    {
      v109 = 0LL;
      while ( v109 < *(int *)(v108 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_134;
        max_length = lvUpRewardSpArray->max_length;
        if ( v109 < (int)max_length )
        {
          if ( v109 >= max_length )
            goto LABEL_135;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v109],
            (System_String_o *)StringLiteral_17515/*"bit_reward_shine01"*/,
            v106);
          v108 = *v54;
        }
        ++v109;
        if ( !v108 )
          goto LABEL_134;
      }
    }
    v113 = &this->fields.newEquip;
    v125 = 35;
    goto LABEL_67;
  }
  v112 = this->fields.upParamList;
  if ( !v112 )
    goto LABEL_134;
  if ( !v112->max_length )
    goto LABEL_135;
  Instance = (__int64)v112->m_Items[0];
  v113 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__GetComponentsInChildren_object__49612324(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2F50624 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Instance )
    goto LABEL_134;
  v114 = *(_DWORD *)(Instance + 24);
  v115 = Instance;
  if ( v114 >= 1 )
  {
    v116 = 0;
    while ( v116 < v114 )
    {
      Instance = *(_QWORD *)(v115 + 8LL * (int)v116 + 32);
      if ( !Instance )
        goto LABEL_134;
      UILabel__set_fontSize((UILabel_o *)Instance, *(_DWORD *)(Instance + 424) - 2, 0LL);
      v114 = *(_DWORD *)(v115 + 24);
      if ( (int)++v116 >= v114 )
        goto LABEL_49;
    }
    goto LABEL_135;
  }
LABEL_49:
  v117 = this->fields.lvUpRewardSpArray;
  if ( !v117 )
    goto LABEL_134;
  if ( !v117->max_length )
    goto LABEL_135;
  Instance = (__int64)v117->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v118 = this->fields.lvUpRewardSpArray;
  if ( !v118 )
    goto LABEL_134;
  if ( !v118->max_length )
    goto LABEL_135;
  Instance = (__int64)v118->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  v119 = this->fields.lvUpRewardSpArray;
  if ( !v119 )
    goto LABEL_134;
  if ( v119->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v119->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v120 = this->fields.lvUpRewardSpArray;
  if ( !v120 )
    goto LABEL_134;
  if ( v120->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v120->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v105 + 24))(
               *(_QWORD *)(v105 + 64),
               31LL,
               *(_QWORD *)(v105 + 40),
               -186.0);
  v122 = this->fields.lvUpRewardSpArray;
  if ( !v122 )
    goto LABEL_134;
  if ( !v122->max_length )
    goto LABEL_135;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v122->m_Items[0],
    (System_String_o *)StringLiteral_17516/*"bit_reward_shine02"*/,
    v121);
  v124 = this->fields.lvUpRewardSpArray;
  if ( !v124 )
    goto LABEL_134;
  if ( v124->max_length <= 1 )
LABEL_135:
    sub_1BE4D30(Instance, v40);
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v124->m_Items[1],
    (System_String_o *)StringLiteral_17516/*"bit_reward_shine02"*/,
    v123);
  v125 = 31;
LABEL_67:
  Instance = (__int64)this->fields.masterLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, v125 * v107 + 134, 0LL);
  if ( !*(_QWORD *)v47 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  this->fields.updateFlg |= *(_QWORD *)(*(_QWORD *)v47 + 88LL) != (*p_newGame)->fields.exp;
  BattleResultExpComponent__setEquipLv(this, v157->fields.lv, v126);
  equip_oldlevelLabel = this->fields.equip_oldlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)v157 + 48, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_134;
  v128 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v128, 0LL);
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_134;
  equip_newlevelLabel = this->fields.equip_newlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_134;
  v131 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v131, 0LL);
  v132 = (System_Text_StringBuilder_o *)sub_1BE4D18(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v132, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillIdList(v157, 0LL);
  if ( !*v113 )
    goto LABEL_134;
  v133 = Instance;
  SkillIdList = UserEquipEntity__getSkillIdList(*v113, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillLvList(v157, 0LL);
  v158 = Instance;
  if ( !*v113 )
    goto LABEL_134;
  SkillLvList = UserEquipEntity__getSkillLvList(*v113, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v133 )
    goto LABEL_134;
  if ( *(int *)(v133 + 24) >= 1 )
  {
    v136 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v137 = 0;
    v138 = 0LL;
    v139 = &SkillIdList->m_Items[1];
    v159 = &SkillLvList->m_Items[1];
    while ( 1 )
    {
      entity = 0LL;
      if ( !SkillIdList )
        goto LABEL_134;
      if ( v138 >= SkillIdList->max_length )
        goto LABEL_135;
      if ( !v136 )
        goto LABEL_134;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v136,
                   &entity,
                   v139[v138],
                   (const MethodInfo_31FD818 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( entity && (Instance & 1) != 0 )
      {
        if ( v138 >= *(unsigned int *)(v133 + 24) || v138 >= SkillIdList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v133 + 32 + 4 * v138) != v139[v138] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11258/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v146 = (System_String_o *)Instance;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          Instance = (__int64)System_String__Format(v146, Name, 0LL);
          if ( !v132 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_61861184(v132, (System_String_o *)Instance, 0LL);
LABEL_109:
          v137 += 3;
          goto LABEL_110;
        }
        if ( !v158 )
          goto LABEL_134;
        if ( v138 >= *(unsigned int *)(v158 + 24) )
          goto LABEL_135;
        if ( !SkillLvList )
          goto LABEL_134;
        if ( v138 >= SkillLvList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v158 + 32 + 4 * v138) != v159[v138] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11259/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v140 = (System_String_o *)Instance;
          Instance = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( v138 >= SkillLvList->max_length )
            goto LABEL_135;
          v144 = (Il2CppObject *)Instance;
          v160 = v159[v138];
          v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v160, v141, v142, v143);
          Instance = (__int64)System_String__Format_62713180(v140, v144, v145, 0LL);
          if ( !v132 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_61861184(v132, (System_String_o *)Instance, 0LL);
          v100 = v157;
          goto LABEL_109;
        }
      }
LABEL_110:
      if ( (__int64)++v138 >= *(int *)(v133 + 24) )
        goto LABEL_113;
    }
  }
  v137 = 0;
LABEL_113:
  eqConfRoot = this->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_134;
  LODWORD(v163.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.eqConfRoot, 0LL);
  v163.fields.y = (float)v137 * 10.0;
  v163.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v163, 0LL);
  Instance = (__int64)this->fields.eqLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, 22 * v137 + 134, 0LL);
  if ( !v132 )
    goto LABEL_134;
  equip_confLabel = this->fields.equip_confLabel;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v132->klass->vtable._3_ToString.method)(
               v132,
               v132->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_134;
  UILabel__set_text(equip_confLabel, (System_String_o *)Instance, 0LL);
  if ( !*v156 )
    goto LABEL_134;
  bestTurnDamage = this->fields.bestTurnDamage;
  oldRecordDamage = this->fields.oldRecordDamage;
  damage_recordLabel = this->fields.damage_recordLabel;
  this->fields.updateFlg |= v100->fields.exp != (*v156)->fields.exp;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Instance = (__int64)System_Int64__ToString_63509592(
                          (int64_t)&this->fields.oldRecordDamage,
                          (System_String_o *)StringLiteral_423/*"#,#"*/,
                          0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
      damage_battleLabel = this->fields.damage_battleLabel;
      Instance = (__int64)System_Int64__ToString_63509592(
                            (int64_t)&this->fields.bestTurnDamage,
                            (System_String_o *)StringLiteral_423/*"#,#"*/,
                            0LL);
      if ( damage_battleLabel )
      {
        UILabel__set_text(damage_battleLabel, (System_String_o *)Instance, 0LL);
        Instance = (__int64)this->fields.damage_recordLabel;
        if ( Instance )
        {
          UIWidget__set_color((UIWidget_o *)Instance, this->fields.record_intactColor, 0LL);
          Instance = (__int64)this->fields.damage_battleLabel;
          if ( Instance )
          {
            UIWidget__set_color((UIWidget_o *)Instance, this->fields.damage_intactColor, 0LL);
            Instance = (__int64)this->fields.damage_recordRenewalSp;
            if ( Instance )
            {
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( Instance )
              {
                v154 = 0;
                goto LABEL_133;
              }
            }
          }
        }
      }
    }
    goto LABEL_134;
  }
  Instance = (__int64)System_Int64__ToString_63509592(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_423/*"#,#"*/,
                        0LL);
  if ( !damage_recordLabel )
    goto LABEL_134;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
  v153 = this->fields.damage_battleLabel;
  Instance = (__int64)System_Int64__ToString_63509592(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_423/*"#,#"*/,
                        0LL);
  if ( !v153 )
    goto LABEL_134;
  UILabel__set_text(v153, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.damage_recordLabel;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_color((UIWidget_o *)Instance, this->fields.record_renewalColor, 0LL);
  Instance = (__int64)this->fields.damage_battleLabel;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_color((UIWidget_o *)Instance, this->fields.damage_renewalColor, 0LL);
  Instance = (__int64)this->fields.damage_recordRenewalSp;
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  v154 = 1;
LABEL_133:
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
  if ( (byte_4B69FA5 & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isFinish);
    byte_4B69FA5 = 1;
  }
  oldGame = v6->fields.oldGame;
  if ( !oldGame )
    goto LABEL_21;
  newGame = v6->fields.newGame;
  if ( !newGame )
    goto LABEL_21;
  v9 = BattleUtility__LerpDouble((double)oldGame->fields.exp, (double)newGame->fields.exp, val, 0LL);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToLong(v9, 0LL);
  v11 = v6->fields.newGame;
  if ( isFinish )
  {
    if ( !v11 )
      goto LABEL_21;
    exp = (BattleResultExpComponent_o *)v11->fields.exp;
  }
  else
  {
    exp = this;
    if ( !v11 )
      goto LABEL_21;
  }
  v13 = v6->fields.oldGame;
  if ( !v13 )
    goto LABEL_21;
  this = (BattleResultExpComponent_o *)BattleResultExpComponent__setMasterExp(
                                         v6,
                                         v11->fields.exp - v13->fields.exp,
                                         (int64_t)exp,
                                         v13->fields.lv,
                                         v10);
  oldEquip = v6->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_21;
  newEquip = v6->fields.newEquip;
  if ( !newEquip )
    goto LABEL_21;
  v16 = BattleUtility__LerpDouble((double)oldEquip->fields.exp, (double)newEquip->fields.exp, val, 0LL);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_44051828(v16, 0LL);
  v17 = v6->fields.newEquip;
  if ( isFinish )
  {
    if ( !v17 )
      goto LABEL_21;
    v18 = v17->fields.exp;
  }
  else
  {
    v18 = (int)this;
    if ( !v17 )
      goto LABEL_21;
  }
  v20 = *(_QWORD *)&v17->fields.equipId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v17->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v20;
  *(_QWORD *)&v24.fields.fakeValue = v19;
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v24, 0LL);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0LL )
LABEL_21:
    sub_1BE4D28(this, isFinish);
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
  BattleResultExpComponent___c__DisplayClass61_0_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct UserGameEntity_o *oldGame; // x8
  struct BattleResultExpComponent_o *_4__this; // x10
  struct UserGameEntity_o *newGame; // x9
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x10
  int32_t actMax; // w21
  int32_t v22; // w22
  const MethodInfo *v23; // x2
  struct BattleResultExpComponent_o *v24; // x8
  struct BattleResultMasterUpStatusComponent_array *v25; // x8
  const MethodInfo *v26; // x3
  struct BattleResultExpComponent_o *v27; // x8
  struct BattleResultMasterUpStatusComponent_array *v28; // x9
  struct UserGameEntity_o *v29; // x10
  struct UserGameEntity_o *v30; // x8
  int v31; // w22
  struct UserGameEntity_o *v32; // x8
  struct BattleResultExpComponent_o *v33; // x10
  struct UserGameEntity_o *v34; // x9
  struct BattleResultMasterUpStatusComponent_array *v35; // x10
  int32_t costMax; // w21
  int32_t v37; // w23
  const MethodInfo *v38; // x2
  struct BattleResultExpComponent_o *v39; // x8
  struct BattleResultMasterUpStatusComponent_array *v40; // x8
  const MethodInfo *v41; // x3
  struct BattleResultExpComponent_o *v42; // x8
  struct BattleResultMasterUpStatusComponent_array *v43; // x9
  struct UserGameEntity_o *v44; // x10
  struct UserGameEntity_o *v45; // x8
  struct BattleResultExpComponent_o *v46; // x8
  struct BattleResultMasterUpStatusComponent_array *v47; // x8
  struct UserGameEntity_o *v48; // x8
  struct BattleResultExpComponent_o *v49; // x10
  struct UserGameEntity_o *v50; // x9
  struct BattleResultMasterUpStatusComponent_array *v51; // x10
  int32_t friendKeep; // w21
  int32_t v53; // w23
  const MethodInfo *v54; // x2
  struct BattleResultExpComponent_o *v55; // x8
  struct BattleResultMasterUpStatusComponent_array *v56; // x8
  const MethodInfo *v57; // x3
  struct BattleResultExpComponent_o *v58; // x8
  struct BattleResultMasterUpStatusComponent_array *v59; // x9
  struct UserGameEntity_o *v60; // x10
  struct UserGameEntity_o *v61; // x8
  struct BattleResultExpComponent_o *v62; // x8
  struct BattleResultMasterUpStatusComponent_array *v63; // x8
  struct BattleResultExpComponent_o *v64; // x8
  struct BattleResultMasterUpStatusComponent_array *v65; // x8
  EventMaster_o *v66; // x21
  const MethodInfo *v67; // x2
  struct BattleResultExpComponent_o *v68; // x8
  struct BattleResultMasterUpStatusComponent_array *v69; // x8
  BattleResultMasterUpStatusComponent_o *v70; // x8
  System_String_o **v71; // x9
  struct BattleResultExpComponent_o *v72; // x8
  struct BattleResultMasterUpStatusComponent_array *v73; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  __int64 v75; // x8
  il2cpp_array_size_t v76; // w24
  int v77; // w25
  struct BattleResultExpComponent_o *v78; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v80; // x8
  struct UISprite_array *v81; // x8
  struct MasterLvRewardInfo_array *v82; // x9
  UISprite_o *v83; // x22
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v85; // x8
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  struct BattleResultExpComponent_o *v89; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v91; // x9
  MasterLvRewardInfo_o *v92; // x9
  Il2CppObject *v93; // x23
  UILabel_o *v94; // x22
  Il2CppObject *v95; // x0
  struct MasterLvRewardInfo_array *v96; // x8
  int v98; // [xsp+0h] [xbp-80h]
  int32_t num; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B69FB2 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, *(_QWORD *)&baseHeight);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1BE4ACC(&int_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BE4ACC(&StringLiteral_2977/*"BATTLE_RESULTEXP_FULLAP"*/, v10);
    sub_1BE4ACC(&StringLiteral_2976/*"BATTLE_RESULTEXP_FRIENDMAX"*/, v11);
    sub_1BE4ACC(&StringLiteral_2972/*"BATTLE_RESULTEXP_APMAX"*/, v12);
    sub_1BE4ACC(&StringLiteral_2978/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/, v13);
    sub_1BE4ACC(&StringLiteral_2973/*"BATTLE_RESULTEXP_COSTMAX"*/, v14);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v15);
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)sub_1BE4ACC(&StringLiteral_25364/*"{0} {1}個"*/, v16);
    byte_4B69FB2 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  oldGame = v6->fields.oldGame;
  if ( !oldGame )
    goto LABEL_128;
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_128;
  newGame = _4__this->fields.newGame;
  if ( !newGame )
    goto LABEL_128;
  upParamList = _4__this->fields.upParamList;
  if ( !upParamList )
    goto LABEL_128;
  if ( upParamList->max_length <= 1 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)upParamList->m_Items[1];
  if ( !this )
    goto LABEL_128;
  actMax = oldGame->fields.actMax;
  v22 = newGame->fields.actMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( actMax >= v22 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v31 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v24 = v6->fields.__4__this;
    if ( !v24 )
      goto LABEL_128;
    v25 = v24->fields.upParamList;
    if ( !v25 )
      goto LABEL_128;
    if ( v25->max_length <= 1 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v25->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2972/*"BATTLE_RESULTEXP_APMAX"*/,
      v23);
    v27 = v6->fields.__4__this;
    if ( !v27 )
      goto LABEL_128;
    v28 = v27->fields.upParamList;
    if ( !v28 )
      goto LABEL_128;
    if ( v28->max_length <= 1 )
      goto LABEL_129;
    v29 = v6->fields.oldGame;
    if ( !v29 )
      goto LABEL_128;
    v30 = v27->fields.newGame;
    if ( !v30 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v28->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v29->fields.actMax,
      v30->fields.actMax,
      v26);
    v31 = 1;
  }
  v32 = v6->fields.oldGame;
  if ( !v32 )
    goto LABEL_128;
  v33 = v6->fields.__4__this;
  if ( !v33 )
    goto LABEL_128;
  v34 = v33->fields.newGame;
  if ( !v34 )
    goto LABEL_128;
  v35 = v33->fields.upParamList;
  if ( !v35 )
    goto LABEL_128;
  if ( v35->max_length <= 2 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v35->m_Items[2];
  if ( !this )
    goto LABEL_128;
  costMax = v32->fields.costMax;
  v37 = v34->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( costMax >= v37 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v39 = v6->fields.__4__this;
    if ( !v39 )
      goto LABEL_128;
    v40 = v39->fields.upParamList;
    if ( !v40 )
      goto LABEL_128;
    if ( v40->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v40->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2973/*"BATTLE_RESULTEXP_COSTMAX"*/,
      v38);
    v42 = v6->fields.__4__this;
    if ( !v42 )
      goto LABEL_128;
    v43 = v42->fields.upParamList;
    if ( !v43 )
      goto LABEL_128;
    if ( v43->max_length <= 2 )
      goto LABEL_129;
    v44 = v6->fields.oldGame;
    if ( !v44 )
      goto LABEL_128;
    v45 = v42->fields.newGame;
    if ( !v45 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v43->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v44->fields.costMax,
      v45->fields.costMax,
      v41);
    v46 = v6->fields.__4__this;
    if ( !v46 )
      goto LABEL_128;
    v47 = v46->fields.upParamList;
    if ( !v47 )
      goto LABEL_128;
    if ( v47->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v47->m_Items[2];
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    v102.fields.y = height - (float)(v31 * baseHeight);
    v102.fields.x = 0.0;
    v102.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v102, 0LL);
    ++v31;
  }
  v48 = v6->fields.oldGame;
  if ( !v48 )
    goto LABEL_128;
  v49 = v6->fields.__4__this;
  if ( !v49 )
    goto LABEL_128;
  v50 = v49->fields.newGame;
  if ( !v50 )
    goto LABEL_128;
  v51 = v49->fields.upParamList;
  if ( !v51 )
    goto LABEL_128;
  if ( v51->max_length <= 3 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v51->m_Items[3];
  if ( !this )
    goto LABEL_128;
  friendKeep = v48->fields.friendKeep;
  v53 = v50->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( friendKeep >= v53 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v55 = v6->fields.__4__this;
    if ( !v55 )
      goto LABEL_128;
    v56 = v55->fields.upParamList;
    if ( !v56 )
      goto LABEL_128;
    if ( v56->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v56->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2976/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      v54);
    v58 = v6->fields.__4__this;
    if ( !v58 )
      goto LABEL_128;
    v59 = v58->fields.upParamList;
    if ( !v59 )
      goto LABEL_128;
    if ( v59->max_length <= 3 )
      goto LABEL_129;
    v60 = v6->fields.oldGame;
    if ( !v60 )
      goto LABEL_128;
    v61 = v58->fields.newGame;
    if ( !v61 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v59->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v60->fields.friendKeep,
      v61->fields.friendKeep,
      v57);
    v62 = v6->fields.__4__this;
    if ( !v62 )
      goto LABEL_128;
    v63 = v62->fields.upParamList;
    if ( !v63 )
      goto LABEL_128;
    if ( v63->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v63->m_Items[3];
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    v103.fields.y = height - (float)(v31 * baseHeight);
    v103.fields.x = 0.0;
    v103.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v103, 0LL);
    ++v31;
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  v64 = v6->fields.__4__this;
  if ( !v64 )
    goto LABEL_128;
  v65 = v64->fields.upParamList;
  if ( !v65 )
    goto LABEL_128;
  if ( v65->max_length <= 4 )
    goto LABEL_129;
  v66 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v65->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v66 )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)EventMaster__IsBPEnable(v66, 0LL);
  v68 = v6->fields.__4__this;
  if ( !v68 )
    goto LABEL_128;
  v69 = v68->fields.upParamList;
  if ( !v69 )
    goto LABEL_128;
  if ( v69->max_length <= 4 )
    goto LABEL_129;
  v70 = v69->m_Items[4];
  if ( !v70 )
    goto LABEL_128;
  v71 = (System_String_o **)&StringLiteral_2978/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v71 = (System_String_o **)&StringLiteral_2977/*"BATTLE_RESULTEXP_FULLAP"*/;
  BattleResultMasterUpStatusComponent__setTitle(v70, *v71, v67);
  v72 = v6->fields.__4__this;
  if ( !v72 || (v73 = v72->fields.upParamList) == 0LL )
LABEL_128:
    sub_1BE4D28(this, *(_QWORD *)&baseHeight);
  if ( v73->max_length <= 4 )
LABEL_129:
    sub_1BE4D30(this, *(_QWORD *)&baseHeight);
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v73->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  v104.fields.y = height - (float)(v31 * baseHeight);
  v104.fields.x = 0.0;
  v104.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v104, 0LL);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)(unsigned int)(v31 + 1);
  if ( masterLvInfoArray )
  {
    v75 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v75 <= 2 && (int)v75 >= 1 )
    {
      v98 = v31 + 1;
      v76 = 0;
      v77 = baseHeight * (_DWORD)this;
      do
      {
        v78 = v6->fields.__4__this;
        if ( !v78 )
          goto LABEL_128;
        lvUpRewardSpArray = v78->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_128;
        if ( v76 >= lvUpRewardSpArray->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)lvUpRewardSpArray->m_Items[v76];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Transform__get_parent(
                                                                     (UnityEngine_Transform_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        v105.fields.y = height - (float)v77;
        v105.fields.x = -30.0;
        v105.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v105, 0LL);
        v80 = v6->fields.__4__this;
        if ( !v80 )
          goto LABEL_128;
        v81 = v80->fields.lvUpRewardSpArray;
        if ( !v81 )
          goto LABEL_128;
        if ( v76 >= v81->max_length )
          goto LABEL_129;
        v82 = v6->fields.masterLvInfoArray;
        if ( !v82 )
          goto LABEL_128;
        if ( v76 >= v82->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v82->m_Items[v76];
        if ( !this )
          goto LABEL_128;
        v83 = v81->m_Items[v76];
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)AtlasManager__SetItem(v83, IconImageId, 0LL);
        countText = (System_String_o *)StringLiteral_1/*""*/;
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        v85 = v6->fields.masterLvInfoArray;
        if ( !v85 )
          goto LABEL_128;
        if ( v76 >= v85->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v85->m_Items[v76];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0LL);
        v89 = v6->fields.__4__this;
        if ( !v89 )
          goto LABEL_128;
        lvUpRewardLabelArray = v89->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_128;
        if ( v76 >= lvUpRewardLabelArray->max_length )
          goto LABEL_129;
        v91 = v6->fields.masterLvInfoArray;
        if ( !v91 )
          goto LABEL_128;
        if ( v76 >= v91->max_length )
          goto LABEL_129;
        v92 = v91->m_Items[v76];
        if ( !v92 )
          goto LABEL_128;
        v93 = (Il2CppObject *)nameText;
        v94 = lvUpRewardLabelArray->m_Items[v76];
        num = v92->fields.num;
        v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v86, v87, v88);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)System_String__Format_62713180(
                                                                     (System_String_o *)StringLiteral_25364/*"{0} {1}個"*/,
                                                                     v93,
                                                                     v95,
                                                                     0LL);
        if ( !v94 )
          goto LABEL_128;
        UILabel__set_text(v94, (System_String_o *)this, 0LL);
        v96 = v6->fields.masterLvInfoArray;
        if ( !v96 )
          goto LABEL_128;
        ++v76;
        v77 += baseHeight;
      }
      while ( (signed int)v76 < (signed int)v96->max_length );
      LODWORD(this) = v98 + v76;
    }
  }
  return (int)this;
}