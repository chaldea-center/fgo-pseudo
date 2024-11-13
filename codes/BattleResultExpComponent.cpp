void __fastcall BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = (struct UnityEngine_Color_o)xmmword_BD3330;
  this->fields.record_intactColor = _Q0;
  this->fields.damage_renewalColor = _Q0;
  this->fields.damage_intactColor = (struct UnityEngine_Color_o)xmmword_BD2430;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B19526 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultExpComponent_endClose__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B19526 = 1;
  }
  window = this->fields.window;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v8,
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Object_object__49237568; // x21
  BattleResultExpComponent_o *v19; // x21
  BattleResultExpComponent_o *v20; // x22
  __int64 v21; // x2
  BattleResultExpComponent_o *v22; // x22
  __int64 v23; // x2
  BattleResultExpComponent_o *v24; // x22
  int m_CancellationTokenSource; // w8
  BattleResultExpComponent_o *v26; // x21
  unsigned int v27; // w22

  v8 = this;
  if ( (byte_4B19522 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, targetIcon);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    this = (BattleResultExpComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B19522 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              effectName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__49237568,
                                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v19 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_23;
  v20 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0LL);
  if ( !v20 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v20, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  v22 = this;
  if ( !byte_4B109C1 )
  {
    this = (BattleResultExpComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v21);
    byte_4B109C1 = 1;
  }
  if ( !v22 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v22,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  v24 = this;
  if ( !byte_4B109C6 )
  {
    this = (BattleResultExpComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v23);
    byte_4B109C6 = 1;
  }
  if ( !v24 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v24,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                         (UnityEngine_GameObject_o *)v19,
                                         (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v26 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= m_CancellationTokenSource )
        sub_1BCAA44(this, data);
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v26->fields.parentComp + (int)v27);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v26->fields.m_CancellationTokenSource;
      if ( (int)++v27 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BCAA3C(this, data);
  }
LABEL_21:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v26,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  BattleWindowComponent_o *window; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v26; // x1
  System_String_o *v27; // x20
  System_String_o *v28; // x20

  if ( (byte_4B1951E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_2974/*"BATTLE_RESULTEXP_MASTERTITLE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2969/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, v13, v14);
    byte_4B1951E = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIUnityRenderer__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectUIList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v27 = (System_String_o *)window;
  if ( !System_String__Equals_62409536((System_String_o *)window, (System_String_o *)StringLiteral_2974/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v27, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !window )
LABEL_33:
    sub_1BCAA3C(window, v22);
  v28 = (System_String_o *)window;
  if ( !System_String__Equals_62409536((System_String_o *)window, (System_String_o *)StringLiteral_2969/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v28, 0LL);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
LABEL_32:
  this->fields.bondsCountUp = 1;
}


void __fastcall BattleResultExpComponent__Open(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x11
  _QWORD *v34; // x22
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v36; // x20
  __int64 v37; // x21
  int32_t v38; // w20
  __int64 v39; // x8
  UnityEngine_GameObject_o *figureRoot; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Object_array *v47; // x21
  UnityEngine_GameObject_o *v48; // x0
  Il2CppObject *v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x22
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
  int64_t v82; // x22
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x22
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  __int64 v108; // x1
  System_Collections_Hashtable_o *v109; // x0
  __int64 v110; // x0
  char v111[4]; // [xsp+18h] [xbp-48h] BYREF
  int v112; // [xsp+1Ch] [xbp-44h] BYREF
  int v113; // [xsp+28h] [xbp-38h] BYREF
  int32_t overwriteImageId; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_4B19525 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&bool_TypeInfo, v4, v5);
    sub_1BCA7E0(&object___TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&float_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_24997/*"x"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19206/*"endMoveFigure"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_21060/*"islocal"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v26, v27);
    sub_1BCA7E0(&iTween_TypeInfo, v28, v29);
    byte_4B19525 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  monitor = gameObject[1].monitor;
  if ( monitor
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)methodPtr_low) )
  {
    v34 = *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo
        ? gameObject[1].monitor
        : 0LL;
  }
  else
  {
    v34 = 0LL;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_69;
  v37 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
  *(_QWORD *)&v115.fields.currentCryptoKey = v37;
  *(_QWORD *)&v115.fields.fakeValue = v36;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                             v115,
                                             0LL);
  if ( !v34 )
    goto LABEL_69;
  v38 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)v34[8];
  if ( !gameObject )
    goto LABEL_69;
  overwriteImageId = BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)v34[8];
  if ( !gameObject )
    goto LABEL_69;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0LL);
  if ( overwriteImageId != -1 )
  {
    v39 = v34[8];
    if ( !v39 )
      goto LABEL_69;
    MasterFigureManagerOld__CreatePrefab_38634032(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v39 + 400),
      v38,
      60,
      0LL,
      overwriteImageId,
      (System_Nullable_Vector3__o)0,
      0LL);
  }
  figureRoot = this->fields.figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_1BCA888(object___TypeInfo, 10LL);
  if ( !gameObject )
LABEL_69:
    sub_1BCAA3C(gameObject, v31);
  v47 = (System_Object_array *)gameObject;
  v48 = (UnityEngine_GameObject_o *)StringLiteral_24997/*"x"*/;
  if ( StringLiteral_24997/*"x"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_24997/*"x"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_70;
    v49 = (Il2CppObject *)StringLiteral_24997/*"x"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( !v47->max_length )
    goto LABEL_68;
  v47->m_Items[0] = v49;
  sub_1BCA784((PartyOrganizationUtility_o *)v47->m_Items, (int64_t)v49, v41, v42, v43, v44, v45, v46);
  v113 = -1018691584;
  v48 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v113);
  v56 = (int64_t)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_70;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_68;
  v47->m_Items[1] = (Il2CppObject *)v56;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[1], v56, v50, v51, v52, v53, v54, v55);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_70;
    v49 = (Il2CppObject *)StringLiteral_24178/*"time"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_68;
  v47->m_Items[2] = v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[2], (int64_t)v49, v57, v58, v59, v60, v61, v62);
  v112 = 1061997773;
  v48 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v112);
  v69 = (int64_t)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_70;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_68;
  v47->m_Items[3] = (Il2CppObject *)v69;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_21060/*"islocal"*/;
  if ( StringLiteral_21060/*"islocal"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_21060/*"islocal"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_70;
    v49 = (Il2CppObject *)StringLiteral_21060/*"islocal"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_68;
  v47->m_Items[4] = v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[4], (int64_t)v49, v70, v71, v72, v73, v74, v75);
  v111[0] = 1;
  v48 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v111);
  v82 = (int64_t)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_70;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_68;
  v47->m_Items[5] = (Il2CppObject *)v82;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[5], v82, v76, v77, v78, v79, v80, v81);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_22515/*"oncompletetarget"*/;
  if ( StringLiteral_22515/*"oncompletetarget"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22515/*"oncompletetarget"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_70;
    v49 = (Il2CppObject *)StringLiteral_22515/*"oncompletetarget"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_68;
  v47->m_Items[6] = v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[6], (int64_t)v49, v83, v84, v85, v86, v87, v88);
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v95 = (int64_t)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
    {
LABEL_70:
      v110 = sub_1BCAA60(v48);
      sub_1BCA908(v110, 0LL);
    }
  }
  if ( v47->max_length <= 7 )
    goto LABEL_68;
  v47->m_Items[7] = (Il2CppObject *)v95;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[7], v95, v89, v90, v91, v92, v93, v94);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_70;
    v49 = (Il2CppObject *)StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 8 )
    goto LABEL_68;
  v47->m_Items[8] = v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[8], (int64_t)v49, v96, v97, v98, v99, v100, v101);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_19206/*"endMoveFigure"*/;
  if ( StringLiteral_19206/*"endMoveFigure"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_19206/*"endMoveFigure"*/, v47->obj.klass->_1.element_class);
    if ( v48 )
    {
      v49 = (Il2CppObject *)StringLiteral_19206/*"endMoveFigure"*/;
      goto LABEL_62;
    }
    goto LABEL_70;
  }
  v49 = 0LL;
LABEL_62:
  if ( v47->max_length <= 9 )
LABEL_68:
    sub_1BCAA44(v48, v49);
  v47->m_Items[9] = v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[9], (int64_t)v49, v102, v103, v104, v105, v106, v107);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v108);
  v109 = iTween__Hash(v47, 0LL);
  iTween__MoveFrom_60941024(figureRoot, v109, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL);
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
    sub_1BCAA3C(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__checkDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  PlayMakerFSM_o *myFsm; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *damage_LvupSimpleAnim; // x20
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v20; // x20
  __int64 v21; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v23; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v28; // x21
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0

  if ( (byte_4B19532 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultExpComponent_checkDamageRecord__, method, v2);
    sub_1BCA7E0(&Method_BattleResultExpComponent_endOpenDamageRecord__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_17456/*"bit_result_levelup01"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, v14, v15);
    byte_4B19532 = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(damage_LvupSimpleAnim, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)SimpleAnimation__get_Item(
                                  (SimpleAnimation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v20 = myFsm;
        v21 = *(unsigned __int16 *)(&myFsm->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&myFsm->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v21;
            p_offset += 2;
            if ( !v21 )
              goto LABEL_14;
          }
          v23 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_14:
          v23 = sub_1C1C7C0(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v23)(v20, *(_QWORD *)(v23 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_64539336((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_31:
    sub_1BCAA3C(myFsm, method);
  }
  damage_LvupAnim = (UnityEngine_Object_o *)this->fields.damage_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(damage_LvupAnim, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_69899248(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_27:
  damageRecordWindow = this->fields.damageRecordWindow;
  v28 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v25, v26);
  BattleWindowComponent_EndCall___ctor(
    v28,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0LL);
  if ( !damageRecordWindow )
    goto LABEL_31;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._10_Open.method)(
    damageRecordWindow,
    v28,
    damageRecordWindow->klass->vtable._11_CompOpen.methodPtr);
  v29 = Method_BattleResultExpComponent_checkDamageRecord__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkDamageRecord__ + 83) & 2) != 0 )
    v29 = (_QWORD *)sub_1BCA7F8(Method_BattleResultExpComponent_checkDamageRecord__);
  v30 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v29, v29[4]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 6, 0LL);
}


void __fastcall BattleResultExpComponent__checkEquipLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultExpComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  __int64 v18; // x1
  UnityEngine_Object_o *equip_LvupSimpleAnim; // x20
  BattleResultExpComponent_c *klass; // x8
  BattleResultExpComponent_o *v21; // x20
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  UnityEngine_Object_o *equip_LvupAnim; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v29; // x21
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0

  v3 = this;
  if ( (byte_4B1952F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultExpComponent_checkEquipLevelUp__, method, v2);
    sub_1BCA7E0(&Method_BattleResultExpComponent_endOpenEquipUp__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_17456/*"bit_result_levelup01"*/, v12, v13);
    this = (BattleResultExpComponent_o *)sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, v14, v15);
    byte_4B1952F = 1;
  }
  oldEquip = v3->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_33;
  newEquip = v3->fields.newEquip;
  if ( !newEquip )
    goto LABEL_33;
  if ( oldEquip->fields.lv >= newEquip->fields.lv )
  {
    this = (BattleResultExpComponent_o *)v3->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
      return;
    }
    goto LABEL_33;
  }
  this = (BattleResultExpComponent_o *)v3->fields.equipLevelupRoot;
  if ( !this )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  equip_LvupSimpleAnim = (UnityEngine_Object_o *)v3->fields.equip_LvupSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(equip_LvupSimpleAnim, 0LL, 0LL) )
  {
    this = (BattleResultExpComponent_o *)v3->fields.equip_LvupSimpleAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)this,
                                             (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        klass = this->klass;
        v21 = this;
        v22 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v22;
            p_offset += 4;
            if ( !v22 )
              goto LABEL_16;
          }
          v24 = (__int64)(&klass[1]._1.gc_desc + 2 * *p_offset);
        }
        else
        {
LABEL_16:
          v24 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v24)(v21, *(_QWORD *)(v24 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v3->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_64539336((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    sub_1BCAA3C(this, method);
  }
  equip_LvupAnim = (UnityEngine_Object_o *)v3->fields.equip_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(equip_LvupAnim, 0LL, 0LL) )
  {
    this = (BattleResultExpComponent_o *)v3->fields.equip_LvupAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)UnityEngine_Animation__get_Item(
                                             (UnityEngine_Animation_o *)this,
                                             (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
        this = (BattleResultExpComponent_o *)v3->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_69899248(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_29:
  equipupwindow = v3->fields.equipupwindow;
  v29 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v26, v27);
  BattleWindowComponent_EndCall___ctor(v29, (Il2CppObject *)v3, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v29,
    equipupwindow->klass->vtable._11_CompOpen.methodPtr);
  v30 = Method_BattleResultExpComponent_checkEquipLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkEquipLevelUp__ + 83) & 2) != 0 )
    v30 = (_QWORD *)sub_1BCA7F8(Method_BattleResultExpComponent_checkEquipLevelUp__);
  v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
  OverwriteAssetSoundName__PlaySystemSe(v31, 6, 0LL);
}


void __fastcall BattleResultExpComponent__checkMasterLevelUp(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  SePlayer_o *MeterSePlayer; // x0
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  __int64 v27; // x1
  UnityEngine_Object_o *mst_LvupSimpleAnim; // x20
  SePlayer_c *klass; // x8
  SePlayer_o *v30; // x20
  __int64 v31; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v33; // x0
  UnityEngine_Object_o *mst_LvupAnim; // x20
  __int64 v35; // x2
  __int64 v36; // x3
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v38; // x21
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  struct UserGameEntity_o *v41; // x9
  struct UserGameEntity_o *v42; // x8
  int32_t v43; // w20

  if ( (byte_4B1952B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultExpComponent_checkMasterLevelUp__, method, v2);
    sub_1BCA7E0(&Method_BattleResultExpComponent_endOpenMasterUp__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_17456/*"bit_result_levelup01"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, v16, v17);
    sub_1BCA7E0(&iTween_TypeInfo, v18, v19);
    byte_4B1952B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v20);
  iTween__Stop_61049892(gameObject, 0LL);
  BattleResultExpComponent__updateValueActual(this, 1.0, 1, v22);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(mst_LvupSimpleAnim, 0LL, 0LL) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
    if ( MeterSePlayer )
    {
      MeterSePlayer = (SePlayer_o *)SimpleAnimation__get_Item(
                                      (SimpleAnimation_o *)MeterSePlayer,
                                      (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
                                      0LL);
      if ( MeterSePlayer )
      {
        klass = MeterSePlayer->klass;
        v30 = MeterSePlayer;
        v31 = *(unsigned __int16 *)(&MeterSePlayer->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&MeterSePlayer->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v31;
            p_offset += 2;
            if ( !v31 )
              goto LABEL_20;
          }
          v33 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_20:
          v33 = sub_1C1C7C0(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_64539336(
            (SimpleAnimation_o *)MeterSePlayer,
            (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_33;
        }
      }
    }
LABEL_42:
    sub_1BCAA3C(MeterSePlayer, v23);
  }
  mst_LvupAnim = (UnityEngine_Object_o *)this->fields.mst_LvupAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(mst_LvupAnim, 0LL, 0LL) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    MeterSePlayer = (SePlayer_o *)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)MeterSePlayer,
                                    (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
                                    0LL);
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0LL);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_Animation__Play_69899248(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
      0LL);
  }
LABEL_33:
  masterupwindow = this->fields.masterupwindow;
  v38 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v23, v35, v36);
  BattleWindowComponent_EndCall___ctor(
    v38,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_42;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._10_Open.method)(
    masterupwindow,
    v38,
    masterupwindow->klass->vtable._11_CompOpen.methodPtr);
  v39 = Method_BattleResultExpComponent_checkMasterLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkMasterLevelUp__ + 83) & 2) != 0 )
    v39 = (_QWORD *)sub_1BCA7F8(Method_BattleResultExpComponent_checkMasterLevelUp__);
  v40 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v39, v39[4]);
  OverwriteAssetSoundName__PlaySystemSe(v40, 6, 0LL);
  v41 = this->fields.oldGame;
  if ( !v41 )
    goto LABEL_42;
  v42 = this->fields.newGame;
  if ( !v42 )
    goto LABEL_42;
  v43 = v41->fields.lv + 1;
  while ( v43 <= v42->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( MeterSePlayer )
    {
      AdManager__TrackEvent((AdManager_o *)MeterSePlayer, 3, 2, v43, -1, 0LL, 0LL);
      v42 = this->fields.newGame;
      ++v43;
      if ( v42 )
        continue;
    }
    goto LABEL_42;
  }
}


void __fastcall BattleResultExpComponent__checkOpenKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v7; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19535 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, v4, v5);
    byte_4B19535 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(myFsm, v7);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4B19533 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultExpComponent_endCloseDamageRecord__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B19533 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL),
        damageRecordWindow = this->fields.damageRecordWindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseDamageRecord__,
          0LL),
        !damageRecordWindow) )
  {
    sub_1BCAA3C(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._12_Close.method)(
    damageRecordWindow,
    v11,
    damageRecordWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *equipupwindow; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4B19530 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultExpComponent_endCloseEquipUp__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B19530 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL),
        equipupwindow = this->fields.equipupwindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseEquipUp__,
          0LL),
        !equipupwindow) )
  {
    sub_1BCAA3C(parentComp, method);
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
  __int64 v2; // x2
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v5; // x1
  struct BattleResultKnockdownComponent_o *v6; // x0

  if ( (byte_4B19536 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19536 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v6 = this->fields.knockdownRecordWindow;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._12_Close.method)(
      v6,
      0LL,
      v6->klass->vtable._13_CompClose.methodPtr);
  }
}


void __fastcall BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *effectUIList; // x0
  int32_t v11; // w20
  struct BattleWindowComponent_o *masterupwindow; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_4B1952D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultExpComponent_endCloseMasterUp__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v8, v9);
    byte_4B1952D = 1;
  }
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_13;
  if ( effectUIList->fields._size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      effectUIList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    effectUIList,
                                                                    v11,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
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
      if ( ++v11 >= effectUIList->fields._size )
        goto LABEL_10;
    }
LABEL_13:
    sub_1BCAA3C(effectUIList, method);
  }
LABEL_10:
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.parentComp;
  if ( !effectUIList )
    goto LABEL_13;
  BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0LL);
  masterupwindow = this->fields.masterupwindow;
  v16 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v13, v14, v15);
  BattleWindowComponent_EndCall___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endCloseMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._12_Close.method)(
    masterupwindow,
    v16,
    masterupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4B19527 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B19527 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_4B19534 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B19534 = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_4B19531 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B19531 = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_4B1952E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B1952E = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endMoveFigure(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Object_array *v35; // x21
  __int64 v36; // x0
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x22
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x22
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
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x22
  __int64 v95; // x1
  System_Collections_Hashtable_o *v96; // x0
  _QWORD *v97; // x0
  __int64 v98; // x1
  System_Reflection_MethodBase_o *v99; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  __int64 v108; // x0
  float time_exptotal; // [xsp+Ch] [xbp-44h] BYREF
  int v110; // [xsp+18h] [xbp-38h] BYREF
  int v111; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B19528 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultExpComponent_endMoveFigure__, method, v2);
    sub_1BCA7E0(&object___TypeInfo, v4, v5);
    sub_1BCA7E0(&SeManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&float_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_15361/*"UpdateValue"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19638/*"finishUpdateValue"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v22, v23);
    sub_1BCA7E0(&iTween_TypeInfo, v24, v25);
    byte_4B19528 = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v27 = sub_1BCA888(object___TypeInfo, 10LL);
    if ( !v27 )
      sub_1BCAA3C(0LL, v28);
    v35 = (System_Object_array *)v27;
    v36 = StringLiteral_19858/*"from"*/;
    if ( StringLiteral_19858/*"from"*/ )
    {
      v36 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v35->obj.klass->_1.element_class);
      if ( !v36 )
        goto LABEL_59;
      v37 = StringLiteral_19858/*"from"*/;
    }
    else
    {
      v37 = 0LL;
    }
    if ( !v35->max_length )
      goto LABEL_58;
    v35->m_Items[0] = (Il2CppObject *)v37;
    sub_1BCA784((PartyOrganizationUtility_o *)v35->m_Items, v37, v29, v30, v31, v32, v33, v34);
    v111 = 0;
    v36 = j_il2cpp_value_box_0(float_TypeInfo, &v111);
    v44 = v36;
    if ( !v36 || (v36 = sub_1BCA91C(v36, v35->obj.klass->_1.element_class)) != 0 )
    {
      if ( v35->max_length <= 1 )
        goto LABEL_58;
      v35->m_Items[1] = (Il2CppObject *)v44;
      sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[1], v44, v38, v39, v40, v41, v42, v43);
      v36 = StringLiteral_24219/*"to"*/;
      if ( StringLiteral_24219/*"to"*/ )
      {
        v36 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v35->obj.klass->_1.element_class);
        if ( !v36 )
          goto LABEL_59;
        v37 = StringLiteral_24219/*"to"*/;
      }
      else
      {
        v37 = 0LL;
      }
      if ( v35->max_length <= 2 )
        goto LABEL_58;
      v35->m_Items[2] = (Il2CppObject *)v37;
      sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[2], v37, v45, v46, v47, v48, v49, v50);
      v110 = 1065353216;
      v36 = j_il2cpp_value_box_0(float_TypeInfo, &v110);
      v57 = v36;
      if ( !v36 || (v36 = sub_1BCA91C(v36, v35->obj.klass->_1.element_class)) != 0 )
      {
        if ( v35->max_length <= 3 )
          goto LABEL_58;
        v35->m_Items[3] = (Il2CppObject *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[3], v57, v51, v52, v53, v54, v55, v56);
        v36 = StringLiteral_22521/*"onupdate"*/;
        if ( StringLiteral_22521/*"onupdate"*/ )
        {
          v36 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v35->obj.klass->_1.element_class);
          if ( !v36 )
            goto LABEL_59;
          v37 = StringLiteral_22521/*"onupdate"*/;
        }
        else
        {
          v37 = 0LL;
        }
        if ( v35->max_length <= 4 )
          goto LABEL_58;
        v35->m_Items[4] = (Il2CppObject *)v37;
        sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[4], v37, v58, v59, v60, v61, v62, v63);
        v36 = StringLiteral_15361/*"UpdateValue"*/;
        if ( StringLiteral_15361/*"UpdateValue"*/ )
        {
          v36 = sub_1BCA91C(StringLiteral_15361/*"UpdateValue"*/, v35->obj.klass->_1.element_class);
          if ( !v36 )
            goto LABEL_59;
          v37 = StringLiteral_15361/*"UpdateValue"*/;
        }
        else
        {
          v37 = 0LL;
        }
        if ( v35->max_length <= 5 )
          goto LABEL_58;
        v35->m_Items[5] = (Il2CppObject *)v37;
        sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[5], v37, v64, v65, v66, v67, v68, v69);
        v36 = StringLiteral_22513/*"oncomplete"*/;
        if ( StringLiteral_22513/*"oncomplete"*/ )
        {
          v36 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v35->obj.klass->_1.element_class);
          if ( !v36 )
            goto LABEL_59;
          v37 = StringLiteral_22513/*"oncomplete"*/;
        }
        else
        {
          v37 = 0LL;
        }
        if ( v35->max_length <= 6 )
          goto LABEL_58;
        v35->m_Items[6] = (Il2CppObject *)v37;
        sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[6], v37, v70, v71, v72, v73, v74, v75);
        v36 = StringLiteral_19638/*"finishUpdateValue"*/;
        if ( StringLiteral_19638/*"finishUpdateValue"*/ )
        {
          v36 = sub_1BCA91C(StringLiteral_19638/*"finishUpdateValue"*/, v35->obj.klass->_1.element_class);
          if ( !v36 )
            goto LABEL_59;
          v37 = StringLiteral_19638/*"finishUpdateValue"*/;
        }
        else
        {
          v37 = 0LL;
        }
        if ( v35->max_length <= 7 )
          goto LABEL_58;
        v35->m_Items[7] = (Il2CppObject *)v37;
        sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[7], v37, v76, v77, v78, v79, v80, v81);
        v36 = StringLiteral_24178/*"time"*/;
        if ( StringLiteral_24178/*"time"*/ )
        {
          v36 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v35->obj.klass->_1.element_class);
          if ( !v36 )
            goto LABEL_59;
          v37 = StringLiteral_24178/*"time"*/;
        }
        else
        {
          v37 = 0LL;
        }
        if ( v35->max_length <= 8 )
          goto LABEL_58;
        v35->m_Items[8] = (Il2CppObject *)v37;
        sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[8], v37, v82, v83, v84, v85, v86, v87);
        time_exptotal = this->fields.time_exptotal;
        v36 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal);
        v94 = v36;
        if ( !v36 || (v36 = sub_1BCA91C(v36, v35->obj.klass->_1.element_class)) != 0 )
        {
          if ( v35->max_length > 9 )
          {
            v35->m_Items[9] = (Il2CppObject *)v94;
            sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[9], v94, v88, v89, v90, v91, v92, v93);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v95);
            v96 = iTween__Hash(v35, 0LL);
            iTween__ValueTo(gameObject, v96, 0LL);
            if ( this->fields.updateFlg )
            {
              v97 = Method_BattleResultExpComponent_endMoveFigure__;
              if ( (*((_BYTE *)Method_BattleResultExpComponent_endMoveFigure__ + 83) & 2) != 0 )
                v97 = (_QWORD *)sub_1BCA7F8(Method_BattleResultExpComponent_endMoveFigure__);
              v99 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v97, v97[4]);
              if ( !SeManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v98);
              CommonSeName = SeManager__GetCommonSeName(15, 0LL);
              v101 = OverwriteAssetSoundName__PlaySe(v99, CommonSeName, 0LL);
              this->fields.MeterSePlayer = v101;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.MeterSePlayer,
                (int64_t)v101,
                v102,
                v103,
                v104,
                v105,
                v106,
                v107);
            }
            return;
          }
