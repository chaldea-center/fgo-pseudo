void BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = (struct UnityEngine_Color_o)xmmword_E92CE0;
  this->fields.record_intactColor = _Q0;
  this->fields.damage_renewalColor = _Q0;
  this->fields.damage_intactColor = (struct UnityEngine_Color_o)xmmword_E92B70;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_593C276 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultExpComponent_endClose__);
    sub_21FFC50(&BattleWindowComponent_EndCall_TypeInfo);
    byte_593C276 = 1;
  }
  window = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_21FFEBC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0);
  if ( !window )
    sub_21FFECC(v5, v6);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._12_Close.methodPtr)(
    window,
    v4,
    window->klass->vtable._12_Close.method);
}


void BattleResultExpComponent__CreateRewardEffect(
        BattleResultExpComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultExpComponent_o *v8; // x20
  __int64 v9; // x1
  Il2CppObject *Object_object__58323140; // x21
  BattleResultExpComponent_o *v11; // x21
  BattleResultExpComponent_o *v12; // x22
  BattleResultExpComponent_o *v13; // x22
  BattleResultExpComponent_o *v14; // x22
  int m_CancellationTokenSource; // w8
  BattleResultExpComponent_o *v16; // x21
  __int64 v17; // x22

  v8 = this;
  if ( (byte_593C272 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultExpComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C272 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              data,
                              effectName,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__58323140,
                                         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v11 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !targetIcon )
    goto LABEL_23;
  v12 = this;
  this = (BattleResultExpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0);
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v12, (UnityEngine_Transform_o *)this, 0);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
  v13 = this;
  if ( !byte_5931940 )
  {
    this = (BattleResultExpComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
  v14 = this;
  if ( !byte_5931945 )
  {
    this = (BattleResultExpComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v14 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v14,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                         (UnityEngine_GameObject_o *)v11,
                                         (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v16 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= m_CancellationTokenSource )
        sub_21FFED4(this);
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v16->fields.parentComp + v17);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0);
      m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
      if ( (int)++v17 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_21FFECC(this, data);
  }
LABEL_21:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v16,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  BattleWindowComponent_o *window; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v14; // x1
  System_String_o *v15; // x20
  System_String_o *v16; // x20

  if ( (byte_593C26E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_2948/*"BATTLE_RESULTEXP_MASTERTITLE"*/);
    sub_21FFC50(&StringLiteral_2943/*"BATTLE_RESULTEXP_EQUIPTITLE"*/);
    byte_593C26E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.effectUIList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = this->fields.masterupwindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.masterupwindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = this->fields.equipupwindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.equipupwindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = this->fields.damageRecordWindow;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.damageRecordWindow;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.knockdownRecordWindow;
    if ( !window )
      goto LABEL_33;
    ((void (__fastcall *)(BattleWindowComponent_o *, void *))window->klass[1]._1.image)(
      window,
      window->klass[1]._1.gc_desc);
  }
  window = (BattleWindowComponent_o *)this->fields.masterLevelupRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (BattleWindowComponent_o *)this->fields.equipLevelupRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (BattleWindowComponent_o *)this->fields.damageRecordRoot;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2948/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0);
  if ( !window )
    goto LABEL_33;
  v15 = (System_String_o *)window;
  if ( !System_String__Equals_75473208((System_String_o *)window, (System_String_o *)StringLiteral_2948/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v15, 0);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2943/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0);
  if ( !window )
LABEL_33:
    sub_21FFECC(window, v10);
  v16 = (System_String_o *)window;
  if ( !System_String__Equals_75473208((System_String_o *)window, (System_String_o *)StringLiteral_2943/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v16, 0);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
LABEL_32:
  this->fields.bondsCountUp = 1;
}


bool BattleResultExpComponent__IsResultEquipMaxExpDisp(
        BattleResultExpComponent_o *this,
        int32_t oldLv,
        int32_t newLv,
        UserExpMaster_o *userExpMst,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int64_t klass_low; // x21
  int32_t monitor; // w19
  int32_t monitor_high; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593C287 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C287 = 1;
  }
  entity = 0;
  if ( oldLv == newLv )
    return 0;
  if ( !userExpMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserExpMaster___),
          (userExpMst = (UserExpMaster_o *)Instance) == 0) )
    {
LABEL_14:
      sub_21FFECC(Instance, v9);
    }
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)userExpMst,
                               &entity,
                               newLv + 1,
                               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_14;
  klass_low = SLODWORD(entity[4].klass);
  monitor = (int32_t)entity[3].monitor;
  monitor_high = HIDWORD(entity[3].monitor);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
  return !CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0);
}


