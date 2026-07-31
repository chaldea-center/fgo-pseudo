void SelectGrandServantEffectComponent___ctor(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SelectGrandServantEffectComponent__Awake(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_SelectGrandServantEffectComponent__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_5933110 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_SelectGrandServantEffectComponent___ctor__);
    sub_21FFC50(&Method_CStateManager_SelectGrandServantEffectComponent__add__);
    sub_21FFC50(&CStateManager_SelectGrandServantEffectComponent__TypeInfo);
    sub_21FFC50(&SelectGrandServantEffectComponent_StateEnd_TypeInfo);
    sub_21FFC50(&SelectGrandServantEffectComponent_StateNone_TypeInfo);
    sub_21FFC50(&SelectGrandServantEffectComponent_StatePlay_TypeInfo);
    byte_5933110 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_SelectGrandServantEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3E505AC *)Method_CStateManager_SelectGrandServantEffectComponent___ctor__);
    this->fields.fsm = (struct CStateManager_SelectGrandServantEffectComponent__o *)v4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v12 = (Il2CppObject *)sub_21FFEBC(SelectGrandServantEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E5065C *)Method_CStateManager_SelectGrandServantEffectComponent__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_21FFEBC(SelectGrandServantEffectComponent_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_3E5065C *)Method_CStateManager_SelectGrandServantEffectComponent__add__),
          v17 = (CStateManager_T__o *)*p_fsm,
          v18 = (Il2CppObject *)sub_21FFEBC(SelectGrandServantEffectComponent_StateEnd_TypeInfo),
          System_Object___ctor(v18, 0),
          !v17) )
    {
LABEL_8:
      sub_21FFECC(v13, v14);
    }
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_3E5065C *)Method_CStateManager_SelectGrandServantEffectComponent__add__);
    SelectGrandServantEffectComponent__SetState(this, 0, v19);
  }
}


