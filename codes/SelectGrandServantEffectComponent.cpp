void SelectGrandServantEffectComponent___ctor(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SelectGrandServantEffectComponent__Awake(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_SelectGrandServantEffectComponent__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v6; // x22
  __int64 v7; // x0
  CStateManager_T__o *v8; // x21
  Il2CppObject *v9; // x22
  CStateManager_T__o *v10; // x20
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4C3DC81 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_SelectGrandServantEffectComponent___ctor__);
    sub_1C37058(&Method_CStateManager_SelectGrandServantEffectComponent__add__);
    sub_1C37058(&CStateManager_SelectGrandServantEffectComponent__TypeInfo);
    sub_1C37058(&SelectGrandServantEffectComponent_StateEnd_TypeInfo);
    sub_1C37058(&SelectGrandServantEffectComponent_StateNone_TypeInfo);
    sub_1C37058(&SelectGrandServantEffectComponent_StatePlay_TypeInfo);
    byte_4C3DC81 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C372A4(CStateManager_SelectGrandServantEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_332CF70 *)Method_CStateManager_SelectGrandServantEffectComponent___ctor__);
    this->fields.fsm = (struct CStateManager_SelectGrandServantEffectComponent__o *)v4;
    sub_1C36FFC(&this->fields.fsm, v4);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v6 = (Il2CppObject *)sub_1C372A4(SelectGrandServantEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v6, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v6,
      (const MethodInfo_332D018 *)Method_CStateManager_SelectGrandServantEffectComponent__add__);
    v8 = (CStateManager_T__o *)*p_fsm;
    v9 = (Il2CppObject *)sub_1C372A4(SelectGrandServantEffectComponent_StatePlay_TypeInfo);
    System_Object___ctor(v9, 0);
    if ( !v8
      || (CStateManager_object___add(
            v8,
            1,
            (IState_T__o *)v9,
            (const MethodInfo_332D018 *)Method_CStateManager_SelectGrandServantEffectComponent__add__),
          v10 = (CStateManager_T__o *)*p_fsm,
          v11 = (Il2CppObject *)sub_1C372A4(SelectGrandServantEffectComponent_StateEnd_TypeInfo),
          System_Object___ctor(v11, 0),
          !v10) )
    {
LABEL_8:
      sub_1C372B4(v7);
    }
    CStateManager_object___add(
      v10,
      2,
      (IState_T__o *)v11,
      (const MethodInfo_332D018 *)Method_CStateManager_SelectGrandServantEffectComponent__add__);
    SelectGrandServantEffectComponent__SetState(this, 0, v12);
  }
}


