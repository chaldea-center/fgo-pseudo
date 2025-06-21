void __fastcall SelectGrandServantEffectComponent___ctor(
        SelectGrandServantEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SelectGrandServantEffectComponent__Awake(
        SelectGrandServantEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CStateManager_SelectGrandServantEffectComponent__o **p_fsm; // x20
  CStateManager_T__o *v9; // x21
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  CStateManager_T__o *v14; // x21
  Il2CppObject *v15; // x22
  CStateManager_T__o *v16; // x20
  Il2CppObject *v17; // x21
  const MethodInfo *v18; // x2

  if ( (byte_4B172C4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CStateManager_SelectGrandServantEffectComponent___ctor__, method);
    sub_1BCAFF8(&Method_CStateManager_SelectGrandServantEffectComponent__add__, v3);
    sub_1BCAFF8(&CStateManager_SelectGrandServantEffectComponent__TypeInfo, v4);
    sub_1BCAFF8(&SelectGrandServantEffectComponent_StateEnd_TypeInfo, v5);
    sub_1BCAFF8(&SelectGrandServantEffectComponent_StateNone_TypeInfo, v6);
    sub_1BCAFF8(&SelectGrandServantEffectComponent_StatePlay_TypeInfo, v7);
    byte_4B172C4 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v9 = (CStateManager_T__o *)sub_1BCB244(CStateManager_SelectGrandServantEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v9,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3256048 *)Method_CStateManager_SelectGrandServantEffectComponent___ctor__);
    this->fields.fsm = (struct CStateManager_SelectGrandServantEffectComponent__o *)v9;
    sub_1BCAF9C(&this->fields.fsm);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v11 = (Il2CppObject *)sub_1BCB244(SelectGrandServantEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v11, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v11,
      (const MethodInfo_32560F0 *)Method_CStateManager_SelectGrandServantEffectComponent__add__);
    v14 = (CStateManager_T__o *)*p_fsm;
    v15 = (Il2CppObject *)sub_1BCB244(SelectGrandServantEffectComponent_StatePlay_TypeInfo);
    System_Object___ctor(v15, 0LL);
    if ( !v14
      || (CStateManager_object___add(
            v14,
            1,
            (IState_T__o *)v15,
            (const MethodInfo_32560F0 *)Method_CStateManager_SelectGrandServantEffectComponent__add__),
          v16 = (CStateManager_T__o *)*p_fsm,
          v17 = (Il2CppObject *)sub_1BCB244(SelectGrandServantEffectComponent_StateEnd_TypeInfo),
          System_Object___ctor(v17, 0LL),
          !v16) )
    {
LABEL_8:
      sub_1BCB254(v12, v13);
    }
    CStateManager_object___add(
      v16,
      2,
      (IState_T__o *)v17,
      (const MethodInfo_32560F0 *)Method_CStateManager_SelectGrandServantEffectComponent__add__);
    SelectGrandServantEffectComponent__SetState(this, 0, v18);
  }
}