LABEL_58:
          sub_1BCAA44(v36, v37);
        }
      }
    }
LABEL_59:
    v108 = sub_1BCAA60(v36);
    sub_1BCA908(v108, 0LL);
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1BCAA3C(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1BCAA3C(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1952C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15548/*"WAIT_OPEN"*/, method, v2);
    byte_4B1952C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15548/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19529 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, method, v2);
    byte_4B19529 = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *equip_getexpLabel; // x23
  Il2CppObject *v21; // x0
  System_String_o *Instance; // x0
  __int64 v23; // x1
  EquipExpMaster_o *v24; // x25
  int32_t Level; // w22
  int32_t LevelMax; // w24
  System_String_o *v27; // x23
  __int64 v28; // x1
  UILabel_o *equip_atexpLabel; // x26
  const MethodInfo *v30; // x2
  int32_t exp; // w21
  float value; // s0
  float v33; // s8
  float v34; // s0
  EquipExpEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int v37; // [xsp+18h] [xbp-58h] BYREF
  int32_t v38; // [xsp+1Ch] [xbp-54h] BYREF

  v38 = getexp;
  if ( (byte_4B19524 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&equipId, *(_QWORD *)&getexp);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11229/*"RESULT_EQUIP_MAXEXP"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_857/*"+ {0}"*/, v18, v19);
    byte_4B19524 = 1;
  }
  entity = 0LL;
  v37 = 0;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v21 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v38, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
  Instance = System_String__Format((System_String_o *)StringLiteral_857/*"+ {0}"*/, v21, 0LL);
  if ( !equip_getexpLabel )
    goto LABEL_27;
  UILabel__set_text(equip_getexpLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_27;
  v24 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowexp, start_level, 0LL);
  LevelMax = EquipExpMaster__getLevelMax(v24, equipId, 0LL);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v24, equipId, Level, 0LL);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_27;
  v27 = Instance;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0LL);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11229/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_27;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0LL);
    if ( !v27 )
      goto LABEL_27;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v37 = LODWORD(v27[1].klass) - nowexp;
    Instance = System_Int32__ToString_63206828((int32_t)&v37, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_27;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0LL);
  BattleResultExpComponent__setEquipLv(this, Level, v30);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v24, &entity, equipId, Level - 1, 0LL);
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
    sub_1BCAA3C(Instance, v23);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  v33 = value;
  if ( Level == LevelMax )
  {
    v34 = 1.0;
    if ( !Instance )
      goto LABEL_27;
  }
  else
  {
    if ( !v27 || !Instance )
      goto LABEL_27;
    v34 = 1.0 - (float)((float)(LODWORD(v27[1].klass) - nowexp) / (float)(LODWORD(v27[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v34, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_27;
  return v33 != UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__setEquipLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x21
  bool v14; // w0
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v16; // x1
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19520 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&level, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_2968/*"BATTLE_RESULTEXP_EQUIPLV"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v9, v10);
    byte_4B19520 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&level);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2968/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v11 )
    goto LABEL_11;
  v13 = v11;
  v14 = System_String__Equals_62409536(v11, (System_String_o *)StringLiteral_2968/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v14 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v17 = (System_String_o *)StringLiteral_25238/*"{0}"*/;
  }
  else
  {
    v19 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v17 = v13;
  }
  v11 = System_String__Format(v17, v16, 0LL);
  if ( !equip_Lv )
LABEL_11:
    sub_1BCAA3C(v11, v12);
  UILabel__set_text(equip_Lv, v11, 0LL);
}


bool __fastcall BattleResultExpComponent__setMasterExp(
        BattleResultExpComponent_o *this,
        int64_t getexp,
        int64_t nowexp,
        int32_t start_level,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *mst_getexpLabel; // x22
  Il2CppObject *v25; // x0
  System_String_o *mst_slider; // x0
  __int64 v27; // x1
  float value; // s8
  __int64 v29; // x1
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v31; // x2
  bool v32; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x23
  UILabel_o *v34; // x24
  System_String_o *v35; // x22
  char *monitor; // x8
  float v37; // s0
  __int64 v38; // x1
  UILabel_o *v39; // x20
  int64_t v41; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int64_t v43; // [xsp+18h] [xbp-58h] BYREF

  v43 = getexp;
  if ( (byte_4B19523 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserExpMaster___, getexp, nowexp);
    sub_1BCA7E0(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_11229/*"RESULT_EQUIP_MAXEXP"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_8725/*"MAX_USER_LV"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_857/*"+ {0}"*/, v22, v23);
    byte_4B19523 = 1;
  }
  v41 = 0LL;
  entity = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v25 = (Il2CppObject *)System_Int64__ToString_63212004((int64_t)&v43, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
  mst_slider = System_String__Format((System_String_o *)StringLiteral_857/*"+ {0}"*/, v25, 0LL);
  if ( !mst_getexpLabel )
    goto LABEL_30;
  UILabel__set_text(mst_getexpLabel, mst_slider, 0LL);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_30;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  mst_slider = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8725/*"MAX_USER_LV"*/, 0LL);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_30;
  if ( (_DWORD)mst_slider == start_level )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0LL);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11229/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_30;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_30;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
    v32 = 0;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    mst_slider = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mst_slider )
      goto LABEL_30;
    mst_slider = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)mst_slider,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserExpMaster___);
    if ( !mst_slider )
      goto LABEL_30;
    v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)mst_slider;
    start_level = UserExpMaster__getLevel((UserExpMaster_o *)mst_slider, nowexp, start_level, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v33,
                                      start_level,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_30;
    v34 = this->fields.mst_atexpLabel;
    v35 = mst_slider;
    v41 = (int64_t)mst_slider[1].klass - nowexp;
    mst_slider = System_Int64__ToString_63212004((int64_t)&v41, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
    if ( !v34 )
      goto LABEL_30;
    UILabel__set_text(v34, mst_slider, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      v33,
                                      &entity,
                                      start_level - 1,
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    monitor = 0LL;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      monitor = (char *)entity[1].monitor;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v37 = 1.0 - (double)((unsigned __int64)v35[1].klass - nowexp) / (double)((char *)v35[1].klass - monitor),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v37, 0LL),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0LL) )
    {
LABEL_30:
      sub_1BCAA3C(mst_slider, v27);
    }
    v32 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, start_level, v31);
  if ( start_level == ConstantMaster__getValue((System_String_o *)StringLiteral_8725/*"MAX_USER_LV"*/, 0LL) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( mst_slider )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0LL);
      v39 = this->fields.mst_atexpLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
      mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11229/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
      if ( v39 )
      {
        UILabel__set_text(v39, mst_slider, 0LL);
        mst_slider = (System_String_o *)this->fields.mst_slider;
        if ( mst_slider )
        {
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
          return v32;
        }
      }
    }
    goto LABEL_30;
  }
  return v32;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultExpComponent__setMasterLv(
        BattleResultExpComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x21
  bool v14; // w0
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v16; // x1
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1951F & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&level, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_2973/*"BATTLE_RESULTEXP_MASTERLV"*/, v9, v10);
    byte_4B1951F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&level);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2973/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v11 )
    goto LABEL_11;
  v13 = v11;
  v14 = System_String__Equals_62409536(v11, (System_String_o *)StringLiteral_2973/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v14 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v17 = (System_String_o *)StringLiteral_25238/*"{0}"*/;
  }
  else
  {
    v19 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v17 = v13;
  }
  v11 = System_String__Format(v17, v16, 0LL);
  if ( !mst_Lv )
