void __fastcall BattleResultExpComponent___ctor(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.time_exptotal = 1.0;
  this->fields.record_renewalColor = (struct UnityEngine_Color_o)xmmword_BEB710;
  this->fields.record_intactColor = _Q0;
  this->fields.damage_renewalColor = _Q0;
  this->fields.damage_intactColor = (struct UnityEngine_Color_o)xmmword_BEA7E0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultExpComponent__Close(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B480EE & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleResultExpComponent_endClose__, method);
    sub_1BDB878(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B480EE = 1;
  }
  window = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1BDBAC4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultExpComponent_endClose__, 0LL);
  if ( !window )
    sub_1BDBAD4(v6, v7);
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
  Il2CppObject *Object_object__50417328; // x21
  BattleResultExpComponent_o *v14; // x21
  BattleResultExpComponent_o *v15; // x22
  BattleResultExpComponent_o *v16; // x22
  BattleResultExpComponent_o *v17; // x22
  __int64 v18; // x2
  int m_CancellationTokenSource; // w8
  BattleResultExpComponent_o *v20; // x21
  unsigned int v21; // w22

  v8 = this;
  if ( (byte_4B480EA & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, data);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultExpComponent_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v12);
    byte_4B480EA = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__50417328 = AssetData__GetObject_object__50417328(
                              data,
                              effectName,
                              (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultExpComponent_o *)UnityEngine_Object__Instantiate_object_(
                                         Object_object__50417328,
                                         (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4B3E911 )
  {
    this = (BattleResultExpComponent_o *)sub_1BDB878(&UnityEngine_Vector3_TypeInfo, data);
    byte_4B3E911 = 1;
  }
  if ( !v16 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v17 = this;
  if ( !byte_4B3E916 )
  {
    this = (BattleResultExpComponent_o *)sub_1BDB878(&UnityEngine_Vector3_TypeInfo, data);
    byte_4B3E916 = 1;
  }
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultExpComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50893124(
                                         (UnityEngine_GameObject_o *)v14,
                                         (const MethodInfo_3089144 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v20 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= m_CancellationTokenSource )
        sub_1BDBADC(this, data, v18);
      this = (BattleResultExpComponent_o *)*((_QWORD *)&v20->fields.parentComp + (int)v21);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v20->fields.m_CancellationTokenSource;
      if ( (int)++v21 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BDBAD4(this, data);
  }
LABEL_21:
  this = (BattleResultExpComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v20,
    (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultExpComponent__Init(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  BattleWindowComponent_o *window; // x0
  UnityEngine_Object_o *knockdownRecordWindow; // x20
  System_String_o *v14; // x20
  System_String_o *v15; // x20

  if ( (byte_4B480E6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_2863/*"BATTLE_RESULTEXP_MASTERTITLE"*/, v6);
    sub_1BDB878(&StringLiteral_2858/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, v7);
    byte_4B480E6 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.effectUIList, (int32_t)v8, v9, v10);
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2863/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v14 = (System_String_o *)window;
  if ( !System_String__Equals_62607564((System_String_o *)window, (System_String_o *)StringLiteral_2863/*"BATTLE_RESULTEXP_MASTERTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.mst_Title;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v14, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2858/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL);
  if ( !window )
LABEL_33:
    sub_1BDBAD4(window, v11);
  v15 = (System_String_o *)window;
  if ( !System_String__Equals_62607564((System_String_o *)window, (System_String_o *)StringLiteral_2858/*"BATTLE_RESULTEXP_EQUIPTITLE"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.equip_Title;
    if ( window )
    {
      UILabel__set_text((UILabel_o *)window, v15, 0LL);
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

  if ( (byte_4B480FF & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, *(_QWORD *)&oldLv);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserExpMaster___, v8);
    sub_1BDB878(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B480FF = 1;
  }
  entity = 0LL;
  if ( oldLv == newLv )
    return 0;
  if ( !userExpMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserExpMaster___),
          (userExpMst = (UserExpMaster_o *)Instance) == 0LL) )
    {
LABEL_14:
      sub_1BDBAD4(Instance, v12);
    }
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)userExpMst,
                               &entity,
                               newLv + 1,
                               (const MethodInfo_32E1E88 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
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
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  System_Object_array *v33; // x21
  UnityEngine_GameObject_o *v34; // x0
  Il2CppObject *v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x22
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x22
  const MethodInfo *v47; // x3
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x22
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x22
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  System_Collections_Hashtable_o *v58; // x0
  __int64 v59; // x0
  System_Nullable_Vector3__o offset; // [xsp+0h] [xbp-70h]
  char v61[4]; // [xsp+28h] [xbp-48h] BYREF
  int v62; // [xsp+2Ch] [xbp-44h] BYREF
  int v63; // [xsp+38h] [xbp-38h] BYREF
  int32_t overwriteImageId; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4B480ED & 1) == 0 )
  {
    sub_1BDB878(&BattleRootComponent_TypeInfo, method);
    sub_1BDB878(&bool_TypeInfo, v3);
    sub_1BDB878(&object___TypeInfo, v4);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BDB878(&float_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1BDB878(&StringLiteral_24938/*"x"*/, v8);
    sub_1BDB878(&StringLiteral_5484/*"END_OPEN"*/, v9);
    sub_1BDB878(&StringLiteral_24121/*"time"*/, v10);
    sub_1BDB878(&StringLiteral_22451/*"oncompletetarget"*/, v11);
    sub_1BDB878(&StringLiteral_19027/*"endMoveFigure"*/, v12);
    sub_1BDB878(&StringLiteral_20980/*"islocal"*/, v13);
    sub_1BDB878(&StringLiteral_22449/*"oncomplete"*/, v14);
    sub_1BDB878(&iTween_TypeInfo, v15);
    byte_4B480ED = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  *(_QWORD *)&v65.fields.currentCryptoKey = v23;
  *(_QWORD *)&v65.fields.fakeValue = v22;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v65, 0LL);
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
    MasterFigureManagerOld__CreatePrefab_39691108(
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
  gameObject = (UnityEngine_GameObject_o *)sub_1BDB920(object___TypeInfo, 10LL);
  if ( !gameObject )
LABEL_72:
    sub_1BDBAD4(gameObject, v17);
  v33 = (System_Object_array *)gameObject;
  v34 = (UnityEngine_GameObject_o *)StringLiteral_24938/*"x"*/;
  if ( StringLiteral_24938/*"x"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BDB9B4(StringLiteral_24938/*"x"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_74;
    v35 = (Il2CppObject *)StringLiteral_24938/*"x"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !v33->max_length )
    goto LABEL_73;
  v33->m_Items[0] = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)v33->m_Items, (int32_t)v35, v31, v32);
  v63 = -1018691584;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v63, v36, v37, v38);
  v40 = (Il2CppObject *)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BDB9B4(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_74;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_73;
  v33->m_Items[1] = v40;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[1], (int32_t)v40, v31, v39);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_24121/*"time"*/;
  if ( StringLiteral_24121/*"time"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BDB9B4(StringLiteral_24121/*"time"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_74;
    v35 = (Il2CppObject *)StringLiteral_24121/*"time"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v33->max_length <= 2 )
    goto LABEL_73;
  v33->m_Items[2] = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[2], (int32_t)v35, v31, v41);
  v62 = 1061997773;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v62, v42, v43, v44);
  v46 = (Il2CppObject *)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BDB9B4(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_74;
  }
  if ( v33->max_length <= 3 )
    goto LABEL_73;
  v33->m_Items[3] = v46;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[3], (int32_t)v46, v31, v45);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_20980/*"islocal"*/;
  if ( StringLiteral_20980/*"islocal"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BDB9B4(StringLiteral_20980/*"islocal"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_74;
    v35 = (Il2CppObject *)StringLiteral_20980/*"islocal"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v33->max_length <= 4 )
    goto LABEL_73;
  v33->m_Items[4] = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[4], (int32_t)v35, v31, v47);
  v61[0] = 1;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v61, v48, v49, v50);
  v52 = (Il2CppObject *)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BDB9B4(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_74;
  }
  if ( v33->max_length <= 5 )
    goto LABEL_73;
  v33->m_Items[5] = v52;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[5], (int32_t)v52, v31, v51);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_22451/*"oncompletetarget"*/;
  if ( StringLiteral_22451/*"oncompletetarget"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BDB9B4(StringLiteral_22451/*"oncompletetarget"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_74;
    v35 = (Il2CppObject *)StringLiteral_22451/*"oncompletetarget"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v33->max_length <= 6 )
    goto LABEL_73;
  v33->m_Items[6] = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[6], (int32_t)v35, v31, v53);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v55 = (Il2CppObject *)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BDB9B4(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
    {
LABEL_74:
      v59 = sub_1BDBAF8(v34);
      sub_1BDB9A0(v59, 0LL);
    }
  }
  if ( v33->max_length <= 7 )
    goto LABEL_73;
  v33->m_Items[7] = v55;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[7], (int32_t)v55, v31, v54);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_22449/*"oncomplete"*/;
  if ( StringLiteral_22449/*"oncomplete"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BDB9B4(StringLiteral_22449/*"oncomplete"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_74;
    v35 = (Il2CppObject *)StringLiteral_22449/*"oncomplete"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v33->max_length <= 8 )
    goto LABEL_73;
  v33->m_Items[8] = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[8], (int32_t)v35, v31, v56);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_19027/*"endMoveFigure"*/;
  if ( StringLiteral_19027/*"endMoveFigure"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_1BDB9B4(StringLiteral_19027/*"endMoveFigure"*/, v33->obj.klass->_1.element_class);
    if ( v34 )
    {
      v35 = (Il2CppObject *)StringLiteral_19027/*"endMoveFigure"*/;
      goto LABEL_66;
    }
    goto LABEL_74;
  }
  v35 = 0LL;
LABEL_66:
  if ( v33->max_length <= 9 )
LABEL_73:
    sub_1BDBADC(v34, v35, v31);
  v33->m_Items[9] = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[9], (int32_t)v35, v31, v57);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v58 = iTween__Hash(v33, 0LL);
  iTween__MoveFrom_62211296(figureRoot, v58, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5484/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultExpComponent__SetEquipExp(
        BattleResultExpComponent_o *this,
        int32_t equipId,
        int32_t getExp,
        int32_t nowExp,
        int32_t startLevel,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x29
  UILabel_o *equip_getexpLabel; // x23
  System_String_o *v19; // x25
  Il2CppObject *v20; // x26
  Il2CppObject *v21; // x0
  System_String_o *Instance; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x0
  EquipExpMaster_o *v25; // x25
  int32_t Level; // w22
  int32_t LevelMax; // w24
  System_String_o *v28; // x23
  UILabel_o *equip_atexpLabel; // x26
  const MethodInfo *v30; // x2
  int32_t exp; // w21
  float value; // s0
  float v33; // s8
  float v34; // s0
  __int64 v36; // [xsp+0h] [xbp-80h] BYREF
  EquipExpEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  int v38; // [xsp+18h] [xbp-68h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-64h] BYREF

  v39 = getExp;
  if ( (byte_4B480EC & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&equipId);
    sub_1BDB878(&LocalizationManager_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&StringLiteral_11109/*"RESULT_GET_EQUIP_EXP_ADD"*/, v13);
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, v14);
    sub_1BDB878(&StringLiteral_11099/*"RESULT_EQUIP_MAXEXP"*/, v15);
    sub_1BDB878(&StringLiteral_814/*"+ {0}"*/, v16);
    byte_4B480EC = 1;
  }
  v36 = 0LL;
  entity = 0LL;
  v38 = 0;
  v17 = getExp;
  equip_getexpLabel = this->fields.equip_getexpLabel;
  if ( v17 - this->fields.defaultExp < 1 )
  {
    v24 = (Il2CppObject *)System_Int32__ToString_64087256((int32_t)&v39, (System_String_o *)StringLiteral_9229/*"N0"*/, 0LL);
    Instance = System_String__Format((System_String_o *)StringLiteral_814/*"+ {0}"*/, v24, 0LL);
    if ( !equip_getexpLabel )
      goto LABEL_32;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11109/*"RESULT_GET_EQUIP_EXP_ADD"*/, 0LL);
    v20 = (Il2CppObject *)System_Int64__ToString_64092432(
                            (int64_t)&this->fields.defaultExp,
                            (System_String_o *)StringLiteral_9229/*"N0"*/,
                            0LL);
    v36 = v17 - this->fields.defaultExp;
    v21 = (Il2CppObject *)System_Int64__ToString_64092432((int64_t)&v36, (System_String_o *)StringLiteral_9229/*"N0"*/, 0LL);
    Instance = System_String__Format_62613552(v19, v20, v21, 0LL);
    if ( !equip_getexpLabel )
      goto LABEL_32;
  }
  UILabel__set_text(equip_getexpLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EquipExpMaster___);
  if ( !Instance )
    goto LABEL_32;
  v25 = (EquipExpMaster_o *)Instance;
  Level = EquipExpMaster__getLevel((EquipExpMaster_o *)Instance, equipId, nowExp, startLevel, 0LL);
  LevelMax = EquipExpMaster__getLevelMax(v25, equipId, 0LL);
  Instance = (System_String_o *)EquipExpMaster__GetEntity(v25, equipId, Level, 0LL);
  if ( !this->fields.equip_nextSprite )
    goto LABEL_32;
  v28 = Instance;
  if ( Level == LevelMax )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 0, 0LL);
    equip_atexpLabel = this->fields.equip_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11099/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_32;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.equip_nextSprite, 1, 0LL);
    if ( !v28 )
      goto LABEL_32;
    equip_atexpLabel = this->fields.equip_atexpLabel;
    v38 = LODWORD(v28[1].klass) - nowExp;
    Instance = System_Int32__ToString_64087256((int32_t)&v38, (System_String_o *)StringLiteral_9229/*"N0"*/, 0LL);
    if ( !equip_atexpLabel )
      goto LABEL_32;
  }
  UILabel__set_text(equip_atexpLabel, Instance, 0LL);
  BattleResultExpComponent__setEquipLv(this, Level, v30);
  Instance = (System_String_o *)EquipExpMaster__TryGetEntity(v25, &entity, equipId, Level - 1, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    exp = entity->fields.exp;
  }
  else
  {
    exp = 0;
  }
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
LABEL_32:
    sub_1BDBAD4(Instance, v23);
  value = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  v33 = value;
  if ( Level == LevelMax )
  {
    v34 = 1.0;
    if ( !Instance )
      goto LABEL_32;
  }
  else
  {
    if ( !v28 || !Instance )
      goto LABEL_32;
    v34 = 1.0 - (float)((float)(LODWORD(v28[1].klass) - nowExp) / (float)(LODWORD(v28[1].klass) - exp));
  }
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v34, 0LL);
  Instance = (System_String_o *)this->fields.equip_slider;
  if ( !Instance )
    goto LABEL_32;
  return v33 != UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL);
}


bool __fastcall BattleResultExpComponent__SetMasterExp(
        BattleResultExpComponent_o *this,
        int64_t getExp,
        int64_t nowExp,
        int32_t startLevel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UILabel_o *mst_getexpLabel; // x23
  System_String_o *v18; // x25
  Il2CppObject *v19; // x26
  Il2CppObject *v20; // x0
  System_String_o *mst_slider; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x0
  float value; // s8
  UserExpMaster_o *v25; // x22
  int v26; // w23
  UILabel_o *mst_atexpLabel; // x21
  const MethodInfo *v28; // x2
  bool v29; // w21
  int32_t Level; // w24
  UILabel_o *v31; // x26
  System_String_o *v32; // x25
  char *monitor; // x8
  float v34; // s0
  BattleResultExpComponent_o *v35; // x0
  const MethodInfo *v36; // x4
  UILabel_o *v37; // x20
  Il2CppObject *v39; // [xsp+0h] [xbp-80h] BYREF
  int64_t v40; // [xsp+8h] [xbp-78h] BYREF
  int64_t v41; // [xsp+18h] [xbp-68h] BYREF

  v41 = getExp;
  if ( (byte_4B480EB & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserExpMaster___, getExp);
    sub_1BDB878(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v9);
    sub_1BDB878(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__, v10);
    sub_1BDB878(&LocalizationManager_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&StringLiteral_11110/*"RESULT_GET_MASTER_EXP_ADD"*/, v13);
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, v14);
    sub_1BDB878(&StringLiteral_11099/*"RESULT_EQUIP_MAXEXP"*/, v15);
    sub_1BDB878(&StringLiteral_814/*"+ {0}"*/, v16);
    byte_4B480EB = 1;
  }
  v39 = 0LL;
  v40 = 0LL;
  mst_getexpLabel = this->fields.mst_getexpLabel;
  if ( getExp - this->fields.defaultExp < 1 )
  {
    v23 = (Il2CppObject *)System_Int64__ToString_64092432((int64_t)&v41, (System_String_o *)StringLiteral_9229/*"N0"*/, 0LL);
    mst_slider = System_String__Format((System_String_o *)StringLiteral_814/*"+ {0}"*/, v23, 0LL);
    if ( !mst_getexpLabel )
      goto LABEL_36;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"RESULT_GET_MASTER_EXP_ADD"*/, 0LL);
    v19 = (Il2CppObject *)System_Int64__ToString_64092432(
                            (int64_t)&this->fields.defaultExp,
                            (System_String_o *)StringLiteral_9229/*"N0"*/,
                            0LL);
    v40 = getExp - this->fields.defaultExp;
    v20 = (Il2CppObject *)System_Int64__ToString_64092432((int64_t)&v40, (System_String_o *)StringLiteral_9229/*"N0"*/, 0LL);
    mst_slider = System_String__Format_62613552(v18, v19, v20, 0LL);
    if ( !mst_getexpLabel )
      goto LABEL_36;
  }
  UILabel__set_text(mst_getexpLabel, mst_slider, 0LL);
  mst_slider = (System_String_o *)this->fields.mst_slider;
  if ( !mst_slider )
    goto LABEL_36;
  value = UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  mst_slider = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mst_slider )
    goto LABEL_36;
  mst_slider = (System_String_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)mst_slider,
                                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !mst_slider )
    goto LABEL_36;
  v25 = (UserExpMaster_o *)mst_slider;
  mst_slider = (System_String_o *)UserExpMaster__GetLevelMax((UserExpMaster_o *)mst_slider, 0LL);
  if ( !this->fields.mst_nextSprite )
    goto LABEL_36;
  v26 = (int)mst_slider;
  if ( (_DWORD)mst_slider == startLevel )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 0, 0LL);
    mst_atexpLabel = this->fields.mst_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11099/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !mst_atexpLabel )
      goto LABEL_36;
    UILabel__set_text(mst_atexpLabel, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_36;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
    v29 = 0;
    Level = startLevel;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mst_nextSprite, 1, 0LL);
    Level = UserExpMaster__getLevel(v25, nowExp, startLevel, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v25,
                                      Level,
                                      (const MethodInfo_32E1E3C *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( !mst_slider )
      goto LABEL_36;
    v31 = this->fields.mst_atexpLabel;
    v32 = mst_slider;
    v40 = (int64_t)mst_slider[1].klass - nowExp;
    mst_slider = System_Int64__ToString_64092432((int64_t)&v40, (System_String_o *)StringLiteral_9229/*"N0"*/, 0LL);
    if ( !v31 )
      goto LABEL_36;
    UILabel__set_text(v31, mst_slider, 0LL);
    mst_slider = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v25,
                                      &v39,
                                      Level - 1,
                                      (const MethodInfo_32E1E88 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__TryGetEntity__);
    monitor = 0LL;
    if ( ((unsigned __int8)mst_slider & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_36;
      monitor = (char *)v39[1].monitor;
    }
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider
      || (v34 = 1.0 - (double)((unsigned __int64)v32[1].klass - nowExp) / (double)((char *)v32[1].klass - monitor),
          UIProgressBar__set_value((UIProgressBar_o *)mst_slider, v34, 0LL),
          (mst_slider = (System_String_o *)this->fields.mst_slider) == 0LL) )
    {
LABEL_36:
      sub_1BDBAD4(mst_slider, v22);
    }
    v29 = value != UIProgressBar__get_value((UIProgressBar_o *)mst_slider, 0LL);
  }
  BattleResultExpComponent__setMasterLv(this, Level, v28);
  if ( Level == v26 || BattleResultExpComponent__IsResultEquipMaxExpDisp(v35, startLevel, Level, v25, v36) )
  {
    mst_slider = (System_String_o *)this->fields.mst_nextSprite;
    if ( !mst_slider )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mst_slider, 0, 0LL);
    v37 = this->fields.mst_atexpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mst_slider = LocalizationManager__Get((System_String_o *)StringLiteral_11099/*"RESULT_EQUIP_MAXEXP"*/, 0LL);
    if ( !v37 )
      goto LABEL_36;
    UILabel__set_text(v37, mst_slider, 0LL);
    mst_slider = (System_String_o *)this->fields.mst_slider;
    if ( !mst_slider )
      goto LABEL_36;
    UIProgressBar__set_value((UIProgressBar_o *)mst_slider, 1.0, 0LL);
  }
  return v29;
}