void __fastcall SelectGrandServantEffectComponent__End(
        SelectGrandServantEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct UICharaGraphTexture_o **p_uiCharaGraphBeforeCard; // x20
  UnityEngine_Object_o *uiCharaGraphBeforeCard; // x21
  UnityEngine_Object_o *gameObject; // x21
  struct UICharaGraphTexture_o **p_uiCharaGraphAfterCard; // x20
  UnityEngine_Object_o *uiCharaGraphAfterCard; // x21
  UnityEngine_Object_o *v13; // x21
  AssetData_o *beforeDesignCardAssetData; // x0
  AssetData_o *afterDesignCardAssetData; // x0
  System_String_o *bgmName; // x20

  if ( (byte_4B172C9 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v3);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1BCAFF8(&SoundManager_TypeInfo, v5);
    byte_4B172C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DesignCardManager__ReleaseDesignCard(
    (DesignCardManager_o *)Instance,
    this->fields.beforeClassCardId,
    this->fields.beforeRarity,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DesignCardManager__ReleaseDesignCard(
    (DesignCardManager_o *)Instance,
    this->fields.afterClassCardId,
    this->fields.afterRarity,
    0LL);
  p_uiCharaGraphBeforeCard = &this->fields.uiCharaGraphBeforeCard;
  uiCharaGraphBeforeCard = (UnityEngine_Object_o *)this->fields.uiCharaGraphBeforeCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiCharaGraphBeforeCard, 0LL, 0LL) )
  {
    Instance = (Il2CppObject *)*p_uiCharaGraphBeforeCard;
    if ( !*p_uiCharaGraphBeforeCard )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    *p_uiCharaGraphBeforeCard = 0LL;
    sub_1BCAF9C(&this->fields.uiCharaGraphBeforeCard);
  }
  p_uiCharaGraphAfterCard = &this->fields.uiCharaGraphAfterCard;
  uiCharaGraphAfterCard = (UnityEngine_Object_o *)this->fields.uiCharaGraphAfterCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiCharaGraphAfterCard, 0LL, 0LL) )
  {
    Instance = (Il2CppObject *)*p_uiCharaGraphAfterCard;
    if ( !*p_uiCharaGraphAfterCard )
      goto LABEL_27;
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v13, 0LL);
    *p_uiCharaGraphAfterCard = 0LL;
    sub_1BCAF9C(&this->fields.uiCharaGraphAfterCard);
  }
  beforeDesignCardAssetData = this->fields.beforeDesignCardAssetData;
  if ( beforeDesignCardAssetData )
    AssetData__ReleaseData(beforeDesignCardAssetData, 0LL);
  afterDesignCardAssetData = this->fields.afterDesignCardAssetData;
  if ( afterDesignCardAssetData )
    AssetData__ReleaseData(afterDesignCardAssetData, 0LL);
  bgmName = this->fields.bgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(bgmName, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1BCB254(Instance, v7);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall SelectGrandServantEffectComponent__FinishLoad(
        SelectGrandServantEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Object_o *animation; // x20

  if ( (byte_4B172C8 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B172C8 = 1;
  }
  this->fields.isDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v5);
    byte_4B16191 = 1;
  }
  GameObjectExtensions__SetLocalScale(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.animation;
    if ( gameObject )
    {
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL);
      return;
    }
LABEL_12:
    sub_1BCB254(gameObject, v4);
  }
}


int32_t __fastcall SelectGrandServantEffectComponent__GetState(
        SelectGrandServantEffectComponent_o *this,
        const MethodInfo *method)
{
  SelectGrandServantEffectComponent_o *v2; // x19
  struct CStateManager_SelectGrandServantEffectComponent__o *fsm; // x8

  v2 = this;
  if ( (byte_4B172CB & 1) == 0 )
  {
    this = (SelectGrandServantEffectComponent_o *)sub_1BCAFF8(
                                                    &Method_CStateManager_SelectGrandServantEffectComponent__getState__,
                                                    method);
    byte_4B172CB = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1BCB254(this, method);
  return fsm->fields.m_state;
}


void __fastcall SelectGrandServantEffectComponent__LoadAfterCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.uiCharaGraphBeforeCard = CharaGraphManager__CreateTexturePrefab_39846912(
                                          this->fields.afterCardParentObj,
                                          this->fields.afterUserSvtEntity,
                                          this->fields.limitCount,
                                          13,
                                          callback,
                                          0,
                                          this->fields.afterOverwriteStatus,
                                          0,
                                          0,
                                          0LL);
  sub_1BCAF9C(&this->fields.uiCharaGraphBeforeCard);
}