void SelectGrandServantEffectComponent__End(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  struct UICharaGraphTexture_o **p_uiCharaGraphBeforeCard; // x20
  UnityEngine_Object_o *uiCharaGraphBeforeCard; // x21
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UICharaGraphTexture_o **p_uiCharaGraphAfterCard; // x20
  UnityEngine_Object_o *uiCharaGraphAfterCard; // x21
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  AssetData_o *beforeDesignCardAssetData; // x0
  AssetData_o *afterDesignCardAssetData; // x0
  System_String_o *bgmName; // x20

  if ( (byte_5933115 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5933115 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DesignCardManager__ReleaseDesignCard(
    (DesignCardManager_o *)Instance,
    this->fields.beforeClassCardId,
    this->fields.beforeRarity,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DesignCardManager__ReleaseDesignCard(
    (DesignCardManager_o *)Instance,
    this->fields.afterClassCardId,
    this->fields.afterRarity,
    0);
  p_uiCharaGraphBeforeCard = &this->fields.uiCharaGraphBeforeCard;
  uiCharaGraphBeforeCard = (UnityEngine_Object_o *)this->fields.uiCharaGraphBeforeCard;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(uiCharaGraphBeforeCard, 0, 0) )
  {
    Instance = (Il2CppObject *)*p_uiCharaGraphBeforeCard;
    if ( !*p_uiCharaGraphBeforeCard )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_uiCharaGraphBeforeCard = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.uiCharaGraphBeforeCard,
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  p_uiCharaGraphAfterCard = &this->fields.uiCharaGraphAfterCard;
  uiCharaGraphAfterCard = (UnityEngine_Object_o *)this->fields.uiCharaGraphAfterCard;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v9);
  if ( UnityEngine_Object__op_Inequality(uiCharaGraphAfterCard, 0, 0) )
  {
    Instance = (Il2CppObject *)*p_uiCharaGraphAfterCard;
    if ( !*p_uiCharaGraphAfterCard )
      goto LABEL_27;
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
    UnityEngine_Object__Destroy_83246496(v24, 0);
    *p_uiCharaGraphAfterCard = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.uiCharaGraphAfterCard,
      0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  beforeDesignCardAssetData = this->fields.beforeDesignCardAssetData;
  if ( beforeDesignCardAssetData )
    AssetData__ReleaseData(beforeDesignCardAssetData, 0);
  afterDesignCardAssetData = this->fields.afterDesignCardAssetData;
  if ( afterDesignCardAssetData )
    AssetData__ReleaseData(afterDesignCardAssetData, 0);
  bgmName = this->fields.bgmName;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4, v21);
  SoundManager__playBgm(bgmName, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_21FFECC(Instance, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void SelectGrandServantEffectComponent__FinishLoad(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *animation; // x20

  if ( (byte_5933114 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933114 = 1;
  }
  this->fields.isDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  GameObjectExtensions__SetLocalScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
    if ( gameObject )
    {
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(gameObject, v4);
  }
}


int32_t SelectGrandServantEffectComponent__GetState(
        SelectGrandServantEffectComponent_o *this,
        const MethodInfo *method)
{
  SelectGrandServantEffectComponent_o *v2; // x19
  struct CStateManager_SelectGrandServantEffectComponent__o *fsm; // x8

  v2 = this;
  if ( (byte_5933117 & 1) == 0 )
  {
    this = (SelectGrandServantEffectComponent_o *)sub_21FFC50(&Method_CStateManager_SelectGrandServantEffectComponent__getState__);
    byte_5933117 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_21FFECC(this, method);
  return fsm->fields.m_state;
}


void SelectGrandServantEffectComponent__LoadAfterCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *TexturePrefab_47594432; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  TexturePrefab_47594432 = CharaGraphManager__CreateTexturePrefab_47594432(
                             this->fields.afterCardParentObj,
                             this->fields.afterUserSvtEntity,
                             this->fields.limitCount,
                             13,
                             callback,
                             0,
                             this->fields.afterOverwriteStatus,
                             0,
                             0,
                             -1,
                             0);
  this->fields.uiCharaGraphBeforeCard = TexturePrefab_47594432;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.uiCharaGraphBeforeCard,
    (int32_t)TexturePrefab_47594432,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void SelectGrandServantEffectComponent__LoadAfterDesignCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UserServantEntity_o *afterUserSvtEntity; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t SvtClassId; // w21
  int32_t ClassBoardBaseId; // w0
  const MethodInfo_476E8C0 *v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  System_String_o *GrandDesignCardPath; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo_476E8C0 *v34; // x0
  int64_t currentCryptoKey; // x8
  _QWORD *v36; // x9
  __int64 hiddenValue_low; // x10
  int64_t v38; // x8
  Il2CppObject *Component_object; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  AssetLoader_LoadEndDataHandler_o *v46; // x19
  __int64 v47; // x1
  __int64 v48; // x2

  if ( (byte_5933113 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_21FFC50(&Method_SelectGrandServantEffectComponent___c__DisplayClass31_0__LoadAfterDesignCard_b__0__);
    sub_21FFC50(&SelectGrandServantEffectComponent___c__DisplayClass31_0_TypeInfo);
    byte_5933113 = 1;
  }
  v5 = sub_21FFEBC(SelectGrandServantEffectComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  afterUserSvtEntity = this->fields.afterUserSvtEntity;
  if ( !afterUserSvtEntity )
    goto LABEL_23;
  SvtClassId = UserServantEntity__getSvtClassId(afterUserSvtEntity, 0, 1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20, v21);
  afterUserSvtEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !afterUserSvtEntity )
    goto LABEL_23;
  ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                       (ClassBoardClassMaster_o *)afterUserSvtEntity,
                       SvtClassId,
                       0);
  v24 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__;
  this->fields.afterClassCardId = ClassBoardBaseId;
  this->fields.afterRarity = 5;
  afterUserSvtEntity = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance(v24);
  if ( !afterUserSvtEntity )
    goto LABEL_23;
  GrandDesignCardPath = DesignCardManager__GetGrandDesignCardPath(
                          (DesignCardManager_o *)afterUserSvtEntity,
                          this->fields.afterClassCardId,
                          0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25, v26);
  if ( !AssetManager__isExistAssetStorage(GrandDesignCardPath, 0) )
  {
    v34 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__;
    this->fields.afterClassCardId = 1;
    this->fields.afterRarity = 3;
    afterUserSvtEntity = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance(v34);
    if ( !afterUserSvtEntity )
      goto LABEL_23;
    GrandDesignCardPath = DesignCardManager__GetDesignCardPath(
                            (DesignCardManager_o *)afterUserSvtEntity,
                            this->fields.afterClassCardId,
                            this->fields.afterRarity,
                            0);
  }
  afterUserSvtEntity = (UserServantEntity_o *)this->fields.releaseAssetPathList;
  if ( !afterUserSvtEntity )
    goto LABEL_23;
  currentCryptoKey = afterUserSvtEntity->fields.id.fields.currentCryptoKey;
  v36 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(afterUserSvtEntity->fields.id.fields.hiddenValue);
  if ( !currentCryptoKey )
    goto LABEL_23;
  hiddenValue_low = SLODWORD(afterUserSvtEntity->fields.id.fields.hiddenValue);
  if ( (unsigned int)hiddenValue_low >= *(_DWORD *)(currentCryptoKey + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)afterUserSvtEntity,
      (Il2CppObject *)GrandDesignCardPath,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = currentCryptoKey + 8 * hiddenValue_low;
    LODWORD(afterUserSvtEntity->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
    *(_QWORD *)(v38 + 32) = GrandDesignCardPath;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v38 + 32),
      (int32_t)GrandDesignCardPath,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  afterUserSvtEntity = (UserServantEntity_o *)this->fields.afterDesignCardObj;
  if ( !afterUserSvtEntity )
LABEL_23:
    sub_21FFECC(afterUserSvtEntity, v7);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)afterUserSvtEntity,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  *(_QWORD *)(v5 + 24) = Component_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Component_object, v40, v41, v42, v43, v44, v45);
  v46 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v46,
    (Il2CppObject *)v5,
    Method_SelectGrandServantEffectComponent___c__DisplayClass31_0__LoadAfterDesignCard_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v47, v48);
  AssetManager__loadAssetStorage(GrandDesignCardPath, v46, 1, 0, 0);
}


void SelectGrandServantEffectComponent__LoadBeforeCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *TexturePrefab_47594432; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  TexturePrefab_47594432 = CharaGraphManager__CreateTexturePrefab_47594432(
                             this->fields.beforeCardParentObj,
                             this->fields.beforeUserSvtEntity,
                             this->fields.limitCount,
                             12,
                             callback,
                             0,
                             this->fields.beforeOverwriteStatus,
                             1,
                             0,
                             -1,
                             0);
  this->fields.uiCharaGraphBeforeCard = TexturePrefab_47594432;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.uiCharaGraphBeforeCard,
    (int32_t)TexturePrefab_47594432,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void SelectGrandServantEffectComponent__LoadBeforeDesignCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  struct ServantOverwriteStatus_o *beforeOverwriteStatus; // x8
  System_String_o *FrameCardPrefix; // x21
  System_String_o *ExceedFrameCardPath; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  DesignCardManager_o *v34; // x21
  int32_t beforeClassCardId; // w22
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject **v38; // x21
  System_String_o *v39; // x22
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *DesignCardPath; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v56; // x8
  Il2CppObject *Component_object; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_String_o *v64; // x19
  AssetLoader_LoadEndDataHandler_o *v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5933112 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_21FFC50(&Method_SelectGrandServantEffectComponent___c__DisplayClass30_0__LoadBeforeDesignCard_b__0__);
    sub_21FFC50(&SelectGrandServantEffectComponent___c__DisplayClass30_0_TypeInfo);
    byte_5933112 = 1;
  }
  entity = 0;
  v5 = sub_21FFEBC(SelectGrandServantEffectComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20, v21);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this->fields.beforeUserSvtEntity )
    goto LABEL_40;
  v22 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetServantId(
                                                                  this->fields.beforeUserSvtEntity,
                                                                  -1,
                                                                  0);
  if ( !v22 )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v22,
          &entity,
          (int32_t)Master_object,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  this->fields.beforeClassCardId = 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !this->fields.beforeUserSvtEntity )
    goto LABEL_40;
  v23 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtClassId(
                                                                  this->fields.beforeUserSvtEntity,
                                                                  0,
                                                                  0,
                                                                  0);
  if ( !v23 )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  v23,
                                                                  (int32_t)Master_object,
                                                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !entity )
    goto LABEL_40;
  v24 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__GetOverwriteClassImageId(
                                                                  (ServantEntity_o *)entity,
                                                                  0);
  if ( !(_DWORD)Master_object )
  {
    if ( !v24 )
      goto LABEL_40;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LODWORD(v24->fields.list);
  }
  beforeOverwriteStatus = this->fields.beforeOverwriteStatus;
  this->fields.beforeClassCardId = (int)Master_object;
  if ( !beforeOverwriteStatus )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.beforeUserSvtEntity;
  this->fields.beforeRarity = beforeOverwriteStatus->fields._Rarity_k__BackingField;
  if ( !Master_object )
    goto LABEL_40;
  if ( UserServantEntity__isExceeded((UserServantEntity_o *)Master_object, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.beforeUserSvtEntity;
    if ( !Master_object )
      goto LABEL_40;
    FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)Master_object, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_40;
    ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                            (DesignCardManager_o *)Master_object,
                            this->fields.beforeClassCardId,
                            FrameCardPrefix,
                            0);
  }
  else
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !this->fields.beforeUserSvtEntity )
      goto LABEL_40;
    v34 = (DesignCardManager_o *)Master_object;
    beforeClassCardId = this->fields.beforeClassCardId;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetRarity(
                                                                    this->fields.beforeUserSvtEntity,
                                                                    1,
                                                                    0);
    if ( !v34 )
      goto LABEL_40;
    ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(v34, beforeClassCardId, (int32_t)Master_object, 0);
  }
  *(_QWORD *)(v5 + 24) = ExceedFrameCardPath;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)ExceedFrameCardPath, v28, v29, v30, v31, v32, v33);
  v38 = (Il2CppObject **)(v5 + 24);
  v39 = *(System_String_o **)(v5 + 24);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36, v37);
  if ( !AssetManager__isExistAssetStorage(v39, 0) )
  {
    this->fields.beforeRarity = 3;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_40;
    DesignCardPath = DesignCardManager__GetDesignCardPath(
                       (DesignCardManager_o *)Master_object,
                       this->fields.beforeClassCardId,
                       this->fields.beforeRarity,
                       0);
    *v38 = (Il2CppObject *)DesignCardPath;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)DesignCardPath, v47, v48, v49, v50, v51, v52);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.releaseAssetPathList;
  if ( !Master_object )
    goto LABEL_40;
  v53 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  v7 = *v38;
  v54 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
  if ( !v53 )
    goto LABEL_40;
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v53 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v7,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = v53 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v56 + 32) = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v56 + 32), (int32_t)v7, v40, v41, v42, v43, v44, v45);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.beforeDesignCardObj;
  if ( !Master_object )