void SelectGrandServantEffectComponent__End(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct UICharaGraphTexture_o **p_uiCharaGraphBeforeCard; // x20
  UnityEngine_Object_o *uiCharaGraphBeforeCard; // x21
  UnityEngine_Object_o *gameObject; // x21
  struct UICharaGraphTexture_o **p_uiCharaGraphAfterCard; // x20
  UnityEngine_Object_o *uiCharaGraphAfterCard; // x21
  UnityEngine_Object_o *v9; // x21
  AssetData_o *beforeDesignCardAssetData; // x0
  AssetData_o *afterDesignCardAssetData; // x0
  System_String_o *bgmName; // x20

  if ( (byte_4C3DC86 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C3DC86 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DesignCardManager__ReleaseDesignCard(
    (DesignCardManager_o *)Instance,
    this->fields.beforeClassCardId,
    this->fields.beforeRarity,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DesignCardManager__ReleaseDesignCard(
    (DesignCardManager_o *)Instance,
    this->fields.afterClassCardId,
    this->fields.afterRarity,
    0);
  p_uiCharaGraphBeforeCard = &this->fields.uiCharaGraphBeforeCard;
  uiCharaGraphBeforeCard = (UnityEngine_Object_o *)this->fields.uiCharaGraphBeforeCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiCharaGraphBeforeCard, 0, 0) )
  {
    Instance = (Il2CppObject *)*p_uiCharaGraphBeforeCard;
    if ( !*p_uiCharaGraphBeforeCard )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
    *p_uiCharaGraphBeforeCard = 0;
    sub_1C36FFC(&this->fields.uiCharaGraphBeforeCard, 0);
  }
  p_uiCharaGraphAfterCard = &this->fields.uiCharaGraphAfterCard;
  uiCharaGraphAfterCard = (UnityEngine_Object_o *)this->fields.uiCharaGraphAfterCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiCharaGraphAfterCard, 0, 0) )
  {
    Instance = (Il2CppObject *)*p_uiCharaGraphAfterCard;
    if ( !*p_uiCharaGraphAfterCard )
      goto LABEL_27;
    v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v9, 0);
    *p_uiCharaGraphAfterCard = 0;
    sub_1C36FFC(&this->fields.uiCharaGraphAfterCard, 0);
  }
  beforeDesignCardAssetData = this->fields.beforeDesignCardAssetData;
  if ( beforeDesignCardAssetData )
    AssetData__ReleaseData(beforeDesignCardAssetData, 0);
  afterDesignCardAssetData = this->fields.afterDesignCardAssetData;
  if ( afterDesignCardAssetData )
    AssetData__ReleaseData(afterDesignCardAssetData, 0);
  bgmName = this->fields.bgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(bgmName, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1C372B4(Instance);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void SelectGrandServantEffectComponent__FinishLoad(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  UnityEngine_Object_o *animation; // x20

  if ( (byte_4C3DC85 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC85 = 1;
  }
  this->fields.isDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  GameObjectExtensions__SetLocalScale(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
    if ( gameObject )
    {
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0);
      return;
    }
LABEL_12:
    sub_1C372B4(gameObject);
  }
}


int32_t SelectGrandServantEffectComponent__GetState(
        SelectGrandServantEffectComponent_o *this,
        const MethodInfo *method)
{
  SelectGrandServantEffectComponent_o *v2; // x19
  struct CStateManager_SelectGrandServantEffectComponent__o *fsm; // x8

  v2 = this;
  if ( (byte_4C3DC88 & 1) == 0 )
  {
    this = (SelectGrandServantEffectComponent_o *)sub_1C37058(&Method_CStateManager_SelectGrandServantEffectComponent__getState__);
    byte_4C3DC88 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C372B4(this);
  return fsm->fields.m_state;
}


void SelectGrandServantEffectComponent__LoadAfterCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *TexturePrefab_40659868; // x0

  TexturePrefab_40659868 = CharaGraphManager__CreateTexturePrefab_40659868(
                             this->fields.afterCardParentObj,
                             this->fields.afterUserSvtEntity,
                             this->fields.limitCount,
                             13,
                             callback,
                             0,
                             this->fields.afterOverwriteStatus,
                             0,
                             0,
                             0);
  this->fields.uiCharaGraphBeforeCard = TexturePrefab_40659868;
  sub_1C36FFC(&this->fields.uiCharaGraphBeforeCard, TexturePrefab_40659868);
}


void SelectGrandServantEffectComponent__LoadAfterDesignCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  int32_t SvtClassId; // w21
  System_String_o *GrandDesignCardPath; // x21
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v13; // x8
  Il2CppObject *Component_object; // x0
  AssetLoader_LoadEndDataHandler_o *v15; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3DC84 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C37058(&Method_SelectGrandServantEffectComponent___c__DisplayClass31_0__LoadAfterDesignCard_b__0__);
    sub_1C37058(&SelectGrandServantEffectComponent___c__DisplayClass31_0_TypeInfo);
    byte_4C3DC84 = 1;
  }
  entity = 0;
  v5 = (Il2CppObject *)sub_1C372A4(SelectGrandServantEffectComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_29;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C36FFC(&v5[1], this);
  v5[2].klass = (Il2CppClass *)callback;
  sub_1C36FFC(&v5[2], callback);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this->fields.afterUserSvtEntity )
    goto LABEL_29;
  v7 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(
                                                                  this->fields.afterUserSvtEntity,
                                                                  0);
  if ( !v7 )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v7,
          &entity,
          (int32_t)Master_object,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.afterUserSvtEntity;
  if ( !Master_object )
    goto LABEL_29;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)Master_object, 0, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_29;
  this->fields.afterClassCardId = ClassBoardClassMaster__GetClassBoardBaseId(
                                    (ClassBoardClassMaster_o *)Master_object,
                                    SvtClassId,
                                    0);
  this->fields.afterRarity = 5;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_29;
  GrandDesignCardPath = DesignCardManager__GetGrandDesignCardPath(
                          (DesignCardManager_o *)Master_object,
                          this->fields.afterClassCardId,
                          0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(GrandDesignCardPath, 0) )
  {
    this->fields.afterClassCardId = 1;
    this->fields.afterRarity = 3;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_29;
    GrandDesignCardPath = DesignCardManager__GetDesignCardPath(
                            (DesignCardManager_o *)Master_object,
                            this->fields.afterClassCardId,
                            this->fields.afterRarity,
                            0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.releaseAssetPathList;
  if ( !Master_object )
    goto LABEL_29;
  v10 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  v11 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
  if ( !v10 )
    goto LABEL_29;
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v10 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)GrandDesignCardPath,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = v10 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v13 + 32) = GrandDesignCardPath;
    sub_1C36FFC(v13 + 32, GrandDesignCardPath);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.afterDesignCardObj;
  if ( !Master_object )
