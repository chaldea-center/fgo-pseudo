void __fastcall BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = (struct UnityEngine_Color_o)xmmword_BFEC80;
  this->fields.record_intactColor = _Q0;
  this->fields.damage_renewalColor = _Q0;
  this->fields.damage_intactColor = (struct UnityEngine_Color_o)xmmword_BFDDD0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BDF96B & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultExpComponent_endClose__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF96B = 1;
  }
  window = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_1C22094(v5, v6);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v4,
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
  Il2CppObject *Object_object__49880776; // x21
  BattleResultExpComponent_o *v10; // x21
  BattleResultExpComponent_o *v11; // x22
  BattleResultExpComponent_o *v12; // x22
  BattleResultExpComponent_o *v13; // x22
  int m_CancellationTokenSource; // w8
  BattleResultExpComponent_o *v15; // x21
  unsigned int v16; // w22

  v8 = this;
  if ( (byte_4BDF967 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultExpComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF967 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              data,
                              effectName,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__49880776,
                                         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v10 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_23;
  v11 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0LL);
  if ( !v11 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v11, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v12 = this;
  if ( !byte_4BD6BB1 )
  {
    this = (BattleResultExpComponent_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v13 = this;
  if ( !byte_4BD6BB6 )
  {
    this = (BattleResultExpComponent_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                         (UnityEngine_GameObject_o *)v10,
                                         (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v15 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= m_CancellationTokenSource )
        sub_1C2209C(this, data);
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v15->fields.parentComp + (int)v16);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C22094(this, data);
  }
LABEL_21:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  __int64 v10; // x1
  BattleWindowComponent_o *window; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  System_String_o *v13; // x20
  System_String_o *v14; // x20

  if ( (byte_4BDF963 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_2993/*"BATTLE_RESULTEXP_MASTERTITLE"*/);
    sub_1C21E38(&StringLiteral_2988/*"BATTLE_RESULTEXP_EQUIPTITLE"*/);
    byte_4BDF963 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effectUIList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2993/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v13 = (System_String_o *)window;
  if ( !System_String__Equals_63123792((System_String_o *)window, (System_String_o *)StringLiteral_2993/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v13, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2988/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !window )
LABEL_33:
    sub_1C22094(window, v10);
  v14 = (System_String_o *)window;
  if ( !System_String__Equals_63123792((System_String_o *)window, (System_String_o *)StringLiteral_2988/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v14, 0LL);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
LABEL_32:
  this->fields.bondsCountUp = 1;
}


bool __fastcall BattleResultExpComponent__IsResultEquipMaxExpDisp(
        BattleResultExpComponent_o *this,
        int32_t oldLv,
        int32_t newLv,
        UserExpMaster_o *userExpMst,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF97C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF97C = 1;
  }
  entity = 0LL;
  if ( oldLv == newLv )
    return 0;
  if ( !userExpMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserExpMaster___),
          (userExpMst = (UserExpMaster_o *)Instance) == 0LL) )
    {
LABEL_12:
      sub_1C22094(Instance, v9);
    }
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)userExpMst,
          &entity,
          newLv + 1,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
    goto LABEL_12;
  return UserExpEntity__IsCondEntity((UserExpEntity_o *)entity, 0LL);
}


void __fastcall BattleResultExpComponent__Open(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  void *monitor; // x8
  __int64 methodPtr_low; // x11
  _QWORD *v7; // x24
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t v11; // w20
  bool IsUseOverwriteMasterImage; // w21
  __int64 v13; // x23
  __int64 v14; // x22
  System_Nullable_Vector3__o ResultOverwriteMasterImagePosition; // kr00_16
  __int64 v16; // x8
  UnityEngine_GameObject_o *figureRoot; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Object_array *v24; // x21
  UnityEngine_GameObject_o *v25; // x0
  Il2CppObject *v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x22
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
  System_Collections_Hashtable_o *v94; // x0
  __int64 v95; // x0
  System_Nullable_Vector3__o offset; // [xsp+0h] [xbp-70h]
  char v97[4]; // [xsp+28h] [xbp-48h] BYREF
  int v98; // [xsp+2Ch] [xbp-44h] BYREF
  int v99; // [xsp+38h] [xbp-38h] BYREF
  int32_t overwriteImageId; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  if ( (byte_4BDF96A & 1) == 0 )
  {
    sub_1C21E38(&BattleRootComponent_TypeInfo);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_5599/*"END_OPEN"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_19337/*"endMoveFigure"*/);
    sub_1C21E38(&StringLiteral_21211/*"islocal"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF96A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_72;
  monitor = gameObject[1].monitor;
  if ( monitor
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)methodPtr_low) )
  {
    v7 = *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo
       ? gameObject[1].monitor
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v101.fields.currentCryptoKey = v10;
  *(_QWORD *)&v101.fields.fakeValue = v9;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                             v101,
                                             0LL);
  if ( !v7 )
    goto LABEL_72;
  v11 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)v7[8];
  if ( !gameObject )
    goto LABEL_72;
  overwriteImageId = BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0LL);
  v4 = (unsigned int)overwriteImageId;
  gameObject = (UnityEngine_GameObject_o *)v7[8];
  if ( !gameObject )
    goto LABEL_72;
  IsUseOverwriteMasterImage = BattleData__IsUseOverwriteMasterImage((BattleData_o *)gameObject, overwriteImageId, 0LL);
  v13 = 0LL;
  v14 = 0LL;
  if ( IsUseOverwriteMasterImage )
  {
    gameObject = (UnityEngine_GameObject_o *)v7[8];
    if ( !gameObject )
      goto LABEL_72;
    ResultOverwriteMasterImagePosition = BattleData__GetResultOverwriteMasterImagePosition(
                                           (BattleData_o *)gameObject,
                                           0LL);
    v4 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.value.fields.y;
    v13 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.value.fields.y;
    v14 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.hasValue;
  }
  gameObject = (UnityEngine_GameObject_o *)v7[8];
  if ( !gameObject )
    goto LABEL_72;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0LL);
  if ( overwriteImageId != -1 )
  {
    v16 = v7[8];
    if ( !v16 )
      goto LABEL_72;
    *(_QWORD *)&offset.fields.hasValue = v14;
    *(_QWORD *)&offset.fields.value.fields.y = v13;
    MasterFigureManagerOld__CreatePrefab_39164620(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v16 + 400),
      v11,
      60,
      0LL,
      overwriteImageId,
      offset,
      IsUseOverwriteMasterImage,
      0LL);
  }
  figureRoot = this->fields.figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_1C21EE0(object___TypeInfo, 10LL);
  if ( !gameObject )
LABEL_72:
    sub_1C22094(gameObject, v4);
  v24 = (System_Object_array *)gameObject;
  v25 = (UnityEngine_GameObject_o *)StringLiteral_25185/*"x"*/;
  if ( StringLiteral_25185/*"x"*/ )
  {
    v25 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_25185/*"x"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_74;
    v26 = (Il2CppObject *)StringLiteral_25185/*"x"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v24->max_length )
    goto LABEL_73;
  v24->m_Items[0] = v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)v24->m_Items, (int64_t)v26, v18, v19, v20, v21, v22, v23);
  v99 = -1018691584;
  v25 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v99, v27, v28, v29);
  v36 = (int64_t)v25;
  if ( v25 )
  {
    v25 = (UnityEngine_GameObject_o *)sub_1C21F74(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_74;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_73;
  v24->m_Items[1] = (Il2CppObject *)v36;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->m_Items[1], v36, v30, v31, v32, v33, v34, v35);
  v25 = (UnityEngine_GameObject_o *)StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v25 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_74;
    v26 = (Il2CppObject *)StringLiteral_24360/*"time"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_73;
  v24->m_Items[2] = v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->m_Items[2], (int64_t)v26, v37, v38, v39, v40, v41, v42);
  v98 = 1061997773;
  v25 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v98, v43, v44, v45);
  v52 = (int64_t)v25;
  if ( v25 )
  {
    v25 = (UnityEngine_GameObject_o *)sub_1C21F74(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_74;
  }
  if ( v24->max_length <= 3 )
    goto LABEL_73;
  v24->m_Items[3] = (Il2CppObject *)v52;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
  v25 = (UnityEngine_GameObject_o *)StringLiteral_21211/*"islocal"*/;
  if ( StringLiteral_21211/*"islocal"*/ )
  {
    v25 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_21211/*"islocal"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_74;
    v26 = (Il2CppObject *)StringLiteral_21211/*"islocal"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v24->max_length <= 4 )
    goto LABEL_73;
  v24->m_Items[4] = v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->m_Items[4], (int64_t)v26, v53, v54, v55, v56, v57, v58);
  v97[0] = 1;
  v25 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v97, v59, v60, v61);
  v68 = (int64_t)v25;
  if ( v25 )
  {
    v25 = (UnityEngine_GameObject_o *)sub_1C21F74(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_74;
  }
  if ( v24->max_length <= 5 )
    goto LABEL_73;
  v24->m_Items[5] = (Il2CppObject *)v68;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->m_Items[5], v68, v62, v63, v64, v65, v66, v67);
  v25 = (UnityEngine_GameObject_o *)StringLiteral_22682/*"oncompletetarget"*/;
  if ( StringLiteral_22682/*"oncompletetarget"*/ )
  {
    v25 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22682/*"oncompletetarget"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_74;
    v26 = (Il2CppObject *)StringLiteral_22682/*"oncompletetarget"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v24->max_length <= 6 )
    goto LABEL_73;
  v24->m_Items[6] = v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->m_Items[6], (int64_t)v26, v69, v70, v71, v72, v73, v74);
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v81 = (int64_t)v25;
  if ( v25 )
  {
    v25 = (UnityEngine_GameObject_o *)sub_1C21F74(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
    {
LABEL_74:
      v95 = sub_1C220B8(v25);
      sub_1C21F60(v95, 0LL);
    }
  }
  if ( v24->max_length <= 7 )
    goto LABEL_73;
  v24->m_Items[7] = (Il2CppObject *)v81;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->m_Items[7], v81, v75, v76, v77, v78, v79, v80);
  v25 = (UnityEngine_GameObject_o *)StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v25 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_74;
    v26 = (Il2CppObject *)StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v24->max_length <= 8 )
    goto LABEL_73;
  v24->m_Items[8] = v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->m_Items[8], (int64_t)v26, v82, v83, v84, v85, v86, v87);
  v25 = (UnityEngine_GameObject_o *)StringLiteral_19337/*"endMoveFigure"*/;
  if ( StringLiteral_19337/*"endMoveFigure"*/ )
  {
    v25 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_19337/*"endMoveFigure"*/, v24->obj.klass->_1.element_class);
    if ( v25 )
    {
      v26 = (Il2CppObject *)StringLiteral_19337/*"endMoveFigure"*/;
      goto LABEL_66;
    }
    goto LABEL_74;
  }
  v26 = 0LL;
LABEL_66:
  if ( v24->max_length <= 9 )
LABEL_73:
    sub_1C2209C(v25, v26);
  v24->m_Items[9] = v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->m_Items[9], (int64_t)v26, v88, v89, v90, v91, v92, v93);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v94 = iTween__Hash(v24, 0LL);
  iTween__MoveFrom_61654536(figureRoot, v94, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5599/*"END_OPEN"*/, 0LL);
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
    sub_1C22094(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__checkDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Object_o *damage_LvupSimpleAnim; // x20
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v6; // x20
  __int64 v7; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v9; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4BDF977 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultExpComponent_checkDamageRecord__);
    sub_1C21E38(&Method_BattleResultExpComponent_endOpenDamageRecord__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    sub_1C21E38(&StringLiteral_17569/*"bit_result_levelup01"*/);
    sub_1C21E38(&StringLiteral_3632/*"CLOSE"*/);
    byte_4BDF977 = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3632/*"CLOSE"*/, 0LL);
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
                                  (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v6 = myFsm;
        v7 = *(unsigned __int16 *)(&myFsm->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&myFsm->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v7;
            p_offset += 2;
            if ( !v7 )
              goto LABEL_14;
          }
          v9 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_14:
          v9 = sub_1C73E18(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v9)(v6, *(_QWORD *)(v9 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_65253852((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_31:
    sub_1C22094(myFsm, method);
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
                                  (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_70614020(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_27:
  damageRecordWindow = this->fields.damageRecordWindow;
  v12 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0LL);
  if ( !damageRecordWindow )
    goto LABEL_31;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._10_Open.method)(
    damageRecordWindow,
    v12,
    damageRecordWindow->klass->vtable._11_CompOpen.methodPtr);
  v13 = Method_BattleResultExpComponent_checkDamageRecord__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkDamageRecord__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C21E50(Method_BattleResultExpComponent_checkDamageRecord__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0LL);
}


void __fastcall BattleResultExpComponent__checkEquipLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultExpComponent_o *v2; // x19
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  UnityEngine_Object_o *equip_LvupSimpleAnim; // x20
  BattleResultExpComponent_c *klass; // x8
  BattleResultExpComponent_o *v7; // x20
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  UnityEngine_Object_o *equip_LvupAnim; // x20
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v13; // x21
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  v2 = this;
  if ( (byte_4BDF974 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultExpComponent_checkEquipLevelUp__);
    sub_1C21E38(&Method_BattleResultExpComponent_endOpenEquipUp__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    sub_1C21E38(&StringLiteral_17569/*"bit_result_levelup01"*/);
    this = (BattleResultExpComponent_o *)sub_1C21E38(&StringLiteral_3632/*"CLOSE"*/);
    byte_4BDF974 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3632/*"CLOSE"*/, 0LL);
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
                                             (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        klass = this->klass;
        v7 = this;
        v8 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v8;
            p_offset += 4;
            if ( !v8 )
              goto LABEL_16;
          }
          v10 = (__int64)(&klass[1]._1.gc_desc + 2 * *p_offset);
        }
        else
        {
LABEL_16:
          v10 = sub_1C73E18(this, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v10)(v7, *(_QWORD *)(v10 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_65253852((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    sub_1C22094(this, method);
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
                                             (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_70614020(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_29:
  equipupwindow = v2->fields.equipupwindow;
  v13 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v13, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v13,
    equipupwindow->klass->vtable._11_CompOpen.methodPtr);
  v14 = Method_BattleResultExpComponent_checkEquipLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkEquipLevelUp__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C21E50(Method_BattleResultExpComponent_checkEquipLevelUp__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 6, 0, 0LL);
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
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  UnityEngine_Object_o *mst_LvupAnim; // x20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v17; // x21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  struct UserGameEntity_o *v20; // x9
  struct UserGameEntity_o *v21; // x8
  int32_t v22; // w20

  if ( (byte_4BDF970 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultExpComponent_checkMasterLevelUp__);
    sub_1C21E38(&Method_BattleResultExpComponent_endOpenMasterUp__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    sub_1C21E38(&StringLiteral_17569/*"bit_result_levelup01"*/);
    sub_1C21E38(&StringLiteral_9432/*"NEXT"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF970 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61763404(gameObject, 0LL);
  BattleResultExpComponent__updateValueActual(this, 1.0, 1, v4);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9432/*"NEXT"*/, 0LL);
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
                                      (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
                                      0LL);
      if ( MeterSePlayer )
      {
        klass = MeterSePlayer->klass;
        v11 = MeterSePlayer;
        v12 = *(unsigned __int16 *)(&MeterSePlayer->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&MeterSePlayer->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v12;
            p_offset += 2;
            if ( !v12 )
              goto LABEL_20;
          }
          v14 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_20:
          v14 = sub_1C73E18(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_65253852(
            (SimpleAnimation_o *)MeterSePlayer,
            (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_33;
        }
      }
    }
LABEL_42:
    sub_1C22094(MeterSePlayer, v5);
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
                                    (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
                                    0LL);
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0LL);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_Animation__Play_70614020(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
      0LL);
  }
LABEL_33:
  masterupwindow = this->fields.masterupwindow;
  v17 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_42;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._10_Open.method)(
    masterupwindow,
    v17,
    masterupwindow->klass->vtable._11_CompOpen.methodPtr);
  v18 = Method_BattleResultExpComponent_checkMasterLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkMasterLevelUp__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1C21E50(Method_BattleResultExpComponent_checkMasterLevelUp__);
  v19 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 6, 0, 0LL);
  v20 = this->fields.oldGame;
  if ( !v20 )
    goto LABEL_42;
  v21 = this->fields.newGame;
  if ( !v21 )
    goto LABEL_42;
  v22 = v20->fields.lv + 1;
  while ( v22 <= v21->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( MeterSePlayer )
    {
      AdManager__TrackEvent((AdManager_o *)MeterSePlayer, 3, 2, v22, -1, 0LL, 0LL);
      v21 = this->fields.newGame;
      ++v22;
      if ( v21 )
        continue;
    }
    goto LABEL_42;
  }
}


void __fastcall BattleResultExpComponent__checkOpenKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF97A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3632/*"CLOSE"*/);
    byte_4BDF97A = 1;
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
    sub_1C22094(myFsm, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3632/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4BDF978 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultExpComponent_endCloseDamageRecord__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF978 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL),
        damageRecordWindow = this->fields.damageRecordWindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseDamageRecord__,
          0LL),
        !damageRecordWindow) )
  {
    sub_1C22094(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))damageRecordWindow->klass->vtable._12_Close.method)(
    damageRecordWindow,
    v5,
    damageRecordWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4BDF975 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultExpComponent_endCloseEquipUp__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF975 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL),
        equipupwindow = this->fields.equipupwindow,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseEquipUp__,
          0LL),
        !equipupwindow) )
  {
    sub_1C22094(parentComp, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._12_Close.method)(
    equipupwindow,
    v5,
    equipupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__closeKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  struct BattleResultKnockdownComponent_o *v5; // x0

  if ( (byte_4BDF97B & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF97B = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v5 = this->fields.knockdownRecordWindow;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._12_Close.method)(
      v5,
      0LL,
      v5->klass->vtable._13_CompClose.methodPtr);
  }
}


void __fastcall BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *effectUIList; // x0
  int32_t v4; // w20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4BDF972 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultExpComponent_endCloseMasterUp__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_4BDF972 = 1;
  }
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_13;
  if ( effectUIList->fields._size >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      effectUIList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    effectUIList,
                                                                    v4,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
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
      if ( ++v4 >= effectUIList->fields._size )
        goto LABEL_10;
    }
LABEL_13:
    sub_1C22094(effectUIList, method);
  }
LABEL_10:
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.parentComp;
  if ( !effectUIList )
    goto LABEL_13;
  BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0LL);
  masterupwindow = this->fields.masterupwindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endCloseMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._12_Close.method)(
    masterupwindow,
    v6,
    masterupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4BDF96C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF96C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C22094(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_4BDF979 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF979 = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C22094(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_4BDF976 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF976 = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C22094(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_4BDF973 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF973 = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C22094(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endMoveFigure(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Object_array *v12; // x21
  __int64 v13; // x0
  int64_t v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x22
  System_Collections_Hashtable_o *v81; // x0
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x0
  float time_exptotal; // [xsp+Ch] [xbp-44h] BYREF
  int v94; // [xsp+18h] [xbp-38h] BYREF
  int v95; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BDF96D & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultExpComponent_endMoveFigure__);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&SeManager_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_15460/*"UpdateValue"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_19770/*"finishUpdateValue"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF96D = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v4 = sub_1C21EE0(object___TypeInfo, 10LL);
    if ( !v4 )
      sub_1C22094(0LL, v5);
    v12 = (System_Object_array *)v4;
    v13 = StringLiteral_19990/*"from"*/;
    if ( StringLiteral_19990/*"from"*/ )
    {
      v13 = sub_1C21F74(StringLiteral_19990/*"from"*/, v12->obj.klass->_1.element_class);
      if ( !v13 )
        goto LABEL_59;
      v14 = StringLiteral_19990/*"from"*/;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v12->max_length )
      goto LABEL_58;
    v12->m_Items[0] = (Il2CppObject *)v14;
    sub_1C21DDC((PartyOrganizationUtility_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
    v95 = 0;
    v13 = j_il2cpp_value_box_0(float_TypeInfo, &v95, v15, v16, v17);
    v24 = v13;
    if ( !v13 || (v13 = sub_1C21F74(v13, v12->obj.klass->_1.element_class)) != 0 )
    {
      if ( v12->max_length <= 1 )
        goto LABEL_58;
      v12->m_Items[1] = (Il2CppObject *)v24;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
      v13 = StringLiteral_24401/*"to"*/;
      if ( StringLiteral_24401/*"to"*/ )
      {
        v13 = sub_1C21F74(StringLiteral_24401/*"to"*/, v12->obj.klass->_1.element_class);
        if ( !v13 )
          goto LABEL_59;
        v14 = StringLiteral_24401/*"to"*/;
      }
      else
      {
        v14 = 0LL;
      }
      if ( v12->max_length <= 2 )
        goto LABEL_58;
      v12->m_Items[2] = (Il2CppObject *)v14;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[2], v14, v25, v26, v27, v28, v29, v30);
      v94 = 1065353216;
      v13 = j_il2cpp_value_box_0(float_TypeInfo, &v94, v31, v32, v33);
      v40 = v13;
      if ( !v13 || (v13 = sub_1C21F74(v13, v12->obj.klass->_1.element_class)) != 0 )
      {
        if ( v12->max_length <= 3 )
          goto LABEL_58;
        v12->m_Items[3] = (Il2CppObject *)v40;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
        v13 = StringLiteral_22688/*"onupdate"*/;
        if ( StringLiteral_22688/*"onupdate"*/ )
        {
          v13 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_59;
          v14 = StringLiteral_22688/*"onupdate"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v12->max_length <= 4 )
          goto LABEL_58;
        v12->m_Items[4] = (Il2CppObject *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[4], v14, v41, v42, v43, v44, v45, v46);
        v13 = StringLiteral_15460/*"UpdateValue"*/;
        if ( StringLiteral_15460/*"UpdateValue"*/ )
        {
          v13 = sub_1C21F74(StringLiteral_15460/*"UpdateValue"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_59;
          v14 = StringLiteral_15460/*"UpdateValue"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v12->max_length <= 5 )
          goto LABEL_58;
        v12->m_Items[5] = (Il2CppObject *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[5], v14, v47, v48, v49, v50, v51, v52);
        v13 = StringLiteral_22680/*"oncomplete"*/;
        if ( StringLiteral_22680/*"oncomplete"*/ )
        {
          v13 = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_59;
          v14 = StringLiteral_22680/*"oncomplete"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v12->max_length <= 6 )
          goto LABEL_58;
        v12->m_Items[6] = (Il2CppObject *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[6], v14, v53, v54, v55, v56, v57, v58);
        v13 = StringLiteral_19770/*"finishUpdateValue"*/;
        if ( StringLiteral_19770/*"finishUpdateValue"*/ )
        {
          v13 = sub_1C21F74(StringLiteral_19770/*"finishUpdateValue"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_59;
          v14 = StringLiteral_19770/*"finishUpdateValue"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v12->max_length <= 7 )
          goto LABEL_58;
        v12->m_Items[7] = (Il2CppObject *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[7], v14, v59, v60, v61, v62, v63, v64);
        v13 = StringLiteral_24360/*"time"*/;
        if ( StringLiteral_24360/*"time"*/ )
        {
          v13 = sub_1C21F74(StringLiteral_24360/*"time"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_59;
          v14 = StringLiteral_24360/*"time"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v12->max_length <= 8 )
          goto LABEL_58;
        v12->m_Items[8] = (Il2CppObject *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[8], v14, v65, v66, v67, v68, v69, v70);
        time_exptotal = this->fields.time_exptotal;
        v13 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal, v71, v72, v73);
        v80 = v13;
        if ( !v13 || (v13 = sub_1C21F74(v13, v12->obj.klass->_1.element_class)) != 0 )
        {
          if ( v12->max_length > 9 )
          {
            v12->m_Items[9] = (Il2CppObject *)v80;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[9], v80, v74, v75, v76, v77, v78, v79);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v81 = iTween__Hash(v12, 0LL);
            iTween__ValueTo(gameObject, v81, 0LL);
            if ( this->fields.updateFlg )
            {
              v82 = Method_BattleResultExpComponent_endMoveFigure__;
              if ( (*((_BYTE *)Method_BattleResultExpComponent_endMoveFigure__ + 83) & 2) != 0 )
                v82 = (_QWORD *)sub_1C21E50(Method_BattleResultExpComponent_endMoveFigure__);
              v83 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v82, v82[4]);
              if ( !SeManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              CommonSeName = SeManager__GetCommonSeName(15, 0LL);
              v85 = OverwriteAssetSoundName__PlaySe(v83, CommonSeName, 0, 0LL);
              this->fields.MeterSePlayer = v85;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&this->fields.MeterSePlayer,
                (int64_t)v85,
                v86,
                v87,
                v88,
                v89,
                v90,
                v91);
            }
            return;
          }
LABEL_58:
          sub_1C2209C(v13, v14);
        }
      }
    }
LABEL_59:
    v92 = sub_1C220B8(v13);
    sub_1C21F60(v92, 0LL);
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1C22094(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  parentComp = this->fields.parentComp;
  if ( !parentComp )
    sub_1C22094(0LL, method);
  BattleResultComponent__setTouch(parentComp, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF971 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15647/*"WAIT_OPEN"*/);
    byte_4BDF971 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15647/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF96E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9432/*"NEXT"*/);
    byte_4BDF96E = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9432/*"NEXT"*/, 0LL);
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
  EquipExpEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int v26; // [xsp+18h] [xbp-58h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-54h] BYREF

  v27 = getexp;
  if ( (byte_4BDF969 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9399/*"N0"*/);
    sub_1C21E38(&StringLiteral_11307/*"RESULT_EQUIP_MAXEXP"*/);
    sub_1C21E38(&StringLiteral_860/*"+ {0}"*/);
    byte_4BDF969 = 1;
  }
  entity = 0LL;
  v26 = 0;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v11 = (Il2CppObject *)System_Int32__ToString_63921084((int32_t)&v27, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL);
  Instance = System_String__Format((System_String_o *)StringLiteral_860/*"+ {0}"*/, v11, 0LL);
  if ( !equip_getexpLabel )
    goto LABEL_27;
  UILabel__set_text(equip_getexpLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_27;
  v14 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowexp, start_level, 0LL);
  LevelMax = EquipExpMaster__getLevelMax(v14, equipId, 0LL);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v14, equipId, Level, 0LL);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_27;
  v17 = Instance;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0LL);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11307/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_27;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0LL);
    if ( !v17 )
      goto LABEL_27;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v26 = LODWORD(v17[1].klass) - nowexp;
    Instance = System_Int32__ToString_63921084((int32_t)&v26, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_27;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0LL);
  BattleResultExpComponent__setEquipLv(this, Level, v19);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v14, &entity, equipId, Level - 1, 0LL);
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
    sub_1C22094(Instance, v13);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  v22 = value;
  if ( Level == LevelMax )
  {
    v23 = 1.0;
    if ( !Instance )
      goto LABEL_27;
  }
  else
  {
    if ( !v17 || !Instance )
      goto LABEL_27;
    v23 = 1.0 - (float)((float)(LODWORD(v17[1].klass) - nowexp) / (float)(LODWORD(v17[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v23, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_27;
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
  __int64 v10; // x3
  __int64 v11; // x4
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v13; // x1
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDF965 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2987/*"BATTLE_RESULTEXP_EQUIPLV"*/);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    byte_4BDF965 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2987/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = System_String__Equals_63123792(v5, (System_String_o *)StringLiteral_2987/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v8 )
  {
    v15 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
    v14 = (System_String_o *)StringLiteral_25427/*"{0}"*/;
  }
  else
  {
    v16 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11);
    v14 = v7;
  }
  v5 = System_String__Format(v14, v13, 0LL);
  if ( !equip_Lv )
LABEL_11:
    sub_1C22094(v5, v6);
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
  UserExpMaster_o *v13; // x22
  int v14; // w23
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v16; // x2
  bool v17; // w21
  int32_t Level; // w24
  UILabel_o *v19; // x26
  System_String_o *v20; // x25
  char *monitor; // x8
  float v22; // s0
  BattleResultExpComponent_o *v23; // x0
  const MethodInfo *v24; // x4
  UILabel_o *v25; // x20
  int64_t v27; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF
  int64_t v29; // [xsp+18h] [xbp-68h] BYREF

  v29 = getexp;
  if ( (byte_4BDF968 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9399/*"N0"*/);
    sub_1C21E38(&StringLiteral_11307/*"RESULT_EQUIP_MAXEXP"*/);
    sub_1C21E38(&StringLiteral_860/*"+ {0}"*/);
    byte_4BDF968 = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v9 = (Il2CppObject *)System_Int64__ToString_63926260((int64_t)&v29, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL);
  mst_slider = System_String__Format((System_String_o *)StringLiteral_860/*"+ {0}"*/, v9, 0LL);
  if ( !mst_getexpLabel )
    goto LABEL_31;
  UILabel__set_text(mst_getexpLabel, mst_slider, 0LL);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_31;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  mst_slider = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mst_slider )
    goto LABEL_31;
  mst_slider = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)mst_slider,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !mst_slider )
    goto LABEL_31;
  v13 = (UserExpMaster_o *)mst_slider;
  mst_slider = (System_String_o *)UserExpMaster__GetLevelMax((UserExpMaster_o *)mst_slider, 0LL);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_31;
  v14 = (int)mst_slider;
  if ( (_DWORD)mst_slider == start_level )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0LL);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11307/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_31;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_31;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
    v17 = 0;
    Level = start_level;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    Level = UserExpMaster__getLevel(v13, nowexp, start_level, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                      Level,
                                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_31;
    v19 = this->fields.mst_atexpLabel;
    v20 = mst_slider;
    v27 = (int64_t)mst_slider[1].klass - nowexp;
    mst_slider = System_Int64__ToString_63926260((int64_t)&v27, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL);
    if ( !v19 )
      goto LABEL_31;
    UILabel__set_text(v19, mst_slider, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                      &entity,
                                      Level - 1,
                                      (const MethodInfo_325BE14 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    monitor = 0LL;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_31;
      monitor = (char *)entity[1].monitor;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v22 = 1.0 - (double)((unsigned __int64)v20[1].klass - nowexp) / (double)((char *)v20[1].klass - monitor),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v22, 0LL),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0LL) )
    {
LABEL_31:
      sub_1C22094(mst_slider, v11);
    }
    v17 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, Level, v16);
  if ( Level == v14 || BattleResultExpComponent__IsResultEquipMaxExpDisp(v23, start_level, Level, v13, v24) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( mst_slider )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0LL);
      v25 = this->fields.mst_atexpLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11307/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
      if ( v25 )
      {
        UILabel__set_text(v25, mst_slider, 0LL);
        mst_slider = (System_String_o *)this->fields.mst_slider;
        if ( mst_slider )
        {
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
          return v17;
        }
      }
    }
    goto LABEL_31;
  }
  return v17;
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
  __int64 v10; // x3
  __int64 v11; // x4
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v13; // x1
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDF964 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    sub_1C21E38(&StringLiteral_2992/*"BATTLE_RESULTEXP_MASTERLV"*/);
    byte_4BDF964 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2992/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = System_String__Equals_63123792(v5, (System_String_o *)StringLiteral_2992/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v8 )
  {
    v15 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
    v14 = (System_String_o *)StringLiteral_25427/*"{0}"*/;
  }
  else
  {
    v16 = level;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11);
    v14 = v7;
  }
  v5 = System_String__Format(v14, v13, 0LL);
  if ( !mst_Lv )
LABEL_11:
    sub_1C22094(v5, v6);
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
  __int64 v17; // x27
  __int64 Instance; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 *v33; // x26
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct UserGameEntity_o *v40; // x1
  struct UserGameEntity_o **p_oldGame; // x28
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  UnityEngine_Object_o *knockdownRecordWindow; // x24
  const MethodInfo *v55; // x2
  Il2CppObject *v56; // x0
  struct UserGameEntity_o **p_newGame; // x24
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  Il2CppObject *v64; // x0
  struct UserEquipEntity_o **p_newEquip; // x21
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  const MethodInfo *v72; // x4
  struct UserGameEntity_o *newGame; // x8
  UserEquipEntity_o *v74; // x9
  UILabel_o *equip_nameLabel; // x25
  __int64 v76; // x29
  __int64 v77; // x28
  int32_t v78; // w0
  UserEquipEntity_o *v79; // x29
  const MethodInfo *v80; // x5
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x3
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  __int64 v84; // x28
  const MethodInfo *v85; // x4
  int v86; // w27
  __int64 v87; // x8
  signed __int64 v88; // x20
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v91; // x8
  UserEquipEntity_o **v92; // x21
  int v93; // w8
  __int64 v94; // x26
  unsigned int v95; // w20
  struct UISprite_array *v96; // x8
  struct UISprite_array *v97; // x8
  struct UISprite_array *v98; // x8
  struct UISprite_array *v99; // x8
  const MethodInfo *v100; // x4
  struct UISprite_array *v101; // x8
  const MethodInfo *v102; // x4
  struct UISprite_array *v103; // x8
  int v104; // w8
  const MethodInfo *v105; // x2
  UILabel_o *equip_oldlevelLabel; // x22
  System_String_o *v107; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x22
  System_String_o *v110; // x1
  System_Text_StringBuilder_o *v111; // x22
  __int64 v112; // x23
  System_Int32_array *SkillIdList; // x24
  System_Int32_array *SkillLvList; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v115; // x27
  int v116; // w21
  unsigned __int64 v117; // x20
  int32_t *v118; // x25
  System_String_o *v119; // x28
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  Il2CppObject *v123; // x29
  Il2CppObject *v124; // x0
  System_String_o *v125; // x28
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x23
  UILabel_o *equip_confLabel; // x23
  int64_t oldRecordDamage; // x11
  int64_t bestTurnDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v132; // x21
  bool v133; // w1
  UILabel_o *damage_battleLabel; // x21
  struct UserEquipEntity_o **v135; // [xsp+0h] [xbp-A0h]
  UserEquipEntity_o *v136; // [xsp+8h] [xbp-98h]
  __int64 v137; // [xsp+18h] [xbp-88h]
  int32_t *v138; // [xsp+20h] [xbp-80h]
  int32_t v139; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF966 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserGameMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C21E38(&System_Func_float__int__int__TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__);
    sub_1C21E38(&BattleResultExpComponent___c__DisplayClass61_0_TypeInfo);
    sub_1C21E38(&StringLiteral_17584/*"bit_reward_shine01"*/);
    sub_1C21E38(&StringLiteral_11306/*"RESULT_EQEXP_UPSKILLLV"*/);
    sub_1C21E38(&StringLiteral_11305/*"RESULT_EQEXP_GETSKILL"*/);
    sub_1C21E38(&StringLiteral_17585/*"bit_reward_shine02"*/);
    sub_1C21E38(&StringLiteral_425/*"#,#"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF966 = 1;
  }
  entity = 0LL;
  v17 = sub_1C22084(BattleResultExpComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_134;
  *(_QWORD *)(v17 + 16) = oldGame;
  v26 = v17 + 16;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)oldGame, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v17 + 32) = masterLvInfoArray;
  v33 = (__int64 *)(v17 + 32);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)masterLvInfoArray, v34, v35, v36, v37, v38, v39);
  v40 = *(struct UserGameEntity_o **)(v17 + 16);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.oldGame, (int64_t)v40, v42, v43, v44, v45, v46, v47);
  this->fields.oldEquip = oldEquip;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.oldEquip, (int64_t)oldEquip, v48, v49, v50, v51, v52, v53);
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
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Instance, knockdownResult, v55);
  }
  this->fields.updateFlg = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v56 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_325E324 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v56;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.newGame, (int64_t)v56, v58, v59, v60, v61, v62, v63);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !oldEquip )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v64 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          oldEquip->fields.id,
          (const MethodInfo_325E324 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  p_newEquip = &this->fields.newEquip;
  this->fields.newEquip = (struct UserEquipEntity_o *)v64;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.newEquip, (int64_t)v64, v66, v67, v68, v69, v70, v71);
  newGame = this->fields.newGame;
  if ( !newGame || !*(_QWORD *)v26 )
    goto LABEL_134;
  BattleResultExpComponent__setMasterExp(
    this,
    newGame->fields.exp - *(_QWORD *)(*(_QWORD *)v26 + 88LL),
    *(_QWORD *)(*(_QWORD *)v26 + 88LL),
    *(_DWORD *)(*(_QWORD *)v26 + 80LL),
    v72);
  v74 = oldEquip;
  equip_nameLabel = this->fields.equip_nameLabel;
  v76 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v77 = *(_QWORD *)&v74->fields.equipId.fields.fakeValue;
  v136 = v74;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v141.fields.currentCryptoKey = v76;
  *(_QWORD *)&v141.fields.fakeValue = v77;
  v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v141, 0LL);
  Instance = (__int64)EquipMaster__getEquipName(v78, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Instance, 0LL),
        v79 = v136,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v136->fields.equipId, 0LL),
        !*p_newEquip)
    || (Instance = BattleResultExpComponent__setEquipExp(
                     this,
                     Instance,
                     (*p_newEquip)->fields.exp - v136->fields.exp,
                     v136->fields.exp,
                     v136->fields.lv,
                     v80),
        !*(_QWORD *)v26)
    || (BattleResultExpComponent__setMasterLv(this, *(_DWORD *)(*(_QWORD *)v26 + 80LL), v81),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_134:
    sub_1C22094(Instance, v19);
  }
  if ( !upParamList->max_length )
    goto LABEL_135;
  if ( !*(_QWORD *)v26 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  Instance = (__int64)upParamList->m_Items[0];
  v135 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Instance,
    *(_DWORD *)(*(_QWORD *)v26 + 80LL),
    (*p_newGame)->fields.lv,
    v82);
  v84 = sub_1C22084(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    (System_Func_float__int__int__o *)v84,
    (Il2CppObject *)v17,
    Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__,
    0LL);
  if ( !v84 )
    goto LABEL_134;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v84 + 24))(
               *(_QWORD *)(v84 + 64),
               35LL,
               *(_QWORD *)(v84 + 40),
               -186.0);
  v86 = Instance;
  if ( (int)Instance < 6 )
  {
    v87 = *v33;
    if ( *v33 )
    {
      v88 = 0LL;
      while ( v88 < *(int *)(v87 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_134;
        max_length = lvUpRewardSpArray->max_length;
        if ( v88 < (int)max_length )
        {
          if ( v88 >= max_length )
            goto LABEL_135;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v88],
            (System_String_o *)StringLiteral_17584/*"bit_reward_shine01"*/,
            v85);
          v87 = *v33;
        }
        ++v88;
        if ( !v87 )
          goto LABEL_134;
      }
    }
    v92 = &this->fields.newEquip;
    v104 = 35;
    goto LABEL_67;
  }
  v91 = this->fields.upParamList;
  if ( !v91 )
    goto LABEL_134;
  if ( !v91->max_length )
    goto LABEL_135;
  Instance = (__int64)v91->m_Items[0];
  v92 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__GetComponentsInChildren_object__49967896(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Instance )
    goto LABEL_134;
  v93 = *(_DWORD *)(Instance + 24);
  v94 = Instance;
  if ( v93 >= 1 )
  {
    v95 = 0;
    while ( v95 < v93 )
    {
      Instance = *(_QWORD *)(v94 + 8LL * (int)v95 + 32);
      if ( !Instance )
        goto LABEL_134;
      UILabel__set_fontSize((UILabel_o *)Instance, *(_DWORD *)(Instance + 424) - 2, 0LL);
      v93 = *(_DWORD *)(v94 + 24);
      if ( (int)++v95 >= v93 )
        goto LABEL_49;
    }
    goto LABEL_135;
  }
LABEL_49:
  v96 = this->fields.lvUpRewardSpArray;
  if ( !v96 )
    goto LABEL_134;
  if ( !v96->max_length )
    goto LABEL_135;
  Instance = (__int64)v96->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v97 = this->fields.lvUpRewardSpArray;
  if ( !v97 )
    goto LABEL_134;
  if ( !v97->max_length )
    goto LABEL_135;
  Instance = (__int64)v97->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  v98 = this->fields.lvUpRewardSpArray;
  if ( !v98 )
    goto LABEL_134;
  if ( v98->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v98->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v99 = this->fields.lvUpRewardSpArray;
  if ( !v99 )
    goto LABEL_134;
  if ( v99->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v99->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v84 + 24))(
               *(_QWORD *)(v84 + 64),
               31LL,
               *(_QWORD *)(v84 + 40),
               -186.0);
  v101 = this->fields.lvUpRewardSpArray;
  if ( !v101 )
    goto LABEL_134;
  if ( !v101->max_length )
    goto LABEL_135;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v101->m_Items[0],
    (System_String_o *)StringLiteral_17585/*"bit_reward_shine02"*/,
    v100);
  v103 = this->fields.lvUpRewardSpArray;
  if ( !v103 )
    goto LABEL_134;
  if ( v103->max_length <= 1 )
LABEL_135:
    sub_1C2209C(Instance, v19);
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v103->m_Items[1],
    (System_String_o *)StringLiteral_17585/*"bit_reward_shine02"*/,
    v102);
  v104 = 31;
LABEL_67:
  Instance = (__int64)this->fields.masterLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, v104 * v86 + 134, 0LL);
  if ( !*(_QWORD *)v26 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  this->fields.updateFlg |= *(_QWORD *)(*(_QWORD *)v26 + 88LL) != (*p_newGame)->fields.exp;
  BattleResultExpComponent__setEquipLv(this, v136->fields.lv, v105);
  equip_oldlevelLabel = this->fields.equip_oldlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)v136 + 48, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_134;
  v107 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v107, 0LL);
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_134;
  equip_newlevelLabel = this->fields.equip_newlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_134;
  v110 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v110, 0LL);
  v111 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v111, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillIdList(v136, 0LL);
  if ( !*v92 )
    goto LABEL_134;
  v112 = Instance;
  SkillIdList = UserEquipEntity__getSkillIdList(*v92, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillLvList(v136, 0LL);
  v137 = Instance;
  if ( !*v92 )
    goto LABEL_134;
  SkillLvList = UserEquipEntity__getSkillLvList(*v92, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v112 )
    goto LABEL_134;
  if ( *(int *)(v112 + 24) >= 1 )
  {
    v115 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v116 = 0;
    v117 = 0LL;
    v118 = &SkillIdList->m_Items[1];
    v138 = &SkillLvList->m_Items[1];
    while ( 1 )
    {
      entity = 0LL;
      if ( !SkillIdList )
        goto LABEL_134;
      if ( v117 >= SkillIdList->max_length )
        goto LABEL_135;
      if ( !v115 )
        goto LABEL_134;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v115,
                   &entity,
                   v118[v117],
                   (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( entity && (Instance & 1) != 0 )
      {
        if ( v117 >= *(unsigned int *)(v112 + 24) || v117 >= SkillIdList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v112 + 32 + 4 * v117) != v118[v117] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11305/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v125 = (System_String_o *)Instance;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          Instance = (__int64)System_String__Format(v125, Name, 0LL);
          if ( !v111 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_62277852(v111, (System_String_o *)Instance, 0LL);
LABEL_109:
          v116 += 3;
          goto LABEL_110;
        }
        if ( !v137 )
          goto LABEL_134;
        if ( v117 >= *(unsigned int *)(v137 + 24) )
          goto LABEL_135;
        if ( !SkillLvList )
          goto LABEL_134;
        if ( v117 >= SkillLvList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v137 + 32 + 4 * v117) != v138[v117] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11306/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v119 = (System_String_o *)Instance;
          Instance = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( v117 >= SkillLvList->max_length )
            goto LABEL_135;
          v123 = (Il2CppObject *)Instance;
          v139 = v138[v117];
          v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139, v120, v121, v122);
          Instance = (__int64)System_String__Format_63129848(v119, v123, v124, 0LL);
          if ( !v111 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_62277852(v111, (System_String_o *)Instance, 0LL);
          v79 = v136;
          goto LABEL_109;
        }
      }
LABEL_110:
      if ( (__int64)++v117 >= *(int *)(v112 + 24) )
        goto LABEL_113;
    }
  }
  v116 = 0;
LABEL_113:
  eqConfRoot = this->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_134;
  LODWORD(v142.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.eqConfRoot, 0LL);
  v142.fields.y = (float)v116 * 10.0;
  v142.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v142, 0LL);
  Instance = (__int64)this->fields.eqLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, 22 * v116 + 134, 0LL);
  if ( !v111 )
    goto LABEL_134;
  equip_confLabel = this->fields.equip_confLabel;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v111->klass->vtable._3_ToString.method)(
               v111,
               v111->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_134;
  UILabel__set_text(equip_confLabel, (System_String_o *)Instance, 0LL);
  if ( !*v135 )
    goto LABEL_134;
  bestTurnDamage = this->fields.bestTurnDamage;
  oldRecordDamage = this->fields.oldRecordDamage;
  damage_recordLabel = this->fields.damage_recordLabel;
  this->fields.updateFlg |= v79->fields.exp != (*v135)->fields.exp;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Instance = (__int64)System_Int64__ToString_63926260(
                          (int64_t)&this->fields.oldRecordDamage,
                          (System_String_o *)StringLiteral_425/*"#,#"*/,
                          0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
      damage_battleLabel = this->fields.damage_battleLabel;
      Instance = (__int64)System_Int64__ToString_63926260(
                            (int64_t)&this->fields.bestTurnDamage,
                            (System_String_o *)StringLiteral_425/*"#,#"*/,
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
                v133 = 0;
                goto LABEL_133;
              }
            }
          }
        }
      }
    }
    goto LABEL_134;
  }
  Instance = (__int64)System_Int64__ToString_63926260(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_425/*"#,#"*/,
                        0LL);
  if ( !damage_recordLabel )
    goto LABEL_134;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
  v132 = this->fields.damage_battleLabel;
  Instance = (__int64)System_Int64__ToString_63926260(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_425/*"#,#"*/,
                        0LL);
  if ( !v132 )
    goto LABEL_134;
  UILabel__set_text(v132, (System_String_o *)Instance, 0LL);
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
  v133 = 1;