LABEL_40:
    sub_21FFECC(Master_object, v7);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  *(_QWORD *)(v5 + 32) = Component_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)Component_object, v58, v59, v60, v61, v62, v63);
  v64 = *(System_String_o **)(v5 + 24);
  v65 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v65,
    (Il2CppObject *)v5,
    Method_SelectGrandServantEffectComponent___c__DisplayClass30_0__LoadBeforeDesignCard_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v66, v67);
  AssetManager__loadAssetStorage(v64, v65, 1, 0, 0);
}


void SelectGrandServantEffectComponent__Play(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o **p_endAct; // x0

  this->fields.endAct = end_act;
  p_endAct = &this->fields.endAct;
  *((_BYTE *)p_endAct - 8) = 1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_endAct,
    (int32_t)end_act,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void SelectGrandServantEffectComponent__SetState(
        SelectGrandServantEffectComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_5933118 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_SelectGrandServantEffectComponent__setState__);
    byte_5933118 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_21FFECC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_SelectGrandServantEffectComponent__setState__);
}


void SelectGrandServantEffectComponent__Setup(
        SelectGrandServantEffectComponent_o *this,
        UserServantEntity_o *beforeUserServantEntity,
        UserServantEntity_o *afterUserServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UserServantEntity_o **p_afterUserSvtEntity; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  UserServantEntity_o *afterUserSvtEntity; // x0
  int32_t CardImageLimitCountStageSealAfter; // w0
  UserServantEntity_o *beforeUserSvtEntity; // x8
  struct ServantOverwriteStatus_o *OverwriteStatus; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct ServantOverwriteStatus_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int32_t SvtClassId; // w0
  UISprite_o *grandClassSprite; // x20
  Il2CppObject *v55; // x0
  __int64 v56; // x20
  System_Action_object__o *v57; // x21
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_Action_object__o *v64; // x21
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_Action_object__o *v71; // x21
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_Action_object__o *v78; // x21
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  ChainableActionParallel_o *v85; // x21
  __int64 v86; // x20
  System_Action_o *v87; // x22
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  int32_t v94; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5933111 & 1) == 0 )
  {
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ChainableActionParallel_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantEffectComponent_FinishLoad__);
    sub_21FFC50(&Method_SelectGrandServantEffectComponent_LoadAfterCard__);
    sub_21FFC50(&Method_SelectGrandServantEffectComponent_LoadAfterDesignCard__);
    sub_21FFC50(&Method_SelectGrandServantEffectComponent_LoadBeforeCard__);
    sub_21FFC50(&Method_SelectGrandServantEffectComponent_LoadBeforeDesignCard__);
    sub_21FFC50(&StringLiteral_18753/*"class{0}"*/);
    byte_5933111 = 1;
  }
  if ( afterUserServantEntity
    && (!SelectGrandServantEffectComponent__GetState(this, (const MethodInfo *)beforeUserServantEntity)
     || SelectGrandServantEffectComponent__GetState(this, v7) == 2) )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.releaseAssetPathList = (struct System_Collections_Generic_List_string__o *)v8;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.releaseAssetPathList,
      (int32_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    *(_WORD *)&this->fields.isPlayReq = 0;
    this->fields.beforeUserSvtEntity = beforeUserServantEntity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.beforeUserSvtEntity,
      (int32_t)beforeUserServantEntity,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    this->fields.afterUserSvtEntity = afterUserServantEntity;
    p_afterUserSvtEntity = &this->fields.afterUserSvtEntity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.afterUserSvtEntity,
      (int32_t)afterUserServantEntity,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    afterUserSvtEntity = this->fields.afterUserSvtEntity;
    if ( afterUserSvtEntity )
    {
      CardImageLimitCountStageSealAfter = UserServantEntity__GetCardImageLimitCountStageSealAfter(
                                            afterUserSvtEntity,
                                            -1,
                                            0,
                                            0,
                                            0);
      afterUserSvtEntity = (UserServantEntity_o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                                    CardImageLimitCountStageSealAfter,
                                                    0);
      beforeUserSvtEntity = this->fields.beforeUserSvtEntity;
      this->fields.limitCount = (int)afterUserSvtEntity;
      if ( beforeUserSvtEntity )
      {
        OverwriteStatus = UserServantEntity__GetOverwriteStatus(beforeUserSvtEntity, 0, 0);
        this->fields.beforeOverwriteStatus = OverwriteStatus;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.beforeOverwriteStatus,
          (int32_t)OverwriteStatus,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        afterUserSvtEntity = this->fields.afterUserSvtEntity;
        if ( afterUserSvtEntity )
        {
          v39 = UserServantEntity__GetOverwriteStatus(afterUserSvtEntity, 0, 0);
          this->fields.afterOverwriteStatus = v39;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.afterOverwriteStatus,
            (int32_t)v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          afterUserSvtEntity = (UserServantEntity_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
          if ( afterUserSvtEntity )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)afterUserSvtEntity,
                                 (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Animation___);
            this->fields.animation = (struct UnityEngine_Animation_o *)Component_object;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.animation,
              (int32_t)Component_object,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52);
            afterUserSvtEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
            if ( afterUserSvtEntity )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)afterUserSvtEntity, 0, 0);
              afterUserSvtEntity = *p_afterUserSvtEntity;
              if ( *p_afterUserSvtEntity )
              {
                SvtClassId = UserServantEntity__getSvtClassId(afterUserSvtEntity, 1, 0, 0);
                grandClassSprite = this->fields.grandClassSprite;
                v94 = SvtClassId;
                v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v94);
                afterUserSvtEntity = (UserServantEntity_o *)System_String__Format(
                                                              (System_String_o *)StringLiteral_18753/*"class{0}"*/,
                                                              v55,
                                                              0);
                if ( grandClassSprite )
                {
                  UISprite__set_spriteName(grandClassSprite, (System_String_o *)afterUserSvtEntity, 0);
                  afterUserSvtEntity = (UserServantEntity_o *)this->fields.grandClassSprite;
                  if ( afterUserSvtEntity )
                  {
                    ((void (__fastcall *)(UserServantEntity_o *, void *))afterUserSvtEntity->klass[1].vtable._6_getSkillLevelList.method)(
                      afterUserSvtEntity,
                      afterUserSvtEntity->klass[2]._1.image);
                    v56 = sub_21FFD10(System_Action_Action____TypeInfo, 4);
                    v57 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                    System_Action_object____ctor(
                      v57,
                      (Il2CppObject *)this,
                      Method_SelectGrandServantEffectComponent_LoadBeforeCard__,
                      0);
                    if ( v56 )
                    {
                      if ( !*(_DWORD *)(v56 + 24) )
                        goto LABEL_26;
                      *(_QWORD *)(v56 + 32) = v57;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(v56 + 32),
                        (int32_t)v57,
                        v58,
                        v59,
                        v60,
                        v61,
                        v62,
                        v63);
                      v64 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                      System_Action_object____ctor(
                        v64,
                        (Il2CppObject *)this,
                        Method_SelectGrandServantEffectComponent_LoadAfterCard__,
                        0);
                      if ( (*(_DWORD *)(v56 + 24) & 0xFFFFFFFE) == 0 )
                        goto LABEL_26;
                      *(_QWORD *)(v56 + 40) = v64;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(v56 + 40),
                        (int32_t)v64,
                        v65,
                        v66,
                        v67,
                        v68,
                        v69,
                        v70);
                      v71 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                      System_Action_object____ctor(
                        v71,
                        (Il2CppObject *)this,
                        Method_SelectGrandServantEffectComponent_LoadBeforeDesignCard__,
                        0);
                      if ( *(_DWORD *)(v56 + 24) <= 2u )
                        goto LABEL_26;
                      *(_QWORD *)(v56 + 48) = v71;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(v56 + 48),
                        (int32_t)v71,
                        v72,
                        v73,
                        v74,
                        v75,
                        v76,
                        v77);
                      v78 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                      System_Action_object____ctor(
                        v78,
                        (Il2CppObject *)this,
                        Method_SelectGrandServantEffectComponent_LoadAfterDesignCard__,
                        0);
                      if ( (*(_DWORD *)(v56 + 24) & 0xFFFFFFFC) == 0 )
                        goto LABEL_26;
                      *(_QWORD *)(v56 + 56) = v78;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(v56 + 56),
                        (int32_t)v78,
                        v79,
                        v80,
                        v81,
                        v82,
                        v83,
                        v84);
                      v85 = (ChainableActionParallel_o *)sub_21FFEBC(ChainableActionParallel_TypeInfo);
                      ChainableActionParallel___ctor_55903544(v85, (System_Action_Action__array *)v56, 0);
                      v86 = sub_21FFD10(System_Action___TypeInfo, 1);
                      v87 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v87,
                        (Il2CppObject *)this,
                        Method_SelectGrandServantEffectComponent_FinishLoad__,
                        0);
                      if ( !v86 )
                        goto LABEL_25;
                      if ( !*(_DWORD *)(v86 + 24) )
