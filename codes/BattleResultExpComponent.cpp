void __fastcall BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = (struct UnityEngine_Color_o)xmmword_C06CF0;
  this->fields.record_intactColor = _Q0;
  this->fields.damage_renewalColor = _Q0;
  this->fields.damage_intactColor = (struct UnityEngine_Color_o)xmmword_C05E40;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C00C0A & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleResultExpComponent_endClose__, method);
    sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4C00C0A = 1;
  }
  window = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_1C2E388(v6, v7);
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
  Il2CppObject *Object_object__50017172; // x21
  BattleResultExpComponent_o *v14; // x21
  BattleResultExpComponent_o *v15; // x22
  BattleResultExpComponent_o *v16; // x22
  BattleResultExpComponent_o *v17; // x22
  int m_CancellationTokenSource; // w8
  BattleResultExpComponent_o *v19; // x21
  unsigned int v20; // w22

  v8 = this;
  if ( (byte_4C00C06 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_GameObject____77757312, data);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultExpComponent_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    byte_4C00C06 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__50017172 = AssetData__GetObject_object__50017172(
                              data,
                              effectName,
                              (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__50017172,
                                         (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4BF7D91 )
  {
    this = (BattleResultExpComponent_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, data);
    byte_4BF7D91 = 1;
  }
  if ( !v16 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v17 = this;
  if ( !byte_4BF7D96 )
  {
    this = (BattleResultExpComponent_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, data);
    byte_4BF7D96 = 1;
  }
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50476848(
                                         (UnityEngine_GameObject_o *)v14,
                                         (const MethodInfo_3023730 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        sub_1C2E390(this, data);
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v19->fields.parentComp + (int)v20);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
      if ( (int)++v20 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C2E388(this, data);
  }
LABEL_21:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
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

  if ( (byte_4C00C02 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_2979/*"BATTLE_RESULTEXP_MASTERTITLE"*/, v6);
    sub_1C2E12C(&StringLiteral_2974/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, v7);
    byte_4C00C02 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v8;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.effectUIList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v18 = (System_String_o *)window;
  if ( !System_String__Equals_63243900((System_String_o *)window, (System_String_o *)StringLiteral_2979/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v18, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !window )
LABEL_33:
    sub_1C2E388(window, v15);
  v19 = (System_String_o *)window;
  if ( !System_String__Equals_63243900((System_String_o *)window, (System_String_o *)StringLiteral_2974/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultExpComponent__IsResultEquipMaxExpDisp(
        BattleResultExpComponent_o *this,
        int32_t oldLv,
        int32_t newLv,
        UserExpMaster_o *userExpMst,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int32_t monitor_high; // w19
  int32_t monitor; // w21
  int64_t klass_low; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C00C1B & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, *(_QWORD *)&oldLv);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserExpMaster___, v8);
    sub_1C2E12C(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C00C1B = 1;
  }
  entity = 0LL;
  if ( oldLv == newLv )
    return 0;
  if ( !userExpMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserExpMaster___),
          (userExpMst = (UserExpMaster_o *)Instance) == 0LL) )
    {
LABEL_14:
      sub_1C2E388(Instance, v12);
    }
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)userExpMst,
                               &entity,
                               newLv + 1,
                               (const MethodInfo_327B1CC *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_14;
  monitor = (int32_t)entity[3].monitor;
  monitor_high = HIDWORD(entity[3].monitor);
  klass_low = SLODWORD(entity[4].klass);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return !CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL);
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
  _QWORD *v20; // x24
  struct UserEquipEntity_o *oldEquip; // x8
  __int64 v22; // x20
  __int64 v23; // x21
  int32_t v24; // w20
  bool IsUseOverwriteMasterImage; // w21
  __int64 v26; // x23
  __int64 v27; // x22
  System_Nullable_Vector3__o ResultOverwriteMasterImagePosition; // kr00_16
  __int64 v29; // x8
  UnityEngine_GameObject_o *figureRoot; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Object_array *v37; // x21
  UnityEngine_GameObject_o *v38; // x0
  Il2CppObject *v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x22
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
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
  int64_t v94; // x22
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  System_Collections_Hashtable_o *v107; // x0
  __int64 v108; // x0
  System_Nullable_Vector3__o offset; // [xsp+0h] [xbp-70h]
  char v110[4]; // [xsp+28h] [xbp-48h] BYREF
  int v111; // [xsp+2Ch] [xbp-44h] BYREF
  int v112; // [xsp+38h] [xbp-38h] BYREF
  int32_t overwriteImageId; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4C00C09 & 1) == 0 )
  {
    sub_1C2E12C(&BattleRootComponent_TypeInfo, method);
    sub_1C2E12C(&bool_TypeInfo, v3);
    sub_1C2E12C(&object___TypeInfo, v4);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C2E12C(&float_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1C2E12C(&StringLiteral_25211/*"x"*/, v8);
    sub_1C2E12C(&StringLiteral_5590/*"END_OPEN"*/, v9);
    sub_1C2E12C(&StringLiteral_24383/*"time"*/, v10);
    sub_1C2E12C(&StringLiteral_22694/*"oncompletetarget"*/, v11);
    sub_1C2E12C(&StringLiteral_19347/*"endMoveFigure"*/, v12);
    sub_1C2E12C(&StringLiteral_21221/*"islocal"*/, v13);
    sub_1C2E12C(&StringLiteral_22692/*"oncomplete"*/, v14);
    sub_1C2E12C(&iTween_TypeInfo, v15);
    byte_4C00C09 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_72;
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
    goto LABEL_72;
  v23 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v23;
  *(_QWORD *)&v114.fields.fakeValue = v22;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
                                             v114,
                                             0LL);
  if ( !v20 )
    goto LABEL_72;
  v24 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)v20[8];
  if ( !gameObject )
    goto LABEL_72;
  overwriteImageId = BattleData__GetMasterIconResultImageId((BattleData_o *)gameObject, 0LL);
  v17 = (unsigned int)overwriteImageId;
  gameObject = (UnityEngine_GameObject_o *)v20[8];
  if ( !gameObject )
    goto LABEL_72;
  IsUseOverwriteMasterImage = BattleData__IsUseOverwriteMasterImage((BattleData_o *)gameObject, overwriteImageId, 0LL);
  v26 = 0LL;
  v27 = 0LL;
  if ( IsUseOverwriteMasterImage )
  {
    gameObject = (UnityEngine_GameObject_o *)v20[8];
    if ( !gameObject )
      goto LABEL_72;
    ResultOverwriteMasterImagePosition = BattleData__GetResultOverwriteMasterImagePosition(
                                           (BattleData_o *)gameObject,
                                           0LL);
    v17 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.value.fields.y;
    v26 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.value.fields.y;
    v27 = *(_QWORD *)&ResultOverwriteMasterImagePosition.fields.hasValue;
  }
  gameObject = (UnityEngine_GameObject_o *)v20[8];
  if ( !gameObject )
    goto LABEL_72;
  BattleData__GetEquipAddImageId((BattleData_o *)gameObject, &overwriteImageId, 0LL);
  if ( overwriteImageId != -1 )
  {
    v29 = v20[8];
    if ( !v29 )
      goto LABEL_72;
    *(_QWORD *)&offset.fields.hasValue = v27;
    *(_QWORD *)&offset.fields.value.fields.y = v26;
    MasterFigureManagerOld__CreatePrefab_39233864(
      this->fields.figureRoot,
      0,
      *(_DWORD *)(v29 + 400),
      v24,
      60,
      0LL,
      overwriteImageId,
      offset,
      IsUseOverwriteMasterImage,
      0LL);
  }
  figureRoot = this->fields.figureRoot;
  gameObject = (UnityEngine_GameObject_o *)sub_1C2E1D4(object___TypeInfo, 10LL);
  if ( !gameObject )
LABEL_72:
    sub_1C2E388(gameObject, v17);
  v37 = (System_Object_array *)gameObject;
  v38 = (UnityEngine_GameObject_o *)StringLiteral_25211/*"x"*/;
  if ( StringLiteral_25211/*"x"*/ )
  {
    v38 = (UnityEngine_GameObject_o *)sub_1C2E268(StringLiteral_25211/*"x"*/, v37->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_74;
    v39 = (Il2CppObject *)StringLiteral_25211/*"x"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( !v37->max_length )
    goto LABEL_73;
  v37->m_Items[0] = v39;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v37->m_Items, (int64_t)v39, v31, v32, v33, v34, v35, v36);
  v112 = -1018691584;
  v38 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v112, v40, v41, v42);
  v49 = (int64_t)v38;
  if ( v38 )
  {
    v38 = (UnityEngine_GameObject_o *)sub_1C2E268(v38, v37->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_74;
  }
  if ( v37->max_length <= 1 )
    goto LABEL_73;
  v37->m_Items[1] = (Il2CppObject *)v49;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v37->m_Items[1], v49, v43, v44, v45, v46, v47, v48);
  v38 = (UnityEngine_GameObject_o *)StringLiteral_24383/*"time"*/;
  if ( StringLiteral_24383/*"time"*/ )
  {
    v38 = (UnityEngine_GameObject_o *)sub_1C2E268(StringLiteral_24383/*"time"*/, v37->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_74;
    v39 = (Il2CppObject *)StringLiteral_24383/*"time"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v37->max_length <= 2 )
    goto LABEL_73;
  v37->m_Items[2] = v39;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v37->m_Items[2], (int64_t)v39, v50, v51, v52, v53, v54, v55);
  v111 = 1061997773;
  v38 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v111, v56, v57, v58);
  v65 = (int64_t)v38;
  if ( v38 )
  {
    v38 = (UnityEngine_GameObject_o *)sub_1C2E268(v38, v37->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_74;
  }
  if ( v37->max_length <= 3 )
    goto LABEL_73;
  v37->m_Items[3] = (Il2CppObject *)v65;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v37->m_Items[3], v65, v59, v60, v61, v62, v63, v64);
  v38 = (UnityEngine_GameObject_o *)StringLiteral_21221/*"islocal"*/;
  if ( StringLiteral_21221/*"islocal"*/ )
  {
    v38 = (UnityEngine_GameObject_o *)sub_1C2E268(StringLiteral_21221/*"islocal"*/, v37->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_74;
    v39 = (Il2CppObject *)StringLiteral_21221/*"islocal"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v37->max_length <= 4 )
    goto LABEL_73;
  v37->m_Items[4] = v39;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v37->m_Items[4], (int64_t)v39, v66, v67, v68, v69, v70, v71);
  v110[0] = 1;
  v38 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v110, v72, v73, v74);
  v81 = (int64_t)v38;
  if ( v38 )
  {
    v38 = (UnityEngine_GameObject_o *)sub_1C2E268(v38, v37->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_74;
  }
  if ( v37->max_length <= 5 )
    goto LABEL_73;
  v37->m_Items[5] = (Il2CppObject *)v81;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v37->m_Items[5], v81, v75, v76, v77, v78, v79, v80);
  v38 = (UnityEngine_GameObject_o *)StringLiteral_22694/*"oncompletetarget"*/;
  if ( StringLiteral_22694/*"oncompletetarget"*/ )
  {
    v38 = (UnityEngine_GameObject_o *)sub_1C2E268(StringLiteral_22694/*"oncompletetarget"*/, v37->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_74;
    v39 = (Il2CppObject *)StringLiteral_22694/*"oncompletetarget"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v37->max_length <= 6 )
    goto LABEL_73;
  v37->m_Items[6] = v39;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v37->m_Items[6], (int64_t)v39, v82, v83, v84, v85, v86, v87);
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v94 = (int64_t)v38;
  if ( v38 )
  {
    v38 = (UnityEngine_GameObject_o *)sub_1C2E268(v38, v37->obj.klass->_1.element_class);
    if ( !v38 )
    {
LABEL_74:
      v108 = sub_1C2E3AC(v38);
      sub_1C2E254(v108, 0LL);
    }
  }
  if ( v37->max_length <= 7 )
    goto LABEL_73;
  v37->m_Items[7] = (Il2CppObject *)v94;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v37->m_Items[7], v94, v88, v89, v90, v91, v92, v93);
  v38 = (UnityEngine_GameObject_o *)StringLiteral_22692/*"oncomplete"*/;
  if ( StringLiteral_22692/*"oncomplete"*/ )
  {
    v38 = (UnityEngine_GameObject_o *)sub_1C2E268(StringLiteral_22692/*"oncomplete"*/, v37->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_74;
    v39 = (Il2CppObject *)StringLiteral_22692/*"oncomplete"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v37->max_length <= 8 )
    goto LABEL_73;
  v37->m_Items[8] = v39;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v37->m_Items[8], (int64_t)v39, v95, v96, v97, v98, v99, v100);
  v38 = (UnityEngine_GameObject_o *)StringLiteral_19347/*"endMoveFigure"*/;
  if ( StringLiteral_19347/*"endMoveFigure"*/ )
  {
    v38 = (UnityEngine_GameObject_o *)sub_1C2E268(StringLiteral_19347/*"endMoveFigure"*/, v37->obj.klass->_1.element_class);
    if ( v38 )
    {
      v39 = (Il2CppObject *)StringLiteral_19347/*"endMoveFigure"*/;
      goto LABEL_66;
    }
    goto LABEL_74;
  }
  v39 = 0LL;
LABEL_66:
  if ( v37->max_length <= 9 )
LABEL_73:
    sub_1C2E390(v38, v39);
  v37->m_Items[9] = v39;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v37->m_Items[9], (int64_t)v39, v101, v102, v103, v104, v105, v106);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v107 = iTween__Hash(v37, 0LL);
  iTween__MoveFrom_61774644(figureRoot, v107, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5590/*"END_OPEN"*/, 0LL);
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
    sub_1C2E388(this, method);
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
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *damage_LvupAnim; // x20
  struct BattleWindowComponent_o *damageRecordWindow; // x20
  BattleWindowComponent_EndCall_o *v18; // x21
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_4C00C16 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleResultExpComponent_checkDamageRecord__, method);
    sub_1C2E12C(&Method_BattleResultExpComponent_endOpenDamageRecord__, v3);
    sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_17584/*"bit_result_levelup01"*/, v7);
    sub_1C2E12C(&StringLiteral_3620/*"CLOSE"*/, v8);
    byte_4C00C16 = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3620/*"CLOSE"*/, 0LL);
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
                                  (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/,
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
          v15 = sub_1C8010C(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v15)(v12, *(_QWORD *)(v15 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_65373960((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_31:
    sub_1C2E388(myFsm, method);
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
                                  (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_70734128(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_27:
  damageRecordWindow = this->fields.damageRecordWindow;
  v18 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo);
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
    v19 = (_QWORD *)sub_1C2E144(Method_BattleResultExpComponent_checkDamageRecord__);
  v20 = (System_Reflection_MethodBase_o *)sub_1C2E110(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 6, 0, 0LL);
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
  if ( (byte_4C00C13 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleResultExpComponent_checkEquipLevelUp__, method);
    sub_1C2E12C(&Method_BattleResultExpComponent_endOpenEquipUp__, v3);
    sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_17584/*"bit_result_levelup01"*/, v7);
    this = (BattleResultExpComponent_o *)sub_1C2E12C(&StringLiteral_3620/*"CLOSE"*/, v8);
    byte_4C00C13 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3620/*"CLOSE"*/, 0LL);
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
                                             (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/,
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
          v16 = sub_1C8010C(this, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_65373960((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    sub_1C2E388(this, method);
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
                                             (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_70734128(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_29:
  equipupwindow = v2->fields.equipupwindow;
  v19 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v19, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v19,
    equipupwindow->klass->vtable._11_CompOpen.methodPtr);
  v20 = Method_BattleResultExpComponent_checkEquipLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkEquipLevelUp__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C2E144(Method_BattleResultExpComponent_checkEquipLevelUp__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C2E110(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 6, 0, 0LL);
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

  if ( (byte_4C00C0F & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleResultExpComponent_checkMasterLevelUp__, method);
    sub_1C2E12C(&Method_BattleResultExpComponent_endOpenMasterUp__, v3);
    sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_17584/*"bit_result_levelup01"*/, v8);
    sub_1C2E12C(&StringLiteral_9426/*"NEXT"*/, v9);
    sub_1C2E12C(&iTween_TypeInfo, v10);
    byte_4C00C0F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61883512(gameObject, 0LL);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9426/*"NEXT"*/, 0LL);
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
                                      (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/,
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
          v22 = sub_1C8010C(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_65373960(
            (SimpleAnimation_o *)MeterSePlayer,
            (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_33;
        }
      }
    }
LABEL_42:
    sub_1C2E388(MeterSePlayer, v13);
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
                                    (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/,
                                    0LL);
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0LL);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_Animation__Play_70734128(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17584/*"bit_result_levelup01"*/,
      0LL);
  }
LABEL_33:
  masterupwindow = this->fields.masterupwindow;
  v25 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo);
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
    v26 = (_QWORD *)sub_1C2E144(Method_BattleResultExpComponent_checkMasterLevelUp__);
  v27 = (System_Reflection_MethodBase_o *)sub_1C2E110(v26, v26[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 6, 0, 0LL);
  v28 = this->fields.oldGame;
  if ( !v28 )
    goto LABEL_42;
  v29 = this->fields.newGame;
  if ( !v29 )
    goto LABEL_42;
  v30 = v28->fields.lv + 1;
  while ( v30 <= v29->fields.lv )
  {
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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

  if ( (byte_4C00C19 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_3620/*"CLOSE"*/, v3);
    byte_4C00C19 = 1;
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
    sub_1C2E388(myFsm, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3620/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  Il2CppClass *v5; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C00C17 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleResultExpComponent_endCloseDamageRecord__, method);
    this = (BattleResultExpComponent_o *)sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4C00C17 = 1;
  }
  klass = v2[2].klass;
  if ( !klass
    || (this = *(BattleResultExpComponent_o **)&klass->_1.this_arg.bits) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        v5 = v2[20].klass,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v6, v2, Method_BattleResultExpComponent_endCloseDamageRecord__, 0LL),
        !v5) )
  {
    sub_1C2E388(this, method);
  }
  (*((void (__fastcall **)(Il2CppClass *, BattleWindowComponent_EndCall_o *, _QWORD))v5->_1.image + 63))(
    v5,
    v6,
    *((_QWORD *)v5->_1.image + 64));
}


void __fastcall BattleResultExpComponent__closeEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  void *monitor; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C00C14 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleResultExpComponent_endCloseEquipUp__, method);
    this = (BattleResultExpComponent_o *)sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4C00C14 = 1;
  }
  klass = v2[2].klass;
  if ( !klass
    || (this = *(BattleResultExpComponent_o **)&klass->_1.this_arg.bits) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        monitor = v2[16].monitor,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v6, v2, Method_BattleResultExpComponent_endCloseEquipUp__, 0LL),
        !monitor) )
  {
    sub_1C2E388(this, method);
  }
  (*(void (__fastcall **)(void *, BattleWindowComponent_EndCall_o *, _QWORD))(*(_QWORD *)monitor + 504LL))(
    monitor,
    v6,
    *(_QWORD *)(*(_QWORD *)monitor + 512LL));
}


void __fastcall BattleResultExpComponent__closeKnockdownRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  __int64 v4; // x1
  struct BattleResultKnockdownComponent_o *v5; // x0

  if ( (byte_4C00C1A & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00C1A = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v5 = this->fields.knockdownRecordWindow;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
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
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleWindowComponent_o *masterupwindow; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_4C00C11 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleResultExpComponent_endCloseMasterUp__, method);
    sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v5);
    byte_4C00C11 = 1;
  }
  effectUIList = (System_Collections_Generic_List_object__o *)this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_14;
  if ( effectUIList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      effectUIList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    effectUIList,
                                                                    v7,
                                                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
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
LABEL_14:
    sub_1C2E388(effectUIList, method);
  }
LABEL_10:
  parentComp = this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_14;
  effectUIList = (System_Collections_Generic_List_object__o *)parentComp->fields.obj_fronttouch;
  if ( !effectUIList )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL);
  masterupwindow = this->fields.masterupwindow;
  v10 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultExpComponent_endCloseMasterUp__,
    0LL);
  if ( !masterupwindow )
    goto LABEL_14;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))masterupwindow->klass->vtable._12_Close.method)(
    masterupwindow,
    v10,
    masterupwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultExpComponent__endClose(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C00C0B & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C00C0B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C2E388(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_4C00C18 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C00C18 = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C2E388(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_4C00C15 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C00C15 = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C2E388(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_4C00C12 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C00C12 = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C2E388(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
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

  if ( (byte_4C00C0C & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleResultExpComponent_endMoveFigure__, method);
    sub_1C2E12C(&object___TypeInfo, v3);
    sub_1C2E12C(&SeManager_TypeInfo, v4);
    sub_1C2E12C(&float_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_20005/*"from"*/, v6);
    sub_1C2E12C(&StringLiteral_24383/*"time"*/, v7);
    sub_1C2E12C(&StringLiteral_22700/*"onupdate"*/, v8);
    sub_1C2E12C(&StringLiteral_15472/*"UpdateValue"*/, v9);
    sub_1C2E12C(&StringLiteral_24425/*"to"*/, v10);
    sub_1C2E12C(&StringLiteral_19784/*"finishUpdateValue"*/, v11);
    sub_1C2E12C(&StringLiteral_22692/*"oncomplete"*/, v12);
    sub_1C2E12C(&iTween_TypeInfo, v13);
    byte_4C00C0C = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v15 = sub_1C2E1D4(object___TypeInfo, 10LL);
    if ( !v15 )
      sub_1C2E388(0LL, v16);
    v23 = (System_Object_array *)v15;
    v24 = StringLiteral_20005/*"from"*/;
    if ( StringLiteral_20005/*"from"*/ )
    {
      v24 = sub_1C2E268(StringLiteral_20005/*"from"*/, v23->obj.klass->_1.element_class);
      if ( !v24 )
        goto LABEL_59;
      v25 = StringLiteral_20005/*"from"*/;
    }
    else
    {
      v25 = 0LL;
    }
    if ( !v23->max_length )
      goto LABEL_58;
    v23->m_Items[0] = (Il2CppObject *)v25;
    sub_1C2E0D0((PartyOrganizationUtility_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
    v106 = 0;
    v24 = j_il2cpp_value_box_0(float_TypeInfo, &v106, v26, v27, v28);
    v35 = v24;
    if ( !v24 || (v24 = sub_1C2E268(v24, v23->obj.klass->_1.element_class)) != 0 )
    {
      if ( v23->max_length <= 1 )
        goto LABEL_58;
      v23->m_Items[1] = (Il2CppObject *)v35;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->m_Items[1], v35, v29, v30, v31, v32, v33, v34);
      v24 = StringLiteral_24425/*"to"*/;
      if ( StringLiteral_24425/*"to"*/ )
      {
        v24 = sub_1C2E268(StringLiteral_24425/*"to"*/, v23->obj.klass->_1.element_class);
        if ( !v24 )
          goto LABEL_59;
        v25 = StringLiteral_24425/*"to"*/;
      }
      else
      {
        v25 = 0LL;
      }
      if ( v23->max_length <= 2 )
        goto LABEL_58;
      v23->m_Items[2] = (Il2CppObject *)v25;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->m_Items[2], v25, v36, v37, v38, v39, v40, v41);
      v105 = 1065353216;
      v24 = j_il2cpp_value_box_0(float_TypeInfo, &v105, v42, v43, v44);
      v51 = v24;
      if ( !v24 || (v24 = sub_1C2E268(v24, v23->obj.klass->_1.element_class)) != 0 )
      {
        if ( v23->max_length <= 3 )
          goto LABEL_58;
        v23->m_Items[3] = (Il2CppObject *)v51;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
        v24 = StringLiteral_22700/*"onupdate"*/;
        if ( StringLiteral_22700/*"onupdate"*/ )
        {
          v24 = sub_1C2E268(StringLiteral_22700/*"onupdate"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_59;
          v25 = StringLiteral_22700/*"onupdate"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 4 )
          goto LABEL_58;
        v23->m_Items[4] = (Il2CppObject *)v25;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->m_Items[4], v25, v52, v53, v54, v55, v56, v57);
        v24 = StringLiteral_15472/*"UpdateValue"*/;
        if ( StringLiteral_15472/*"UpdateValue"*/ )
        {
          v24 = sub_1C2E268(StringLiteral_15472/*"UpdateValue"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_59;
          v25 = StringLiteral_15472/*"UpdateValue"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 5 )
          goto LABEL_58;
        v23->m_Items[5] = (Il2CppObject *)v25;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->m_Items[5], v25, v58, v59, v60, v61, v62, v63);
        v24 = StringLiteral_22692/*"oncomplete"*/;
        if ( StringLiteral_22692/*"oncomplete"*/ )
        {
          v24 = sub_1C2E268(StringLiteral_22692/*"oncomplete"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_59;
          v25 = StringLiteral_22692/*"oncomplete"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 6 )
          goto LABEL_58;
        v23->m_Items[6] = (Il2CppObject *)v25;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->m_Items[6], v25, v64, v65, v66, v67, v68, v69);
        v24 = StringLiteral_19784/*"finishUpdateValue"*/;
        if ( StringLiteral_19784/*"finishUpdateValue"*/ )
        {
          v24 = sub_1C2E268(StringLiteral_19784/*"finishUpdateValue"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_59;
          v25 = StringLiteral_19784/*"finishUpdateValue"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 7 )
          goto LABEL_58;
        v23->m_Items[7] = (Il2CppObject *)v25;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->m_Items[7], v25, v70, v71, v72, v73, v74, v75);
        v24 = StringLiteral_24383/*"time"*/;
        if ( StringLiteral_24383/*"time"*/ )
        {
          v24 = sub_1C2E268(StringLiteral_24383/*"time"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_59;
          v25 = StringLiteral_24383/*"time"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v23->max_length <= 8 )
          goto LABEL_58;
        v23->m_Items[8] = (Il2CppObject *)v25;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->m_Items[8], v25, v76, v77, v78, v79, v80, v81);
        time_exptotal = this->fields.time_exptotal;
        v24 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal, v82, v83, v84);
        v91 = v24;
        if ( !v24 || (v24 = sub_1C2E268(v24, v23->obj.klass->_1.element_class)) != 0 )
        {
          if ( v23->max_length > 9 )
          {
            v23->m_Items[9] = (Il2CppObject *)v91;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->m_Items[9], v91, v85, v86, v87, v88, v89, v90);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v92 = iTween__Hash(v23, 0LL);
            iTween__ValueTo(gameObject, v92, 0LL);
            if ( this->fields.updateFlg )
            {
              v93 = Method_BattleResultExpComponent_endMoveFigure__;
              if ( (*((_BYTE *)Method_BattleResultExpComponent_endMoveFigure__ + 83) & 2) != 0 )
                v93 = (_QWORD *)sub_1C2E144(Method_BattleResultExpComponent_endMoveFigure__);
              v94 = (System_Reflection_MethodBase_o *)sub_1C2E110(v93, v93[4]);
              if ( !SeManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              CommonSeName = SeManager__GetCommonSeName(15, 0LL);
              v96 = OverwriteAssetSoundName__PlaySe(v94, CommonSeName, 0, 0LL);
              this->fields.MeterSePlayer = v96;
              sub_1C2E0D0(
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
          sub_1C2E390(v24, v25);
        }
      }
    }
LABEL_59:
    v103 = sub_1C2E3AC(v24);
    sub_1C2E254(v103, 0LL);
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_1C2E388(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_1C2E388(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C00C10 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_15659/*"WAIT_OPEN"*/, method);
    byte_4C00C10 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15659/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C00C0D & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_9426/*"NEXT"*/, method);
    byte_4C00C0D = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9426/*"NEXT"*/, 0LL);
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
  if ( (byte_4C00C08 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&equipId);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C2E12C(&StringLiteral_9393/*"N0"*/, v12);
    sub_1C2E12C(&StringLiteral_11301/*"RESULT_EQUIP_MAXEXP"*/, v13);
    sub_1C2E12C(&StringLiteral_839/*"+ {0}"*/, v14);
    byte_4C00C08 = 1;
  }
  entity = 0LL;
  v31 = 0;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  v16 = (Il2CppObject *)System_Int32__ToString_64041192((int32_t)&v32, (System_String_o *)StringLiteral_9393/*"N0"*/, 0LL);
  Instance = System_String__Format((System_String_o *)StringLiteral_839/*"+ {0}"*/, v16, 0LL);
  if ( !equip_getexpLabel )
    goto LABEL_27;
  UILabel__set_text(equip_getexpLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EquipExpMaster___);
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
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11301/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
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
    Instance = System_Int32__ToString_64041192((int32_t)&v31, (System_String_o *)StringLiteral_9393/*"N0"*/, 0LL);
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
    sub_1C2E388(Instance, v18);
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

  if ( (byte_4C00C04 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&level);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_2973/*"BATTLE_RESULTEXP_EQUIPLV"*/, v6);
    sub_1C2E12C(&StringLiteral_25453/*"{0}"*/, v7);
    byte_4C00C04 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2973/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v10 = v8;
  v11 = System_String__Equals_63243900(v8, (System_String_o *)StringLiteral_2973/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v11 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
    v17 = (System_String_o *)StringLiteral_25453/*"{0}"*/;
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
    sub_1C2E388(v8, v9);
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
  UILabel_o *mst_getexpLabel; // x22
  Il2CppObject *v16; // x0
  System_String_o *mst_slider; // x0
  __int64 v18; // x1
  float value; // s8
  UserExpMaster_o *v20; // x22
  int v21; // w23
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v23; // x2
  bool v24; // w21
  int32_t Level; // w24
  UILabel_o *v26; // x26
  System_String_o *v27; // x25
  char *monitor; // x8
  float v29; // s0
  BattleResultExpComponent_o *v30; // x0
  const MethodInfo *v31; // x4
  UILabel_o *v32; // x20
  int64_t v34; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF
  int64_t v36; // [xsp+18h] [xbp-68h] BYREF

  v36 = getexp;
  if ( (byte_4C00C07 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserExpMaster___, getexp);
    sub_1C2E12C(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v8);
    sub_1C2E12C(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__, v9);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C2E12C(&StringLiteral_9393/*"N0"*/, v12);
    sub_1C2E12C(&StringLiteral_11301/*"RESULT_EQUIP_MAXEXP"*/, v13);
    sub_1C2E12C(&StringLiteral_839/*"+ {0}"*/, v14);
    byte_4C00C07 = 1;
  }
  v34 = 0LL;
  entity = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  v16 = (Il2CppObject *)System_Int64__ToString_64046368((int64_t)&v36, (System_String_o *)StringLiteral_9393/*"N0"*/, 0LL);
  mst_slider = System_String__Format((System_String_o *)StringLiteral_839/*"+ {0}"*/, v16, 0LL);
  if ( !mst_getexpLabel )
    goto LABEL_31;
  UILabel__set_text(mst_getexpLabel, mst_slider, 0LL);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_31;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  mst_slider = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mst_slider )
    goto LABEL_31;
  mst_slider = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)mst_slider,
                                    (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !mst_slider )
    goto LABEL_31;
  v20 = (UserExpMaster_o *)mst_slider;
  mst_slider = (System_String_o *)UserExpMaster__GetLevelMax((UserExpMaster_o *)mst_slider, 0LL);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_31;
  v21 = (int)mst_slider;
  if ( (_DWORD)mst_slider == start_level )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0LL);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11301/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_31;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_31;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
    v24 = 0;
    Level = start_level;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    Level = UserExpMaster__getLevel(v20, nowexp, start_level, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                                      Level,
                                      (const MethodInfo_327B180 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_31;
    v26 = this->fields.mst_atexpLabel;
    v27 = mst_slider;
    v34 = (int64_t)mst_slider[1].klass - nowexp;
    mst_slider = System_Int64__ToString_64046368((int64_t)&v34, (System_String_o *)StringLiteral_9393/*"N0"*/, 0LL);
    if ( !v26 )
      goto LABEL_31;
    UILabel__set_text(v26, mst_slider, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                                      &entity,
                                      Level - 1,
                                      (const MethodInfo_327B1CC *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    monitor = 0LL;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_31;
      monitor = (char *)entity[1].monitor;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v29 = 1.0 - (double)((unsigned __int64)v27[1].klass - nowexp) / (double)((char *)v27[1].klass - monitor),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v29, 0LL),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0LL) )
    {
LABEL_31:
      sub_1C2E388(mst_slider, v18);
    }
    v24 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, Level, v23);
  if ( Level == v21 || BattleResultExpComponent__IsResultEquipMaxExpDisp(v30, start_level, Level, v20, v31) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( mst_slider )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0LL);
      v32 = this->fields.mst_atexpLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11301/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
      if ( v32 )
      {
        UILabel__set_text(v32, mst_slider, 0LL);
        mst_slider = (System_String_o *)this->fields.mst_slider;
        if ( mst_slider )
        {
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
          return v24;
        }
      }
    }
    goto LABEL_31;
  }
  return v24;
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

  if ( (byte_4C00C03 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&level);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_25453/*"{0}"*/, v6);
    sub_1C2E12C(&StringLiteral_2978/*"BATTLE_RESULTEXP_MASTERLV"*/, v7);
    byte_4C00C03 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2978/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v10 = v8;
  v11 = System_String__Equals_63243900(v8, (System_String_o *)StringLiteral_2978/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v11 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
    v17 = (System_String_o *)StringLiteral_25453/*"{0}"*/;
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
    sub_1C2E388(v8, v9);
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
  Il2CppObject *v76; // x0
  struct UserGameEntity_o **p_newGame; // x24
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  Il2CppObject *v84; // x0
  struct UserEquipEntity_o **p_newEquip; // x21
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  const MethodInfo *v92; // x4
  struct UserGameEntity_o *newGame; // x8
  UserEquipEntity_o *v94; // x9
  UILabel_o *equip_nameLabel; // x25
  __int64 v96; // x29
  __int64 v97; // x28
  int32_t v98; // w0
  UserEquipEntity_o *v99; // x29
  const MethodInfo *v100; // x5
  const MethodInfo *v101; // x2
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  __int64 v103; // x28
  const MethodInfo *v104; // x4
  int v105; // w27
  __int64 v106; // x8
  signed __int64 v107; // x20
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v110; // x8
  UserEquipEntity_o **v111; // x21
  int v112; // w8
  __int64 v113; // x26
  unsigned int v114; // w20
  struct UISprite_array *v115; // x8
  struct UISprite_array *v116; // x8
  struct UISprite_array *v117; // x8
  struct UISprite_array *v118; // x8
  const MethodInfo *v119; // x4
  struct UISprite_array *v120; // x8
  const MethodInfo *v121; // x4
  struct UISprite_array *v122; // x8
  int v123; // w8
  const MethodInfo *v124; // x2
  UILabel_o *equip_oldlevelLabel; // x22
  System_String_o *v126; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x22
  System_String_o *v129; // x1
  System_Text_StringBuilder_o *v130; // x22
  __int64 v131; // x23
  System_Int32_array *SkillIdList; // x24
  System_Int32_array *SkillLvList; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v134; // x27
  int v135; // w21
  unsigned __int64 v136; // x20
  int32_t *v137; // x25
  System_String_o *v138; // x28
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  Il2CppObject *v142; // x29
  Il2CppObject *v143; // x0
  System_String_o *v144; // x28
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x23
  UILabel_o *equip_confLabel; // x23
  int64_t oldRecordDamage; // x11
  int64_t bestTurnDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v151; // x21
  bool v152; // w1
  UILabel_o *damage_battleLabel; // x21
  struct UserEquipEntity_o **v154; // [xsp+0h] [xbp-A0h]
  UserEquipEntity_o *v155; // [xsp+8h] [xbp-98h]
  __int64 v156; // [xsp+18h] [xbp-88h]
  int32_t *v157; // [xsp+20h] [xbp-80h]
  int32_t v158; // [xsp+34h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C00C05 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___, oldGame);
    sub_1C2E12C(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserEquipMaster___, v18);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserGameMaster___, v19);
    sub_1C2E12C(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v20);
    sub_1C2E12C(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v21);
    sub_1C2E12C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v22);
    sub_1C2E12C(&System_Func_float__int__int__TypeInfo, v23);
    sub_1C2E12C(&int_TypeInfo, v24);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v25);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v26);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1C2E12C(&System_Text_StringBuilder_TypeInfo, v29);
    sub_1C2E12C(&Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__, v30);
    sub_1C2E12C(&BattleResultExpComponent___c__DisplayClass61_0_TypeInfo, v31);
    sub_1C2E12C(&StringLiteral_17599/*"bit_reward_shine01"*/, v32);
    sub_1C2E12C(&StringLiteral_11300/*"RESULT_EQEXP_UPSKILLLV"*/, v33);
    sub_1C2E12C(&StringLiteral_11299/*"RESULT_EQEXP_GETSKILL"*/, v34);
    sub_1C2E12C(&StringLiteral_17600/*"bit_reward_shine02"*/, v35);
    sub_1C2E12C(&StringLiteral_404/*"#,#"*/, v36);
    sub_1C2E12C(&StringLiteral_1/*""*/, v37);
    byte_4C00C05 = 1;
  }
  entity = 0LL;
  v38 = sub_1C2E378(BattleResultExpComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_134;
  *(_QWORD *)(v38 + 16) = oldGame;
  v47 = v38 + 16;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v38 + 16), (int64_t)oldGame, v41, v42, v43, v44, v45, v46);
  *(_QWORD *)(v38 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v38 + 24), (int64_t)this, v48, v49, v50, v51, v52, v53);
  *(_QWORD *)(v38 + 32) = masterLvInfoArray;
  v54 = (__int64 *)(v38 + 32);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v38 + 32), (int64_t)masterLvInfoArray, v55, v56, v57, v58, v59, v60);
  v61 = *(struct UserGameEntity_o **)(v38 + 16);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = v61;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.oldGame, (int64_t)v61, v63, v64, v65, v66, v67, v68);
  this->fields.oldEquip = oldEquip;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.oldEquip, (int64_t)oldEquip, v69, v70, v71, v72, v73, v74);
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
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Instance, knockdownResult, 0LL);
  }
  this->fields.updateFlg = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v76 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_327D6DC *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v76;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.newGame, (int64_t)v76, v78, v79, v80, v81, v82, v83);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !oldEquip )
    goto LABEL_134;
  if ( !Instance )
    goto LABEL_134;
  v84 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          oldEquip->fields.id,
          (const MethodInfo_327D6DC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  p_newEquip = &this->fields.newEquip;
  this->fields.newEquip = (struct UserEquipEntity_o *)v84;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.newEquip, (int64_t)v84, v86, v87, v88, v89, v90, v91);
  newGame = this->fields.newGame;
  if ( !newGame || !*(_QWORD *)v47 )
    goto LABEL_134;
  BattleResultExpComponent__setMasterExp(
    this,
    newGame->fields.exp - *(_QWORD *)(*(_QWORD *)v47 + 88LL),
    *(_QWORD *)(*(_QWORD *)v47 + 88LL),
    *(_DWORD *)(*(_QWORD *)v47 + 80LL),
    v92);
  v94 = oldEquip;
  equip_nameLabel = this->fields.equip_nameLabel;
  v96 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v97 = *(_QWORD *)&v94->fields.equipId.fields.fakeValue;
  v155 = v94;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v160.fields.currentCryptoKey = v96;
  *(_QWORD *)&v160.fields.fakeValue = v97;
  v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v160, 0LL);
  Instance = (__int64)EquipMaster__getEquipName(v98, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Instance, 0LL),
        v99 = v155,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v155->fields.equipId, 0LL),
        !*p_newEquip)
    || (Instance = BattleResultExpComponent__setEquipExp(
                     this,
                     Instance,
                     (*p_newEquip)->fields.exp - v155->fields.exp,
                     v155->fields.exp,
                     v155->fields.lv,
                     v100),
        !*(_QWORD *)v47)
    || (BattleResultExpComponent__setMasterLv(this, *(_DWORD *)(*(_QWORD *)v47 + 80LL), v101),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_134:
    sub_1C2E388(Instance, v40);
  }
  if ( !upParamList->max_length )
    goto LABEL_135;
  if ( !*(_QWORD *)v47 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  Instance = (__int64)upParamList->m_Items[0];
  v154 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Instance,
    *(_DWORD *)(*(_QWORD *)v47 + 80LL),
    (*p_newGame)->fields.lv,
    0LL);
  v103 = sub_1C2E378(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    (System_Func_float__int__int__o *)v103,
    (Il2CppObject *)v38,
    Method_BattleResultExpComponent___c__DisplayClass61_0__setResultData_b__0__,
    0LL);
  if ( !v103 )
    goto LABEL_134;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v103 + 24))(
               *(_QWORD *)(v103 + 64),
               35LL,
               *(_QWORD *)(v103 + 40),
               -186.0);
  v105 = Instance;
  if ( (int)Instance < 6 )
  {
    v106 = *v54;
    if ( *v54 )
    {
      v107 = 0LL;
      while ( v107 < *(int *)(v106 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_134;
        max_length = lvUpRewardSpArray->max_length;
        if ( v107 < (int)max_length )
        {
          if ( v107 >= max_length )
            goto LABEL_135;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v107],
            (System_String_o *)StringLiteral_17599/*"bit_reward_shine01"*/,
            v104);
          v106 = *v54;
        }
        ++v107;
        if ( !v106 )
          goto LABEL_134;
      }
    }
    v111 = &this->fields.newEquip;
    v123 = 35;
    goto LABEL_67;
  }
  v110 = this->fields.upParamList;
  if ( !v110 )
    goto LABEL_134;
  if ( !v110->max_length )
    goto LABEL_135;
  Instance = (__int64)v110->m_Items[0];
  v111 = &this->fields.newEquip;
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)UnityEngine_Component__GetComponentsInChildren_object__50105668(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_2FC8D44 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Instance )
    goto LABEL_134;
  v112 = *(_DWORD *)(Instance + 24);
  v113 = Instance;
  if ( v112 >= 1 )
  {
    v114 = 0;
    while ( v114 < v112 )
    {
      Instance = *(_QWORD *)(v113 + 8LL * (int)v114 + 32);
      if ( !Instance )
        goto LABEL_134;
      UILabel__set_fontSize((UILabel_o *)Instance, *(_DWORD *)(Instance + 424) - 2, 0LL);
      v112 = *(_DWORD *)(v113 + 24);
      if ( (int)++v114 >= v112 )
        goto LABEL_49;
    }
    goto LABEL_135;
  }