void __fastcall BattleResultExpComponent__SetResultData(
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
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x25
  __int64 Master_object; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 *v47; // x24
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct UserGameEntity_o **p_oldGame; // x26
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_oldEquip; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  UnityEngine_Object_o *knockdownRecordWindow; // x23
  int32_t playerExp; // w8
  Il2CppObject *v58; // x0
  struct UserGameEntity_o **p_newGame; // x23
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x0
  struct UserEquipEntity_o **p_newEquip; // x20
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x4
  struct UserGameEntity_o *newGame; // x8
  struct UserEquipEntity_o *oldEquip; // x8
  UILabel_o *equip_nameLabel; // x27
  __int64 v70; // x28
  __int64 v71; // x29
  int32_t v72; // w0
  const MethodInfo *v73; // x5
  const MethodInfo *v74; // x2
  struct UserGameEntity_o *oldGame; // x8
  __int64 v76; // x2
  struct BattleResultMasterUpStatusComponent_array *upParamList; // x8
  __int64 v78; // x26
  const MethodInfo *v79; // x4
  int v80; // w25
  __int64 v81; // x8
  signed __int64 v82; // x20
  struct UISprite_array *lvUpRewardSpArray; // x9
  unsigned __int64 max_length; // x10
  struct BattleResultMasterUpStatusComponent_array *v85; // x8
  int v86; // w8
  __int64 v87; // x24
  unsigned int v88; // w20
  struct UISprite_array *v89; // x8
  struct UISprite_array *v90; // x8
  struct UISprite_array *v91; // x8
  struct UISprite_array *v92; // x8
  const MethodInfo *v93; // x4
  struct UISprite_array *v94; // x8
  const MethodInfo *v95; // x4
  struct UISprite_array *v96; // x8
  int v97; // w8
  const MethodInfo *v98; // x2
  struct UserGameEntity_o *v99; // x8
  int64_t exp; // x10
  struct UserEquipEntity_o *v101; // x8
  struct UserEquipEntity_o *v102; // x8
  UILabel_o *equip_oldlevelLabel; // x21
  System_String_o *v104; // x1
  struct UserEquipEntity_o *newEquip; // x8
  UILabel_o *equip_newlevelLabel; // x21
  System_String_o *v107; // x1
  System_Text_StringBuilder_o *v108; // x21
  __int64 v109; // x23
  UserEquipEntity_o *v110; // x8
  __int64 v111; // x22
  __int64 v112; // x28
  System_Int32_array *SkillLvList; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v114; // x26
  int v115; // w29
  unsigned __int64 v116; // x20
  __int64 v117; // x24
  System_Int32_array *v118; // x19
  __int64 v119; // x25
  System_String_o *v120; // x27
  __int64 v121; // x3
  __int64 v122; // x4
  Il2CppObject *v123; // x28
  Il2CppObject *v124; // x0
  System_String_o *v125; // x27
  Il2CppObject *Name; // x0
  UnityEngine_Transform_o *eqConfRoot; // x22
  UILabel_o *equip_confLabel; // x22
  struct UserEquipEntity_o *v129; // x8
  int64_t oldRecordDamage; // x11
  int64_t bestTurnDamage; // x12
  UILabel_o *damage_recordLabel; // x21
  UILabel_o *v133; // x21
  bool v134; // w1
  UILabel_o *damage_battleLabel; // x21
  UserEquipEntity_o **v136; // [xsp+0h] [xbp-A0h]
  BattleResultExpComponent_o *v137; // [xsp+8h] [xbp-98h]
  __int64 v138; // [xsp+10h] [xbp-90h]
  int32_t *v139; // [xsp+18h] [xbp-88h]
  int32_t v140; // [xsp+2Ch] [xbp-74h] BYREF
  Il2CppObject *v141; // [xsp+30h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B480E9 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel___, oldGameEntity);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, v19);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEquipMaster___, v20);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserGameMaster___, v21);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v22);
    sub_1BDB878(&DataManager_TypeInfo, v23);
    sub_1BDB878(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v24);
    sub_1BDB878(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v25);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v26);
    sub_1BDB878(&System_Func_float__int__int__TypeInfo, v27);
    sub_1BDB878(&int_TypeInfo, v28);
    sub_1BDB878(&LocalizationManager_TypeInfo, v29);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v30);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, v33);
    sub_1BDB878(&Method_BattleResultExpComponent___c__DisplayClass62_0__SetResultData_b__0__, v34);
    sub_1BDB878(&BattleResultExpComponent___c__DisplayClass62_0_TypeInfo, v35);
    sub_1BDB878(&StringLiteral_17280/*"bit_reward_shine01"*/, v36);
    sub_1BDB878(&StringLiteral_11098/*"RESULT_EQEXP_UPSKILLLV"*/, v37);
    sub_1BDB878(&StringLiteral_11097/*"RESULT_EQEXP_GETSKILL"*/, v38);
    sub_1BDB878(&StringLiteral_17281/*"bit_reward_shine02"*/, v39);
    sub_1BDB878(&StringLiteral_396/*"#,#"*/, v40);
    sub_1BDB878(&StringLiteral_1/*""*/, v41);
    byte_4B480E9 = 1;
  }
  v141 = 0LL;
  entity = 0LL;
  v42 = sub_1BDBAC4(BattleResultExpComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_147;
  *(_QWORD *)(v42 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v42 + 16), (int32_t)this, v45, v46);
  *(_QWORD *)(v42 + 24) = masterLvInfoArray;
  v47 = (__int64 *)(v42 + 24);
  sub_1BDB81C((CGThumbnailListItem_o *)(v42 + 24), (int32_t)masterLvInfoArray, v48, v49);
  p_oldGame = &this->fields.oldGame;
  this->fields.oldGame = oldGameEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.oldGame, (int32_t)oldGameEntity, v51, v52);
  p_oldEquip = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.oldEquip;
  this->fields.oldEquip = oldEquipEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.oldEquip, (int32_t)oldEquipEntity, v54, v55);
  this->fields.bestTurnDamage = maxTurnDamage;
  this->fields.oldRecordDamage = oldRecord;
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    Master_object = (__int64)this->fields.knockdownRecordWindow;
    if ( !Master_object )
      goto LABEL_147;
    BattleResultKnockdownComponent__setData((BattleResultKnockdownComponent_o *)Master_object, knockdownResult, 0LL);
  }
  this->fields.updateFlg = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_147;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, phase, 0LL);
  playerExp = (int)entity;
  if ( entity )
    playerExp = entity->fields.playerExp;
  this->fields.defaultExp = playerExp;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !*p_oldGame )
    goto LABEL_147;
  if ( !Master_object )
    goto LABEL_147;
  v58 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (*p_oldGame)->fields.userId,
          (const MethodInfo_32E4398 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
  p_newGame = &this->fields.newGame;
  this->fields.newGame = (struct UserGameEntity_o *)v58;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.newGame, (int32_t)v58, v60, v61);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !*p_oldEquip )
    goto LABEL_147;
  if ( !Master_object )
    goto LABEL_147;
  v62 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          *(_QWORD *)&(*p_oldEquip)[1].fields.currentCryptoKey,
          (const MethodInfo_32E4398 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  p_newEquip = &this->fields.newEquip;
  this->fields.newEquip = (struct UserEquipEntity_o *)v62;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.newEquip, (int32_t)v62, v64, v65);
  newGame = this->fields.newGame;
  if ( !newGame )
    goto LABEL_147;
  if ( !*p_oldGame )
    goto LABEL_147;
  Master_object = BattleResultExpComponent__SetMasterExp(
                    this,
                    newGame->fields.exp - (*p_oldGame)->fields.exp,
                    (*p_oldGame)->fields.exp,
                    (*p_oldGame)->fields.lv,
                    v66);
  oldEquip = this->fields.oldEquip;
  if ( !oldEquip )
    goto LABEL_147;
  equip_nameLabel = this->fields.equip_nameLabel;
  v71 = *(_QWORD *)&oldEquip->fields.equipId.fields.currentCryptoKey;
  v70 = *(_QWORD *)&oldEquip->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v143.fields.currentCryptoKey = v71;
  *(_QWORD *)&v143.fields.fakeValue = v70;
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v143, 0LL);
  Master_object = (__int64)EquipMaster__getEquipName(v72, 0LL);
  if ( !equip_nameLabel
    || (UILabel__set_text(equip_nameLabel, (System_String_o *)Master_object, 0LL), !*p_oldEquip)
    || (Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_oldEquip)[2], 0LL),
        !*p_newEquip)
    || !*p_oldEquip
    || (Master_object = BattleResultExpComponent__SetEquipExp(
                          this,
                          Master_object,
                          (*p_newEquip)->fields.exp - (*p_oldEquip)[3].fields.hiddenValue,
                          (*p_oldEquip)[3].fields.hiddenValue,
                          (*p_oldEquip)[3].fields.currentCryptoKey,
                          v73),
        (oldGame = this->fields.oldGame) == 0LL)
    || (BattleResultExpComponent__setMasterLv(this, oldGame->fields.lv, v74),
        (upParamList = this->fields.upParamList) == 0LL) )
  {
LABEL_147:
    sub_1BDBAD4(Master_object, v44);
  }
  if ( !upParamList->max_length )
    goto LABEL_148;
  if ( !*p_oldGame )
    goto LABEL_147;
  if ( !*p_newGame )
    goto LABEL_147;
  Master_object = (__int64)upParamList->m_Items[0];
  v136 = &this->fields.newEquip;
  if ( !Master_object )
    goto LABEL_147;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)Master_object,
    (*p_oldGame)->fields.lv,
    (*p_newGame)->fields.lv,
    0LL);
  v78 = sub_1BDBAC4(System_Func_float__int__int__TypeInfo);
  System_Func_float__int__int____ctor(
    (System_Func_float__int__int__o *)v78,
    (Il2CppObject *)v42,
    Method_BattleResultExpComponent___c__DisplayClass62_0__SetResultData_b__0__,
    0LL);
  if ( !v78 )
    goto LABEL_147;
  Master_object = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v78 + 24))(
                    *(_QWORD *)(v78 + 64),
                    35LL,
                    *(_QWORD *)(v78 + 40),
                    -186.0);
  v80 = Master_object;
  if ( (int)Master_object < 6 )
  {
    v81 = *v47;
    if ( *v47 )
    {
      v82 = 0LL;
      while ( v82 < *(int *)(v81 + 24) )
      {
        lvUpRewardSpArray = this->fields.lvUpRewardSpArray;
        if ( !lvUpRewardSpArray )
          goto LABEL_147;
        max_length = lvUpRewardSpArray->max_length;
        if ( v82 < (int)max_length )
        {
          if ( v82 >= max_length )
            goto LABEL_148;
          BattleResultExpComponent__CreateRewardEffect(
            this,
            resultAssetData,
            lvUpRewardSpArray->m_Items[v82],
            (System_String_o *)StringLiteral_17280/*"bit_reward_shine01"*/,
            v79);
          v81 = *v47;
        }
        ++v82;
        if ( !v81 )
          goto LABEL_147;
      }
    }
    v97 = 35;
    goto LABEL_75;
  }
  v85 = this->fields.upParamList;
  if ( !v85 )
    goto LABEL_147;
  if ( !v85->max_length )
    goto LABEL_148;
  Master_object = (__int64)v85->m_Items[0];
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Component__GetComponentsInChildren_object__50507220(
                             (UnityEngine_Component_o *)Master_object,
                             (const MethodInfo_302ADD4 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel___);
  if ( !Master_object )
    goto LABEL_147;
  v86 = *(_DWORD *)(Master_object + 24);
  v87 = Master_object;
  if ( v86 >= 1 )
  {
    v88 = 0;
    while ( v88 < v86 )
    {
      Master_object = *(_QWORD *)(v87 + 8LL * (int)v88 + 32);
      if ( !Master_object )
        goto LABEL_147;
      UILabel__set_fontSize((UILabel_o *)Master_object, *(_DWORD *)(Master_object + 424) - 2, 0LL);
      v86 = *(_DWORD *)(v87 + 24);
      if ( (int)++v88 >= v86 )
        goto LABEL_57;
    }
    goto LABEL_148;
  }
LABEL_57:
  v89 = this->fields.lvUpRewardSpArray;
  if ( !v89 )
    goto LABEL_147;
  if ( !v89->max_length )
    goto LABEL_148;
  Master_object = (__int64)v89->m_Items[0];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_width((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 168) - 5, 0LL);
  v90 = this->fields.lvUpRewardSpArray;
  if ( !v90 )
    goto LABEL_147;
  if ( !v90->max_length )
    goto LABEL_148;
  Master_object = (__int64)v90->m_Items[0];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 172) - 5, 0LL);
  v91 = this->fields.lvUpRewardSpArray;
  if ( !v91 )
    goto LABEL_147;
  if ( v91->max_length <= 1 )
    goto LABEL_148;
  Master_object = (__int64)v91->m_Items[1];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_width((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 168) - 5, 0LL);
  v92 = this->fields.lvUpRewardSpArray;
  if ( !v92 )
    goto LABEL_147;
  if ( v92->max_length <= 1 )
    goto LABEL_148;
  Master_object = (__int64)v92->m_Items[1];
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, *(_DWORD *)(Master_object + 172) - 5, 0LL);
  Master_object = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float))(v78 + 24))(
                    *(_QWORD *)(v78 + 64),
                    31LL,
                    *(_QWORD *)(v78 + 40),
                    -186.0);
  v94 = this->fields.lvUpRewardSpArray;
  if ( !v94 )
    goto LABEL_147;
  if ( !v94->max_length )
    goto LABEL_148;
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v94->m_Items[0],
    (System_String_o *)StringLiteral_17281/*"bit_reward_shine02"*/,
    v93);
  v96 = this->fields.lvUpRewardSpArray;
  if ( !v96 )
    goto LABEL_147;
  if ( v96->max_length <= 1 )