void BattleResultExpComponent__Open(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  void *monitor; // x8
  __int64 naturalAligment; // x11
  void *v7; // x24
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t v11; // w20
  BattleData_o *v12; // x8
  bool IsUseOverwriteMasterImage; // w21
  __int64 v14; // x23
  __int64 v15; // x22
  System_Nullable_Vector3__o ResultOverwriteMasterImagePosition; // kr00_16
  __int64 v17; // x8
  UnityEngine_GameObject_o *figureRoot; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Object_array *v25; // x21
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject *v35; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *v49; // x22
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  Il2CppObject *v63; // x22
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  int32_t v70; // w1
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  Il2CppObject *v77; // x22
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  int32_t v84; // w1
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  int32_t v91; // w1
  __int64 v92; // x1
  System_Collections_Hashtable_o *v93; // x0
  __int64 v94; // x0
  System_Nullable_Vector3__o offset; // [xsp+0h] [xbp-70h]
  char v96[4]; // [xsp+28h] [xbp-48h] BYREF
  int v97; // [xsp+2Ch] [xbp-44h] BYREF
  int v98; // [xsp+38h] [xbp-38h] BYREF
  int32_t overwriteImageId; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16

  if ( (byte_593C275 & 1) == 0 )
  {
    sub_21FFC50(&BattleRootComponent_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_26191/*"x"*/);
    sub_21FFC50(&StringLiteral_5640/*"END_OPEN"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23520/*"oncompletetarget"*/);
    sub_21FFC50(&StringLiteral_19865/*"endMoveFigure"*/);
    sub_21FFC50(&StringLiteral_21963/*"islocal"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593C275 = 1;
  }
  overwriteImageId = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_60;
  monitor = gameObject[1].monitor;
  if ( monitor
    && (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)naturalAligment) )
  {
    v7 = *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo
       ? gameObject[1].monitor
       : 0LL;
  }
  else
  {
    v7 = 0;
  }
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_60;
  v9 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v100.fields.currentCryptoKey = v9;
  *(_QWORD *)&v100.fields.fakeValue = v10;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v100, 0);
  if ( !v7 )
    goto LABEL_60;
  v11 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)v7 + 8);
  if ( !gameObject )
    goto LABEL_60;
  gameObject = (UnityEngine_GameObject_o *)BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0);
  v12 = (BattleData_o *)*((_QWORD *)v7 + 8);
  overwriteImageId = (int)gameObject;
  if ( !v12 )
    goto LABEL_60;
  IsUseOverwriteMasterImage = BattleData__IsUseOverwriteMasterImage(v12, (int32_t)gameObject, 0);
  v14 = 0;
  v15 = 0;
  if ( IsUseOverwriteMasterImage )
  {
    gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)v7 + 8);
    if ( !gameObject )
      goto LABEL_60;
    ResultOverwriteMasterImagePosition = BattleData__GetResultOverwriteMasterImagePosition(
                                           (BattleData_o *)gameObject,
                                           0);
    v4 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.value.fields.y;
    v15 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.hasValue;
    v14 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.value.fields.y;
  }
  gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)v7 + 8);
  if ( !gameObject )
    goto LABEL_60;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0);
  if ( overwriteImageId != -1 )
  {
    v17 = *((_QWORD *)v7 + 8);
    if ( !v17 )
      goto LABEL_60;
    *(_QWORD *)&offset.fields.hasValue = v15;
    *(_QWORD *)&offset.fields.value.fields.y = v14;
    MasterFigureManagerOld__CreatePrefab_47603220(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v17 + 416),
      v11,
      60,
      0,
      overwriteImageId,
      offset,
      IsUseOverwriteMasterImage,
      0);
  }
  figureRoot = this->fields.figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_21FFD10(object___TypeInfo, 10);
  if ( !gameObject )
LABEL_60:
    sub_21FFECC(gameObject, v4);
  v25 = (System_Object_array *)gameObject;
  v26 = (UnityEngine_GameObject_o *)StringLiteral_26191/*"x"*/;
  if ( StringLiteral_26191/*"x"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_26191/*"x"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( !LODWORD(v25->max_length) )
    goto LABEL_61;
  v28 = (int)StringLiteral_26191/*"x"*/;
  v25->m_Items[0] = (Il2CppObject *)StringLiteral_26191/*"x"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v25->m_Items, v28, v19, v20, v21, v22, v23, v24);
  v98 = -1018691584;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C0A0, &v98);
  v35 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_21FFDA4(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( (v25->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_61;
  v25->m_Items[1] = v35;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->m_Items[1], (int32_t)v35, v29, v30, v31, v32, v33, v34);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_25318/*"time"*/;
  if ( StringLiteral_25318/*"time"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_25318/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( LODWORD(v25->max_length) <= 2 )
    goto LABEL_61;
  v42 = StringLiteral_25318/*"time"*/;
  v25->m_Items[2] = (Il2CppObject *)StringLiteral_25318/*"time"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->m_Items[2], v42, v36, v37, v38, v39, v40, v41);
  v97 = 1061997773;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C0A0, &v97);
  v49 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_21FFDA4(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( (v25->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_61;
  v25->m_Items[3] = v49;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->m_Items[3], (int32_t)v49, v43, v44, v45, v46, v47, v48);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_21963/*"islocal"*/;
  if ( StringLiteral_21963/*"islocal"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_21963/*"islocal"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( LODWORD(v25->max_length) <= 4 )
    goto LABEL_61;
  v56 = StringLiteral_21963/*"islocal"*/;
  v25->m_Items[4] = (Il2CppObject *)StringLiteral_21963/*"islocal"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->m_Items[4], v56, v50, v51, v52, v53, v54, v55);
  v96[0] = 1;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C050, v96);
  v63 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_21FFDA4(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( LODWORD(v25->max_length) <= 5 )
    goto LABEL_61;
  v25->m_Items[5] = v63;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->m_Items[5], (int32_t)v63, v57, v58, v59, v60, v61, v62);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_23520/*"oncompletetarget"*/;
  if ( StringLiteral_23520/*"oncompletetarget"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_23520/*"oncompletetarget"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( LODWORD(v25->max_length) <= 6 )
    goto LABEL_61;
  v70 = StringLiteral_23520/*"oncompletetarget"*/;
  v25->m_Items[6] = (Il2CppObject *)StringLiteral_23520/*"oncompletetarget"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->m_Items[6], v70, v64, v65, v66, v67, v68, v69);
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v77 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_21FFDA4(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( (v25->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_61;
  v25->m_Items[7] = v77;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->m_Items[7], (int32_t)v77, v71, v72, v73, v74, v75, v76);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_23518/*"oncomplete"*/;
  if ( StringLiteral_23518/*"oncomplete"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_23518/*"oncomplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( LODWORD(v25->max_length) <= 8 )
    goto LABEL_61;
  v84 = StringLiteral_23518/*"oncomplete"*/;
  v25->m_Items[8] = (Il2CppObject *)StringLiteral_23518/*"oncomplete"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->m_Items[8], v84, v78, v79, v80, v81, v82, v83);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_19865/*"endMoveFigure"*/;
  if ( StringLiteral_19865/*"endMoveFigure"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_19865/*"endMoveFigure"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_62:
      v94 = sub_21FFEF0(v26, v27);
      sub_21FFD90(v94, 0);
    }
  }
  if ( LODWORD(v25->max_length) <= 9 )
LABEL_61:
    sub_21FFED4(v26);
  v91 = StringLiteral_19865/*"endMoveFigure"*/;
  v25->m_Items[9] = (Il2CppObject *)StringLiteral_19865/*"endMoveFigure"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->m_Items[9], v91, v85, v86, v87, v88, v89, v90);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v92);
  v93 = iTween__Hash(v25, 0);
  iTween__MoveFrom_75081656(figureRoot, v93, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.window;
  if ( !gameObject )
    goto LABEL_60;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.generic_class)(
    gameObject,
    0,
    gameObject->klass[1]._1.typeMetadataHandle);
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_60;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5640/*"END_OPEN"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleResultExpComponent__SetEquipExp(
        BattleResultExpComponent_o *this,
        int32_t equipId,
        int32_t getExp,
        int32_t nowExp,
        int32_t startLevel,
        const MethodInfo *method)
{
  __int64 v11; // x28
  int64_t defaultExp; // x8
  UILabel_o *equip_getexpLabel; // x23
  System_String_o *v14; // x24
  Il2CppObject *v15; // x25
  Il2CppObject *v16; // x0
  System_String_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x0
  EquipExpMaster_o *v20; // x25
  int32_t Level; // w22
  int32_t LevelMax; // w23
  struct UISprite_o *equip_nextSprite; // x8
  System_String_o *v24; // x24
  __int64 v25; // x1
  UILabel_o *equip_atexpLabel; // x26
  const MethodInfo *v27; // x2
  int32_t exp; // w21
  float value; // s8
  float v30; // s0
  int v32; // [xsp+4h] [xbp-7Ch] BYREF
  int64_t v33; // [xsp+8h] [xbp-78h] BYREF
  EquipExpEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t v35; // [xsp+1Ch] [xbp-64h] BYREF

  v35 = getExp;
  if ( (byte_593C274 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_11590/*"RESULT_GET_EQUIP_EXP_ADD"*/);
    sub_21FFC50(&StringLiteral_9604/*"N0"*/);
    sub_21FFC50(&StringLiteral_11580/*"RESULT_EQUIP_MAXEXP"*/);
    sub_21FFC50(&StringLiteral_863/*"+ {0}"*/);
    byte_593C274 = 1;
  }
  v11 = getExp;
  defaultExp = this->fields.defaultExp;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v33 = 0;
  entity = 0;
  v32 = 0;
  if ( v11 - defaultExp < 1 )
  {
    v19 = (Il2CppObject *)System_Int32__ToString_76925352((int32_t)&v35, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
    Instance = System_String__Format((System_String_o *)StringLiteral_863/*"+ {0}"*/, v19, 0);
    if ( !equip_getexpLabel )
      goto LABEL_33;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&equipId);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11590/*"RESULT_GET_EQUIP_EXP_ADD"*/, 0);
    v15 = (Il2CppObject *)System_Int64__ToString_76930560(
                            (int64_t)&this->fields.defaultExp,
                            (System_String_o *)StringLiteral_9604/*"N0"*/,
                            0);
    v33 = v11 - this->fields.defaultExp;
    v16 = (Il2CppObject *)System_Int64__ToString_76930560((int64_t)&v33, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
    Instance = System_String__Format_75484576(v14, v15, v16, 0);
    if ( !equip_getexpLabel )
      goto LABEL_33;
  }
  UILabel__set_text(equip_getexpLabel, Instance, 0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_33;
  v20 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowExp, startLevel, 0);
  LevelMax = EquipExpMaster__getLevelMax(v20, equipId, 0);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v20, equipId, Level, 0);
  equip_nextSprite = this->fields.equip_nextSprite;
  v24 = Instance;
  if ( Level == LevelMax )
  {
    if ( !equip_nextSprite )
      goto LABEL_33;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11580/*"RESULT_EQUIP_MAXEXP"*/, 0);
    if ( !equip_atexpLabel )
      goto LABEL_33;
  }
  else
  {
    if ( !equip_nextSprite )
      goto LABEL_33;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0);
    if ( !v24 )
      goto LABEL_33;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v32 = LODWORD(v24[1].klass) - nowExp;
    Instance = System_Int32__ToString_76925352((int32_t)&v32, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
    if ( !equip_atexpLabel )
      goto LABEL_33;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0);
  BattleResultExpComponent__setEquipLv(this, Level, v27);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v20, &entity, equipId, Level - 1, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_33;
    exp = entity->fields.exp;
  }
  else
  {
    exp = 0;
  }
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
LABEL_33:
    sub_21FFECC(Instance, v18);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( Level == LevelMax )
  {
    v30 = 1.0;
    if ( !Instance )
      goto LABEL_33;
  }
  else
  {
    if ( !v24 || !Instance )
      goto LABEL_33;
    v30 = 1.0 - (float)((float)(LODWORD(v24[1].klass) - nowExp) / (float)(LODWORD(v24[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v30, 0);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_33;
  return value != UIProgressBar__get_value((UIProgressBar_o *)Instance, 0);
}


bool BattleResultExpComponent__SetMasterExp(
        BattleResultExpComponent_o *this,
        int64_t getExp,
        int64_t nowExp,
        int32_t startLevel,
        const MethodInfo *method)
{
  UILabel_o *mst_getexpLabel; // x23
  int64_t v10; // x8
  System_String_o *v11; // x24
  Il2CppObject *v12; // x25
  Il2CppObject *v13; // x0
  System_String_o *mst_slider; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x0
  float value; // s8
  UserExpMaster_o *v18; // x22
  int32_t LevelMax; // w23
  __int64 v20; // x1
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v22; // x2
  bool v23; // w21
  int32_t Level; // w24
  System_String_o *v25; // x25
  UILabel_o *v26; // x26
  char *monitor; // x8
  float v28; // s0
  BattleResultExpComponent_o *v29; // x0
  const MethodInfo *v30; // x4
  __int64 v31; // x1
  UILabel_o *v32; // x20
  Il2CppObject *v34; // [xsp+0h] [xbp-80h] BYREF
  int64_t v35; // [xsp+8h] [xbp-78h] BYREF
  int64_t v36; // [xsp+18h] [xbp-68h] BYREF

  v36 = getExp;
  if ( (byte_593C273 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_11591/*"RESULT_GET_MASTER_EXP_ADD"*/);
    sub_21FFC50(&StringLiteral_9604/*"N0"*/);
    sub_21FFC50(&StringLiteral_11580/*"RESULT_EQUIP_MAXEXP"*/);
    sub_21FFC50(&StringLiteral_863/*"+ {0}"*/);
    byte_593C273 = 1;
  }
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v10 = getExp - this->fields.defaultExp;
  v34 = 0;
  v35 = 0;
  if ( v10 < 1 )
  {
    v16 = (Il2CppObject *)System_Int64__ToString_76930560((int64_t)&v36, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
    mst_slider = System_String__Format((System_String_o *)StringLiteral_863/*"+ {0}"*/, v16, 0);
    if ( !mst_getexpLabel )
      goto LABEL_37;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, getExp);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11591/*"RESULT_GET_MASTER_EXP_ADD"*/, 0);
    v12 = (Il2CppObject *)System_Int64__ToString_76930560(
                            (int64_t)&this->fields.defaultExp,
                            (System_String_o *)StringLiteral_9604/*"N0"*/,
                            0);
    v35 = getExp - this->fields.defaultExp;
    v13 = (Il2CppObject *)System_Int64__ToString_76930560((int64_t)&v35, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
    mst_slider = System_String__Format_75484576(v11, v12, v13, 0);
    if ( !mst_getexpLabel )
      goto LABEL_37;
  }
  UILabel__set_text(mst_getexpLabel, mst_slider, 0);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_37;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0);
  mst_slider = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mst_slider )
    goto LABEL_37;
  mst_slider = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)mst_slider,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !mst_slider )
    goto LABEL_37;
  v18 = (UserExpMaster_o *)mst_slider;
  LevelMax = UserExpMaster__GetLevelMax((UserExpMaster_o *)mst_slider, 0);
  mst_slider = (System_String_o *)this->fields.mst_nextSprite;
  if ( LevelMax == startLevel )
  {
    if ( !mst_slider )
      goto LABEL_37;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11580/*"RESULT_EQUIP_MAXEXP"*/, 0);
    if ( !mst_atexpLabel )
      goto LABEL_37;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_37;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0);
    v23 = 0;
    Level = startLevel;
  }
  else
  {
    if ( !mst_slider )
      goto LABEL_37;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 1, 0);
    Level = UserExpMaster__getLevel(v18, nowExp, startLevel, 0);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                                      Level,
                                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_37;
    v25 = mst_slider;
    v26 = this->fields.mst_atexpLabel;
    v35 = (int64_t)mst_slider[1].klass - nowExp;
    mst_slider = System_Int64__ToString_76930560((int64_t)&v35, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
    if ( !v26 )
      goto LABEL_37;
    UILabel__set_text(v26, mst_slider, 0);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                                      &v34,
                                      Level - 1,
                                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    monitor = 0;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_37;
      monitor = (char *)v34[1].monitor;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v28 = 1.0 - (double)((unsigned __int64)v25[1].klass - nowExp) / (double)((char *)v25[1].klass - monitor),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v28, 0),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0) )
    {
LABEL_37:
      sub_21FFECC(mst_slider, v15);
    }
    v23 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0);
  }
  BattleResultExpComponent__setMasterLv(this, Level, v22);
  if ( Level == LevelMax || BattleResultExpComponent__IsResultEquipMaxExpDisp(v29, startLevel, Level, v18, v30) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( !mst_slider )
      goto LABEL_37;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0);
    v32 = this->fields.mst_atexpLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11580/*"RESULT_EQUIP_MAXEXP"*/, 0);
    if ( !v32 )
      goto LABEL_37;
    UILabel__set_text(v32, mst_slider, 0);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_37;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0);
  }
  return v23;
}