LABEL_26:
                        sub_21FFED4(afterUserSvtEntity);
                      *(_QWORD *)(v86 + 32) = v87;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(v86 + 32),
                        (int32_t)v87,
                        v88,
                        v89,
                        v90,
                        v91,
                        v92,
                        v93);
                      if ( v85 )
                      {
                        afterUserSvtEntity = (UserServantEntity_o *)ChainableActionBase__Final(
                                                                      (ChainableActionBase_o *)v85,
                                                                      (System_Action_array *)v86,
                                                                      0);
                        if ( afterUserSvtEntity )
                        {
                          ChainableActionBase__Execute((ChainableActionBase_o *)afterUserSvtEntity, 0);
                          return;
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
LABEL_25:
    sub_21FFECC(afterUserSvtEntity, v28);
  }
}


void SelectGrandServantEffectComponent__Update(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CStateManager_T__o *fsm; // x0
  struct System_String_o *BgmName; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v17; // x8
  SelectGrandServantEffectComponent___c_c *v18; // x0
  float DEFAULT_FADE_TIME; // s8
  struct SelectGrandServantEffectComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__35_0; // x21
  Il2CppObject *v22; // x22
  struct SelectGrandServantEffectComponent___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x2

  if ( (byte_5933116 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_CStateManager_SelectGrandServantEffectComponent__update__);
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantEffectComponent___c__Update_b__35_0__);
    sub_21FFC50(&SelectGrandServantEffectComponent___c_TypeInfo);
    byte_5933116 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3E506C4 *)Method_CStateManager_SelectGrandServantEffectComponent__update__);
  if ( this->fields.isPlayReq && this->fields.isDoneLoad )
  {
    this->fields.isPlayReq = 0;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4, v5);
    BgmName = SoundManager__getBgmName(0);
    this->fields.bgmName = BgmName;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bgmName, (int32_t)BgmName, v8, v9, v10, v11, v12, v13);
    SoundManager__stopBgm(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v14, v15);
      v17 = AvalonSceneManager_TypeInfo;
    }
    v18 = SelectGrandServantEffectComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
    if ( !*(&SelectGrandServantEffectComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SelectGrandServantEffectComponent___c_TypeInfo, v14, v15);
      v18 = SelectGrandServantEffectComponent___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__35_0 = static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v14, v15);
        static_fields = SelectGrandServantEffectComponent___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__35_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(_9__35_0, v22, Method_SelectGrandServantEffectComponent___c__Update_b__35_0__, 0);
      v23 = SelectGrandServantEffectComponent___c_TypeInfo->static_fields;
      v23->__9__35_0 = _9__35_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__35_0, (int32_t)_9__35_0, v24, v25, v26, v27, v28, v29);
    }
    if ( !Instance )
      sub_21FFECC(v18, v14);
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, _9__35_0, 0);
    SelectGrandServantEffectComponent__SetState(this, 1, v30);
  }
}