LABEL_49:
  v115 = this->fields.lvUpRewardSpArray;
  if ( !v115 )
    goto LABEL_134;
  if ( !v115->max_length )
    goto LABEL_135;
  Instance = (__int64)v115->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v116 = this->fields.lvUpRewardSpArray;
  if ( !v116 )
    goto LABEL_134;
  if ( !v116->max_length )
    goto LABEL_135;
  Instance = (__int64)v116->m_Items[0];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  v117 = this->fields.lvUpRewardSpArray;
  if ( !v117 )
    goto LABEL_134;
  if ( v117->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v117->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_width((UIWidget_o *)Instance, *(_DWORD *)(Instance + 168) - 5, 0LL);
  v118 = this->fields.lvUpRewardSpArray;
  if ( !v118 )
    goto LABEL_134;
  if ( v118->max_length <= 1 )
    goto LABEL_135;
  Instance = (__int64)v118->m_Items[1];
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, *(_DWORD *)(Instance + 172) - 5, 0LL);
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v103 + 24))(
               *(_QWORD *)(v103 + 64),
               31LL,
               *(_QWORD *)(v103 + 40),
               -186.0);
  v120 = this->fields.lvUpRewardSpArray;
  if ( !v120 )
    goto LABEL_134;
  if ( !v120->max_length )
    goto LABEL_135;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v120->m_Items[0],
    (System_String_o *)StringLiteral_17600/*"bit_reward_shine02"*/,
    v119);
  v122 = this->fields.lvUpRewardSpArray;
  if ( !v122 )
    goto LABEL_134;
  if ( v122->max_length <= 1 )