LABEL_148:
    sub_1BDBADC(Master_object, v44, v76);
  BattleResultExpComponent__CreateRewardEffect(
    this,
    resultAssetData,
    v96->m_Items[1],
    (System_String_o *)StringLiteral_17281/*"bit_reward_shine02"*/,
    v95);
  v97 = 31;
LABEL_75:
  Master_object = (__int64)this->fields.masterLevelwindowSprite;
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, v97 * v80 + 134, 0LL);
  v99 = this->fields.oldGame;
  if ( !v99 )
    goto LABEL_147;
  if ( !*p_newGame )
    goto LABEL_147;
  exp = v99->fields.exp;
  v101 = this->fields.oldEquip;
  this->fields.updateFlg |= exp != (*p_newGame)->fields.exp;
  if ( !v101 )
    goto LABEL_147;
  BattleResultExpComponent__setEquipLv(this, v101->fields.lv, v98);
  v102 = this->fields.oldEquip;
  if ( !v102 )
    goto LABEL_147;
  equip_oldlevelLabel = this->fields.equip_oldlevelLabel;
  Master_object = (__int64)System_Int32__ToString((int)v102 + 48, 0LL);
  if ( !equip_oldlevelLabel )
    goto LABEL_147;
  v104 = Master_object ? (System_String_o *)Master_object : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_oldlevelLabel, v104, 0LL);
  newEquip = this->fields.newEquip;
  if ( !newEquip )
    goto LABEL_147;
  equip_newlevelLabel = this->fields.equip_newlevelLabel;
  Master_object = (__int64)System_Int32__ToString((int)newEquip + 48, 0LL);
  if ( !equip_newlevelLabel )
    goto LABEL_147;
  v107 = Master_object ? (System_String_o *)Master_object : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(equip_newlevelLabel, v107, 0LL);
  v108 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v108, 0LL);
  Master_object = (__int64)*p_oldEquip;
  if ( !*p_oldEquip )
    goto LABEL_147;
  Master_object = (__int64)UserEquipEntity__getSkillIdList((UserEquipEntity_o *)Master_object, 0LL);
  if ( !*v136 )
    goto LABEL_147;
  v109 = Master_object;
  Master_object = (__int64)UserEquipEntity__getSkillIdList(*v136, 0LL);
  v110 = (UserEquipEntity_o *)*p_oldEquip;
  if ( !*p_oldEquip )
    goto LABEL_147;
  v111 = Master_object;
  Master_object = (__int64)UserEquipEntity__getSkillLvList(v110, 0LL);
  if ( !*v136 )
    goto LABEL_147;
  v112 = Master_object;
  SkillLvList = UserEquipEntity__getSkillLvList(*v136, 0LL);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v109 )
    goto LABEL_147;
  if ( *(int *)(v109 + 24) >= 1 )
  {
    v114 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v115 = 0;
    v116 = 0LL;
    v138 = v112 + 32;
    v139 = &SkillLvList->m_Items[1];
    v117 = v111 + 32;
    v137 = this;
    while ( 1 )
    {
      v141 = 0LL;
      if ( !v111 )
        goto LABEL_147;
      if ( v116 >= *(unsigned int *)(v111 + 24) )
        goto LABEL_148;
      if ( !v114 )
        goto LABEL_147;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v114,
                        &v141,
                        *(_DWORD *)(v117 + 4 * v116),
                        (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( v141 && (Master_object & 1) != 0 )
      {
        if ( v116 >= *(unsigned int *)(v109 + 24) || v116 >= *(unsigned int *)(v111 + 24) )
          goto LABEL_148;
        if ( *(_DWORD *)(v109 + 32 + 4 * v116) != *(_DWORD *)(v117 + 4 * v116) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11097/*"RESULT_EQEXP_GETSKILL"*/, 0LL);
          if ( !v141 )
            goto LABEL_147;
          v125 = (System_String_o *)Master_object;
          Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)v141, 0LL);
          Master_object = (__int64)System_String__Format(v125, Name, 0LL);
          if ( !v108 )
            goto LABEL_147;
          Master_object = (__int64)System_Text_StringBuilder__AppendLine_62658668(
                                     v108,
                                     (System_String_o *)Master_object,
                                     0LL);
LABEL_121:
          v115 += 3;
          goto LABEL_122;
        }
        if ( !v112 )
          goto LABEL_147;
        if ( v116 >= *(unsigned int *)(v112 + 24) )
          goto LABEL_148;
        if ( !SkillLvList )
          goto LABEL_147;
        if ( v116 >= SkillLvList->max_length )
          goto LABEL_148;
        if ( *(_DWORD *)(v138 + 4 * v116) != v139[v116] )
        {
          v118 = SkillLvList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v119 = v112;
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11098/*"RESULT_EQEXP_UPSKILLLV"*/, 0LL);
          if ( !v141 )
            goto LABEL_147;
          v120 = (System_String_o *)Master_object;
          Master_object = (__int64)SkillEntity__getName((SkillEntity_o *)v141, 0LL);
          if ( v116 >= v118->max_length )
            goto LABEL_148;
          v123 = (Il2CppObject *)Master_object;
          v140 = v139[v116];
          v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v76, v121, v122);
          Master_object = (__int64)System_String__Format_62613552(v120, v123, v124, 0LL);
          if ( !v108 )
            goto LABEL_147;
          Master_object = (__int64)System_Text_StringBuilder__AppendLine_62658668(
                                     v108,
                                     (System_String_o *)Master_object,
                                     0LL);
          v112 = v119;
          SkillLvList = v118;
          this = v137;
          goto LABEL_121;
        }
      }