LABEL_29:
    sub_1C372B4(Master_object);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  v5[1].monitor = Component_object;
  sub_1C36FFC(&v5[1].monitor, Component_object);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    v5,
    Method_SelectGrandServantEffectComponent___c__DisplayClass31_0__LoadAfterDesignCard_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(GrandDesignCardPath, v15, 1, 0);
}


void SelectGrandServantEffectComponent__LoadBeforeCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *TexturePrefab_40659868; // x0

  TexturePrefab_40659868 = CharaGraphManager__CreateTexturePrefab_40659868(
                             this->fields.beforeCardParentObj,
                             this->fields.beforeUserSvtEntity,
                             this->fields.limitCount,
                             12,
                             callback,
                             0,
                             this->fields.beforeOverwriteStatus,
                             1,
                             0,
                             0);
  this->fields.uiCharaGraphBeforeCard = TexturePrefab_40659868;
  sub_1C36FFC(&this->fields.uiCharaGraphBeforeCard, TexturePrefab_40659868);
}


void SelectGrandServantEffectComponent__LoadBeforeDesignCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  struct ServantOverwriteStatus_o *beforeOverwriteStatus; // x8
  System_String_o *FrameCardPrefix; // x21
  System_String_o *ExceedFrameCardPath; // x0
  int32_t beforeClassCardId; // w22
  DesignCardManager_o *v14; // x21
  Il2CppObject **p_monitor; // x21
  System_String_o *monitor; // x23
  System_String_o *DesignCardPath; // x0
  Il2CppObject *v18; // x1
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v22; // x8
  Il2CppObject *Component_object; // x0
  System_String_o *v24; // x19
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3DC83 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C37058(&Method_SelectGrandServantEffectComponent___c__DisplayClass30_0__LoadBeforeDesignCard_b__0__);
    sub_1C37058(&SelectGrandServantEffectComponent___c__DisplayClass30_0_TypeInfo);
    byte_4C3DC83 = 1;
  }
  entity = 0;
  v5 = (Il2CppObject *)sub_1C372A4(SelectGrandServantEffectComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_40;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C36FFC(&v5[1], this);
  v5[2].monitor = callback;
  sub_1C36FFC(&v5[2].monitor, callback);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this->fields.beforeUserSvtEntity )
    goto LABEL_40;
  v7 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(
                                                                  this->fields.beforeUserSvtEntity,
                                                                  0);
  if ( !v7 )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v7,
          &entity,
          (int32_t)Master_object,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  this->fields.beforeClassCardId = 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !this->fields.beforeUserSvtEntity )
    goto LABEL_40;
  v8 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtClassId(
                                                                  this->fields.beforeUserSvtEntity,
                                                                  0,
                                                                  0,
                                                                  0);
  if ( !v8 )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  v8,
                                                                  (int32_t)Master_object,
                                                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !entity )
    goto LABEL_40;
  v9 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__GetOverwriteClassImageId(
                                                                  (ServantEntity_o *)entity,
                                                                  0);
  if ( !(_DWORD)Master_object )
  {
    if ( !v9 )
      goto LABEL_40;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LODWORD(v9->fields.list);
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !this->fields.beforeUserSvtEntity )
      goto LABEL_40;
    beforeClassCardId = this->fields.beforeClassCardId;
    v14 = (DesignCardManager_o *)Master_object;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetRarity(
                                                                    this->fields.beforeUserSvtEntity,
                                                                    1,
                                                                    0);
    if ( !v14 )
      goto LABEL_40;
    ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(v14, beforeClassCardId, (int32_t)Master_object, 0);
  }
  v5[1].monitor = ExceedFrameCardPath;
  p_monitor = (Il2CppObject **)&v5[1].monitor;
  sub_1C36FFC(&v5[1].monitor, ExceedFrameCardPath);
  monitor = (System_String_o *)v5[1].monitor;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(monitor, 0) )
  {
    this->fields.beforeRarity = 3;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_40;
    DesignCardPath = DesignCardManager__GetDesignCardPath(
                       (DesignCardManager_o *)Master_object,
                       this->fields.beforeClassCardId,
                       this->fields.beforeRarity,
                       0);
    *p_monitor = (Il2CppObject *)DesignCardPath;
    sub_1C36FFC(&v5[1].monitor, DesignCardPath);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.releaseAssetPathList;
  if ( !Master_object )
    goto LABEL_40;
  v18 = *p_monitor;
  v19 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  v20 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
  if ( !v19 )
    goto LABEL_40;
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v19 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v18,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = v19 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v22 + 32) = v18;
    sub_1C36FFC(v22 + 32, v18);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.beforeDesignCardObj;
  if ( !Master_object )