void SelectGrandServantEffectComponent_StateEnd___ctor(
        SelectGrandServantEffectComponent_StateEnd_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectGrandServantEffectComponent_StateEnd__begin(
        SelectGrandServantEffectComponent_StateEnd_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_21FFECC(this, 0);
  SelectGrandServantEffectComponent__End(that, (const MethodInfo *)that);
}


void SelectGrandServantEffectComponent_StateEnd__end(
        SelectGrandServantEffectComponent_StateEnd_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SelectGrandServantEffectComponent_StateEnd__update(
        SelectGrandServantEffectComponent_StateEnd_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_21FFECC(this, 0);
  SelectGrandServantEffectComponent__SetState(that, 0, method);
}


void SelectGrandServantEffectComponent_StateNone___ctor(
        SelectGrandServantEffectComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectGrandServantEffectComponent_StateNone__begin(
        SelectGrandServantEffectComponent_StateNone_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SelectGrandServantEffectComponent_StateNone__end(
        SelectGrandServantEffectComponent_StateNone_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SelectGrandServantEffectComponent_StateNone__update(
        SelectGrandServantEffectComponent_StateNone_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SelectGrandServantEffectComponent_StatePlay___ctor(
        SelectGrandServantEffectComponent_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectGrandServantEffectComponent_StatePlay__begin(
        SelectGrandServantEffectComponent_StatePlay_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Animation_o *animation; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v9; // x19
  System_String_o *v10; // x0

  if ( (byte_5933119 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_5933119 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MissionNotifyManager__StartPause(Instance, 0);
  if ( !that )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Instance = (MissionNotifyManager_o *)that->fields.animation;
  if ( !Instance )
    goto LABEL_15;
  Instance = (MissionNotifyManager_o *)UnityEngine_Animation__Play((UnityEngine_Animation_o *)Instance, 0);
  animation = that->fields.animation;
  if ( !animation )
    goto LABEL_15;
  Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
  if ( !Instance
    || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0),
        (Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_Item(animation, name, 0)) == 0)
    || (UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Instance, 0.0, 0),
        (v9 = that->fields.animation) == 0)
    || (Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(v9, 0)) == 0
    || (v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0),
        (Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_Item(v9, v10, 0)) == 0) )
  {
LABEL_15:
    sub_21FFECC(Instance, v5);
  }
  UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Instance, 1.0, 0);
}


void SelectGrandServantEffectComponent_StatePlay__end(
        SelectGrandServantEffectComponent_StatePlay_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SelectGrandServantEffectComponent_StatePlay__update(
        SelectGrandServantEffectComponent_StatePlay_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v5; // x20
  System_String_o *name; // x0
  const MethodInfo *v7; // x2
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0

  if ( (byte_593311A & 1) == 0 )
  {
    this = (SelectGrandServantEffectComponent_StatePlay_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593311A = 1;
  }
  if ( !that )
    goto LABEL_16;
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (SelectGrandServantEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.animation;
    if ( v5 )
    {
      this = (SelectGrandServantEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (SelectGrandServantEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v5, name, 0);
        if ( this )
        {
          if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0) >= 1.0 )
            goto LABEL_15;
          v8 = that->fields.animation;
          if ( v8 )
          {
            this = (SelectGrandServantEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                      that->fields.animation,
                                                                      0);
            if ( this )
            {
              v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
              if ( UnityEngine_Animation__IsPlaying(v8, v9, 0) )
                return;
LABEL_15:
              SelectGrandServantEffectComponent__SetState(that, 2, v7);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_21FFECC(this, that);
  }
}


void SelectGrandServantEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593311B & 1) == 0 )
  {
    sub_21FFC50(&SelectGrandServantEffectComponent___c_TypeInfo);
    byte_593311B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SelectGrandServantEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectGrandServantEffectComponent___c_TypeInfo->static_fields->__9 = (struct SelectGrandServantEffectComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SelectGrandServantEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SelectGrandServantEffectComponent___c___ctor(
        SelectGrandServantEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectGrandServantEffectComponent___c___Update_b__35_0(
        SelectGrandServantEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void SelectGrandServantEffectComponent___c__DisplayClass30_0___ctor(
        SelectGrandServantEffectComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectGrandServantEffectComponent___c__DisplayClass30_0___LoadBeforeDesignCard_b__0(
        SelectGrandServantEffectComponent___c__DisplayClass30_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  char *_4__this; // x0
  struct SelectGrandServantEffectComponent_o *v11; // x8

  if ( (byte_593311C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_593311C = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 15) = d,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(_4__this + 120),
          (int32_t)d,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        _4__this = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        (v11 = this->fields.__4__this) == 0)
    || !_4__this )
  {
    sub_21FFECC(_4__this, d);
  }
  DesignCardManager__SetupDesignCard_48187812(
    (DesignCardManager_o *)_4__this,
    v11->fields.beforeClassCardId,
    this->fields.filePath,
    this->fields.beforeUiTexture,
    this->fields.callback,
    0);
}


void SelectGrandServantEffectComponent___c__DisplayClass31_0___ctor(
        SelectGrandServantEffectComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectGrandServantEffectComponent___c__DisplayClass31_0___LoadAfterDesignCard_b__0(
        SelectGrandServantEffectComponent___c__DisplayClass31_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  char *_4__this; // x0
  struct SelectGrandServantEffectComponent_o *v11; // x8

  if ( (byte_593311D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_593311D = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 16) = d,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(_4__this + 128),
          (int32_t)d,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        _4__this = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        (v11 = this->fields.__4__this) == 0)
    || !_4__this )
  {
    sub_21FFECC(_4__this, d);
  }
  DesignCardManager__SetupDesignCard(
    (DesignCardManager_o *)_4__this,
    v11->fields.afterClassCardId,
    v11->fields.afterRarity,
    this->fields.afterUiTexture,
    this->fields.callback,
    0);
}