LABEL_122:
      if ( (__int64)++v116 >= *(int *)(v109 + 24) )
        goto LABEL_125;
    }
  }
  v115 = 0;
LABEL_125:
  eqConfRoot = this->fields.eqConfRoot;
  if ( !eqConfRoot )
    goto LABEL_147;
  LODWORD(v144.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.eqConfRoot, 0LL);
  v144.fields.y = (float)v115 * 10.0;
  v144.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(eqConfRoot, v144, 0LL);
  Master_object = (__int64)this->fields.eqLevelwindowSprite;
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_height((UIWidget_o *)Master_object, 22 * v115 + 134, 0LL);
  if ( !v108 )
    goto LABEL_147;
  equip_confLabel = this->fields.equip_confLabel;
  Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v108->klass->vtable._3_ToString.method)(
                    v108,
                    v108->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !equip_confLabel )
    goto LABEL_147;
  UILabel__set_text(equip_confLabel, (System_String_o *)Master_object, 0LL);
  v129 = this->fields.oldEquip;
  if ( !v129 || !*v136 )
    goto LABEL_147;
  bestTurnDamage = this->fields.bestTurnDamage;
  oldRecordDamage = this->fields.oldRecordDamage;
  damage_recordLabel = this->fields.damage_recordLabel;
  this->fields.updateFlg |= v129->fields.exp != (*v136)->fields.exp;
  if ( oldRecordDamage >= bestTurnDamage )
  {
    Master_object = (__int64)System_Int64__ToString_64092432(
                               (int64_t)&this->fields.oldRecordDamage,
                               (System_String_o *)StringLiteral_396/*"#,#"*/,
                               0LL);
    if ( damage_recordLabel )
    {
      UILabel__set_text(damage_recordLabel, (System_String_o *)Master_object, 0LL);
      damage_battleLabel = this->fields.damage_battleLabel;
      Master_object = (__int64)System_Int64__ToString_64092432(
                                 (int64_t)&this->fields.bestTurnDamage,
                                 (System_String_o *)StringLiteral_396/*"#,#"*/,
                                 0LL);
      if ( damage_battleLabel )
      {
        UILabel__set_text(damage_battleLabel, (System_String_o *)Master_object, 0LL);
        Master_object = (__int64)this->fields.damage_recordLabel;
        if ( Master_object )
        {
          UIWidget__set_color((UIWidget_o *)Master_object, this->fields.record_intactColor, 0LL);
          Master_object = (__int64)this->fields.damage_battleLabel;
          if ( Master_object )
          {
            UIWidget__set_color((UIWidget_o *)Master_object, this->fields.damage_intactColor, 0LL);
            Master_object = (__int64)this->fields.damage_recordRenewalSp;
            if ( Master_object )
            {
              Master_object = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0LL);
              if ( Master_object )
              {
                v134 = 0;
                goto LABEL_146;
              }
            }
          }
        }
      }
    }
    goto LABEL_147;
  }
  Master_object = (__int64)System_Int64__ToString_64092432(
                             (int64_t)&this->fields.bestTurnDamage,
                             (System_String_o *)StringLiteral_396/*"#,#"*/,
                             0LL);
  if ( !damage_recordLabel )
    goto LABEL_147;
  UILabel__set_text(damage_recordLabel, (System_String_o *)Master_object, 0LL);
  v133 = this->fields.damage_battleLabel;
  Master_object = (__int64)System_Int64__ToString_64092432(
                             (int64_t)&this->fields.bestTurnDamage,
                             (System_String_o *)StringLiteral_396/*"#,#"*/,
                             0LL);
  if ( !v133 )
    goto LABEL_147;
  UILabel__set_text(v133, (System_String_o *)Master_object, 0LL);
  Master_object = (__int64)this->fields.damage_recordLabel;
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_color((UIWidget_o *)Master_object, this->fields.record_renewalColor, 0LL);
  Master_object = (__int64)this->fields.damage_battleLabel;
  if ( !Master_object )
    goto LABEL_147;
  UIWidget__set_color((UIWidget_o *)Master_object, this->fields.damage_renewalColor, 0LL);
  Master_object = (__int64)this->fields.damage_recordRenewalSp;
  if ( !Master_object )
    goto LABEL_147;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_147;
  v134 = 1;