void BattleResultExpComponent__SetResultData(
        BattleResultExpComponent_o *this,
        UserGameEntity_o *oldGameEntity,
        UserEquipEntity_o *oldEquipEntity,
        MasterLvRewardInfo_array *masterLvInfoArray,
        AssetData_o *resultAssetData,
        int64_t maxTurnDamage,
        int64_t oldRecord,
        QuestKnockdownResult_o *knockdownResult,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v19; // x22
  __int64 Master_object; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 *v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  UnityEngine_Object_c *v48; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x26
  DataManager_c *v50; // x0
  int v51; // w8
  int32_t playerExp; // w8
  const MethodInfo_476E8C0 *v53; // x0
  struct UserGameEntity_o *oldGame; // x8
  Il2CppObject *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct UserEquipEntity_o *oldEquip; // x8
  Il2CppObject *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  const MethodInfo *v70; // x4
  struct UserGameEntity_o *newGame; // x8
  struct UserGameEntity_o *v72; // x9
  struct UserEquipEntity_o *v73; // x8
  __int64 v74; // x24
  __int64 v75; // x25
  UILabel_o *equip_nameLabel; // x23
  int32_t v77; // w0
  struct UserEquipEntity_o *v78; // x8
  const MethodInfo *v79; // x5
  struct UserEquipEntity_o *newEquip; // x8
  struct UserEquipEntity_o *v81; // x9
  const MethodInfo *v82; // x2
  struct UserGameEntity_o *v83; // x8
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  struct UserGameEntity_o *v85; // x9
  struct UserGameEntity_o *v86; // x10
  __int64 v87; // x23
  const MethodInfo *v88; // x4
  int v89; // w22
  __int64 v90; // x8
  signed __int64 v91; // x24
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length_low; // x10
  struct BattleResultMasterUpStatusComponent_array *v94; // x8
  int v95; // w8
  __int64 v96; // x21
  __int64 v97; // x24
  struct UISprite_array *v98; // x8
  struct UISprite_array *v99; // x8
  struct UISprite_array *v100; // x8
  struct UISprite_array *v101; // x8
  const MethodInfo *v102; // x4
  struct UISprite_array *v103; // x8
  const MethodInfo *v104; // x4
  struct UISprite_array *v105; // x8
  int v106; // w8
  const MethodInfo *v107; // x2
  struct UserGameEntity_o *v108; // x8
  struct UserGameEntity_o *v109; // x9
  bool v110; // zf
  struct UserEquipEntity_o *v111; // x8
  bool v112; // w9
  struct UserEquipEntity_o *v113; // x8
  UILabel_o *equip_oldlevelLabel; // x20
  System_String_o *v115; // x1
  struct UserEquipEntity_o *v116; // x8
  UILabel_o *equip_newlevelLabel; // x20
  System_String_o *v118; // x1
  System_Text_StringBuilder_o *v119; // x20
  __int64 v120; // x21
  __int64 v121; // x22
  __int64 v122; // x27
  System_Int32_array *SkillLvList; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v124; // x25
  int v125; // w29
  unsigned __int64 v126; // x28
  __int64 v127; // x23
  System_Text_StringBuilder_o *v128; // x29
  System_Int32_array *v129; // x20
  __int64 v130; // x24
  System_String_o *v131; // x26
  Il2CppObject *v132; // x27
  Il2CppObject *v133; // x0
  System_Text_StringBuilder_o *v134; // x26
  System_String_o *v135; // x26
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x21
  UILabel_o *equip_confLabel; // x21
  struct UserEquipEntity_o *v139; // x8
  struct UserEquipEntity_o *v140; // x9
  UILabel_o *damage_recordLabel; // x20
  int64_t oldRecordDamage; // x8
  int64_t bestTurnDamage; // x9
  char v144; // w11
  System_String_o *v145; // x1
  UILabel_o *v146; // x20
  bool v147; // w1
  UILabel_o *damage_battleLabel; // x20
  int v149; // [xsp+Ch] [xbp-94h]
  __int64 v150; // [xsp+10h] [xbp-90h]
  int32_t *m_Items; // [xsp+18h] [xbp-88h]
  int32_t v152; // [xsp+2Ch] [xbp-74h] BYREF
  Il2CppObject *v153; // [xsp+30h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593C271 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserGameMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_21FFC50(&System_Func_float__int__int__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&Method_BattleResultExpComponent___c__DisplayClass62_0__SetResultData_b__0__);
    sub_21FFC50(&BattleResultExpComponent___c__DisplayClass62_0_TypeInfo);
    sub_21FFC50(&StringLiteral_17967/*"bit_reward_shine01"*/);
    sub_21FFC50(&StringLiteral_11579/*"RESULT_EQEXP_UPSKILLLV"*/);
    sub_21FFC50(&StringLiteral_11578/*"RESULT_EQEXP_GETSKILL"*/);
    sub_21FFC50(&StringLiteral_17968/*"bit_reward_shine02"*/);
    sub_21FFC50(&StringLiteral_421/*"#,#"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C271 = 1;
  }
  v153 = 0;
  entity = 0;
  v19 = sub_21FFEBC(BattleResultExpComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_45;
  *(_QWORD *)(v19 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 16), (int32_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = masterLvInfoArray;
  v28 = (__int64 *)(v19 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 24), (int32_t)masterLvInfoArray, v29, v30, v31, v32, v33, v34);
  this->fields.oldGame = oldGameEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.oldGame,
    (int32_t)oldGameEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.oldEquip = oldEquipEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.oldEquip,
    (int32_t)oldEquipEntity,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v48 = UnityEngine_Object_TypeInfo;
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  this->fields.bestTurnDamage = maxTurnDamage;
  this->fields.oldRecordDamage = oldRecord;
  if ( !*(&v48->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v48, v47);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0, 0) )
  {
    Master_object = (__int64)this->fields.knockdownRecordWindow;
    if ( !Master_object )
      goto LABEL_45;
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Master_object, knockdownResult, 0);
  }
  v50 = DataManager_TypeInfo;
  v51 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.updateFlg = 0;
  if ( !v51 )
    j_il2cpp_runtime_class_init_0(v50, v21);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_45;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, phase, 0);
  playerExp = (int)entity;
  if ( entity )
    playerExp = entity->fields.playerExp;
  v53 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.defaultExp = playerExp;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(v53);
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserGameMaster___);
  oldGame = this->fields.oldGame;
  if ( !oldGame )
    goto LABEL_45;
  if ( !Master_object )
    goto LABEL_45;
  v55 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          oldGame->fields.userId,
          (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  this->fields.newGame = (struct UserGameEntity_o *)v55;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.newGame, (int32_t)v55, v56, v57, v58, v59, v60, v61);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_45;
  if ( !Master_object )
    goto LABEL_45;
  v63 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          oldEquip->fields.id,
          (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  this->fields.newEquip = (struct UserEquipEntity_o *)v63;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.newEquip, (int32_t)v63, v64, v65, v66, v67, v68, v69);
  newGame = this->fields.newGame;
  if ( !newGame )
    goto LABEL_45;
  v72 = this->fields.oldGame;
  if ( !v72 )
    goto LABEL_45;
  Master_object = BattleResultExpComponent__SetMasterExp(
                    this,
                    newGame->fields.exp - v72->fields.exp,
                    v72->fields.exp,
                    v72->fields.lv,
                    v70);
  v73 = this->fields.oldEquip;
  if ( !v73 )
    goto LABEL_45;
  v74 = *(_QWORD *)&v73->fields.equipId.fields.currentCryptoKey;
  v75 = *(_QWORD *)&v73->fields.equipId.fields.fakeValue;
  equip_nameLabel = this->fields.equip_nameLabel;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
  *(_QWORD *)&v155.fields.currentCryptoKey = v74;
  *(_QWORD *)&v155.fields.fakeValue = v75;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v155, 0);
  Master_object = (__int64)EquipMaster__getEquipName(v77, 0);
  if ( !equip_nameLabel )
    goto LABEL_45;
  UILabel__set_text(equip_nameLabel, (System_String_o *)Master_object, 0);
  v78 = this->fields.oldEquip;
  if ( !v78
    || (Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v78->fields.equipId, 0),
        (newEquip = this->fields.newEquip) == 0)
    || (v81 = this->fields.oldEquip) == 0
    || (Master_object = BattleResultExpComponent__SetEquipExp(
                          this,
                          Master_object,
                          newEquip->fields.exp - v81->fields.exp,
                          v81->fields.exp,
                          v81->fields.lv,
                          v79),
        (v83 = this->fields.oldGame) == 0)
    || (BattleResultExpComponent__setMasterLv(this, v83->fields.lv, v82), (upParamList = this->fields.upParamList) == 0) )
  {
LABEL_45:
    sub_21FFECC(Master_object, v21);
  }
  if ( !LODWORD(upParamList->max_length) )
    goto LABEL_153;
  v85 = this->fields.oldGame;
  if ( !v85 )
    goto LABEL_45;
  v86 = this->fields.newGame;
  if ( !v86 )
    goto LABEL_45;
  Master_object = (__int64)upParamList->m_Items[0];
  if ( !Master_object )
    goto LABEL_45;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Master_object,
    v85->fields.lv,
    v86->fields.lv,
    0);
  v87 = sub_21FFEBC(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    (System_Func_float__int__int__o *)v87,
    (Il2CppObject *)v19,
    Method_BattleResultExpComponent___c__DisplayClass62_0__SetResultData_b__0__,
    0);
  if ( !v87 )
    goto LABEL_45;
  Master_object = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v87 + 24))(
                    *(_QWORD *)(v87 + 64),
                    35,
                    *(_QWORD *)(v87 + 40),
                    -186.0);
  v89 = Master_object;
  if ( (int)Master_object < 6 )
  {
    v90 = *v28;
    if ( *v28 )
    {
      v91 = 0;
      while ( v91 < *(int *)(v90 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_45;
        max_length_low = LODWORD(lvUpRewardSpArray->max_length);
        if ( v91 < (int)max_length_low )
        {
          if ( v91 >= max_length_low )
            goto LABEL_153;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v91],
            (System_String_o *)StringLiteral_17967/*"bit_reward_shine01"*/,
            v88);
          v90 = *v28;
        }
        ++v91;
        if ( !v90 )
          goto LABEL_45;
      }
    }
    v106 = 35;
    goto LABEL_75;
  }
  v94 = this->fields.upParamList;
  if ( !v94 )
    goto LABEL_45;
  if ( !LODWORD(v94->max_length) )
    goto LABEL_153;
  Master_object = (__int64)v94->m_Items[0];
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (__int64)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                             (UnityEngine_Component_o *)Master_object,
                             (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Master_object )
    goto LABEL_45;
  v95 = *(_DWORD *)(Master_object + 24);
  v96 = Master_object;
  if ( v95 >= 1 )
  {
    v97 = 0;
    while ( (unsigned int)v97 < v95 )
    {
      Master_object = *(_QWORD *)(v96 + 32 + 8 * v97);
      if ( !Master_object )
        goto LABEL_45;
      UILabel__set_fontSize((UILabel_o *)Master_object, *(_DWORD *)(Master_object + 424) - 2, 0);
      v95 = *(_DWORD *)(v96 + 24);
      if ( (int)++v97 >= v95 )
        goto LABEL_57;
    }
    goto LABEL_153;
  }
