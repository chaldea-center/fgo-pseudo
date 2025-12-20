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
  __int64 v8; // x1
  CStateManager_T__o *v9; // x21
  Il2CppObject *v10; // x22
  CStateManager_T__o *v11; // x20
  Il2CppObject *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_4D2739A & 1) == 0 )
  {
    sub_1C94098(&Method_CStateManager_SelectGrandServantEffectComponent___ctor__);
    sub_1C94098(&Method_CStateManager_SelectGrandServantEffectComponent__add__);
    sub_1C94098(&CStateManager_SelectGrandServantEffectComponent__TypeInfo);
    sub_1C94098(&SelectGrandServantEffectComponent_StateEnd_TypeInfo);
    sub_1C94098(&SelectGrandServantEffectComponent_StateNone_TypeInfo);
    sub_1C94098(&SelectGrandServantEffectComponent_StatePlay_TypeInfo);
    byte_4D2739A = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C942E4(CStateManager_SelectGrandServantEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_33E65C4 *)Method_CStateManager_SelectGrandServantEffectComponent___ctor__);
    this->fields.fsm = (struct CStateManager_SelectGrandServantEffectComponent__o *)v4;
    sub_1C9403C(&this->fields.fsm, v4);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v6 = (Il2CppObject *)sub_1C942E4(SelectGrandServantEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v6, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v6,
      (const MethodInfo_33E666C *)Method_CStateManager_SelectGrandServantEffectComponent__add__);
    v9 = (CStateManager_T__o *)*p_fsm;
    v10 = (Il2CppObject *)sub_1C942E4(SelectGrandServantEffectComponent_StatePlay_TypeInfo);
    System_Object___ctor(v10, 0);
    if ( !v9
      || (CStateManager_object___add(
            v9,
            1,
            (IState_T__o *)v10,
            (const MethodInfo_33E666C *)Method_CStateManager_SelectGrandServantEffectComponent__add__),
          v11 = (CStateManager_T__o *)*p_fsm,
          v12 = (Il2CppObject *)sub_1C942E4(SelectGrandServantEffectComponent_StateEnd_TypeInfo),
          System_Object___ctor(v12, 0),
          !v11) )
    {
LABEL_8:
      sub_1C942F0(v7, v8);
    }
    CStateManager_object___add(
      v11,
      2,
      (IState_T__o *)v12,
      (const MethodInfo_33E666C *)Method_CStateManager_SelectGrandServantEffectComponent__add__);
    SelectGrandServantEffectComponent__SetState(this, 0, v13);
  }
}