LABEL_146:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v134, 0LL);
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
    sub_1BDBAD4(this, method);
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

  if ( (byte_4B480FA & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleResultExpComponent_checkDamageRecord__, method);
    sub_1BDB878(&Method_BattleResultExpComponent_endOpenDamageRecord__, v3);
    sub_1BDB878(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&SimpleAnimation_State_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_17265/*"bit_result_levelup01"*/, v7);
    sub_1BDB878(&StringLiteral_3529/*"CLOSE"*/, v8);
    byte_4B480FA = 1;
  }
  if ( this->fields.bestTurnDamage < 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3529/*"CLOSE"*/, 0LL);
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
                                  (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
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
          v15 = sub_1C2C00C(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v15)(v12, *(_QWORD *)(v15 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupSimpleAnim;
        if ( myFsm )
        {
          SimpleAnimation__Play_65523240((SimpleAnimation_o *)myFsm, (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_31:
    sub_1BDBAD4(myFsm, method);
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
                                  (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
        myFsm = (PlayMakerFSM_o *)this->fields.damage_LvupAnim;
        if ( myFsm )
        {
          UnityEngine_Animation__Play_70027660(
            (UnityEngine_Animation_o *)myFsm,
            (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_27;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_27:
  damageRecordWindow = this->fields.damageRecordWindow;
  v18 = (BattleWindowComponent_EndCall_o *)sub_1BDBAC4(BattleWindowComponent_EndCall_TypeInfo);
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
    v19 = (_QWORD *)sub_1BDB890(Method_BattleResultExpComponent_checkDamageRecord__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v19, v19[4]);
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
  if ( (byte_4B480F7 & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleResultExpComponent_checkEquipLevelUp__, method);
    sub_1BDB878(&Method_BattleResultExpComponent_endOpenEquipUp__, v3);
    sub_1BDB878(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&SimpleAnimation_State_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_17265/*"bit_result_levelup01"*/, v7);
    this = (BattleResultExpComponent_o *)sub_1BDB878(&StringLiteral_3529/*"CLOSE"*/, v8);
    byte_4B480F7 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3529/*"CLOSE"*/, 0LL);
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
                                             (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
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
          v16 = sub_1C2C00C(this, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(BattleResultExpComponent_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupSimpleAnim;
        if ( this )
        {
          SimpleAnimation__Play_65523240((SimpleAnimation_o *)this, (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/, 0LL);
          goto LABEL_29;
        }
      }
    }
LABEL_33:
    sub_1BDBAD4(this, method);
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
                                             (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
                                             0LL);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
        this = (BattleResultExpComponent_o *)v2->fields.equip_LvupAnim;
        if ( this )
        {
          UnityEngine_Animation__Play_70027660(
            (UnityEngine_Animation_o *)this,
            (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_29;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_29:
  equipupwindow = v2->fields.equipupwindow;
  v19 = (BattleWindowComponent_EndCall_o *)sub_1BDBAC4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v19, (Il2CppObject *)v2, Method_BattleResultExpComponent_endOpenEquipUp__, 0LL);
  if ( !equipupwindow )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))equipupwindow->klass->vtable._10_Open.method)(
    equipupwindow,
    v19,
    equipupwindow->klass->vtable._11_CompOpen.methodPtr);
  v20 = Method_BattleResultExpComponent_checkEquipLevelUp__;
  if ( (*((_BYTE *)Method_BattleResultExpComponent_checkEquipLevelUp__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BDB890(Method_BattleResultExpComponent_checkEquipLevelUp__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v20, v20[4]);
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

  if ( (byte_4B480F3 & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleResultExpComponent_checkMasterLevelUp__, method);
    sub_1BDB878(&Method_BattleResultExpComponent_endOpenMasterUp__, v3);
    sub_1BDB878(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_1BDB878(&SimpleAnimation_State_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_17265/*"bit_result_levelup01"*/, v8);
    sub_1BDB878(&StringLiteral_9261/*"NEXT"*/, v9);
    sub_1BDB878(&iTween_TypeInfo, v10);
    byte_4B480F3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_62320164(gameObject, 0LL);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MeterSePlayer, (System_String_o *)StringLiteral_9261/*"NEXT"*/, 0LL);
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
                                      (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
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
          v22 = sub_1C2C00C(MeterSePlayer, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SePlayer_o *, _QWORD, float))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
        MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupSimpleAnim;
        if ( MeterSePlayer )
        {
          SimpleAnimation__Play_65523240(
            (SimpleAnimation_o *)MeterSePlayer,
            (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
            0LL);
          goto LABEL_33;
        }
      }
    }
LABEL_42:
    sub_1BDBAD4(MeterSePlayer, v13);
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
                                    (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
                                    0LL);
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)MeterSePlayer, 0.0, 0LL);
    MeterSePlayer = (SePlayer_o *)this->fields.mst_LvupAnim;
    if ( !MeterSePlayer )
      goto LABEL_42;
    UnityEngine_Animation__Play_70027660(
      (UnityEngine_Animation_o *)MeterSePlayer,
      (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
      0LL);
  }
LABEL_33:
  masterupwindow = this->fields.masterupwindow;
  v25 = (BattleWindowComponent_EndCall_o *)sub_1BDBAC4(BattleWindowComponent_EndCall_TypeInfo);
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
    v26 = (_QWORD *)sub_1BDB890(Method_BattleResultExpComponent_checkMasterLevelUp__);
  v27 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v26, v26[4]);
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
    MeterSePlayer = (SePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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

  if ( (byte_4B480FD & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StringLiteral_3529/*"CLOSE"*/, v3);
    byte_4B480FD = 1;
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
    sub_1BDBAD4(myFsm, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3529/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultExpComponent__closeDamageRecord(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  Il2CppClass *v5; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4B480FB & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleResultExpComponent_endCloseDamageRecord__, method);
    this = (BattleResultExpComponent_o *)sub_1BDB878(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B480FB = 1;
  }
  klass = v2[2].klass;
  if ( !klass
    || (this = *(BattleResultExpComponent_o **)&klass->_1.this_arg.bits) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        v5 = v2[20].klass,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1BDBAC4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v6, v2, Method_BattleResultExpComponent_endCloseDamageRecord__, 0LL),
        !v5) )
  {
    sub_1BDBAD4(this, method);
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
  if ( (byte_4B480F8 & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleResultExpComponent_endCloseEquipUp__, method);
    this = (BattleResultExpComponent_o *)sub_1BDB878(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B480F8 = 1;
  }
  klass = v2[2].klass;
  if ( !klass
    || (this = *(BattleResultExpComponent_o **)&klass->_1.this_arg.bits) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        monitor = v2[16].monitor,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1BDBAC4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v6, v2, Method_BattleResultExpComponent_endCloseEquipUp__, 0LL),
        !monitor) )
  {
    sub_1BDBAD4(this, method);
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

  if ( (byte_4B480FE & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B480FE = 1;
  }
  knockdownRecordWindow = (UnityEngine_Object_o *)this->fields.knockdownRecordWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(knockdownRecordWindow, 0LL, 0LL) )
  {
    v5 = this->fields.knockdownRecordWindow;
    if ( !v5 )
      sub_1BDBAD4(0LL, v4);
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

  if ( (byte_4B480F5 & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleResultExpComponent_endCloseMasterUp__, method);
    sub_1BDB878(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v5);
    byte_4B480F5 = 1;
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
                                                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
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
    sub_1BDBAD4(effectUIList, method);
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
  v10 = (BattleWindowComponent_EndCall_o *)sub_1BDBAC4(BattleWindowComponent_EndCall_TypeInfo);
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

  if ( (byte_4B480EF & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_5489/*"END_PROC"*/, method);
    byte_4B480EF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BDBAD4(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *damageRecordRoot; // x0

  if ( (byte_4B480FC & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_5489/*"END_PROC"*/, method);
    byte_4B480FC = 1;
  }
  damageRecordRoot = this->fields.damageRecordRoot;
  if ( !damageRecordRoot
    || (UnityEngine_GameObject__SetActive(damageRecordRoot, 0, 0LL),
        (damageRecordRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BDBAD4(damageRecordRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)damageRecordRoot, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipLevelupRoot; // x0

  if ( (byte_4B480F9 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_5489/*"END_PROC"*/, method);
    byte_4B480F9 = 1;
  }
  equipLevelupRoot = this->fields.equipLevelupRoot;
  if ( !equipLevelupRoot
    || (UnityEngine_GameObject__SetActive(equipLevelupRoot, 0, 0LL),
        (equipLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BDBAD4(equipLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)equipLevelupRoot, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultExpComponent__endCloseMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterLevelupRoot; // x0

  if ( (byte_4B480F6 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_5489/*"END_PROC"*/, method);
    byte_4B480F6 = 1;
  }
  masterLevelupRoot = this->fields.masterLevelupRoot;
  if ( !masterLevelupRoot
    || (UnityEngine_GameObject__SetActive(masterLevelupRoot, 0, 0LL),
        (masterLevelupRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BDBAD4(masterLevelupRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)masterLevelupRoot, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
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
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  System_Object_array *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x22
  const MethodInfo *v27; // x3
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x22
  System_Collections_Hashtable_o *v43; // x0
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x0
  float time_exptotal; // [xsp+Ch] [xbp-44h] BYREF
  int v52; // [xsp+18h] [xbp-38h] BYREF
  int v53; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B480F0 & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleResultExpComponent_endMoveFigure__, method);
    sub_1BDB878(&object___TypeInfo, v3);
    sub_1BDB878(&SeManager_TypeInfo, v4);
    sub_1BDB878(&float_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_19705/*"from"*/, v6);
    sub_1BDB878(&StringLiteral_24121/*"time"*/, v7);
    sub_1BDB878(&StringLiteral_22457/*"onupdate"*/, v8);
    sub_1BDB878(&StringLiteral_15170/*"UpdateValue"*/, v9);
    sub_1BDB878(&StringLiteral_24160/*"to"*/, v10);
    sub_1BDB878(&StringLiteral_19460/*"finishUpdateValue"*/, v11);
    sub_1BDB878(&StringLiteral_22449/*"oncomplete"*/, v12);
    sub_1BDB878(&iTween_TypeInfo, v13);
    byte_4B480F0 = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v15 = sub_1BDB920(object___TypeInfo, 10LL);
    if ( !v15 )
      sub_1BDBAD4(0LL, v16);
    v19 = (System_Object_array *)v15;
    v20 = StringLiteral_19705/*"from"*/;
    if ( StringLiteral_19705/*"from"*/ )
    {
      v20 = sub_1BDB9B4(StringLiteral_19705/*"from"*/, v19->obj.klass->_1.element_class);
      if ( !v20 )
        goto LABEL_59;
      v21 = StringLiteral_19705/*"from"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( !v19->max_length )
      goto LABEL_58;
    v19->m_Items[0] = (Il2CppObject *)v21;
    sub_1BDB81C((CGThumbnailListItem_o *)v19->m_Items, v21, v17, v18);
    v53 = 0;
    v20 = j_il2cpp_value_box_0(float_TypeInfo, &v53, v22, v23, v24);
    v26 = (Il2CppObject *)v20;
    if ( !v20 || (v20 = sub_1BDB9B4(v20, v19->obj.klass->_1.element_class)) != 0 )
    {
      if ( v19->max_length <= 1 )
        goto LABEL_58;
      v19->m_Items[1] = v26;
      sub_1BDB81C((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v26, v17, v25);
      v20 = StringLiteral_24160/*"to"*/;
      if ( StringLiteral_24160/*"to"*/ )
      {
        v20 = sub_1BDB9B4(StringLiteral_24160/*"to"*/, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_59;
        v21 = StringLiteral_24160/*"to"*/;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v19->max_length <= 2 )
        goto LABEL_58;
      v19->m_Items[2] = (Il2CppObject *)v21;
      sub_1BDB81C((CGThumbnailListItem_o *)&v19->m_Items[2], v21, v17, v27);
      v52 = 1065353216;
      v20 = j_il2cpp_value_box_0(float_TypeInfo, &v52, v28, v29, v30);
      v32 = (Il2CppObject *)v20;
      if ( !v20 || (v20 = sub_1BDB9B4(v20, v19->obj.klass->_1.element_class)) != 0 )
      {
        if ( v19->max_length <= 3 )
          goto LABEL_58;
        v19->m_Items[3] = v32;
        sub_1BDB81C((CGThumbnailListItem_o *)&v19->m_Items[3], (int32_t)v32, v17, v31);
        v20 = StringLiteral_22457/*"onupdate"*/;
        if ( StringLiteral_22457/*"onupdate"*/ )
        {
          v20 = sub_1BDB9B4(StringLiteral_22457/*"onupdate"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_59;
          v21 = StringLiteral_22457/*"onupdate"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v19->max_length <= 4 )
          goto LABEL_58;
        v19->m_Items[4] = (Il2CppObject *)v21;
        sub_1BDB81C((CGThumbnailListItem_o *)&v19->m_Items[4], v21, v17, v33);
        v20 = StringLiteral_15170/*"UpdateValue"*/;
        if ( StringLiteral_15170/*"UpdateValue"*/ )
        {
          v20 = sub_1BDB9B4(StringLiteral_15170/*"UpdateValue"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_59;
          v21 = StringLiteral_15170/*"UpdateValue"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v19->max_length <= 5 )
          goto LABEL_58;
        v19->m_Items[5] = (Il2CppObject *)v21;
        sub_1BDB81C((CGThumbnailListItem_o *)&v19->m_Items[5], v21, v17, v34);
        v20 = StringLiteral_22449/*"oncomplete"*/;
        if ( StringLiteral_22449/*"oncomplete"*/ )
        {
          v20 = sub_1BDB9B4(StringLiteral_22449/*"oncomplete"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_59;
          v21 = StringLiteral_22449/*"oncomplete"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v19->max_length <= 6 )
          goto LABEL_58;
        v19->m_Items[6] = (Il2CppObject *)v21;
        sub_1BDB81C((CGThumbnailListItem_o *)&v19->m_Items[6], v21, v17, v35);
        v20 = StringLiteral_19460/*"finishUpdateValue"*/;
        if ( StringLiteral_19460/*"finishUpdateValue"*/ )
        {
          v20 = sub_1BDB9B4(StringLiteral_19460/*"finishUpdateValue"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_59;
          v21 = StringLiteral_19460/*"finishUpdateValue"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v19->max_length <= 7 )
          goto LABEL_58;
        v19->m_Items[7] = (Il2CppObject *)v21;
        sub_1BDB81C((CGThumbnailListItem_o *)&v19->m_Items[7], v21, v17, v36);
        v20 = StringLiteral_24121/*"time"*/;
        if ( StringLiteral_24121/*"time"*/ )
        {
          v20 = sub_1BDB9B4(StringLiteral_24121/*"time"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_59;
          v21 = StringLiteral_24121/*"time"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v19->max_length <= 8 )
          goto LABEL_58;
        v19->m_Items[8] = (Il2CppObject *)v21;
        sub_1BDB81C((CGThumbnailListItem_o *)&v19->m_Items[8], v21, v17, v37);
        time_exptotal = this->fields.time_exptotal;
        v20 = j_il2cpp_value_box_0(float_TypeInfo, &time_exptotal, v38, v39, v40);
        v42 = (Il2CppObject *)v20;
        if ( !v20 || (v20 = sub_1BDB9B4(v20, v19->obj.klass->_1.element_class)) != 0 )
        {
          if ( v19->max_length > 9 )
          {
            v19->m_Items[9] = v42;
            sub_1BDB81C((CGThumbnailListItem_o *)&v19->m_Items[9], (int32_t)v42, v17, v41);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v43 = iTween__Hash(v19, 0LL);
            iTween__ValueTo(gameObject, v43, 0LL);
            if ( this->fields.updateFlg )
            {
              v44 = Method_BattleResultExpComponent_endMoveFigure__;
              if ( (*((_BYTE *)Method_BattleResultExpComponent_endMoveFigure__ + 83) & 2) != 0 )
                v44 = (_QWORD *)sub_1BDB890(Method_BattleResultExpComponent_endMoveFigure__);
              v45 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v44, v44[4]);
              if ( !SeManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              CommonSeName = SeManager__GetCommonSeName(15, 0LL);
              v47 = OverwriteAssetSoundName__PlaySe(v45, CommonSeName, 0, 0LL);
              this->fields.MeterSePlayer = v47;
              sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.MeterSePlayer, (int32_t)v47, v48, v49);
            }
            return;
          }
LABEL_58:
          sub_1BDBADC(v20, v21, v17);
        }
      }
    }
LABEL_59:
    v50 = sub_1BDBAF8(v20);
    sub_1BDB9A0(v50, 0LL);
  }
}


void __fastcall BattleResultExpComponent__endOpenDamageRecord(
        BattleResultExpComponent_o *this,
        const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_1BDBAD4(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenEquipUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  struct BattleResultComponent_o *parentComp; // x8

  parentComp = this->fields.parentComp;
  if ( !parentComp || (this = (BattleResultExpComponent_o *)parentComp->fields.obj_fronttouch) == 0LL )
    sub_1BDBAD4(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall BattleResultExpComponent__endOpenMasterUp(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B480F4 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15353/*"WAIT_OPEN"*/, method);
    byte_4B480F4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BDBAD4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15353/*"WAIT_OPEN"*/, 0LL);
}


void __fastcall BattleResultExpComponent__finishUpdateValue(BattleResultExpComponent_o *this, const MethodInfo *method)
{
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B480F1 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9261/*"NEXT"*/, method);
    byte_4B480F1 = 1;
  }
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BDBAD4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9261/*"NEXT"*/, 0LL);
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

  if ( (byte_4B480E8 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&level);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_2857/*"BATTLE_RESULTEXP_EQUIPLV"*/, v6);
    sub_1BDB878(&StringLiteral_25175/*"{0}"*/, v7);
    byte_4B480E8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2857/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v10 = v8;
  v11 = System_String__Equals_62607564(v8, (System_String_o *)StringLiteral_2857/*"BATTLE_RESULTEXP_EQUIPLV"*/, 0LL);
  equip_Lv = this->fields.equip_Lv;
  if ( v11 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
    v17 = (System_String_o *)StringLiteral_25175/*"{0}"*/;
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
    sub_1BDBAD4(v8, v9);
  UILabel__set_text(equip_Lv, v8, 0LL);
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

  if ( (byte_4B480E7 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&level);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_25175/*"{0}"*/, v6);
    sub_1BDB878(&StringLiteral_2862/*"BATTLE_RESULTEXP_MASTERLV"*/, v7);
    byte_4B480E7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2862/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v10 = v8;
  v11 = System_String__Equals_62607564(v8, (System_String_o *)StringLiteral_2862/*"BATTLE_RESULTEXP_MASTERLV"*/, 0LL);
  mst_Lv = this->fields.mst_Lv;
  if ( v11 )
  {
    v18 = level;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
    v17 = (System_String_o *)StringLiteral_25175/*"{0}"*/;
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
    sub_1BDBAD4(v8, v9);
  UILabel__set_text(mst_Lv, v8, 0LL);
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
  if ( (byte_4B480F2 & 1) == 0 )
  {
    this = (BattleResultExpComponent_o *)sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isFinish);
    byte_4B480F2 = 1;
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
  v16 = BattleUtility__LerpDouble((double)oldEquip->fields.exp, (double)newEquip->fields.exp, val, 0LL);
  this = (BattleResultExpComponent_o *)BattleUtility__FloorToInt_45209196(v16, 0LL);
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
  this = (BattleResultExpComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v24, 0LL);
  v22 = v6->fields.newEquip;
  if ( !v22 || (v23 = v6->fields.oldEquip) == 0LL )
LABEL_21:
    sub_1BDBAD4(this, isFinish);
  BattleResultExpComponent__SetEquipExp(v6, (int32_t)this, v22->fields.exp - v23->fields.exp, v18, v23->fields.lv, v21);
}


void __fastcall BattleResultExpComponent___c__DisplayClass62_0___ctor(
        BattleResultExpComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleResultExpComponent___c__DisplayClass62_0___SetResultData_b__0(
        BattleResultExpComponent___c__DisplayClass62_0_o *this,
        float height,
        int32_t baseHeight,
        const MethodInfo *method)
{
  BattleResultExpComponent___c__DisplayClass62_0_o *v6; // x20
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
  struct BattleResultExpComponent_o *_4__this; // x10
  struct UserGameEntity_o *oldGame; // x8
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
  struct BattleResultExpComponent_o *v30; // x10
  struct UserGameEntity_o *v31; // x8
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
  struct BattleResultExpComponent_o *v44; // x10
  struct UserGameEntity_o *v45; // x8
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
  __int64 v79; // x3
  __int64 v80; // x4
  struct BattleResultExpComponent_o *v81; // x8
  struct UILabel_array *lvUpRewardLabelArray; // x8
  struct MasterLvRewardInfo_array *v83; // x9
  MasterLvRewardInfo_o *v84; // x9
  Il2CppObject *v85; // x23
  UILabel_o *v86; // x22
  Il2CppObject *v87; // x0
  struct MasterLvRewardInfo_array *v88; // x8
  int v90; // [xsp+0h] [xbp-80h]
  int32_t num; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B48100 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&baseHeight);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1BDB878(&int_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BDB878(&StringLiteral_2860/*"BATTLE_RESULTEXP_FULLAP"*/, v10);
    sub_1BDB878(&StringLiteral_2859/*"BATTLE_RESULTEXP_FRIENDMAX"*/, v11);
    sub_1BDB878(&StringLiteral_2855/*"BATTLE_RESULTEXP_APMAX"*/, v12);
    sub_1BDB878(&StringLiteral_2861/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/, v13);
    sub_1BDB878(&StringLiteral_2856/*"BATTLE_RESULTEXP_COSTMAX"*/, v14);
    sub_1BDB878(&StringLiteral_1/*""*/, v15);
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)sub_1BDB878(&StringLiteral_25213/*"{0} {1}個"*/, v16);
    byte_4B48100 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_128;
  oldGame = _4__this->fields.oldGame;
  if ( !oldGame )
    goto LABEL_128;
  newGame = _4__this->fields.newGame;
  if ( !newGame )
    goto LABEL_128;
  upParamList = _4__this->fields.upParamList;
  if ( !upParamList )
    goto LABEL_128;
  if ( upParamList->max_length <= 1 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)upParamList->m_Items[1];
  if ( !this )
    goto LABEL_128;
  actMax = oldGame->fields.actMax;
  v22 = newGame->fields.actMax;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
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
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v24->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2855/*"BATTLE_RESULTEXP_APMAX"*/,
      0LL);
    v25 = v6->fields.__4__this;
    if ( !v25 )
      goto LABEL_128;
    v26 = v25->fields.upParamList;
    if ( !v26 )
      goto LABEL_128;
    if ( v26->max_length <= 1 )
      goto LABEL_129;
    v27 = v25->fields.oldGame;
    if ( !v27 )
      goto LABEL_128;
    v28 = v25->fields.newGame;
    if ( !v28 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v26->m_Items[1];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setData(
      (BattleResultMasterUpStatusComponent_o *)this,
      v27->fields.actMax,
      v28->fields.actMax,
      0LL);
    v29 = 1;
  }
  v30 = v6->fields.__4__this;
  if ( !v30 )
    goto LABEL_128;
  v31 = v30->fields.oldGame;
  if ( !v31 )
    goto LABEL_128;
  v32 = v30->fields.newGame;
  if ( !v32 )
    goto LABEL_128;
  v33 = v30->fields.upParamList;
  if ( !v33 )
    goto LABEL_128;
  if ( v33->max_length <= 2 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v33->m_Items[2];
  if ( !this )
    goto LABEL_128;
  costMax = v31->fields.costMax;
  v35 = v32->fields.costMax;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
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
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v37->m_Items[2];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2856/*"BATTLE_RESULTEXP_COSTMAX"*/,
      0LL);
    v38 = v6->fields.__4__this;
    if ( !v38 )
      goto LABEL_128;
    v39 = v38->fields.upParamList;
    if ( !v39 )
      goto LABEL_128;
    if ( v39->max_length <= 2 )
      goto LABEL_129;
    v40 = v38->fields.oldGame;
    if ( !v40 )
      goto LABEL_128;
    v41 = v38->fields.newGame;
    if ( !v41 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v39->m_Items[2];
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
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v43->m_Items[2];
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    v94.fields.y = height - (float)(v29 * baseHeight);
    v94.fields.x = 0.0;
    v94.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v94, 0LL);
    ++v29;
  }
  v44 = v6->fields.__4__this;
  if ( !v44 )
    goto LABEL_128;
  v45 = v44->fields.oldGame;
  if ( !v45 )
    goto LABEL_128;
  v46 = v44->fields.newGame;
  if ( !v46 )
    goto LABEL_128;
  v47 = v44->fields.upParamList;
  if ( !v47 )
    goto LABEL_128;
  if ( v47->max_length <= 3 )
    goto LABEL_129;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v47->m_Items[3];
  if ( !this )
    goto LABEL_128;
  friendKeep = v45->fields.friendKeep;
  v49 = v46->fields.friendKeep;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
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
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v51->m_Items[3];
    if ( !this )
      goto LABEL_128;
    BattleResultMasterUpStatusComponent__setTitle(
      (BattleResultMasterUpStatusComponent_o *)this,
      (System_String_o *)StringLiteral_2859/*"BATTLE_RESULTEXP_FRIENDMAX"*/,
      0LL);
    v52 = v6->fields.__4__this;
    if ( !v52 )
      goto LABEL_128;
    v53 = v52->fields.upParamList;
    if ( !v53 )
      goto LABEL_128;
    if ( v53->max_length <= 3 )
      goto LABEL_129;
    v54 = v52->fields.oldGame;
    if ( !v54 )
      goto LABEL_128;
    v55 = v52->fields.newGame;
    if ( !v55 )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v53->m_Items[3];
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
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v57->m_Items[3];
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_128;
    this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_GameObject__get_transform(
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
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___);
  v58 = v6->fields.__4__this;
  if ( !v58 )
    goto LABEL_128;
  v59 = v58->fields.upParamList;
  if ( !v59 )
    goto LABEL_128;
  if ( v59->max_length <= 4 )
    goto LABEL_129;
  v60 = (EventMaster_o *)this;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v59->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v60 )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)EventMaster__IsBPEnable(v60, 0LL);
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
  v64 = (System_String_o **)&StringLiteral_2861/*"BATTLE_RESULTEXP_FULLAP_FULLBP"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v64 = (System_String_o **)&StringLiteral_2860/*"BATTLE_RESULTEXP_FULLAP"*/;
  BattleResultMasterUpStatusComponent__setTitle(v63, *v64, 0LL);
  v65 = v6->fields.__4__this;
  if ( !v65 || (v66 = v65->fields.upParamList) == 0LL )
LABEL_128:
    sub_1BDBAD4(this, *(_QWORD *)&baseHeight);
  if ( v66->max_length <= 4 )
LABEL_129:
    sub_1BDBADC(this, *(_QWORD *)&baseHeight, method);
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v66->m_Items[4];
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_128;
  v96.fields.y = height - (float)(v29 * baseHeight);
  v96.fields.x = 0.0;
  v96.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v96, 0LL);
  masterLvInfoArray = v6->fields.masterLvInfoArray;
  this = (BattleResultExpComponent___c__DisplayClass62_0_o *)(unsigned int)(v29 + 1);
  if ( masterLvInfoArray )
  {
    v68 = *(_QWORD *)&masterLvInfoArray->max_length;
    if ( (int)v68 <= 2 && (int)v68 >= 1 )
    {
      v90 = v29 + 1;
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
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)lvUpRewardSpArray->m_Items[v69];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)UnityEngine_Transform__get_parent(
                                                                     (UnityEngine_Transform_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        v97.fields.y = height - (float)v70;
        v97.fields.x = -30.0;
        v97.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v97, 0LL);
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
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v75->m_Items[v69];
        if ( !this )
          goto LABEL_128;
        v76 = v74->m_Items[v69];
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)this, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)AtlasManager__SetItem(v76, IconImageId, 0LL);
        countText = (System_String_o *)StringLiteral_1/*""*/;
        nameText = (System_String_o *)StringLiteral_1/*""*/;
        v78 = v6->fields.masterLvInfoArray;
        if ( !v78 )
          goto LABEL_128;
        if ( v69 >= v78->max_length )
          goto LABEL_129;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)v78->m_Items[v69];
        if ( !this )
          goto LABEL_128;
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)MasterLvRewardInfo__getGiftEntity(
                                                                     (MasterLvRewardInfo_o *)this,
                                                                     0LL);
        if ( !this )
          goto LABEL_128;
        GiftEntity__GetInfo((GiftEntity_o *)this, &nameText, &countText, 0LL);
        v81 = v6->fields.__4__this;
        if ( !v81 )
          goto LABEL_128;
        lvUpRewardLabelArray = v81->fields.lvUpRewardLabelArray;
        if ( !lvUpRewardLabelArray )
          goto LABEL_128;
        if ( v69 >= lvUpRewardLabelArray->max_length )
          goto LABEL_129;
        v83 = v6->fields.masterLvInfoArray;
        if ( !v83 )
          goto LABEL_128;
        if ( v69 >= v83->max_length )
          goto LABEL_129;
        v84 = v83->m_Items[v69];
        if ( !v84 )
          goto LABEL_128;
        v85 = (Il2CppObject *)nameText;
        v86 = lvUpRewardLabelArray->m_Items[v69];
        num = v84->fields.num;
        v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, method, v79, v80);
        this = (BattleResultExpComponent___c__DisplayClass62_0_o *)System_String__Format_62613552(
                                                                     (System_String_o *)StringLiteral_25213/*"{0} {1}個"*/,
                                                                     v85,
                                                                     v87,
                                                                     0LL);
        if ( !v86 )
          goto LABEL_128;
        UILabel__set_text(v86, (System_String_o *)this, 0LL);
        v88 = v6->fields.masterLvInfoArray;
        if ( !v88 )
          goto LABEL_128;
        ++v69;
        v70 += baseHeight;
      }
      while ( (signed int)v69 < (signed int)v88->max_length );
      LODWORD(this) = v90 + v69;
    }
  }
  return (int)this;
}