LABEL_57:
  v98 = this->fields.lvUpRewardSpArray;
  if ( !v98 )
    goto LABEL_45;
  if ( !LODWORD(v98->max_length) )
    goto LABEL_153;
  Master_object = (__int64)v98->m_Items[0];
  if ( !Master_object )
    goto LABEL_45;
  UIWidget__set_width((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 168) - 5, 0);
  v99 = this->fields.lvUpRewardSpArray;
  if ( !v99 )
    goto LABEL_45;
  if ( !LODWORD(v99->max_length) )
    goto LABEL_153;
  Master_object = (__int64)v99->m_Items[0];
  if ( !Master_object )
    goto LABEL_45;
  UIWidget__set_height((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 172) - 5, 0);
  v100 = this->fields.lvUpRewardSpArray;
  if ( !v100 )
    goto LABEL_45;
  if ( (v100->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_153;
  Master_object = (__int64)v100->m_Items[1];
  if ( !Master_object )
    goto LABEL_45;
  UIWidget__set_width((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 168) - 5, 0);
  v101 = this->fields.lvUpRewardSpArray;
  if ( !v101 )
    goto LABEL_45;
  if ( (v101->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_153;
  Master_object = (__int64)v101->m_Items[1];
  if ( !Master_object )
    goto LABEL_45;
  UIWidget__set_height((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 172) - 5, 0);
  Master_object = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v87 + 24))(
                    *(_QWORD *)(v87 + 64),
                    31,
                    *(_QWORD *)(v87 + 40),
                    -186.0);
  v103 = this->fields.lvUpRewardSpArray;
  if ( !v103 )
    goto LABEL_45;
  if ( !LODWORD(v103->max_length) )
    goto LABEL_153;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v103->m_Items[0],
    (System_String_o *)StringLiteral_17968/*"bit_reward_shine02"*/,
    v102);
  v105 = this->fields.lvUpRewardSpArray;
  if ( !v105 )
    goto LABEL_45;
  if ( (v105->max_length & 0xFFFFFFFE) == 0 )
LABEL_153:
    sub_21FFED4(Master_object);
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v105->m_Items[1],
    (System_String_o *)StringLiteral_17968/*"bit_reward_shine02"*/,
    v104);
  v106 = 31;
LABEL_75:
  Master_object = (__int64)this->fields.masterLevelwindowSprite;
  if ( !Master_object )
    goto LABEL_45;
  UIWidget__set_height((UIWidget_o *)Master_object, v106 * v89 + 134, 0);
  v108 = this->fields.oldGame;
  if ( !v108 )
    goto LABEL_45;
  v109 = this->fields.newGame;
  if ( !v109 )
    goto LABEL_45;
  v110 = v108->fields.exp == v109->fields.exp;
  v111 = this->fields.oldEquip;
  v112 = !v110;
  this->fields.updateFlg |= v112;
  if ( !v111 )
    goto LABEL_45;
  BattleResultExpComponent__setEquipLv(this, v111->fields.lv, v107);
  v113 = this->fields.oldEquip;
  if ( !v113 )
    goto LABEL_45;
  equip_oldlevelLabel = this->fields.equip_oldlevelLabel;
  Master_object = (__int64)System_Int32__ToString((int)v113 + 48, 0);
  if ( !equip_oldlevelLabel )
    goto LABEL_45;
  v115 = Master_object ? (System_String_o *)Master_object : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v115, 0);
  v116 = this->fields.newEquip;
  if ( !v116 )
    goto LABEL_45;
  equip_newlevelLabel = this->fields.equip_newlevelLabel;
  Master_object = (__int64)System_Int32__ToString((int)v116 + 48, 0);
  if ( !equip_newlevelLabel )
    goto LABEL_45;
  v118 = Master_object ? (System_String_o *)Master_object : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v118, 0);
  v119 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v119, 0);
  Master_object = (__int64)this->fields.oldEquip;
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (__int64)UserEquipEntity__getSkillIdList((UserEquipEntity_o *)Master_object, 0);
  if ( !this->fields.newEquip )
    goto LABEL_45;
  v120 = Master_object;
  Master_object = (__int64)UserEquipEntity__getSkillIdList(this->fields.newEquip, 0);
  if ( !this->fields.oldEquip )
    goto LABEL_45;
  v121 = Master_object;
  Master_object = (__int64)UserEquipEntity__getSkillLvList(this->fields.oldEquip, 0);
  if ( !this->fields.newEquip )
    goto LABEL_45;
  v122 = Master_object;
  SkillLvList = UserEquipEntity__getSkillLvList(this->fields.newEquip, 0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v120 )
    goto LABEL_45;
  if ( *(int *)(v120 + 24) >= 1 )
  {
    v124 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    m_Items = SkillLvList->m_Items;
    v125 = 0;
    v126 = 0;
    v150 = v122 + 32;
    v127 = v121 + 32;
    while ( 1 )
    {
      v153 = 0;
      if ( !v121 )
        goto LABEL_45;
      if ( v126 >= *(unsigned int *)(v121 + 24) )
        goto LABEL_153;
      if ( !v124 )
        goto LABEL_45;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v124,
                        &v153,
                        *(_DWORD *)(v127 + 4 * v126),
                        (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( (Master_object & 1) != 0 && v153 )
      {
        if ( v126 >= *(unsigned int *)(v120 + 24) || v126 >= *(unsigned int *)(v121 + 24) )
          goto LABEL_153;
        if ( *(_DWORD *)(v120 + 32 + 4 * v126) != *(_DWORD *)(v127 + 4 * v126) )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11578/*"RESULT_EQEXP_GETSKILL"*/, 0);
          if ( !v153 )
            goto LABEL_45;
          v135 = (System_String_o *)Master_object;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v153, 0);
          Master_object = (__int64)System_String__Format(v135, Name, 0);
          if ( !v119 )
            goto LABEL_45;
          Master_object = (__int64)System_Text_StringBuilder__AppendLine_75522996(
                                     v119,
                                     (System_String_o *)Master_object,
                                     0);
LABEL_124:
          v125 += 3;
          goto LABEL_125;
        }
        if ( !v122 )
          goto LABEL_45;
        if ( v126 >= *(unsigned int *)(v122 + 24) )
          goto LABEL_153;
        if ( !SkillLvList )
          goto LABEL_45;
        if ( v126 >= LODWORD(SkillLvList->max_length) )
          goto LABEL_153;
        if ( *(_DWORD *)(v150 + 4 * v126) != m_Items[v126] )
        {
          v149 = v125;
          v128 = v119;
          v129 = SkillLvList;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
          v130 = v122;
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11579/*"RESULT_EQEXP_UPSKILLLV"*/, 0);
          if ( !v153 )
            goto LABEL_45;
          v131 = (System_String_o *)Master_object;
          Master_object = (__int64)SkillEntity__getName((SkillEntity_o *)v153, 0);
          if ( v126 >= LODWORD(v129->max_length) )
            goto LABEL_153;
          v132 = (Il2CppObject *)Master_object;
          v152 = m_Items[v126];
          v133 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v152);
          Master_object = (__int64)System_String__Format_75484576(v131, v132, v133, 0);
          if ( !v128 )
            goto LABEL_45;
          v134 = v128;
          Master_object = (__int64)System_Text_StringBuilder__AppendLine_75522996(
                                     v128,
                                     (System_String_o *)Master_object,
                                     0);
          v125 = v149;
          v122 = v130;
          SkillLvList = v129;
          v119 = v134;
          goto LABEL_124;
        }
      }
LABEL_125:
      if ( (__int64)++v126 >= *(int *)(v120 + 24) )
        goto LABEL_128;
    }
  }
  v125 = 0;
LABEL_128:
  eqConfRoot = this->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_45;
  LODWORD(v156.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.eqConfRoot, 0);
  v156.fields.y = (float)v125 * 10.0;
  v156.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v156, 0);
  Master_object = (__int64)this->fields.eqLevelwindowSprite;
  if ( !Master_object )
    goto LABEL_45;
  UIWidget__set_height((UIWidget_o *)Master_object, 22 * v125 + 134, 0);
  if ( !v119 )
    goto LABEL_45;
  equip_confLabel = this->fields.equip_confLabel;
  Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v119->klass->vtable._3_ToString.methodPtr)(
                    v119,
                    v119->klass->vtable._3_ToString.method);
  if ( !equip_confLabel )
    goto LABEL_45;
  UILabel__set_text(equip_confLabel, (System_String_o *)Master_object, 0);
  v139 = this->fields.oldEquip;
  if ( !v139 )
    goto LABEL_45;
  v140 = this->fields.newEquip;
  if ( !v140 )
    goto LABEL_45;
  damage_recordLabel = this->fields.damage_recordLabel;
  v110 = v139->fields.exp == v140->fields.exp;
  bestTurnDamage = this->fields.bestTurnDamage;
  oldRecordDamage = this->fields.oldRecordDamage;
  v144 = !v110;
  v145 = (System_String_o *)StringLiteral_421/*"#,#"*/;
  this->fields.updateFlg |= v144;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Master_object = (__int64)System_Int64__ToString_76930560((int64_t)&this->fields.oldRecordDamage, v145, 0);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Master_object, 0);
      damage_battleLabel = this->fields.damage_battleLabel;
      Master_object = (__int64)System_Int64__ToString_76930560(
                                 (int64_t)&this->fields.bestTurnDamage,
                                 (System_String_o *)StringLiteral_421/*"#,#"*/,
                                 0);
      if ( damage_battleLabel )
      {
        UILabel__set_text(damage_battleLabel, (System_String_o *)Master_object, 0);
        Master_object = (__int64)this->fields.damage_recordLabel;
        if ( Master_object )
        {
          UIWidget__set_color((UIWidget_o *)Master_object, this->fields.record_intactColor, 0);
          Master_object = (__int64)this->fields.damage_battleLabel;
          if ( Master_object )
          {
            UIWidget__set_color((UIWidget_o *)Master_object, this->fields.damage_intactColor, 0);
            Master_object = (__int64)this->fields.damage_recordRenewalSp;
            if ( Master_object )
            {
              Master_object = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0);
              if ( Master_object )
              {
                v147 = 0;
                goto LABEL_152;
              }
            }
          }
        }
      }
    }
    goto LABEL_45;
  }
  Master_object = (__int64)System_Int64__ToString_76930560((int64_t)&this->fields.bestTurnDamage, v145, 0);
  if ( !damage_recordLabel )
    goto LABEL_45;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Master_object, 0);
  v146 = this->fields.damage_battleLabel;
  Master_object = (__int64)System_Int64__ToString_76930560(
                             (int64_t)&this->fields.bestTurnDamage,
                             (System_String_o *)StringLiteral_421/*"#,#"*/,
                             0);
  if ( !v146 )
    goto LABEL_45;
  UILabel__set_text(v146, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.damage_recordLabel;
  if ( !Master_object )
    goto LABEL_45;
  UIWidget__set_color((UIWidget_o *)Master_object, this->fields.record_renewalColor, 0);
  Master_object = (__int64)this->fields.damage_battleLabel;
  if ( !Master_object )
    goto LABEL_45;
  UIWidget__set_color((UIWidget_o *)Master_object, this->fields.damage_renewalColor, 0);
  Master_object = (__int64)this->fields.damage_recordRenewalSp;
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_45;
  v147 = 1;
LABEL_152:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v147, 0);
}