void SelectGrandServantEffectComponent__End(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct UICharaGraphTexture_o **p_uiCharaGraphBeforeCard; // x20
  UnityEngine_Object_o *uiCharaGraphBeforeCard; // x21
  UnityEngine_Object_o *gameObject; // x21
  struct UICharaGraphTexture_o **p_uiCharaGraphAfterCard; // x20
  UnityEngine_Object_o *uiCharaGraphAfterCard; // x21
  UnityEngine_Object_o *v10; // x21
  AssetData_o *beforeDesignCardAssetData; // x0
  AssetData_o *afterDesignCardAssetData; // x0
  System_String_o *bgmName; // x20

  if ( (byte_4D2739F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2739F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DesignCardManager__ReleaseDesignCard(
    (DesignCardManager_o *)Instance,
    this->fields.beforeClassCardId,
    this->fields.beforeRarity,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
    *p_uiCharaGraphBeforeCard = 0;
    sub_1C9403C(&this->fields.uiCharaGraphBeforeCard, 0);
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
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(v10, 0);
    *p_uiCharaGraphAfterCard = 0;
    sub_1C9403C(&this->fields.uiCharaGraphAfterCard, 0);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1C942F0(Instance, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void SelectGrandServantEffectComponent__FinishLoad(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  UnityEngine_Object_o *animation; // x20

  if ( (byte_4D2739E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2739E = 1;
  }
  this->fields.isDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  GameObjectExtensions__SetLocalScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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
    sub_1C942F0(gameObject, v4);
  }
}


int32_t SelectGrandServantEffectComponent__GetState(
        SelectGrandServantEffectComponent_o *this,
        const MethodInfo *method)
{
  SelectGrandServantEffectComponent_o *v2; // x19
  struct CStateManager_SelectGrandServantEffectComponent__o *fsm; // x8

  v2 = this;
  if ( (byte_4D273A1 & 1) == 0 )
  {
    this = (SelectGrandServantEffectComponent_o *)sub_1C94098(&Method_CStateManager_SelectGrandServantEffectComponent__getState__);
    byte_4D273A1 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C942F0(this, method);
  return fsm->fields.m_state;
}


void SelectGrandServantEffectComponent__LoadAfterCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *TexturePrefab_41410812; // x0

  TexturePrefab_41410812 = CharaGraphManager__CreateTexturePrefab_41410812(
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
  this->fields.uiCharaGraphBeforeCard = TexturePrefab_41410812;
  sub_1C9403C(&this->fields.uiCharaGraphBeforeCard, TexturePrefab_41410812);
}


void SelectGrandServantEffectComponent__LoadAfterDesignCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  int32_t SvtClassId; // w21
  System_String_o *GrandDesignCardPath; // x21
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v14; // x8
  Il2CppObject *Component_object; // x0
  AssetLoader_LoadEndDataHandler_o *v16; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2739D & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C94098(&Method_SelectGrandServantEffectComponent___c__DisplayClass31_0__LoadAfterDesignCard_b__0__);
    sub_1C94098(&SelectGrandServantEffectComponent___c__DisplayClass31_0_TypeInfo);
    byte_4D2739D = 1;
  }
  entity = 0;
  v5 = (Il2CppObject *)sub_1C942E4(SelectGrandServantEffectComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_29;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C9403C(&v5[1], this);
  v5[2].klass = (Il2CppClass *)callback;
  sub_1C9403C(&v5[2], callback);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this->fields.afterUserSvtEntity )
    goto LABEL_29;
  v8 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(
                                                                  this->fields.afterUserSvtEntity,
                                                                  0);
  if ( !v8 )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v8,
          &entity,
          (int32_t)Master_object,
          (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.afterUserSvtEntity;
  if ( !Master_object )
    goto LABEL_29;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)Master_object, 0, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_29;
  this->fields.afterClassCardId = ClassBoardClassMaster__GetClassBoardBaseId(
                                    (ClassBoardClassMaster_o *)Master_object,
                                    SvtClassId,
                                    0);
  this->fields.afterRarity = 5;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
  v11 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
  if ( !v11 )
    goto LABEL_29;
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v11 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)GrandDesignCardPath,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = v11 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v14 + 32) = GrandDesignCardPath;
    sub_1C9403C(v14 + 32, GrandDesignCardPath);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.afterDesignCardObj;
  if ( !Master_object )
LABEL_29:
    sub_1C942F0(Master_object, v7);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  v5[1].monitor = Component_object;
  sub_1C9403C(&v5[1].monitor, Component_object);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    v5,
    Method_SelectGrandServantEffectComponent___c__DisplayClass31_0__LoadAfterDesignCard_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(GrandDesignCardPath, v16, 1, 0);
}


void SelectGrandServantEffectComponent__LoadBeforeCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *TexturePrefab_41410812; // x0

  TexturePrefab_41410812 = CharaGraphManager__CreateTexturePrefab_41410812(
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
  this->fields.uiCharaGraphBeforeCard = TexturePrefab_41410812;
  sub_1C9403C(&this->fields.uiCharaGraphBeforeCard, TexturePrefab_41410812);
}


void SelectGrandServantEffectComponent__LoadBeforeDesignCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  struct ServantOverwriteStatus_o *beforeOverwriteStatus; // x8
  System_String_o *FrameCardPrefix; // x21
  System_String_o *ExceedFrameCardPath; // x0
  int32_t beforeClassCardId; // w22
  DesignCardManager_o *v15; // x21
  Il2CppObject **p_monitor; // x21
  System_String_o *monitor; // x23
  System_String_o *DesignCardPath; // x0
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v22; // x8
  Il2CppObject *Component_object; // x0
  System_String_o *v24; // x19
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2739C & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1C94098(&Method_SelectGrandServantEffectComponent___c__DisplayClass30_0__LoadBeforeDesignCard_b__0__);
    sub_1C94098(&SelectGrandServantEffectComponent___c__DisplayClass30_0_TypeInfo);
    byte_4D2739C = 1;
  }
  entity = 0;
  v5 = (Il2CppObject *)sub_1C942E4(SelectGrandServantEffectComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_40;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C9403C(&v5[1], this);
  v5[2].monitor = callback;
  sub_1C9403C(&v5[2].monitor, callback);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this->fields.beforeUserSvtEntity )
    goto LABEL_40;
  v8 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(
                                                                  this->fields.beforeUserSvtEntity,
                                                                  0);
  if ( !v8 )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v8,
          &entity,
          (int32_t)Master_object,
          (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  this->fields.beforeClassCardId = 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !this->fields.beforeUserSvtEntity )
    goto LABEL_40;
  v9 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtClassId(
                                                                  this->fields.beforeUserSvtEntity,
                                                                  0,
                                                                  0,
                                                                  0);
  if ( !v9 )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  v9,
                                                                  (int32_t)Master_object,
                                                                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !entity )
    goto LABEL_40;
  v10 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__GetOverwriteClassImageId(
                                                                  (ServantEntity_o *)entity,
                                                                  0);
  if ( !(_DWORD)Master_object )
  {
    if ( !v10 )
      goto LABEL_40;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LODWORD(v10->fields.list);
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !this->fields.beforeUserSvtEntity )
      goto LABEL_40;
    beforeClassCardId = this->fields.beforeClassCardId;
    v15 = (DesignCardManager_o *)Master_object;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetRarity(
                                                                    this->fields.beforeUserSvtEntity,
                                                                    1,
                                                                    0);
    if ( !v15 )
      goto LABEL_40;
    ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(v15, beforeClassCardId, (int32_t)Master_object, 0);
  }
  v5[1].monitor = ExceedFrameCardPath;
  p_monitor = (Il2CppObject **)&v5[1].monitor;
  sub_1C9403C(&v5[1].monitor, ExceedFrameCardPath);
  monitor = (System_String_o *)v5[1].monitor;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(monitor, 0) )
  {
    this->fields.beforeRarity = 3;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_40;
    DesignCardPath = DesignCardManager__GetDesignCardPath(
                       (DesignCardManager_o *)Master_object,
                       this->fields.beforeClassCardId,
                       this->fields.beforeRarity,
                       0);
    *p_monitor = (Il2CppObject *)DesignCardPath;
    sub_1C9403C(&v5[1].monitor, DesignCardPath);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.releaseAssetPathList;
  if ( !Master_object )
    goto LABEL_40;
  v7 = *p_monitor;
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
      v7,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = v19 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v22 + 32) = v7;
    sub_1C9403C(v22 + 32, v7);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.beforeDesignCardObj;
  if ( !Master_object )