LABEL_133:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v133, 0LL);
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
  if ( (byte_4BDF96F & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDF96F = 1;
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
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_44372884(v16, 0LL);
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
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v24, 0LL);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0LL )
LABEL_21:
    sub_1C22094(this, isFinish);
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
  struct UserGameEntity_o *oldGame; // x8
  struct BattleResultExpComponent_o *_4__this; // x10
  struct UserGameEntity_o *newGame; // x9
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x10
  int32_t actMax; // w21
  int32_t v12; // w22
  const MethodInfo *v13; // x2
  struct BattleResultExpComponent_o *v14; // x8
  struct BattleResultMasterUpStatusComponent_array *v15; // x8
  const MethodInfo *v16; // x3
  struct BattleResultExpComponent_o *v17; // x8
  struct BattleResultMasterUpStatusComponent_array *v18; // x9
  struct UserGameEntity_o *v19; // x10
  struct UserGameEntity_o *v20; // x8
  int v21; // w22
  struct UserGameEntity_o *v22; // x8
  struct BattleResultExpComponent_o *v23; // x10
  struct UserGameEntity_o *v24; // x9
  struct BattleResultMasterUpStatusComponent_array *v25; // x10
  int32_t costMax; // w21
  int32_t v27; // w23
  const MethodInfo *v28; // x2
  struct BattleResultExpComponent_o *v29; // x8
  struct BattleResultMasterUpStatusComponent_array *v30; // x8
  const MethodInfo *v31; // x3
  struct BattleResultExpComponent_o *v32; // x8
  struct BattleResultMasterUpStatusComponent_array *v33; // x9
  struct UserGameEntity_o *v34; // x10
  struct UserGameEntity_o *v35; // x8
  struct BattleResultExpComponent_o *v36; // x8
  struct BattleResultMasterUpStatusComponent_array *v37; // x8
  struct UserGameEntity_o *v38; // x8
  struct BattleResultExpComponent_o *v39; // x10
  struct UserGameEntity_o *v40; // x9
  struct BattleResultMasterUpStatusComponent_array *v41; // x10
  int32_t friendKeep; // w21
  int32_t v43; // w23
  const MethodInfo *v44; // x2
  struct BattleResultExpComponent_o *v45; // x8
  struct BattleResultMasterUpStatusComponent_array *v46; // x8
  const MethodInfo *v47; // x3
  struct BattleResultExpComponent_o *v48; // x8
  struct BattleResultMasterUpStatusComponent_array *v49; // x9
  struct UserGameEntity_o *v50; // x10
  struct UserGameEntity_o *v51; // x8
  struct BattleResultExpComponent_o *v52; // x8
  struct BattleResultMasterUpStatusComponent_array *v53; // x8
  struct BattleResultExpComponent_o *v54; // x8
  struct BattleResultMasterUpStatusComponent_array *v55; // x8
  EventMaster_o *v56; // x21
  const MethodInfo *v57; // x2
  struct BattleResultExpComponent_o *v58; // x8
  struct BattleResultMasterUpStatusComponent_array *v59; // x8
  BattleResultMasterUpStatusComponent_o *v60; // x8
  System_String_o **v61; // x9
  struct BattleResultExpComponent_o *v62; // x8
  struct BattleResultMasterUpStatusComponent_array *v63; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  __int64 v65; // x8
  il2cpp_array_size_t v66; // w24
  int v67; // w25
  struct BattleResultExpComponent_o *v68; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v70; // x8
  struct UISprite_array *v71; // x8
  struct MasterLvRewardInfo_array *v72; // x9
  UISprite_o *v73; // x22
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v75; // x8
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  struct BattleResultExpComponent_o *v79; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v81; // x9
  MasterLvRewardInfo_o *v82; // x9
  Il2CppObject *v83; // x23
  UILabel_o *v84; // x22
  Il2CppObject *v85; // x0
  struct MasterLvRewardInfo_array *v86; // x8
  int v88; // [xsp+0h] [xbp-80h]
  int32_t num; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4BDF97D & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_2990/*"BATTLE_RESULTEXP_FULLAP"*/);
    sub_1C21E38(&StringLiteral_2989/*"BATTLE_RESULTEXP_FRIENDMAX"*/);
    sub_1C21E38(&StringLiteral_2985/*"BATTLE_RESULTEXP_APMAX"*/);
    sub_1C21E38(&StringLiteral_2991/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/);
    sub_1C21E38(&StringLiteral_2986/*"BATTLE_RESULTEXP_COSTMAX"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)sub_1C21E38(&StringLiteral_25464/*"{0} {1}個"*/);
    byte_4BDF97D = 1;
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
  v12 = newGame->fields.actMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( actMax >= v12 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v21 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v14 = v6->fields.__4__this;
    if ( !v14 )
      goto LABEL_128;
    v15 = v14->fields.upParamList;
    if ( !v15 )
      goto LABEL_128;
    if ( v15->max_length <= 1 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v15->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2985/*"BATTLE_RESULTEXP_APMAX"*/,
      v13);
    v17 = v6->fields.__4__this;
    if ( !v17 )
      goto LABEL_128;
    v18 = v17->fields.upParamList;
    if ( !v18 )
      goto LABEL_128;
    if ( v18->max_length <= 1 )
      goto LABEL_129;
    v19 = v6->fields.oldGame;
    if ( !v19 )
      goto LABEL_128;
    v20 = v17->fields.newGame;
    if ( !v20 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v18->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v19->fields.actMax,
      v20->fields.actMax,
      v16);
    v21 = 1;
  }
  v22 = v6->fields.oldGame;
  if ( !v22 )
    goto LABEL_128;
  v23 = v6->fields.__4__this;
  if ( !v23 )
    goto LABEL_128;
  v24 = v23->fields.newGame;
  if ( !v24 )
    goto LABEL_128;
  v25 = v23->fields.upParamList;
  if ( !v25 )
    goto LABEL_128;
  if ( v25->max_length <= 2 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v25->m_Items[2];
  if ( !this )
    goto LABEL_128;
  costMax = v22->fields.costMax;
  v27 = v24->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( costMax >= v27 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v29 = v6->fields.__4__this;
    if ( !v29 )
      goto LABEL_128;
    v30 = v29->fields.upParamList;
    if ( !v30 )
      goto LABEL_128;
    if ( v30->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v30->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2986/*"BATTLE_RESULTEXP_COSTMAX"*/,
      v28);
    v32 = v6->fields.__4__this;
    if ( !v32 )
      goto LABEL_128;
    v33 = v32->fields.upParamList;
    if ( !v33 )
      goto LABEL_128;
    if ( v33->max_length <= 2 )
      goto LABEL_129;
    v34 = v6->fields.oldGame;
    if ( !v34 )
      goto LABEL_128;
    v35 = v32->fields.newGame;
    if ( !v35 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v33->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v34->fields.costMax,
      v35->fields.costMax,
      v31);
    v36 = v6->fields.__4__this;
    if ( !v36 )
      goto LABEL_128;
    v37 = v36->fields.upParamList;
    if ( !v37 )
      goto LABEL_128;
    if ( v37->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v37->m_Items[2];
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
    v92.fields.y = height - (float)(v21 * baseHeight);
    v92.fields.x = 0.0;
    v92.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v92, 0LL);
    ++v21;
  }
  v38 = v6->fields.oldGame;
  if ( !v38 )
    goto LABEL_128;
  v39 = v6->fields.__4__this;
  if ( !v39 )
    goto LABEL_128;
  v40 = v39->fields.newGame;
  if ( !v40 )
    goto LABEL_128;
  v41 = v39->fields.upParamList;
  if ( !v41 )
    goto LABEL_128;
  if ( v41->max_length <= 3 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v41->m_Items[3];
  if ( !this )
    goto LABEL_128;
  friendKeep = v38->fields.friendKeep;
  v43 = v40->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( friendKeep >= v43 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v45 = v6->fields.__4__this;
    if ( !v45 )
      goto LABEL_128;
    v46 = v45->fields.upParamList;
    if ( !v46 )
      goto LABEL_128;
    if ( v46->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v46->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2989/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      v44);
    v48 = v6->fields.__4__this;
    if ( !v48 )
      goto LABEL_128;
    v49 = v48->fields.upParamList;
    if ( !v49 )
      goto LABEL_128;
    if ( v49->max_length <= 3 )
      goto LABEL_129;
    v50 = v6->fields.oldGame;
    if ( !v50 )
      goto LABEL_128;
    v51 = v48->fields.newGame;
    if ( !v51 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v49->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v50->fields.friendKeep,
      v51->fields.friendKeep,
      v47);
    v52 = v6->fields.__4__this;
    if ( !v52 )
      goto LABEL_128;
    v53 = v52->fields.upParamList;
    if ( !v53 )
      goto LABEL_128;
    if ( v53->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v53->m_Items[3];
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
    v93.fields.y = height - (float)(v21 * baseHeight);
    v93.fields.x = 0.0;
    v93.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v93, 0LL);
    ++v21;
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  v54 = v6->fields.__4__this;
  if ( !v54 )
    goto LABEL_128;
  v55 = v54->fields.upParamList;
  if ( !v55 )
    goto LABEL_128;
  if ( v55->max_length <= 4 )
    goto LABEL_129;
  v56 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v55->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v56 )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)EventMaster__IsBPEnable(v56, 0LL);
  v58 = v6->fields.__4__this;
  if ( !v58 )
    goto LABEL_128;
  v59 = v58->fields.upParamList;
  if ( !v59 )
    goto LABEL_128;
  if ( v59->max_length <= 4 )
    goto LABEL_129;
  v60 = v59->m_Items[4];
  if ( !v60 )
    goto LABEL_128;
  v61 = (System_String_o **)&StringLiteral_2991/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v61 = (System_String_o **)&StringLiteral_2990/*"BATTLE_RESULTEXP_FULLAP"*/;
  BattleResultMasterUpStatusComponent__setTitle(v60, *v61, v57);
  v62 = v6->fields.__4__this;
  if ( !v62 || (v63 = v62->fields.upParamList) == 0LL )
LABEL_128:
    sub_1C22094(this, *(_QWORD *)&baseHeight);
  if ( v63->max_length <= 4 )
LABEL_129:
    sub_1C2209C(this, *(_QWORD *)&baseHeight);
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v63->m_Items[4];
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
  v94.fields.y = height - (float)(v21 * baseHeight);
  v94.fields.x = 0.0;
  v94.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v94, 0LL);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)(unsigned int)(v21 + 1);
  if ( masterLvInfoArray )
  {
    v65 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v65 <= 2 && (int)v65 >= 1 )
    {
      v88 = v21 + 1;
      v66 = 0;
      v67 = baseHeight * (_DWORD)this;
      do
      {
        v68 = v6->fields.__4__this;
        if ( !v68 )
          goto LABEL_128;
        lvUpRewardSpArray = v68->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_128;
        if ( v66 >= lvUpRewardSpArray->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)lvUpRewardSpArray->m_Items[v66];
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
        v95.fields.y = height - (float)v67;
        v95.fields.x = -30.0;
        v95.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v95, 0LL);
        v70 = v6->fields.__4__this;
        if ( !v70 )
          goto LABEL_128;
        v71 = v70->fields.lvUpRewardSpArray;
        if ( !v71 )
          goto LABEL_128;
        if ( v66 >= v71->max_length )
          goto LABEL_129;
        v72 = v6->fields.masterLvInfoArray;
        if ( !v72 )
          goto LABEL_128;
        if ( v66 >= v72->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v72->m_Items[v66];
        if ( !this )
          goto LABEL_128;
        v73 = v71->m_Items[v66];
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)AtlasManager__SetItem(v73, IconImageId, 0LL);
        countText = (System_String_o *)StringLiteral_1/*""*/;
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        v75 = v6->fields.masterLvInfoArray;
        if ( !v75 )
          goto LABEL_128;
        if ( v66 >= v75->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v75->m_Items[v66];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0LL);
        v79 = v6->fields.__4__this;
        if ( !v79 )
          goto LABEL_128;
        lvUpRewardLabelArray = v79->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_128;
        if ( v66 >= lvUpRewardLabelArray->max_length )
          goto LABEL_129;
        v81 = v6->fields.masterLvInfoArray;
        if ( !v81 )
          goto LABEL_128;
        if ( v66 >= v81->max_length )
          goto LABEL_129;
        v82 = v81->m_Items[v66];
        if ( !v82 )
          goto LABEL_128;
        v83 = (Il2CppObject *)nameText;
        v84 = lvUpRewardLabelArray->m_Items[v66];
        num = v82->fields.num;
        v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v76, v77, v78);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)System_String__Format_63129848(
                                                                     (System_String_o *)StringLiteral_25464/*"{0} {1}個"*/,
                                                                     v83,
                                                                     v85,
                                                                     0LL);
        if ( !v84 )
          goto LABEL_128;
        UILabel__set_text(v84, (System_String_o *)this, 0LL);
        v86 = v6->fields.masterLvInfoArray;
        if ( !v86 )
          goto LABEL_128;
        ++v66;
        v67 += baseHeight;
      }
      while ( (signed int)v66 < (signed int)v86->max_length );
      LODWORD(this) = v88 + v66;
    }
  }
  return (int)this;
}