void BattleResultExpComponent__UpdateValue(BattleResultExpComponent_o *this, float val, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattleResultExpComponent__updateValueActual(this, val, 0, v3);
}


void BattleResultExpComponent__activeTouch(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0 )
    sub_21FFECC(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void BattleResultExpComponent__checkDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *damage_LvupSimpleAnim; // x20
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v7; // x20
  __int64 v8; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v10; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v13; // x21
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_593C282 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultExpComponent_checkDamageRecord__);
    sub_21FFC50(&Method_BattleResultExpComponent_endOpenDamageRecord__);
    sub_21FFC50(&BattleWindowComponent_EndCall_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    sub_21FFC50(&StringLiteral_17952/*"bit_result_levelup01"*/);
    sub_21FFC50(&StringLiteral_3634/*"CLOSE"*/);
    byte_593C282 = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3634/*"CLOSE"*/, 0);
      return;
    }
    goto LABEL_31;
  }
  myFsm = (PlayMakerFSM_o *)this->fields.damageRecordRoot;
  if ( !myFsm )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 1, 0);
  damage_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.damage_LvupSimpleAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(damage_LvupSimpleAnim, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)SimpleAnimation__get_Item(
                                  (SimpleAnimation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/,
                                  0);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v7 = myFsm;
        v8 = *(unsigned __int16 *)&myFsm->klass->_2.rank;
        if ( *(_WORD *)&myFsm->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v8;
            p_offset += 2;
            if ( !v8 )
              goto LABEL_14;
          }
          v10 = (__int64)(&klass->vtable._4_OnBeforeSerialize + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_14:
          v10 = sub_2237E2C(myFsm, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, double))v10)(v7, *(_QWORD *)(v10 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_78338864((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/, 0);
          goto LABEL_27;
        }
      }
    }
LABEL_31:
    sub_21FFECC(myFsm, method);
  }
  damage_LvupAnim = (UnityEngine_Object_o *)this->fields.damage_LvupAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(damage_LvupAnim, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/,
                                  0);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_82865240(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/,
            0);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_27:
  damageRecordWindow = this->fields.damageRecordWindow;
  v13 = (BattleWindowComponent_EndCall_o *)sub_21FFEBC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endOpenDamageRecord__,
    0);
  if ( !damageRecordWindow )
    goto LABEL_31;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))damageRecordWindow->klass->vtable._10_Open.methodPtr)(
    damageRecordWindow,
    v13,
    damageRecordWindow->klass->vtable._10_Open.method);
  v14 = Method_BattleResultExpComponent_checkDamageRecord__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkDamageRecord__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_21FFC68(Method_BattleResultExpComponent_checkDamageRecord__);
  v15 = (System_Reflection_MethodBase_o *)sub_21FFC34(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 6, 0, 0);
}


void BattleResultExpComponent__checkEquipLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  BattleResultExpComponent_o *v2; // x19
  struct UserEquipEntity_o *oldEquip; // x8
  struct UserEquipEntity_o *newEquip; // x9
  __int64 v5; // x1
  UnityEngine_Object_o *equip_LvupSimpleAnim; // x20
  BattleResultExpComponent_c *klass; // x8
  BattleResultExpComponent_o *v8; // x20
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  UnityEngine_Object_o *equip_LvupAnim; // x20
  struct BattleWindowComponent_o *equipupwindow; // x20
  BattleWindowComponent_EndCall_o *v14; // x21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  v2 = this;
  if ( (byte_593C27F & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultExpComponent_checkEquipLevelUp__);
    sub_21FFC50(&Method_BattleResultExpComponent_endOpenEquipUp__);
    sub_21FFC50(&BattleWindowComponent_EndCall_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    sub_21FFC50(&StringLiteral_17952/*"bit_result_levelup01"*/);
    this = (BattleResultExpComponent_o *)sub_21FFC50(&StringLiteral_3634/*"CLOSE"*/);
    byte_593C27F = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3634/*"CLOSE"*/, 0);
      return;
    }
    goto LABEL_33;
  }
  this = (BattleResultExpComponent_o *)v2->fields.equipLevelupRoot;
  if ( !this )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  equip_LvupSimpleAnim = (UnityEngine_Object_o *)v2->fields.equip_LvupSimpleAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(equip_LvupSimpleAnim, 0, 0) )
  {
    this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)this,
                                             (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/,
                                             0);
      if ( this )
      {
        klass = this->klass;
        v8 = this;
        v9 = *(unsigned __int16 *)&this->klass->_2.rank;
        if ( *(_WORD *)&this->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v9;
            p_offset += 4;
            if ( !v9 )
              goto LABEL_16;
          }
          v11 = (__int64)&klass[1] + 16 * *p_offset;
        }
        else
        {
LABEL_16:
          v11 = sub_2237E2C(this, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, double))v11)(v8, *(_QWORD *)(v11 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_78338864((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/, 0);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    sub_21FFECC(this, method);
  }
  equip_LvupAnim = (UnityEngine_Object_o *)v2->fields.equip_LvupAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(equip_LvupAnim, 0, 0) )
  {
    this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
    if ( this )
    {
      this = (BattleResultExpComponent_o *)UnityEngine_Animation__get_Item(
                                             (UnityEngine_Animation_o *)this,
                                             (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/,
                                             0);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_82865240(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/,
            0);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_29:
  equipupwindow = v2->fields.equipupwindow;
  v14 = (BattleWindowComponent_EndCall_o *)sub_21FFEBC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v14, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0);
  if ( !equipupwindow )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))equipupwindow->klass->vtable._10_Open.methodPtr)(
    equipupwindow,
    v14,
    equipupwindow->klass->vtable._10_Open.method);
  v15 = Method_BattleResultExpComponent_checkEquipLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkEquipLevelUp__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_21FFC68(Method_BattleResultExpComponent_checkEquipLevelUp__);
  v16 = (System_Reflection_MethodBase_o *)sub_21FFC34(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0, 0);
}


void BattleResultExpComponent__checkMasterLevelUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  SePlayer_o *MeterSePlayer; // x0
  struct UserGameEntity_o *oldGame; // x8
  struct UserGameEntity_o *newGame; // x9
  __int64 v10; // x1
  UnityEngine_Object_o *mst_LvupSimpleAnim; // x20
  SePlayer_c *klass; // x8
  SePlayer_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *mst_LvupAnim; // x20
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v19; // x21
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  struct UserGameEntity_o *v22; // x9
  struct UserGameEntity_o *v23; // x8
  int32_t v24; // w20

  if ( (byte_593C27B & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultExpComponent_checkMasterLevelUp__);
    sub_21FFC50(&Method_BattleResultExpComponent_endOpenMasterUp__);
    sub_21FFC50(&BattleWindowComponent_EndCall_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    sub_21FFC50(&StringLiteral_17952/*"bit_result_levelup01"*/);
    sub_21FFC50(&StringLiteral_9636/*"NEXT"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593C27B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v3);
  iTween__Stop_75189608(gameObject, 0);
  BattleResultExpComponent__updateValueActual(this, 1.0, 1, v5);
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9636/*"NEXT"*/, 0);
      return;
    }
    goto LABEL_42;
  }
  MeterSePlayer = (SePlayer_o *)this->fields.masterLevelupRoot;
  if ( !MeterSePlayer )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MeterSePlayer, 1, 0);
  mst_LvupSimpleAnim = (UnityEngine_Object_o *)this->fields.mst_LvupSimpleAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(mst_LvupSimpleAnim, 0, 0) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
    if ( MeterSePlayer )
    {
      MeterSePlayer = (SePlayer_o *)SimpleAnimation__get_Item(
                                      (SimpleAnimation_o *)MeterSePlayer,
                                      (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/,
                                      0);
      if ( MeterSePlayer )
      {
        klass = MeterSePlayer->klass;
        v13 = MeterSePlayer;
        v14 = *(unsigned __int16 *)&MeterSePlayer->klass->_2.rank;
        if ( *(_WORD *)&MeterSePlayer->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v14;
            p_offset += 2;
            if ( !v14 )
              goto LABEL_20;
          }
          v16 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
        }
        else
        {
LABEL_20:
          v16 = sub_2237E2C(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, double))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_78338864((SimpleAnimation_o *)MeterSePlayer, (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/, 0);
          goto LABEL_33;
        }
      }
    }
LABEL_42:
    sub_21FFECC(MeterSePlayer, v6);
  }
  mst_LvupAnim = (UnityEngine_Object_o *)this->fields.mst_LvupAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(mst_LvupAnim, 0, 0) )
  {
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    MeterSePlayer = (SePlayer_o *)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)MeterSePlayer,
                                    (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/,
                                    0);
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_Animation__Play_82865240(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17952/*"bit_result_levelup01"*/,
      0);
  }
LABEL_33:
  masterupwindow = this->fields.masterupwindow;
  v19 = (BattleWindowComponent_EndCall_o *)sub_21FFEBC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v19, (Il2CppObject *)this, Method_BattleResultExpComponent_endOpenMasterUp__, 0);
  if ( !masterupwindow )
    goto LABEL_42;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))masterupwindow->klass->vtable._10_Open.methodPtr)(
    masterupwindow,
    v19,
    masterupwindow->klass->vtable._10_Open.method);
  v20 = Method_BattleResultExpComponent_checkMasterLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkMasterLevelUp__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_21FFC68(Method_BattleResultExpComponent_checkMasterLevelUp__);
  v21 = (System_Reflection_MethodBase_o *)sub_21FFC34(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 6, 0, 0);
  v22 = this->fields.oldGame;
  if ( !v22 )
    goto LABEL_42;
  v23 = this->fields.newGame;
  if ( !v23 )
    goto LABEL_42;
  v24 = v22->fields.lv + 1;
  while ( v24 <= v23->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( MeterSePlayer )
    {
      AdManager__TrackEvent((AdManager_o *)MeterSePlayer, 3, 2, v24, -1, 0, 0);
      v23 = this->fields.newGame;
      ++v24;
      if ( v23 )
        continue;
    }
    goto LABEL_42;
  }
}