LABEL_135:
    sub_1C2E390(Instance, v40);
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v122->m_Items[1],
    (System_String_o *)StringLiteral_17600/*"bit_reward_shine02"*/,
    v121);
  v123 = 31;
LABEL_67:
  Instance = (__int64)this->fields.masterLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, v123 * v105 + 134, 0LL);
  if ( !*(_QWORD *)v47 )
    goto LABEL_134;
  if ( !*p_newGame )
    goto LABEL_134;
  this->fields.updateFlg |= *(_QWORD *)(*(_QWORD *)v47 + 88LL) != (*p_newGame)->fields.exp;
  BattleResultExpComponent__setEquipLv(this, v155->fields.lv, v124);
  equip_oldlevelLabel = this->fields.equip_oldlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)v155 + 48, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_134;
  v126 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v126, 0LL);
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_134;
  equip_newlevelLabel = this->fields.equip_newlevelLabel;
  Instance = (__int64)System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_134;
  v129 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v129, 0LL);
  v130 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v130, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillIdList(v155, 0LL);
  if ( !*v111 )
    goto LABEL_134;
  v131 = Instance;
  SkillIdList = UserEquipEntity__getSkillIdList(*v111, 0LL);
  Instance = (__int64)UserEquipEntity__getSkillLvList(v155, 0LL);
  v156 = Instance;
  if ( !*v111 )
    goto LABEL_134;
  SkillLvList = UserEquipEntity__getSkillLvList(*v111, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v131 )
    goto LABEL_134;
  if ( *(int *)(v131 + 24) >= 1 )
  {
    v134 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v135 = 0;
    v136 = 0LL;
    v137 = &SkillIdList->m_Items[1];
    v157 = &SkillLvList->m_Items[1];
    while ( 1 )
    {
      entity = 0LL;
      if ( !SkillIdList )
        goto LABEL_134;
      if ( v136 >= SkillIdList->max_length )
        goto LABEL_135;
      if ( !v134 )
        goto LABEL_134;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v134,
                   &entity,
                   v137[v136],
                   (const MethodInfo_327B1CC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( entity && (Instance & 1) != 0 )
      {
        if ( v136 >= *(unsigned int *)(v131 + 24) || v136 >= SkillIdList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v131 + 32 + 4 * v136) != v137[v136] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11299/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v144 = (System_String_o *)Instance;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          Instance = (__int64)System_String__Format(v144, Name, 0LL);
          if ( !v130 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_62397960(v130, (System_String_o *)Instance, 0LL);
LABEL_109:
          v135 += 3;
          goto LABEL_110;
        }
        if ( !v156 )
          goto LABEL_134;
        if ( v136 >= *(unsigned int *)(v156 + 24) )
          goto LABEL_135;
        if ( !SkillLvList )
          goto LABEL_134;
        if ( v136 >= SkillLvList->max_length )
          goto LABEL_135;
        if ( *(_DWORD *)(v156 + 32 + 4 * v136) != v157[v136] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11300/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !entity )
            goto LABEL_134;
          v138 = (System_String_o *)Instance;
          Instance = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
          if ( v136 >= SkillLvList->max_length )
            goto LABEL_135;
          v142 = (Il2CppObject *)Instance;
          v158 = v157[v136];
          v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v158, v139, v140, v141);
          Instance = (__int64)System_String__Format_63249956(v138, v142, v143, 0LL);
          if ( !v130 )
            goto LABEL_134;
          Instance = (__int64)System_Text_StringBuilder__AppendLine_62397960(v130, (System_String_o *)Instance, 0LL);
          v99 = v155;
          goto LABEL_109;
        }
      }
LABEL_110:
      if ( (__int64)++v136 >= *(int *)(v131 + 24) )
        goto LABEL_113;
    }
  }
  v135 = 0;