void __fastcall SelectGrandServantEffectComponent__LoadAfterDesignCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v16; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  System_String_o *GrandDesignCardPath; // x21
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v22; // x8
  AssetLoader_LoadEndDataHandler_o *v23; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B172C7 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, callback);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v11);
    sub_1BCAFF8(&Method_SelectGrandServantEffectComponent___c__DisplayClass31_0__LoadAfterDesignCard_b__0__, v12);
    sub_1BCAFF8(&SelectGrandServantEffectComponent___c__DisplayClass31_0_TypeInfo, v13);
    byte_4B172C7 = 1;
  }
  entity = 0LL;
  v14 = (Il2CppObject *)sub_1BCB244(SelectGrandServantEffectComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_26;
  v14[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v14[1]);
  v14[2].klass = (Il2CppClass *)callback;
  sub_1BCAF9C(&v14[2]);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this->fields.afterUserSvtEntity )
    goto LABEL_26;
  v17 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(
                                                                  this->fields.afterUserSvtEntity,
                                                                  0LL);
  if ( !v17 )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v17,
          &entity,
          (int32_t)Master_object,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.afterUserSvtEntity;
  if ( !Master_object )
    goto LABEL_26;
  this->fields.afterClassCardId = UserServantEntity__getSvtClassId((UserServantEntity_o *)Master_object, 0, 1, 0LL);
  this->fields.afterRarity = 5;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_26;
  GrandDesignCardPath = DesignCardManager__GetGrandDesignCardPath(
                          (DesignCardManager_o *)Master_object,
                          this->fields.afterClassCardId,
                          0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(GrandDesignCardPath, 0LL) )
  {
    this->fields.afterRarity = 3;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_26;
    GrandDesignCardPath = DesignCardManager__GetDesignCardPath(
                            (DesignCardManager_o *)Master_object,
                            this->fields.afterClassCardId,
                            this->fields.afterRarity,
                            0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.releaseAssetPathList;
  if ( !Master_object )
    goto LABEL_26;
  v19 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  v20 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
  if ( !v19 )
    goto LABEL_26;
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v19 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)GrandDesignCardPath,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = v19 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v22 + 32) = GrandDesignCardPath;
    sub_1BCAF9C(v22 + 32);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.afterDesignCardObj;
  if ( !Master_object )
LABEL_26:
    sub_1BCB254(Master_object, v16);
  v14[1].monitor = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)Master_object,
                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  sub_1BCAF9C(&v14[1].monitor);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    v14,
    Method_SelectGrandServantEffectComponent___c__DisplayClass31_0__LoadAfterDesignCard_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(GrandDesignCardPath, v23, 1, 0LL);
}


void __fastcall SelectGrandServantEffectComponent__LoadBeforeCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.uiCharaGraphBeforeCard = CharaGraphManager__CreateTexturePrefab_39846912(
                                          this->fields.beforeCardParentObj,
                                          this->fields.beforeUserSvtEntity,
                                          this->fields.limitCount,
                                          12,
                                          callback,
                                          0,
                                          this->fields.beforeOverwriteStatus,
                                          1,
                                          0,
                                          0LL);
  sub_1BCAF9C(&this->fields.uiCharaGraphBeforeCard);
}