LABEL_40:
    sub_1C372B4(Master_object);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  v5[2].klass = (Il2CppClass *)Component_object;
  sub_1C36FFC(&v5[2], Component_object);
  v24 = (System_String_o *)v5[1].monitor;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    v5,
    Method_SelectGrandServantEffectComponent___c__DisplayClass30_0__LoadBeforeDesignCard_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v24, v25, 1, 0);
}


void SelectGrandServantEffectComponent__Play(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  struct System_Action_o **p_endAct; // x0

  this->fields.endAct = end_act;
  p_endAct = &this->fields.endAct;
  *((_BYTE *)p_endAct - 8) = 1;
  sub_1C36FFC(p_endAct, end_act);
}


void SelectGrandServantEffectComponent__SetState(
        SelectGrandServantEffectComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C3DC89 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_SelectGrandServantEffectComponent__setState__);
    byte_4C3DC89 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_SelectGrandServantEffectComponent__setState__);
}


void SelectGrandServantEffectComponent__Setup(
        SelectGrandServantEffectComponent_o *this,
        UserServantEntity_o *beforeUserServantEntity,
        UserServantEntity_o *afterUserServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *v8; // x22
  UserServantEntity_o **p_afterUserSvtEntity; // x20
  UserServantEntity_o *afterUserSvtEntity; // x0
  int32_t v11; // w21
  UserServantEntity_o *beforeUserSvtEntity; // x8
  struct ServantOverwriteStatus_o *OverwriteStatus; // x0
  struct ServantOverwriteStatus_o *v14; // x0
  Il2CppObject *Component_object; // x0
  int32_t SvtClassId; // w0
  UISprite_o *grandClassSprite; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  __int64 v25; // x20
  System_Action_object__o *v26; // x21
  System_Action_object__o *v27; // x21
  System_Action_object__o *v28; // x21
  System_Action_object__o *v29; // x21
  ChainableActionParallel_o *v30; // x21
  __int64 v31; // x20
  System_Action_o *v32; // x22
  int32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3DC82 & 1) == 0 )
  {
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ChainableActionParallel_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&Method_SelectGrandServantEffectComponent_FinishLoad__);
    sub_1C37058(&Method_SelectGrandServantEffectComponent_LoadAfterCard__);
    sub_1C37058(&Method_SelectGrandServantEffectComponent_LoadAfterDesignCard__);
    sub_1C37058(&Method_SelectGrandServantEffectComponent_LoadBeforeCard__);
    sub_1C37058(&Method_SelectGrandServantEffectComponent_LoadBeforeDesignCard__);
    sub_1C37058(&StringLiteral_17998/*"class{0}"*/);
    byte_4C3DC82 = 1;
  }
  if ( afterUserServantEntity
    && (!SelectGrandServantEffectComponent__GetState(this, (const MethodInfo *)beforeUserServantEntity)
     || SelectGrandServantEffectComponent__GetState(this, v7) == 2) )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.releaseAssetPathList = (struct System_Collections_Generic_List_string__o *)v8;
    sub_1C36FFC(&this->fields.releaseAssetPathList, v8);
    *(_WORD *)&this->fields.isPlayReq = 0;
    this->fields.beforeUserSvtEntity = beforeUserServantEntity;
    sub_1C36FFC(&this->fields.beforeUserSvtEntity, beforeUserServantEntity);
    this->fields.afterUserSvtEntity = afterUserServantEntity;
    p_afterUserSvtEntity = &this->fields.afterUserSvtEntity;
    sub_1C36FFC(&this->fields.afterUserSvtEntity, afterUserServantEntity);
    afterUserSvtEntity = this->fields.afterUserSvtEntity;
    if ( afterUserSvtEntity )
    {
      afterUserSvtEntity = (UserServantEntity_o *)UserServantEntity__getSvtId(afterUserSvtEntity, 0);
      if ( *p_afterUserSvtEntity )
      {
        v11 = (int)afterUserSvtEntity;
        this->fields.limitCount = UserServantEntity__getCardImageLimitCount(*p_afterUserSvtEntity, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        afterUserSvtEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( afterUserSvtEntity )
        {
          afterUserSvtEntity = (UserServantEntity_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                        (ServantLimitImageMaster_o *)afterUserSvtEntity,
                                                        v11,
                                                        this->fields.limitCount,
                                                        0);
          beforeUserSvtEntity = this->fields.beforeUserSvtEntity;
          this->fields.limitCount = (int)afterUserSvtEntity;
          if ( beforeUserSvtEntity )
          {
            OverwriteStatus = UserServantEntity__GetOverwriteStatus(beforeUserSvtEntity, 0, 0);
            this->fields.beforeOverwriteStatus = OverwriteStatus;
            sub_1C36FFC(&this->fields.beforeOverwriteStatus, OverwriteStatus);
            afterUserSvtEntity = this->fields.afterUserSvtEntity;
            if ( afterUserSvtEntity )
            {
              v14 = UserServantEntity__GetOverwriteStatus(afterUserSvtEntity, 0, 0);
              this->fields.afterOverwriteStatus = v14;
              sub_1C36FFC(&this->fields.afterOverwriteStatus, v14);
              afterUserSvtEntity = (UserServantEntity_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
              if ( afterUserSvtEntity )
              {
                Component_object = UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)afterUserSvtEntity,
                                     (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Animation___);
                this->fields.animation = (struct UnityEngine_Animation_o *)Component_object;
                sub_1C36FFC(&this->fields.animation, Component_object);
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
                    v33 = SvtClassId;
                    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v18, v19, v20, v21, v22, v23);
                    afterUserSvtEntity = (UserServantEntity_o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_17998/*"class{0}"*/,
                                                                  v24,
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
                        v25 = sub_1C37100(System_Action_Action____TypeInfo, 4);
                        v26 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
                        System_Action_object____ctor(
                          v26,
                          (Il2CppObject *)this,
                          Method_SelectGrandServantEffectComponent_LoadBeforeCard__,
                          0);
                        if ( v25 )
                        {
                          if ( !*(_DWORD *)(v25 + 24) )
                            goto LABEL_30;
                          *(_QWORD *)(v25 + 32) = v26;
                          sub_1C36FFC(v25 + 32, v26);
                          v27 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
                          System_Action_object____ctor(
                            v27,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_LoadAfterCard__,
                            0);
                          if ( *(_DWORD *)(v25 + 24) <= 1u )
                            goto LABEL_30;
                          *(_QWORD *)(v25 + 40) = v27;
                          sub_1C36FFC(v25 + 40, v27);
                          v28 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
                          System_Action_object____ctor(
                            v28,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_LoadBeforeDesignCard__,
                            0);
                          if ( *(_DWORD *)(v25 + 24) <= 2u )
                            goto LABEL_30;
                          *(_QWORD *)(v25 + 48) = v28;
                          sub_1C36FFC(v25 + 48, v28);
                          v29 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
                          System_Action_object____ctor(
                            v29,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_LoadAfterDesignCard__,
                            0);
                          if ( *(_DWORD *)(v25 + 24) <= 3u )
                            goto LABEL_30;
                          *(_QWORD *)(v25 + 56) = v29;
                          sub_1C36FFC(v25 + 56, v29);
                          v30 = (ChainableActionParallel_o *)sub_1C372A4(ChainableActionParallel_TypeInfo);
                          ChainableActionParallel___ctor_49042072(v30, (System_Action_Action__array *)v25, 0);
                          v31 = sub_1C37100(System_Action___TypeInfo, 1);
                          v32 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                          System_Action___ctor(
                            v32,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_FinishLoad__,
                            0);
                          if ( !v31 )
                            goto LABEL_29;
                          if ( !*(_DWORD *)(v31 + 24) )
LABEL_30:
                            sub_1C372BC(afterUserSvtEntity);
                          *(_QWORD *)(v31 + 32) = v32;
                          afterUserSvtEntity = (UserServantEntity_o *)sub_1C36FFC(v31 + 32, v32);
                          if ( v30 )
                          {
                            afterUserSvtEntity = (UserServantEntity_o *)ChainableActionBase__Final(
                                                                          (ChainableActionBase_o *)v30,
                                                                          (System_Action_array *)v31,
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
      }
    }
LABEL_29:
    sub_1C372B4(afterUserSvtEntity);
  }
}


void SelectGrandServantEffectComponent__Update(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0
  struct System_String_o *BgmName; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v6; // x8
  SelectGrandServantEffectComponent___c_c *v7; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__35_0; // x21
  Il2CppObject *v10; // x22
  struct SelectGrandServantEffectComponent___c_StaticFields *static_fields; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4C3DC87 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_CStateManager_SelectGrandServantEffectComponent__update__);
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_SelectGrandServantEffectComponent___c__Update_b__35_0__);
    sub_1C37058(&SelectGrandServantEffectComponent___c_TypeInfo);
    byte_4C3DC87 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_332D080 *)Method_CStateManager_SelectGrandServantEffectComponent__update__);
  if ( this->fields.isPlayReq && this->fields.isDoneLoad )
  {
    this->fields.isPlayReq = 0;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    BgmName = SoundManager__getBgmName(0);
    this->fields.bgmName = BgmName;
    sub_1C36FFC(&this->fields.bgmName, BgmName);
    SoundManager__stopBgm(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    v7 = SelectGrandServantEffectComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
    if ( !SelectGrandServantEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SelectGrandServantEffectComponent___c_TypeInfo);
      v7 = SelectGrandServantEffectComponent___c_TypeInfo;
    }
    _9__35_0 = v7->static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = SelectGrandServantEffectComponent___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__35_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(_9__35_0, v10, Method_SelectGrandServantEffectComponent___c__Update_b__35_0__, 0);
      static_fields = SelectGrandServantEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = _9__35_0;
      v7 = (SelectGrandServantEffectComponent___c_c *)sub_1C36FFC(&static_fields->__9__35_0, _9__35_0);
    }
    if ( !Instance )
      sub_1C372B4(v7);
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, _9__35_0, 0);
    SelectGrandServantEffectComponent__SetState(this, 1, v12);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Animation_o *animation; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v8; // x19
  System_String_o *v9; // x0

  if ( (byte_4C3DC8A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3DC8A = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MissionNotifyManager__StartPause(Instance, 0);
  if ( !that )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
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
        (v8 = that->fields.animation) == 0)
    || (Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(v8, 0)) == 0
    || (v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0),
        (Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_Item(v8, v9, 0)) == 0) )
  {
LABEL_15:
    sub_1C372B4(Instance);
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

  if ( (byte_4C3DC8B & 1) == 0 )
  {
    this = (SelectGrandServantEffectComponent_StatePlay_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC8B = 1;
  }
  if ( !that )
    goto LABEL_16;
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C372B4(this);
  }
}


void SelectGrandServantEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3DC8C & 1) == 0 )
  {
    sub_1C37058(&SelectGrandServantEffectComponent___c_TypeInfo);
    byte_4C3DC8C = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SelectGrandServantEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectGrandServantEffectComponent___c_TypeInfo->static_fields->__9 = (struct SelectGrandServantEffectComponent___c_o *)v1;
  sub_1C36FFC(SelectGrandServantEffectComponent___c_TypeInfo->static_fields, v1);
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
  DesignCardManager_o *_4__this; // x0
  struct SelectGrandServantEffectComponent_o *v6; // x8

  if ( (byte_4C3DC8D & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C3DC8D = 1;
  }
  _4__this = (DesignCardManager_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this[2].fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)d,
        sub_1C36FFC(&_4__this[2].fields.m_CancellationTokenSource, d),
        _4__this = (DesignCardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        (v6 = this->fields.__4__this) == 0)
    || !_4__this )
  {
    sub_1C372B4(_4__this);
  }
  DesignCardManager__SetupDesignCard_41251312(
    _4__this,
    v6->fields.beforeClassCardId,
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
  DesignCardManager_o *_4__this; // x0
  struct SelectGrandServantEffectComponent_o *v6; // x8

  if ( (byte_4C3DC8E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4C3DC8E = 1;
  }
  _4__this = (DesignCardManager_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this[2].fields.cardTextureSize = (struct System_Int32_array *)d,
        sub_1C36FFC(&_4__this[2].fields.cardTextureSize, d),
        _4__this = (DesignCardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        (v6 = this->fields.__4__this) == 0)
    || !_4__this )
  {
    sub_1C372B4(_4__this);
  }
  DesignCardManager__SetupDesignCard(
    _4__this,
    v6->fields.afterClassCardId,
    v6->fields.afterRarity,
    this->fields.afterUiTexture,
    this->fields.callback,
    0);
}