LABEL_113:
  eqConfRoot = this->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_134;
  LODWORD(v161.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.eqConfRoot, 0LL);
  v161.fields.y = (float)v135 * 10.0;
  v161.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v161, 0LL);
  Instance = (__int64)this->fields.eqLevelwindowSprite;
  if ( !Instance )
    goto LABEL_134;
  UIWidget__set_height((UIWidget_o *)Instance, 22 * v135 + 134, 0LL);
  if ( !v130 )
    goto LABEL_134;
  equip_confLabel = this->fields.equip_confLabel;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v130->klass->vtable._3_ToString.method)(
               v130,
               v130->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_134;
  UILabel__set_text(equip_confLabel, (System_String_o *)Instance, 0LL);
  if ( !*v154 )
    goto LABEL_134;
  bestTurnDamage = this->fields.bestTurnDamage;
  oldRecordDamage = this->fields.oldRecordDamage;
  damage_recordLabel = this->fields.damage_recordLabel;
  this->fields.updateFlg |= v99->fields.exp != (*v154)->fields.exp;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Instance = (__int64)System_Int64__ToString_64046368(
                          (int64_t)&this->fields.oldRecordDamage,
                          (System_String_o *)StringLiteral_404/*"#,#"*/,
                          0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
      damage_battleLabel = this->fields.damage_battleLabel;
      Instance = (__int64)System_Int64__ToString_64046368(
                            (int64_t)&this->fields.bestTurnDamage,
                            (System_String_o *)StringLiteral_404/*"#,#"*/,
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
                v152 = 0;
                goto LABEL_133;
              }
            }
          }
        }
      }
    }
    goto LABEL_134;
  }
  Instance = (__int64)System_Int64__ToString_64046368(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_404/*"#,#"*/,
                        0LL);
  if ( !damage_recordLabel )
    goto LABEL_134;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Instance, 0LL);
  v151 = this->fields.damage_battleLabel;
  Instance = (__int64)System_Int64__ToString_64046368(
                        (int64_t)&this->fields.bestTurnDamage,
                        (System_String_o *)StringLiteral_404/*"#,#"*/,
                        0LL);
  if ( !v151 )
    goto LABEL_134;
  UILabel__set_text(v151, (System_String_o *)Instance, 0LL);
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
  v152 = 1;