LABEL_11:
    sub_1BCAA3C(v11, v12);
  UILabel__set_text(mst_Lv, v11, 0LL);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x27
  __int64 Instance; // x0
  __int64 v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x23
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 *v75; // x26
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct UserGameEntity_o *v82; // x1
  struct UserGameEntity_o **p_oldGame; // x28
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x1
  UnityEngine_Object_o *knockdownRecordWindow; // x24
  const MethodInfo *v98; // x2
  Il2CppObject *v99; // x0
  struct UserGameEntity_o **p_newGame; // x24
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  Il2CppObject *v107; // x0
  struct UserEquipEntity_o **p_newEquip; // x21
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  const MethodInfo *v115; // x4
  struct UserGameEntity_o *newGame; // x8
  __int64 v117; // x1
  UserEquipEntity_o *v118; // x9
  UILabel_o *equip_nameLabel; // x25
  __int64 v120; // x29
  __int64 v121; // x28
  int32_t v122; // w0
  UserEquipEntity_o *v123; // x29
  const MethodInfo *v124; // x5
  const MethodInfo *v125; // x2
  const MethodInfo *v126; // x3
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x3
  __int64 v131; // x28
  const MethodInfo *v132; // x4
  int v133; // w27
  __int64 v134; // x8
  signed __int64 v135; // x20
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v138; // x8
  UserEquipEntity_o **v139; // x21
  int v140; // w8
  __int64 v141; // x26
  unsigned int v142; // w20
  struct UISprite_array *v143; // x8
  struct UISprite_array *v144; // x8
  struct UISprite_array *v145; // x8
  struct UISprite_array *v146; // x8
  const MethodInfo *v147; // x4
  struct UISprite_array *v148; // x8
  const MethodInfo *v149; // x4
  struct UISprite_array *v150; // x8
  int v151; // w8
  const MethodInfo *v152; // x2
  UILabel_o *equip_oldlevelLabel; // x22
  System_String_o *v154; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x22
  System_String_o *v157; // x1
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  System_Text_StringBuilder_o *v161; // x22
  __int64 v162; // x23
  System_Int32_array *SkillIdList; // x24
  System_Int32_array *SkillLvList; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v165; // x27
  int v166; // w21
  unsigned __int64 v167; // x20
  int32_t *v168; // x25
  System_String_o *v169; // x28
  Il2CppObject *v170; // x29
  Il2CppObject *v171; // x0
  System_String_o *v172; // x28
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x23
  UILabel_o *equip_confLabel; // x23
  int64_t oldRecordDamage; // x11
  int64_t bestTurnDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v179; // x21
  bool v180; // w1
  UILabel_o *damage_battleLabel; // x21
  struct UserEquipEntity_o **v182; // [xsp+0h] [xbp-A0h]
  UserEquipEntity_o *v183; // [xsp+8h] [xbp-98h]
  __int64 v184; // [xsp+18h] [xbp-88h]
  int32_t *v185; // [xsp+20h] [xbp-80h]
  int32_t v186; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  UnityEngine_Vector3_o v189; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19521 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___, oldGame, oldEquip);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserGameMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v27, v28);
    sub_1BCA7E0(&System_Func_float__int__int__TypeInfo, v29, v30);
    sub_1BCA7E0(&int_TypeInfo, v31, v32);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__, v43, v44);
    sub_1BCA7E0(&BattleResultExpComponent___c__DisplayClass61_0_TypeInfo, v45, v46);
    sub_1BCA7E0(&StringLiteral_17469/*"bit_reward_shine01"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_11228/*"RESULT_EQEXP_UPSKILLLV"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_11227/*"RESULT_EQEXP_GETSKILL"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_17470/*"bit_reward_shine02"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_423/*"#,#"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v57, v58);
    byte_4B19521 = 1;
  }
  entity = 0LL;
  v59 = sub_1BCAA2C(BattleResultExpComponent___c__DisplayClass61_0_TypeInfo, oldGame, oldEquip, masterLvInfoArray);
  System_Object___ctor((Il2CppObject *)v59, 0LL);
  if ( !v59 )
    goto LABEL_134;
  *(_QWORD *)(v59 + 16) = oldGame;
  v68 = v59 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)oldGame, v62, v63, v64, v65, v66, v67);
  *(_QWORD *)(v59 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 24), (int64_t)this, v69, v70, v71, v72, v73, v74);
  *(_QWORD *)(v59 + 32) = masterLvInfoArray;
  v75 = (__int64 *)(v59 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 32), (int64_t)masterLvInfoArray, v76, v77, v78, v79, v80, v81);
  v82 = *(struct UserGameEntity_o **)(v59 + 16);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = v82;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldGame, (int64_t)v82, v84, v85, v86, v87, v88, v89);
  this->fields.oldEquip = oldEquip;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldEquip, (int64_t)oldEquip, v90, v91, v92, v93, v94, v95);
  this->fields.bestTurnDamage = maxTurnDamage;
  this->fields.oldRecordDamage = oldRecord;
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v96);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    Instance = (__int64)this->fields.knockdownRecordWindow;
    if ( !Instance )
      goto LABEL_134;
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Instance, knockdownResult, v98);
  }
  this->fields.updateFlg = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v99 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v99;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.newGame, (int64_t)v99, v101, v102, v103, v104, v105, v106);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !oldEquip )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v107 = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           oldEquip->fields.id,
           (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  p_newEquip = &this->fields.newEquip;
  this->fields.newEquip = (struct UserEquipEntity_o *)v107;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.newEquip, (int64_t)v107, v109, v110, v111, v112, v113, v114);
  newGame = this->fields.newGame;
  if ( !newGame || !*(_QWORD *)v68 )
    goto LABEL_134;
  BattleResultExpComponent__setMasterExp(
    this,
    newGame->fields.exp - *(_QWORD *)(*(_QWORD *)v68 + 88LL),
    *(_QWORD *)(*(_QWORD *)v68 + 88LL),
    *(_DWORD *)(*(_QWORD *)v68 + 80LL),
    v115);
  v118 = oldEquip;
  equip_nameLabel = this->fields.equip_nameLabel;
  v120 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v121 = *(_QWORD *)&v118->fields.equipId.fields.fakeValue;
  v183 = v118;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v117);
  *(_QWORD *)&v188.fields.currentCryptoKey = v120;
  *(_QWORD *)&v188.fields.fakeValue = v121;
  v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v188, 0LL);
  Instance = (__int64)EquipMaster__getEquipName(v122, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Instance, 0LL),
        v123 = v183,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v183->fields.equipId, 0LL),
        !*p_newEquip)
    || (Instance = BattleResultExpComponent__setEquipExp(
                     this,
                     Instance,
                     (*p_newEquip)->fields.exp - v183->fields.exp,
                     v183->fields.exp,
                     v183->fields.lv,
                     v124),
        !*(_QWORD *)v68)
    || (BattleResultExpComponent__setMasterLv(this, *(_DWORD *)(*(_QWORD *)v68 + 80LL), v125),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_134:
    sub_1BCAA3C(Instance, v61);
  }
  if ( !upParamList->max_length )
    goto LABEL_135;
  if ( !*(_QWORD *)v68 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  Instance = (__int64)upParamList->m_Items[0];
  v182 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Instance,
    *(_DWORD *)(*(_QWORD *)v68 + 80LL),
    (*p_newGame)->fields.lv,
    v126);
  v131 = sub_1BCAA2C(System_Func_float__int__int__TypeInfo, v128, v129, v130);
  System_Func_float__int__int____ctor(
    (System_Func_float__int__int__o *)v131,
    (Il2CppObject *)v59,
    Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__,
    0LL);
  if ( !v131 )
    goto LABEL_134;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v131 + 24))(
               *(_QWORD *)(v131 + 64),
               35LL,
               *(_QWORD *)(v131 + 40),
               -186.0);
  v133 = Instance;
  if ( (int)Instance < 6 )
  {
    v134 = *v75;
    if ( *v75 )
    {
      v135 = 0LL;
      while ( v135 < *(int *)(v134 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_134;
        max_length = lvUpRewardSpArray->max_length;
        if ( v135 < (int)max_length )
        {
          if ( v135 >= max_length )
            goto LABEL_135;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v135],
            (System_String_o *)StringLiteral_17469/*"bit_reward_shine01"*/,
            v132);
          v134 = *v75;
        }
        ++v135;
        if ( !v134 )
          goto LABEL_134;
      }
    }
    v139 = &this->fields.newEquip;
    v151 = 35;
    goto LABEL_67;
  }
  v138 = this->fields.upParamList;
  if ( !v138 )
    goto LABEL_134;
  if ( !v138->max_length )
    goto LABEL_135;
  Instance = (__int64)v138->m_Items[0];
  v139 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Instance )
    goto LABEL_134;
  v140 = *(_DWORD *)(Instance + 24);
  v141 = Instance;
  if ( v140 >= 1 )
  {
    v142 = 0;
    while ( v142 < v140 )
    {
      Instance = *(_QWORD *)(v141 + 8LL * (int)v142 + 32);
      if ( !Instance )
        goto LABEL_134;
      UILabel__set_fontSize((UILabel_o *)Instance, *(_DWORD *)(Instance + 424) - 2, 0LL);
      v140 = *(_DWORD *)(v141 + 24);
      if ( (int)++v142 >= v140 )
        goto LABEL_49;
    }
    goto LABEL_135;
  }