LABEL_40:
    sub_1C942F0(Master_object, v7);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  v5[2].klass = (Il2CppClass *)Component_object;
  sub_1C9403C(&v5[2], Component_object);
  v24 = (System_String_o *)v5[1].monitor;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  sub_1C9403C(p_endAct, end_act);
}


// local variable allocation has failed, the output may be wrong!
void SelectGrandServantEffectComponent__SetState(
        SelectGrandServantEffectComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4D273A2 & 1) == 0 )
  {
    sub_1C94098(&Method_CStateManager_SelectGrandServantEffectComponent__setState__);
    byte_4D273A2 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C942F0(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_33E66F8 *)Method_CStateManager_SelectGrandServantEffectComponent__setState__);
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
  __int64 v10; // x1
  UserServantEntity_o *afterUserSvtEntity; // x0
  int32_t v12; // w21
  UserServantEntity_o *beforeUserSvtEntity; // x8
  struct ServantOverwriteStatus_o *OverwriteStatus; // x0
  struct ServantOverwriteStatus_o *v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t SvtClassId; // w0
  UISprite_o *grandClassSprite; // x20
  Il2CppObject *v19; // x0
  __int64 v20; // x20
  System_Action_object__o *v21; // x21
  System_Action_object__o *v22; // x21
  System_Action_object__o *v23; // x21
  System_Action_object__o *v24; // x21
  ChainableActionParallel_o *v25; // x21
  __int64 v26; // x20
  System_Action_o *v27; // x22
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2739B & 1) == 0 )
  {
    sub_1C94098(&System_Action___TypeInfo);
    sub_1C94098(&System_Action_Action____TypeInfo);
    sub_1C94098(&System_Action_Action__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ChainableActionParallel_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_SelectGrandServantEffectComponent_FinishLoad__);
    sub_1C94098(&Method_SelectGrandServantEffectComponent_LoadAfterCard__);
    sub_1C94098(&Method_SelectGrandServantEffectComponent_LoadAfterDesignCard__);
    sub_1C94098(&Method_SelectGrandServantEffectComponent_LoadBeforeCard__);
    sub_1C94098(&Method_SelectGrandServantEffectComponent_LoadBeforeDesignCard__);
    sub_1C94098(&StringLiteral_18090/*"class{0}"*/);
    byte_4D2739B = 1;
  }
  if ( afterUserServantEntity
    && (!SelectGrandServantEffectComponent__GetState(this, (const MethodInfo *)beforeUserServantEntity)
     || SelectGrandServantEffectComponent__GetState(this, v7) == 2) )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.releaseAssetPathList = (struct System_Collections_Generic_List_string__o *)v8;
    sub_1C9403C(&this->fields.releaseAssetPathList, v8);
    *(_WORD *)&this->fields.isPlayReq = 0;
    this->fields.beforeUserSvtEntity = beforeUserServantEntity;
    sub_1C9403C(&this->fields.beforeUserSvtEntity, beforeUserServantEntity);
    this->fields.afterUserSvtEntity = afterUserServantEntity;
    p_afterUserSvtEntity = &this->fields.afterUserSvtEntity;
    sub_1C9403C(&this->fields.afterUserSvtEntity, afterUserServantEntity);
    afterUserSvtEntity = this->fields.afterUserSvtEntity;
    if ( afterUserSvtEntity )
    {
      afterUserSvtEntity = (UserServantEntity_o *)UserServantEntity__getSvtId(afterUserSvtEntity, 0);
      if ( *p_afterUserSvtEntity )
      {
        v12 = (int)afterUserSvtEntity;
        this->fields.limitCount = UserServantEntity__getCardImageLimitCount(*p_afterUserSvtEntity, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        afterUserSvtEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( afterUserSvtEntity )
        {
          afterUserSvtEntity = (UserServantEntity_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                        (ServantLimitImageMaster_o *)afterUserSvtEntity,
                                                        v12,
                                                        this->fields.limitCount,
                                                        0);
          beforeUserSvtEntity = this->fields.beforeUserSvtEntity;
          this->fields.limitCount = (int)afterUserSvtEntity;
          if ( beforeUserSvtEntity )
          {
            OverwriteStatus = UserServantEntity__GetOverwriteStatus(beforeUserSvtEntity, 0, 0);
            this->fields.beforeOverwriteStatus = OverwriteStatus;
            sub_1C9403C(&this->fields.beforeOverwriteStatus, OverwriteStatus);
            afterUserSvtEntity = this->fields.afterUserSvtEntity;
            if ( afterUserSvtEntity )
            {
              v15 = UserServantEntity__GetOverwriteStatus(afterUserSvtEntity, 0, 0);
              this->fields.afterOverwriteStatus = v15;
              sub_1C9403C(&this->fields.afterOverwriteStatus, v15);
              afterUserSvtEntity = (UserServantEntity_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
              if ( afterUserSvtEntity )
              {
                Component_object = UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)afterUserSvtEntity,
                                     (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Animation___);
                this->fields.animation = (struct UnityEngine_Animation_o *)Component_object;
                sub_1C9403C(&this->fields.animation, Component_object);
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
                    v28 = SvtClassId;
                    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
                    afterUserSvtEntity = (UserServantEntity_o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_18090/*"class{0}"*/,
                                                                  v19,
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
                        v20 = sub_1C94140(System_Action_Action____TypeInfo, 4);
                        v21 = (System_Action_object__o *)sub_1C942E4(System_Action_Action__TypeInfo);
                        System_Action_object____ctor(
                          v21,
                          (Il2CppObject *)this,
                          Method_SelectGrandServantEffectComponent_LoadBeforeCard__,
                          0);
                        if ( v20 )
                        {
                          if ( !*(_DWORD *)(v20 + 24) )
                            goto LABEL_30;
                          *(_QWORD *)(v20 + 32) = v21;
                          sub_1C9403C(v20 + 32, v21);
                          v22 = (System_Action_object__o *)sub_1C942E4(System_Action_Action__TypeInfo);
                          System_Action_object____ctor(
                            v22,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_LoadAfterCard__,
                            0);
                          if ( *(_DWORD *)(v20 + 24) <= 1u )
                            goto LABEL_30;
                          *(_QWORD *)(v20 + 40) = v22;
                          sub_1C9403C(v20 + 40, v22);
                          v23 = (System_Action_object__o *)sub_1C942E4(System_Action_Action__TypeInfo);
                          System_Action_object____ctor(
                            v23,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_LoadBeforeDesignCard__,
                            0);
                          if ( *(_DWORD *)(v20 + 24) <= 2u )
                            goto LABEL_30;
                          *(_QWORD *)(v20 + 48) = v23;
                          sub_1C9403C(v20 + 48, v23);
                          v24 = (System_Action_object__o *)sub_1C942E4(System_Action_Action__TypeInfo);
                          System_Action_object____ctor(
                            v24,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_LoadAfterDesignCard__,
                            0);
                          if ( *(_DWORD *)(v20 + 24) <= 3u )
                            goto LABEL_30;
                          *(_QWORD *)(v20 + 56) = v24;
                          sub_1C9403C(v20 + 56, v24);
                          v25 = (ChainableActionParallel_o *)sub_1C942E4(ChainableActionParallel_TypeInfo);
                          ChainableActionParallel___ctor_49732720(v25, (System_Action_Action__array *)v20, 0);
                          v26 = sub_1C94140(System_Action___TypeInfo, 1);
                          v27 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
                          System_Action___ctor(
                            v27,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_FinishLoad__,
                            0);
                          if ( !v26 )
                            goto LABEL_29;
                          if ( !*(_DWORD *)(v26 + 24) )
LABEL_30:
                            sub_1C942F8(afterUserSvtEntity);
                          *(_QWORD *)(v26 + 32) = v27;
                          afterUserSvtEntity = (UserServantEntity_o *)sub_1C9403C(v26 + 32, v27);
                          if ( v25 )
                          {
                            afterUserSvtEntity = (UserServantEntity_o *)ChainableActionBase__Final(
                                                                          (ChainableActionBase_o *)v25,
                                                                          (System_Action_array *)v26,
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
    sub_1C942F0(afterUserSvtEntity, v10);
  }
}


void SelectGrandServantEffectComponent__Update(SelectGrandServantEffectComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0
  struct System_String_o *BgmName; // x0
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  SelectGrandServantEffectComponent___c_c *v8; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__35_0; // x21
  Il2CppObject *v11; // x22
  struct SelectGrandServantEffectComponent___c_StaticFields *static_fields; // x0
  const MethodInfo *v13; // x2

  if ( (byte_4D273A0 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_CStateManager_SelectGrandServantEffectComponent__update__);
    sub_1C94098(&CTouch_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&SoundManager_TypeInfo);
    sub_1C94098(&Method_SelectGrandServantEffectComponent___c__Update_b__35_0__);
    sub_1C94098(&SelectGrandServantEffectComponent___c_TypeInfo);
    byte_4D273A0 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_33E66D4 *)Method_CStateManager_SelectGrandServantEffectComponent__update__);
  if ( this->fields.isPlayReq && this->fields.isDoneLoad )
  {
    this->fields.isPlayReq = 0;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    BgmName = SoundManager__getBgmName(0);
    this->fields.bgmName = BgmName;
    sub_1C9403C(&this->fields.bgmName, BgmName);
    SoundManager__stopBgm(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v7 = AvalonSceneManager_TypeInfo;
    }
    v8 = SelectGrandServantEffectComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
    if ( !SelectGrandServantEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SelectGrandServantEffectComponent___c_TypeInfo);
      v8 = SelectGrandServantEffectComponent___c_TypeInfo;
    }
    _9__35_0 = v8->static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = SelectGrandServantEffectComponent___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v8->static_fields->__9;
      _9__35_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(_9__35_0, v11, Method_SelectGrandServantEffectComponent___c__Update_b__35_0__, 0);
      static_fields = SelectGrandServantEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = _9__35_0;
      v8 = (SelectGrandServantEffectComponent___c_c *)sub_1C9403C(&static_fields->__9__35_0, _9__35_0);
    }
    if ( !Instance )
      sub_1C942F0(v8, v5);
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, _9__35_0, 0);
    SelectGrandServantEffectComponent__SetState(this, 1, v13);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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

  if ( (byte_4D273A3 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D273A3 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MissionNotifyManager__StartPause(Instance, 0);
  if ( !that )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  if ( !byte_4D25F1E )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
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
    sub_1C942F0(Instance, v5);
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

  if ( (byte_4D273A4 & 1) == 0 )
  {
    this = (SelectGrandServantEffectComponent_StatePlay_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D273A4 = 1;
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
    sub_1C942F0(this, that);
  }
}


void SelectGrandServantEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D273A5 & 1) == 0 )
  {
    sub_1C94098(&SelectGrandServantEffectComponent___c_TypeInfo);
    byte_4D273A5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(SelectGrandServantEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectGrandServantEffectComponent___c_TypeInfo->static_fields->__9 = (struct SelectGrandServantEffectComponent___c_o *)v1;
  sub_1C9403C(SelectGrandServantEffectComponent___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4D273A6 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4D273A6 = 1;
  }
  _4__this = (DesignCardManager_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this[2].fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)d,
        sub_1C9403C(&_4__this[2].fields.m_CancellationTokenSource, d),
        _4__this = (DesignCardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        (v6 = this->fields.__4__this) == 0)
    || !_4__this )
  {
    sub_1C942F0(_4__this, d);
  }
  DesignCardManager__SetupDesignCard_42009580(
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

  if ( (byte_4D273A7 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    byte_4D273A7 = 1;
  }
  _4__this = (DesignCardManager_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this[2].fields.cardTextureSize = (struct System_Int32_array *)d,
        sub_1C9403C(&_4__this[2].fields.cardTextureSize, d),
        _4__this = (DesignCardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        (v6 = this->fields.__4__this) == 0)
    || !_4__this )
  {
    sub_1C942F0(_4__this, d);
  }
  DesignCardManager__SetupDesignCard(
    _4__this,
    v6->fields.afterClassCardId,
    v6->fields.afterRarity,
    this->fields.afterUiTexture,
    this->fields.callback,
    0);
}