LABEL_133:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v152, 0LL);
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
  if ( (byte_4C00C0E & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isFinish);
    byte_4C00C0E = 1;
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
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_44487436(v16, 0LL);
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
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v24, 0LL);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0LL )
LABEL_21:
    sub_1C2E388(this, isFinish);
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
  struct BattleResultExpComponent_o *v23; // x8
  struct BattleResultMasterUpStatusComponent_array *v24; // x8
  struct BattleResultExpComponent_o *v25; // x8
  struct BattleResultMasterUpStatusComponent_array *v26; // x9
  struct UserGameEntity_o *v27; // x10
  struct UserGameEntity_o *v28; // x8
  int v29; // w22
  struct UserGameEntity_o *v30; // x8
  struct BattleResultExpComponent_o *v31; // x10
  struct UserGameEntity_o *v32; // x9
  struct BattleResultMasterUpStatusComponent_array *v33; // x10
  int32_t costMax; // w21
  int32_t v35; // w23
  struct BattleResultExpComponent_o *v36; // x8
  struct BattleResultMasterUpStatusComponent_array *v37; // x8
  struct BattleResultExpComponent_o *v38; // x8
  struct BattleResultMasterUpStatusComponent_array *v39; // x9
  struct UserGameEntity_o *v40; // x10
  struct UserGameEntity_o *v41; // x8
  struct BattleResultExpComponent_o *v42; // x8
  struct BattleResultMasterUpStatusComponent_array *v43; // x8
  struct UserGameEntity_o *v44; // x8
  struct BattleResultExpComponent_o *v45; // x10
  struct UserGameEntity_o *v46; // x9
  struct BattleResultMasterUpStatusComponent_array *v47; // x10
  int32_t friendKeep; // w21
  int32_t v49; // w23
  struct BattleResultExpComponent_o *v50; // x8
  struct BattleResultMasterUpStatusComponent_array *v51; // x8
  struct BattleResultExpComponent_o *v52; // x8
  struct BattleResultMasterUpStatusComponent_array *v53; // x9
  struct UserGameEntity_o *v54; // x10
  struct UserGameEntity_o *v55; // x8
  struct BattleResultExpComponent_o *v56; // x8
  struct BattleResultMasterUpStatusComponent_array *v57; // x8
  struct BattleResultExpComponent_o *v58; // x8
  struct BattleResultMasterUpStatusComponent_array *v59; // x8
  EventMaster_o *v60; // x21
  struct BattleResultExpComponent_o *v61; // x8
  struct BattleResultMasterUpStatusComponent_array *v62; // x8
  BattleResultMasterUpStatusComponent_o *v63; // x8
  System_String_o **v64; // x9
  struct BattleResultExpComponent_o *v65; // x8
  struct BattleResultMasterUpStatusComponent_array *v66; // x8
  struct MasterLvRewardInfo_array *masterLvInfoArray; // x8
  __int64 v68; // x8
  il2cpp_array_size_t v69; // w24
  int v70; // w25
  struct BattleResultExpComponent_o *v71; // x8
  struct UISprite_array *lvUpRewardSpArray; // x8
  struct BattleResultExpComponent_o *v73; // x8
  struct UISprite_array *v74; // x8
  struct MasterLvRewardInfo_array *v75; // x9
  UISprite_o *v76; // x22
  int32_t IconImageId; // w23
  struct MasterLvRewardInfo_array *v78; // x8
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  struct BattleResultExpComponent_o *v82; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v84; // x9
  MasterLvRewardInfo_o *v85; // x9
  Il2CppObject *v86; // x23
  UILabel_o *v87; // x22
  Il2CppObject *v88; // x0
  struct MasterLvRewardInfo_array *v89; // x8
  int v91; // [xsp+0h] [xbp-80h]
  int32_t num; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C00C1C & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, *(_QWORD *)&baseHeight);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1C2E12C(&int_TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C2E12C(&StringLiteral_2976/*"BATTLE_RESULTEXP_FULLAP"*/, v10);
    sub_1C2E12C(&StringLiteral_2975/*"BATTLE_RESULTEXP_FRIENDMAX"*/, v11);
    sub_1C2E12C(&StringLiteral_2971/*"BATTLE_RESULTEXP_APMAX"*/, v12);
    sub_1C2E12C(&StringLiteral_2977/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/, v13);
    sub_1C2E12C(&StringLiteral_2972/*"BATTLE_RESULTEXP_COSTMAX"*/, v14);
    sub_1C2E12C(&StringLiteral_1/*""*/, v15);
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)sub_1C2E12C(&StringLiteral_25490/*"{0} {1}個"*/, v16);
    byte_4C00C1C = 1;
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
    v29 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v23 = v6->fields.__4__this;
    if ( !v23 )
      goto LABEL_128;
    v24 = v23->fields.upParamList;
    if ( !v24 )
      goto LABEL_128;
    if ( v24->max_length <= 1 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v24->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2971/*"BATTLE_RESULTEXP_APMAX"*/,
      0LL);
    v25 = v6->fields.__4__this;
    if ( !v25 )
      goto LABEL_128;
    v26 = v25->fields.upParamList;
    if ( !v26 )
      goto LABEL_128;
    if ( v26->max_length <= 1 )
      goto LABEL_129;
    v27 = v6->fields.oldGame;
    if ( !v27 )
      goto LABEL_128;
    v28 = v25->fields.newGame;
    if ( !v28 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v26->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v27->fields.actMax,
      v28->fields.actMax,
      0LL);
    v29 = 1;
  }
  v30 = v6->fields.oldGame;
  if ( !v30 )
    goto LABEL_128;
  v31 = v6->fields.__4__this;
  if ( !v31 )
    goto LABEL_128;
  v32 = v31->fields.newGame;
  if ( !v32 )
    goto LABEL_128;
  v33 = v31->fields.upParamList;
  if ( !v33 )
    goto LABEL_128;
  if ( v33->max_length <= 2 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v33->m_Items[2];
  if ( !this )
    goto LABEL_128;
  costMax = v30->fields.costMax;
  v35 = v32->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( costMax >= v35 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2972/*"BATTLE_RESULTEXP_COSTMAX"*/,
      0LL);
    v38 = v6->fields.__4__this;
    if ( !v38 )
      goto LABEL_128;
    v39 = v38->fields.upParamList;
    if ( !v39 )
      goto LABEL_128;
    if ( v39->max_length <= 2 )
      goto LABEL_129;
    v40 = v6->fields.oldGame;
    if ( !v40 )
      goto LABEL_128;
    v41 = v38->fields.newGame;
    if ( !v41 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v39->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v40->fields.costMax,
      v41->fields.costMax,
      0LL);
    v42 = v6->fields.__4__this;
    if ( !v42 )
      goto LABEL_128;
    v43 = v42->fields.upParamList;
    if ( !v43 )
      goto LABEL_128;
    if ( v43->max_length <= 2 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v43->m_Items[2];
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
    v95.fields.y = height - (float)(v29 * baseHeight);
    v95.fields.x = 0.0;
    v95.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v95, 0LL);
    ++v29;
  }
  v44 = v6->fields.oldGame;
  if ( !v44 )
    goto LABEL_128;
  v45 = v6->fields.__4__this;
  if ( !v45 )
    goto LABEL_128;
  v46 = v45->fields.newGame;
  if ( !v46 )
    goto LABEL_128;
  v47 = v45->fields.upParamList;
  if ( !v47 )
    goto LABEL_128;
  if ( v47->max_length <= 3 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v47->m_Items[3];
  if ( !this )
    goto LABEL_128;
  friendKeep = v44->fields.friendKeep;
  v49 = v46->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  if ( friendKeep >= v49 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v50 = v6->fields.__4__this;
    if ( !v50 )
      goto LABEL_128;
    v51 = v50->fields.upParamList;
    if ( !v51 )
      goto LABEL_128;
    if ( v51->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v51->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2975/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      0LL);
    v52 = v6->fields.__4__this;
    if ( !v52 )
      goto LABEL_128;
    v53 = v52->fields.upParamList;
    if ( !v53 )
      goto LABEL_128;
    if ( v53->max_length <= 3 )
      goto LABEL_129;
    v54 = v6->fields.oldGame;
    if ( !v54 )
      goto LABEL_128;
    v55 = v52->fields.newGame;
    if ( !v55 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v53->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v54->fields.friendKeep,
      v55->fields.friendKeep,
      0LL);
    v56 = v6->fields.__4__this;
    if ( !v56 )
      goto LABEL_128;
    v57 = v56->fields.upParamList;
    if ( !v57 )
      goto LABEL_128;
    if ( v57->max_length <= 3 )
      goto LABEL_129;
    this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v57->m_Items[3];
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
    v96.fields.y = height - (float)(v29 * baseHeight);
    v96.fields.x = 0.0;
    v96.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v96, 0LL);
    ++v29;
  }
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___);
  v58 = v6->fields.__4__this;
  if ( !v58 )
    goto LABEL_128;
  v59 = v58->fields.upParamList;
  if ( !v59 )
    goto LABEL_128;
  if ( v59->max_length <= 4 )
    goto LABEL_129;
  v60 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v59->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v60 )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)EventMaster__IsBPEnable(v60, 0LL);
  v61 = v6->fields.__4__this;
  if ( !v61 )
    goto LABEL_128;
  v62 = v61->fields.upParamList;
  if ( !v62 )
    goto LABEL_128;
  if ( v62->max_length <= 4 )
    goto LABEL_129;
  v63 = v62->m_Items[4];
  if ( !v63 )
    goto LABEL_128;
  v64 = (System_String_o **)&StringLiteral_2977/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v64 = (System_String_o **)&StringLiteral_2976/*"BATTLE_RESULTEXP_FULLAP"*/;
  BattleResultMasterUpStatusComponent__setTitle(v63, *v64, 0LL);
  v65 = v6->fields.__4__this;
  if ( !v65 || (v66 = v65->fields.upParamList) == 0LL )