void BattleResultExpComponent__checkOpenKnockdownRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_593C285 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3634/*"CLOSE"*/);
    byte_593C285 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.knockdownRecordWindow;
    if ( !myFsm )
      goto LABEL_11;
    if ( LOBYTE(myFsm[2].monitor) )
    {
      ((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, Il2CppClass *))myFsm->klass[1]._1.element_class)(
        myFsm,
        0,
        myFsm->klass[1]._1.castClass);
      return;
    }
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_11:
    sub_21FFECC(myFsm, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3634/*"CLOSE"*/, 0);
}


void BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_593C283 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultExpComponent_endCloseDamageRecord__);
    this = (BattleResultExpComponent_o *)sub_21FFC50(&BattleWindowComponent_EndCall_TypeInfo);
    byte_593C283 = 1;
  }
  klass = v2[2].klass;
  if ( !klass
    || (this = *(BattleResultExpComponent_o **)&klass->_1.this_arg.bits) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        v4 = v2[20].klass,
        v5 = (BattleWindowComponent_EndCall_o *)sub_21FFEBC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, v2, Method_BattleResultExpComponent_endCloseDamageRecord__, 0),
        !v4) )
  {
    sub_21FFECC(this, method);
  }
  (*((void (__fastcall **)(Il2CppClass *, BattleWindowComponent_EndCall_o *, _QWORD))v4->_1.image + 63))(
    v4,
    v5,
    *((_QWORD *)v4->_1.image + 64));
}


void BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  void *monitor; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_593C280 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultExpComponent_endCloseEquipUp__);
    this = (BattleResultExpComponent_o *)sub_21FFC50(&BattleWindowComponent_EndCall_TypeInfo);
    byte_593C280 = 1;
  }
  klass = v2[2].klass;
  if ( !klass
    || (this = *(BattleResultExpComponent_o **)&klass->_1.this_arg.bits) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        monitor = v2[16].monitor,
        v5 = (BattleWindowComponent_EndCall_o *)sub_21FFEBC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, v2, Method_BattleResultExpComponent_endCloseEquipUp__, 0),
        !monitor) )
  {
    sub_21FFECC(this, method);
  }
  (*(void (__fastcall **)(void *, BattleWindowComponent_EndCall_o *, _QWORD))(*(_QWORD *)monitor + 504LL))(
    monitor,
    v5,
    *(_QWORD *)(*(_QWORD *)monitor + 512LL));
}


void BattleResultExpComponent__closeKnockdownRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  struct BattleResultKnockdownComponent_o *v5; // x0

  if ( (byte_593C286 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C286 = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0, 0) )
  {
    v5 = this->fields.knockdownRecordWindow;
    if ( !v5 )
      sub_21FFECC(0, v4);
    ((void (__fastcall *)(struct BattleResultKnockdownComponent_o *, _QWORD, const MethodInfo *))v5->klass->vtable._12_Close.methodPtr)(
      v5,
      0,
      v5->klass->vtable._12_Close.method);
  }
}


void BattleResultExpComponent__closeMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *effectUIList; // x0
  int32_t v4; // w20
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_593C27D & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultExpComponent_endCloseMasterUp__);
    sub_21FFC50(&BattleWindowComponent_EndCall_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_593C27D = 1;
  }
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_10;
  if ( effectUIList->fields._size >= 1 )
  {
    v4 = 0;
    while ( v4 < effectUIList->fields._size )
    {
      effectUIList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    effectUIList,
                                                                    v4,
                                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( effectUIList )
      {
        effectUIList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)effectUIList,
                                                                      0);
        if ( effectUIList )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0);
          effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
          ++v4;
          if ( effectUIList )
            continue;
        }
      }
      goto LABEL_10;
    }
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (effectUIList = (System_Collections_Generic_List_object__o *)parentComp->fields.obj_fronttouch) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0),
        masterupwindow = this->fields.masterupwindow,
        v7 = (BattleWindowComponent_EndCall_o *)sub_21FFEBC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleResultExpComponent_endCloseMasterUp__,
          0),
        !masterupwindow) )
  {
LABEL_10:
    sub_21FFECC(effectUIList, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))masterupwindow->klass->vtable._12_Close.methodPtr)(
    masterupwindow,
    v7,
    masterupwindow->klass->vtable._12_Close.method);
}


void BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_593C277 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    byte_593C277 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_21FFECC(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5645/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endCloseDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_593C284 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    byte_593C284 = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_21FFECC(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5645/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_593C281 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    byte_593C281 = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_21FFECC(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5645/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_593C27E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    byte_593C27E = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_21FFECC(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5645/*"END_PROC"*/, 0);
}


void BattleResultExpComponent__endMoveFigure(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x22
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t v50; // w1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int32_t v57; // w1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  int32_t v71; // w1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 v78; // x22
  __int64 v79; // x1
  System_Collections_Hashtable_o *v80; // x0
  _QWORD *v81; // x0
  __int64 v82; // x1
  System_Reflection_MethodBase_o *v83; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  __int64 v92; // x0
  float time_exptotal; // [xsp+Ch] [xbp-44h] BYREF
  int v94; // [xsp+18h] [xbp-38h] BYREF
  int v95; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_593C278 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultExpComponent_endMoveFigure__);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20581/*"from"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23526/*"onupdate"*/);
    sub_21FFC50(&StringLiteral_15778/*"UpdateValue"*/);
    sub_21FFC50(&StringLiteral_25358/*"to"*/);
    sub_21FFC50(&StringLiteral_20320/*"finishUpdateValue"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593C278 = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v4 = sub_21FFD10(object___TypeInfo, 10);
    if ( !v4 )
      sub_21FFECC(0, v5);
    v12 = v4;
    v13 = StringLiteral_20581/*"from"*/;
    if ( !StringLiteral_20581/*"from"*/ || (v13 = sub_21FFDA4(StringLiteral_20581/*"from"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_44;
      v15 = StringLiteral_20581/*"from"*/;
      *(_QWORD *)(v12 + 32) = StringLiteral_20581/*"from"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 32), v15, v6, v7, v8, v9, v10, v11);
      v95 = 0;
      v13 = j_il2cpp_value_box_0(qword_594C0A0, &v95);
      v22 = v13;
      if ( !v13 || (v13 = sub_21FFDA4(v13, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_44;
        *(_QWORD *)(v12 + 40) = v22;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 40), v22, v16, v17, v18, v19, v20, v21);
        v13 = StringLiteral_25358/*"to"*/;
        if ( !StringLiteral_25358/*"to"*/ || (v13 = sub_21FFDA4(StringLiteral_25358/*"to"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v12 + 24) <= 2u )
            goto LABEL_44;
          v29 = StringLiteral_25358/*"to"*/;
          *(_QWORD *)(v12 + 48) = StringLiteral_25358/*"to"*/;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 48), v29, v23, v24, v25, v26, v27, v28);
          v94 = 1065353216;
          v13 = j_il2cpp_value_box_0(qword_594C0A0, &v94);
          v36 = v13;
          if ( !v13 || (v13 = sub_21FFDA4(v13, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_44;
            *(_QWORD *)(v12 + 56) = v36;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 56), v36, v30, v31, v32, v33, v34, v35);
            v13 = StringLiteral_23526/*"onupdate"*/;
            if ( !StringLiteral_23526/*"onupdate"*/
              || (v13 = sub_21FFDA4(StringLiteral_23526/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v12 + 24) <= 4u )
                goto LABEL_44;
              v43 = StringLiteral_23526/*"onupdate"*/;
              *(_QWORD *)(v12 + 64) = StringLiteral_23526/*"onupdate"*/;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 64), v43, v37, v38, v39, v40, v41, v42);
              v13 = StringLiteral_15778/*"UpdateValue"*/;
              if ( !StringLiteral_15778/*"UpdateValue"*/
                || (v13 = sub_21FFDA4(StringLiteral_15778/*"UpdateValue"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v12 + 24) <= 5u )
                  goto LABEL_44;
                v50 = StringLiteral_15778/*"UpdateValue"*/;
                *(_QWORD *)(v12 + 72) = StringLiteral_15778/*"UpdateValue"*/;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 72), v50, v44, v45, v46, v47, v48, v49);
                v13 = StringLiteral_23518/*"oncomplete"*/;
                if ( !StringLiteral_23518/*"oncomplete"*/
                  || (v13 = sub_21FFDA4(StringLiteral_23518/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v12 + 24) <= 6u )
                    goto LABEL_44;
                  v57 = StringLiteral_23518/*"oncomplete"*/;
                  *(_QWORD *)(v12 + 80) = StringLiteral_23518/*"oncomplete"*/;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 80), v57, v51, v52, v53, v54, v55, v56);
                  v13 = StringLiteral_20320/*"finishUpdateValue"*/;
                  if ( !StringLiteral_20320/*"finishUpdateValue"*/
                    || (v13 = sub_21FFDA4(StringLiteral_20320/*"finishUpdateValue"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                  {
                    if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFF8) == 0 )
                      goto LABEL_44;
                    v64 = StringLiteral_20320/*"finishUpdateValue"*/;
                    *(_QWORD *)(v12 + 88) = StringLiteral_20320/*"finishUpdateValue"*/;
                    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 88), v64, v58, v59, v60, v61, v62, v63);
                    v13 = StringLiteral_25318/*"time"*/;
                    if ( !StringLiteral_25318/*"time"*/
                      || (v13 = sub_21FFDA4(StringLiteral_25318/*"time"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v12 + 24) <= 8u )
                        goto LABEL_44;
                      v71 = StringLiteral_25318/*"time"*/;
                      *(_QWORD *)(v12 + 96) = StringLiteral_25318/*"time"*/;
                      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 96), v71, v65, v66, v67, v68, v69, v70);
                      time_exptotal = this->fields.time_exptotal;
                      v13 = j_il2cpp_value_box_0(qword_594C0A0, &time_exptotal);
                      v78 = v13;
                      if ( !v13 || (v13 = sub_21FFDA4(v13, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v12 + 24) > 9u )
                        {
                          *(_QWORD *)(v12 + 104) = v78;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)(v12 + 104),
                            v78,
                            v72,
                            v73,
                            v74,
                            v75,
                            v76,
                            v77);
                          if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v79);
                          v80 = iTween__Hash((System_Object_array *)v12, 0);
                          iTween__ValueTo(gameObject, v80, 0);
                          if ( this->fields.updateFlg )
                          {
                            v81 = Method_BattleResultExpComponent_endMoveFigure__;
                            if ( (*((_BYTE *)Method_BattleResultExpComponent_endMoveFigure__ + 83) & 2) != 0 )
                              v81 = (_QWORD *)sub_21FFC68(Method_BattleResultExpComponent_endMoveFigure__);
                            v83 = (System_Reflection_MethodBase_o *)sub_21FFC34(v81, v81[4]);
                            if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v82);
                            CommonSeName = SeManager__GetCommonSeName(15, 0);
                            v85 = OverwriteAssetSoundName__PlaySe(v83, CommonSeName, 0, 0);
                            this->fields.MeterSePlayer = v85;
                            sub_21FFBF4(
                              (MissionNaviTransitionBoardItem_o *)&this->fields.MeterSePlayer,
                              (int32_t)v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91);
                          }
                          return;
                        }
LABEL_44:
                        sub_21FFED4(v13);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v92 = sub_21FFEF0(v13, v14);
    sub_21FFD90(v92, 0);
  }
}


void BattleResultExpComponent__endOpenDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0 )
    sub_21FFECC(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0 )
    sub_21FFECC(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_593C27C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_15949/*"WAIT_OPEN"*/);
    byte_593C27C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15949/*"WAIT_OPEN"*/, 0);
}


void BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_593C279 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9636/*"NEXT"*/);
    byte_593C279 = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9636/*"NEXT"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultExpComponent__setEquipLv(BattleResultExpComponent_o *this, int32_t level, const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  bool v8; // w0
  UILabel_o *equip_Lv; // x20
  Il2CppObject *v10; // x1
  System_String_o *v11; // x0
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593C270 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2942/*"BATTLE_RESULTEXP_EQUIPLV"*/);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    byte_593C270 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&level);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2942/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = System_String__Equals_75473208(v5, (System_String_o *)StringLiteral_2942/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0);
  equip_Lv = this->fields.equip_Lv;
  if ( v8 )
  {
    v12 = level;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
    v11 = (System_String_o *)StringLiteral_26433/*"{0}"*/;
  }
  else
  {
    v13 = level;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v13);
    v11 = v7;
  }
  v5 = System_String__Format(v11, v10, 0);
  if ( !equip_Lv )
LABEL_11:
    sub_21FFECC(v5, v6);
  UILabel__set_text(equip_Lv, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultExpComponent__setMasterLv(BattleResultExpComponent_o *this, int32_t level, const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  bool v8; // w0
  UILabel_o *mst_Lv; // x20
  Il2CppObject *v10; // x1
  System_String_o *v11; // x0
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593C26F & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    sub_21FFC50(&StringLiteral_2947/*"BATTLE_RESULTEXP_MASTERLV"*/);
    byte_593C26F = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&level);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2947/*"BATTLE_RESULTEXP_MASTERLV"*/, 0);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  v8 = System_String__Equals_75473208(v5, (System_String_o *)StringLiteral_2947/*"BATTLE_RESULTEXP_MASTERLV"*/, 0);
  mst_Lv = this->fields.mst_Lv;
  if ( v8 )
  {
    v12 = level;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
    v11 = (System_String_o *)StringLiteral_26433/*"{0}"*/;
  }
  else
  {
    v13 = level;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v13);
    v11 = v7;
  }
  v5 = System_String__Format(v11, v10, 0);
  if ( !mst_Lv )
LABEL_11:
    sub_21FFECC(v5, v6);
  UILabel__set_text(mst_Lv, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultExpComponent__updateValueActual(
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
  if ( (byte_593C27A & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C27A = 1;
  }
  oldGame = v6->fields.oldGame;
  if ( !oldGame )
    goto LABEL_21;
  newGame = v6->fields.newGame;
  if ( !newGame )
    goto LABEL_21;
  v9 = BattleUtility__LerpDouble((double)oldGame->fields.exp, (double)newGame->fields.exp, val, 0);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToLong(v9, 0);
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
  this = (BattleResultExpComponent_o *)BattleResultExpComponent__SetMasterExp(
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
  v16 = BattleUtility__LerpDouble((double)oldEquip->fields.exp, (double)newEquip->fields.exp, val, 0);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_53467356(v16, 0);
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
  v19 = *(_QWORD *)&v17->fields.equipId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v17->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isFinish);
  *(_QWORD *)&v24.fields.currentCryptoKey = v19;
  *(_QWORD *)&v24.fields.fakeValue = v20;
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v24, 0);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0 )
LABEL_21:
    sub_21FFECC(this, isFinish);
  BattleResultExpComponent__SetEquipExp(v6, (int32_t)this, v22->fields.exp - v23->fields.exp, v18, v23->fields.lv, v21);
}