LABEL_49:
  v143 = this->fields.lvUpRewardSpArray;
  if ( !v143 )
    goto LABEL_134;
  if ( !v143->max_length )
    goto LABEL_135;
  Instance = (__int64)v143->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v144 = this->fields.lvUpRewardSpArray;
  if ( !v144 )
    goto LABEL_134;
  if ( !v144->max_length )
    goto LABEL_135;
  Instance = (__int64)v144->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  v145 = this->fields.lvUpRewardSpArray;
  if ( !v145 )
    goto LABEL_134;
  if ( v145->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v145->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v146 = this->fields.lvUpRewardSpArray;
  if ( !v146 )
    goto LABEL_134;
  if ( v146->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v146->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v131 + 24))(
               *(_QWORD *)(v131 + 64),
               31LL,
               *(_QWORD *)(v131 + 40),
               -186.0);
  v148 = this->fields.lvUpRewardSpArray;
  if ( !v148 )
    goto LABEL_134;
  if ( !v148->max_length )
    goto LABEL_135;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v148->m_Items[0],
    (System_String_o *)StringLiteral_17470/*"bit_reward_shine02"*/,
    v147);
  v150 = this->fields.lvUpRewardSpArray;
  if ( !v150 )
    goto LABEL_134;
  if ( v150->max_length <= 1 )