LABEL_128:
    sub_1C2E388(this, *(_QWORD *)&baseHeight);
  if ( v66->max_length <= 4 )
LABEL_129:
    sub_1C2E390(this, *(_QWORD *)&baseHeight);
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v66->m_Items[4];
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
  v97.fields.y = height - (float)(v29 * baseHeight);
  v97.fields.x = 0.0;
  v97.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v97, 0LL);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass61_0_o *)(unsigned int)(v29 + 1);
  if ( masterLvInfoArray )
  {
    v68 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v68 <= 2 && (int)v68 >= 1 )
    {
      v91 = v29 + 1;
      v69 = 0;
      v70 = baseHeight * (_DWORD)this;
      do
      {
        v71 = v6->fields.__4__this;
        if ( !v71 )
          goto LABEL_128;
        lvUpRewardSpArray = v71->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_128;
        if ( v69 >= lvUpRewardSpArray->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)lvUpRewardSpArray->m_Items[v69];
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
        v98.fields.y = height - (float)v70;
        v98.fields.x = -30.0;
        v98.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v98, 0LL);
        v73 = v6->fields.__4__this;
        if ( !v73 )
          goto LABEL_128;
        v74 = v73->fields.lvUpRewardSpArray;
        if ( !v74 )
          goto LABEL_128;
        if ( v69 >= v74->max_length )
          goto LABEL_129;
        v75 = v6->fields.masterLvInfoArray;
        if ( !v75 )
          goto LABEL_128;
        if ( v69 >= v75->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v75->m_Items[v69];
        if ( !this )
          goto LABEL_128;
        v76 = v74->m_Items[v69];
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)AtlasManager__SetItem(v76, IconImageId, 0LL);
        countText = (System_String_o *)StringLiteral_1/*""*/;
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        v78 = v6->fields.masterLvInfoArray;
        if ( !v78 )
          goto LABEL_128;
        if ( v69 >= v78->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)v78->m_Items[v69];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0LL);
        v82 = v6->fields.__4__this;
        if ( !v82 )
          goto LABEL_128;
        lvUpRewardLabelArray = v82->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_128;
        if ( v69 >= lvUpRewardLabelArray->max_length )
          goto LABEL_129;
        v84 = v6->fields.masterLvInfoArray;
        if ( !v84 )
          goto LABEL_128;
        if ( v69 >= v84->max_length )
          goto LABEL_129;
        v85 = v84->m_Items[v69];
        if ( !v85 )
          goto LABEL_128;
        v86 = (Il2CppObject *)nameText;
        v87 = lvUpRewardLabelArray->m_Items[v69];
        num = v85->fields.num;
        v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v79, v80, v81);
        this = (BattleResultExpComponent___c__DisplayClass61_0_o *)System_String__Format_63249956(
                                                                     (System_String_o *)StringLiteral_25490/*"{0} {1}個"*/,
                                                                     v86,
                                                                     v88,
                                                                     0LL);
        if ( !v87 )
          goto LABEL_128;
        UILabel__set_text(v87, (System_String_o *)this, 0LL);
        v89 = v6->fields.masterLvInfoArray;
        if ( !v89 )
          goto LABEL_128;
        ++v69;
        v70 += baseHeight;
      }
      while ( (signed int)v69 < (signed int)v89->max_length );
      LODWORD(this) = v91 + v69;
    }
  }
  return (int)this;
}