void __fastcall SelectGrandServantEffectComponent__LoadBeforeDesignCard(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  Il2CppObject *v17; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  struct ServantOverwriteStatus_o *beforeOverwriteStatus; // x8
  System_String_o *FrameCardPrefix; // x21
  System_String_o *ExceedFrameCardPath; // x0
  int32_t beforeClassCardId; // w22
  DesignCardManager_o *v27; // x21
  Il2CppObject **p_monitor; // x21
  System_String_o *monitor; // x23
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v33; // x8
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B172C6 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, callback);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v14);
    sub_1BCAFF8(&Method_SelectGrandServantEffectComponent___c__DisplayClass30_0__LoadBeforeDesignCard_b__0__, v15);
    sub_1BCAFF8(&SelectGrandServantEffectComponent___c__DisplayClass30_0_TypeInfo, v16);
    byte_4B172C6 = 1;
  }
  entity = 0LL;
  v17 = (Il2CppObject *)sub_1BCB244(SelectGrandServantEffectComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_40;
  v17[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v17[1]);
  v17[2].monitor = callback;
  sub_1BCAF9C(&v17[2].monitor);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this->fields.beforeUserSvtEntity )
    goto LABEL_40;
  v20 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(
                                                                  this->fields.beforeUserSvtEntity,
                                                                  0LL);
  if ( !v20 )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v20,
          &entity,
          (int32_t)Master_object,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  this->fields.beforeClassCardId = 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !this->fields.beforeUserSvtEntity )
    goto LABEL_40;
  v21 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtClassId(
                                                                  this->fields.beforeUserSvtEntity,
                                                                  0,
                                                                  0,
                                                                  0LL);
  if ( !v21 )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  v21,
                                                                  (int32_t)Master_object,
                                                                  (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !entity )
    goto LABEL_40;
  v22 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__GetOverwriteClassImageId(
                                                                  (ServantEntity_o *)entity,
                                                                  0LL);
  if ( !(_DWORD)Master_object )
  {
    if ( !v22 )
      goto LABEL_40;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LODWORD(v22->fields.list);
  }
  beforeOverwriteStatus = this->fields.beforeOverwriteStatus;
  this->fields.beforeClassCardId = (int)Master_object;
  if ( !beforeOverwriteStatus )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.beforeUserSvtEntity;
  this->fields.beforeRarity = beforeOverwriteStatus->fields._Rarity_k__BackingField;
  if ( !Master_object )
    goto LABEL_40;
  if ( UserServantEntity__isExceeded((UserServantEntity_o *)Master_object, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.beforeUserSvtEntity;
    if ( !Master_object )
      goto LABEL_40;
    FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)Master_object, 0LL);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_40;
    ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                            (DesignCardManager_o *)Master_object,
                            this->fields.beforeClassCardId,
                            FrameCardPrefix,
                            0LL);
  }
  else
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !this->fields.beforeUserSvtEntity )
      goto LABEL_40;
    beforeClassCardId = this->fields.beforeClassCardId;
    v27 = (DesignCardManager_o *)Master_object;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetRarity(
                                                                    this->fields.beforeUserSvtEntity,
                                                                    1,
                                                                    0LL);
    if ( !v27 )
      goto LABEL_40;
    ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(v27, beforeClassCardId, (int32_t)Master_object, 0LL);
  }
  v17[1].monitor = ExceedFrameCardPath;
  p_monitor = (Il2CppObject **)&v17[1].monitor;
  sub_1BCAF9C(&v17[1].monitor);
  monitor = (System_String_o *)v17[1].monitor;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(monitor, 0LL) )
  {
    this->fields.beforeRarity = 3;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_40;
    *p_monitor = (Il2CppObject *)DesignCardManager__GetDesignCardPath(
                                   (DesignCardManager_o *)Master_object,
                                   this->fields.beforeClassCardId,
                                   this->fields.beforeRarity,
                                   0LL);
    sub_1BCAF9C(&v17[1].monitor);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.releaseAssetPathList;
  if ( !Master_object )
    goto LABEL_40;
  v19 = *p_monitor;
  v30 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  v31 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
  if ( !v30 )
    goto LABEL_40;
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v30 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v19,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = v30 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v33 + 32) = v19;
    sub_1BCAF9C(v33 + 32);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.beforeDesignCardObj;
  if ( !Master_object )
LABEL_40:
    sub_1BCB254(Master_object, v19);
  v17[2].klass = (Il2CppClass *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Master_object,
                                  (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  sub_1BCAF9C(&v17[2]);
  v34 = (System_String_o *)v17[1].monitor;
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    v17,
    Method_SelectGrandServantEffectComponent___c__DisplayClass30_0__LoadBeforeDesignCard_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v34, v35, 1, 0LL);
}


void __fastcall SelectGrandServantEffectComponent__Play(
        SelectGrandServantEffectComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  struct System_Action_o **p_endAct; // x0

  this->fields.endAct = end_act;
  p_endAct = &this->fields.endAct;
  *((_BYTE *)p_endAct - 8) = 1;
  sub_1BCAF9C(p_endAct);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectGrandServantEffectComponent__SetState(
        SelectGrandServantEffectComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B172CC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CStateManager_SelectGrandServantEffectComponent__setState__, *(_QWORD *)&state);
    byte_4B172CC = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BCB254(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_325617C *)Method_CStateManager_SelectGrandServantEffectComponent__setState__);
}