LABEL_135:
    sub_1BCAA44(Instance, v61);
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v150->m_Items[1],
    (System_String_o *)StringLiteral_17470/*"bit_reward_shine02"*/,
    v149);
  v151 = 31;
LABEL_67:
  Instance = (__int64)this->fields.masterLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, v151 * v133 + 134, 0LL);
  if ( !*(_QWORD *)v68 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  this->fields.updateFlg |= *(_QWORD *)(*(_QWORD *)v68 + 88LL) != (*p_newGame)->fields.exp;
  BattleResultExpComponent__setEquipLv(this, v183->fields.lv, v152);
  equip_oldlevelLabel = this->fields.equip_oldlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)v183 + 48, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_134;
  v154 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v154, 0LL);
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_134;
  equip_newlevelLabel = this->fields.equip_newlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_134;
  v157 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v157, 0LL);
  v161 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v158, v159, v160);
  System_Text_StringBuilder___ctor(v161, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillIdList(v183, 0LL);
  if ( !*v139 )
    goto LABEL_134;
  v162 = Instance;
  SkillIdList = UserEquipEntity__getSkillIdList(*v139, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillLvList(v183, 0LL);
  v184 = Instance;
  if ( !*v139 )
    goto LABEL_134;
  SkillLvList = UserEquipEntity__getSkillLvList(*v139, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v162 )
    goto LABEL_134;
  if ( *(int *)(v162 + 24) >= 1 )
  {
    v165 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v166 = 0;
    v167 = 0LL;
    v168 = &SkillIdList->m_Items[1];
    v185 = &SkillLvList->m_Items[1];
    while ( 1 )
    {
      entity = 0LL;
      if ( !SkillIdList )
        goto LABEL_134;
      if ( v167 >= SkillIdList->max_length )
        goto LABEL_135;
      if ( !v165 )
        goto LABEL_134;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v165,
                   &entity,
                   v168[v167],
                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( entity && (Instance & 1) != 0 )
      {
        if ( v167 >= *(unsigned int *)(v162 + 24) || v167 >= SkillIdList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v162 + 32 + 4 * v167) != v168[v167] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11227/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v172 = (System_String_o *)Instance;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          Instance = (__int64)System_String__Format(v172, Name, 0LL);
          if ( !v161 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_61564340(v161, (System_String_o *)Instance, 0LL);
LABEL_109:
          v166 += 3;
          goto LABEL_110;
        }
        if ( !v184 )
          goto LABEL_134;
        if ( v167 >= *(unsigned int *)(v184 + 24) )
          goto LABEL_135;
        if ( !SkillLvList )
          goto LABEL_134;
        if ( v167 >= SkillLvList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v184 + 32 + 4 * v167) != v185[v167] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11228/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v169 = (System_String_o *)Instance;
          Instance = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( v167 >= SkillLvList->max_length )
            goto LABEL_135;
          v170 = (Il2CppObject *)Instance;
          v186 = v185[v167];
          v171 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186);
          Instance = (__int64)System_String__Format_62415592(v169, v170, v171, 0LL);
          if ( !v161 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_61564340(v161, (System_String_o *)Instance, 0LL);
          v123 = v183;
          goto LABEL_109;
        }
      }
LABEL_110:
      if ( (__int64)++v167 >= *(int *)(v162 + 24) )
        goto LABEL_113;
    }
  }
  v166 = 0;
LABEL_113:
  eqConfRoot = this->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_134;
  LODWORD(v189.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.eqConfRoot, 0LL);
  v189.fields.y = (float)v166 * 10.0;
  v189.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v189, 0LL);
  Instance = (__int64)this->fields.eqLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, 22 * v166 + 134, 0LL);
  if ( !v161 )
    goto LABEL_134;
  equip_confLabel = this->fields.equip_confLabel;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v161->klass->vtable._3_ToString.method)(
               v161,
               v161->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_134;
  UILabel__set_text(equip_confLabel, (System_String_o *)Instance, 0LL);
  if ( !*v182 )
    goto LABEL_134;
  bestTurnDamage = this->fields.bestTurnDamage;
  oldRecordDamage = this->fields.oldRecordDamage;
  damage_recordLabel = this->fields.damage_recordLabel;
  this->fields.updateFlg |= v123->fields.exp != (*v182)->fields.exp;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Instance = (__int64)System_Int64__ToString_63212004(
                          (int64_t)&this->fields.oldRecordDamage,
                          (System_String_o *)StringLiteral_423/*"#,#"*/,
                          0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
      damage_battleLabel = this->fields.damage_battleLabel;
      Instance = (__int64)System_Int64__ToString_63212004(
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
                v180 = 0;
                goto LABEL_133;
              }
            }
          }
        }
      }
    }
    goto LABEL_134;
  }
  Instance = (__int64)System_Int64__ToString_63212004(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_423/*"#,#"*/,
                        0LL);
  if ( !damage_recordLabel )
    goto LABEL_134;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
  v179 = this->fields.damage_battleLabel;
  Instance = (__int64)System_Int64__ToString_63212004(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_423/*"#,#"*/,
                        0LL);
  if ( !v179 )
    goto LABEL_134;
  UILabel__set_text(v179, (System_String_o *)Instance, 0LL);
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
  v180 = 1;