void BattleResultExpComponent___c__DisplayClass62_0___ctor(
        BattleResultExpComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleResultExpComponent___c__DisplayClass62_0___SetResultData_b__0(
        BattleResultExpComponent___c__DisplayClass62_0_o *this,
        float height,
        int32_t baseHeight,
        const MethodInfo *method)
{
  BattleResultExpComponent___c__DisplayClass62_0_o *v6; // x20
  struct BattleResultExpComponent_o *_4__this; // x8
  struct UserGameEntity_o *oldGame; // x9
  struct UserGameEntity_o *newGame; // x10
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  struct BattleResultExpComponent_o *v11; // x8
  struct BattleResultMasterUpStatusComponent_array *v12; // x8
  struct BattleResultExpComponent_o *v13; // x8
  struct BattleResultMasterUpStatusComponent_array *v14; // x9
  struct UserGameEntity_o *v15; // x10
  struct UserGameEntity_o *v16; // x8
  int v17; // w22
  struct BattleResultExpComponent_o *v18; // x8
  struct UserGameEntity_o *v19; // x9
  struct UserGameEntity_o *v20; // x10
  struct BattleResultMasterUpStatusComponent_array *v21; // x8
  struct BattleResultExpComponent_o *v22; // x8
  struct BattleResultMasterUpStatusComponent_array *v23; // x8
  struct BattleResultExpComponent_o *v24; // x8
  struct BattleResultMasterUpStatusComponent_array *v25; // x9
  struct UserGameEntity_o *v26; // x10
  struct UserGameEntity_o *v27; // x8
  struct BattleResultExpComponent_o *v28; // x8
  struct BattleResultMasterUpStatusComponent_array *v29; // x8
  struct BattleResultExpComponent_o *v30; // x8
  struct UserGameEntity_o *v31; // x9
  struct UserGameEntity_o *v32; // x10
  struct BattleResultMasterUpStatusComponent_array *v33; // x8
  struct BattleResultExpComponent_o *v34; // x8
  struct BattleResultMasterUpStatusComponent_array *v35; // x8
  struct BattleResultExpComponent_o *v36; // x8
  struct BattleResultMasterUpStatusComponent_array *v37; // x9
  struct UserGameEntity_o *v38; // x10
  struct UserGameEntity_o *v39; // x8
  struct BattleResultExpComponent_o *v40; // x8
  struct BattleResultMasterUpStatusComponent_array *v41; // x8
  struct BattleResultExpComponent_o *v42; // x8
  struct BattleResultMasterUpStatusComponent_array *v43; // x8
  EventMaster_o *v44; // x21
  struct BattleResultExpComponent_o *v45; // x8
  struct BattleResultMasterUpStatusComponent_array *v46; // x8
  __int64 *v47; // x8
  struct BattleResultMasterUpStatusComponent_array *v48; // x8
  struct BattleResultExpComponent_o *v49; // x8
  struct BattleResultMasterUpStatusComponent_array *v50; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  int v52; // w26
  unsigned int v53; // w29
  struct BattleResultExpComponent_o *v54; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v56; // x8
  struct UISprite_array *v57; // x8
  struct MasterLvRewardInfo_array *v58; // x9
  UISprite_o *v59; // x22
  __int64 v60; // x1
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v62; // x8
  struct BattleResultExpComponent_o *v63; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v65; // x9
  MasterLvRewardInfo_o *v66; // x9
  Il2CppObject *v67; // x23
  UILabel_o *v68; // x22
  Il2CppObject *v69; // x0
  int v71; // [xsp+0h] [xbp-80h]
  int32_t num; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_593C288 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_2945/*"BATTLE_RESULTEXP_FULLAP"*/);
    sub_21FFC50(&StringLiteral_2944/*"BATTLE_RESULTEXP_FRIENDMAX"*/);
    sub_21FFC50(&StringLiteral_2940/*"BATTLE_RESULTEXP_APMAX"*/);
    sub_21FFC50(&StringLiteral_2946/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/);
    sub_21FFC50(&StringLiteral_2941/*"BATTLE_RESULTEXP_COSTMAX"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)sub_21FFC50(&StringLiteral_26475/*"{0} {1}個"*/);
    byte_593C288 = 1;
  }
  _4__this = v6->fields.__4__this;
  countText = 0;
  nameText = 0;
  if ( !_4__this )
    goto LABEL_142;
  oldGame = _4__this->fields.oldGame;
  if ( !oldGame )
    goto LABEL_142;
  newGame = _4__this->fields.newGame;
  if ( !newGame )
    goto LABEL_142;
  upParamList = _4__this->fields.upParamList;
  if ( oldGame->fields.actMax >= newGame->fields.actMax )
  {
    if ( !upParamList )
      goto LABEL_142;
    if ( (upParamList->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_145;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)upParamList->m_Items[1];
    if ( !this )
      goto LABEL_142;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_142;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v17 = 0;
  }
  else
  {
    if ( !upParamList )
      goto LABEL_142;
    if ( (upParamList->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_145;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)upParamList->m_Items[1];
    if ( !this )
      goto LABEL_142;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_142;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v11 = v6->fields.__4__this;
    if ( !v11 )
      goto LABEL_142;
    v12 = v11->fields.upParamList;
    if ( !v12 )
      goto LABEL_142;
    if ( (v12->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_145;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v12->m_Items[1];
    if ( !this )
      goto LABEL_142;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2940/*"BATTLE_RESULTEXP_APMAX"*/,
      0);
    v13 = v6->fields.__4__this;
    if ( !v13 )
      goto LABEL_142;
    v14 = v13->fields.upParamList;
    if ( !v14 )
      goto LABEL_142;
    if ( (v14->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_145;
    v15 = v13->fields.oldGame;
    if ( !v15 )
      goto LABEL_142;
    v16 = v13->fields.newGame;
    if ( !v16 )
      goto LABEL_142;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v14->m_Items[1];
    if ( !this )
      goto LABEL_142;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v15->fields.actMax,
      v16->fields.actMax,
      0);
    v17 = 1;
  }
  v18 = v6->fields.__4__this;
  if ( !v18 )
    goto LABEL_142;
  v19 = v18->fields.oldGame;
  if ( !v19 )
    goto LABEL_142;
  v20 = v18->fields.newGame;
  if ( !v20 )
    goto LABEL_142;
  v21 = v18->fields.upParamList;
  if ( v19->fields.costMax >= v20->fields.costMax )
  {
    if ( !v21 )
      goto LABEL_142;
    if ( LODWORD(v21->max_length) <= 2 )
      goto LABEL_145;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v21->m_Items[2];
    if ( !this )
      goto LABEL_142;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_142;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  else
  {
    if ( !v21 )
      goto LABEL_142;
    if ( LODWORD(v21->max_length) <= 2 )
      goto LABEL_145;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v21->m_Items[2];
    if ( !this )
      goto LABEL_142;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_142;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v22 = v6->fields.__4__this;
    if ( !v22 )
      goto LABEL_142;
    v23 = v22->fields.upParamList;
    if ( !v23 )
      goto LABEL_142;
    if ( LODWORD(v23->max_length) <= 2 )
      goto LABEL_145;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v23->m_Items[2];
    if ( !this )
      goto LABEL_142;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2941/*"BATTLE_RESULTEXP_COSTMAX"*/,
      0);
    v24 = v6->fields.__4__this;
    if ( !v24 )
      goto LABEL_142;
    v25 = v24->fields.upParamList;
    if ( !v25 )
      goto LABEL_142;
    if ( LODWORD(v25->max_length) <= 2 )
      goto LABEL_145;
    v26 = v24->fields.oldGame;
    if ( !v26 )
      goto LABEL_142;
    v27 = v24->fields.newGame;
    if ( !v27 )
      goto LABEL_142;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v25->m_Items[2];
    if ( !this )
      goto LABEL_142;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v26->fields.costMax,
      v27->fields.costMax,
      0);
    v28 = v6->fields.__4__this;
    if ( !v28 )
      goto LABEL_142;
    v29 = v28->fields.upParamList;
    if ( !v29 )
      goto LABEL_142;
    if ( LODWORD(v29->max_length) <= 2 )
      goto LABEL_145;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v29->m_Items[2];
    if ( !this )
      goto LABEL_142;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_142;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_142;
    v75.fields.z = 0.0;
    v75.fields.y = height - (float)(v17 * baseHeight);
    v75.fields.x = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v75, 0);
    ++v17;
  }
  v30 = v6->fields.__4__this;
  if ( !v30 )
    goto LABEL_142;
  v31 = v30->fields.oldGame;
  if ( !v31 )
    goto LABEL_142;
  v32 = v30->fields.newGame;
  if ( !v32 )
    goto LABEL_142;
  v33 = v30->fields.upParamList;
  if ( v31->fields.friendKeep >= v32->fields.friendKeep )
  {
    if ( !v33 )
      goto LABEL_142;
    if ( (v33->max_length & 0xFFFFFFFC) != 0 )
    {
      this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v33->m_Items[3];
      if ( !this )
        goto LABEL_142;
      this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0);
      if ( !this )
        goto LABEL_142;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      goto LABEL_87;
    }
LABEL_145:
    sub_21FFED4(this);
  }
  if ( !v33 )
    goto LABEL_142;
  if ( (v33->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_145;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v33->m_Items[3];
  if ( !this )
    goto LABEL_142;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v34 = v6->fields.__4__this;
  if ( !v34 )
    goto LABEL_142;
  v35 = v34->fields.upParamList;
  if ( !v35 )
    goto LABEL_142;
  if ( (v35->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_145;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v35->m_Items[3];
  if ( !this )
    goto LABEL_142;
  BattleResultMasterUpStatusComponent__setTitle(
    (BattleResultMasterUpStatusComponent_o *)this,
    (System_String_o *)StringLiteral_2944/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
    0);
  v36 = v6->fields.__4__this;
  if ( !v36 )
    goto LABEL_142;
  v37 = v36->fields.upParamList;
  if ( !v37 )
    goto LABEL_142;
  if ( (v37->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_145;
  v38 = v36->fields.oldGame;
  if ( !v38 )
    goto LABEL_142;
  v39 = v36->fields.newGame;
  if ( !v39 )
    goto LABEL_142;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v37->m_Items[3];
  if ( !this )
    goto LABEL_142;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)this,
    v38->fields.friendKeep,
    v39->fields.friendKeep,
    0);
  v40 = v6->fields.__4__this;
  if ( !v40 )
    goto LABEL_142;
  v41 = v40->fields.upParamList;
  if ( !v41 )
    goto LABEL_142;
  if ( (v41->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_145;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v41->m_Items[3];
  if ( !this )
    goto LABEL_142;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_142;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_142;
  v76.fields.z = 0.0;
  v76.fields.y = height - (float)(v17 * baseHeight);
  v76.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v76, 0);
  ++v17;
LABEL_87:
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_142;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
  v42 = v6->fields.__4__this;
  if ( !v42 )
    goto LABEL_142;
  v43 = v42->fields.upParamList;
  if ( !v43 )
    goto LABEL_142;
  if ( LODWORD(v43->max_length) <= 4 )
    goto LABEL_145;
  v44 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v43->m_Items[4];
  if ( !this )
    goto LABEL_142;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !v44 )
    goto LABEL_142;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)EventMaster__IsBPEnable(v44, 0);
  v45 = v6->fields.__4__this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v45 )
    {
      v46 = v45->fields.upParamList;
      if ( v46 )
      {
        if ( LODWORD(v46->max_length) <= 4 )
          goto LABEL_145;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v46->m_Items[4];
        if ( !this )
          goto LABEL_142;
        v47 = &StringLiteral_2946/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/;
        goto LABEL_105;
      }
    }
LABEL_142:
    sub_21FFECC(this, *(_QWORD *)&baseHeight);
  }
  if ( !v45 )
    goto LABEL_142;
  v48 = v45->fields.upParamList;
  if ( !v48 )
    goto LABEL_142;
  if ( LODWORD(v48->max_length) <= 4 )
    goto LABEL_145;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v48->m_Items[4];
  if ( !this )
    goto LABEL_142;
  v47 = &StringLiteral_2945/*"BATTLE_RESULTEXP_FULLAP"*/;
LABEL_105:
  BattleResultMasterUpStatusComponent__setTitle(
    (BattleResultMasterUpStatusComponent_o *)this,
    (System_String_o *)*v47,
    0);
  v49 = v6->fields.__4__this;
  if ( !v49 )
    goto LABEL_142;
  v50 = v49->fields.upParamList;
  if ( !v50 )
    goto LABEL_142;
  if ( LODWORD(v50->max_length) <= 4 )
    goto LABEL_145;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v50->m_Items[4];
  if ( !this )
    goto LABEL_142;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_142;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_142;
  v77.fields.z = 0.0;
  v77.fields.y = height - (float)(v17 * baseHeight);
  v77.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v77, 0);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)(unsigned int)(v17 + 1);
  if ( masterLvInfoArray && SLODWORD(masterLvInfoArray->max_length) <= 2 )
  {
    v71 = v17 + 1;
    v52 = baseHeight * (_DWORD)this;
    v53 = 0;
    while ( (signed int)v53 < SLODWORD(masterLvInfoArray->max_length) )
    {
      v54 = v6->fields.__4__this;
      if ( v54 )
      {
        lvUpRewardSpArray = v54->fields.lvUpRewardSpArray;
        if ( lvUpRewardSpArray )
        {
          if ( v53 >= LODWORD(lvUpRewardSpArray->max_length) )
            goto LABEL_145;
          this = (BattleResultExpComponent___c__DisplayClass62_0_o *)lvUpRewardSpArray->m_Items[v53];
          if ( this )
          {
            this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0);
            if ( this )
            {
              this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Transform__get_parent(
                                                                           (UnityEngine_Transform_o *)this,
                                                                           0);
              if ( this )
              {
                v78.fields.z = 0.0;
                v78.fields.y = height - (float)v52;
                v78.fields.x = -30.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v78, 0);
                v56 = v6->fields.__4__this;
                if ( v56 )
                {
                  v57 = v56->fields.lvUpRewardSpArray;
                  if ( v57 )
                  {
                    if ( v53 >= LODWORD(v57->max_length) )
                      goto LABEL_145;
                    v58 = v6->fields.masterLvInfoArray;
                    if ( v58 )
                    {
                      if ( v53 >= LODWORD(v58->max_length) )
                        goto LABEL_145;
                      this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v58->m_Items[v53];
                      if ( this )
                      {
                        v59 = v57->m_Items[v53];
                        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                                     (MasterLvRewardInfo_o *)this,
                                                                                     0);
                        if ( this )
                        {
                          IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0);
                          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v60);
                          this = (BattleResultExpComponent___c__DisplayClass62_0_o *)AtlasManager__SetItem(
                                                                                       v59,
                                                                                       IconImageId,
                                                                                       0);
                          v62 = v6->fields.masterLvInfoArray;
                          countText = (System_String_o *)StringLiteral_1/*""*/;
                          nameText = (System_String_o *)StringLiteral_1/*""*/;
                          if ( v62 )
                          {
                            if ( v53 >= LODWORD(v62->max_length) )
                              goto LABEL_145;
                            this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v62->m_Items[v53];
                            if ( this )
                            {
                              this = (BattleResultExpComponent___c__DisplayClass62_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                                           (MasterLvRewardInfo_o *)this,
                                                                                           0);
                              if ( this )
                              {
                                GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0);
                                v63 = v6->fields.__4__this;
                                if ( v63 )
                                {
                                  lvUpRewardLabelArray = v63->fields.lvUpRewardLabelArray;
                                  if ( lvUpRewardLabelArray )
                                  {
                                    if ( v53 >= LODWORD(lvUpRewardLabelArray->max_length) )
                                      goto LABEL_145;
                                    v65 = v6->fields.masterLvInfoArray;
                                    if ( v65 )
                                    {
                                      if ( v53 >= LODWORD(v65->max_length) )
                                        goto LABEL_145;
                                      v66 = v65->m_Items[v53];
                                      if ( v66 )
                                      {
                                        v67 = (Il2CppObject *)nameText;
                                        v68 = lvUpRewardLabelArray->m_Items[v53];
                                        num = v66->fields.num;
                                        v69 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &num);
                                        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)System_String__Format_75484576(
                                                                                                     (System_String_o *)StringLiteral_26475/*"{0} {1}個"*/,
                                                                                                     v67,
                                                                                                     v69,
                                                                                                     0);
                                        if ( v68 )
                                        {
                                          UILabel__set_text(v68, (System_String_o *)this, 0);
                                          masterLvInfoArray = v6->fields.masterLvInfoArray;
                                          ++v53;
                                          v52 += baseHeight;
                                          if ( masterLvInfoArray )
                                            continue;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_142;
    }
    LODWORD(this) = v71 + v53;
  }
  return (int)this;
}