void __fastcall SelectGrandServantEffectComponent__Setup(
        SelectGrandServantEffectComponent_o *this,
        UserServantEntity_o *beforeUserServantEntity,
        UserServantEntity_o *afterUserServantEntity,
        int32_t grandGraphId,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  ClassBoardBaseMaster_o *Master_object; // x0
  __int64 v27; // x1
  int32_t BaseIdFromGrandGraphId; // w0
  const MethodInfo *v29; // x1
  int v30; // w20
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_object__o *v32; // x23
  UserServantEntity_o **p_afterUserSvtEntity; // x22
  int32_t v34; // w21
  UserServantEntity_o *beforeUserSvtEntity; // x8
  UISprite_o *grandClassSprite; // x21
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  System_Action_Action__array *v41; // x20
  System_Action_object__o *v42; // x21
  __int64 v43; // x2
  System_Action_object__o *v44; // x21
  System_Action_object__o *v45; // x21
  System_Action_object__o *v46; // x21
  ChainableActionParallel_o *v47; // x21
  System_Action_array *v48; // x20
  System_Action_o *v49; // x22
  int v50; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B172C5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action___TypeInfo, beforeUserServantEntity);
    sub_1BCAFF8(&System_Action_Action____TypeInfo, v9);
    sub_1BCAFF8(&System_Action_Action__TypeInfo, v10);
    sub_1BCAFF8(&System_Action_TypeInfo, v11);
    sub_1BCAFF8(&ChainableActionParallel_TypeInfo, v12);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Animation___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v15);
    sub_1BCAFF8(&DataManager_TypeInfo, v16);
    sub_1BCAFF8(&int_TypeInfo, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v18);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v19);
    sub_1BCAFF8(&Method_SelectGrandServantEffectComponent_FinishLoad__, v20);
    sub_1BCAFF8(&Method_SelectGrandServantEffectComponent_LoadAfterCard__, v21);
    sub_1BCAFF8(&Method_SelectGrandServantEffectComponent_LoadAfterDesignCard__, v22);
    sub_1BCAFF8(&Method_SelectGrandServantEffectComponent_LoadBeforeCard__, v23);
    sub_1BCAFF8(&Method_SelectGrandServantEffectComponent_LoadBeforeDesignCard__, v24);
    sub_1BCAFF8(&StringLiteral_17846/*"class{0}"*/, v25);
    byte_4B172C5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_31;
  BaseIdFromGrandGraphId = ClassBoardBaseMaster__GetBaseIdFromGrandGraphId(Master_object, grandGraphId, 0LL);
  if ( afterUserServantEntity )
  {
    v30 = BaseIdFromGrandGraphId;
    if ( !SelectGrandServantEffectComponent__GetState(this, v29)
      || SelectGrandServantEffectComponent__GetState(this, v31) == 2 )
    {
      v32 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
      this->fields.releaseAssetPathList = (struct System_Collections_Generic_List_string__o *)v32;
      sub_1BCAF9C(&this->fields.releaseAssetPathList);
      *(_WORD *)&this->fields.isPlayReq = 0;
      this->fields.beforeUserSvtEntity = beforeUserServantEntity;
      sub_1BCAF9C(&this->fields.beforeUserSvtEntity);
      this->fields.afterUserSvtEntity = afterUserServantEntity;
      p_afterUserSvtEntity = &this->fields.afterUserSvtEntity;
      sub_1BCAF9C(&this->fields.afterUserSvtEntity);
      Master_object = (ClassBoardBaseMaster_o *)this->fields.afterUserSvtEntity;
      if ( Master_object )
      {
        Master_object = (ClassBoardBaseMaster_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Master_object, 0LL);
        if ( *p_afterUserSvtEntity )
        {
          v34 = (int)Master_object;
          this->fields.limitCount = UserServantEntity__getCardImageLimitCount(*p_afterUserSvtEntity, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( Master_object )
          {
            Master_object = (ClassBoardBaseMaster_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                        (ServantLimitImageMaster_o *)Master_object,
                                                        v34,
                                                        this->fields.limitCount,
                                                        0LL);
            beforeUserSvtEntity = this->fields.beforeUserSvtEntity;
            this->fields.limitCount = (int)Master_object;
            if ( beforeUserSvtEntity )
            {
              this->fields.beforeOverwriteStatus = UserServantEntity__GetOverwriteStatus(beforeUserSvtEntity, 0LL, 0LL);
              sub_1BCAF9C(&this->fields.beforeOverwriteStatus);
              Master_object = (ClassBoardBaseMaster_o *)this->fields.afterUserSvtEntity;
              if ( Master_object )
              {
                this->fields.afterOverwriteStatus = UserServantEntity__GetOverwriteStatus(
                                                      (UserServantEntity_o *)Master_object,
                                                      0LL,
                                                      0LL);
                sub_1BCAF9C(&this->fields.afterOverwriteStatus);
                Master_object = (ClassBoardBaseMaster_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
                if ( Master_object )
                {
                  this->fields.animation = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_object_(
                                                                               (UnityEngine_Component_o *)Master_object,
                                                                               (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Animation___);
                  sub_1BCAF9C(&this->fields.animation);
                  Master_object = (ClassBoardBaseMaster_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
                  if ( Master_object )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
                    grandClassSprite = this->fields.grandClassSprite;
                    v50 = v30;
                    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v37, v38, v39);
                    Master_object = (ClassBoardBaseMaster_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_17846/*"class{0}"*/,
                                                                v40,
                                                                0LL);
                    if ( grandClassSprite )
                    {
                      UISprite__set_spriteName(grandClassSprite, (System_String_o *)Master_object, 0LL);
                      Master_object = (ClassBoardBaseMaster_o *)this->fields.grandClassSprite;
                      if ( Master_object )
                      {
                        (*(void (__fastcall **)(ClassBoardBaseMaster_o *, _QWORD))&Master_object->klass[1]._2.thread_static_fields_offset)(
                          Master_object,
                          *(_QWORD *)&Master_object->klass[1]._2.token);
                        v41 = (System_Action_Action__array *)sub_1BCB0A0(System_Action_Action____TypeInfo, 4LL);
                        v42 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
                        System_Action_object____ctor(
                          v42,
                          (Il2CppObject *)this,
                          Method_SelectGrandServantEffectComponent_LoadBeforeCard__,
                          0LL);
                        if ( v41 )
                        {
                          if ( !v41->max_length )
                            goto LABEL_32;
                          v41->m_Items[0] = (System_Action_Action__o *)v42;
                          sub_1BCAF9C(v41->m_Items);
                          v44 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
                          System_Action_object____ctor(
                            v44,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_LoadAfterCard__,
                            0LL);
                          if ( v41->max_length <= 1 )
                            goto LABEL_32;
                          v41->m_Items[1] = (System_Action_Action__o *)v44;
                          sub_1BCAF9C(&v41->m_Items[1]);
                          v45 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
                          System_Action_object____ctor(
                            v45,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_LoadBeforeDesignCard__,
                            0LL);
                          if ( v41->max_length <= 2 )
                            goto LABEL_32;
                          v41->m_Items[2] = (System_Action_Action__o *)v45;
                          sub_1BCAF9C(&v41->m_Items[2]);
                          v46 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
                          System_Action_object____ctor(
                            v46,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_LoadAfterDesignCard__,
                            0LL);
                          if ( v41->max_length <= 3 )
                            goto LABEL_32;
                          v41->m_Items[3] = (System_Action_Action__o *)v46;
                          sub_1BCAF9C(&v41->m_Items[3]);
                          v47 = (ChainableActionParallel_o *)sub_1BCB244(ChainableActionParallel_TypeInfo);
                          ChainableActionParallel___ctor_48236352(v47, v41, 0LL);
                          v48 = (System_Action_array *)sub_1BCB0A0(System_Action___TypeInfo, 1LL);
                          v49 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                          System_Action___ctor(
                            v49,
                            (Il2CppObject *)this,
                            Method_SelectGrandServantEffectComponent_FinishLoad__,
                            0LL);
                          if ( !v48 )
                            goto LABEL_31;
                          if ( !v48->max_length )
LABEL_32:
                            sub_1BCB25C(Master_object, v27, v43);
                          v48->m_Items[0] = v49;
                          Master_object = (ClassBoardBaseMaster_o *)sub_1BCAF9C(v48->m_Items);
                          if ( v47 )
                          {
                            Master_object = (ClassBoardBaseMaster_o *)ChainableActionBase__Final(
                                                                        (ChainableActionBase_o *)v47,
                                                                        v48,
                                                                        0LL);
                            if ( Master_object )
                            {
                              ChainableActionBase__Execute((ChainableActionBase_o *)Master_object, 0LL);
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
LABEL_31:
      sub_1BCB254(Master_object, v27);
    }
  }
}


void __fastcall SelectGrandServantEffectComponent__Update(
        SelectGrandServantEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CStateManager_T__o *fsm; // x0
  __int64 v11; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  SelectGrandServantEffectComponent___c_c *v14; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__35_0; // x21
  Il2CppObject *v17; // x22
  struct SelectGrandServantEffectComponent___c_StaticFields *static_fields; // x0
  const MethodInfo *v19; // x2

  if ( (byte_4B172CA & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_CStateManager_SelectGrandServantEffectComponent__update__, v4);
    sub_1BCAFF8(&CTouch_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&SoundManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_SelectGrandServantEffectComponent___c__Update_b__35_0__, v8);
    sub_1BCAFF8(&SelectGrandServantEffectComponent___c_TypeInfo, v9);
    byte_4B172CA = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3256158 *)Method_CStateManager_SelectGrandServantEffectComponent__update__);
  if ( this->fields.isPlayReq && this->fields.isDoneLoad )
  {
    this->fields.isPlayReq = 0;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this->fields.bgmName = SoundManager__getBgmName(0LL);
    sub_1BCAF9C(&this->fields.bgmName);
    SoundManager__stopBgm(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    v14 = SelectGrandServantEffectComponent___c_TypeInfo;
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    if ( !SelectGrandServantEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SelectGrandServantEffectComponent___c_TypeInfo);
      v14 = SelectGrandServantEffectComponent___c_TypeInfo;
    }
    _9__35_0 = v14->static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = SelectGrandServantEffectComponent___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v14->static_fields->__9;
      _9__35_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(_9__35_0, v17, Method_SelectGrandServantEffectComponent___c__Update_b__35_0__, 0LL);
      static_fields = SelectGrandServantEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = _9__35_0;
      v14 = (SelectGrandServantEffectComponent___c_c *)sub_1BCAF9C(&static_fields->__9__35_0);
    }
    if ( !Instance )
      sub_1BCB254(v14, v11);
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, _9__35_0, 0LL);
    SelectGrandServantEffectComponent__SetState(this, 1, v19);
  }
}


void __fastcall SelectGrandServantEffectComponent_StateEnd___ctor(
        SelectGrandServantEffectComponent_StateEnd_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectGrandServantEffectComponent_StateEnd__begin(
        SelectGrandServantEffectComponent_StateEnd_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1BCB254(this, 0LL);
  SelectGrandServantEffectComponent__End(that, (const MethodInfo *)that);
}


void __fastcall SelectGrandServantEffectComponent_StateEnd__end(
        SelectGrandServantEffectComponent_StateEnd_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectGrandServantEffectComponent_StateEnd__update(
        SelectGrandServantEffectComponent_StateEnd_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1BCB254(this, 0LL);
  SelectGrandServantEffectComponent__SetState(that, 0, method);
}


void __fastcall SelectGrandServantEffectComponent_StateNone___ctor(
        SelectGrandServantEffectComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectGrandServantEffectComponent_StateNone__begin(
        SelectGrandServantEffectComponent_StateNone_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectGrandServantEffectComponent_StateNone__end(
        SelectGrandServantEffectComponent_StateNone_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectGrandServantEffectComponent_StateNone__update(
        SelectGrandServantEffectComponent_StateNone_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectGrandServantEffectComponent_StatePlay___ctor(
        SelectGrandServantEffectComponent_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectGrandServantEffectComponent_StatePlay__begin(
        SelectGrandServantEffectComponent_StatePlay_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Animation_o *animation; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v10; // x19
  System_String_o *v11; // x0

  if ( (byte_4B172CD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, that);
    byte_4B172CD = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !that )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  if ( !byte_4B16196 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4B16196 = 1;
  }
  GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Instance = (MissionNotifyManager_o *)that->fields.animation;
  if ( !Instance )
    goto LABEL_15;
  Instance = (MissionNotifyManager_o *)UnityEngine_Animation__Play((UnityEngine_Animation_o *)Instance, 0LL);
  animation = that->fields.animation;
  if ( !animation )
    goto LABEL_15;
  Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
  if ( !Instance
    || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL),
        (Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_Item(animation, name, 0LL)) == 0LL)
    || (UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Instance, 0.0, 0LL),
        (v10 = that->fields.animation) == 0LL)
    || (Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(v10, 0LL)) == 0LL
    || (v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL),
        (Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_Item(v10, v11, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_1BCB254(Instance, v5);
  }
  UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Instance, 1.0, 0LL);
}


void __fastcall SelectGrandServantEffectComponent_StatePlay__end(
        SelectGrandServantEffectComponent_StatePlay_o *this,
        SelectGrandServantEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectGrandServantEffectComponent_StatePlay__update(
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

  if ( (byte_4B172CE & 1) == 0 )
  {
    this = (SelectGrandServantEffectComponent_StatePlay_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, that);
    byte_4B172CE = 1;
  }
  if ( !that )
    goto LABEL_16;
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SelectGrandServantEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.animation;
    if ( v5 )
    {
      this = (SelectGrandServantEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.animation,
                                                                0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (SelectGrandServantEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v5, name, 0LL);
        if ( this )
        {
          if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) >= 1.0 )
            goto LABEL_15;
          v8 = that->fields.animation;
          if ( v8 )
          {
            this = (SelectGrandServantEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                      that->fields.animation,
                                                                      0LL);
            if ( this )
            {
              v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              if ( UnityEngine_Animation__IsPlaying(v8, v9, 0LL) )
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
    sub_1BCB254(this, that);
  }
}


void __fastcall SelectGrandServantEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B172CF & 1) == 0 )
  {
    sub_1BCAFF8(&SelectGrandServantEffectComponent___c_TypeInfo, v1);
    byte_4B172CF = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(SelectGrandServantEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SelectGrandServantEffectComponent___c_TypeInfo->static_fields->__9 = (struct SelectGrandServantEffectComponent___c_o *)v2;
  sub_1BCAF9C(SelectGrandServantEffectComponent___c_TypeInfo->static_fields);
}


void __fastcall SelectGrandServantEffectComponent___c___ctor(
        SelectGrandServantEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectGrandServantEffectComponent___c___Update_b__35_0(
        SelectGrandServantEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectGrandServantEffectComponent___c__DisplayClass30_0___ctor(
        SelectGrandServantEffectComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectGrandServantEffectComponent___c__DisplayClass30_0___LoadBeforeDesignCard_b__0(
        SelectGrandServantEffectComponent___c__DisplayClass30_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  DesignCardManager_o *_4__this; // x0
  struct SelectGrandServantEffectComponent_o *v6; // x8

  if ( (byte_4B172D0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4B172D0 = 1;
  }
  _4__this = (DesignCardManager_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this[2].fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)d,
        sub_1BCAF9C(&_4__this[2].fields.m_CancellationTokenSource),
        _4__this = (DesignCardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        (v6 = this->fields.__4__this) == 0LL)
    || !_4__this )
  {
    sub_1BCB254(_4__this, d);
  }
  DesignCardManager__SetupDesignCard_40430980(
    _4__this,
    v6->fields.beforeClassCardId,
    this->fields.filePath,
    this->fields.beforeUiTexture,
    this->fields.callback,
    0LL);
}


void __fastcall SelectGrandServantEffectComponent___c__DisplayClass31_0___ctor(
        SelectGrandServantEffectComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectGrandServantEffectComponent___c__DisplayClass31_0___LoadAfterDesignCard_b__0(
        SelectGrandServantEffectComponent___c__DisplayClass31_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  DesignCardManager_o *_4__this; // x0
  struct SelectGrandServantEffectComponent_o *v6; // x8

  if ( (byte_4B172D1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, d);
    byte_4B172D1 = 1;
  }
  _4__this = (DesignCardManager_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this[2].fields.cardTextureSize = (struct System_Int32_array *)d,
        sub_1BCAF9C(&_4__this[2].fields.cardTextureSize),
        _4__this = (DesignCardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        (v6 = this->fields.__4__this) == 0LL)
    || !_4__this )
  {
    sub_1BCB254(_4__this, d);
  }
  DesignCardManager__SetupDesignCard(
    _4__this,
    v6->fields.afterClassCardId,
    v6->fields.afterRarity,
    this->fields.afterUiTexture,
    this->fields.callback,
    0LL);
}