LABEL_133:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v180, 0LL);
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
  if ( (byte_4B1952A & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_1BCA7E0(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           isFinish,
                                           method);
    byte_4B1952A = 1;
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
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_43794556(v16, 0LL);
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isFinish);
  *(_QWORD *)&v24.fields.currentCryptoKey = v20;
  *(_QWORD *)&v24.fields.fakeValue = v19;
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0LL )
LABEL_21:
    sub_1BCAA3C(this, isFinish);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct UserGameEntity_o *oldGame; // x8
  struct BattleResultExpComponent_o *_4__this; // x10
  struct UserGameEntity_o *newGame; // x9
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x10
  int32_t actMax; // w21
  int32_t v32; // w22
  const MethodInfo *v33; // x2
  struct BattleResultExpComponent_o *v34; // x8
  struct BattleResultMasterUpStatusComponent_array *v35; // x8
  const MethodInfo *v36; // x3
  struct BattleResultExpComponent_o *v37; // x8
  struct BattleResultMasterUpStatusComponent_array *v38; // x9
  struct UserGameEntity_o *v39; // x10
  struct UserGameEntity_o *v40; // x8
  int v41; // w22
  struct UserGameEntity_o *v42; // x8
  struct BattleResultExpComponent_o *v43; // x10
  struct UserGameEntity_o *v44; // x9
  struct BattleResultMasterUpStatusComponent_array *v45; // x10
  int32_t costMax; // w21
  int32_t v47; // w23
  const MethodInfo *v48; // x2
  struct BattleResultExpComponent_o *v49; // x8
  struct BattleResultMasterUpStatusComponent_array *v50; // x8
  const MethodInfo *v51; // x3
  struct BattleResultExpComponent_o *v52; // x8
  struct BattleResultMasterUpStatusComponent_array *v53; // x9
  struct UserGameEntity_o *v54; // x10
  struct UserGameEntity_o *v55; // x8
  struct BattleResultExpComponent_o *v56; // x8
  struct BattleResultMasterUpStatusComponent_array *v57; // x8
  struct UserGameEntity_o *v58; // x8
  struct BattleResultExpComponent_o *v59; // x10
  struct UserGameEntity_o *v60; // x9
  struct BattleResultMasterUpStatusComponent_array *v61; // x10
  int32_t friendKeep; // w21
  int32_t v63; // w23
  const MethodInfo *v64; // x2
  struct BattleResultExpComponent_o *v65; // x8
  struct BattleResultMasterUpStatusComponent_array *v66; // x8
  const MethodInfo *v67; // x3
  struct BattleResultExpComponent_o *v68; // x8
  struct BattleResultMasterUpStatusComponent_array *v69; // x9
  struct UserGameEntity_o *v70; // x10
  struct UserGameEntity_o *v71; // x8
  struct BattleResultExpComponent_o *v72; // x8
  struct BattleResultMasterUpStatusComponent_array *v73; // x8
  struct BattleResultExpComponent_o *v74; // x8
  struct BattleResultMasterUpStatusComponent_array *v75; // x8
  EventMaster_o *v76; // x21
  const MethodInfo *v77; // x2
  struct BattleResultExpComponent_o *v78; // x8
  struct BattleResultMasterUpStatusComponent_array *v79; // x8
  BattleResultMasterUpStatusComponent_o *v80; // x8
  System_String_o **v81; // x9
  struct BattleResultExpComponent_o *v82; // x8
  struct BattleResultMasterUpStatusComponent_array *v83; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  __int64 v85; // x8
  il2cpp_array_size_t v86; // w24
  int v87; // w25
  struct BattleResultExpComponent_o *v88; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v90; // x8
  struct UISprite_array *v91; // x8
  struct MasterLvRewardInfo_array *v92; // x9
  UISprite_o *v93; // x22
  __int64 v94; // x1
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v96; // x8
  struct BattleResultExpComponent_o *v97; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v99; // x9
  MasterLvRewardInfo_o *v100; // x9
  Il2CppObject *v101; // x23
  UILabel_o *v102; // x22
  Il2CppObject *v103; // x0
  struct MasterLvRewardInfo_array *v104; // x8
  int v106; // [xsp+0h] [xbp-80h]
  int32_t num; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B19537 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&baseHeight, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_2971/*"BATTLE_RESULTEXP_FULLAP"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_2970/*"BATTLE_RESULTEXP_FRIENDMAX"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_2966/*"BATTLE_RESULTEXP_APMAX"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_2972/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_2967/*"BATTLE_RESULTEXP_COSTMAX"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)sub_1BCA7E0(&StringLiteral_25275/*"{0} {1}個"*/, v25, v26);
    byte_4B19537 = 1;
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
  v32 = newGame->fields.actMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( actMax >= v32 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v41 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v34 = v6->fields.__4__this;
    if ( !v34 )
      goto LABEL_128;
    v35 = v34->fields.upParamList;
    if ( !v35 )
      goto LABEL_128;
    if ( v35->max_length <= 1 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v35->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2966/*"BATTLE_RESULTEXP_APMAX"*/,
      v33);
    v37 = v6->fields.__4__this;
    if ( !v37 )
      goto LABEL_128;
    v38 = v37->fields.upParamList;
    if ( !v38 )
      goto LABEL_128;
    if ( v38->max_length <= 1 )
      goto LABEL_129;
    v39 = v6->fields.oldGame;
    if ( !v39 )
      goto LABEL_128;
    v40 = v37->fields.newGame;
    if ( !v40 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v38->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v39->fields.actMax,
      v40->fields.actMax,
      v36);
    v41 = 1;
  }
  v42 = v6->fields.oldGame;
  if ( !v42 )
    goto LABEL_128;
  v43 = v6->fields.__4__this;
  if ( !v43 )
    goto LABEL_128;
  v44 = v43->fields.newGame;
  if ( !v44 )
    goto LABEL_128;
  v45 = v43->fields.upParamList;
  if ( !v45 )
    goto LABEL_128;
  if ( v45->max_length <= 2 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v45->m_Items[2];
  if ( !this )
    goto LABEL_128;
  costMax = v42->fields.costMax;
  v47 = v44->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( costMax >= v47 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v49 = v6->fields.__4__this;
    if ( !v49 )
      goto LABEL_128;
    v50 = v49->fields.upParamList;
    if ( !v50 )
      goto LABEL_128;
    if ( v50->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v50->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2967/*"BATTLE_RESULTEXP_COSTMAX"*/,
      v48);
    v52 = v6->fields.__4__this;
    if ( !v52 )
      goto LABEL_128;
    v53 = v52->fields.upParamList;
    if ( !v53 )
      goto LABEL_128;
    if ( v53->max_length <= 2 )
      goto LABEL_129;
    v54 = v6->fields.oldGame;
    if ( !v54 )
      goto LABEL_128;
    v55 = v52->fields.newGame;
    if ( !v55 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v53->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v54->fields.costMax,
      v55->fields.costMax,
      v51);
    v56 = v6->fields.__4__this;
    if ( !v56 )
      goto LABEL_128;
    v57 = v56->fields.upParamList;
    if ( !v57 )
      goto LABEL_128;
    if ( v57->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v57->m_Items[2];
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
    v110.fields.y = height - (float)(v41 * baseHeight);
    v110.fields.x = 0.0;
    v110.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v110, 0LL);
    ++v41;
  }
  v58 = v6->fields.oldGame;
  if ( !v58 )
    goto LABEL_128;
  v59 = v6->fields.__4__this;
  if ( !v59 )
    goto LABEL_128;
  v60 = v59->fields.newGame;
  if ( !v60 )
    goto LABEL_128;
  v61 = v59->fields.upParamList;
  if ( !v61 )
    goto LABEL_128;
  if ( v61->max_length <= 3 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v61->m_Items[3];
  if ( !this )
    goto LABEL_128;
  friendKeep = v58->fields.friendKeep;
  v63 = v60->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( friendKeep >= v63 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v65 = v6->fields.__4__this;
    if ( !v65 )
      goto LABEL_128;
    v66 = v65->fields.upParamList;
    if ( !v66 )
      goto LABEL_128;
    if ( v66->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v66->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2970/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      v64);
    v68 = v6->fields.__4__this;
    if ( !v68 )
      goto LABEL_128;
    v69 = v68->fields.upParamList;
    if ( !v69 )
      goto LABEL_128;
    if ( v69->max_length <= 3 )
      goto LABEL_129;
    v70 = v6->fields.oldGame;
    if ( !v70 )
      goto LABEL_128;
    v71 = v68->fields.newGame;
    if ( !v71 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v69->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v70->fields.friendKeep,
      v71->fields.friendKeep,
      v67);
    v72 = v6->fields.__4__this;
    if ( !v72 )
      goto LABEL_128;
    v73 = v72->fields.upParamList;
    if ( !v73 )
      goto LABEL_128;
    if ( v73->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v73->m_Items[3];
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
    v111.fields.y = height - (float)(v41 * baseHeight);
    v111.fields.x = 0.0;
    v111.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v111, 0LL);
    ++v41;
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  v74 = v6->fields.__4__this;
  if ( !v74 )
    goto LABEL_128;
  v75 = v74->fields.upParamList;
  if ( !v75 )
    goto LABEL_128;
  if ( v75->max_length <= 4 )
    goto LABEL_129;
  v76 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v75->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v76 )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)EventMaster__IsBPEnable(v76, 0LL);
  v78 = v6->fields.__4__this;
  if ( !v78 )
    goto LABEL_128;
  v79 = v78->fields.upParamList;
  if ( !v79 )
    goto LABEL_128;
  if ( v79->max_length <= 4 )
    goto LABEL_129;
  v80 = v79->m_Items[4];
  if ( !v80 )
    goto LABEL_128;
  v81 = (System_String_o **)&StringLiteral_2972/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v81 = (System_String_o **)&StringLiteral_2971/*"BATTLE_RESULTEXP_FULLAP"*/;
  BattleResultMasterUpStatusComponent__setTitle(v80, *v81, v77);
  v82 = v6->fields.__4__this;
  if ( !v82 || (v83 = v82->fields.upParamList) == 0LL )
LABEL_128:
    sub_1BCAA3C(this, *(_QWORD *)&baseHeight);
  if ( v83->max_length <= 4 )
LABEL_129:
    sub_1BCAA44(this, *(_QWORD *)&baseHeight);
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v83->m_Items[4];
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
  v112.fields.y = height - (float)(v41 * baseHeight);
  v112.fields.x = 0.0;
  v112.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v112, 0LL);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)(unsigned int)(v41 + 1);
  if ( masterLvInfoArray )
  {
    v85 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v85 <= 2 && (int)v85 >= 1 )
    {
      v106 = v41 + 1;
      v86 = 0;
      v87 = baseHeight * (_DWORD)this;
      do
      {
        v88 = v6->fields.__4__this;
        if ( !v88 )
          goto LABEL_128;
        lvUpRewardSpArray = v88->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_128;
        if ( v86 >= lvUpRewardSpArray->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)lvUpRewardSpArray->m_Items[v86];
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
        v113.fields.y = height - (float)v87;
        v113.fields.x = -30.0;
        v113.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v113, 0LL);
        v90 = v6->fields.__4__this;
        if ( !v90 )
          goto LABEL_128;
        v91 = v90->fields.lvUpRewardSpArray;
        if ( !v91 )
          goto LABEL_128;
        if ( v86 >= v91->max_length )
          goto LABEL_129;
        v92 = v6->fields.masterLvInfoArray;
        if ( !v92 )
          goto LABEL_128;
        if ( v86 >= v92->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v92->m_Items[v86];
        if ( !this )
          goto LABEL_128;
        v93 = v91->m_Items[v86];
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v94);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)AtlasManager__SetItem(v93, IconImageId, 0LL);
        countText = (System_String_o *)StringLiteral_1/*""*/;
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        v96 = v6->fields.masterLvInfoArray;
        if ( !v96 )
          goto LABEL_128;
        if ( v86 >= v96->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v96->m_Items[v86];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0LL);
        v97 = v6->fields.__4__this;
        if ( !v97 )
          goto LABEL_128;
        lvUpRewardLabelArray = v97->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_128;
        if ( v86 >= lvUpRewardLabelArray->max_length )
          goto LABEL_129;
        v99 = v6->fields.masterLvInfoArray;
        if ( !v99 )
          goto LABEL_128;
        if ( v86 >= v99->max_length )
          goto LABEL_129;
        v100 = v99->m_Items[v86];
        if ( !v100 )
          goto LABEL_128;
        v101 = (Il2CppObject *)nameText;
        v102 = lvUpRewardLabelArray->m_Items[v86];
        num = v100->fields.num;
        v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)System_String__Format_62415592(
                                                                     (System_String_o *)StringLiteral_25275/*"{0} {1}個"*/,
                                                                     v101,
                                                                     v103,
                                                                     0LL);
        if ( !v102 )
          goto LABEL_128;
        UILabel__set_text(v102, (System_String_o *)this, 0LL);
        v104 = v6->fields.masterLvInfoArray;
        if ( !v104 )
          goto LABEL_128;
        ++v86;
        v87 += baseHeight;
      }
      while ( (signed int)v86 < (signed int)v104->max_length );
      LODWORD(this) = v106 + v86;
    }
  }
  return (int)this;
}